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
Symbol sym_SRDef_3;
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
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
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
ATerm term_t_33;
ATerm term_v_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_z_24;
ATerm term_h_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_u_11;
ATerm term_s_7;
ATerm term_k_7;
void init_constant_terms (void)
{
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
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
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_c_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_f_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_c_27);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__3, term_e_31, term_f_31, (ATerm) ATempty);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
ATerm isect_1 (ATerm, ATerm r_110 (ATerm));
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm s_89 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_92 (ATerm), ATerm q_92 (ATerm));
ATerm tboundin_3 (ATerm, ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm k_110 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm));
ATerm crush_3 (ATerm, ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm x_110 (ATerm));
ATerm free_vars_3 (ATerm, ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_117 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm k_113 (ATerm));
ATerm Inline_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm NoEffect_0 (ATerm);
ATerm FuseScope_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm p_120 (ATerm), ATerm q_120 (ATerm));
ATerm alltd_1 (ATerm, ATerm p_119 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm r_120 (ATerm), ATerm s_120 (ATerm));
ATerm substitute_1 (ATerm, ATerm t_120 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_104 (ATerm), ATerm l_104 (ATerm));
ATerm for_3 (ATerm, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm));
ATerm diff_1 (ATerm, ATerm n_110 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm b_119 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm t_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm));
ATerm zip_1 (ATerm, ATerm v_114 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm y_88 (ATerm), ATerm z_88 (ATerm));
ATerm Prim_2 (ATerm, ATerm s_92 (ATerm), ATerm t_92 (ATerm));
ATerm Explode_2 (ATerm, ATerm u_88 (ATerm), ATerm v_88 (ATerm));
ATerm Op_2 (ATerm, ATerm s_90 (ATerm), ATerm t_90 (ATerm));
ATerm pat_td_1 (ATerm, ATerm h_122 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm t_103 (ATerm), ATerm u_103 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_103 (ATerm));
ATerm downup_1 (ATerm, ATerm n_117 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm));
ATerm Strategies_1 (ATerm, ATerm c_90 (ATerm));
ATerm Specification_1 (ATerm, ATerm e_90 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm k_122 (ATerm));
ATerm _2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_113 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_99 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_96 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_99 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_116 (ATerm), ATerm f_116 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_109 (ATerm), ATerm c_109 (ATerm));
ATerm crush_2 (ATerm, ATerm t_110 (ATerm), ATerm u_110 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_96 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_99 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_95 (ATerm));
ATerm map_1 (ATerm, ATerm r_112 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_95 (ATerm));
ATerm Program_1 (ATerm, ATerm x_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_99 (ATerm));
ATerm Undefined_1 (ATerm, ATerm y_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_113 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_116 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_95 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_92 (ATerm), ATerm v_92 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_95 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_95 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_98 (ATerm), ATerm h_98 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_98 (ATerm));
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, c_0);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm r_110 (ATerm))
{
  ATerm y_3 = NULL,z_3 = NULL,k_4 = NULL;
  y_3 = t;
  x_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      k_4 = ATgetArgument(y_3, 1);
      {
        t = not_null(z_3);
        {
          ATerm v_4 (ATerm t)
          {
            ATerm r_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(s_5);
              }
            else
              {
                t = r_5;
                {
                  ATerm t_5 = t;
                  int u_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_5;
                      z_5 = t;
                      {
                        ATerm d_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, r_110, d_0);
                      }
                      t = z_5;
                      t = Cons_2(t, _id, v_4);
                      LocalPopChoice(u_5);
                    }
                  else
                    {
                      t = t_5;
                      {
                        ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
                        q_4 = t;
                        j_3 :
                        if(((ATgetType(q_4) == AT_LIST) && ((ATermList) q_4 != ATempty)))
                          {
                            r_4 = ATgetFirst((ATermList) q_4);
                            s_4 = (ATerm) ATgetNext((ATermList) q_4);
                            {
                              t = not_null(s_4);
                              t = v_4(t);
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
          t = v_4(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  t = isect_1(t, eq_0);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm s_89 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_DynamicRules_1))
    {
      d_5 = ATgetArgument(c_5, 0);
      {
        ATerm g_5 = NULL,i_5 = NULL;
        ATerm h_5 = NULL;
        t = SSLgetAnnotations(not_null(c_5));
        {
          h_5 = t;
          if(((g_5 != NULL) && (g_5 != h_5)))
            _fail(h_5);
          else
            g_5 = h_5;
        }
        {
          t = not_null(d_5);
          {
            ATerm k_5 = NULL;
            t = s_89(t);
            {
              i_5 = t;
              {
                ATerm l_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(i_5)), not_null(g_5));
                {
                  l_5 = t;
                  if(((k_5 != NULL) && (k_5 != l_5)))
                    _fail(l_5);
                  else
                    k_5 = l_5;
                }
                t = not_null(k_5);
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
ATerm Scope_2 (ATerm t, ATerm p_92 (ATerm), ATerm q_92 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym_Scope_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      {
        ATerm c_6 = NULL,e_6 = NULL;
        ATerm d_6 = NULL;
        t = SSLgetAnnotations(not_null(w_5));
        {
          d_6 = t;
          if(((c_6 != NULL) && (c_6 != d_6)))
            _fail(d_6);
          else
            c_6 = d_6;
        }
        {
          t = not_null(x_5);
          {
            ATerm g_6 = NULL;
            t = p_92(t);
            {
              e_6 = t;
              {
                t = not_null(y_5);
                {
                  ATerm i_6 = NULL;
                  t = q_92(t);
                  {
                    g_6 = t;
                    {
                      ATerm j_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_6), not_null(g_6)), not_null(c_6));
                      {
                        j_6 = t;
                        if(((i_6 != NULL) && (i_6 != j_6)))
                          _fail(j_6);
                        else
                          i_6 = j_6;
                      }
                      t = not_null(i_6);
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
ATerm tboundin_3 (ATerm t, ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm))
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, k_121, i_121);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      t = DynamicRules_1(t, i_121);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym_DynamicRules_1))
    {
      s_6 = ATgetArgument(r_6, 0);
      {
        t = not_null(s_6);
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
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  x_6 :
  if(match_cons(c_7, sym_LRule_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      y_6 :
      if(match_cons(d_7, sym_Rule_3))
        {
          z_6 = ATgetArgument(d_7, 0);
          a_7 = ATgetArgument(d_7, 1);
          b_7 = ATgetArgument(d_7, 2);
          {
            t = not_null(z_6);
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
      if(match_cons(c_7, sym_Scope_2))
        {
          d_7 = ATgetArgument(c_7, 0);
          e_7 = ATgetArgument(c_7, 1);
          t = not_null(d_7);
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
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_Var_1))
    {
      p_7 = ATgetArgument(o_7, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm k_110 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        t = not_null(v_7);
        {
          ATerm a_8 (ATerm t)
          {
            ATerm f_6 = t;
            int h_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_7);
                LocalPopChoice(h_6);
              }
            else
              {
                t = f_6;
                {
                  ATerm k_6 = t;
                  int l_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_0 (ATerm t)
                      {
                        t = not_null(w_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_110, e_0);
                      t = a_8(t);
                      LocalPopChoice(l_6);
                    }
                  else
                    {
                      t = k_6;
                      t = Cons_2(t, _id, a_8);
                    }
                }
              }
            return(t);
          }
          t = a_8(t);
        }
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
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm))
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_109(t);
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
        f_8 = t;
        e_8 :
        if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
          {
            g_8 = ATgetFirst((ATermList) f_8);
            h_8 = (ATerm) ATgetNext((ATermList) f_8);
            {
              ATerm k_8 = NULL,m_8 = NULL;
              ATerm o_6;
              o_6 = t;
              {
                ATerm l_8 = NULL;
                t = not_null(g_8);
                {
                  t = f_109(t);
                  {
                    l_8 = t;
                    if(((k_8 != NULL) && (k_8 != l_8)))
                      _fail(l_8);
                    else
                      k_8 = l_8;
                  }
                }
              }
              t = o_6;
              {
                ATerm n_8 = NULL;
                t = not_null(h_8);
                {
                  t = foldr_3(t, d_109, e_109, f_109);
                  {
                    n_8 = t;
                    if(((m_8 != NULL) && (m_8 != n_8)))
                      _fail(n_8);
                    else
                      m_8 = n_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
                  t = e_109(t);
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
ATerm crush_3 (ATerm t, ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm x_110 (ATerm))
{
  ATerm v_8 = NULL;
  ATerm x_8 = NULL;
  v_8 = t;
  {
    ATerm y_8 = NULL;
    ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
    t = not_null(v_8);
    {
      y_8 = t;
      {
        t = SSL_explode_term(not_null(y_8));
        {
          a_9 = t;
          u_8 :
          if(match_cons(a_9, sym__2))
            {
              b_9 = ATgetArgument(a_9, 0);
              c_9 = ATgetArgument(a_9, 1);
              if(((x_8 != NULL) && (x_8 != c_9)))
                _fail(c_9);
              else
                x_8 = c_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_8);
      t = foldr_3(t, v_110, w_110, x_110);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_9 (ATerm t)
  {
    ATerm p_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        LocalPopChoice(t_6);
      }
    else
      {
        t = p_6;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL;
              ATerm w_6;
              w_6 = t;
              {
                ATerm i_9 = NULL;
                t = z_105(t);
                {
                  i_9 = t;
                  if(((h_9 != NULL) && (h_9 != i_9)))
                    _fail(i_9);
                  else
                    h_9 = i_9;
                }
              }
              t = w_6;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = not_null(h_9);
                    return(t);
                  }
                  t = split_2(t, j_9, n_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm m_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = a_106(t, f_0, j_9, m_0);
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, o_0, union_0, _id);
                }
              }
              LocalPopChoice(v_6);
            }
          else
            {
              t = u_6;
              {
                ATerm p_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, p_0, union_0, j_9);
              }
            }
        }
      }
    return(t);
  }
  t = j_9(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  r_9 = t;
  p_9 :
  if(match_cons(r_9, sym_Scope_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      q_9 :
      if(match_cons(t_9, sym_Seq_2))
        {
          u_9 = ATgetArgument(t_9, 0);
          v_9 = ATgetArgument(t_9, 1);
          {
            ATerm z_9 = NULL,a_10 = NULL;
            ATerm b_10 = NULL,d_10 = NULL;
            ATerm c_10 = NULL;
            t = not_null(u_9);
            {
              t = tvars_0(t);
              {
                c_10 = t;
                if(((b_10 != NULL) && (b_10 != c_10)))
                  _fail(c_10);
                else
                  b_10 = c_10;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_10), not_null(s_9));
              {
                ATerm e_10 = NULL;
                t = isect_0(t);
                {
                  d_10 = t;
                  {
                    if(((z_9 != NULL) && (z_9 != d_10)))
                      _fail(d_10);
                    else
                      z_9 = d_10;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), not_null(z_9));
                      {
                        t = diff_0(t);
                        {
                          e_10 = t;
                          {
                            if(((a_10 != NULL) && (a_10 != e_10)))
                              _fail(e_10);
                            else
                              a_10 = e_10;
                            {
                              ATerm h_7 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = h_7;
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_9), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_9), (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_10), not_null(v_9))));
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
ATerm topdown_1 (ATerm t, ATerm l_117 (ATerm))
{
  t = l_117(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = topdown_1(t, l_117);
      return(t);
    }
    t = _all(t, r_0);
  }
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, s_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  ATerm c_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_10), not_null(q_10)));
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_10), not_null(v_10)));
    return(t);
  }
  r_10 = t;
  l_10 :
  if(match_cons(r_10, sym_Seq_2))
    {
      s_10 = ATgetArgument(r_10, 0);
      v_10 = ATgetArgument(r_10, 1);
      m_10 :
      if(match_cons(v_10, sym_Scope_2))
        {
          p_10 = ATgetArgument(v_10, 0);
          q_10 = ATgetArgument(v_10, 1);
          n_10 :
          if(match_cons(s_10, sym_Scope_2))
            {
              t_10 = ATgetArgument(s_10, 0);
              u_10 = ATgetArgument(s_10, 1);
              {
                ATerm i_7 = t;
                int j_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_11(t);
                    LocalPopChoice(j_7);
                  }
                else
                  {
                    t = i_7;
                    t = d_11(t);
                  }
              }
            }
          else
            {
              t = c_11(t);
            }
        }
      else
        {
          o_10 :
          if(match_cons(s_10, sym_Scope_2))
            {
              t_10 = ATgetArgument(s_10, 0);
              u_10 = ATgetArgument(s_10, 1);
              t = d_11(t);
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
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  k_11 = t;
  f_11 :
  if(match_cons(k_11, sym_Let_2))
    {
      l_11 = ATgetArgument(k_11, 0);
      r_11 = ATgetArgument(k_11, 1);
      g_11 :
      if(((ATgetType(l_11) == AT_LIST) && ((ATermList) l_11 != ATempty)))
        {
          m_11 = ATgetFirst((ATermList) l_11);
          q_11 = (ATerm) ATgetNext((ATermList) l_11);
          h_11 :
          if(match_cons(m_11, sym_SDef_3))
            {
              n_11 = ATgetArgument(m_11, 0);
              o_11 = ATgetArgument(m_11, 1);
              p_11 = ATgetArgument(m_11, 2);
              i_11 :
              if(((ATermList) o_11 == ATempty))
                {
                  j_11 :
                  if(((ATermList) q_11 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_k_7), not_null(n_11), (ATerm)ATempty, not_null(p_11))), not_null(r_11));
                    }
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
ATerm at_suffix_1 (ATerm t, ATerm k_113 (ATerm))
{
  ATerm w_11 (ATerm t)
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_113(t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = Cons_2(t, _id, w_11);
      }
    return(t);
  }
  t = w_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Let_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm o_12 = NULL,p_12 = NULL;
        ATerm e_13 = NULL;
        t = not_null(k_12);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
            q_12 = t;
            e_12 :
            if(((ATgetType(q_12) == AT_LIST) && ((ATermList) q_12 != ATempty)))
              {
                r_12 = ATgetFirst((ATermList) q_12);
                v_12 = (ATerm) ATgetNext((ATermList) q_12);
                f_12 :
                if(match_cons(r_12, sym_SDef_3))
                  {
                    s_12 = ATgetArgument(r_12, 0);
                    t_12 = ATgetArgument(r_12, 1);
                    u_12 = ATgetArgument(r_12, 2);
                    g_12 :
                    if(((ATermList) t_12 == ATempty))
                      {
                        {
                          ATerm d_13 = NULL;
                          t = not_null(l_12);
                          {
                            ATerm v_0 (ATerm t)
                            {
                              ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
                              z_12 = t;
                              a_12 :
                              if(match_cons(z_12, sym_Call_2))
                                {
                                  a_13 = ATgetArgument(z_12, 0);
                                  c_13 = ATgetArgument(z_12, 1);
                                  b_12 :
                                  if(match_cons(a_13, sym_SVar_1))
                                    {
                                      b_13 = ATgetArgument(a_13, 0);
                                      c_12 :
                                      if(((ATermList) c_13 == ATempty))
                                        {
                                          {
                                            if(((s_12 != NULL) && (s_12 != b_13)))
                                              _fail(b_13);
                                            else
                                              s_12 = b_13;
                                            t = not_null(u_12);
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
                              d_13 = t;
                              {
                                if(((o_12 != NULL) && (o_12 != d_13)))
                                  _fail(d_13);
                                else
                                  o_12 = d_13;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_12)), (ATerm) ATempty), not_null(o_12));
                                  {
                                    ATerm q_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_subterm_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = q_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(v_12);
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
            e_13 = t;
            if(((p_12 != NULL) && (p_12 != e_13)))
              _fail(e_13);
            else
              p_12 = e_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_12), not_null(o_12));
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
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  s_13 = t;
  m_13 :
  if(match_cons(s_13, sym__2))
    {
      t_13 = ATgetArgument(s_13, 0);
      v_13 = ATgetArgument(s_13, 1);
      n_13 :
      if(match_cons(t_13, sym_Build_1))
        {
          u_13 = ATgetArgument(t_13, 0);
          o_13 :
          if(match_cons(v_13, sym_Where_1))
            {
              w_13 = ATgetArgument(v_13, 0);
              p_13 :
              if(match_cons(w_13, sym_Prim_2))
                {
                  q_13 = ATgetArgument(w_13, 0);
                  r_13 = ATgetArgument(w_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_13), not_null(r_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(v_13, sym_Prim_2))
                {
                  w_13 = ATgetArgument(v_13, 0);
                  x_13 = ATgetArgument(v_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(w_13), not_null(x_13));
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
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  n_14 = t;
  i_14 :
  if(match_cons(n_14, sym__2))
    {
      o_14 = ATgetArgument(n_14, 0);
      q_14 = ATgetArgument(n_14, 1);
      j_14 :
      if(match_cons(o_14, sym_Build_1))
        {
          p_14 = ATgetArgument(o_14, 0);
          k_14 :
          if(match_cons(q_14, sym_Where_1))
            {
              r_14 = ATgetArgument(q_14, 0);
              l_14 :
              if(match_cons(r_14, sym_Build_1))
                {
                  m_14 = ATgetArgument(r_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_14, sym_Build_1))
                {
                  r_14 = ATgetArgument(q_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_14));
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  h_15 = t;
  c_15 :
  if(match_cons(h_15, sym__2))
    {
      i_15 = ATgetArgument(h_15, 0);
      m_15 = ATgetArgument(h_15, 1);
      d_15 :
      if(match_cons(i_15, sym_Build_1))
        {
          j_15 = ATgetArgument(i_15, 0);
          e_15 :
          if(match_cons(j_15, sym_Op_2))
            {
              k_15 = ATgetArgument(j_15, 0);
              l_15 = ATgetArgument(j_15, 1);
              f_15 :
              if(match_cons(m_15, sym_Match_1))
                {
                  n_15 = ATgetArgument(m_15, 0);
                  g_15 :
                  if(match_cons(n_15, sym_Op_2))
                    {
                      o_15 = ATgetArgument(n_15, 0);
                      p_15 = ATgetArgument(n_15, 1);
                      {
                        ATerm s_15 = NULL,t_15 = NULL;
                        if(((k_15 != NULL) && (k_15 != o_15)))
                          _fail(o_15);
                        else
                          k_15 = o_15;
                        {
                          if(((s_15 != NULL) && (s_15 != p_15)))
                            _fail(p_15);
                          else
                            s_15 = p_15;
                          {
                            ATerm z_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), not_null(s_15));
                            {
                              ATerm w_0 (ATerm t)
                              {
                                ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
                                u_15 = t;
                                a_15 :
                                if(match_cons(u_15, sym__2))
                                  {
                                    v_15 = ATgetArgument(u_15, 0);
                                    w_15 = ATgetArgument(u_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, w_0);
                              {
                                z_15 = t;
                                if(((t_15 != NULL) && (t_15 != z_15)))
                                  _fail(z_15);
                                else
                                  t_15 = z_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_15), not_null(l_15))));
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
ATerm MisMatch_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  j_16 = t;
  e_16 :
  if(match_cons(j_16, sym__2))
    {
      k_16 = ATgetArgument(j_16, 0);
      o_16 = ATgetArgument(j_16, 1);
      f_16 :
      if(match_cons(k_16, sym_Build_1))
        {
          l_16 = ATgetArgument(k_16, 0);
          g_16 :
          if(match_cons(l_16, sym_Op_2))
            {
              m_16 = ATgetArgument(l_16, 0);
              n_16 = ATgetArgument(l_16, 1);
              h_16 :
              if(match_cons(o_16, sym_Match_1))
                {
                  p_16 = ATgetArgument(o_16, 0);
                  i_16 :
                  if(match_cons(p_16, sym_Op_2))
                    {
                      q_16 = ATgetArgument(p_16, 0);
                      r_16 = ATgetArgument(p_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(q_16));
                        {
                          ATerm r_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = r_7;
                            }
                        }
                        t = term_s_7;
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
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm z_7 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            LocalPopChoice(b_8);
          }
        else
          {
            t = z_7;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
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
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  ATerm s_17 (ATerm t)
  {
    ATerm p_17 = NULL;
    ATerm q_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(h_17));
    {
      t = BMF_0(t);
      {
        q_17 = t;
        if(((p_17 != NULL) && (p_17 != q_17)))
          _fail(q_17);
        else
          p_17 = q_17;
      }
    }
    t = not_null(p_17);
    return(t);
  }
  f_17 = t;
  b_17 :
  if(match_cons(f_17, sym_Seq_2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      c_17 :
      if(match_cons(h_17, sym_Seq_2))
        {
          d_17 = ATgetArgument(h_17, 0);
          e_17 = ATgetArgument(h_17, 1);
          {
            ATerm i_8 = t;
            int j_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_17 = NULL;
                ATerm m_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(d_17));
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
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_17), not_null(e_17));
                LocalPopChoice(j_8);
              }
            else
              {
                t = i_8;
                t = s_17(t);
              }
          }
        }
      else
        {
          t = s_17(t);
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
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  a_18 = t;
  w_17 :
  if(match_cons(a_18, sym_Seq_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      d_18 = ATgetArgument(a_18, 1);
      x_17 :
      if(match_cons(b_18, sym_Build_1))
        {
          c_18 = ATgetArgument(b_18, 0);
          y_17 :
          if(match_cons(d_18, sym_Seq_2))
            {
              e_18 = ATgetArgument(d_18, 0);
              g_18 = ATgetArgument(d_18, 1);
              z_17 :
              if(match_cons(e_18, sym_Build_1))
                {
                  f_18 = ATgetArgument(e_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_18)), not_null(g_18));
                }
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
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  p_18 = t;
  n_18 :
  if(match_cons(p_18, sym_Scope_2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      o_18 :
      if(match_cons(r_18, sym_Scope_2))
        {
          s_18 = ATgetArgument(r_18, 0);
          t_18 = ATgetArgument(r_18, 1);
          {
            ATerm x_18 = NULL;
            ATerm y_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(s_18));
            {
              t = conc_0(t);
              {
                y_18 = t;
                if(((x_18 != NULL) && (x_18 != y_18)))
                  _fail(y_18);
                else
                  x_18 = y_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_18), not_null(t_18));
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
  ATerm d_19 = NULL,e_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_Var_1))
    {
      e_19 = ATgetArgument(d_19, 0);
      t = not_null(e_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  k_19 = t;
  i_19 :
  if(match_cons(k_19, sym__2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      j_19 :
      if(((ATgetType(m_19) == AT_LIST) && ((ATermList) m_19 != ATempty)))
        {
          n_19 = ATgetFirst((ATermList) m_19);
          o_19 = (ATerm) ATgetNext((ATermList) m_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), not_null(o_19));
        }
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
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  w_19 = t;
  t_19 :
  if(match_cons(w_19, sym__2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      u_19 :
      if(((ATgetType(y_19) == AT_LIST) && ((ATermList) y_19 != ATempty)))
        {
          z_19 = ATgetFirst((ATermList) y_19);
          c_20 = (ATerm) ATgetNext((ATermList) y_19);
          v_19 :
          if(match_cons(z_19, sym__2))
            {
              a_20 = ATgetArgument(z_19, 0);
              b_20 = ATgetArgument(z_19, 1);
              {
                ATerm e_20 = NULL;
                if(((x_19 != NULL) && (x_19 != a_20)))
                  _fail(a_20);
                else
                  x_19 = a_20;
                {
                  if(((e_20 != NULL) && (e_20 != b_20)))
                    _fail(b_20);
                  else
                    e_20 = b_20;
                  t = not_null(e_20);
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
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm p_120 (ATerm), ATerm q_120 (ATerm))
{
  ATerm k_20 = NULL;
  ATerm m_20 = NULL,n_20 = NULL;
  k_20 = t;
  {
    ATerm o_20 = NULL;
    t = not_null(k_20);
    {
      ATerm p_20 = NULL;
      t = p_120(t);
      {
        o_20 = t;
        {
          if(((m_20 != NULL) && (m_20 != o_20)))
            _fail(o_20);
          else
            m_20 = o_20;
          {
            t = q_120(t);
            {
              p_20 = t;
              if(((n_20 != NULL) && (n_20 != p_20)))
                _fail(p_20);
              else
                n_20 = p_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm p_119 (ATerm))
{
  ATerm t_20 (ATerm t)
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_119(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = _all(t, t_20);
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym__2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        ATerm d_21 = NULL;
        if(((d_21 != NULL) && (d_21 != a_21)))
          _fail(a_21);
        else
          d_21 = a_21;
      }
    }
  else
    {
      if(match_cons(y_20, sym__3))
        {
          z_20 = ATgetArgument(y_20, 0);
          a_21 = ATgetArgument(y_20, 1);
          b_21 = ATgetArgument(y_20, 2);
          {
            ATerm j_21 = NULL;
            ATerm k_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), not_null(a_21));
            {
              t = zip_1(t, _id);
              {
                k_21 = t;
                if(((j_21 != NULL) && (j_21 != k_21)))
                  _fail(k_21);
                else
                  j_21 = k_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), not_null(b_21));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm r_120 (ATerm), ATerm s_120 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  t = subs_args_0(t);
  {
    q_21 = t;
    p_21 :
    if(match_cons(q_21, sym__2))
      {
        r_21 = ATgetArgument(q_21, 0);
        s_21 = ATgetArgument(q_21, 1);
        {
          t = not_null(s_21);
          {
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = not_null(r_21);
                return(t);
              }
              t = SubsVar_2(t, r_120, y_0);
              t = s_120(t);
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
ATerm substitute_1 (ATerm t, ATerm t_120 (ATerm))
{
  t = substitute_2(t, t_120, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  z_21 = t;
  x_21 :
  if(match_cons(z_21, sym__2))
    {
      a_22 = ATgetArgument(z_21, 0);
      b_22 = ATgetArgument(z_21, 1);
      y_21 :
      if(((ATgetType(b_22) == AT_LIST) && ((ATermList) b_22 != ATempty)))
        {
          c_22 = ATgetFirst((ATermList) b_22);
          d_22 = (ATerm) ATgetNext((ATermList) b_22);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_22)), not_null(c_22)), not_null(d_22));
        }
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
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  s_22 = t;
  q_22 :
  if(((ATgetType(s_22) == AT_LIST) && ((ATermList) s_22 != ATempty)))
    {
      t_22 = ATgetFirst((ATermList) s_22);
      w_22 = (ATerm) ATgetNext((ATermList) s_22);
      r_22 :
      if(match_cons(t_22, sym__2))
        {
          u_22 = ATgetArgument(t_22, 0);
          v_22 = ATgetArgument(t_22, 1);
          {
            ATerm a_23 = NULL,b_23 = NULL,h_23 = NULL,n_23 = NULL;
            ATerm s_8;
            s_8 = t;
            {
              ATerm c_23 = NULL;
              ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
              t = not_null(v_22);
              {
                c_23 = t;
                {
                  t = SSL_explode_term(not_null(c_23));
                  {
                    e_23 = t;
                    l_22 :
                    if(match_cons(e_23, sym__2))
                      {
                        f_23 = ATgetArgument(e_23, 0);
                        g_23 = ATgetArgument(e_23, 1);
                        {
                          if(((a_23 != NULL) && (a_23 != f_23)))
                            _fail(f_23);
                          else
                            a_23 = f_23;
                          if(((b_23 != NULL) && (b_23 != g_23)))
                            _fail(g_23);
                          else
                            b_23 = g_23;
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
            t = s_8;
            {
              ATerm t_8;
              t_8 = t;
              {
                ATerm i_23 = NULL;
                ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
                t = not_null(u_22);
                {
                  i_23 = t;
                  {
                    t = SSL_explode_term(not_null(i_23));
                    {
                      k_23 = t;
                      o_22 :
                      if(match_cons(k_23, sym__2))
                        {
                          l_23 = ATgetArgument(k_23, 0);
                          m_23 = ATgetArgument(k_23, 1);
                          {
                            if(((a_23 != NULL) && (a_23 != l_23)))
                              _fail(l_23);
                            else
                              a_23 = l_23;
                            if(((h_23 != NULL) && (h_23 != m_23)))
                              _fail(m_23);
                            else
                              h_23 = m_23;
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
              t = t_8;
              {
                ATerm o_23 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(b_23));
                {
                  t = zip_1(t, _id);
                  {
                    o_23 = t;
                    if(((n_23 != NULL) && (n_23 != o_23)))
                      _fail(o_23);
                    else
                      n_23 = o_23;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(w_22));
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
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  w_23 :
  if(((ATgetType(y_23) == AT_LIST) && ((ATermList) y_23 != ATempty)))
    {
      z_23 = ATgetFirst((ATermList) y_23);
      c_24 = (ATerm) ATgetNext((ATermList) y_23);
      x_23 :
      if(match_cons(z_23, sym__2))
        {
          a_24 = ATgetArgument(z_23, 0);
          b_24 = ATgetArgument(z_23, 1);
          {
            ATerm e_24 = NULL;
            if(((a_24 != NULL) && (a_24 != b_24)))
              _fail(b_24);
            else
              a_24 = b_24;
            {
              if(((e_24 != NULL) && (e_24 != c_24)))
                _fail(c_24);
              else
                e_24 = c_24;
              t = not_null(e_24);
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
ATerm while_not_2 (ATerm t, ATerm k_104 (ATerm), ATerm l_104 (ATerm))
{
  ATerm g_24 (ATerm t)
  {
    ATerm w_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_104(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = w_8;
        {
          t = l_104(t);
          t = g_24(t);
        }
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm))
{
  t = n_104(t);
  t = while_not_2(t, o_104, p_104);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym__2))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      if(((k_24 != NULL) && (k_24 != l_24)))
        _fail(l_24);
      else
        k_24 = l_24;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(((ATgetType(r_24) == AT_LIST) && ((ATermList) r_24 != ATempty)))
    {
      s_24 = ATgetFirst((ATermList) r_24);
      t_24 = (ATerm) ATgetNext((ATermList) r_24);
      {
        t = j_110(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm w_24 = NULL;
            w_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), not_null(w_24));
              t = i_110(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(t_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      {
        t = not_null(d_25);
        {
          ATerm i_25 (ATerm t)
          {
            ATerm d_9 = t;
            int e_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(e_9);
              }
            else
              {
                t = d_9;
                {
                  ATerm f_9 = t;
                  int g_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(e_25);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_110, a_1);
                      t = i_25(t);
                      LocalPopChoice(g_9);
                    }
                  else
                    {
                      t = f_9;
                      t = Cons_2(t, _id, i_25);
                    }
                }
              }
            return(t);
          }
          t = i_25(t);
        }
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm k_25 = NULL;
          k_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_25));
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_1 (ATerm t)
              {
                ATerm o_9 = t;
                int w_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(w_9);
                  }
                else
                  {
                    t = o_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, e_1);
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, b_1, c_1, d_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm b_119 (ATerm))
{
  ATerm n_25 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_119(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = _one(t, n_25);
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym__2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      {
        ATerm f_10;
        f_10 = t;
        {
          t = not_null(t_25);
          {
            ATerm f_1 (ATerm t)
            {
              ATerm w_25 = NULL;
              w_25 = t;
              if(((s_25 != NULL) && (s_25 != w_25)))
                _fail(w_25);
              else
                s_25 = w_25;
              return(t);
            }
            t = oncetd_1(t, f_1);
          }
        }
        t = f_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_Var_1))
    {
      j_26 = ATgetArgument(i_26, 0);
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_26 = NULL,o_26 = NULL;
            ATerm n_26 = NULL;
            t = SSLgetAnnotations(not_null(i_26));
            {
              n_26 = t;
              if(((m_26 != NULL) && (m_26 != n_26)))
                _fail(n_26);
              else
                m_26 = n_26;
            }
            {
              t = not_null(j_26);
              {
                ATerm q_26 = NULL;
                t = t_0(t);
                {
                  o_26 = t;
                  {
                    ATerm r_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_26)), not_null(m_26));
                    {
                      r_26 = t;
                      if(((q_26 != NULL) && (q_26 != r_26)))
                        _fail(r_26);
                      else
                        q_26 = r_26;
                    }
                    t = not_null(q_26);
                  }
                }
              }
            }
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            {
              ATerm u_26 = NULL,w_26 = NULL;
              ATerm v_26 = NULL;
              t = SSLgetAnnotations(not_null(i_26));
              {
                v_26 = t;
                if(((u_26 != NULL) && (u_26 != v_26)))
                  _fail(v_26);
                else
                  u_26 = v_26;
              }
              {
                t = not_null(j_26);
                {
                  ATerm y_26 = NULL;
                  t = t_0(t);
                  {
                    w_26 = t;
                    {
                      ATerm z_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_26)), not_null(u_26));
                      {
                        z_26 = t;
                        if(((y_26 != NULL) && (y_26 != z_26)))
                          _fail(z_26);
                        else
                          y_26 = z_26;
                      }
                      t = not_null(y_26);
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
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  z_28 = t;
  y_27 :
  if(match_cons(z_28, sym_Seq_2))
    {
      a_29 = ATgetArgument(z_28, 0);
      c_29 = ATgetArgument(z_28, 1);
      z_27 :
      if(match_cons(a_29, sym_Assign_1))
        {
          b_29 = ATgetArgument(a_29, 0);
          a_28 :
          if(match_cons(b_29, sym_Var_1))
            {
              s_28 = ATgetArgument(b_29, 0);
              b_28 :
              if(match_cons(c_29, sym_Seq_2))
                {
                  d_29 = ATgetArgument(c_29, 0);
                  e_29 = ATgetArgument(c_29, 1);
                  c_28 :
                  if(match_cons(d_29, sym_Build_1))
                    {
                      v_28 = ATgetArgument(d_29, 0);
                      d_28 :
                      if(match_cons(v_28, sym_Var_1))
                        {
                          w_28 = ATgetArgument(v_28, 0);
                          {
                            ATerm k_29 = NULL;
                            if(((s_28 != NULL) && (s_28 != w_28)))
                              _fail(w_28);
                            else
                              s_28 = w_28;
                            {
                              if(((k_29 != NULL) && (k_29 != e_29)))
                                _fail(e_29);
                              else
                                k_29 = e_29;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_28))), not_null(k_29));
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
          if(match_cons(a_29, sym_Build_1))
            {
              b_29 = ATgetArgument(a_29, 0);
              e_28 :
              if(match_cons(c_29, sym_Scope_2))
                {
                  d_29 = ATgetArgument(c_29, 0);
                  e_29 = ATgetArgument(c_29, 1);
                  f_28 :
                  if(match_cons(e_29, sym_Seq_2))
                    {
                      f_29 = ATgetArgument(e_29, 0);
                      i_29 = ATgetArgument(e_29, 1);
                      g_28 :
                      if(match_cons(f_29, sym_Assign_1))
                        {
                          g_29 = ATgetArgument(f_29, 0);
                          h_28 :
                          if(match_cons(g_29, sym_Var_1))
                            {
                              h_29 = ATgetArgument(g_29, 0);
                              {
                                ATerm i_10 = t;
                                int j_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_30 = NULL,p_30 = NULL;
                                    ATerm k_10;
                                    k_10 = t;
                                    {
                                      ATerm o_30 = NULL;
                                      t = not_null(b_29);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(d_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  o_30 = t;
                                                  if(((n_30 != NULL) && (n_30 != o_30)))
                                                    _fail(o_30);
                                                  else
                                                    n_30 = o_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = k_10;
                                    {
                                      ATerm q_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, not_null(b_29)), not_null(i_29));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          q_30 = t;
                                          if(((p_30 != NULL) && (p_30 != q_30)))
                                            _fail(q_30);
                                          else
                                            p_30 = q_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_30), not_null(p_30)));
                                    }
                                    LocalPopChoice(j_10);
                                  }
                                else
                                  {
                                    t = i_10;
                                    {
                                      ATerm v_30 = NULL,x_30 = NULL;
                                      ATerm w_10;
                                      w_10 = t;
                                      {
                                        ATerm w_30 = NULL;
                                        t = not_null(b_29);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(d_29));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    w_30 = t;
                                                    if(((v_30 != NULL) && (v_30 != w_30)))
                                                      _fail(w_30);
                                                    else
                                                      v_30 = w_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = w_10;
                                      {
                                        ATerm y_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, not_null(b_29)), not_null(i_29));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            y_30 = t;
                                            if(((x_30 != NULL) && (x_30 != y_30)))
                                              _fail(y_30);
                                            else
                                              x_30 = y_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_30), not_null(x_30)));
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
      if(match_cons(z_28, sym_Scope_2))
        {
          a_29 = ATgetArgument(z_28, 0);
          c_29 = ATgetArgument(z_28, 1);
          i_28 :
          if(match_cons(c_29, sym_Seq_2))
            {
              d_29 = ATgetArgument(c_29, 0);
              e_29 = ATgetArgument(c_29, 1);
              j_28 :
              if(match_cons(d_29, sym_Assign_1))
                {
                  v_28 = ATgetArgument(d_29, 0);
                  k_28 :
                  if(match_cons(v_28, sym_Var_1))
                    {
                      w_28 = ATgetArgument(v_28, 0);
                      l_28 :
                      if(match_cons(e_29, sym_Seq_2))
                        {
                          f_29 = ATgetArgument(e_29, 0);
                          i_29 = ATgetArgument(e_29, 1);
                          m_28 :
                          if(match_cons(f_29, sym_Assign_2))
                            {
                              g_29 = ATgetArgument(f_29, 0);
                              t_28 = ATgetArgument(f_29, 1);
                              n_28 :
                              if(match_cons(g_29, sym_Var_1))
                                {
                                  h_29 = ATgetArgument(g_29, 0);
                                  o_28 :
                                  if(match_cons(t_28, sym_Var_1))
                                    {
                                      u_28 = ATgetArgument(t_28, 0);
                                      {
                                        ATerm o_29 = NULL,p_29 = NULL,r_29 = NULL;
                                        if(((w_28 != NULL) && (w_28 != u_28)))
                                          _fail(u_28);
                                        else
                                          w_28 = u_28;
                                        {
                                          if(((o_29 != NULL) && (o_29 != i_29)))
                                            _fail(i_29);
                                          else
                                            o_29 = i_29;
                                          {
                                            ATerm x_10;
                                            x_10 = t;
                                            {
                                              ATerm q_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(a_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(a_29));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          q_29 = t;
                                                          if(((p_29 != NULL) && (p_29 != q_29)))
                                                            _fail(q_29);
                                                          else
                                                            p_29 = q_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = x_10;
                                            {
                                              ATerm s_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(o_29));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  s_29 = t;
                                                  if(((r_29 != NULL) && (r_29 != s_29)))
                                                    _fail(s_29);
                                                  else
                                                    r_29 = s_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(r_29)));
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
                              if(match_cons(f_29, sym_Assign_1))
                                {
                                  g_29 = ATgetArgument(f_29, 0);
                                  p_28 :
                                  if(match_cons(g_29, sym_Var_1))
                                    {
                                      h_29 = ATgetArgument(g_29, 0);
                                      {
                                        ATerm x_29 = NULL,z_29 = NULL;
                                        ATerm y_10;
                                        y_10 = t;
                                        {
                                          ATerm y_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(a_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(a_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      y_29 = t;
                                                      if(((x_29 != NULL) && (x_29 != y_29)))
                                                        _fail(y_29);
                                                      else
                                                        x_29 = y_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = y_10;
                                        {
                                          ATerm a_30 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(i_29));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              a_30 = t;
                                              if(((z_29 != NULL) && (z_29 != a_30)))
                                                _fail(a_30);
                                              else
                                                z_29 = a_30;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(z_29)));
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
                  if(match_cons(d_29, sym_Assign_2))
                    {
                      v_28 = ATgetArgument(d_29, 0);
                      x_28 = ATgetArgument(d_29, 1);
                      q_28 :
                      if(match_cons(v_28, sym_Var_1))
                        {
                          w_28 = ATgetArgument(v_28, 0);
                          r_28 :
                          if(match_cons(x_28, sym_Var_1))
                            {
                              y_28 = ATgetArgument(x_28, 0);
                              {
                                ATerm f_30 = NULL,h_30 = NULL;
                                ATerm z_10;
                                z_10 = t;
                                {
                                  ATerm g_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(a_29));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), (ATerm) ATinsert(ATempty, not_null(w_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          g_30 = t;
                                          if(((f_30 != NULL) && (f_30 != g_30)))
                                            _fail(g_30);
                                          else
                                            f_30 = g_30;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = z_10;
                                {
                                  ATerm i_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(w_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_28))), not_null(e_29));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      i_30 = t;
                                      if(((h_30 != NULL) && (h_30 != i_30)))
                                        _fail(i_30);
                                      else
                                        h_30 = i_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_30), not_null(h_30));
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  s_31 = t;
  q_31 :
  if(match_cons(s_31, sym_Seq_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      r_31 :
      if(match_cons(u_31, sym_Let_2))
        {
          v_31 = ATgetArgument(u_31, 0);
          w_31 = ATgetArgument(u_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_31), not_null(w_31)));
        }
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
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym_Cong_2))
    {
      t_32 = ATgetArgument(s_32, 0);
      u_32 = ATgetArgument(s_32, 1);
      {
        ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,r_36 = NULL,t_36 = NULL,v_36 = NULL;
        ATerm a_11;
        a_11 = t;
        {
          ATerm d_33 = NULL;
          t = not_null(u_32);
          {
            ATerm g_33 = NULL;
            t = map_1(t, new_0);
            {
              d_33 = t;
              {
                if(((a_33 != NULL) && (a_33 != d_33)))
                  _fail(d_33);
                else
                  a_33 = d_33;
                {
                  t = not_null(a_33);
                  {
                    ATerm h_33 = NULL;
                    ATerm g_1 (ATerm t)
                    {
                      ATerm e_33 = NULL;
                      ATerm f_33 = NULL;
                      f_33 = t;
                      if(((e_33 != NULL) && (e_33 != f_33)))
                        _fail(f_33);
                      else
                        e_33 = f_33;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33));
                      return(t);
                    }
                    t = map_1(t, g_1);
                    {
                      g_33 = t;
                      {
                        if(((x_32 != NULL) && (x_32 != g_33)))
                          _fail(g_33);
                        else
                          x_32 = g_33;
                        {
                          ATerm i_33 = NULL;
                          t = new_0(t);
                          {
                            h_33 = t;
                            {
                              if(((y_32 != NULL) && (y_32 != h_33)))
                                _fail(h_33);
                              else
                                y_32 = h_33;
                              {
                                t = not_null(u_32);
                                {
                                  ATerm l_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    i_33 = t;
                                    {
                                      if(((b_33 != NULL) && (b_33 != i_33)))
                                        _fail(i_33);
                                      else
                                        b_33 = i_33;
                                      {
                                        t = not_null(b_33);
                                        {
                                          ATerm m_33 = NULL,q_36 = NULL;
                                          ATerm h_1 (ATerm t)
                                          {
                                            ATerm j_33 = NULL;
                                            ATerm k_33 = NULL;
                                            k_33 = t;
                                            if(((j_33 != NULL) && (j_33 != k_33)))
                                              _fail(k_33);
                                            else
                                              j_33 = k_33;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_33));
                                            return(t);
                                          }
                                          t = map_1(t, h_1);
                                          {
                                            l_33 = t;
                                            {
                                              if(((z_32 != NULL) && (z_32 != l_33)))
                                                _fail(l_33);
                                              else
                                                z_32 = l_33;
                                              {
                                                ATerm u_35 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(b_33));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    u_35 = t;
                                                    if(((m_33 != NULL) && (m_33 != u_35)))
                                                      _fail(u_35);
                                                    else
                                                      m_33 = u_35;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(u_32));
                                                  {
                                                    ATerm i_1 (ATerm t)
                                                    {
                                                      ATerm v_35 = NULL,a_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
                                                      v_35 = t;
                                                      l_32 :
                                                      if(match_cons(v_35, sym__2))
                                                        {
                                                          a_36 = ATgetArgument(v_35, 0);
                                                          m_36 = ATgetArgument(v_35, 1);
                                                          m_32 :
                                                          if(match_cons(a_36, sym__2))
                                                            {
                                                              k_36 = ATgetArgument(a_36, 0);
                                                              l_36 = ATgetArgument(a_36, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_36))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_36), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_36)))));
                                                            }
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
                                                      q_36 = t;
                                                      if(((c_33 != NULL) && (c_33 != q_36)))
                                                        _fail(q_36);
                                                      else
                                                        c_33 = q_36;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = a_11;
        {
          ATerm b_11;
          b_11 = t;
          {
            ATerm s_36 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(b_33));
            {
              t = conc_0(t);
              {
                s_36 = t;
                if(((r_36 != NULL) && (r_36 != s_36)))
                  _fail(s_36);
                else
                  r_36 = s_36;
              }
            }
          }
          t = b_11;
          {
            ATerm e_11;
            e_11 = t;
            {
              ATerm u_36 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_32), not_null(x_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32))));
              {
                t = Mapp2_0(t);
                {
                  u_36 = t;
                  if(((t_36 != NULL) && (t_36 != u_36)))
                    _fail(u_36);
                  else
                    t_36 = u_36;
                }
              }
            }
            t = e_11;
            {
              ATerm w_36 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_32), not_null(z_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32))));
              {
                t = Bapp2_0(t);
                {
                  w_36 = t;
                  if(((v_36 != NULL) && (v_36 != w_36)))
                    _fail(w_36);
                  else
                    v_36 = w_36;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(r_36)), not_null(y_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_33)), not_null(v_36))));
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
  ATerm o_38 = NULL,q_39 = NULL;
  o_38 = t;
  n_38 :
  if(match_cons(o_38, sym_Build_1))
    {
      q_39 = ATgetArgument(o_38, 0);
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
            ATerm l_40 = NULL;
            ATerm y_40 = NULL;
            t = new_0(t);
            {
              l_40 = t;
              {
                if(((e_40 != NULL) && (e_40 != l_40)))
                  _fail(l_40);
                else
                  e_40 = l_40;
                {
                  t = not_null(q_39);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm m_40 = NULL,w_40 = NULL,x_40 = NULL;
                      m_40 = t;
                      d_38 :
                      if(match_cons(m_40, sym_Anno_2))
                        {
                          w_40 = ATgetArgument(m_40, 0);
                          x_40 = ATgetArgument(m_40, 1);
                          {
                            if(((s_39 != NULL) && (s_39 != w_40)))
                              _fail(w_40);
                            else
                              s_39 = w_40;
                            {
                              if(((d_40 != NULL) && (d_40 != x_40)))
                                _fail(x_40);
                              else
                                d_40 = x_40;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_40));
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
                      y_40 = t;
                      if(((f_40 != NULL) && (f_40 != y_40)))
                        _fail(y_40);
                      else
                        f_40 = y_40;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_u_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_40)), not_null(s_39))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_40))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_40))));
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            {
              ATerm v_11 = t;
              int x_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
                  ATerm v_41 = NULL;
                  ATerm y_41 = NULL;
                  t = new_0(t);
                  {
                    v_41 = t;
                    {
                      if(((t_41 != NULL) && (t_41 != v_41)))
                        _fail(v_41);
                      else
                        t_41 = v_41;
                      {
                        t = not_null(q_39);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm w_41 = NULL,x_41 = NULL;
                            w_41 = t;
                            h_38 :
                            if(match_cons(w_41, sym_RootApp_1))
                              {
                                x_41 = ATgetArgument(w_41, 0);
                                {
                                  if(((s_41 != NULL) && (s_41 != x_41)))
                                    _fail(x_41);
                                  else
                                    s_41 = x_41;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_41));
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
                            y_41 = t;
                            if(((u_41 != NULL) && (u_41 != y_41)))
                              _fail(y_41);
                            else
                              u_41 = y_41;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_41), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_41))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_41))));
                  LocalPopChoice(x_11);
                }
              else
                {
                  t = v_11;
                  {
                    ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
                    ATerm e_42 = NULL;
                    ATerm i_42 = NULL;
                    t = new_0(t);
                    {
                      e_42 = t;
                      {
                        if(((c_42 != NULL) && (c_42 != e_42)))
                          _fail(e_42);
                        else
                          c_42 = e_42;
                        {
                          t = not_null(q_39);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
                              f_42 = t;
                              l_38 :
                              if(match_cons(f_42, sym_App_2))
                                {
                                  g_42 = ATgetArgument(f_42, 0);
                                  h_42 = ATgetArgument(f_42, 1);
                                  {
                                    if(((a_42 != NULL) && (a_42 != g_42)))
                                      _fail(g_42);
                                    else
                                      a_42 = g_42;
                                    {
                                      if(((b_42 != NULL) && (b_42 != h_42)))
                                        _fail(h_42);
                                      else
                                        b_42 = h_42;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_42));
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
                              i_42 = t;
                              if(((d_42 != NULL) && (d_42 != i_42)))
                                _fail(i_42);
                              else
                                d_42 = i_42;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_42)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_42), not_null(b_42), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_42)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_42))));
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
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym__2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_43)), not_null(f_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  r_43 = t;
  o_43 :
  if(match_cons(r_43, sym__2))
    {
      s_43 = ATgetArgument(r_43, 0);
      v_43 = ATgetArgument(r_43, 1);
      p_43 :
      if(((ATgetType(s_43) == AT_LIST) && ((ATermList) s_43 != ATempty)))
        {
          t_43 = ATgetFirst((ATermList) s_43);
          u_43 = (ATerm) ATgetNext((ATermList) s_43);
          q_43 :
          if(((ATgetType(v_43) == AT_LIST) && ((ATermList) v_43 != ATempty)))
            {
              w_43 = ATgetFirst((ATermList) v_43);
              x_43 = (ATerm) ATgetNext((ATermList) v_43);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_43), not_null(w_43)), (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(x_43)));
            }
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
  ATerm h_44 = NULL,j_44 = NULL,k_44 = NULL;
  h_44 = t;
  e_44 :
  if(match_cons(h_44, sym__2))
    {
      j_44 = ATgetArgument(h_44, 0);
      k_44 = ATgetArgument(h_44, 1);
      f_44 :
      if(((ATermList) j_44 == ATempty))
        {
          g_44 :
          if(((ATermList) k_44 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm))
{
  ATerm m_44 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_114(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          t = r_114(t);
          {
            t = _2(t, t_114, m_44);
            t = s_114(t);
          }
        }
      }
    return(t);
  }
  t = m_44(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_114 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_114);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  l_45 = t;
  e_45 :
  if(match_cons(l_45, sym_Call_2))
    {
      m_45 = ATgetArgument(l_45, 0);
      o_45 = ATgetArgument(l_45, 1);
      f_45 :
      if(match_cons(m_45, sym_SVar_1))
        {
          n_45 = ATgetArgument(m_45, 0);
          g_45 :
          if(match_string(n_45, "Anno_Cong__"))
            {
              h_45 :
              if(((ATgetType(o_45) == AT_LIST) && ((ATermList) o_45 != ATempty)))
                {
                  p_45 = ATgetFirst((ATermList) o_45);
                  s_45 = (ATerm) ATgetNext((ATermList) o_45);
                  i_45 :
                  if(match_cons(p_45, sym_Cong_2))
                    {
                      q_45 = ATgetArgument(p_45, 0);
                      r_45 = ATgetArgument(p_45, 1);
                      j_45 :
                      if(((ATgetType(s_45) == AT_LIST) && ((ATermList) s_45 != ATempty)))
                        {
                          t_45 = ATgetFirst((ATermList) s_45);
                          u_45 = (ATerm) ATgetNext((ATermList) s_45);
                          k_45 :
                          if(((ATermList) u_45 == ATempty))
                            {
                              {
                                ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,m_46 = NULL,n_46 = NULL,z_47 = NULL,b_48 = NULL,d_48 = NULL;
                                ATerm d_12;
                                d_12 = t;
                                {
                                  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(r_45)), not_null(t_45));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      o_46 = t;
                                      a_45 :
                                      if(((ATgetType(o_46) == AT_LIST) && ((ATermList) o_46 != ATempty)))
                                        {
                                          p_46 = ATgetFirst((ATermList) o_46);
                                          q_46 = (ATerm) ATgetNext((ATermList) o_46);
                                          {
                                            ATerm t_46 = NULL;
                                            if(((f_46 != NULL) && (f_46 != p_46)))
                                              _fail(p_46);
                                            else
                                              f_46 = p_46;
                                            {
                                              if(((j_46 != NULL) && (j_46 != q_46)))
                                                _fail(q_46);
                                              else
                                                j_46 = q_46;
                                              {
                                                ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
                                                ATerm m_1 (ATerm t)
                                                {
                                                  ATerm r_46 = NULL;
                                                  ATerm s_46 = NULL;
                                                  s_46 = t;
                                                  if(((r_46 != NULL) && (r_46 != s_46)))
                                                    _fail(s_46);
                                                  else
                                                    r_46 = s_46;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_46));
                                                  return(t);
                                                }
                                                t = map_1(t, m_1);
                                                {
                                                  t_46 = t;
                                                  {
                                                    if(((g_46 != NULL) && (g_46 != t_46)))
                                                      _fail(t_46);
                                                    else
                                                      g_46 = t_46;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(r_45)), not_null(t_45));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          u_46 = t;
                                                          z_44 :
                                                          if(((ATgetType(u_46) == AT_LIST) && ((ATermList) u_46 != ATempty)))
                                                            {
                                                              v_46 = ATgetFirst((ATermList) u_46);
                                                              w_46 = (ATerm) ATgetNext((ATermList) u_46);
                                                              {
                                                                ATerm z_46 = NULL;
                                                                if(((h_46 != NULL) && (h_46 != v_46)))
                                                                  _fail(v_46);
                                                                else
                                                                  h_46 = v_46;
                                                                {
                                                                  if(((m_46 != NULL) && (m_46 != w_46)))
                                                                    _fail(w_46);
                                                                  else
                                                                    m_46 = w_46;
                                                                  {
                                                                    ATerm a_47 = NULL,y_47 = NULL;
                                                                    ATerm n_1 (ATerm t)
                                                                    {
                                                                      ATerm x_46 = NULL;
                                                                      ATerm y_46 = NULL;
                                                                      y_46 = t;
                                                                      if(((x_46 != NULL) && (x_46 != y_46)))
                                                                        _fail(y_46);
                                                                      else
                                                                        x_46 = y_46;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_46));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, n_1);
                                                                    {
                                                                      z_46 = t;
                                                                      {
                                                                        if(((i_46 != NULL) && (i_46 != z_46)))
                                                                          _fail(z_46);
                                                                        else
                                                                          i_46 = z_46;
                                                                        {
                                                                          ATerm d_47 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), not_null(m_46));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              d_47 = t;
                                                                              if(((a_47 != NULL) && (a_47 != d_47)))
                                                                                _fail(d_47);
                                                                              else
                                                                                a_47 = d_47;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_47), (ATerm) ATinsert(CheckATermList(not_null(r_45)), not_null(t_45)));
                                                                            {
                                                                              ATerm o_1 (ATerm t)
                                                                              {
                                                                                ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
                                                                                e_47 = t;
                                                                                w_44 :
                                                                                if(match_cons(e_47, sym__2))
                                                                                  {
                                                                                    f_47 = ATgetArgument(e_47, 0);
                                                                                    i_47 = ATgetArgument(e_47, 1);
                                                                                    x_44 :
                                                                                    if(match_cons(f_47, sym__2))
                                                                                      {
                                                                                        g_47 = ATgetArgument(f_47, 0);
                                                                                        h_47 = ATgetArgument(f_47, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_47))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_47), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_47)))));
                                                                                      }
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
                                                                                y_47 = t;
                                                                                if(((n_46 != NULL) && (n_46 != y_47)))
                                                                                  _fail(y_47);
                                                                                else
                                                                                  n_46 = y_47;
                                                                              }
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
                                t = d_12;
                                {
                                  ATerm h_12;
                                  h_12 = t;
                                  {
                                    ATerm a_48 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), not_null(m_46));
                                    {
                                      t = conc_0(t);
                                      {
                                        a_48 = t;
                                        if(((z_47 != NULL) && (z_47 != a_48)))
                                          _fail(a_48);
                                        else
                                          z_47 = a_48;
                                      }
                                    }
                                  }
                                  t = h_12;
                                  {
                                    ATerm m_12;
                                    m_12 = t;
                                    {
                                      ATerm c_48 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(q_45), not_null(g_46)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_46))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          c_48 = t;
                                          if(((b_48 != NULL) && (b_48 != c_48)))
                                            _fail(c_48);
                                          else
                                            b_48 = c_48;
                                        }
                                      }
                                    }
                                    t = m_12;
                                    {
                                      ATerm f_48 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(q_45), not_null(i_46)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          f_48 = t;
                                          if(((d_48 != NULL) && (d_48 != f_48)))
                                            _fail(f_48);
                                          else
                                            d_48 = f_48;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(z_47)), not_null(h_46)), not_null(f_46)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_46)), not_null(d_48))));
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
ATerm As_2 (ATerm t, ATerm y_88 (ATerm), ATerm z_88 (ATerm))
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  y_48 :
  if(match_cons(z_48, sym_As_2))
    {
      a_49 = ATgetArgument(z_48, 0);
      b_49 = ATgetArgument(z_48, 1);
      {
        ATerm f_49 = NULL,h_49 = NULL;
        ATerm g_49 = NULL;
        t = SSLgetAnnotations(not_null(z_48));
        {
          g_49 = t;
          if(((f_49 != NULL) && (f_49 != g_49)))
            _fail(g_49);
          else
            f_49 = g_49;
        }
        {
          t = not_null(a_49);
          {
            ATerm j_49 = NULL;
            t = y_88(t);
            {
              h_49 = t;
              {
                t = not_null(b_49);
                {
                  ATerm l_49 = NULL;
                  t = z_88(t);
                  {
                    j_49 = t;
                    {
                      ATerm m_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(h_49), not_null(j_49)), not_null(f_49));
                      {
                        m_49 = t;
                        if(((l_49 != NULL) && (l_49 != m_49)))
                          _fail(m_49);
                        else
                          l_49 = m_49;
                      }
                      t = not_null(l_49);
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
ATerm Prim_2 (ATerm t, ATerm s_92 (ATerm), ATerm t_92 (ATerm))
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym_Prim_2))
    {
      z_49 = ATgetArgument(y_49, 0);
      a_50 = ATgetArgument(y_49, 1);
      {
        ATerm e_50 = NULL,i_50 = NULL;
        ATerm f_50 = NULL;
        t = SSLgetAnnotations(not_null(y_49));
        {
          f_50 = t;
          if(((e_50 != NULL) && (e_50 != f_50)))
            _fail(f_50);
          else
            e_50 = f_50;
        }
        {
          t = not_null(z_49);
          {
            ATerm k_50 = NULL;
            t = s_92(t);
            {
              i_50 = t;
              {
                t = not_null(a_50);
                {
                  ATerm r_50 = NULL;
                  t = t_92(t);
                  {
                    k_50 = t;
                    {
                      ATerm s_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(i_50), not_null(k_50)), not_null(e_50));
                      {
                        s_50 = t;
                        if(((r_50 != NULL) && (r_50 != s_50)))
                          _fail(s_50);
                        else
                          r_50 = s_50;
                      }
                      t = not_null(r_50);
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
ATerm Explode_2 (ATerm t, ATerm u_88 (ATerm), ATerm v_88 (ATerm))
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  e_51 = t;
  d_51 :
  if(match_cons(e_51, sym_Explode_2))
    {
      f_51 = ATgetArgument(e_51, 0);
      g_51 = ATgetArgument(e_51, 1);
      {
        ATerm k_51 = NULL,m_51 = NULL;
        ATerm l_51 = NULL;
        t = SSLgetAnnotations(not_null(e_51));
        {
          l_51 = t;
          if(((k_51 != NULL) && (k_51 != l_51)))
            _fail(l_51);
          else
            k_51 = l_51;
        }
        {
          t = not_null(f_51);
          {
            ATerm o_51 = NULL;
            t = u_88(t);
            {
              m_51 = t;
              {
                t = not_null(g_51);
                {
                  ATerm s_51 = NULL;
                  t = v_88(t);
                  {
                    o_51 = t;
                    {
                      ATerm t_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(m_51), not_null(o_51)), not_null(k_51));
                      {
                        t_51 = t;
                        if(((s_51 != NULL) && (s_51 != t_51)))
                          _fail(t_51);
                        else
                          s_51 = t_51;
                      }
                      t = not_null(s_51);
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
ATerm Op_2 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm))
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  e_52 :
  if(match_cons(f_52, sym_Op_2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      {
        ATerm l_52 = NULL,n_52 = NULL;
        ATerm m_52 = NULL;
        t = SSLgetAnnotations(not_null(f_52));
        {
          m_52 = t;
          if(((l_52 != NULL) && (l_52 != m_52)))
            _fail(m_52);
          else
            l_52 = m_52;
        }
        {
          t = not_null(g_52);
          {
            ATerm p_52 = NULL;
            t = s_90(t);
            {
              n_52 = t;
              {
                t = not_null(h_52);
                {
                  ATerm t_52 = NULL;
                  t = t_90(t);
                  {
                    p_52 = t;
                    {
                      ATerm u_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_52), not_null(p_52)), not_null(l_52));
                      {
                        u_52 = t;
                        if(((t_52 != NULL) && (t_52 != u_52)))
                          _fail(u_52);
                        else
                          t_52 = u_52;
                      }
                      t = not_null(t_52);
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
ATerm pat_td_1 (ATerm t, ATerm h_122 (ATerm))
{
  ATerm n_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_122(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = n_12;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                t = pat_td_1(t, h_122);
                return(t);
              }
              t = fetch_1(t, q_1);
              return(t);
            }
            t = Op_2(t, _id, p_1);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              ATerm f_13 = t;
              int g_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    t = pat_td_1(t, h_122);
                    return(t);
                  }
                  t = Explode_2(t, _id, r_1);
                  LocalPopChoice(g_13);
                }
              else
                {
                  t = f_13;
                  {
                    ATerm h_13 = t;
                    int i_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = pat_td_1(t, h_122);
                          return(t);
                        }
                        t = Explode_2(t, s_1, _id);
                        LocalPopChoice(i_13);
                      }
                    else
                      {
                        t = h_13;
                        {
                          ATerm j_13 = t;
                          int k_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_1 (ATerm t)
                              {
                                ATerm u_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_122);
                                  return(t);
                                }
                                t = fetch_1(t, u_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, t_1);
                              LocalPopChoice(k_13);
                            }
                          else
                            {
                              t = j_13;
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_122);
                                  return(t);
                                }
                                t = As_2(t, _id, v_1);
                              }
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  s_53 = t;
  r_53 :
  if(match_cons(s_53, sym_Match_1))
    {
      t_53 = ATgetArgument(s_53, 0);
      {
        ATerm l_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
            ATerm z_53 = NULL;
            ATerm d_54 = NULL;
            t = new_0(t);
            {
              z_53 = t;
              {
                if(((x_53 != NULL) && (x_53 != z_53)))
                  _fail(z_53);
                else
                  x_53 = z_53;
                {
                  t = not_null(t_53);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
                      a_54 = t;
                      h_53 :
                      if(match_cons(a_54, sym_Anno_2))
                        {
                          b_54 = ATgetArgument(a_54, 0);
                          c_54 = ATgetArgument(a_54, 1);
                          {
                            if(((v_53 != NULL) && (v_53 != b_54)))
                              _fail(b_54);
                            else
                              v_53 = b_54;
                            {
                              if(((w_53 != NULL) && (w_53 != c_54)))
                                _fail(c_54);
                              else
                                w_53 = c_54;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_53)), not_null(v_53));
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
                      d_54 = t;
                      if(((y_53 != NULL) && (y_53 != d_54)))
                        _fail(d_54);
                      else
                        y_53 = d_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_53)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_53)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_53))))));
            LocalPopChoice(y_13);
          }
        else
          {
            t = l_13;
            {
              ATerm a_14 = t;
              int b_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
                  ATerm i_54 = NULL;
                  ATerm l_54 = NULL;
                  t = new_0(t);
                  {
                    i_54 = t;
                    {
                      if(((g_54 != NULL) && (g_54 != i_54)))
                        _fail(i_54);
                      else
                        g_54 = i_54;
                      {
                        t = not_null(t_53);
                        {
                          ATerm x_1 (ATerm t)
                          {
                            ATerm j_54 = NULL,k_54 = NULL;
                            j_54 = t;
                            l_53 :
                            if(match_cons(j_54, sym_RootApp_1))
                              {
                                k_54 = ATgetArgument(j_54, 0);
                                {
                                  if(((f_54 != NULL) && (f_54 != k_54)))
                                    _fail(k_54);
                                  else
                                    f_54 = k_54;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_54));
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
                            l_54 = t;
                            if(((h_54 != NULL) && (h_54 != l_54)))
                              _fail(l_54);
                            else
                              h_54 = l_54;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_54))), not_null(f_54))));
                  LocalPopChoice(b_14);
                }
              else
                {
                  t = a_14;
                  {
                    ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
                    ATerm r_54 = NULL;
                    ATerm v_54 = NULL;
                    t = new_0(t);
                    {
                      r_54 = t;
                      {
                        if(((p_54 != NULL) && (p_54 != r_54)))
                          _fail(r_54);
                        else
                          p_54 = r_54;
                        {
                          t = not_null(t_53);
                          {
                            ATerm y_1 (ATerm t)
                            {
                              ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
                              s_54 = t;
                              p_53 :
                              if(match_cons(s_54, sym_App_2))
                                {
                                  t_54 = ATgetArgument(s_54, 0);
                                  u_54 = ATgetArgument(s_54, 1);
                                  {
                                    if(((o_54 != NULL) && (o_54 != t_54)))
                                      _fail(t_54);
                                    else
                                      o_54 = t_54;
                                    {
                                      if(((n_54 != NULL) && (n_54 != u_54)))
                                        _fail(u_54);
                                      else
                                        n_54 = u_54;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_54));
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
                              v_54 = t;
                              if(((q_54 != NULL) && (q_54 != v_54)))
                                _fail(v_54);
                              else
                                q_54 = v_54;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_54))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_54)), not_null(o_54)))));
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
  o_55 = t;
  n_55 :
  if(match_cons(o_55, sym_Cong_2))
    {
      p_55 = ATgetArgument(o_55, 0);
      q_55 = ATgetArgument(o_55, 1);
      {
        ATerm t_55 = NULL;
        ATerm x_55 = NULL;
        t = not_null(q_55);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm u_55 = NULL,v_55 = NULL;
            v_55 = t;
            l_55 :
            if(match_cons(v_55, sym_Match_1))
              {
                u_55 = ATgetArgument(v_55, 0);
                t = not_null(u_55);
              }
            else
              {
                if(match_cons(v_55, sym_Id_0))
                  {
                    t = term_c_14;
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
            x_55 = t;
            if(((t_55 != NULL) && (t_55 != x_55)))
              _fail(x_55);
            else
              t_55 = x_55;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(p_55), not_null(t_55)));
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_Scope_2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      e_56 :
      if(((ATermList) g_56 == ATempty))
        {
          t = not_null(h_56);
        }
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
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  t_56 :
  if(match_cons(g_57, sym_Where_1))
    {
      h_57 = ATgetArgument(g_57, 0);
      u_56 :
      if(match_cons(h_57, sym_Seq_2))
        {
          f_57 = ATgetArgument(h_57, 0);
          b_57 = ATgetArgument(h_57, 1);
          v_56 :
          if(match_cons(f_57, sym_Where_1))
            {
              a_57 = ATgetArgument(f_57, 0);
              w_56 :
              if(match_cons(b_57, sym_Seq_2))
                {
                  c_57 = ATgetArgument(b_57, 0);
                  e_57 = ATgetArgument(b_57, 1);
                  x_56 :
                  if(match_cons(c_57, sym_Build_1))
                    {
                      d_57 = ATgetArgument(c_57, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_57)), not_null(e_57))));
                    }
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
          if(match_cons(h_57, sym_Where_1))
            {
              f_57 = ATgetArgument(h_57, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(f_57));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(g_57, sym_Test_1))
        {
          h_57 = ATgetArgument(g_57, 0);
          y_56 :
          if(match_cons(h_57, sym_Test_1))
            {
              f_57 = ATgetArgument(h_57, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_57));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(g_57, sym_Not_1))
            {
              h_57 = ATgetArgument(g_57, 0);
              z_56 :
              if(match_cons(h_57, sym_Not_1))
                {
                  f_57 = ATgetArgument(h_57, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_57));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(g_57, sym_LChoice_2))
                {
                  h_57 = ATgetArgument(g_57, 0);
                  i_57 = ATgetArgument(g_57, 1);
                  {
                    if(((h_57 != NULL) && (h_57 != i_57)))
                      _fail(i_57);
                    else
                      h_57 = i_57;
                    t = not_null(h_57);
                  }
                }
              else
                {
                  if(match_cons(g_57, sym_Choice_2))
                    {
                      h_57 = ATgetArgument(g_57, 0);
                      i_57 = ATgetArgument(g_57, 1);
                      {
                        if(((h_57 != NULL) && (h_57 != i_57)))
                          _fail(i_57);
                        else
                          h_57 = i_57;
                        t = not_null(h_57);
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
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
  e_58 = t;
  a_58 :
  if(match_cons(e_58, sym_LChoice_2))
    {
      f_58 = ATgetArgument(e_58, 0);
      i_58 = ATgetArgument(e_58, 1);
      b_58 :
      if(match_cons(f_58, sym_LChoice_2))
        {
          g_58 = ATgetArgument(f_58, 0);
          h_58 = ATgetArgument(f_58, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_58), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_58), not_null(i_58)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(e_58, sym_Seq_2))
        {
          f_58 = ATgetArgument(e_58, 0);
          i_58 = ATgetArgument(e_58, 1);
          c_58 :
          if(match_cons(f_58, sym_Seq_2))
            {
              g_58 = ATgetArgument(f_58, 0);
              h_58 = ATgetArgument(f_58, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_58), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_58), not_null(i_58)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_58, sym_Choice_2))
            {
              f_58 = ATgetArgument(e_58, 0);
              i_58 = ATgetArgument(e_58, 1);
              d_58 :
              if(match_cons(f_58, sym_Choice_2))
                {
                  g_58 = ATgetArgument(f_58, 0);
                  h_58 = ATgetArgument(f_58, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_58), (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_58), not_null(i_58)));
                }
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
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  p_59 = t;
  h_59 :
  if(match_cons(p_59, sym_InfixApp_3))
    {
      q_59 = ATgetArgument(p_59, 0);
      m_59 = ATgetArgument(p_59, 1);
      l_59 = ATgetArgument(p_59, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_59), (ATerm) ATmakeAppl(sym_Op_2, term_d_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_59)), not_null(q_59))));
    }
  else
    {
      if(match_cons(p_59, sym_BAM_3))
        {
          q_59 = ATgetArgument(p_59, 0);
          m_59 = ATgetArgument(p_59, 1);
          l_59 = ATgetArgument(p_59, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_59))), not_null(q_59)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_59))));
        }
      else
        {
          if(match_cons(p_59, sym_AM_2))
            {
              q_59 = ATgetArgument(p_59, 0);
              m_59 = ATgetArgument(p_59, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_59), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_59)));
            }
          else
            {
              if(match_cons(p_59, sym_MA_2))
                {
                  q_59 = ATgetArgument(p_59, 0);
                  m_59 = ATgetArgument(p_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_59)), not_null(m_59));
                }
              else
                {
                  if(match_cons(p_59, sym_BA_2))
                    {
                      q_59 = ATgetArgument(p_59, 0);
                      m_59 = ATgetArgument(p_59, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_59)), not_null(q_59));
                    }
                  else
                    {
                      if(match_cons(p_59, sym_Lets_2))
                        {
                          q_59 = ATgetArgument(p_59, 0);
                          m_59 = ATgetArgument(p_59, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_59), not_null(m_59));
                        }
                      else
                        {
                          if(match_cons(p_59, sym_LChoices_1))
                            {
                              q_59 = ATgetArgument(p_59, 0);
                              i_59 :
                              if(((ATgetType(q_59) == AT_LIST) && ((ATermList) q_59 != ATempty)))
                                {
                                  n_59 = ATgetFirst((ATermList) q_59);
                                  o_59 = (ATerm) ATgetNext((ATermList) q_59);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_59), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_59)));
                                }
                              else
                                {
                                  if(((ATermList) q_59 == ATempty))
                                    {
                                      t = term_s_7;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(p_59, sym_Choices_1))
                                {
                                  q_59 = ATgetArgument(p_59, 0);
                                  j_59 :
                                  if(((ATgetType(q_59) == AT_LIST) && ((ATermList) q_59 != ATempty)))
                                    {
                                      n_59 = ATgetFirst((ATermList) q_59);
                                      o_59 = (ATerm) ATgetNext((ATermList) q_59);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_59), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_59)));
                                    }
                                  else
                                    {
                                      if(((ATermList) q_59 == ATempty))
                                        {
                                          t = term_s_7;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(p_59, sym_Seqs_1))
                                    {
                                      q_59 = ATgetArgument(p_59, 0);
                                      k_59 :
                                      if(((ATgetType(q_59) == AT_LIST) && ((ATermList) q_59 != ATempty)))
                                        {
                                          n_59 = ATgetFirst((ATermList) q_59);
                                          o_59 = (ATerm) ATgetNext((ATermList) q_59);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_59), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_59)));
                                        }
                                      else
                                        {
                                          if(((ATermList) q_59 == ATempty))
                                            {
                                              t = term_e_14;
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
  ATerm b_61 = NULL,c_61 = NULL;
  b_61 = t;
  z_60 :
  if(match_cons(b_61, sym_Where_1))
    {
      c_61 = ATgetArgument(b_61, 0);
      a_61 :
      if(match_cons(c_61, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
  h_61 = t;
  f_61 :
  if(match_cons(h_61, sym_LChoice_2))
    {
      i_61 = ATgetArgument(h_61, 0);
      j_61 = ATgetArgument(h_61, 1);
      g_61 :
      if(match_cons(j_61, sym_Fail_0))
        {
          t = not_null(i_61);
        }
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
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
  p_61 = t;
  n_61 :
  if(match_cons(p_61, sym_LChoice_2))
    {
      q_61 = ATgetArgument(p_61, 0);
      r_61 = ATgetArgument(p_61, 1);
      o_61 :
      if(match_cons(q_61, sym_Fail_0))
        {
          t = not_null(r_61);
        }
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
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  x_61 = t;
  v_61 :
  if(match_cons(x_61, sym_Choice_2))
    {
      y_61 = ATgetArgument(x_61, 0);
      z_61 = ATgetArgument(x_61, 1);
      w_61 :
      if(match_cons(z_61, sym_Fail_0))
        {
          t = not_null(y_61);
        }
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
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
  f_62 = t;
  d_62 :
  if(match_cons(f_62, sym_Choice_2))
    {
      g_62 = ATgetArgument(f_62, 0);
      h_62 = ATgetArgument(f_62, 1);
      e_62 :
      if(match_cons(g_62, sym_Fail_0))
        {
          t = not_null(h_62);
        }
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
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
  r_62 = t;
  q_62 :
  if(match_cons(r_62, sym_Cong_2))
    {
      s_62 = ATgetArgument(r_62, 0);
      t_62 = ATgetArgument(r_62, 1);
      {
        t = not_null(t_62);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm w_62 = NULL;
            w_62 = t;
            p_62 :
            if(!(match_cons(w_62, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, a_2);
        }
        t = term_s_7;
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
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  z_62 :
  if(match_cons(b_63, sym_Path_2))
    {
      c_63 = ATgetArgument(b_63, 0);
      d_63 = ATgetArgument(b_63, 1);
      a_63 :
      if(match_cons(d_63, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm n_63 = NULL,o_63 = NULL;
  n_63 = t;
  h_63 :
  if(match_cons(n_63, sym_One_1))
    {
      o_63 = ATgetArgument(n_63, 0);
      i_63 :
      if(match_cons(o_63, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm t_63 = NULL,u_63 = NULL;
  t_63 = t;
  r_63 :
  if(match_cons(t_63, sym_Some_1))
    {
      u_63 = ATgetArgument(t_63, 0);
      s_63 :
      if(match_cons(u_63, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm z_63 = NULL,l_64 = NULL,m_64 = NULL;
  z_63 = t;
  x_63 :
  if(match_cons(z_63, sym_Rec_2))
    {
      l_64 = ATgetArgument(z_63, 0);
      m_64 = ATgetArgument(z_63, 1);
      y_63 :
      if(match_cons(m_64, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  s_64 = t;
  q_64 :
  if(match_cons(s_64, sym_Scope_2))
    {
      t_64 = ATgetArgument(s_64, 0);
      u_64 = ATgetArgument(s_64, 1);
      r_64 :
      if(match_cons(u_64, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
  a_65 = t;
  y_64 :
  if(match_cons(a_65, sym_Seq_2))
    {
      b_65 = ATgetArgument(a_65, 0);
      c_65 = ATgetArgument(a_65, 1);
      z_64 :
      if(match_cons(b_65, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm i_65 = NULL,j_65 = NULL;
  i_65 = t;
  g_65 :
  if(match_cons(i_65, sym_Not_1))
    {
      j_65 = ATgetArgument(i_65, 0);
      h_65 :
      if(match_cons(j_65, sym_Fail_0))
        {
          t = term_e_14;
        }
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
  ATerm r_65 = NULL,s_65 = NULL;
  r_65 = t;
  p_65 :
  if(match_cons(r_65, sym_Test_1))
    {
      s_65 = ATgetArgument(r_65, 0);
      q_65 :
      if(match_cons(s_65, sym_Fail_0))
        {
          t = term_s_7;
        }
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
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm h_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(s_14);
          }
        else
          {
            t = h_14;
            {
              ATerm t_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = t_14;
                  {
                    ATerm v_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(w_14);
                      }
                    else
                      {
                        t = v_14;
                        {
                          ATerm x_14 = t;
                          int y_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(y_14);
                            }
                          else
                            {
                              t = x_14;
                              {
                                ATerm z_14 = t;
                                int b_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(b_15);
                                  }
                                else
                                  {
                                    t = z_14;
                                    {
                                      ATerm q_15 = t;
                                      int r_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(r_15);
                                        }
                                      else
                                        {
                                          t = q_15;
                                          {
                                            ATerm x_15 = t;
                                            int y_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(y_15);
                                              }
                                            else
                                              {
                                                t = x_15;
                                                {
                                                  ATerm a_16 = t;
                                                  int b_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(b_16);
                                                    }
                                                  else
                                                    {
                                                      t = a_16;
                                                      {
                                                        ATerm c_16 = t;
                                                        int d_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(d_16);
                                                          }
                                                        else
                                                          {
                                                            t = c_16;
                                                            {
                                                              ATerm s_16 = t;
                                                              int t_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
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
                                                                        t = F13_0(t);
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
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(x_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_16;
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
  ATerm c_66 = NULL,h_66 = NULL;
  c_66 = t;
  a_66 :
  if(match_cons(c_66, sym_Match_1))
    {
      h_66 = ATgetArgument(c_66, 0);
      b_66 :
      if(match_cons(h_66, sym_Wld_0))
        {
          t = term_e_14;
        }
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
  ATerm m_66 = NULL,p_66 = NULL;
  m_66 = t;
  k_66 :
  if(match_cons(m_66, sym_Where_1))
    {
      p_66 = ATgetArgument(m_66, 0);
      l_66 :
      if(match_cons(p_66, sym_Id_0))
        {
          t = term_e_14;
        }
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
  ATerm u_66 = NULL,v_66 = NULL;
  u_66 = t;
  s_66 :
  if(match_cons(u_66, sym_All_1))
    {
      v_66 = ATgetArgument(u_66, 0);
      t_66 :
      if(match_cons(v_66, sym_Id_0))
        {
          t = term_e_14;
        }
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
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  y_66 :
  if(match_cons(a_67, sym_Rec_2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      z_66 :
      if(match_cons(c_67, sym_Id_0))
        {
          t = term_e_14;
        }
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
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
  i_67 = t;
  g_67 :
  if(match_cons(i_67, sym_Scope_2))
    {
      j_67 = ATgetArgument(i_67, 0);
      k_67 = ATgetArgument(i_67, 1);
      h_67 :
      if(match_cons(k_67, sym_Id_0))
        {
          t = term_e_14;
        }
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
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  o_67 :
  if(match_cons(q_67, sym_LChoice_2))
    {
      r_67 = ATgetArgument(q_67, 0);
      s_67 = ATgetArgument(q_67, 1);
      p_67 :
      if(match_cons(r_67, sym_Id_0))
        {
          t = term_e_14;
        }
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
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  y_67 = t;
  w_67 :
  if(match_cons(y_67, sym_Seq_2))
    {
      z_67 = ATgetArgument(y_67, 0);
      a_68 = ATgetArgument(y_67, 1);
      x_67 :
      if(match_cons(a_68, sym_Id_0))
        {
          t = not_null(z_67);
        }
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
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  e_68 :
  if(match_cons(g_68, sym_Seq_2))
    {
      h_68 = ATgetArgument(g_68, 0);
      i_68 = ATgetArgument(g_68, 1);
      f_68 :
      if(match_cons(h_68, sym_Id_0))
        {
          t = not_null(i_68);
        }
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
  ATerm o_68 = NULL,p_68 = NULL;
  o_68 = t;
  m_68 :
  if(match_cons(o_68, sym_Not_1))
    {
      p_68 = ATgetArgument(o_68, 0);
      n_68 :
      if(match_cons(p_68, sym_Id_0))
        {
          t = term_s_7;
        }
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
  ATerm u_68 = NULL,v_68 = NULL;
  u_68 = t;
  s_68 :
  if(match_cons(u_68, sym_Test_1))
    {
      v_68 = ATgetArgument(u_68, 0);
      t_68 :
      if(match_cons(v_68, sym_Id_0))
        {
          t = term_e_14;
        }
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
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm a_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(i_17);
          }
        else
          {
            t = a_17;
            {
              ATerm j_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = j_17;
                  {
                    ATerm n_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = n_17;
                        {
                          ATerm r_17 = t;
                          int t_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(t_17);
                            }
                          else
                            {
                              t = r_17;
                              {
                                ATerm u_17 = t;
                                int v_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(v_17);
                                  }
                                else
                                  {
                                    t = u_17;
                                    {
                                      ATerm h_18 = t;
                                      int i_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(i_18);
                                        }
                                      else
                                        {
                                          t = h_18;
                                          {
                                            ATerm j_18 = t;
                                            int k_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      LocalPopChoice(m_18);
                                                    }
                                                  else
                                                    {
                                                      t = l_18;
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
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = w_18;
            {
              ATerm a_19 = t;
              int b_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(b_19);
                }
              else
                {
                  t = a_19;
                  {
                    ATerm f_19 = t;
                    int g_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(g_19);
                      }
                    else
                      {
                        t = f_19;
                        {
                          ATerm h_19 = t;
                          int p_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(p_19);
                            }
                          else
                            {
                              t = h_19;
                              {
                                ATerm q_19 = t;
                                int r_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(r_19);
                                  }
                                else
                                  {
                                    t = q_19;
                                    {
                                      ATerm s_19 = t;
                                      int d_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(d_20);
                                        }
                                      else
                                        {
                                          t = s_19;
                                          {
                                            ATerm f_20 = t;
                                            int g_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(g_20);
                                              }
                                            else
                                              {
                                                t = f_20;
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
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(r_20);
                }
              else
                {
                  t = q_20;
                  {
                    ATerm s_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(u_20);
                      }
                    else
                      {
                        t = s_20;
                        {
                          ATerm v_20 = t;
                          int w_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(w_20);
                            }
                          else
                            {
                              t = v_20;
                              {
                                ATerm c_21 = t;
                                int e_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(e_21);
                                  }
                                else
                                  {
                                    t = c_21;
                                    {
                                      ATerm f_21 = t;
                                      int g_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(g_21);
                                        }
                                      else
                                        {
                                          t = f_21;
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
ATerm repeat_2 (ATerm t, ATerm t_103 (ATerm), ATerm u_103 (ATerm))
{
  ATerm x_68 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_103(t);
        t = x_68(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = u_103(t);
      }
    return(t);
  }
  t = x_68(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_103 (ATerm))
{
  t = repeat_2(t, w_103, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm n_117 (ATerm))
{
  ATerm y_68 (ATerm t)
  {
    t = n_117(t);
    {
      t = _all(t, y_68);
      t = n_117(t);
    }
    return(t);
  }
  t = y_68(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      ATerm l_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(m_21);
        }
      else
        {
          t = l_21;
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
ATerm SDef_3 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL;
  g_69 = t;
  f_69 :
  if(match_cons(g_69, sym_SDef_3))
    {
      h_69 = ATgetArgument(g_69, 0);
      i_69 = ATgetArgument(g_69, 1);
      j_69 = ATgetArgument(g_69, 2);
      {
        ATerm o_69 = NULL,q_69 = NULL;
        ATerm p_69 = NULL;
        t = SSLgetAnnotations(not_null(g_69));
        {
          p_69 = t;
          if(((o_69 != NULL) && (o_69 != p_69)))
            _fail(p_69);
          else
            o_69 = p_69;
        }
        {
          t = not_null(h_69);
          {
            ATerm s_69 = NULL;
            t = p_91(t);
            {
              q_69 = t;
              {
                t = not_null(i_69);
                {
                  ATerm u_69 = NULL;
                  t = q_91(t);
                  {
                    s_69 = t;
                    {
                      t = not_null(j_69);
                      {
                        ATerm y_69 = NULL;
                        t = r_91(t);
                        {
                          u_69 = t;
                          {
                            ATerm z_69 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(q_69), not_null(s_69), not_null(u_69)), not_null(o_69));
                            {
                              z_69 = t;
                              if(((y_69 != NULL) && (y_69 != z_69)))
                                _fail(z_69);
                              else
                                y_69 = z_69;
                            }
                            t = not_null(y_69);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm y_70 = NULL,z_70 = NULL;
  y_70 = t;
  x_70 :
  if(match_cons(y_70, sym_Strategies_1))
    {
      z_70 = ATgetArgument(y_70, 0);
      {
        ATerm h_71 = NULL,j_71 = NULL;
        ATerm i_71 = NULL;
        t = SSLgetAnnotations(not_null(y_70));
        {
          i_71 = t;
          if(((h_71 != NULL) && (h_71 != i_71)))
            _fail(i_71);
          else
            h_71 = i_71;
        }
        {
          t = not_null(z_70);
          {
            ATerm l_71 = NULL;
            t = c_90(t);
            {
              j_71 = t;
              {
                ATerm m_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(j_71)), not_null(h_71));
                {
                  m_71 = t;
                  if(((l_71 != NULL) && (l_71 != m_71)))
                    _fail(m_71);
                  else
                    l_71 = m_71;
                }
                t = not_null(l_71);
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
ATerm Specification_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm x_71 = NULL,y_71 = NULL;
  x_71 = t;
  w_71 :
  if(match_cons(x_71, sym_Specification_1))
    {
      y_71 = ATgetArgument(x_71, 0);
      {
        ATerm j_72 = NULL,x_72 = NULL;
        ATerm k_72 = NULL;
        t = SSLgetAnnotations(not_null(x_71));
        {
          k_72 = t;
          if(((j_72 != NULL) && (j_72 != k_72)))
            _fail(k_72);
          else
            j_72 = k_72;
        }
        {
          t = not_null(y_71);
          {
            ATerm z_72 = NULL;
            t = e_90(t);
            {
              x_72 = t;
              {
                ATerm a_73 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(x_72)), not_null(j_72));
                {
                  a_73 = t;
                  if(((z_72 != NULL) && (z_72 != a_73)))
                    _fail(a_73);
                  else
                    z_72 = a_73;
                }
                t = not_null(z_72);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm k_122 (ATerm))
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
            t = SDef_3(t, _id, _id, k_122);
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
ATerm _2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  k_73 :
  if(match_cons(q_73, sym__2))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      {
        ATerm k_74 = NULL,m_74 = NULL;
        ATerm l_74 = NULL;
        t = SSLgetAnnotations(not_null(q_73));
        {
          l_74 = t;
          if(((k_74 != NULL) && (k_74 != l_74)))
            _fail(l_74);
          else
            k_74 = l_74;
        }
        {
          t = not_null(r_73);
          {
            ATerm x_74 = NULL;
            t = j_80(t);
            {
              m_74 = t;
              {
                t = not_null(s_73);
                {
                  ATerm z_74 = NULL;
                  t = k_80(t);
                  {
                    x_74 = t;
                    {
                      ATerm a_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_74), not_null(x_74)), not_null(k_74));
                      {
                        a_75 = t;
                        if(((z_74 != NULL) && (z_74 != a_75)))
                          _fail(a_75);
                        else
                          z_74 = a_75;
                      }
                      t = not_null(z_74);
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
  ATerm i_75 = NULL;
  ATerm n_21;
  n_21 = t;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm j_75 = NULL,k_75 = NULL;
      j_75 = t;
      h_75 :
      if(match_cons(j_75, sym_Program_1))
        {
          k_75 = ATgetArgument(j_75, 0);
          if(((i_75 != NULL) && (i_75 != k_75)))
            _fail(k_75);
          else
            i_75 = k_75;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), not_null(i_75)), term_t_21));
      {
        t = printnl_0(t);
        {
          t = term_v_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL;
  o_75 = t;
  n_75 :
  if(match_cons(o_75, sym__2))
    {
      p_75 = ATgetArgument(o_75, 0);
      q_75 = ATgetArgument(o_75, 1);
      {
        ATerm w_21;
        w_21 = t;
        t = SSL_printnl(not_null(p_75), not_null(q_75));
        t = w_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_75 = NULL;
  v_75 = t;
  t = SSL_implode_string(not_null(v_75));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
        a_76 = t;
        z_75 :
        if(((ATgetType(a_76) == AT_LIST) && ((ATermList) a_76 != ATempty)))
          {
            b_76 = ATgetFirst((ATermList) a_76);
            c_76 = (ATerm) ATgetNext((ATermList) a_76);
            {
              t = not_null(b_76);
              {
                ATerm j_2 (ATerm t)
                {
                  t = not_null(c_76);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm m_76 = NULL;
  ATerm o_76 = NULL;
  m_76 = t;
  {
    ATerm p_76 = NULL;
    ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL;
    t = not_null(m_76);
    {
      p_76 = t;
      {
        t = SSL_explode_term(not_null(p_76));
        {
          r_76 = t;
          k_76 :
          if(match_cons(r_76, sym__2))
            {
              s_76 = ATgetArgument(r_76, 0);
              t_76 = ATgetArgument(r_76, 1);
              l_76 :
              if(match_string(s_76, ""))
                {
                  if(((o_76 != NULL) && (o_76 != t_76)))
                    _fail(t_76);
                  else
                    o_76 = t_76;
                }
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
    {
      t = not_null(o_76);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_113 (ATerm))
{
  ATerm x_76 (ATerm t)
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_76);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          t = Nil_0(t);
          t = g_113(t);
        }
      }
    return(t);
  }
  t = x_76(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  a_77 = t;
  z_76 :
  if(match_cons(a_77, sym__2))
    {
      b_77 = ATgetArgument(a_77, 0);
      c_77 = ATgetArgument(a_77, 1);
      {
        t = not_null(b_77);
        {
          ATerm k_2 (ATerm t)
          {
            t = not_null(c_77);
            return(t);
          }
          t = at_end_1(t, k_2);
        }
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
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_77 = NULL;
  h_77 = t;
  t = SSL_explode_string(not_null(h_77));
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
ATerm debug_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm k_22;
  k_22 = t;
  {
    ATerm m_77 = NULL,o_77 = NULL;
    ATerm m_22;
    m_22 = t;
    {
      ATerm n_77 = NULL;
      t = s_99(t);
      {
        n_77 = t;
        if(((m_77 != NULL) && (m_77 != n_77)))
          _fail(n_77);
        else
          m_77 = n_77;
      }
    }
    t = m_22;
    {
      ATerm p_77 = NULL;
      p_77 = t;
      if(((o_77 != NULL) && (o_77 != p_77)))
        _fail(p_77);
      else
        o_77 = p_77;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_77)), not_null(m_77)));
        t = printnl_0(t);
      }
    }
  }
  t = k_22;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_77 = NULL;
  t_77 = t;
  t = SSL_is_string(not_null(t_77));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_22);
    }
  else
    {
      t = n_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_2);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL;
              c_78 = t;
              b_78 :
              if(match_cons(c_78, sym_Path_1))
                {
                  d_78 = ATgetArgument(c_78, 0);
                  t = not_null(d_78);
                }
              else
                {
                  if(match_cons(c_78, sym_Var_1))
                    {
                      d_78 = ATgetArgument(c_78, 0);
                      {
                        t = not_null(d_78);
                        {
                          ATerm z_22 = t;
                          int d_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_23);
                            }
                          else
                            {
                              t = z_22;
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = term_j_23;
                                  return(t);
                                }
                                t = debug_1(t, m_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_78, sym_Prefix_2))
                        {
                          d_78 = ATgetArgument(c_78, 0);
                          e_78 = ATgetArgument(c_78, 1);
                          {
                            ATerm j_78 = NULL,l_78 = NULL;
                            ATerm p_23;
                            p_23 = t;
                            {
                              ATerm k_78 = NULL;
                              t = not_null(d_78);
                              {
                                t = eval_config_0(t);
                                {
                                  k_78 = t;
                                  if(((j_78 != NULL) && (j_78 != k_78)))
                                    _fail(k_78);
                                  else
                                    j_78 = k_78;
                                }
                              }
                            }
                            t = p_23;
                            {
                              ATerm m_78 = NULL;
                              t = not_null(e_78);
                              {
                                t = eval_config_0(t);
                                {
                                  m_78 = t;
                                  if(((l_78 != NULL) && (l_78 != m_78)))
                                    _fail(m_78);
                                  else
                                    l_78 = m_78;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_78), not_null(l_78));
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
  ATerm u_78 = NULL;
  u_78 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(u_78));
    {
      t = table_get_0(t);
      {
        ATerm n_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_23;
            r_23 = t;
            {
              ATerm w_78 = NULL;
              ATerm x_78 = NULL;
              x_78 = t;
              if(((w_78 != NULL) && (w_78 != x_78)))
                _fail(x_78);
              else
                w_78 = x_78;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_23, not_null(u_78), not_null(w_78));
                t = table_put_0(t);
              }
            }
            t = r_23;
          }
          return(t);
        }
        t = try_1(t, n_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm s_23;
    s_23 = t;
    {
      ATerm b_79 = NULL;
      ATerm c_79 = NULL;
      t = term_t_23;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_79), term_u_23);
        t = geq_0(t);
      }
    }
    t = s_23;
    t = w_96(t);
    return(t);
  }
  t = try_1(t, o_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
  g_79 = t;
  f_79 :
  if(match_cons(g_79, sym__2))
    {
      h_79 = ATgetArgument(g_79, 0);
      i_79 = ATgetArgument(g_79, 1);
      t = SSL_WriteToTextFile(not_null(h_79), not_null(i_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  n_79 :
  if(match_cons(o_79, sym__2))
    {
      p_79 = ATgetArgument(o_79, 0);
      q_79 = ATgetArgument(o_79, 1);
      t = SSL_WriteToBinaryFile(not_null(p_79), not_null(q_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_79 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm d_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm z_79 = NULL,a_80 = NULL;
            z_79 = t;
            v_79 :
            if(match_cons(z_79, sym_Output_1))
              {
                a_80 = ATgetArgument(z_79, 0);
                if(((y_79 != NULL) && (y_79 != a_80)))
                  _fail(a_80);
                else
                  y_79 = a_80;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_2);
          LocalPopChoice(f_24);
        }
      else
        {
          t = d_24;
          {
            ATerm b_80 = NULL;
            t = term_h_24;
            {
              b_80 = t;
              if(((y_79 != NULL) && (y_79 != b_80)))
                _fail(b_80);
              else
                y_79 = b_80;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = v_23;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(y_79);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm c_80 = NULL;
              c_80 = t;
              x_79 :
              if(!(match_cons(c_80, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_99 (ATerm))
{
  ATerm i_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
  ATerm o_24;
  o_24 = t;
  t = dtime_0(t);
  t = o_24;
  {
    t = c_99(t);
    {
      ATerm p_24;
      p_24 = t;
      {
        ATerm l_80 = NULL;
        t = dtime_0(t);
        {
          l_80 = t;
          if(((i_80 != NULL) && (i_80 != l_80)))
            _fail(l_80);
          else
            i_80 = l_80;
        }
      }
      t = p_24;
      {
        m_80 = t;
        h_80 :
        if(match_cons(m_80, sym__2))
          {
            n_80 = ATgetArgument(m_80, 0);
            o_80 = ATgetArgument(m_80, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_80))), not_null(o_80));
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
  ATerm u_80 = NULL;
  u_80 = t;
  t = SSL_ReadFromFile(not_null(u_80));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_116 (ATerm), ATerm f_116 (ATerm))
{
  ATerm z_80 = NULL,b_81 = NULL;
  ATerm u_24;
  u_24 = t;
  {
    ATerm a_81 = NULL;
    t = e_116(t);
    {
      a_81 = t;
      if(((z_80 != NULL) && (z_80 != a_81)))
        _fail(a_81);
      else
        z_80 = a_81;
    }
  }
  t = u_24;
  {
    ATerm c_81 = NULL;
    t = f_116(t);
    {
      c_81 = t;
      if(((b_81 != NULL) && (b_81 != c_81)))
        _fail(c_81);
      else
        b_81 = c_81;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_80), not_null(b_81));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_81 = NULL;
  ATerm v_24;
  v_24 = t;
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 (ATerm t)
        {
          ATerm j_81 = NULL,k_81 = NULL;
          j_81 = t;
          g_81 :
          if(match_cons(j_81, sym_Input_1))
            {
              k_81 = ATgetArgument(j_81, 0);
              if(((i_81 != NULL) && (i_81 != k_81)))
                _fail(k_81);
              else
                i_81 = k_81;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_2);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm l_81 = NULL;
          t = term_z_24;
          {
            l_81 = t;
            if(((i_81 != NULL) && (i_81 != l_81)))
              _fail(l_81);
            else
              i_81 = l_81;
          }
        }
      }
  }
  t = v_24;
  {
    ATerm w_2 (ATerm t)
    {
      t = not_null(i_81);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_2);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_81 = NULL;
  p_81 = t;
  t = SSL_string_to_int(not_null(p_81));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL;
  z_81 = t;
  v_81 :
  if(match_string(z_81, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_81) == AT_LIST) && ((ATermList) z_81 != ATempty)))
        {
          a_82 = ATgetFirst((ATermList) z_81);
          b_82 = (ATerm) ATgetNext((ATermList) z_81);
          w_81 :
          if(((ATgetType(b_82) == AT_LIST) && ((ATermList) b_82 != ATempty)))
            {
              c_82 = ATgetFirst((ATermList) b_82);
              d_82 = (ATerm) ATgetNext((ATermList) b_82);
              {
                ATerm h_82 = NULL;
                ATerm a_25;
                a_25 = t;
                {
                  t = not_null(a_82);
                  t = j_0(t);
                }
                t = a_25;
                {
                  ATerm i_82 = NULL;
                  t = not_null(c_82);
                  {
                    t = k_0(t);
                    {
                      i_82 = t;
                      if(((h_82 != NULL) && (h_82 != i_82)))
                        _fail(i_82);
                      else
                        h_82 = i_82;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_82)), not_null(h_82));
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
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm b_83 = NULL;
        b_83 = t;
        m_82 :
        if(!(match_string(b_83, "-i")))
          {
            if(!(match_string(b_83, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        ATerm e_83 = NULL;
        ATerm h_25;
        h_25 = t;
        {
          ATerm c_83 = NULL;
          ATerm d_83 = NULL;
          d_83 = t;
          if(((c_83 != NULL) && (c_83 != d_83)))
            _fail(d_83);
          else
            c_83 = d_83;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_25, not_null(c_83));
            t = set_config_0(t);
          }
        }
        t = h_25;
        {
          ATerm f_83 = NULL;
          f_83 = t;
          if(((e_83 != NULL) && (e_83 != f_83)))
            _fail(f_83);
          else
            e_83 = f_83;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_83));
        }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_l_25;
        return(t);
      }
      t = ArgOption_3(t, x_2, y_2, z_2);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm m_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm g_83 = NULL;
              g_83 = t;
              p_82 :
              if(!(match_string(g_83, "-o")))
                {
                  if(!(match_string(g_83, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm j_83 = NULL;
              ATerm p_25;
              p_25 = t;
              {
                ATerm h_83 = NULL;
                ATerm i_83 = NULL;
                i_83 = t;
                if(((h_83 != NULL) && (h_83 != i_83)))
                  _fail(i_83);
                else
                  h_83 = i_83;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_25, not_null(h_83));
                  t = set_config_0(t);
                }
              }
              t = p_25;
              {
                ATerm k_83 = NULL;
                k_83 = t;
                if(((j_83 != NULL) && (j_83 != k_83)))
                  _fail(k_83);
                else
                  j_83 = k_83;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_83));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_v_25;
              return(t);
            }
            t = ArgOption_3(t, a_3, b_3, c_3);
            LocalPopChoice(o_25);
          }
        else
          {
            t = m_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm l_83 = NULL;
                    l_83 = t;
                    s_82 :
                    if(!(match_string(l_83, "-S")))
                      {
                        if(!(match_string(l_83, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_3 (ATerm t)
                  {
                    t = term_a_26;
                    t = set_config_0(t);
                    t = term_b_26;
                    return(t);
                  }
                  ATerm f_3 (ATerm t)
                  {
                    t = term_c_26;
                    return(t);
                  }
                  t = Option_3(t, d_3, e_3, f_3);
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  {
                    ATerm d_26 = t;
                    int e_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_3 (ATerm t)
                        {
                          ATerm m_83 = NULL;
                          m_83 = t;
                          t_82 :
                          if(!(match_string(m_83, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_3 (ATerm t)
                        {
                          ATerm p_83 = NULL;
                          ATerm f_26;
                          f_26 = t;
                          {
                            ATerm n_83 = NULL;
                            ATerm o_83 = NULL;
                            t = string_to_int_0(t);
                            {
                              o_83 = t;
                              if(((n_83 != NULL) && (n_83 != o_83)))
                                _fail(o_83);
                              else
                                n_83 = o_83;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_23, not_null(n_83));
                              t = set_config_0(t);
                            }
                          }
                          t = f_26;
                          {
                            ATerm q_83 = NULL;
                            q_83 = t;
                            if(((p_83 != NULL) && (p_83 != q_83)))
                              _fail(q_83);
                            else
                              p_83 = q_83;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_83));
                          }
                          return(t);
                        }
                        ATerm i_3 (ATerm t)
                        {
                          t = term_g_26;
                          return(t);
                        }
                        t = ArgOption_3(t, g_3, h_3, i_3);
                        LocalPopChoice(e_26);
                      }
                    else
                      {
                        t = d_26;
                        {
                          ATerm k_26 = t;
                          int l_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_3 (ATerm t)
                              {
                                ATerm r_83 = NULL;
                                r_83 = t;
                                w_82 :
                                if(!(match_string(r_83, "-k")))
                                  {
                                    if(!(match_string(r_83, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm l_3 (ATerm t)
                              {
                                ATerm p_26;
                                p_26 = t;
                                {
                                  ATerm s_83 = NULL;
                                  ATerm t_83 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    t_83 = t;
                                    if(((s_83 != NULL) && (s_83 != t_83)))
                                      _fail(t_83);
                                    else
                                      s_83 = t_83;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_s_26, not_null(s_83));
                                    t = set_config_0(t);
                                  }
                                }
                                t = p_26;
                                return(t);
                              }
                              ATerm m_3 (ATerm t)
                              {
                                t = term_t_26;
                                return(t);
                              }
                              t = ArgOption_3(t, k_3, l_3, m_3);
                              LocalPopChoice(l_26);
                            }
                          else
                            {
                              t = k_26;
                              {
                                ATerm x_26 = t;
                                int a_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_3 (ATerm t)
                                    {
                                      ATerm u_83 = NULL;
                                      u_83 = t;
                                      y_82 :
                                      if(!(match_string(u_83, "-v")))
                                        {
                                          if(!(match_string(u_83, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_3 (ATerm t)
                                    {
                                      t = term_d_27;
                                      t = set_config_0(t);
                                      t = term_e_27;
                                      return(t);
                                    }
                                    ATerm p_3 (ATerm t)
                                    {
                                      t = term_f_27;
                                      return(t);
                                    }
                                    t = Option_3(t, n_3, o_3, p_3);
                                    LocalPopChoice(a_27);
                                  }
                                else
                                  {
                                    t = x_26;
                                    {
                                      ATerm g_27 = t;
                                      int h_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_3 (ATerm t)
                                          {
                                            ATerm v_83 = NULL;
                                            v_83 = t;
                                            z_82 :
                                            if(!(match_string(v_83, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_3 (ATerm t)
                                          {
                                            t = term_j_27;
                                            t = set_config_0(t);
                                            t = term_k_27;
                                            return(t);
                                          }
                                          ATerm s_3 (ATerm t)
                                          {
                                            t = term_l_27;
                                            return(t);
                                          }
                                          t = Option_3(t, q_3, r_3, s_3);
                                          LocalPopChoice(h_27);
                                        }
                                      else
                                        {
                                          t = g_27;
                                          {
                                            ATerm t_3 (ATerm t)
                                            {
                                              ATerm w_83 = NULL;
                                              w_83 = t;
                                              a_83 :
                                              if(!(match_string(w_83, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_3 (ATerm t)
                                            {
                                              t = term_n_27;
                                              t = set_config_0(t);
                                              t = term_o_27;
                                              return(t);
                                            }
                                            ATerm v_3 (ATerm t)
                                            {
                                              t = term_p_27;
                                              return(t);
                                            }
                                            t = Option_3(t, t_3, u_3, v_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATempty, term_q_27));
  {
    t = printnl_0(t);
    {
      t = term_v_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_84 = NULL;
  f_84 = t;
  t = SSL_TicksToSeconds(not_null(f_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
  k_84 = t;
  j_84 :
  if(match_cons(k_84, sym__2))
    {
      l_84 = ATgetArgument(k_84, 0);
      m_84 = ATgetArgument(k_84, 1);
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_84), not_null(m_84));
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            t = SSL_addr(not_null(l_84), not_null(m_84));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_109 (ATerm), ATerm c_109 (ATerm))
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_109(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
        t_84 = t;
        s_84 :
        if(((ATgetType(t_84) == AT_LIST) && ((ATermList) t_84 != ATempty)))
          {
            u_84 = ATgetFirst((ATermList) t_84);
            v_84 = (ATerm) ATgetNext((ATermList) t_84);
            {
              ATerm y_84 = NULL;
              ATerm z_84 = NULL;
              t = not_null(v_84);
              {
                t = foldr_2(t, b_109, c_109);
                {
                  z_84 = t;
                  if(((y_84 != NULL) && (y_84 != z_84)))
                    _fail(z_84);
                  else
                    y_84 = z_84;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_84), not_null(y_84));
                t = c_109(t);
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
ATerm crush_2 (ATerm t, ATerm t_110 (ATerm), ATerm u_110 (ATerm))
{
  ATerm g_85 = NULL;
  ATerm i_85 = NULL;
  g_85 = t;
  {
    ATerm j_85 = NULL;
    ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL;
    t = not_null(g_85);
    {
      j_85 = t;
      {
        t = SSL_explode_term(not_null(j_85));
        {
          l_85 = t;
          f_85 :
          if(match_cons(l_85, sym__2))
            {
              m_85 = ATgetArgument(l_85, 0);
              n_85 = ATgetArgument(l_85, 1);
              if(((i_85 != NULL) && (i_85 != n_85)))
                _fail(n_85);
              else
                i_85 = n_85;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_85);
      t = foldr_2(t, t_110, u_110);
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
    ATerm w_3 (ATerm t)
    {
      t = term_z_25;
      return(t);
    }
    t = crush_2(t, w_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym__2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      {
        ATerm v_27;
        v_27 = t;
        {
          ATerm w_27 = t;
          int x_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_85), not_null(v_85));
              LocalPopChoice(x_27);
            }
          else
            {
              t = w_27;
              t = SSL_gtr(not_null(u_85), not_null(v_85));
            }
        }
        t = v_27;
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
  ATerm b_86 = NULL;
  ATerm j_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
      c_86 = t;
      a_86 :
      if(match_cons(c_86, sym__2))
        {
          d_86 = ATgetArgument(c_86, 0);
          e_86 = ATgetArgument(c_86, 1);
          {
            if(((b_86 != NULL) && (b_86 != d_86)))
              _fail(d_86);
            else
              b_86 = d_86;
            if(((b_86 != NULL) && (b_86 != e_86)))
              _fail(e_86);
            else
              b_86 = e_86;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_29);
    }
  else
    {
      t = j_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm m_29;
    m_29 = t;
    {
      ATerm h_86 = NULL;
      ATerm i_86 = NULL;
      t = term_t_23;
      {
        t = get_config_0(t);
        {
          i_86 = t;
          if(((h_86 != NULL) && (h_86 != i_86)))
            _fail(i_86);
          else
            h_86 = i_86;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_86), term_v_21);
        t = geq_0(t);
      }
    }
    t = m_29;
    t = v_96(t);
    return(t);
  }
  t = try_1(t, a_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm m_86 = NULL,o_86 = NULL;
    ATerm n_29;
    n_29 = t;
    {
      ATerm n_86 = NULL;
      t = run_time_0(t);
      {
        n_86 = t;
        if(((m_86 != NULL) && (m_86 != n_86)))
          _fail(n_86);
        else
          m_86 = n_86;
      }
    }
    t = n_29;
    {
      ATerm p_86 = NULL;
      t = term_t_29;
      {
        t = get_config_0(t);
        {
          p_86 = t;
          if(((o_86 != NULL) && (o_86 != p_86)))
            _fail(p_86);
          else
            o_86 = p_86;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_29), not_null(m_86)), term_u_29), not_null(o_86)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_4);
  {
    t = term_z_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_86 = NULL;
  w_86 = t;
  v_86 :
  if(match_cons(w_86, sym_Version_0))
    {
      ATerm y_86 = NULL,a_87 = NULL;
      ATerm w_29;
      w_29 = t;
      {
        ATerm z_86 = NULL;
        t = SSLgetAnnotations(not_null(w_86));
        {
          z_86 = t;
          if(((y_86 != NULL) && (y_86 != z_86)))
            _fail(z_86);
          else
            y_86 = z_86;
        }
      }
      t = w_29;
      {
        ATerm b_87 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_86));
        {
          b_87 = t;
          if(((a_87 != NULL) && (a_87 != b_87)))
            _fail(b_87);
          else
            a_87 = b_87;
        }
        t = not_null(a_87);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_4);
  t = a_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_87 = NULL;
  g_87 = t;
  t = SSL_table_create(not_null(g_87));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_87 = NULL;
  k_87 = t;
  {
    ATerm j_30;
    j_30 = t;
    {
      t = term_k_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_30, term_l_30, not_null(k_87));
          t = table_put_0(t);
        }
      }
    }
    t = j_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_87 = NULL;
  o_87 = t;
  t = SSL_table_destroy(not_null(o_87));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_87 = NULL;
  s_87 = t;
  t = SSL_exit(not_null(s_87));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
  w_87 = t;
  v_87 :
  if(((ATermList) w_87 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_87) == AT_LIST) && ((ATermList) w_87 != ATempty)))
        {
          x_87 = ATgetFirst((ATermList) w_87);
          y_87 = (ATerm) ATgetNext((ATermList) w_87);
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
ATerm echo_0 (ATerm t)
{
  ATerm m_30;
  m_30 = t;
  {
    ATerm b_88 = NULL;
    ATerm e_88 = NULL;
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm c_88 = NULL;
          ATerm d_88 = NULL;
          d_88 = t;
          if(((c_88 != NULL) && (c_88 != d_88)))
            _fail(d_88);
          else
            c_88 = d_88;
          t = (ATerm) ATinsert(ATempty, not_null(c_88));
        }
      }
    {
      e_88 = t;
      if(((b_88 != NULL) && (b_88 != e_88)))
        _fail(e_88);
      else
        b_88 = e_88;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_24, not_null(b_88));
      t = printnl_0(t);
    }
  }
  t = m_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_112 (ATerm))
{
  ATerm h_88 (ATerm t)
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = Cons_2(t, r_112, h_88);
      }
    return(t);
  }
  t = h_88(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
  q_88 = t;
  n_88 :
  if(((ATgetType(q_88) == AT_LIST) && ((ATermList) q_88 != ATempty)))
    {
      o_88 = ATgetFirst((ATermList) q_88);
      p_88 = (ATerm) ATgetNext((ATermList) q_88);
      {
        ATerm t_88 = NULL;
        t = not_null(p_88);
        {
          ATerm z_30;
          z_30 = t;
          {
            ATerm w_88 = NULL,a_89 = NULL,c_89 = NULL;
            ATerm a_31;
            a_31 = t;
            {
              ATerm x_88 = NULL;
              t = i_0(t);
              {
                x_88 = t;
                if(((w_88 != NULL) && (w_88 != x_88)))
                  _fail(x_88);
                else
                  w_88 = x_88;
              }
            }
            t = a_31;
            {
              ATerm b_89 = NULL;
              t = not_null(o_88);
              {
                t = h_0(t);
                {
                  b_89 = t;
                  if(((a_89 != NULL) && (a_89 != b_89)))
                    _fail(b_89);
                  else
                    a_89 = b_89;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_88)), not_null(a_89));
                {
                  c_89 = t;
                  if(((t_88 != NULL) && (t_88 != c_89)))
                    _fail(c_89);
                  else
                    t_88 = c_89;
                }
              }
            }
          }
          t = z_30;
          {
            ATerm d_4 (ATerm t)
            {
              t = not_null(t_88);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_88 == ATempty))
        {
          {
            t = term_c_27;
            t = i_0(t);
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
  ATerm e_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm n_89 = NULL,o_89 = NULL;
  n_89 = t;
  m_89 :
  if(match_cons(n_89, sym_Program_1))
    {
      o_89 = ATgetArgument(n_89, 0);
      {
        ATerm r_89 = NULL,u_89 = NULL;
        ATerm t_89 = NULL;
        t = SSLgetAnnotations(not_null(n_89));
        {
          t_89 = t;
          if(((r_89 != NULL) && (r_89 != t_89)))
            _fail(t_89);
          else
            r_89 = t_89;
        }
        {
          t = not_null(o_89);
          {
            ATerm w_89 = NULL;
            t = x_81(t);
            {
              u_89 = t;
              {
                ATerm x_89 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_89)), not_null(r_89));
                {
                  x_89 = t;
                  if(((w_89 != NULL) && (w_89 != x_89)))
                    _fail(x_89);
                  else
                    w_89 = x_89;
                }
                t = not_null(w_89);
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
  ATerm i_90 = NULL;
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_90 = NULL;
      t = term_t_29;
      {
        t = get_config_0(t);
        {
          j_90 = t;
          if(((i_90 != NULL) && (i_90 != j_90)))
            _fail(j_90);
          else
            i_90 = j_90;
        }
      }
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm k_90 = NULL;
            k_90 = t;
            if(((i_90 != NULL) && (i_90 != k_90)))
              _fail(k_90);
            else
              i_90 = k_90;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = option_defined_1(t, f_4);
      }
    }
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        t = not_null(i_90);
        return(t);
      }
      t = short_description_1(t, i_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, h_4);
    {
      t = term_d_31;
      {
        t = echo_0(t);
        {
          t = term_g_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm l_90 = NULL;
                  ATerm m_90 = NULL;
                  m_90 = t;
                  if(((l_90 != NULL) && (l_90 != m_90)))
                    _fail(m_90);
                  else
                    l_90 = m_90;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_90)), term_h_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_4);
                {
                  ATerm l_4 (ATerm t)
                  {
                    ATerm n_90 = NULL;
                    ATerm o_90 = NULL;
                    ATerm m_4 (ATerm t)
                    {
                      t = not_null(i_90);
                      return(t);
                    }
                    t = long_description_1(t, m_4);
                    {
                      o_90 = t;
                      if(((n_90 != NULL) && (n_90 != o_90)))
                        _fail(o_90);
                      else
                        n_90 = o_90;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_90)), term_i_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_4);
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
ATerm debug_0 (ATerm t)
{
  ATerm j_31;
  j_31 = t;
  {
    ATerm w_90 = NULL;
    ATerm x_90 = NULL;
    x_90 = t;
    if(((w_90 != NULL) && (w_90 != x_90)))
      _fail(x_90);
    else
      w_90 = x_90;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATempty, not_null(w_90)));
      t = printnl_0(t);
    }
  }
  t = j_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm k_31;
  k_31 = t;
  {
    t = t_99(t);
    t = debug_0(t);
  }
  t = k_31;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm e_91 = NULL,f_91 = NULL;
  e_91 = t;
  d_91 :
  if(match_cons(e_91, sym_Undefined_1))
    {
      f_91 = ATgetArgument(e_91, 0);
      {
        ATerm i_91 = NULL,k_91 = NULL;
        ATerm j_91 = NULL;
        t = SSLgetAnnotations(not_null(e_91));
        {
          j_91 = t;
          if(((i_91 != NULL) && (i_91 != j_91)))
            _fail(j_91);
          else
            i_91 = j_91;
        }
        {
          t = not_null(f_91);
          {
            ATerm m_91 = NULL;
            t = y_81(t);
            {
              k_91 = t;
              {
                ATerm n_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_91)), not_null(i_91));
                {
                  n_91 = t;
                  if(((m_91 != NULL) && (m_91 != n_91)))
                    _fail(n_91);
                  else
                    m_91 = n_91;
                }
                t = not_null(m_91);
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
ATerm fetch_1 (ATerm t, ATerm a_113 (ATerm))
{
  ATerm v_91 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_113, _id);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = Cons_2(t, _id, v_91);
      }
    return(t);
  }
  t = v_91(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_96 (ATerm))
{
  t = fetch_1(t, f_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_cons(a_92, sym_Help_0))
    {
      ATerm c_92 = NULL,e_92 = NULL;
      ATerm n_31;
      n_31 = t;
      {
        ATerm d_92 = NULL;
        t = SSLgetAnnotations(not_null(a_92));
        {
          d_92 = t;
          if(((c_92 != NULL) && (c_92 != d_92)))
            _fail(d_92);
          else
            c_92 = d_92;
        }
      }
      t = n_31;
      {
        ATerm f_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_92));
        {
          f_92 = t;
          if(((e_92 != NULL) && (e_92 != f_92)))
            _fail(f_92);
          else
            e_92 = f_92;
        }
        t = not_null(e_92);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_116 (ATerm))
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_116(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  k_92 :
  if(match_cons(l_92, sym__2))
    {
      m_92 = ATgetArgument(l_92, 0);
      n_92 = ATgetArgument(l_92, 1);
      t = SSL_table_get(not_null(m_92), not_null(n_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL;
  a_93 = t;
  z_92 :
  if(match_cons(a_93, sym__3))
    {
      b_93 = ATgetArgument(a_93, 0);
      c_93 = ATgetArgument(a_93, 1);
      d_93 = ATgetArgument(a_93, 2);
      {
        ATerm x_31;
        x_31 = t;
        {
          ATerm h_93 = NULL;
          ATerm i_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_93), not_null(c_93));
          {
            ATerm y_31 = t;
            int z_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_31);
              }
            else
              {
                t = y_31;
                t = (ATerm) ATempty;
              }
            {
              i_93 = t;
              if(((h_93 != NULL) && (h_93 != i_93)))
                _fail(i_93);
              else
                h_93 = i_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_93), not_null(c_93), (ATerm) ATinsert(CheckATermList(not_null(h_93)), not_null(d_93)));
            t = table_put_0(t);
          }
        }
        t = x_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm m_93 = NULL;
  ATerm n_93 = NULL;
  t = term_c_27;
  {
    t = f_95(t);
    {
      n_93 = t;
      if(((m_93 != NULL) && (m_93 != n_93)))
        _fail(n_93);
      else
        m_93 = n_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_31, term_f_31, not_null(m_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL;
  t_93 = t;
  s_93 :
  if(match_string(t_93, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_93) == AT_LIST) && ((ATermList) t_93 != ATempty)))
        {
          u_93 = ATgetFirst((ATermList) t_93);
          v_93 = (ATerm) ATgetNext((ATermList) t_93);
          {
            ATerm y_93 = NULL;
            ATerm a_32;
            a_32 = t;
            {
              t = not_null(u_93);
              t = a_0(t);
            }
            t = a_32;
            {
              ATerm z_93 = NULL;
              t = term_c_27;
              {
                t = b_0(t);
                {
                  z_93 = t;
                  if(((y_93 != NULL) && (y_93 != z_93)))
                    _fail(z_93);
                  else
                    y_93 = z_93;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_93)), not_null(y_93));
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
    ATerm e_94 = NULL;
    e_94 = t;
    d_94 :
    if(!(match_string(e_94, "--help")))
      {
        if(!(match_string(e_94, "-h")))
          {
            if(!(match_string(e_94, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_c_32;
    {
      t = set_config_0(t);
      t = term_d_32;
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_e_32;
    return(t);
  }
  t = Option_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL;
  h_94 = t;
  g_94 :
  if(((ATgetType(h_94) == AT_LIST) && ((ATermList) h_94 != ATempty)))
    {
      i_94 = ATgetFirst((ATermList) h_94);
      j_94 = (ATerm) ATgetNext((ATermList) h_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm))
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  s_94 :
  if(((ATgetType(t_94) == AT_LIST) && ((ATermList) t_94 != ATempty)))
    {
      u_94 = ATgetFirst((ATermList) t_94);
      v_94 = (ATerm) ATgetNext((ATermList) t_94);
      {
        ATerm z_94 = NULL,h_95 = NULL;
        ATerm g_95 = NULL;
        t = SSLgetAnnotations(not_null(t_94));
        {
          g_95 = t;
          if(((z_94 != NULL) && (z_94 != g_95)))
            _fail(g_95);
          else
            z_94 = g_95;
        }
        {
          t = not_null(u_94);
          {
            ATerm j_95 = NULL;
            t = u_92(t);
            {
              h_95 = t;
              {
                t = not_null(v_94);
                {
                  ATerm l_95 = NULL;
                  t = v_92(t);
                  {
                    j_95 = t;
                    {
                      ATerm m_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_95)), not_null(h_95)), not_null(z_94));
                      {
                        m_95 = t;
                        if(((l_95 != NULL) && (l_95 != m_95)))
                          _fail(m_95);
                        else
                          l_95 = m_95;
                      }
                      t = not_null(l_95);
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
  ATerm w_95 = NULL;
  w_95 = t;
  v_95 :
  if(((ATermList) w_95 == ATempty))
    {
      {
        ATerm y_95 = NULL,a_96 = NULL;
        ATerm f_32;
        f_32 = t;
        {
          ATerm z_95 = NULL;
          t = SSLgetAnnotations(not_null(w_95));
          {
            z_95 = t;
            if(((y_95 != NULL) && (y_95 != z_95)))
              _fail(z_95);
            else
              y_95 = z_95;
          }
        }
        t = f_32;
        {
          ATerm b_96 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_95));
          {
            b_96 = t;
            if(((a_96 != NULL) && (a_96 != b_96)))
              _fail(b_96);
            else
              a_96 = b_96;
          }
          t = not_null(a_96);
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
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL;
  i_96 = t;
  h_96 :
  if(match_cons(i_96, sym__2))
    {
      j_96 = ATgetArgument(i_96, 0);
      k_96 = ATgetArgument(i_96, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_23, not_null(j_96), not_null(k_96));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_95 (ATerm))
{
  ATerm g_32;
  g_32 = t;
  {
    ATerm t_4 (ATerm t)
    {
      t = term_h_32;
      t = d_95(t);
      return(t);
    }
    t = try_1(t, t_4);
  }
  t = g_32;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm s_96 = NULL;
      ATerm i_32;
      i_32 = t;
      {
        ATerm q_96 = NULL;
        ATerm r_96 = NULL;
        r_96 = t;
        if(((q_96 != NULL) && (q_96 != r_96)))
          _fail(r_96);
        else
          q_96 = r_96;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_29, not_null(q_96));
          t = set_config_0(t);
        }
      }
      t = i_32;
      {
        ATerm t_96 = NULL;
        t_96 = t;
        if(((s_96 != NULL) && (s_96 != t_96)))
          _fail(t_96);
        else
          s_96 = t_96;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_96));
      }
      return(t);
    }
    ATerm w_4 (ATerm t)
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_32);
            }
          else
            {
              t = n_32;
              {
                t = d_95(t);
                t = Cons_2(t, _id, w_4);
              }
            }
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_4, w_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL;
  ATerm p_32;
  p_32 = t;
  {
    ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
    e_97 = t;
    a_97 :
    if(match_cons(e_97, sym__3))
      {
        f_97 = ATgetArgument(e_97, 0);
        g_97 = ATgetArgument(e_97, 1);
        h_97 = ATgetArgument(e_97, 2);
        {
          if(((b_97 != NULL) && (b_97 != f_97)))
            _fail(f_97);
          else
            b_97 = f_97;
          {
            if(((c_97 != NULL) && (c_97 != g_97)))
              _fail(g_97);
            else
              c_97 = g_97;
            {
              if(((d_97 != NULL) && (d_97 != h_97)))
                _fail(h_97);
              else
                d_97 = h_97;
              t = SSL_table_put(not_null(b_97), not_null(c_97), not_null(d_97));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm k_97 = NULL;
  ATerm q_32;
  q_32 = t;
  {
    t = term_v_32;
    t = table_put_0(t);
  }
  t = q_32;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm w_32 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_95(t);
          LocalPopChoice(n_33);
        }
      else
        {
          t = w_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_4);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_33;
            q_33 = t;
            {
              ATerm r_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_32;
                  t = get_config_0(t);
                  LocalPopChoice(s_33);
                }
              else
                {
                  t = r_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = q_33;
            {
              t = system_usage_0(t);
              {
                t = term_z_25;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm z_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm l_97 = NULL;
                  l_97 = t;
                  if(((k_97 != NULL) && (k_97 != l_97)))
                    _fail(l_97);
                  else
                    k_97 = l_97;
                  return(t);
                }
                t = Undefined_1(t, a_5);
                return(t);
              }
              t = option_defined_1(t, z_4);
              {
                ATerm e_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_97)), term_t_33);
                  return(t);
                }
                t = say_1(t, e_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_21;
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
        ATerm u_33;
        u_33 = t;
        {
          t = term_e_31;
          t = table_destroy_0(t);
        }
        t = u_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm))
{
  t = parse_options_1(t, x_97);
  {
    t = store_options_0(t);
    {
      t = z_97(t);
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_97);
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_98(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_98(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, f_5, q_98, r_98, j_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm b_34;
      b_34 = t;
      {
        ATerm o_97 = NULL;
        ATerm p_97 = NULL;
        t = term_t_29;
        {
          t = get_config_0(t);
          {
            p_97 = t;
            if(((o_97 != NULL) && (o_97 != p_97)))
              _fail(p_97);
            else
              o_97 = p_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATempty, not_null(o_97)));
          t = printnl_0(t);
        }
      }
      t = b_34;
      return(t);
    }
    t = if_verbose2_1(t, n_5);
    return(t);
  }
  t = iowrap_4(t, i_98, j_98, k_98, m_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_98 (ATerm), ATerm h_98 (ATerm))
{
  t = iowrap_3(t, g_98, h_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_98 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    t = _2(t, _id, d_98);
    return(t);
  }
  t = iowrap_2(t, o_5, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
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
    t = apply_to_bodies_1(t, q_5);
    return(t);
  }
  t = iowrap_1(t, p_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
