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
ATerm term_x_31;
ATerm term_r_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_k_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_x_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_i_25;
ATerm term_s_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_q_23;
ATerm term_y_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_f_13;
ATerm term_o_11;
ATerm term_m_7;
ATerm term_e_7;
void init_constant_terms (void)
{
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_q_23);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_23);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_g_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_g_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_g_27);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__3, term_c_30, term_d_30, (ATerm) ATempty);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm e_90 (ATerm));
ATerm Scope_2 (ATerm, ATerm b_93 (ATerm), ATerm c_93 (ATerm));
ATerm tboundin_3 (ATerm, ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm));
ATerm crush_3 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm));
ATerm free_vars_3 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_116 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm k_112 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm o_119 (ATerm), ATerm p_119 (ATerm));
ATerm alltd_1 (ATerm, ATerm o_118 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_119 (ATerm), ATerm r_119 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_119 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_103 (ATerm), ATerm r_103 (ATerm));
ATerm for_3 (ATerm, ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm));
ATerm HdMember_1 (ATerm, ATerm l_109 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm a_118 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm));
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
ATerm Optimize_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm z_102 (ATerm), ATerm a_103 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_103 (ATerm));
ATerm downup_1 (ATerm, ATerm m_116 (ATerm));
ATerm simplify_widen_0 (ATerm);
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
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, a_0);
  return(t);
}
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
            ATerm l_5 = t;
            int m_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(m_5);
              }
            else
              {
                t = l_5;
                {
                  ATerm n_5 = t;
                  int o_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_5;
                      t_5 = t;
                      {
                        ATerm b_0 (ATerm t)
                        {
                          t = not_null(m_4);
                          return(t);
                        }
                        t = HdMember_1(t, b_0);
                      }
                      t = t_5;
                      t = Cons_2(t, _id, q_4);
                      LocalPopChoice(o_5);
                    }
                  else
                    {
                      t = n_5;
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
ATerm DynamicRules_1 (ATerm t, ATerm e_90 (ATerm))
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
            t = e_90(t);
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
ATerm Scope_2 (ATerm t, ATerm b_93 (ATerm), ATerm c_93 (ATerm))
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
            t = b_93(t);
            {
              y_5 = t;
              {
                t = not_null(s_5);
                {
                  ATerm c_6 = NULL;
                  t = c_93(t);
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
ATerm tboundin_3 (ATerm t, ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm))
{
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, j_120, h_120);
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      t = DynamicRules_1(t, h_120);
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
            ATerm z_5 = t;
            int b_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_7);
                LocalPopChoice(b_6);
              }
            else
              {
                t = z_5;
                {
                  ATerm e_6 = t;
                  int f_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_0 (ATerm t)
                      {
                        t = not_null(q_7);
                        return(t);
                      }
                      t = HdMember_1(t, e_0);
                      t = u_7(t);
                      LocalPopChoice(f_6);
                    }
                  else
                    {
                      t = e_6;
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
ATerm foldr_3 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm))
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_108(t);
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
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
              ATerm i_6;
              i_6 = t;
              {
                ATerm f_8 = NULL;
                t = not_null(a_8);
                {
                  t = j_108(t);
                  {
                    f_8 = t;
                    if(((e_8 != NULL) && (e_8 != f_8)))
                      _fail(f_8);
                    else
                      e_8 = f_8;
                  }
                }
              }
              t = i_6;
              {
                ATerm h_8 = NULL;
                t = not_null(b_8);
                {
                  t = foldr_3(t, h_108, i_108, j_108);
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
      t = foldr_3(t, w_109, x_109, y_109);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_9 (ATerm t)
  {
    ATerm j_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        LocalPopChoice(n_6);
      }
    else
      {
        t = j_6;
        {
          ATerm o_6 = t;
          int p_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_9 = NULL;
              ATerm q_6;
              q_6 = t;
              {
                ATerm c_9 = NULL;
                t = d_105(t);
                {
                  c_9 = t;
                  if(((b_9 != NULL) && (b_9 != c_9)))
                    _fail(c_9);
                  else
                    b_9 = c_9;
                }
              }
              t = q_6;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = not_null(b_9);
                    return(t);
                  }
                  t = split_2(t, d_9, o_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm g_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = e_105(t, f_0, d_9, g_0);
                {
                  ATerm p_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, p_0, union_0, _id);
                }
              }
              LocalPopChoice(p_6);
            }
          else
            {
              t = o_6;
              {
                ATerm q_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, q_0, union_0, d_9);
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
  ATerm r_0 (ATerm t)
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, r_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  l_9 = t;
  j_9 :
  if(match_cons(l_9, sym_Scope_2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      k_9 :
      if(match_cons(n_9, sym_Seq_2))
        {
          o_9 = ATgetArgument(n_9, 0);
          p_9 = ATgetArgument(n_9, 1);
          {
            ATerm t_9 = NULL,u_9 = NULL;
            ATerm v_9 = NULL,x_9 = NULL;
            ATerm w_9 = NULL;
            t = not_null(o_9);
            {
              t = tvars_0(t);
              {
                w_9 = t;
                if(((v_9 != NULL) && (v_9 != w_9)))
                  _fail(w_9);
                else
                  v_9 = w_9;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(m_9));
              {
                ATerm y_9 = NULL;
                t = isect_0(t);
                {
                  x_9 = t;
                  {
                    if(((t_9 != NULL) && (t_9 != x_9)))
                      _fail(x_9);
                    else
                      t_9 = x_9;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(t_9));
                      {
                        t = diff_0(t);
                        {
                          y_9 = t;
                          {
                            if(((u_9 != NULL) && (u_9 != y_9)))
                              _fail(y_9);
                            else
                              u_9 = y_9;
                            {
                              ATerm b_7 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = b_7;
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_9), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_9), (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_9), not_null(p_9))));
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
    ATerm s_0 (ATerm t)
    {
      t = topdown_1(t, k_116);
      return(t);
    }
    t = _all(t, s_0);
  }
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, t_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  ATerm w_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_10), not_null(k_10)));
    return(t);
  }
  ATerm x_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_10), not_null(p_10)));
    return(t);
  }
  l_10 = t;
  f_10 :
  if(match_cons(l_10, sym_Seq_2))
    {
      m_10 = ATgetArgument(l_10, 0);
      p_10 = ATgetArgument(l_10, 1);
      g_10 :
      if(match_cons(p_10, sym_Scope_2))
        {
          j_10 = ATgetArgument(p_10, 0);
          k_10 = ATgetArgument(p_10, 1);
          h_10 :
          if(match_cons(m_10, sym_Scope_2))
            {
              n_10 = ATgetArgument(m_10, 0);
              o_10 = ATgetArgument(m_10, 1);
              {
                ATerm c_7 = t;
                int d_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_10(t);
                    LocalPopChoice(d_7);
                  }
                else
                  {
                    t = c_7;
                    t = x_10(t);
                  }
              }
            }
          else
            {
              t = w_10(t);
            }
        }
      else
        {
          i_10 :
          if(match_cons(m_10, sym_Scope_2))
            {
              n_10 = ATgetArgument(m_10, 0);
              o_10 = ATgetArgument(m_10, 1);
              t = x_10(t);
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
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  e_11 = t;
  z_10 :
  if(match_cons(e_11, sym_Let_2))
    {
      f_11 = ATgetArgument(e_11, 0);
      l_11 = ATgetArgument(e_11, 1);
      a_11 :
      if(((ATgetType(f_11) == AT_LIST) && ((ATermList) f_11 != ATempty)))
        {
          g_11 = ATgetFirst((ATermList) f_11);
          k_11 = (ATerm) ATgetNext((ATermList) f_11);
          b_11 :
          if(match_cons(g_11, sym_SDef_3))
            {
              h_11 = ATgetArgument(g_11, 0);
              i_11 = ATgetArgument(g_11, 1);
              j_11 = ATgetArgument(g_11, 2);
              c_11 :
              if(((ATermList) i_11 == ATempty))
                {
                  d_11 :
                  if(((ATermList) k_11 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_e_7), not_null(h_11), (ATerm)ATempty, not_null(j_11))), not_null(l_11));
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
ATerm at_suffix_1 (ATerm t, ATerm k_112 (ATerm))
{
  ATerm q_11 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        t = Cons_2(t, _id, q_11);
      }
    return(t);
  }
  t = q_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_Let_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      {
        ATerm i_12 = NULL,j_12 = NULL;
        ATerm y_12 = NULL;
        t = not_null(e_12);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
            k_12 = t;
            y_11 :
            if(((ATgetType(k_12) == AT_LIST) && ((ATermList) k_12 != ATempty)))
              {
                l_12 = ATgetFirst((ATermList) k_12);
                p_12 = (ATerm) ATgetNext((ATermList) k_12);
                z_11 :
                if(match_cons(l_12, sym_SDef_3))
                  {
                    m_12 = ATgetArgument(l_12, 0);
                    n_12 = ATgetArgument(l_12, 1);
                    o_12 = ATgetArgument(l_12, 2);
                    a_12 :
                    if(((ATermList) n_12 == ATempty))
                      {
                        {
                          ATerm x_12 = NULL;
                          t = not_null(f_12);
                          {
                            ATerm v_0 (ATerm t)
                            {
                              ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
                              t_12 = t;
                              u_11 :
                              if(match_cons(t_12, sym_Call_2))
                                {
                                  u_12 = ATgetArgument(t_12, 0);
                                  w_12 = ATgetArgument(t_12, 1);
                                  v_11 :
                                  if(match_cons(u_12, sym_SVar_1))
                                    {
                                      v_12 = ATgetArgument(u_12, 0);
                                      w_11 :
                                      if(((ATermList) w_12 == ATempty))
                                        {
                                          {
                                            if(((m_12 != NULL) && (m_12 != v_12)))
                                              _fail(v_12);
                                            else
                                              m_12 = v_12;
                                            t = not_null(o_12);
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
                            t = oncetd_1(t, v_0);
                            {
                              x_12 = t;
                              {
                                if(((i_12 != NULL) && (i_12 != x_12)))
                                  _fail(x_12);
                                else
                                  i_12 = x_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_12)), (ATerm) ATempty), not_null(i_12));
                                  {
                                    ATerm k_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_subterm_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = k_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(p_12);
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
          t = at_suffix_1(t, u_0);
          {
            y_12 = t;
            if(((j_12 != NULL) && (j_12 != y_12)))
              _fail(y_12);
            else
              j_12 = y_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_12), not_null(i_12));
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
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  m_13 = t;
  g_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      p_13 = ATgetArgument(m_13, 1);
      h_13 :
      if(match_cons(n_13, sym_Build_1))
        {
          o_13 = ATgetArgument(n_13, 0);
          i_13 :
          if(match_cons(p_13, sym_Where_1))
            {
              q_13 = ATgetArgument(p_13, 0);
              j_13 :
              if(match_cons(q_13, sym_Prim_2))
                {
                  k_13 = ATgetArgument(q_13, 0);
                  l_13 = ATgetArgument(q_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(k_13), not_null(l_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(p_13, sym_Prim_2))
                {
                  q_13 = ATgetArgument(p_13, 0);
                  r_13 = ATgetArgument(p_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_13), not_null(r_13));
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
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  h_14 = t;
  c_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      k_14 = ATgetArgument(h_14, 1);
      d_14 :
      if(match_cons(i_14, sym_Build_1))
        {
          j_14 = ATgetArgument(i_14, 0);
          e_14 :
          if(match_cons(k_14, sym_Where_1))
            {
              l_14 = ATgetArgument(k_14, 0);
              f_14 :
              if(match_cons(l_14, sym_Build_1))
                {
                  g_14 = ATgetArgument(l_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(k_14, sym_Build_1))
                {
                  l_14 = ATgetArgument(k_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_14));
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
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  b_15 = t;
  w_14 :
  if(match_cons(b_15, sym__2))
    {
      c_15 = ATgetArgument(b_15, 0);
      g_15 = ATgetArgument(b_15, 1);
      x_14 :
      if(match_cons(c_15, sym_Build_1))
        {
          d_15 = ATgetArgument(c_15, 0);
          y_14 :
          if(match_cons(d_15, sym_Op_2))
            {
              e_15 = ATgetArgument(d_15, 0);
              f_15 = ATgetArgument(d_15, 1);
              z_14 :
              if(match_cons(g_15, sym_Match_1))
                {
                  h_15 = ATgetArgument(g_15, 0);
                  a_15 :
                  if(match_cons(h_15, sym_Op_2))
                    {
                      i_15 = ATgetArgument(h_15, 0);
                      j_15 = ATgetArgument(h_15, 1);
                      {
                        ATerm m_15 = NULL,n_15 = NULL;
                        if(((e_15 != NULL) && (e_15 != i_15)))
                          _fail(i_15);
                        else
                          e_15 = i_15;
                        {
                          if(((m_15 != NULL) && (m_15 != j_15)))
                            _fail(j_15);
                          else
                            m_15 = j_15;
                          {
                            ATerm t_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(m_15));
                            {
                              ATerm w_0 (ATerm t)
                              {
                                ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
                                o_15 = t;
                                u_14 :
                                if(match_cons(o_15, sym__2))
                                  {
                                    p_15 = ATgetArgument(o_15, 0);
                                    q_15 = ATgetArgument(o_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, w_0);
                              {
                                t_15 = t;
                                if(((n_15 != NULL) && (n_15 != t_15)))
                                  _fail(t_15);
                                else
                                  n_15 = t_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(e_15), not_null(f_15))));
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
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym__2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      if(((a_16 != NULL) && (a_16 != b_16)))
        _fail(b_16);
      else
        a_16 = b_16;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  k_16 = t;
  f_16 :
  if(match_cons(k_16, sym__2))
    {
      l_16 = ATgetArgument(k_16, 0);
      p_16 = ATgetArgument(k_16, 1);
      g_16 :
      if(match_cons(l_16, sym_Build_1))
        {
          m_16 = ATgetArgument(l_16, 0);
          h_16 :
          if(match_cons(m_16, sym_Op_2))
            {
              n_16 = ATgetArgument(m_16, 0);
              o_16 = ATgetArgument(m_16, 1);
              i_16 :
              if(match_cons(p_16, sym_Match_1))
                {
                  q_16 = ATgetArgument(p_16, 0);
                  j_16 :
                  if(match_cons(q_16, sym_Op_2))
                    {
                      r_16 = ATgetArgument(q_16, 0);
                      s_16 = ATgetArgument(q_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), not_null(r_16));
                        {
                          ATerm l_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = l_7;
                            }
                        }
                        t = term_m_7;
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
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm t_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            LocalPopChoice(v_7);
          }
        else
          {
            t = t_7;
            {
              ATerm w_7 = t;
              int x_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(x_7);
                }
              else
                {
                  t = w_7;
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
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  ATerm t_17 (ATerm t)
  {
    ATerm q_17 = NULL;
    ATerm r_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(i_17));
    {
      t = BMF_0(t);
      {
        r_17 = t;
        if(((q_17 != NULL) && (q_17 != r_17)))
          _fail(r_17);
        else
          q_17 = r_17;
      }
    }
    t = not_null(q_17);
    return(t);
  }
  g_17 = t;
  c_17 :
  if(match_cons(g_17, sym_Seq_2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      d_17 :
      if(match_cons(i_17, sym_Seq_2))
        {
          e_17 = ATgetArgument(i_17, 0);
          f_17 = ATgetArgument(i_17, 1);
          {
            ATerm c_8 = t;
            int d_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_17 = NULL;
                ATerm n_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(e_17));
                {
                  t = BMF_0(t);
                  {
                    n_17 = t;
                    if(((m_17 != NULL) && (m_17 != n_17)))
                      _fail(n_17);
                    else
                      m_17 = n_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_17), not_null(f_17));
                LocalPopChoice(d_8);
              }
            else
              {
                t = c_8;
                t = t_17(t);
              }
          }
        }
      else
        {
          t = t_17(t);
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
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  b_18 = t;
  x_17 :
  if(match_cons(b_18, sym_Seq_2))
    {
      c_18 = ATgetArgument(b_18, 0);
      e_18 = ATgetArgument(b_18, 1);
      y_17 :
      if(match_cons(c_18, sym_Build_1))
        {
          d_18 = ATgetArgument(c_18, 0);
          z_17 :
          if(match_cons(e_18, sym_Seq_2))
            {
              f_18 = ATgetArgument(e_18, 0);
              h_18 = ATgetArgument(e_18, 1);
              a_18 :
              if(match_cons(f_18, sym_Build_1))
                {
                  g_18 = ATgetArgument(f_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_18)), not_null(h_18));
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
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  q_18 = t;
  o_18 :
  if(match_cons(q_18, sym_Scope_2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      p_18 :
      if(match_cons(s_18, sym_Scope_2))
        {
          t_18 = ATgetArgument(s_18, 0);
          u_18 = ATgetArgument(s_18, 1);
          {
            ATerm y_18 = NULL;
            ATerm z_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(t_18));
            {
              t = conc_0(t);
              {
                z_18 = t;
                if(((y_18 != NULL) && (y_18 != z_18)))
                  _fail(z_18);
                else
                  y_18 = z_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_18), not_null(u_18));
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
  ATerm e_19 = NULL,f_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Var_1))
    {
      f_19 = ATgetArgument(e_19, 0);
      t = not_null(f_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  l_19 = t;
  j_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      k_19 :
      if(((ATgetType(n_19) == AT_LIST) && ((ATermList) n_19 != ATempty)))
        {
          o_19 = ATgetFirst((ATermList) n_19);
          p_19 = (ATerm) ATgetNext((ATermList) n_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(p_19));
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
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  x_19 = t;
  u_19 :
  if(match_cons(x_19, sym__2))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      v_19 :
      if(((ATgetType(z_19) == AT_LIST) && ((ATermList) z_19 != ATempty)))
        {
          a_20 = ATgetFirst((ATermList) z_19);
          d_20 = (ATerm) ATgetNext((ATermList) z_19);
          w_19 :
          if(match_cons(a_20, sym__2))
            {
              b_20 = ATgetArgument(a_20, 0);
              c_20 = ATgetArgument(a_20, 1);
              {
                ATerm f_20 = NULL;
                if(((y_19 != NULL) && (y_19 != b_20)))
                  _fail(b_20);
                else
                  y_19 = b_20;
                {
                  if(((f_20 != NULL) && (f_20 != c_20)))
                    _fail(c_20);
                  else
                    f_20 = c_20;
                  t = not_null(f_20);
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
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_119 (ATerm), ATerm p_119 (ATerm))
{
  ATerm l_20 = NULL;
  ATerm n_20 = NULL,o_20 = NULL;
  l_20 = t;
  {
    ATerm p_20 = NULL;
    t = not_null(l_20);
    {
      ATerm q_20 = NULL;
      t = o_119(t);
      {
        p_20 = t;
        {
          if(((n_20 != NULL) && (n_20 != p_20)))
            _fail(p_20);
          else
            n_20 = p_20;
          {
            t = p_119(t);
            {
              q_20 = t;
              if(((o_20 != NULL) && (o_20 != q_20)))
                _fail(q_20);
              else
                o_20 = q_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), not_null(o_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm o_118 (ATerm))
{
  ATerm u_20 (ATerm t)
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_118(t);
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        t = _all(t, u_20);
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      {
        ATerm e_21 = NULL;
        if(((e_21 != NULL) && (e_21 != b_21)))
          _fail(b_21);
        else
          e_21 = b_21;
      }
    }
  else
    {
      if(match_cons(z_20, sym__3))
        {
          a_21 = ATgetArgument(z_20, 0);
          b_21 = ATgetArgument(z_20, 1);
          c_21 = ATgetArgument(z_20, 2);
          {
            ATerm k_21 = NULL;
            ATerm l_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(b_21));
            {
              t = zip_1(t, _id);
              {
                l_21 = t;
                if(((k_21 != NULL) && (k_21 != l_21)))
                  _fail(l_21);
                else
                  k_21 = l_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(c_21));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm q_119 (ATerm), ATerm r_119 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  t = subs_args_0(t);
  {
    r_21 = t;
    q_21 :
    if(match_cons(r_21, sym__2))
      {
        s_21 = ATgetArgument(r_21, 0);
        t_21 = ATgetArgument(r_21, 1);
        {
          t = not_null(t_21);
          {
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = not_null(s_21);
                return(t);
              }
              t = SubsVar_2(t, q_119, y_0);
              t = r_119(t);
              return(t);
            }
            t = alltd_1(t, x_0);
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
ATerm substitute_1 (ATerm t, ATerm s_119 (ATerm))
{
  t = substitute_2(t, s_119, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  a_22 = t;
  y_21 :
  if(match_cons(a_22, sym__2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      z_21 :
      if(((ATgetType(c_22) == AT_LIST) && ((ATermList) c_22 != ATempty)))
        {
          d_22 = ATgetFirst((ATermList) c_22);
          e_22 = (ATerm) ATgetNext((ATermList) c_22);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_22)), not_null(d_22)), not_null(e_22));
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  t_22 = t;
  r_22 :
  if(((ATgetType(t_22) == AT_LIST) && ((ATermList) t_22 != ATempty)))
    {
      u_22 = ATgetFirst((ATermList) t_22);
      x_22 = (ATerm) ATgetNext((ATermList) t_22);
      s_22 :
      if(match_cons(u_22, sym__2))
        {
          v_22 = ATgetArgument(u_22, 0);
          w_22 = ATgetArgument(u_22, 1);
          {
            ATerm b_23 = NULL,c_23 = NULL,i_23 = NULL,o_23 = NULL;
            ATerm m_8;
            m_8 = t;
            {
              ATerm d_23 = NULL;
              ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
              t = not_null(w_22);
              {
                d_23 = t;
                {
                  t = SSL_explode_term(not_null(d_23));
                  {
                    f_23 = t;
                    m_22 :
                    if(match_cons(f_23, sym__2))
                      {
                        g_23 = ATgetArgument(f_23, 0);
                        h_23 = ATgetArgument(f_23, 1);
                        {
                          if(((b_23 != NULL) && (b_23 != g_23)))
                            _fail(g_23);
                          else
                            b_23 = g_23;
                          if(((c_23 != NULL) && (c_23 != h_23)))
                            _fail(h_23);
                          else
                            c_23 = h_23;
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
            t = m_8;
            {
              ATerm n_8;
              n_8 = t;
              {
                ATerm j_23 = NULL;
                ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
                t = not_null(v_22);
                {
                  j_23 = t;
                  {
                    t = SSL_explode_term(not_null(j_23));
                    {
                      l_23 = t;
                      p_22 :
                      if(match_cons(l_23, sym__2))
                        {
                          m_23 = ATgetArgument(l_23, 0);
                          n_23 = ATgetArgument(l_23, 1);
                          {
                            if(((b_23 != NULL) && (b_23 != m_23)))
                              _fail(m_23);
                            else
                              b_23 = m_23;
                            if(((i_23 != NULL) && (i_23 != n_23)))
                              _fail(n_23);
                            else
                              i_23 = n_23;
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
                ATerm p_23 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(c_23));
                {
                  t = zip_1(t, _id);
                  {
                    p_23 = t;
                    if(((o_23 != NULL) && (o_23 != p_23)))
                      _fail(p_23);
                    else
                      o_23 = p_23;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(x_22));
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
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  z_23 = t;
  x_23 :
  if(((ATgetType(z_23) == AT_LIST) && ((ATermList) z_23 != ATempty)))
    {
      a_24 = ATgetFirst((ATermList) z_23);
      d_24 = (ATerm) ATgetNext((ATermList) z_23);
      y_23 :
      if(match_cons(a_24, sym__2))
        {
          b_24 = ATgetArgument(a_24, 0);
          c_24 = ATgetArgument(a_24, 1);
          {
            ATerm f_24 = NULL;
            if(((b_24 != NULL) && (b_24 != c_24)))
              _fail(c_24);
            else
              b_24 = c_24;
            {
              if(((f_24 != NULL) && (f_24 != d_24)))
                _fail(d_24);
              else
                f_24 = d_24;
              t = not_null(f_24);
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
  ATerm h_24 (ATerm t)
  {
    ATerm q_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_103(t);
        LocalPopChoice(t_8);
      }
    else
      {
        t = q_8;
        {
          t = r_103(t);
          t = h_24(t);
        }
      }
    return(t);
  }
  t = h_24(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm))
{
  t = t_103(t);
  t = while_not_2(t, u_103, v_103);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm l_109 (ATerm))
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  k_24 :
  if(((ATgetType(l_24) == AT_LIST) && ((ATermList) l_24 != ATempty)))
    {
      m_24 = ATgetFirst((ATermList) l_24);
      n_24 = (ATerm) ATgetNext((ATermList) l_24);
      {
        t = l_109(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm q_24 = NULL;
            q_24 = t;
            if(((m_24 != NULL) && (m_24 != q_24)))
              _fail(q_24);
            else
              m_24 = q_24;
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(n_24);
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
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
      w_24 = t;
      u_24 :
      if(match_cons(w_24, sym__2))
        {
          x_24 = ATgetArgument(w_24, 0);
          y_24 = ATgetArgument(w_24, 1);
          {
            t = not_null(x_24);
            {
              ATerm e_25 (ATerm t)
              {
                ATerm z_8 = t;
                int a_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(a_9);
                  }
                else
                  {
                    t = z_8;
                    {
                      ATerm e_9 = t;
                      int f_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_1 (ATerm t)
                          {
                            t = not_null(y_24);
                            return(t);
                          }
                          t = HdMember_1(t, a_1);
                          t = e_25(t);
                          LocalPopChoice(f_9);
                        }
                      else
                        {
                          t = e_9;
                          t = Cons_2(t, _id, e_25);
                        }
                    }
                  }
                return(t);
              }
              t = e_25(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm b_25 = NULL;
          b_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_25));
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_1 (ATerm t)
              {
                ATerm i_9 = t;
                int q_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_9);
                  }
                else
                  {
                    t = i_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, e_1);
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, b_1, c_1, d_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm a_118 (ATerm))
{
  ATerm g_25 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_118(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = _one(t, g_25);
      }
    return(t);
  }
  t = g_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      {
        ATerm z_9;
        z_9 = t;
        {
          t = not_null(m_25);
          {
            ATerm f_1 (ATerm t)
            {
              ATerm p_25 = NULL;
              p_25 = t;
              if(((l_25 != NULL) && (l_25 != p_25)))
                _fail(p_25);
              else
                l_25 = p_25;
              return(t);
            }
            t = oncetd_1(t, f_1);
          }
        }
        t = z_9;
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
  ATerm b_26 = NULL,c_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym_Var_1))
    {
      c_26 = ATgetArgument(b_26, 0);
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_26 = NULL,h_26 = NULL;
            ATerm g_26 = NULL;
            t = SSLgetAnnotations(not_null(b_26));
            {
              g_26 = t;
              if(((f_26 != NULL) && (f_26 != g_26)))
                _fail(g_26);
              else
                f_26 = g_26;
            }
            {
              t = not_null(c_26);
              {
                ATerm j_26 = NULL;
                t = n_0(t);
                {
                  h_26 = t;
                  {
                    ATerm k_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_26)), not_null(f_26));
                    {
                      k_26 = t;
                      if(((j_26 != NULL) && (j_26 != k_26)))
                        _fail(k_26);
                      else
                        j_26 = k_26;
                    }
                    t = not_null(j_26);
                  }
                }
              }
            }
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm n_26 = NULL,p_26 = NULL;
              ATerm o_26 = NULL;
              t = SSLgetAnnotations(not_null(b_26));
              {
                o_26 = t;
                if(((n_26 != NULL) && (n_26 != o_26)))
                  _fail(o_26);
                else
                  n_26 = o_26;
              }
              {
                t = not_null(c_26);
                {
                  ATerm r_26 = NULL;
                  t = n_0(t);
                  {
                    p_26 = t;
                    {
                      ATerm s_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_26)), not_null(n_26));
                      {
                        s_26 = t;
                        if(((r_26 != NULL) && (r_26 != s_26)))
                          _fail(s_26);
                        else
                          r_26 = s_26;
                      }
                      t = not_null(r_26);
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
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  s_28 = t;
  r_27 :
  if(match_cons(s_28, sym_Seq_2))
    {
      t_28 = ATgetArgument(s_28, 0);
      v_28 = ATgetArgument(s_28, 1);
      s_27 :
      if(match_cons(t_28, sym_Assign_1))
        {
          u_28 = ATgetArgument(t_28, 0);
          t_27 :
          if(match_cons(u_28, sym_Var_1))
            {
              l_28 = ATgetArgument(u_28, 0);
              u_27 :
              if(match_cons(v_28, sym_Seq_2))
                {
                  w_28 = ATgetArgument(v_28, 0);
                  x_28 = ATgetArgument(v_28, 1);
                  v_27 :
                  if(match_cons(w_28, sym_Build_1))
                    {
                      o_28 = ATgetArgument(w_28, 0);
                      w_27 :
                      if(match_cons(o_28, sym_Var_1))
                        {
                          p_28 = ATgetArgument(o_28, 0);
                          {
                            ATerm d_29 = NULL;
                            if(((l_28 != NULL) && (l_28 != p_28)))
                              _fail(p_28);
                            else
                              l_28 = p_28;
                            {
                              if(((d_29 != NULL) && (d_29 != x_28)))
                                _fail(x_28);
                              else
                                d_29 = x_28;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_28))), not_null(d_29));
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
          if(match_cons(t_28, sym_Build_1))
            {
              u_28 = ATgetArgument(t_28, 0);
              x_27 :
              if(match_cons(v_28, sym_Scope_2))
                {
                  w_28 = ATgetArgument(v_28, 0);
                  x_28 = ATgetArgument(v_28, 1);
                  y_27 :
                  if(match_cons(x_28, sym_Seq_2))
                    {
                      y_28 = ATgetArgument(x_28, 0);
                      b_29 = ATgetArgument(x_28, 1);
                      z_27 :
                      if(match_cons(y_28, sym_Assign_1))
                        {
                          z_28 = ATgetArgument(y_28, 0);
                          a_28 :
                          if(match_cons(z_28, sym_Var_1))
                            {
                              a_29 = ATgetArgument(z_28, 0);
                              {
                                ATerm c_10 = t;
                                int d_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_30 = NULL,i_30 = NULL;
                                    ATerm e_10;
                                    e_10 = t;
                                    {
                                      ATerm h_30 = NULL;
                                      t = not_null(u_28);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(w_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), (ATerm) ATinsert(ATempty, not_null(a_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  h_30 = t;
                                                  if(((g_30 != NULL) && (g_30 != h_30)))
                                                    _fail(h_30);
                                                  else
                                                    g_30 = h_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = e_10;
                                    {
                                      ATerm j_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_29)), (ATerm)ATinsert(ATempty, not_null(u_28)), not_null(b_29));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          j_30 = t;
                                          if(((i_30 != NULL) && (i_30 != j_30)))
                                            _fail(j_30);
                                          else
                                            i_30 = j_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_30), not_null(i_30)));
                                    }
                                    LocalPopChoice(d_10);
                                  }
                                else
                                  {
                                    t = c_10;
                                    {
                                      ATerm o_30 = NULL,q_30 = NULL;
                                      ATerm q_10;
                                      q_10 = t;
                                      {
                                        ATerm p_30 = NULL;
                                        t = not_null(u_28);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(w_28));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), (ATerm) ATinsert(ATempty, not_null(a_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    p_30 = t;
                                                    if(((o_30 != NULL) && (o_30 != p_30)))
                                                      _fail(p_30);
                                                    else
                                                      o_30 = p_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = q_10;
                                      {
                                        ATerm r_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_29)), (ATerm)ATinsert(ATempty, not_null(u_28)), not_null(b_29));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            r_30 = t;
                                            if(((q_30 != NULL) && (q_30 != r_30)))
                                              _fail(r_30);
                                            else
                                              q_30 = r_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_30), not_null(q_30)));
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
      if(match_cons(s_28, sym_Scope_2))
        {
          t_28 = ATgetArgument(s_28, 0);
          v_28 = ATgetArgument(s_28, 1);
          b_28 :
          if(match_cons(v_28, sym_Seq_2))
            {
              w_28 = ATgetArgument(v_28, 0);
              x_28 = ATgetArgument(v_28, 1);
              c_28 :
              if(match_cons(w_28, sym_Assign_1))
                {
                  o_28 = ATgetArgument(w_28, 0);
                  d_28 :
                  if(match_cons(o_28, sym_Var_1))
                    {
                      p_28 = ATgetArgument(o_28, 0);
                      e_28 :
                      if(match_cons(x_28, sym_Seq_2))
                        {
                          y_28 = ATgetArgument(x_28, 0);
                          b_29 = ATgetArgument(x_28, 1);
                          f_28 :
                          if(match_cons(y_28, sym_Assign_2))
                            {
                              z_28 = ATgetArgument(y_28, 0);
                              m_28 = ATgetArgument(y_28, 1);
                              g_28 :
                              if(match_cons(z_28, sym_Var_1))
                                {
                                  a_29 = ATgetArgument(z_28, 0);
                                  h_28 :
                                  if(match_cons(m_28, sym_Var_1))
                                    {
                                      n_28 = ATgetArgument(m_28, 0);
                                      {
                                        ATerm h_29 = NULL,i_29 = NULL,k_29 = NULL;
                                        if(((p_28 != NULL) && (p_28 != n_28)))
                                          _fail(n_28);
                                        else
                                          p_28 = n_28;
                                        {
                                          if(((h_29 != NULL) && (h_29 != b_29)))
                                            _fail(b_29);
                                          else
                                            h_29 = b_29;
                                          {
                                            ATerm r_10;
                                            r_10 = t;
                                            {
                                              ATerm j_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(t_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(t_28));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), (ATerm) ATinsert(ATempty, not_null(a_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          j_29 = t;
                                                          if(((i_29 != NULL) && (i_29 != j_29)))
                                                            _fail(j_29);
                                                          else
                                                            i_29 = j_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = r_10;
                                            {
                                              ATerm l_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_28))), not_null(h_29));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  l_29 = t;
                                                  if(((k_29 != NULL) && (k_29 != l_29)))
                                                    _fail(l_29);
                                                  else
                                                    k_29 = l_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_28))), not_null(k_29)));
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
                              if(match_cons(y_28, sym_Assign_1))
                                {
                                  z_28 = ATgetArgument(y_28, 0);
                                  i_28 :
                                  if(match_cons(z_28, sym_Var_1))
                                    {
                                      a_29 = ATgetArgument(z_28, 0);
                                      {
                                        ATerm q_29 = NULL,s_29 = NULL;
                                        ATerm s_10;
                                        s_10 = t;
                                        {
                                          ATerm r_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(t_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(t_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), (ATerm) ATinsert(ATempty, not_null(a_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      r_29 = t;
                                                      if(((q_29 != NULL) && (q_29 != r_29)))
                                                        _fail(r_29);
                                                      else
                                                        q_29 = r_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = s_10;
                                        {
                                          ATerm t_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_28))), not_null(b_29));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              t_29 = t;
                                              if(((s_29 != NULL) && (s_29 != t_29)))
                                                _fail(t_29);
                                              else
                                                s_29 = t_29;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_28))), not_null(s_29)));
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
                  if(match_cons(w_28, sym_Assign_2))
                    {
                      o_28 = ATgetArgument(w_28, 0);
                      q_28 = ATgetArgument(w_28, 1);
                      j_28 :
                      if(match_cons(o_28, sym_Var_1))
                        {
                          p_28 = ATgetArgument(o_28, 0);
                          k_28 :
                          if(match_cons(q_28, sym_Var_1))
                            {
                              r_28 = ATgetArgument(q_28, 0);
                              {
                                ATerm y_29 = NULL,a_30 = NULL;
                                ATerm t_10;
                                t_10 = t;
                                {
                                  ATerm z_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(t_28));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), (ATerm) ATinsert(ATempty, not_null(p_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          z_29 = t;
                                          if(((y_29 != NULL) && (y_29 != z_29)))
                                            _fail(z_29);
                                          else
                                            y_29 = z_29;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = t_10;
                                {
                                  ATerm b_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(p_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(x_28));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      b_30 = t;
                                      if(((a_30 != NULL) && (a_30 != b_30)))
                                        _fail(b_30);
                                      else
                                        a_30 = b_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_29), not_null(a_30));
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
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  l_31 = t;
  j_31 :
  if(match_cons(l_31, sym_Seq_2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      k_31 :
      if(match_cons(n_31, sym_Let_2))
        {
          o_31 = ATgetArgument(n_31, 0);
          p_31 = ATgetArgument(n_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_31), not_null(p_31)));
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
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_Cong_2))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      {
        ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,q_33 = NULL,z_35 = NULL,f_36 = NULL;
        ATerm u_10;
        u_10 = t;
        {
          ATerm w_32 = NULL;
          t = not_null(n_32);
          {
            ATerm z_32 = NULL;
            t = map_1(t, new_0);
            {
              w_32 = t;
              {
                if(((t_32 != NULL) && (t_32 != w_32)))
                  _fail(w_32);
                else
                  t_32 = w_32;
                {
                  t = not_null(t_32);
                  {
                    ATerm a_33 = NULL;
                    ATerm g_1 (ATerm t)
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
                    t = map_1(t, g_1);
                    {
                      z_32 = t;
                      {
                        if(((q_32 != NULL) && (q_32 != z_32)))
                          _fail(z_32);
                        else
                          q_32 = z_32;
                        {
                          ATerm b_33 = NULL;
                          t = new_0(t);
                          {
                            a_33 = t;
                            {
                              if(((r_32 != NULL) && (r_32 != a_33)))
                                _fail(a_33);
                              else
                                r_32 = a_33;
                              {
                                t = not_null(n_32);
                                {
                                  ATerm e_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    b_33 = t;
                                    {
                                      if(((u_32 != NULL) && (u_32 != b_33)))
                                        _fail(b_33);
                                      else
                                        u_32 = b_33;
                                      {
                                        t = not_null(u_32);
                                        {
                                          ATerm f_33 = NULL,p_33 = NULL;
                                          ATerm h_1 (ATerm t)
                                          {
                                            ATerm c_33 = NULL;
                                            ATerm d_33 = NULL;
                                            d_33 = t;
                                            if(((c_33 != NULL) && (c_33 != d_33)))
                                              _fail(d_33);
                                            else
                                              c_33 = d_33;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_33));
                                            return(t);
                                          }
                                          t = map_1(t, h_1);
                                          {
                                            e_33 = t;
                                            {
                                              if(((s_32 != NULL) && (s_32 != e_33)))
                                                _fail(e_33);
                                              else
                                                s_32 = e_33;
                                              {
                                                ATerm g_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_32), not_null(u_32));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    g_33 = t;
                                                    if(((f_33 != NULL) && (f_33 != g_33)))
                                                      _fail(g_33);
                                                    else
                                                      f_33 = g_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_33), not_null(n_32));
                                                  {
                                                    ATerm i_1 (ATerm t)
                                                    {
                                                      ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
                                                      h_33 = t;
                                                      e_32 :
                                                      if(match_cons(h_33, sym__2))
                                                        {
                                                          i_33 = ATgetArgument(h_33, 0);
                                                          l_33 = ATgetArgument(h_33, 1);
                                                          f_32 :
                                                          if(match_cons(i_33, sym__2))
                                                            {
                                                              j_33 = ATgetArgument(i_33, 0);
                                                              k_33 = ATgetArgument(i_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_33)))));
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
                                                    t = zip_1(t, i_1);
                                                    {
                                                      p_33 = t;
                                                      if(((v_32 != NULL) && (v_32 != p_33)))
                                                        _fail(p_33);
                                                      else
                                                        v_32 = p_33;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = u_10;
        {
          ATerm v_10;
          v_10 = t;
          {
            ATerm r_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_32), not_null(u_32));
            {
              t = conc_0(t);
              {
                r_33 = t;
                if(((q_33 != NULL) && (q_33 != r_33)))
                  _fail(r_33);
                else
                  q_33 = r_33;
              }
            }
          }
          t = v_10;
          {
            ATerm y_10;
            y_10 = t;
            {
              ATerm a_36 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_32), not_null(q_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_32))));
              {
                t = Mapp2_0(t);
                {
                  a_36 = t;
                  if(((z_35 != NULL) && (z_35 != a_36)))
                    _fail(a_36);
                  else
                    z_35 = a_36;
                }
              }
            }
            t = y_10;
            {
              ATerm p_36 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_32), not_null(s_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_32))));
              {
                t = Bapp2_0(t);
                {
                  p_36 = t;
                  if(((f_36 != NULL) && (f_36 != p_36)))
                    _fail(p_36);
                  else
                    f_36 = p_36;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(q_33)), not_null(r_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_32)), not_null(f_36))));
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
  ATerm h_38 = NULL,i_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_Build_1))
    {
      i_38 = ATgetArgument(h_38, 0);
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
            ATerm o_38 = NULL;
            ATerm s_38 = NULL;
            t = new_0(t);
            {
              o_38 = t;
              {
                if(((m_38 != NULL) && (m_38 != o_38)))
                  _fail(o_38);
                else
                  m_38 = o_38;
                {
                  t = not_null(i_38);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
                      p_38 = t;
                      j_37 :
                      if(match_cons(p_38, sym_Anno_2))
                        {
                          q_38 = ATgetArgument(p_38, 0);
                          r_38 = ATgetArgument(p_38, 1);
                          {
                            if(((k_38 != NULL) && (k_38 != q_38)))
                              _fail(q_38);
                            else
                              k_38 = q_38;
                            {
                              if(((l_38 != NULL) && (l_38 != r_38)))
                                _fail(r_38);
                              else
                                l_38 = r_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_38));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      s_38 = t;
                      if(((n_38 != NULL) && (n_38 != s_38)))
                        _fail(s_38);
                      else
                        n_38 = s_38;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_38)), not_null(k_38))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_38))));
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm p_11 = t;
              int r_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
                  ATerm i_40 = NULL;
                  ATerm q_40 = NULL;
                  t = new_0(t);
                  {
                    i_40 = t;
                    {
                      if(((w_39 != NULL) && (w_39 != i_40)))
                        _fail(i_40);
                      else
                        w_39 = i_40;
                      {
                        t = not_null(i_38);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm j_40 = NULL,k_40 = NULL;
                            j_40 = t;
                            n_37 :
                            if(match_cons(j_40, sym_RootApp_1))
                              {
                                k_40 = ATgetArgument(j_40, 0);
                                {
                                  if(((v_39 != NULL) && (v_39 != k_40)))
                                    _fail(k_40);
                                  else
                                    v_39 = k_40;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_39));
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
                            q_40 = t;
                            if(((x_39 != NULL) && (x_39 != q_40)))
                              _fail(q_40);
                            else
                              x_39 = q_40;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_39))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_39))));
                  LocalPopChoice(r_11);
                }
              else
                {
                  t = p_11;
                  {
                    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,w_41 = NULL;
                    ATerm x_41 = NULL;
                    ATerm b_42 = NULL;
                    t = new_0(t);
                    {
                      x_41 = t;
                      {
                        if(((d_41 != NULL) && (d_41 != x_41)))
                          _fail(x_41);
                        else
                          d_41 = x_41;
                        {
                          t = not_null(i_38);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
                              y_41 = t;
                              b_38 :
                              if(match_cons(y_41, sym_App_2))
                                {
                                  z_41 = ATgetArgument(y_41, 0);
                                  a_42 = ATgetArgument(y_41, 1);
                                  {
                                    if(((b_41 != NULL) && (b_41 != z_41)))
                                      _fail(z_41);
                                    else
                                      b_41 = z_41;
                                    {
                                      if(((c_41 != NULL) && (c_41 != a_42)))
                                        _fail(a_42);
                                      else
                                        c_41 = a_42;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_41));
                                    }
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
                              b_42 = t;
                              if(((w_41 != NULL) && (w_41 != b_42)))
                                _fail(b_42);
                              else
                                w_41 = b_42;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_41), not_null(c_41), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_41)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_41))));
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
  ATerm q_42 = NULL,y_42 = NULL,z_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym__2))
    {
      y_42 = ATgetArgument(q_42, 0);
      z_42 = ATgetArgument(q_42, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_42)), not_null(y_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  h_43 = t;
  e_43 :
  if(match_cons(h_43, sym__2))
    {
      i_43 = ATgetArgument(h_43, 0);
      o_43 = ATgetArgument(h_43, 1);
      f_43 :
      if(((ATgetType(i_43) == AT_LIST) && ((ATermList) i_43 != ATempty)))
        {
          j_43 = ATgetFirst((ATermList) i_43);
          k_43 = (ATerm) ATgetNext((ATermList) i_43);
          g_43 :
          if(((ATgetType(o_43) == AT_LIST) && ((ATermList) o_43 != ATempty)))
            {
              p_43 = ATgetFirst((ATermList) o_43);
              q_43 = (ATerm) ATgetNext((ATermList) o_43);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_43), not_null(p_43)), (ATerm) ATmakeAppl(sym__2, not_null(k_43), not_null(q_43)));
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
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  x_43 :
  if(match_cons(a_44, sym__2))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      y_43 :
      if(((ATermList) b_44 == ATempty))
        {
          z_43 :
          if(((ATermList) c_44 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm))
{
  ATerm e_44 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          t = r_113(t);
          {
            t = _2(t, t_113, e_44);
            t = s_113(t);
          }
        }
      }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_113 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_113);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  e_45 = t;
  x_44 :
  if(match_cons(e_45, sym_Call_2))
    {
      f_45 = ATgetArgument(e_45, 0);
      h_45 = ATgetArgument(e_45, 1);
      y_44 :
      if(match_cons(f_45, sym_SVar_1))
        {
          g_45 = ATgetArgument(f_45, 0);
          z_44 :
          if(match_string(g_45, "Anno_Cong__"))
            {
              a_45 :
              if(((ATgetType(h_45) == AT_LIST) && ((ATermList) h_45 != ATempty)))
                {
                  i_45 = ATgetFirst((ATermList) h_45);
                  l_45 = (ATerm) ATgetNext((ATermList) h_45);
                  b_45 :
                  if(match_cons(i_45, sym_Cong_2))
                    {
                      j_45 = ATgetArgument(i_45, 0);
                      k_45 = ATgetArgument(i_45, 1);
                      c_45 :
                      if(((ATgetType(l_45) == AT_LIST) && ((ATermList) l_45 != ATempty)))
                        {
                          m_45 = ATgetFirst((ATermList) l_45);
                          n_45 = (ATerm) ATgetNext((ATermList) l_45);
                          d_45 :
                          if(((ATermList) n_45 == ATempty))
                            {
                              {
                                ATerm r_45 = NULL,s_45 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,h_46 = NULL,t_47 = NULL,w_47 = NULL,y_47 = NULL;
                                ATerm x_11;
                                x_11 = t;
                                {
                                  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(m_45));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      i_46 = t;
                                      t_44 :
                                      if(((ATgetType(i_46) == AT_LIST) && ((ATermList) i_46 != ATempty)))
                                        {
                                          j_46 = ATgetFirst((ATermList) i_46);
                                          k_46 = (ATerm) ATgetNext((ATermList) i_46);
                                          {
                                            ATerm n_46 = NULL;
                                            if(((r_45 != NULL) && (r_45 != j_46)))
                                              _fail(j_46);
                                            else
                                              r_45 = j_46;
                                            {
                                              if(((d_46 != NULL) && (d_46 != k_46)))
                                                _fail(k_46);
                                              else
                                                d_46 = k_46;
                                              {
                                                ATerm o_46 = NULL,r_46 = NULL,s_46 = NULL;
                                                ATerm m_1 (ATerm t)
                                                {
                                                  ATerm l_46 = NULL;
                                                  ATerm m_46 = NULL;
                                                  m_46 = t;
                                                  if(((l_46 != NULL) && (l_46 != m_46)))
                                                    _fail(m_46);
                                                  else
                                                    l_46 = m_46;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_46));
                                                  return(t);
                                                }
                                                t = map_1(t, m_1);
                                                {
                                                  n_46 = t;
                                                  {
                                                    if(((s_45 != NULL) && (s_45 != n_46)))
                                                      _fail(n_46);
                                                    else
                                                      s_45 = n_46;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(m_45));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          o_46 = t;
                                                          s_44 :
                                                          if(((ATgetType(o_46) == AT_LIST) && ((ATermList) o_46 != ATempty)))
                                                            {
                                                              r_46 = ATgetFirst((ATermList) o_46);
                                                              s_46 = (ATerm) ATgetNext((ATermList) o_46);
                                                              {
                                                                ATerm v_46 = NULL;
                                                                if(((b_46 != NULL) && (b_46 != r_46)))
                                                                  _fail(r_46);
                                                                else
                                                                  b_46 = r_46;
                                                                {
                                                                  if(((e_46 != NULL) && (e_46 != s_46)))
                                                                    _fail(s_46);
                                                                  else
                                                                    e_46 = s_46;
                                                                  {
                                                                    ATerm w_46 = NULL,s_47 = NULL;
                                                                    ATerm n_1 (ATerm t)
                                                                    {
                                                                      ATerm t_46 = NULL;
                                                                      ATerm u_46 = NULL;
                                                                      u_46 = t;
                                                                      if(((t_46 != NULL) && (t_46 != u_46)))
                                                                        _fail(u_46);
                                                                      else
                                                                        t_46 = u_46;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_46));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, n_1);
                                                                    {
                                                                      v_46 = t;
                                                                      {
                                                                        if(((c_46 != NULL) && (c_46 != v_46)))
                                                                          _fail(v_46);
                                                                        else
                                                                          c_46 = v_46;
                                                                        {
                                                                          ATerm x_46 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_46), not_null(e_46));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              x_46 = t;
                                                                              if(((w_46 != NULL) && (w_46 != x_46)))
                                                                                _fail(x_46);
                                                                              else
                                                                                w_46 = x_46;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_46), (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(m_45)));
                                                                            {
                                                                              ATerm o_1 (ATerm t)
                                                                              {
                                                                                ATerm e_47 = NULL,f_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
                                                                                e_47 = t;
                                                                                p_44 :
                                                                                if(match_cons(e_47, sym__2))
                                                                                  {
                                                                                    f_47 = ATgetArgument(e_47, 0);
                                                                                    o_47 = ATgetArgument(e_47, 1);
                                                                                    q_44 :
                                                                                    if(match_cons(f_47, sym__2))
                                                                                      {
                                                                                        m_47 = ATgetArgument(f_47, 0);
                                                                                        n_47 = ATgetArgument(f_47, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_47))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_47), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_47)))));
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
                                                                              t = zip_1(t, o_1);
                                                                              {
                                                                                s_47 = t;
                                                                                if(((h_46 != NULL) && (h_46 != s_47)))
                                                                                  _fail(s_47);
                                                                                else
                                                                                  h_46 = s_47;
                                                                              }
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
                                t = x_11;
                                {
                                  ATerm b_12;
                                  b_12 = t;
                                  {
                                    ATerm u_47 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_46), not_null(e_46));
                                    {
                                      t = conc_0(t);
                                      {
                                        u_47 = t;
                                        if(((t_47 != NULL) && (t_47 != u_47)))
                                          _fail(u_47);
                                        else
                                          t_47 = u_47;
                                      }
                                    }
                                  }
                                  t = b_12;
                                  {
                                    ATerm g_12;
                                    g_12 = t;
                                    {
                                      ATerm x_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(j_45), not_null(s_45)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_45))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          x_47 = t;
                                          if(((w_47 != NULL) && (w_47 != x_47)))
                                            _fail(x_47);
                                          else
                                            w_47 = x_47;
                                        }
                                      }
                                    }
                                    t = g_12;
                                    {
                                      ATerm z_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(j_45), not_null(c_46)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_46))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          z_47 = t;
                                          if(((y_47 != NULL) && (y_47 != z_47)))
                                            _fail(z_47);
                                          else
                                            y_47 = z_47;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(t_47)), not_null(b_46)), not_null(r_45)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(h_46)), not_null(y_47))));
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
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_cons(t_48, sym_Prim_2))
    {
      u_48 = ATgetArgument(t_48, 0);
      v_48 = ATgetArgument(t_48, 1);
      {
        ATerm z_48 = NULL,b_49 = NULL;
        ATerm a_49 = NULL;
        t = SSLgetAnnotations(not_null(t_48));
        {
          a_49 = t;
          if(((z_48 != NULL) && (z_48 != a_49)))
            _fail(a_49);
          else
            z_48 = a_49;
        }
        {
          t = not_null(u_48);
          {
            ATerm d_49 = NULL;
            t = e_93(t);
            {
              b_49 = t;
              {
                t = not_null(v_48);
                {
                  ATerm f_49 = NULL;
                  t = f_93(t);
                  {
                    d_49 = t;
                    {
                      ATerm g_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_49), not_null(d_49)), not_null(z_48));
                      {
                        g_49 = t;
                        if(((f_49 != NULL) && (f_49 != g_49)))
                          _fail(g_49);
                        else
                          f_49 = g_49;
                      }
                      t = not_null(f_49);
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
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym_Explode_2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      {
        ATerm a_50 = NULL,c_50 = NULL;
        ATerm b_50 = NULL;
        t = SSLgetAnnotations(not_null(s_49));
        {
          b_50 = t;
          if(((a_50 != NULL) && (a_50 != b_50)))
            _fail(b_50);
          else
            a_50 = b_50;
        }
        {
          t = not_null(t_49);
          {
            ATerm j_50 = NULL;
            t = j_89(t);
            {
              c_50 = t;
              {
                t = not_null(u_49);
                {
                  ATerm l_50 = NULL;
                  t = k_89(t);
                  {
                    j_50 = t;
                    {
                      ATerm m_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_50), not_null(j_50)), not_null(a_50));
                      {
                        m_50 = t;
                        if(((l_50 != NULL) && (l_50 != m_50)))
                          _fail(m_50);
                        else
                          l_50 = m_50;
                      }
                      t = not_null(l_50);
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
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  x_50 :
  if(match_cons(y_50, sym_Op_2))
    {
      z_50 = ATgetArgument(y_50, 0);
      a_51 = ATgetArgument(y_50, 1);
      {
        ATerm e_51 = NULL,g_51 = NULL;
        ATerm f_51 = NULL;
        t = SSLgetAnnotations(not_null(y_50));
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
        {
          t = not_null(z_50);
          {
            ATerm k_51 = NULL;
            t = e_91(t);
            {
              g_51 = t;
              {
                t = not_null(a_51);
                {
                  ATerm m_51 = NULL;
                  t = f_91(t);
                  {
                    k_51 = t;
                    {
                      ATerm n_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(g_51), not_null(k_51)), not_null(e_51));
                      {
                        n_51 = t;
                        if(((m_51 != NULL) && (m_51 != n_51)))
                          _fail(n_51);
                        else
                          m_51 = n_51;
                      }
                      t = not_null(m_51);
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
  ATerm h_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_121(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = h_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                t = pat_td_1(t, g_121);
                return(t);
              }
              t = fetch_1(t, q_1);
              return(t);
            }
            t = Op_2(t, _id, p_1);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm z_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    t = pat_td_1(t, g_121);
                    return(t);
                  }
                  t = Explode_2(t, _id, r_1);
                  LocalPopChoice(a_13);
                }
              else
                {
                  t = z_12;
                  {
                    ATerm b_13 = t;
                    int c_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = pat_td_1(t, g_121);
                          return(t);
                        }
                        t = Explode_2(t, s_1, _id);
                        LocalPopChoice(c_13);
                      }
                    else
                      {
                        t = b_13;
                        {
                          ATerm t_1 (ATerm t)
                          {
                            ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1(t, g_121);
                              return(t);
                            }
                            t = fetch_1(t, u_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, t_1);
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
  ATerm l_52 = NULL,m_52 = NULL;
  l_52 = t;
  k_52 :
  if(match_cons(l_52, sym_Match_1))
    {
      m_52 = ATgetArgument(l_52, 0);
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
            ATerm u_52 = NULL;
            ATerm y_52 = NULL;
            t = new_0(t);
            {
              u_52 = t;
              {
                if(((s_52 != NULL) && (s_52 != u_52)))
                  _fail(u_52);
                else
                  s_52 = u_52;
                {
                  t = not_null(m_52);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
                      v_52 = t;
                      y_51 :
                      if(match_cons(v_52, sym_Anno_2))
                        {
                          w_52 = ATgetArgument(v_52, 0);
                          x_52 = ATgetArgument(v_52, 1);
                          {
                            if(((p_52 != NULL) && (p_52 != w_52)))
                              _fail(w_52);
                            else
                              p_52 = w_52;
                            {
                              if(((r_52 != NULL) && (r_52 != x_52)))
                                _fail(x_52);
                              else
                                r_52 = x_52;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_52)), not_null(p_52));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, v_1);
                    {
                      y_52 = t;
                      if(((t_52 != NULL) && (t_52 != y_52)))
                        _fail(y_52);
                      else
                        t_52 = y_52;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_52)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_52)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_52))))));
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm s_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
                  ATerm d_53 = NULL;
                  ATerm g_53 = NULL;
                  t = new_0(t);
                  {
                    d_53 = t;
                    {
                      if(((b_53 != NULL) && (b_53 != d_53)))
                        _fail(d_53);
                      else
                        b_53 = d_53;
                      {
                        t = not_null(m_52);
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm e_53 = NULL,f_53 = NULL;
                            e_53 = t;
                            c_52 :
                            if(match_cons(e_53, sym_RootApp_1))
                              {
                                f_53 = ATgetArgument(e_53, 0);
                                {
                                  if(((a_53 != NULL) && (a_53 != f_53)))
                                    _fail(f_53);
                                  else
                                    a_53 = f_53;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_53));
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
                            g_53 = t;
                            if(((c_53 != NULL) && (c_53 != g_53)))
                              _fail(g_53);
                            else
                              c_53 = g_53;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_53))), not_null(a_53))));
                  LocalPopChoice(t_13);
                }
              else
                {
                  t = s_13;
                  {
                    ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
                    ATerm m_53 = NULL;
                    ATerm q_53 = NULL;
                    t = new_0(t);
                    {
                      m_53 = t;
                      {
                        if(((k_53 != NULL) && (k_53 != m_53)))
                          _fail(m_53);
                        else
                          k_53 = m_53;
                        {
                          t = not_null(m_52);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
                              n_53 = t;
                              g_52 :
                              if(match_cons(n_53, sym_App_2))
                                {
                                  o_53 = ATgetArgument(n_53, 0);
                                  p_53 = ATgetArgument(n_53, 1);
                                  {
                                    if(((j_53 != NULL) && (j_53 != o_53)))
                                      _fail(o_53);
                                    else
                                      j_53 = o_53;
                                    {
                                      if(((i_53 != NULL) && (i_53 != p_53)))
                                        _fail(p_53);
                                      else
                                        i_53 = p_53;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_53));
                                    }
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
                              q_53 = t;
                              if(((l_53 != NULL) && (l_53 != q_53)))
                                _fail(q_53);
                              else
                                l_53 = q_53;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_53)), not_null(j_53)))));
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
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
  j_54 = t;
  i_54 :
  if(match_cons(j_54, sym_Cong_2))
    {
      k_54 = ATgetArgument(j_54, 0);
      l_54 = ATgetArgument(j_54, 1);
      {
        ATerm o_54 = NULL;
        ATerm s_54 = NULL;
        t = not_null(l_54);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm p_54 = NULL,q_54 = NULL;
            q_54 = t;
            g_54 :
            if(match_cons(q_54, sym_Match_1))
              {
                p_54 = ATgetArgument(q_54, 0);
                t = not_null(p_54);
              }
            else
              {
                if(match_cons(q_54, sym_Id_0))
                  {
                    t = term_u_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, y_1);
          {
            s_54 = t;
            if(((o_54 != NULL) && (o_54 != s_54)))
              _fail(s_54);
            else
              o_54 = s_54;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_54), not_null(o_54)));
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
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  y_54 :
  if(match_cons(a_55, sym_Scope_2))
    {
      b_55 = ATgetArgument(a_55, 0);
      c_55 = ATgetArgument(a_55, 1);
      z_54 :
      if(((ATermList) b_55 == ATempty))
        {
          t = not_null(c_55);
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
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  l_55 :
  if(match_cons(y_55, sym_Where_1))
    {
      z_55 = ATgetArgument(y_55, 0);
      m_55 :
      if(match_cons(z_55, sym_Seq_2))
        {
          x_55 = ATgetArgument(z_55, 0);
          t_55 = ATgetArgument(z_55, 1);
          n_55 :
          if(match_cons(x_55, sym_Where_1))
            {
              s_55 = ATgetArgument(x_55, 0);
              o_55 :
              if(match_cons(t_55, sym_Seq_2))
                {
                  u_55 = ATgetArgument(t_55, 0);
                  w_55 = ATgetArgument(t_55, 1);
                  p_55 :
                  if(match_cons(u_55, sym_Build_1))
                    {
                      v_55 = ATgetArgument(u_55, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_55)), not_null(w_55))));
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
          if(match_cons(z_55, sym_Where_1))
            {
              x_55 = ATgetArgument(z_55, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(x_55));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(y_55, sym_Test_1))
        {
          z_55 = ATgetArgument(y_55, 0);
          q_55 :
          if(match_cons(z_55, sym_Test_1))
            {
              x_55 = ATgetArgument(z_55, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_55));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(y_55, sym_Not_1))
            {
              z_55 = ATgetArgument(y_55, 0);
              r_55 :
              if(match_cons(z_55, sym_Not_1))
                {
                  x_55 = ATgetArgument(z_55, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_55));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(y_55, sym_LChoice_2))
                {
                  z_55 = ATgetArgument(y_55, 0);
                  a_56 = ATgetArgument(y_55, 1);
                  {
                    if(((z_55 != NULL) && (z_55 != a_56)))
                      _fail(a_56);
                    else
                      z_55 = a_56;
                    t = not_null(z_55);
                  }
                }
              else
                {
                  if(match_cons(y_55, sym_Choice_2))
                    {
                      z_55 = ATgetArgument(y_55, 0);
                      a_56 = ATgetArgument(y_55, 1);
                      {
                        if(((z_55 != NULL) && (z_55 != a_56)))
                          _fail(a_56);
                        else
                          z_55 = a_56;
                        t = not_null(z_55);
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
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  w_56 = t;
  s_56 :
  if(match_cons(w_56, sym_LChoice_2))
    {
      x_56 = ATgetArgument(w_56, 0);
      a_57 = ATgetArgument(w_56, 1);
      t_56 :
      if(match_cons(x_56, sym_LChoice_2))
        {
          y_56 = ATgetArgument(x_56, 0);
          z_56 = ATgetArgument(x_56, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_56), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_56), not_null(a_57)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(w_56, sym_Seq_2))
        {
          x_56 = ATgetArgument(w_56, 0);
          a_57 = ATgetArgument(w_56, 1);
          u_56 :
          if(match_cons(x_56, sym_Seq_2))
            {
              y_56 = ATgetArgument(x_56, 0);
              z_56 = ATgetArgument(x_56, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_56), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_56), not_null(a_57)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(w_56, sym_Choice_2))
            {
              x_56 = ATgetArgument(w_56, 0);
              a_57 = ATgetArgument(w_56, 1);
              v_56 :
              if(match_cons(x_56, sym_Choice_2))
                {
                  y_56 = ATgetArgument(x_56, 0);
                  z_56 = ATgetArgument(x_56, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_56), (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_56), not_null(a_57)));
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
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  k_58 = t;
  c_58 :
  if(match_cons(k_58, sym_InfixApp_3))
    {
      l_58 = ATgetArgument(k_58, 0);
      h_58 = ATgetArgument(k_58, 1);
      g_58 = ATgetArgument(k_58, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_58), (ATerm) ATmakeAppl(sym_Op_2, term_v_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_58)), not_null(l_58))));
    }
  else
    {
      if(match_cons(k_58, sym_BAM_3))
        {
          l_58 = ATgetArgument(k_58, 0);
          h_58 = ATgetArgument(k_58, 1);
          g_58 = ATgetArgument(k_58, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(g_58))), not_null(l_58)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_58))));
        }
      else
        {
          if(match_cons(k_58, sym_AM_2))
            {
              l_58 = ATgetArgument(k_58, 0);
              h_58 = ATgetArgument(k_58, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_58), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_58)));
            }
          else
            {
              if(match_cons(k_58, sym_MA_2))
                {
                  l_58 = ATgetArgument(k_58, 0);
                  h_58 = ATgetArgument(k_58, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_58)), not_null(h_58));
                }
              else
                {
                  if(match_cons(k_58, sym_BA_2))
                    {
                      l_58 = ATgetArgument(k_58, 0);
                      h_58 = ATgetArgument(k_58, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_58)), not_null(l_58));
                    }
                  else
                    {
                      if(match_cons(k_58, sym_Lets_2))
                        {
                          l_58 = ATgetArgument(k_58, 0);
                          h_58 = ATgetArgument(k_58, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_58), not_null(h_58));
                        }
                      else
                        {
                          if(match_cons(k_58, sym_LChoices_1))
                            {
                              l_58 = ATgetArgument(k_58, 0);
                              d_58 :
                              if(((ATgetType(l_58) == AT_LIST) && ((ATermList) l_58 != ATempty)))
                                {
                                  i_58 = ATgetFirst((ATermList) l_58);
                                  j_58 = (ATerm) ATgetNext((ATermList) l_58);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_58), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_58)));
                                }
                              else
                                {
                                  if(((ATermList) l_58 == ATempty))
                                    {
                                      t = term_m_7;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(k_58, sym_Choices_1))
                                {
                                  l_58 = ATgetArgument(k_58, 0);
                                  e_58 :
                                  if(((ATgetType(l_58) == AT_LIST) && ((ATermList) l_58 != ATempty)))
                                    {
                                      i_58 = ATgetFirst((ATermList) l_58);
                                      j_58 = (ATerm) ATgetNext((ATermList) l_58);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_58), (ATerm) ATmakeAppl(sym_Choices_1, not_null(j_58)));
                                    }
                                  else
                                    {
                                      if(((ATermList) l_58 == ATempty))
                                        {
                                          t = term_m_7;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(k_58, sym_Seqs_1))
                                    {
                                      l_58 = ATgetArgument(k_58, 0);
                                      f_58 :
                                      if(((ATgetType(l_58) == AT_LIST) && ((ATermList) l_58 != ATempty)))
                                        {
                                          i_58 = ATgetFirst((ATermList) l_58);
                                          j_58 = (ATerm) ATgetNext((ATermList) l_58);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_58), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_58)));
                                        }
                                      else
                                        {
                                          if(((ATermList) l_58 == ATempty))
                                            {
                                              t = term_w_13;
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
  ATerm v_59 = NULL,w_59 = NULL;
  v_59 = t;
  t_59 :
  if(match_cons(v_59, sym_Where_1))
    {
      w_59 = ATgetArgument(v_59, 0);
      u_59 :
      if(match_cons(w_59, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  z_59 :
  if(match_cons(b_60, sym_LChoice_2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      a_60 :
      if(match_cons(d_60, sym_Fail_0))
        {
          t = not_null(c_60);
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
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
  j_60 = t;
  h_60 :
  if(match_cons(j_60, sym_LChoice_2))
    {
      k_60 = ATgetArgument(j_60, 0);
      l_60 = ATgetArgument(j_60, 1);
      i_60 :
      if(match_cons(k_60, sym_Fail_0))
        {
          t = not_null(l_60);
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
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
  r_60 = t;
  p_60 :
  if(match_cons(r_60, sym_Choice_2))
    {
      s_60 = ATgetArgument(r_60, 0);
      t_60 = ATgetArgument(r_60, 1);
      q_60 :
      if(match_cons(t_60, sym_Fail_0))
        {
          t = not_null(s_60);
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
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
  a_61 = t;
  x_60 :
  if(match_cons(a_61, sym_Choice_2))
    {
      b_61 = ATgetArgument(a_61, 0);
      c_61 = ATgetArgument(a_61, 1);
      y_60 :
      if(match_cons(b_61, sym_Fail_0))
        {
          t = not_null(c_61);
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
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  i_61 = t;
  h_61 :
  if(match_cons(i_61, sym_Cong_2))
    {
      j_61 = ATgetArgument(i_61, 0);
      k_61 = ATgetArgument(i_61, 1);
      {
        t = not_null(k_61);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm n_61 = NULL;
            n_61 = t;
            g_61 :
            if(!(match_cons(n_61, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, z_1);
        }
        t = term_m_7;
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
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  s_61 = t;
  q_61 :
  if(match_cons(s_61, sym_Path_2))
    {
      t_61 = ATgetArgument(s_61, 0);
      u_61 = ATgetArgument(s_61, 1);
      r_61 :
      if(match_cons(u_61, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm a_62 = NULL,b_62 = NULL;
  a_62 = t;
  y_61 :
  if(match_cons(a_62, sym_One_1))
    {
      b_62 = ATgetArgument(a_62, 0);
      z_61 :
      if(match_cons(b_62, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm g_62 = NULL,h_62 = NULL;
  g_62 = t;
  e_62 :
  if(match_cons(g_62, sym_Some_1))
    {
      h_62 = ATgetArgument(g_62, 0);
      f_62 :
      if(match_cons(h_62, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  m_62 = t;
  k_62 :
  if(match_cons(m_62, sym_Rec_2))
    {
      n_62 = ATgetArgument(m_62, 0);
      o_62 = ATgetArgument(m_62, 1);
      l_62 :
      if(match_cons(o_62, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  s_62 :
  if(match_cons(u_62, sym_Scope_2))
    {
      v_62 = ATgetArgument(u_62, 0);
      w_62 = ATgetArgument(u_62, 1);
      t_62 :
      if(match_cons(w_62, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm c_63 = NULL,d_63 = NULL,i_63 = NULL;
  c_63 = t;
  a_63 :
  if(match_cons(c_63, sym_Seq_2))
    {
      d_63 = ATgetArgument(c_63, 0);
      i_63 = ATgetArgument(c_63, 1);
      b_63 :
      if(match_cons(d_63, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm o_63 = NULL,p_63 = NULL;
  o_63 = t;
  m_63 :
  if(match_cons(o_63, sym_Not_1))
    {
      p_63 = ATgetArgument(o_63, 0);
      n_63 :
      if(match_cons(p_63, sym_Fail_0))
        {
          t = term_w_13;
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
  ATerm u_63 = NULL,v_63 = NULL;
  u_63 = t;
  s_63 :
  if(match_cons(u_63, sym_Test_1))
    {
      v_63 = ATgetArgument(u_63, 0);
      t_63 :
      if(match_cons(v_63, sym_Fail_0))
        {
          t = term_m_7;
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
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            {
              ATerm b_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm n_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = n_14;
                        {
                          ATerm p_14 = t;
                          int q_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(q_14);
                            }
                          else
                            {
                              t = p_14;
                              {
                                ATerm r_14 = t;
                                int s_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(s_14);
                                  }
                                else
                                  {
                                    t = r_14;
                                    {
                                      ATerm t_14 = t;
                                      int v_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(v_14);
                                        }
                                      else
                                        {
                                          t = t_14;
                                          {
                                            ATerm k_15 = t;
                                            int l_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(l_15);
                                              }
                                            else
                                              {
                                                t = k_15;
                                                {
                                                  ATerm r_15 = t;
                                                  int s_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(s_15);
                                                    }
                                                  else
                                                    {
                                                      t = r_15;
                                                      {
                                                        ATerm u_15 = t;
                                                        int v_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(v_15);
                                                          }
                                                        else
                                                          {
                                                            t = u_15;
                                                            {
                                                              ATerm w_15 = t;
                                                              int x_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(x_15);
                                                                }
                                                              else
                                                                {
                                                                  t = w_15;
                                                                  {
                                                                    ATerm c_16 = t;
                                                                    int d_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(d_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_16;
                                                                        {
                                                                          ATerm e_16 = t;
                                                                          int t_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(t_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_16;
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
  ATerm a_64 = NULL,b_64 = NULL;
  a_64 = t;
  y_63 :
  if(match_cons(a_64, sym_Match_1))
    {
      b_64 = ATgetArgument(a_64, 0);
      z_63 :
      if(match_cons(b_64, sym_Wld_0))
        {
          t = term_w_13;
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
  ATerm k_64 = NULL,l_64 = NULL;
  k_64 = t;
  i_64 :
  if(match_cons(k_64, sym_Where_1))
    {
      l_64 = ATgetArgument(k_64, 0);
      j_64 :
      if(match_cons(l_64, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm q_64 = NULL,t_64 = NULL;
  q_64 = t;
  o_64 :
  if(match_cons(q_64, sym_All_1))
    {
      t_64 = ATgetArgument(q_64, 0);
      p_64 :
      if(match_cons(t_64, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  a_65 :
  if(match_cons(g_65, sym_Rec_2))
    {
      h_65 = ATgetArgument(g_65, 0);
      i_65 = ATgetArgument(g_65, 1);
      b_65 :
      if(match_cons(i_65, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  o_65 = t;
  m_65 :
  if(match_cons(o_65, sym_Scope_2))
    {
      p_65 = ATgetArgument(o_65, 0);
      q_65 = ATgetArgument(o_65, 1);
      n_65 :
      if(match_cons(q_65, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  y_65 = t;
  w_65 :
  if(match_cons(y_65, sym_LChoice_2))
    {
      z_65 = ATgetArgument(y_65, 0);
      a_66 = ATgetArgument(y_65, 1);
      x_65 :
      if(match_cons(z_65, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  e_66 :
  if(match_cons(j_66, sym_Seq_2))
    {
      k_66 = ATgetArgument(j_66, 0);
      l_66 = ATgetArgument(j_66, 1);
      i_66 :
      if(match_cons(l_66, sym_Id_0))
        {
          t = not_null(k_66);
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
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  z_66 = t;
  t_66 :
  if(match_cons(z_66, sym_Seq_2))
    {
      a_67 = ATgetArgument(z_66, 0);
      b_67 = ATgetArgument(z_66, 1);
      u_66 :
      if(match_cons(a_67, sym_Id_0))
        {
          t = not_null(b_67);
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
  ATerm j_67 = NULL,k_67 = NULL;
  j_67 = t;
  h_67 :
  if(match_cons(j_67, sym_Not_1))
    {
      k_67 = ATgetArgument(j_67, 0);
      i_67 :
      if(match_cons(k_67, sym_Id_0))
        {
          t = term_m_7;
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
  ATerm p_67 = NULL,q_67 = NULL;
  p_67 = t;
  n_67 :
  if(match_cons(p_67, sym_Test_1))
    {
      q_67 = ATgetArgument(p_67, 0);
      o_67 :
      if(match_cons(q_67, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
                  {
                    ATerm a_17 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = a_17;
                        {
                          ATerm j_17 = t;
                          int k_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(k_17);
                            }
                          else
                            {
                              t = j_17;
                              {
                                ATerm l_17 = t;
                                int o_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(o_17);
                                  }
                                else
                                  {
                                    t = l_17;
                                    {
                                      ATerm p_17 = t;
                                      int s_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(s_17);
                                        }
                                      else
                                        {
                                          t = p_17;
                                          {
                                            ATerm u_17 = t;
                                            int v_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(v_17);
                                              }
                                            else
                                              {
                                                t = u_17;
                                                {
                                                  ATerm w_17 = t;
                                                  int i_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(i_18);
                                                    }
                                                  else
                                                    {
                                                      t = w_17;
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
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm n_18 = t;
              int v_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(v_18);
                }
              else
                {
                  t = n_18;
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
                        {
                          ATerm a_19 = t;
                          int b_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(b_19);
                            }
                          else
                            {
                              t = a_19;
                              {
                                ATerm c_19 = t;
                                int g_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(g_19);
                                  }
                                else
                                  {
                                    t = c_19;
                                    {
                                      ATerm h_19 = t;
                                      int i_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(i_19);
                                        }
                                      else
                                        {
                                          t = h_19;
                                          {
                                            ATerm q_19 = t;
                                            int r_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(r_19);
                                              }
                                            else
                                              {
                                                t = q_19;
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
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm e_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = e_20;
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  {
                    ATerm j_20 = t;
                    int k_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(k_20);
                      }
                    else
                      {
                        t = j_20;
                        {
                          ATerm m_20 = t;
                          int r_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(r_20);
                            }
                          else
                            {
                              t = m_20;
                              {
                                ATerm s_20 = t;
                                int t_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(t_20);
                                  }
                                else
                                  {
                                    t = s_20;
                                    {
                                      ATerm v_20 = t;
                                      int w_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(w_20);
                                        }
                                      else
                                        {
                                          t = v_20;
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
ATerm repeat_2 (ATerm t, ATerm z_102 (ATerm), ATerm a_103 (ATerm))
{
  ATerm s_67 (ATerm t)
  {
    ATerm x_20 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_102(t);
        t = s_67(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = x_20;
        t = a_103(t);
      }
    return(t);
  }
  t = s_67(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_103 (ATerm))
{
  t = repeat_2(t, c_103, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm m_116 (ATerm))
{
  ATerm t_67 (ATerm t)
  {
    t = m_116(t);
    {
      t = _all(t, t_67);
      t = m_116(t);
    }
    return(t);
  }
  t = t_67(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, b_2);
    return(t);
  }
  t = downup_1(t, a_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm))
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  b_68 = t;
  a_68 :
  if(match_cons(b_68, sym_SDef_3))
    {
      c_68 = ATgetArgument(b_68, 0);
      d_68 = ATgetArgument(b_68, 1);
      e_68 = ATgetArgument(b_68, 2);
      {
        ATerm j_68 = NULL,l_68 = NULL;
        ATerm k_68 = NULL;
        t = SSLgetAnnotations(not_null(b_68));
        {
          k_68 = t;
          if(((j_68 != NULL) && (j_68 != k_68)))
            _fail(k_68);
          else
            j_68 = k_68;
        }
        {
          t = not_null(c_68);
          {
            ATerm n_68 = NULL;
            t = b_92(t);
            {
              l_68 = t;
              {
                t = not_null(d_68);
                {
                  ATerm p_68 = NULL;
                  t = c_92(t);
                  {
                    n_68 = t;
                    {
                      t = not_null(e_68);
                      {
                        ATerm r_68 = NULL;
                        t = d_92(t);
                        {
                          p_68 = t;
                          {
                            ATerm s_68 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(l_68), not_null(n_68), not_null(p_68)), not_null(j_68));
                            {
                              s_68 = t;
                              if(((r_68 != NULL) && (r_68 != s_68)))
                                _fail(s_68);
                              else
                                r_68 = s_68;
                            }
                            t = not_null(r_68);
                          }
                        }
                      }
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
  ATerm e_69 = NULL,f_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym_Strategies_1))
    {
      f_69 = ATgetArgument(e_69, 0);
      {
        ATerm i_69 = NULL,k_69 = NULL;
        ATerm j_69 = NULL;
        t = SSLgetAnnotations(not_null(e_69));
        {
          j_69 = t;
          if(((i_69 != NULL) && (i_69 != j_69)))
            _fail(j_69);
          else
            i_69 = j_69;
        }
        {
          t = not_null(f_69);
          {
            ATerm m_69 = NULL;
            t = o_90(t);
            {
              k_69 = t;
              {
                ATerm n_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(k_69)), not_null(i_69));
                {
                  n_69 = t;
                  if(((m_69 != NULL) && (m_69 != n_69)))
                    _fail(n_69);
                  else
                    m_69 = n_69;
                }
                t = not_null(m_69);
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
  ATerm x_69 = NULL,y_69 = NULL;
  x_69 = t;
  w_69 :
  if(match_cons(x_69, sym_Specification_1))
    {
      y_69 = ATgetArgument(x_69, 0);
      {
        ATerm b_70 = NULL,d_70 = NULL;
        ATerm c_70 = NULL;
        t = SSLgetAnnotations(not_null(x_69));
        {
          c_70 = t;
          if(((b_70 != NULL) && (b_70 != c_70)))
            _fail(c_70);
          else
            b_70 = c_70;
        }
        {
          t = not_null(y_69);
          {
            ATerm f_70 = NULL;
            t = q_90(t);
            {
              d_70 = t;
              {
                ATerm g_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(d_70)), not_null(b_70));
                {
                  g_70 = t;
                  if(((f_70 != NULL) && (f_70 != g_70)))
                    _fail(g_70);
                  else
                    f_70 = g_70;
                }
                t = not_null(f_70);
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
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, j_121);
            return(t);
          }
          t = map_1(t, g_2);
          return(t);
        }
        t = Strategies_1(t, f_2);
        return(t);
      }
      t = Cons_2(t, e_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, d_2);
    return(t);
  }
  t = Specification_1(t, c_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm y_80 (ATerm), ATerm z_80 (ATerm))
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
  t_70 = t;
  s_70 :
  if(match_cons(t_70, sym__2))
    {
      u_70 = ATgetArgument(t_70, 0);
      v_70 = ATgetArgument(t_70, 1);
      {
        ATerm m_71 = NULL,o_71 = NULL;
        ATerm n_71 = NULL;
        t = SSLgetAnnotations(not_null(t_70));
        {
          n_71 = t;
          if(((m_71 != NULL) && (m_71 != n_71)))
            _fail(n_71);
          else
            m_71 = n_71;
        }
        {
          t = not_null(u_70);
          {
            ATerm v_71 = NULL;
            t = y_80(t);
            {
              o_71 = t;
              {
                t = not_null(v_70);
                {
                  ATerm x_71 = NULL;
                  t = z_80(t);
                  {
                    v_71 = t;
                    {
                      ATerm y_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_71), not_null(v_71)), not_null(m_71));
                      {
                        y_71 = t;
                        if(((x_71 != NULL) && (x_71 != y_71)))
                          _fail(y_71);
                        else
                          x_71 = y_71;
                      }
                      t = not_null(x_71);
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
  ATerm h_72 = NULL;
  ATerm h_21;
  h_21 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_72 = NULL,j_72 = NULL;
      i_72 = t;
      f_72 :
      if(match_cons(i_72, sym_Program_1))
        {
          j_72 = ATgetArgument(i_72, 0);
          if(((h_72 != NULL) && (h_72 != j_72)))
            _fail(j_72);
          else
            h_72 = j_72;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_21), not_null(h_72)), term_j_21));
      {
        t = printnl_0(t);
        {
          t = term_n_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
  n_72 = t;
  m_72 :
  if(match_cons(n_72, sym__2))
    {
      o_72 = ATgetArgument(n_72, 0);
      p_72 = ATgetArgument(n_72, 1);
      {
        ATerm o_21;
        o_21 = t;
        t = SSL_printnl(not_null(o_72), not_null(p_72));
        t = o_21;
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
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  p_73 = t;
  o_73 :
  if(match_cons(p_73, sym__2))
    {
      q_73 = ATgetArgument(p_73, 0);
      r_73 = ATgetArgument(p_73, 1);
      {
        t = not_null(q_73);
        {
          ATerm i_2 (ATerm t)
          {
            t = not_null(r_73);
            return(t);
          }
          t = at_end_1(t, i_2);
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
  ATerm p_21;
  p_21 = t;
  {
    ATerm x_73 = NULL,z_73 = NULL;
    ATerm u_21;
    u_21 = t;
    {
      ATerm y_73 = NULL;
      t = d_99(t);
      {
        y_73 = t;
        if(((x_73 != NULL) && (x_73 != y_73)))
          _fail(y_73);
        else
          x_73 = y_73;
      }
    }
    t = u_21;
    {
      ATerm f_74 = NULL;
      f_74 = t;
      if(((z_73 != NULL) && (z_73 != f_74)))
        _fail(f_74);
      else
        z_73 = f_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_73)), not_null(x_73)));
        t = printnl_0(t);
      }
    }
  }
  t = p_21;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_74 = NULL;
  s_74 = t;
  t = SSL_is_string(not_null(s_74));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_2);
            LocalPopChoice(f_22);
          }
        else
          {
            t = x_21;
            {
              ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
              p_75 = t;
              o_75 :
              if(match_cons(p_75, sym_Path_1))
                {
                  q_75 = ATgetArgument(p_75, 0);
                  t = not_null(q_75);
                }
              else
                {
                  if(match_cons(p_75, sym_Var_1))
                    {
                      q_75 = ATgetArgument(p_75, 0);
                      {
                        t = not_null(q_75);
                        {
                          ATerm g_22 = t;
                          int h_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_22);
                            }
                          else
                            {
                              t = g_22;
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = term_i_22;
                                  return(t);
                                }
                                t = debug_1(t, k_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_75, sym_Prefix_2))
                        {
                          q_75 = ATgetArgument(p_75, 0);
                          r_75 = ATgetArgument(p_75, 1);
                          {
                            ATerm w_75 = NULL,y_75 = NULL;
                            ATerm j_22;
                            j_22 = t;
                            {
                              ATerm x_75 = NULL;
                              t = not_null(q_75);
                              {
                                t = eval_config_0(t);
                                {
                                  x_75 = t;
                                  if(((w_75 != NULL) && (w_75 != x_75)))
                                    _fail(x_75);
                                  else
                                    w_75 = x_75;
                                }
                              }
                            }
                            t = j_22;
                            {
                              ATerm z_75 = NULL;
                              t = not_null(r_75);
                              {
                                t = eval_config_0(t);
                                {
                                  z_75 = t;
                                  if(((y_75 != NULL) && (y_75 != z_75)))
                                    _fail(z_75);
                                  else
                                    y_75 = z_75;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_75), not_null(y_75));
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
  ATerm h_76 = NULL;
  h_76 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_22, not_null(h_76));
    {
      t = table_get_0(t);
      {
        ATerm l_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm l_22;
            l_22 = t;
            {
              ATerm j_76 = NULL;
              ATerm k_76 = NULL;
              k_76 = t;
              if(((j_76 != NULL) && (j_76 != k_76)))
                _fail(k_76);
              else
                j_76 = k_76;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_22, not_null(h_76), not_null(j_76));
                t = table_put_0(t);
              }
            }
            t = l_22;
          }
          return(t);
        }
        t = try_1(t, l_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_96 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm n_22;
    n_22 = t;
    {
      ATerm o_76 = NULL;
      ATerm p_76 = NULL;
      t = term_o_22;
      {
        t = get_config_0(t);
        {
          p_76 = t;
          if(((o_76 != NULL) && (o_76 != p_76)))
            _fail(p_76);
          else
            o_76 = p_76;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_76), term_q_22);
        t = geq_0(t);
      }
    }
    t = n_22;
    t = n_96(t);
    return(t);
  }
  t = try_1(t, m_2);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATempty, term_y_22));
  {
    t = printnl_0(t);
    {
      t = term_n_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_76 = NULL;
  s_76 = t;
  t = SSL_TicksToSeconds(not_null(s_76));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  x_76 = t;
  w_76 :
  if(match_cons(x_76, sym__2))
    {
      y_76 = ATgetArgument(x_76, 0);
      z_76 = ATgetArgument(x_76, 1);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_76), not_null(z_76));
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = SSL_addr(not_null(y_76), not_null(z_76));
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
  ATerm e_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_108(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = e_23;
      {
        ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
        g_77 = t;
        f_77 :
        if(((ATgetType(g_77) == AT_LIST) && ((ATermList) g_77 != ATempty)))
          {
            h_77 = ATgetFirst((ATermList) g_77);
            i_77 = (ATerm) ATgetNext((ATermList) g_77);
            {
              ATerm l_77 = NULL;
              ATerm m_77 = NULL;
              t = not_null(i_77);
              {
                t = foldr_2(t, f_108, g_108);
                {
                  m_77 = t;
                  if(((l_77 != NULL) && (l_77 != m_77)))
                    _fail(m_77);
                  else
                    l_77 = m_77;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_77), not_null(l_77));
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
  ATerm t_77 = NULL;
  ATerm v_77 = NULL;
  t_77 = t;
  {
    ATerm w_77 = NULL;
    ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
    t = not_null(t_77);
    {
      w_77 = t;
      {
        t = SSL_explode_term(not_null(w_77));
        {
          y_77 = t;
          s_77 :
          if(match_cons(y_77, sym__2))
            {
              z_77 = ATgetArgument(y_77, 0);
              a_78 = ATgetArgument(y_77, 1);
              if(((v_77 != NULL) && (v_77 != a_78)))
                _fail(a_78);
              else
                v_77 = a_78;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_77);
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
    ATerm n_2 (ATerm t)
    {
      t = term_q_23;
      return(t);
    }
    t = crush_2(t, n_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  f_78 :
  if(match_cons(g_78, sym__2))
    {
      h_78 = ATgetArgument(g_78, 0);
      i_78 = ATgetArgument(g_78, 1);
      {
        ATerm r_23;
        r_23 = t;
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_78), not_null(i_78));
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              t = SSL_gtr(not_null(h_78), not_null(i_78));
            }
        }
        t = r_23;
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
  ATerm o_78 = NULL;
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL;
      p_78 = t;
      n_78 :
      if(match_cons(p_78, sym__2))
        {
          q_78 = ATgetArgument(p_78, 0);
          r_78 = ATgetArgument(p_78, 1);
          {
            if(((o_78 != NULL) && (o_78 != q_78)))
              _fail(q_78);
            else
              o_78 = q_78;
            if(((o_78 != NULL) && (o_78 != r_78)))
              _fail(r_78);
            else
              o_78 = r_78;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_96 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm w_23;
    w_23 = t;
    {
      ATerm u_78 = NULL;
      ATerm v_78 = NULL;
      t = term_o_22;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_78), term_n_21);
        t = geq_0(t);
      }
    }
    t = w_23;
    t = m_96(t);
    return(t);
  }
  t = try_1(t, o_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm z_78 = NULL,b_79 = NULL;
    ATerm e_24;
    e_24 = t;
    {
      ATerm a_79 = NULL;
      t = run_time_0(t);
      {
        a_79 = t;
        if(((z_78 != NULL) && (z_78 != a_79)))
          _fail(a_79);
        else
          z_78 = a_79;
      }
    }
    t = e_24;
    {
      ATerm c_79 = NULL;
      t = term_g_24;
      {
        t = get_config_0(t);
        {
          c_79 = t;
          if(((b_79 != NULL) && (b_79 != c_79)))
            _fail(c_79);
          else
            b_79 = c_79;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_24), not_null(z_78)), term_i_24), not_null(b_79)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_2);
  {
    t = term_q_23;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
  h_79 = t;
  g_79 :
  if(match_cons(h_79, sym__2))
    {
      i_79 = ATgetArgument(h_79, 0);
      j_79 = ATgetArgument(h_79, 1);
      t = SSL_WriteToTextFile(not_null(i_79), not_null(j_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL;
  p_79 = t;
  o_79 :
  if(match_cons(p_79, sym__2))
    {
      q_79 = ATgetArgument(p_79, 0);
      r_79 = ATgetArgument(p_79, 1);
      t = SSL_WriteToBinaryFile(not_null(q_79), not_null(r_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_79 = NULL;
  ATerm o_24;
  o_24 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm p_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_2 (ATerm t)
          {
            ATerm a_80 = NULL,b_80 = NULL;
            a_80 = t;
            w_79 :
            if(match_cons(a_80, sym_Output_1))
              {
                b_80 = ATgetArgument(a_80, 0);
                if(((z_79 != NULL) && (z_79 != b_80)))
                  _fail(b_80);
                else
                  z_79 = b_80;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_2);
          LocalPopChoice(r_24);
        }
      else
        {
          t = p_24;
          {
            ATerm c_80 = NULL;
            t = term_s_24;
            {
              c_80 = t;
              if(((z_79 != NULL) && (z_79 != c_80)))
                _fail(c_80);
              else
                z_79 = c_80;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_2, _id);
  }
  t = o_24;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(z_79);
        return(t);
      }
      t = split_2(t, t_2, _id);
      return(t);
    }
    t = _2(t, _id, s_2);
    {
      ATerm t_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm d_80 = NULL;
              d_80 = t;
              y_79 :
              if(!(match_cons(d_80, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_2);
            return(t);
          }
          t = _2(t, u_2, WriteToBinaryFile_0);
          LocalPopChoice(v_24);
        }
      else
        {
          t = t_24;
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
  ATerm j_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL;
  ATerm z_24;
  z_24 = t;
  t = dtime_0(t);
  t = z_24;
  {
    t = n_98(t);
    {
      ATerm a_25;
      a_25 = t;
      {
        ATerm k_80 = NULL;
        t = dtime_0(t);
        {
          k_80 = t;
          if(((j_80 != NULL) && (j_80 != k_80)))
            _fail(k_80);
          else
            j_80 = k_80;
        }
      }
      t = a_25;
      {
        l_80 = t;
        i_80 :
        if(match_cons(l_80, sym__2))
          {
            m_80 = ATgetArgument(l_80, 0);
            n_80 = ATgetArgument(l_80, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_80))), not_null(n_80));
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
  ATerm t_80 = NULL;
  t_80 = t;
  t = SSL_ReadFromFile(not_null(t_80));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_115 (ATerm), ATerm e_115 (ATerm))
{
  ATerm a_81 = NULL,c_81 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm b_81 = NULL;
    t = d_115(t);
    {
      b_81 = t;
      if(((a_81 != NULL) && (a_81 != b_81)))
        _fail(b_81);
      else
        a_81 = b_81;
    }
  }
  t = c_25;
  {
    ATerm d_81 = NULL;
    t = e_115(t);
    {
      d_81 = t;
      if(((c_81 != NULL) && (c_81 != d_81)))
        _fail(d_81);
      else
        c_81 = d_81;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_81), not_null(c_81));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_81 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    ATerm f_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 (ATerm t)
        {
          ATerm k_81 = NULL,l_81 = NULL;
          k_81 = t;
          h_81 :
          if(match_cons(k_81, sym_Input_1))
            {
              l_81 = ATgetArgument(k_81, 0);
              if(((j_81 != NULL) && (j_81 != l_81)))
                _fail(l_81);
              else
                j_81 = l_81;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_2);
        LocalPopChoice(h_25);
      }
    else
      {
        t = f_25;
        {
          ATerm m_81 = NULL;
          t = term_i_25;
          {
            m_81 = t;
            if(((j_81 != NULL) && (j_81 != m_81)))
              _fail(m_81);
            else
              j_81 = m_81;
          }
        }
      }
  }
  t = d_25;
  {
    ATerm x_2 (ATerm t)
    {
      t = not_null(j_81);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_81 = NULL;
  t_81 = t;
  s_81 :
  if(match_cons(t_81, sym_Version_0))
    {
      ATerm v_81 = NULL,x_81 = NULL;
      ATerm n_25;
      n_25 = t;
      {
        ATerm w_81 = NULL;
        t = SSLgetAnnotations(not_null(t_81));
        {
          w_81 = t;
          if(((v_81 != NULL) && (v_81 != w_81)))
            _fail(w_81);
          else
            v_81 = w_81;
        }
      }
      t = n_25;
      {
        ATerm y_81 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_81));
        {
          y_81 = t;
          if(((x_81 != NULL) && (x_81 != y_81)))
            _fail(y_81);
          else
            x_81 = y_81;
        }
        t = not_null(x_81);
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
  ATerm y_2 (ATerm t)
  {
    ATerm o_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = o_25;
        {
          ATerm r_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_25);
            }
          else
            {
              t = r_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_2);
  t = l_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_82 = NULL;
  d_82 = t;
  t = SSL_table_create(not_null(d_82));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_82 = NULL;
  h_82 = t;
  {
    ATerm t_25;
    t_25 = t;
    {
      t = term_u_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_25, term_v_25, not_null(h_82));
          t = table_put_0(t);
        }
      }
    }
    t = t_25;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_82 = NULL;
  l_82 = t;
  t = SSL_string_to_int(not_null(l_82));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  v_82 = t;
  t_82 :
  if(match_string(v_82, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(v_82) == AT_LIST) && ((ATermList) v_82 != ATempty)))
        {
          w_82 = ATgetFirst((ATermList) v_82);
          x_82 = (ATerm) ATgetNext((ATermList) v_82);
          u_82 :
          if(((ATgetType(x_82) == AT_LIST) && ((ATermList) x_82 != ATempty)))
            {
              y_82 = ATgetFirst((ATermList) x_82);
              z_82 = (ATerm) ATgetNext((ATermList) x_82);
              {
                ATerm d_83 = NULL;
                ATerm w_25;
                w_25 = t;
                {
                  t = not_null(w_82);
                  t = k_0(t);
                }
                t = w_25;
                {
                  ATerm e_83 = NULL;
                  t = not_null(y_82);
                  {
                    t = l_0(t);
                    {
                      e_83 = t;
                      if(((d_83 != NULL) && (d_83 != e_83)))
                        _fail(e_83);
                      else
                        d_83 = e_83;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_82)), not_null(d_83));
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
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm v_83 = NULL;
        v_83 = t;
        i_83 :
        if(!(match_string(v_83, "-i")))
          {
            if(!(match_string(v_83, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        ATerm y_83 = NULL;
        ATerm z_25;
        z_25 = t;
        {
          ATerm w_83 = NULL;
          ATerm x_83 = NULL;
          x_83 = t;
          if(((w_83 != NULL) && (w_83 != x_83)))
            _fail(x_83);
          else
            w_83 = x_83;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(w_83));
            t = set_config_0(t);
          }
        }
        t = z_25;
        {
          ATerm z_83 = NULL;
          z_83 = t;
          if(((y_83 != NULL) && (y_83 != z_83)))
            _fail(z_83);
          else
            y_83 = z_83;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_83));
        }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_e_26;
        return(t);
      }
      t = ArgOption_3(t, z_2, a_3, d_3);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm i_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              ATerm a_84 = NULL;
              a_84 = t;
              l_83 :
              if(!(match_string(a_84, "-o")))
                {
                  if(!(match_string(a_84, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              ATerm d_84 = NULL;
              ATerm m_26;
              m_26 = t;
              {
                ATerm b_84 = NULL;
                ATerm c_84 = NULL;
                c_84 = t;
                if(((b_84 != NULL) && (b_84 != c_84)))
                  _fail(c_84);
                else
                  b_84 = c_84;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(b_84));
                  t = set_config_0(t);
                }
              }
              t = m_26;
              {
                ATerm e_84 = NULL;
                e_84 = t;
                if(((d_84 != NULL) && (d_84 != e_84)))
                  _fail(e_84);
                else
                  d_84 = e_84;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_84));
              }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = term_t_26;
              return(t);
            }
            t = ArgOption_3(t, e_3, f_3, g_3);
            LocalPopChoice(l_26);
          }
        else
          {
            t = i_26;
            {
              ATerm u_26 = t;
              int v_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm f_84 = NULL;
                    f_84 = t;
                    o_83 :
                    if(!(match_string(f_84, "-S")))
                      {
                        if(!(match_string(f_84, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    t = term_w_26;
                    t = set_config_0(t);
                    t = term_x_26;
                    return(t);
                  }
                  ATerm j_3 (ATerm t)
                  {
                    t = term_y_26;
                    return(t);
                  }
                  t = Option_3(t, h_3, i_3, j_3);
                  LocalPopChoice(v_26);
                }
              else
                {
                  t = u_26;
                  {
                    ATerm z_26 = t;
                    int a_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_3 (ATerm t)
                        {
                          ATerm g_84 = NULL;
                          g_84 = t;
                          p_83 :
                          if(!(match_string(g_84, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_3 (ATerm t)
                        {
                          ATerm j_84 = NULL;
                          ATerm b_27;
                          b_27 = t;
                          {
                            ATerm h_84 = NULL;
                            ATerm i_84 = NULL;
                            t = string_to_int_0(t);
                            {
                              i_84 = t;
                              if(((h_84 != NULL) && (h_84 != i_84)))
                                _fail(i_84);
                              else
                                h_84 = i_84;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_22, not_null(h_84));
                              t = set_config_0(t);
                            }
                          }
                          t = b_27;
                          {
                            ATerm k_84 = NULL;
                            k_84 = t;
                            if(((j_84 != NULL) && (j_84 != k_84)))
                              _fail(k_84);
                            else
                              j_84 = k_84;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_84));
                          }
                          return(t);
                        }
                        ATerm m_3 (ATerm t)
                        {
                          t = term_c_27;
                          return(t);
                        }
                        t = ArgOption_3(t, k_3, l_3, m_3);
                        LocalPopChoice(a_27);
                      }
                    else
                      {
                        t = z_26;
                        {
                          ATerm d_27 = t;
                          int e_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_3 (ATerm t)
                              {
                                ATerm l_84 = NULL;
                                l_84 = t;
                                s_83 :
                                if(!(match_string(l_84, "-v")))
                                  {
                                    if(!(match_string(l_84, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_3 (ATerm t)
                              {
                                t = term_h_27;
                                t = set_config_0(t);
                                t = term_i_27;
                                return(t);
                              }
                              ATerm p_3 (ATerm t)
                              {
                                t = term_j_27;
                                return(t);
                              }
                              t = Option_3(t, n_3, o_3, p_3);
                              LocalPopChoice(e_27);
                            }
                          else
                            {
                              t = d_27;
                              {
                                ATerm k_27 = t;
                                int l_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_3 (ATerm t)
                                    {
                                      ATerm m_84 = NULL;
                                      m_84 = t;
                                      t_83 :
                                      if(!(match_string(m_84, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_3 (ATerm t)
                                    {
                                      t = term_n_27;
                                      t = set_config_0(t);
                                      t = term_o_27;
                                      return(t);
                                    }
                                    ATerm u_3 (ATerm t)
                                    {
                                      t = term_p_27;
                                      return(t);
                                    }
                                    t = Option_3(t, s_3, t_3, u_3);
                                    LocalPopChoice(l_27);
                                  }
                                else
                                  {
                                    t = k_27;
                                    {
                                      ATerm v_3 (ATerm t)
                                      {
                                        ATerm n_84 = NULL;
                                        n_84 = t;
                                        u_83 :
                                        if(!(match_string(n_84, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm w_3 (ATerm t)
                                      {
                                        t = term_c_29;
                                        t = set_config_0(t);
                                        t = term_e_29;
                                        return(t);
                                      }
                                      ATerm x_3 (ATerm t)
                                      {
                                        t = term_f_29;
                                        return(t);
                                      }
                                      t = Option_3(t, v_3, w_3, x_3);
                                    }
                                  }
                              }
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
  ATerm v_84 = NULL;
  v_84 = t;
  t = SSL_table_destroy(not_null(v_84));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_84 = NULL;
  z_84 = t;
  t = SSL_exit(not_null(z_84));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_85 = NULL;
  d_85 = t;
  t = SSL_implode_string(not_null(d_85));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_112 (ATerm))
{
  ATerm g_85 (ATerm t)
  {
    ATerm g_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_85);
        LocalPopChoice(m_29);
      }
    else
      {
        t = g_29;
        {
          t = Nil_0(t);
          t = g_112(t);
        }
      }
    return(t);
  }
  t = g_85(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      {
        ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
        j_85 = t;
        i_85 :
        if(((ATgetType(j_85) == AT_LIST) && ((ATermList) j_85 != ATempty)))
          {
            k_85 = ATgetFirst((ATermList) j_85);
            l_85 = (ATerm) ATgetNext((ATermList) j_85);
            {
              t = not_null(k_85);
              {
                ATerm y_3 (ATerm t)
                {
                  t = not_null(l_85);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_3);
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
  ATerm r_85 = NULL;
  r_85 = t;
  t = SSL_explode_string(not_null(r_85));
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
  ATerm u_85 (ATerm t)
  {
    ATerm p_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = p_29;
        t = Cons_2(t, s_111, u_85);
      }
    return(t);
  }
  t = u_85(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
  d_86 = t;
  a_86 :
  if(((ATgetType(d_86) == AT_LIST) && ((ATermList) d_86 != ATempty)))
    {
      b_86 = ATgetFirst((ATermList) d_86);
      c_86 = (ATerm) ATgetNext((ATermList) d_86);
      {
        ATerm g_86 = NULL;
        t = not_null(c_86);
        {
          ATerm v_29;
          v_29 = t;
          {
            ATerm h_86 = NULL,j_86 = NULL,l_86 = NULL;
            ATerm w_29;
            w_29 = t;
            {
              ATerm i_86 = NULL;
              t = j_0(t);
              {
                i_86 = t;
                if(((h_86 != NULL) && (h_86 != i_86)))
                  _fail(i_86);
                else
                  h_86 = i_86;
              }
            }
            t = w_29;
            {
              ATerm k_86 = NULL;
              t = not_null(b_86);
              {
                t = i_0(t);
                {
                  k_86 = t;
                  if(((j_86 != NULL) && (j_86 != k_86)))
                    _fail(k_86);
                  else
                    j_86 = k_86;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_86)), not_null(j_86));
                {
                  l_86 = t;
                  if(((g_86 != NULL) && (g_86 != l_86)))
                    _fail(l_86);
                  else
                    g_86 = l_86;
                }
              }
            }
          }
          t = v_29;
          {
            ATerm z_3 (ATerm t)
            {
              t = not_null(g_86);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) d_86 == ATempty))
        {
          {
            t = term_g_27;
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
  ATerm a_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm w_86 = NULL,x_86 = NULL;
  w_86 = t;
  v_86 :
  if(match_cons(w_86, sym_Program_1))
    {
      x_86 = ATgetArgument(w_86, 0);
      {
        ATerm a_87 = NULL,c_87 = NULL;
        ATerm b_87 = NULL;
        t = SSLgetAnnotations(not_null(w_86));
        {
          b_87 = t;
          if(((a_87 != NULL) && (a_87 != b_87)))
            _fail(b_87);
          else
            a_87 = b_87;
        }
        {
          t = not_null(x_86);
          {
            ATerm e_87 = NULL;
            t = m_82(t);
            {
              c_87 = t;
              {
                ATerm f_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_87)), not_null(a_87));
                {
                  f_87 = t;
                  if(((e_87 != NULL) && (e_87 != f_87)))
                    _fail(f_87);
                  else
                    e_87 = f_87;
                }
                t = not_null(e_87);
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
  ATerm o_87 = NULL;
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      ATerm p_87 = NULL;
      p_87 = t;
      if(((o_87 != NULL) && (o_87 != p_87)))
        _fail(p_87);
      else
        o_87 = p_87;
      return(t);
    }
    t = Program_1(t, c_4);
    return(t);
  }
  t = option_defined_1(t, b_4);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm q_87 = NULL;
      ATerm r_87 = NULL;
      t = term_g_27;
      {
        ATerm e_4 (ATerm t)
        {
          t = not_null(o_87);
          return(t);
        }
        t = short_description_1(t, e_4);
        {
          t = concat_strings_0(t);
          {
            r_87 = t;
            if(((q_87 != NULL) && (q_87 != r_87)))
              _fail(r_87);
            else
              q_87 = r_87;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATempty, not_null(q_87)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATempty, term_x_29));
      {
        t = printnl_0(t);
        {
          t = term_e_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm s_87 = NULL;
                  s_87 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_87)), term_f_30));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_4);
                {
                  ATerm g_4 (ATerm t)
                  {
                    ATerm u_87 = NULL;
                    ATerm v_87 = NULL;
                    t = term_g_27;
                    {
                      ATerm h_4 (ATerm t)
                      {
                        t = not_null(o_87);
                        return(t);
                      }
                      t = long_description_1(t, h_4);
                      {
                        t = concat_strings_0(t);
                        {
                          v_87 = t;
                          if(((u_87 != NULL) && (u_87 != v_87)))
                            _fail(v_87);
                          else
                            u_87 = v_87;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_87)), term_k_30));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_4);
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
  ATerm f_88 = NULL,g_88 = NULL;
  f_88 = t;
  e_88 :
  if(match_cons(f_88, sym_Undefined_1))
    {
      g_88 = ATgetArgument(f_88, 0);
      {
        ATerm j_88 = NULL,l_88 = NULL;
        ATerm k_88 = NULL;
        t = SSLgetAnnotations(not_null(f_88));
        {
          k_88 = t;
          if(((j_88 != NULL) && (j_88 != k_88)))
            _fail(k_88);
          else
            j_88 = k_88;
        }
        {
          t = not_null(g_88);
          {
            ATerm n_88 = NULL;
            t = n_82(t);
            {
              l_88 = t;
              {
                ATerm o_88 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_88)), not_null(j_88));
                {
                  o_88 = t;
                  if(((n_88 != NULL) && (n_88 != o_88)))
                    _fail(o_88);
                  else
                    n_88 = o_88;
                }
                t = not_null(n_88);
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
  ATerm t_88 (ATerm t)
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_112, _id);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = Cons_2(t, _id, t_88);
      }
    return(t);
  }
  t = t_88(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_96 (ATerm))
{
  t = fetch_1(t, k_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_88 = NULL;
  y_88 = t;
  x_88 :
  if(match_cons(y_88, sym_Help_0))
    {
      ATerm a_89 = NULL,c_89 = NULL;
      ATerm n_30;
      n_30 = t;
      {
        ATerm b_89 = NULL;
        t = SSLgetAnnotations(not_null(y_88));
        {
          b_89 = t;
          if(((a_89 != NULL) && (a_89 != b_89)))
            _fail(b_89);
          else
            a_89 = b_89;
        }
      }
      t = n_30;
      {
        ATerm d_89 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_89));
        {
          d_89 = t;
          if(((c_89 != NULL) && (c_89 != d_89)))
            _fail(d_89);
          else
            c_89 = d_89;
        }
        t = not_null(c_89);
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
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_115(t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  l_89 = t;
  i_89 :
  if(match_cons(l_89, sym__2))
    {
      m_89 = ATgetArgument(l_89, 0);
      n_89 = ATgetArgument(l_89, 1);
      t = SSL_table_get(not_null(m_89), not_null(n_89));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  u_89 = t;
  t_89 :
  if(match_cons(u_89, sym__3))
    {
      v_89 = ATgetArgument(u_89, 0);
      w_89 = ATgetArgument(u_89, 1);
      x_89 = ATgetArgument(u_89, 2);
      {
        ATerm u_30;
        u_30 = t;
        {
          ATerm b_90 = NULL;
          ATerm c_90 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_89), not_null(w_89));
          {
            ATerm v_30 = t;
            int w_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_30);
              }
            else
              {
                t = v_30;
                t = (ATerm) ATempty;
              }
            {
              c_90 = t;
              if(((b_90 != NULL) && (b_90 != c_90)))
                _fail(c_90);
              else
                b_90 = c_90;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_89), not_null(w_89), (ATerm) ATinsert(CheckATermList(not_null(b_90)), not_null(x_89)));
            t = table_put_0(t);
          }
        }
        t = u_30;
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
  ATerm h_90 = NULL;
  ATerm i_90 = NULL;
  t = term_g_27;
  {
    t = q_95(t);
    {
      i_90 = t;
      if(((h_90 != NULL) && (h_90 != i_90)))
        _fail(i_90);
      else
        h_90 = i_90;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_30, term_d_30, not_null(h_90));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm p_90 = NULL,r_90 = NULL,s_90 = NULL;
  p_90 = t;
  n_90 :
  if(match_string(p_90, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(p_90) == AT_LIST) && ((ATermList) p_90 != ATempty)))
        {
          r_90 = ATgetFirst((ATermList) p_90);
          s_90 = (ATerm) ATgetNext((ATermList) p_90);
          {
            ATerm v_90 = NULL;
            ATerm x_30;
            x_30 = t;
            {
              t = not_null(r_90);
              t = c_0(t);
            }
            t = x_30;
            {
              ATerm w_90 = NULL;
              t = term_g_27;
              {
                t = d_0(t);
                {
                  w_90 = t;
                  if(((v_90 != NULL) && (v_90 != w_90)))
                    _fail(w_90);
                  else
                    v_90 = w_90;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_90)), not_null(v_90));
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
  ATerm i_4 (ATerm t)
  {
    ATerm b_91 = NULL;
    b_91 = t;
    a_91 :
    if(!(match_string(b_91, "--help")))
      {
        if(!(match_string(b_91, "-h")))
          {
            if(!(match_string(b_91, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_y_30;
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_z_30;
    return(t);
  }
  t = Option_3(t, i_4, n_4, o_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL;
  g_91 = t;
  d_91 :
  if(((ATgetType(g_91) == AT_LIST) && ((ATermList) g_91 != ATempty)))
    {
      h_91 = ATgetFirst((ATermList) g_91);
      i_91 = (ATerm) ATgetNext((ATermList) g_91);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_91)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_91)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_93 (ATerm), ATerm h_93 (ATerm))
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL;
  s_91 = t;
  r_91 :
  if(((ATgetType(s_91) == AT_LIST) && ((ATermList) s_91 != ATempty)))
    {
      t_91 = ATgetFirst((ATermList) s_91);
      u_91 = (ATerm) ATgetNext((ATermList) s_91);
      {
        ATerm y_91 = NULL,a_92 = NULL;
        ATerm z_91 = NULL;
        t = SSLgetAnnotations(not_null(s_91));
        {
          z_91 = t;
          if(((y_91 != NULL) && (y_91 != z_91)))
            _fail(z_91);
          else
            y_91 = z_91;
        }
        {
          t = not_null(t_91);
          {
            ATerm f_92 = NULL;
            t = g_93(t);
            {
              a_92 = t;
              {
                t = not_null(u_91);
                {
                  ATerm h_92 = NULL;
                  t = h_93(t);
                  {
                    f_92 = t;
                    {
                      ATerm i_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_92)), not_null(a_92)), not_null(y_91));
                      {
                        i_92 = t;
                        if(((h_92 != NULL) && (h_92 != i_92)))
                          _fail(i_92);
                        else
                          h_92 = i_92;
                      }
                      t = not_null(h_92);
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
  ATerm s_92 = NULL;
  s_92 = t;
  r_92 :
  if(((ATermList) s_92 == ATempty))
    {
      {
        ATerm u_92 = NULL,w_92 = NULL;
        ATerm a_31;
        a_31 = t;
        {
          ATerm v_92 = NULL;
          t = SSLgetAnnotations(not_null(s_92));
          {
            v_92 = t;
            if(((u_92 != NULL) && (u_92 != v_92)))
              _fail(v_92);
            else
              u_92 = v_92;
          }
        }
        t = a_31;
        {
          ATerm x_92 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_92));
          {
            x_92 = t;
            if(((w_92 != NULL) && (w_92 != x_92)))
              _fail(x_92);
            else
              w_92 = x_92;
          }
          t = not_null(w_92);
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
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL;
  j_93 = t;
  i_93 :
  if(match_cons(j_93, sym__2))
    {
      k_93 = ATgetArgument(j_93, 0);
      l_93 = ATgetArgument(j_93, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_22, not_null(k_93), not_null(l_93));
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
  ATerm b_31;
  b_31 = t;
  {
    ATerm p_4 (ATerm t)
    {
      t = term_c_31;
      t = o_95(t);
      return(t);
    }
    t = try_1(t, p_4);
  }
  t = b_31;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm t_93 = NULL;
      ATerm d_31;
      d_31 = t;
      {
        ATerm r_93 = NULL;
        ATerm s_93 = NULL;
        s_93 = t;
        if(((r_93 != NULL) && (r_93 != s_93)))
          _fail(s_93);
        else
          r_93 = s_93;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_24, not_null(r_93));
          t = set_config_0(t);
        }
      }
      t = d_31;
      {
        ATerm u_93 = NULL;
        u_93 = t;
        if(((t_93 != NULL) && (t_93 != u_93)))
          _fail(u_93);
        else
          t_93 = u_93;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_93));
      }
      return(t);
    }
    ATerm s_4 (ATerm t)
    {
      ATerm e_31 = t;
      int f_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              {
                t = o_95(t);
                t = Cons_2(t, _id, s_4);
              }
            }
          LocalPopChoice(f_31);
        }
      else
        {
          t = e_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_4, s_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
  ATerm i_31;
  i_31 = t;
  {
    ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL;
    d_94 = t;
    z_93 :
    if(match_cons(d_94, sym__3))
      {
        e_94 = ATgetArgument(d_94, 0);
        f_94 = ATgetArgument(d_94, 1);
        g_94 = ATgetArgument(d_94, 2);
        {
          if(((a_94 != NULL) && (a_94 != e_94)))
            _fail(e_94);
          else
            a_94 = e_94;
          {
            if(((b_94 != NULL) && (b_94 != f_94)))
              _fail(f_94);
            else
              b_94 = f_94;
            {
              if(((c_94 != NULL) && (c_94 != g_94)))
                _fail(g_94);
              else
                c_94 = g_94;
              t = SSL_table_put(not_null(a_94), not_null(b_94), not_null(c_94));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm j_94 = NULL;
  ATerm q_31;
  q_31 = t;
  {
    t = term_r_31;
    t = table_put_0(t);
  }
  t = q_31;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_95(t);
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_4);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_23;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            {
              ATerm y_4 (ATerm t)
              {
                ATerm z_4 (ATerm t)
                {
                  ATerm k_94 = NULL;
                  k_94 = t;
                  if(((j_94 != NULL) && (j_94 != k_94)))
                    _fail(k_94);
                  else
                    j_94 = k_94;
                  return(t);
                }
                t = Undefined_1(t, z_4);
                return(t);
              }
              t = option_defined_1(t, y_4);
              {
                ATerm w_31;
                w_31 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_94)), term_x_31));
                  t = printnl_0(t);
                }
                t = w_31;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, u_4);
      {
        ATerm y_31;
        y_31 = t;
        {
          t = term_c_30;
          t = table_destroy_0(t);
        }
        t = y_31;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, d_5);
  {
    t = store_options_0(t);
    {
      t = c_98(t);
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_98);
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            {
              ATerm d_32 = t;
              int g_32 = stack_ptr;
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
                  LocalPopChoice(g_32);
                }
              else
                {
                  t = d_32;
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
  ATerm g_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm h_32;
      h_32 = t;
      {
        ATerm n_94 = NULL;
        ATerm o_94 = NULL;
        t = term_g_24;
        {
          t = get_config_0(t);
          {
            o_94 = t;
            if(((n_94 != NULL) && (n_94 != o_94)))
              _fail(o_94);
            else
              n_94 = o_94;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATempty, not_null(n_94)));
          t = printnl_0(t);
        }
      }
      t = h_32;
      return(t);
    }
    t = if_verbose2_1(t, h_5);
    return(t);
  }
  t = iowrap_4(t, t_97, u_97, v_97, g_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  t = iowrap_3(t, r_97, s_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    t = _2(t, _id, o_97);
    return(t);
  }
  t = iowrap_2(t, i_5, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      t = simplify_0(t);
      {
        t = simplify_widen_0(t);
        {
          t = simplify_0(t);
          {
            t = simplify_narrow_0(t);
            t = simplify_0(t);
          }
        }
      }
      return(t);
    }
    t = apply_to_bodies_1(t, k_5);
    return(t);
  }
  t = iowrap_1(t, j_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
