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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
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
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
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
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
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
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  init_constant_terms();
}
ATerm term_x_34;
ATerm term_m_34;
ATerm term_e_34;
ATerm term_s_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_s_29;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_e_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_y_23;
ATerm term_o_23;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_r_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_s_11;
ATerm term_l_7;
ATerm term_y_6;
void init_constant_terms (void)
{
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Op_2, term_e_14, (ATerm) ATempty);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_f_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_y_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_k_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_y_25);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_y_25);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_z_31);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_y_25);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__3, term_y_31, term_z_31, (ATerm) ATempty);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm isect_1 (ATerm, ATerm d_107 (ATerm));
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm s_87 (ATerm));
ATerm Scope_2 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm tboundin_3 (ATerm, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm j_107 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm));
ATerm crush_3 (ATerm, ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm));
ATerm free_vars_3 (ATerm, ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_97 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm f_104 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm e_97 (ATerm), ATerm f_97 (ATerm));
ATerm alltd_1 (ATerm, ATerm k_99 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm p_96 (ATerm), ATerm q_96 (ATerm));
ATerm substitute_1 (ATerm, ATerm r_96 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm n_107 (ATerm), ATerm o_107 (ATerm));
ATerm diff_1 (ATerm, ATerm f_107 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_113 (ATerm), ATerm y_113 (ATerm));
ATerm for_3 (ATerm, ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm w_98 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm));
ATerm zip_1 (ATerm, ATerm d_102 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm Prim_2 (ATerm, ATerm e_84 (ATerm), ATerm f_84 (ATerm));
ATerm Explode_2 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm));
ATerm Op_2 (ATerm, ATerm i_86 (ATerm), ATerm j_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm n_95 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm g_113 (ATerm), ATerm h_113 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_113 (ATerm));
ATerm downup_1 (ATerm, ATerm i_97 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm));
ATerm Strategies_1 (ATerm, ATerm w_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm y_86 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm k_95 (ATerm));
ATerm _2 (ATerm, ATerm t_82 (ATerm), ATerm u_82 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_104 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_117 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_120 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_118 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_100 (ATerm), ATerm z_100 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_108 (ATerm), ATerm b_108 (ATerm));
ATerm crush_2 (ATerm, ATerm y_106 (ATerm), ATerm z_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_120 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_118 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_122 (ATerm));
ATerm map_1 (ATerm, ATerm m_103 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_122 (ATerm));
ATerm Program_1 (ATerm, ATerm z_94 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_117 (ATerm));
ATerm Undefined_1 (ATerm, ATerm a_95 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_103 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_121 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_100 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_122 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_122 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_122 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_119 (ATerm), ATerm k_119 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_119 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm isect_1 (ATerm t, ATerm d_107 (ATerm))
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
          ATerm x_4 (ATerm t)
          {
            ATerm d_5 = t;
            int g_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(g_5);
              }
            else
              {
                t = d_5;
                {
                  ATerm i_5 = t;
                  int j_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_5;
                      n_5 = t;
                      {
                        ATerm b_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, d_107, b_0);
                      }
                      t = n_5;
                      t = Cons_2(t, _id, x_4);
                      LocalPopChoice(j_5);
                    }
                  else
                    {
                      t = i_5;
                      {
                        ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
                        q_4 = t;
                        j_3 :
                        if(((ATgetType(q_4) == AT_LIST) && !(ATisEmpty(q_4))))
                          {
                            r_4 = ATgetFirst((ATermList) q_4);
                            s_4 = (ATerm) ATgetNext((ATermList) q_4);
                            {
                              t = not_null(s_4);
                              t = x_4(t);
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
          t = x_4(t);
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
ATerm DynamicRules_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm f_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_DynamicRules_1))
    {
      h_5 = ATgetArgument(f_5, 0);
      {
        ATerm k_5 = NULL,m_5 = NULL;
        ATerm l_5 = NULL;
        t = SSLgetAnnotations(not_null(f_5));
        {
          l_5 = t;
          if(((k_5 != NULL) && (k_5 != l_5)))
            _fail(l_5);
          else
            k_5 = l_5;
        }
        {
          t = not_null(h_5);
          {
            ATerm o_5 = NULL;
            t = s_87(t);
            {
              m_5 = t;
              {
                ATerm p_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(m_5)), not_null(k_5));
                {
                  p_5 = t;
                  if(((o_5 != NULL) && (o_5 != p_5)))
                    _fail(p_5);
                  else
                    o_5 = p_5;
                }
                t = not_null(o_5);
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
ATerm Scope_2 (ATerm t, ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_Scope_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm g_6 = NULL,i_6 = NULL;
        ATerm h_6 = NULL;
        t = SSLgetAnnotations(not_null(a_6));
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
        {
          t = not_null(b_6);
          {
            ATerm k_6 = NULL;
            t = m_84(t);
            {
              i_6 = t;
              {
                t = not_null(c_6);
                {
                  ATerm m_6 = NULL;
                  t = n_84(t);
                  {
                    k_6 = t;
                    {
                      ATerm n_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(i_6), not_null(k_6)), not_null(g_6));
                      {
                        n_6 = t;
                        if(((m_6 != NULL) && (m_6 != n_6)))
                          _fail(n_6);
                        else
                          m_6 = n_6;
                      }
                      t = not_null(m_6);
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
ATerm tboundin_3 (ATerm t, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, j_96, h_96);
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      t = DynamicRules_1(t, h_96);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_DynamicRules_1))
    {
      w_6 = ATgetArgument(v_6, 0);
      {
        t = not_null(w_6);
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
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  b_7 :
  if(match_cons(g_7, sym_LRule_1))
    {
      h_7 = ATgetArgument(g_7, 0);
      c_7 :
      if(match_cons(h_7, sym_Rule_3))
        {
          d_7 = ATgetArgument(h_7, 0);
          e_7 = ATgetArgument(h_7, 1);
          f_7 = ATgetArgument(h_7, 2);
          {
            t = not_null(d_7);
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
      if(match_cons(g_7, sym_Scope_2))
        {
          h_7 = ATgetArgument(g_7, 0);
          i_7 = ATgetArgument(g_7, 1);
          t = not_null(h_7);
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
  ATerm s_7 = NULL,t_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Var_1))
    {
      t_7 = ATgetArgument(s_7, 0);
      t = (ATerm) ATinsert(ATempty, not_null(t_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym__2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        t = not_null(z_7);
        {
          ATerm e_8 (ATerm t)
          {
            ATerm s_5 = t;
            int t_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_8);
                LocalPopChoice(t_5);
              }
            else
              {
                t = s_5;
                {
                  ATerm u_5 = t;
                  int v_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_0 (ATerm t)
                      {
                        t = not_null(a_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_107, c_0);
                      t = e_8(t);
                      LocalPopChoice(v_5);
                    }
                  else
                    {
                      t = u_5;
                      t = Cons_2(t, _id, e_8);
                    }
                }
              }
            return(t);
          }
          t = e_8(t);
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
ATerm foldr_3 (ATerm t, ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm))
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_108(t);
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
      {
        ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
        j_8 = t;
        i_8 :
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            k_8 = ATgetFirst((ATermList) j_8);
            l_8 = (ATerm) ATgetNext((ATermList) j_8);
            {
              ATerm o_8 = NULL,q_8 = NULL;
              ATerm y_5;
              y_5 = t;
              {
                ATerm p_8 = NULL;
                t = not_null(k_8);
                {
                  t = e_108(t);
                  {
                    p_8 = t;
                    if(((o_8 != NULL) && (o_8 != p_8)))
                      _fail(p_8);
                    else
                      o_8 = p_8;
                  }
                }
              }
              t = y_5;
              {
                ATerm r_8 = NULL;
                t = not_null(l_8);
                {
                  t = foldr_3(t, c_108, d_108, e_108);
                  {
                    r_8 = t;
                    if(((q_8 != NULL) && (q_8 != r_8)))
                      _fail(r_8);
                    else
                      q_8 = r_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), not_null(q_8));
                  t = d_108(t);
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
ATerm crush_3 (ATerm t, ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm))
{
  ATerm z_8 = NULL;
  ATerm b_9 = NULL;
  z_8 = t;
  {
    ATerm c_9 = NULL;
    ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
    t = not_null(z_8);
    {
      c_9 = t;
      {
        t = SSL_explode_term(not_null(c_9));
        {
          e_9 = t;
          y_8 :
          if(match_cons(e_9, sym__2))
            {
              f_9 = ATgetArgument(e_9, 0);
              g_9 = ATgetArgument(e_9, 1);
              if(((b_9 != NULL) && (b_9 != g_9)))
                _fail(g_9);
              else
                b_9 = g_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_9);
      t = foldr_3(t, a_107, b_107, c_107);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_9 (ATerm t)
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_111(t);
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        {
          ATerm f_6 = t;
          int j_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_9 = NULL;
              ATerm l_6;
              l_6 = t;
              {
                ATerm m_9 = NULL;
                t = t_111(t);
                {
                  m_9 = t;
                  if(((l_9 != NULL) && (l_9 != m_9)))
                    _fail(m_9);
                  else
                    l_9 = m_9;
                }
              }
              t = l_6;
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = not_null(l_9);
                    return(t);
                  }
                  t = split_2(t, n_9, h_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm f_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = u_111(t, e_0, n_9, f_0);
                {
                  ATerm j_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm m_0 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, j_0, m_0, _id);
                }
              }
              LocalPopChoice(j_6);
            }
          else
            {
              t = f_6;
              {
                ATerm q_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm r_0 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, q_0, r_0, n_9);
              }
            }
        }
      }
    return(t);
  }
  t = n_9(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm o_6 = t;
    int p_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(p_6);
      }
    else
      {
        t = o_6;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym_Scope_2))
    {
      v_9 = ATgetArgument(u_9, 0);
      w_9 = ATgetArgument(u_9, 1);
      {
        ATerm z_9 = NULL;
        ATerm a_10 = NULL,c_10 = NULL;
        ATerm b_10 = NULL;
        t = not_null(w_9);
        {
          t = tvars_0(t);
          {
            b_10 = t;
            if(((a_10 != NULL) && (a_10 != b_10)))
              _fail(b_10);
            else
              a_10 = b_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(a_10));
          {
            t = isect_1(t, eq_0);
            {
              c_10 = t;
              {
                if(((z_9 != NULL) && (z_9 != c_10)))
                  _fail(c_10);
                else
                  z_9 = c_10;
                {
                  ATerm q_6 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm d_10 = NULL;
                      d_10 = t;
                      if(((v_9 != NULL) && (v_9 != d_10)))
                        _fail(d_10);
                      else
                        v_9 = d_10;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = q_6;
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_9), not_null(w_9));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_97 (ATerm))
{
  t = g_97(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = topdown_1(t, g_97);
      return(t);
    }
    t = _all(t, t_0);
  }
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CleanupScope_0(t);
        t = try_1(t, FuseScope_0);
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, u_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = repeat_2(t, Optimize_0, _id);
    return(t);
  }
  t = downup_1(t, v_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  ATerm b_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_10), not_null(p_10)));
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_10), not_null(u_10)));
    return(t);
  }
  q_10 = t;
  k_10 :
  if(match_cons(q_10, sym_Seq_2))
    {
      r_10 = ATgetArgument(q_10, 0);
      u_10 = ATgetArgument(q_10, 1);
      l_10 :
      if(match_cons(u_10, sym_Scope_2))
        {
          o_10 = ATgetArgument(u_10, 0);
          p_10 = ATgetArgument(u_10, 1);
          m_10 :
          if(match_cons(r_10, sym_Scope_2))
            {
              s_10 = ATgetArgument(r_10, 0);
              t_10 = ATgetArgument(r_10, 1);
              {
                ATerm t_6 = t;
                int x_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_11(t);
                    LocalPopChoice(x_6);
                  }
                else
                  {
                    t = t_6;
                    t = c_11(t);
                  }
              }
            }
          else
            {
              t = b_11(t);
            }
        }
      else
        {
          n_10 :
          if(match_cons(r_10, sym_Scope_2))
            {
              s_10 = ATgetArgument(r_10, 0);
              t_10 = ATgetArgument(r_10, 1);
              t = c_11(t);
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
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  j_11 = t;
  e_11 :
  if(match_cons(j_11, sym_Let_2))
    {
      k_11 = ATgetArgument(j_11, 0);
      q_11 = ATgetArgument(j_11, 1);
      f_11 :
      if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
        {
          l_11 = ATgetFirst((ATermList) k_11);
          p_11 = (ATerm) ATgetNext((ATermList) k_11);
          g_11 :
          if(match_cons(l_11, sym_SDef_3))
            {
              m_11 = ATgetArgument(l_11, 0);
              n_11 = ATgetArgument(l_11, 1);
              o_11 = ATgetArgument(l_11, 2);
              h_11 :
              if(((ATgetType(n_11) == AT_LIST) && ATisEmpty(n_11)))
                {
                  i_11 :
                  if(((ATgetType(p_11) == AT_LIST) && ATisEmpty(p_11)))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_y_6), not_null(m_11), (ATerm)ATempty, not_null(o_11))), not_null(q_11));
                    }
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
ATerm at_suffix_1 (ATerm t, ATerm f_104 (ATerm))
{
  ATerm v_11 (ATerm t)
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_104(t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = Cons_2(t, _id, v_11);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_Let_2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      {
        ATerm n_12 = NULL,o_12 = NULL;
        ATerm d_13 = NULL;
        t = not_null(j_12);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
            p_12 = t;
            d_12 :
            if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
              {
                q_12 = ATgetFirst((ATermList) p_12);
                u_12 = (ATerm) ATgetNext((ATermList) p_12);
                e_12 :
                if(match_cons(q_12, sym_SDef_3))
                  {
                    r_12 = ATgetArgument(q_12, 0);
                    s_12 = ATgetArgument(q_12, 1);
                    t_12 = ATgetArgument(q_12, 2);
                    f_12 :
                    if(((ATgetType(s_12) == AT_LIST) && ATisEmpty(s_12)))
                      {
                        {
                          ATerm c_13 = NULL;
                          t = not_null(k_12);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
                              y_12 = t;
                              z_11 :
                              if(match_cons(y_12, sym_Call_2))
                                {
                                  z_12 = ATgetArgument(y_12, 0);
                                  b_13 = ATgetArgument(y_12, 1);
                                  a_12 :
                                  if(match_cons(z_12, sym_SVar_1))
                                    {
                                      a_13 = ATgetArgument(z_12, 0);
                                      b_12 :
                                      if(((ATgetType(b_13) == AT_LIST) && ATisEmpty(b_13)))
                                        {
                                          {
                                            if(((r_12 != NULL) && (r_12 != a_13)))
                                              _fail(a_13);
                                            else
                                              r_12 = a_13;
                                            t = not_null(t_12);
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
                            t = oncetd_1(t, x_0);
                            {
                              c_13 = t;
                              {
                                if(((n_12 != NULL) && (n_12 != c_13)))
                                  _fail(c_13);
                                else
                                  n_12 = c_13;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_12)), (ATerm) ATempty), not_null(n_12));
                                  {
                                    ATerm j_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_subterm_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = j_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
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
          t = at_suffix_1(t, w_0);
          {
            d_13 = t;
            if(((o_12 != NULL) && (o_12 != d_13)))
              _fail(d_13);
            else
              o_12 = d_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_12), not_null(n_12));
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  r_13 = t;
  l_13 :
  if(match_cons(r_13, sym__2))
    {
      s_13 = ATgetArgument(r_13, 0);
      u_13 = ATgetArgument(r_13, 1);
      m_13 :
      if(match_cons(s_13, sym_Build_1))
        {
          t_13 = ATgetArgument(s_13, 0);
          n_13 :
          if(match_cons(u_13, sym_Where_1))
            {
              v_13 = ATgetArgument(u_13, 0);
              o_13 :
              if(match_cons(v_13, sym_Prim_2))
                {
                  p_13 = ATgetArgument(v_13, 0);
                  q_13 = ATgetArgument(v_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_13), not_null(q_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(u_13, sym_Prim_2))
                {
                  v_13 = ATgetArgument(u_13, 0);
                  w_13 = ATgetArgument(u_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_13), not_null(w_13));
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
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  m_14 = t;
  h_14 :
  if(match_cons(m_14, sym__2))
    {
      n_14 = ATgetArgument(m_14, 0);
      p_14 = ATgetArgument(m_14, 1);
      i_14 :
      if(match_cons(n_14, sym_Build_1))
        {
          o_14 = ATgetArgument(n_14, 0);
          j_14 :
          if(match_cons(p_14, sym_Where_1))
            {
              q_14 = ATgetArgument(p_14, 0);
              k_14 :
              if(match_cons(q_14, sym_Build_1))
                {
                  l_14 = ATgetArgument(q_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(p_14, sym_Build_1))
                {
                  q_14 = ATgetArgument(p_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_14));
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  g_15 = t;
  b_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      l_15 = ATgetArgument(g_15, 1);
      c_15 :
      if(match_cons(h_15, sym_Build_1))
        {
          i_15 = ATgetArgument(h_15, 0);
          d_15 :
          if(match_cons(i_15, sym_Op_2))
            {
              j_15 = ATgetArgument(i_15, 0);
              k_15 = ATgetArgument(i_15, 1);
              e_15 :
              if(match_cons(l_15, sym_Match_1))
                {
                  m_15 = ATgetArgument(l_15, 0);
                  f_15 :
                  if(match_cons(m_15, sym_Op_2))
                    {
                      n_15 = ATgetArgument(m_15, 0);
                      o_15 = ATgetArgument(m_15, 1);
                      {
                        ATerm r_15 = NULL,s_15 = NULL;
                        if(((j_15 != NULL) && (j_15 != n_15)))
                          _fail(n_15);
                        else
                          j_15 = n_15;
                        {
                          if(((r_15 != NULL) && (r_15 != o_15)))
                            _fail(o_15);
                          else
                            r_15 = o_15;
                          {
                            ATerm y_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(r_15));
                            {
                              ATerm y_0 (ATerm t)
                              {
                                ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
                                t_15 = t;
                                z_14 :
                                if(match_cons(t_15, sym__2))
                                  {
                                    u_15 = ATgetArgument(t_15, 0);
                                    v_15 = ATgetArgument(t_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, y_0);
                              {
                                y_15 = t;
                                if(((s_15 != NULL) && (s_15 != y_15)))
                                  _fail(y_15);
                                else
                                  s_15 = y_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(j_15), not_null(k_15))));
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
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  i_16 = t;
  d_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      n_16 = ATgetArgument(i_16, 1);
      e_16 :
      if(match_cons(j_16, sym_Build_1))
        {
          k_16 = ATgetArgument(j_16, 0);
          f_16 :
          if(match_cons(k_16, sym_Op_2))
            {
              l_16 = ATgetArgument(k_16, 0);
              m_16 = ATgetArgument(k_16, 1);
              g_16 :
              if(match_cons(n_16, sym_Match_1))
                {
                  o_16 = ATgetArgument(n_16, 0);
                  h_16 :
                  if(match_cons(o_16, sym_Op_2))
                    {
                      p_16 = ATgetArgument(o_16, 0);
                      q_16 = ATgetArgument(o_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(p_16));
                        {
                          ATerm k_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = k_7;
                            }
                        }
                        t = term_l_7;
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
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            {
              ATerm q_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = q_7;
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm r_17 (ATerm t)
  {
    ATerm o_17 = NULL;
    ATerm p_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(g_17));
    {
      t = BMF_0(t);
      {
        p_17 = t;
        if(((o_17 != NULL) && (o_17 != p_17)))
          _fail(p_17);
        else
          o_17 = p_17;
      }
    }
    t = not_null(o_17);
    return(t);
  }
  e_17 = t;
  a_17 :
  if(match_cons(e_17, sym_Seq_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      b_17 :
      if(match_cons(g_17, sym_Seq_2))
        {
          c_17 = ATgetArgument(g_17, 0);
          d_17 = ATgetArgument(g_17, 1);
          {
            ATerm v_7 = t;
            int w_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_17 = NULL;
                ATerm l_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(c_17));
                {
                  t = BMF_0(t);
                  {
                    l_17 = t;
                    if(((k_17 != NULL) && (k_17 != l_17)))
                      _fail(l_17);
                    else
                      k_17 = l_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_17), not_null(d_17));
                LocalPopChoice(w_7);
              }
            else
              {
                t = v_7;
                t = r_17(t);
              }
          }
        }
      else
        {
          t = r_17(t);
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  z_17 = t;
  v_17 :
  if(match_cons(z_17, sym_Seq_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      c_18 = ATgetArgument(z_17, 1);
      w_17 :
      if(match_cons(a_18, sym_Build_1))
        {
          b_18 = ATgetArgument(a_18, 0);
          x_17 :
          if(match_cons(c_18, sym_Seq_2))
            {
              d_18 = ATgetArgument(c_18, 0);
              f_18 = ATgetArgument(c_18, 1);
              y_17 :
              if(match_cons(d_18, sym_Build_1))
                {
                  e_18 = ATgetArgument(d_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_18)), not_null(f_18));
                }
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
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  o_18 = t;
  m_18 :
  if(match_cons(o_18, sym_Scope_2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      n_18 :
      if(match_cons(q_18, sym_Scope_2))
        {
          r_18 = ATgetArgument(q_18, 0);
          s_18 = ATgetArgument(q_18, 1);
          {
            ATerm w_18 = NULL;
            ATerm x_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(r_18));
            {
              ATerm b_8 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = b_8;
                  t = conc_more_lists_0(t);
                }
              {
                x_18 = t;
                if(((w_18 != NULL) && (w_18 != x_18)))
                  _fail(x_18);
                else
                  w_18 = x_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_18), not_null(s_18));
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
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_Var_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      t = not_null(d_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  j_19 = t;
  h_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      i_19 :
      if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
        {
          m_19 = ATgetFirst((ATermList) l_19);
          n_19 = (ATerm) ATgetNext((ATermList) l_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(n_19));
        }
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
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  v_19 = t;
  s_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      t_19 :
      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
        {
          y_19 = ATgetFirst((ATermList) x_19);
          b_20 = (ATerm) ATgetNext((ATermList) x_19);
          u_19 :
          if(match_cons(y_19, sym__2))
            {
              z_19 = ATgetArgument(y_19, 0);
              a_20 = ATgetArgument(y_19, 1);
              {
                ATerm d_20 = NULL;
                if(((w_19 != NULL) && (w_19 != z_19)))
                  _fail(z_19);
                else
                  w_19 = z_19;
                {
                  if(((d_20 != NULL) && (d_20 != a_20)))
                    _fail(a_20);
                  else
                    d_20 = a_20;
                  t = not_null(d_20);
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
  ATerm d_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = d_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm e_97 (ATerm), ATerm f_97 (ATerm))
{
  ATerm j_20 = NULL;
  ATerm l_20 = NULL,m_20 = NULL;
  j_20 = t;
  {
    ATerm n_20 = NULL;
    t = not_null(j_20);
    {
      ATerm o_20 = NULL;
      t = e_97(t);
      {
        n_20 = t;
        {
          if(((l_20 != NULL) && (l_20 != n_20)))
            _fail(n_20);
          else
            l_20 = n_20;
          {
            t = f_97(t);
            {
              o_20 = t;
              if(((m_20 != NULL) && (m_20 != o_20)))
                _fail(o_20);
              else
                m_20 = o_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(m_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm k_99 (ATerm))
{
  ATerm s_20 (ATerm t)
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_99(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = _all(t, s_20);
      }
    return(t);
  }
  t = s_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym__2))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      {
        ATerm c_21 = NULL;
        if(((c_21 != NULL) && (c_21 != z_20)))
          _fail(z_20);
        else
          c_21 = z_20;
      }
    }
  else
    {
      if(match_cons(x_20, sym__3))
        {
          y_20 = ATgetArgument(x_20, 0);
          z_20 = ATgetArgument(x_20, 1);
          a_21 = ATgetArgument(x_20, 2);
          {
            ATerm i_21 = NULL;
            ATerm j_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(z_20));
            {
              t = zip_1(t, _id);
              {
                j_21 = t;
                if(((i_21 != NULL) && (i_21 != j_21)))
                  _fail(j_21);
                else
                  i_21 = j_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(a_21));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm p_96 (ATerm), ATerm q_96 (ATerm))
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  t = subs_args_0(t);
  {
    p_21 = t;
    o_21 :
    if(match_cons(p_21, sym__2))
      {
        q_21 = ATgetArgument(p_21, 0);
        r_21 = ATgetArgument(p_21, 1);
        {
          t = not_null(r_21);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                t = not_null(q_21);
                return(t);
              }
              t = SubsVar_2(t, p_96, a_1);
              t = q_96(t);
              return(t);
            }
            t = alltd_1(t, z_0);
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
ATerm substitute_1 (ATerm t, ATerm r_96 (ATerm))
{
  t = substitute_2(t, r_96, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_2(t, IsVar_0, _id);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym__2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      if(((y_21 != NULL) && (y_21 != z_21)))
        _fail(z_21);
      else
        y_21 = z_21;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_107 (ATerm), ATerm o_107 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
    {
      g_22 = ATgetFirst((ATermList) f_22);
      h_22 = (ATerm) ATgetNext((ATermList) f_22);
      {
        t = o_107(t);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm k_22 = NULL;
            k_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_22), not_null(k_22));
              t = n_107(t);
            }
            return(t);
          }
          t = fetch_1(t, b_1);
        }
        t = not_null(h_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  p_22 :
  if(match_cons(q_22, sym__2))
    {
      r_22 = ATgetArgument(q_22, 0);
      s_22 = ATgetArgument(q_22, 1);
      {
        t = not_null(r_22);
        {
          ATerm w_22 (ATerm t)
          {
            ATerm m_8 = t;
            int n_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(n_8);
              }
            else
              {
                t = m_8;
                {
                  ATerm s_8 = t;
                  int t_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_1 (ATerm t)
                      {
                        t = not_null(s_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_107, c_1);
                      t = w_22(t);
                      LocalPopChoice(t_8);
                    }
                  else
                    {
                      t = s_8;
                      t = Cons_2(t, _id, w_22);
                    }
                }
              }
            return(t);
          }
          t = w_22(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  a_23 = t;
  y_22 :
  if(match_cons(a_23, sym__2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      z_22 :
      if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
        {
          d_23 = ATgetFirst((ATermList) c_23);
          e_23 = (ATerm) ATgetNext((ATermList) c_23);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_23)), not_null(d_23)), not_null(e_23));
        }
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
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  t_23 = t;
  r_23 :
  if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
    {
      u_23 = ATgetFirst((ATermList) t_23);
      x_23 = (ATerm) ATgetNext((ATermList) t_23);
      s_23 :
      if(match_cons(u_23, sym__2))
        {
          v_23 = ATgetArgument(u_23, 0);
          w_23 = ATgetArgument(u_23, 1);
          {
            ATerm b_24 = NULL,c_24 = NULL,i_24 = NULL,o_24 = NULL;
            ATerm u_8;
            u_8 = t;
            {
              ATerm d_24 = NULL;
              ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
              t = not_null(w_23);
              {
                d_24 = t;
                {
                  t = SSL_explode_term(not_null(d_24));
                  {
                    f_24 = t;
                    m_23 :
                    if(match_cons(f_24, sym__2))
                      {
                        g_24 = ATgetArgument(f_24, 0);
                        h_24 = ATgetArgument(f_24, 1);
                        {
                          if(((b_24 != NULL) && (b_24 != g_24)))
                            _fail(g_24);
                          else
                            b_24 = g_24;
                          if(((c_24 != NULL) && (c_24 != h_24)))
                            _fail(h_24);
                          else
                            c_24 = h_24;
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
            t = u_8;
            {
              ATerm v_8;
              v_8 = t;
              {
                ATerm j_24 = NULL;
                ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
                t = not_null(v_23);
                {
                  j_24 = t;
                  {
                    t = SSL_explode_term(not_null(j_24));
                    {
                      l_24 = t;
                      p_23 :
                      if(match_cons(l_24, sym__2))
                        {
                          m_24 = ATgetArgument(l_24, 0);
                          n_24 = ATgetArgument(l_24, 1);
                          {
                            if(((b_24 != NULL) && (b_24 != m_24)))
                              _fail(m_24);
                            else
                              b_24 = m_24;
                            if(((i_24 != NULL) && (i_24 != n_24)))
                              _fail(n_24);
                            else
                              i_24 = n_24;
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
              t = v_8;
              {
                ATerm p_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(c_24));
                {
                  t = zip_1(t, _id);
                  {
                    p_24 = t;
                    if(((o_24 != NULL) && (o_24 != p_24)))
                      _fail(p_24);
                    else
                      o_24 = p_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_24), not_null(x_23));
                  {
                    ATerm w_8 = t;
                    int x_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(x_8);
                      }
                    else
                      {
                        t = w_8;
                        t = conc_more_lists_0(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  z_24 = t;
  x_24 :
  if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
    {
      a_25 = ATgetFirst((ATermList) z_24);
      d_25 = (ATerm) ATgetNext((ATermList) z_24);
      y_24 :
      if(match_cons(a_25, sym__2))
        {
          b_25 = ATgetArgument(a_25, 0);
          c_25 = ATgetArgument(a_25, 1);
          {
            ATerm f_25 = NULL;
            if(((b_25 != NULL) && (b_25 != c_25)))
              _fail(c_25);
            else
              b_25 = c_25;
            {
              if(((f_25 != NULL) && (f_25 != d_25)))
                _fail(d_25);
              else
                f_25 = d_25;
              t = not_null(f_25);
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
ATerm while_not_2 (ATerm t, ATerm x_113 (ATerm), ATerm y_113 (ATerm))
{
  ATerm h_25 (ATerm t)
  {
    ATerm a_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_113(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = a_9;
        {
          t = y_113(t);
          t = h_25(t);
        }
      }
    return(t);
  }
  t = h_25(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm))
{
  t = a_114(t);
  t = while_not_2(t, b_114, c_114);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm j_25 = NULL;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_25));
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              ATerm o_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, g_1);
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, d_1, e_1, f_1);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm m_25 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_98(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = _one(t, m_25);
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        ATerm s_9;
        s_9 = t;
        {
          t = not_null(s_25);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm v_25 = NULL;
              v_25 = t;
              if(((r_25 != NULL) && (r_25 != v_25)))
                _fail(v_25);
              else
                r_25 = v_25;
              return(t);
            }
            t = oncetd_1(t, h_1);
          }
        }
        t = s_9;
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
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Var_1))
    {
      i_26 = ATgetArgument(h_26, 0);
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_26 = NULL,n_26 = NULL;
            ATerm m_26 = NULL;
            t = SSLgetAnnotations(not_null(h_26));
            {
              m_26 = t;
              if(((l_26 != NULL) && (l_26 != m_26)))
                _fail(m_26);
              else
                l_26 = m_26;
            }
            {
              t = not_null(i_26);
              {
                ATerm p_26 = NULL;
                t = p_0(t);
                {
                  n_26 = t;
                  {
                    ATerm q_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_26)), not_null(l_26));
                    {
                      q_26 = t;
                      if(((p_26 != NULL) && (p_26 != q_26)))
                        _fail(q_26);
                      else
                        p_26 = q_26;
                    }
                    t = not_null(p_26);
                  }
                }
              }
            }
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm t_26 = NULL,v_26 = NULL;
              ATerm u_26 = NULL;
              t = SSLgetAnnotations(not_null(h_26));
              {
                u_26 = t;
                if(((t_26 != NULL) && (t_26 != u_26)))
                  _fail(u_26);
                else
                  t_26 = u_26;
              }
              {
                t = not_null(i_26);
                {
                  ATerm x_26 = NULL;
                  t = p_0(t);
                  {
                    v_26 = t;
                    {
                      ATerm y_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_26)), not_null(t_26));
                      {
                        y_26 = t;
                        if(((x_26 != NULL) && (x_26 != y_26)))
                          _fail(y_26);
                        else
                          x_26 = y_26;
                      }
                      t = not_null(x_26);
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
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  y_28 = t;
  x_27 :
  if(match_cons(y_28, sym_Seq_2))
    {
      z_28 = ATgetArgument(y_28, 0);
      b_29 = ATgetArgument(y_28, 1);
      y_27 :
      if(match_cons(z_28, sym_Assign_1))
        {
          a_29 = ATgetArgument(z_28, 0);
          z_27 :
          if(match_cons(a_29, sym_Var_1))
            {
              r_28 = ATgetArgument(a_29, 0);
              a_28 :
              if(match_cons(b_29, sym_Seq_2))
                {
                  c_29 = ATgetArgument(b_29, 0);
                  d_29 = ATgetArgument(b_29, 1);
                  b_28 :
                  if(match_cons(c_29, sym_Build_1))
                    {
                      u_28 = ATgetArgument(c_29, 0);
                      c_28 :
                      if(match_cons(u_28, sym_Var_1))
                        {
                          v_28 = ATgetArgument(u_28, 0);
                          {
                            ATerm j_29 = NULL;
                            if(((r_28 != NULL) && (r_28 != v_28)))
                              _fail(v_28);
                            else
                              r_28 = v_28;
                            {
                              if(((j_29 != NULL) && (j_29 != d_29)))
                                _fail(d_29);
                              else
                                j_29 = d_29;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(j_29));
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
          if(match_cons(z_28, sym_Build_1))
            {
              a_29 = ATgetArgument(z_28, 0);
              d_28 :
              if(match_cons(b_29, sym_Scope_2))
                {
                  c_29 = ATgetArgument(b_29, 0);
                  d_29 = ATgetArgument(b_29, 1);
                  e_28 :
                  if(match_cons(d_29, sym_Seq_2))
                    {
                      e_29 = ATgetArgument(d_29, 0);
                      h_29 = ATgetArgument(d_29, 1);
                      f_28 :
                      if(match_cons(e_29, sym_Assign_1))
                        {
                          f_29 = ATgetArgument(e_29, 0);
                          g_28 :
                          if(match_cons(f_29, sym_Var_1))
                            {
                              g_29 = ATgetArgument(f_29, 0);
                              {
                                ATerm e_10 = t;
                                int f_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_30 = NULL,o_30 = NULL;
                                    ATerm g_10;
                                    g_10 = t;
                                    {
                                      ATerm n_30 = NULL;
                                      t = not_null(a_29);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(c_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  n_30 = t;
                                                  if(((m_30 != NULL) && (m_30 != n_30)))
                                                    _fail(n_30);
                                                  else
                                                    m_30 = n_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = g_10;
                                    {
                                      ATerm p_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, not_null(a_29)), not_null(h_29));
                                      {
                                        t = substitute_2(t, IsVar_0, _id);
                                        {
                                          p_30 = t;
                                          if(((o_30 != NULL) && (o_30 != p_30)))
                                            _fail(p_30);
                                          else
                                            o_30 = p_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_30), not_null(o_30)));
                                    }
                                    LocalPopChoice(f_10);
                                  }
                                else
                                  {
                                    t = e_10;
                                    {
                                      ATerm u_30 = NULL,w_30 = NULL;
                                      ATerm h_10;
                                      h_10 = t;
                                      {
                                        ATerm v_30 = NULL;
                                        t = not_null(a_29);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(c_29));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    v_30 = t;
                                                    if(((u_30 != NULL) && (u_30 != v_30)))
                                                      _fail(v_30);
                                                    else
                                                      u_30 = v_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = h_10;
                                      {
                                        ATerm x_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, not_null(a_29)), not_null(h_29));
                                        {
                                          t = substitute_2(t, IsVar_0, _id);
                                          {
                                            x_30 = t;
                                            if(((w_30 != NULL) && (w_30 != x_30)))
                                              _fail(x_30);
                                            else
                                              w_30 = x_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_30), not_null(w_30)));
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
      if(match_cons(y_28, sym_Scope_2))
        {
          z_28 = ATgetArgument(y_28, 0);
          b_29 = ATgetArgument(y_28, 1);
          h_28 :
          if(match_cons(b_29, sym_Seq_2))
            {
              c_29 = ATgetArgument(b_29, 0);
              d_29 = ATgetArgument(b_29, 1);
              i_28 :
              if(match_cons(c_29, sym_Assign_1))
                {
                  u_28 = ATgetArgument(c_29, 0);
                  j_28 :
                  if(match_cons(u_28, sym_Var_1))
                    {
                      v_28 = ATgetArgument(u_28, 0);
                      k_28 :
                      if(match_cons(d_29, sym_Seq_2))
                        {
                          e_29 = ATgetArgument(d_29, 0);
                          h_29 = ATgetArgument(d_29, 1);
                          l_28 :
                          if(match_cons(e_29, sym_Assign_2))
                            {
                              f_29 = ATgetArgument(e_29, 0);
                              s_28 = ATgetArgument(e_29, 1);
                              m_28 :
                              if(match_cons(f_29, sym_Var_1))
                                {
                                  g_29 = ATgetArgument(f_29, 0);
                                  n_28 :
                                  if(match_cons(s_28, sym_Var_1))
                                    {
                                      t_28 = ATgetArgument(s_28, 0);
                                      {
                                        ATerm n_29 = NULL,o_29 = NULL,q_29 = NULL;
                                        if(((v_28 != NULL) && (v_28 != t_28)))
                                          _fail(t_28);
                                        else
                                          v_28 = t_28;
                                        {
                                          if(((n_29 != NULL) && (n_29 != h_29)))
                                            _fail(h_29);
                                          else
                                            n_29 = h_29;
                                          {
                                            ATerm i_10;
                                            i_10 = t;
                                            {
                                              ATerm p_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(z_28));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          p_29 = t;
                                                          if(((o_29 != NULL) && (o_29 != p_29)))
                                                            _fail(p_29);
                                                          else
                                                            o_29 = p_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = i_10;
                                            {
                                              ATerm r_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(n_29));
                                              {
                                                t = substitute_2(t, IsVar_0, _id);
                                                {
                                                  r_29 = t;
                                                  if(((q_29 != NULL) && (q_29 != r_29)))
                                                    _fail(r_29);
                                                  else
                                                    q_29 = r_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(q_29)));
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
                              if(match_cons(e_29, sym_Assign_1))
                                {
                                  f_29 = ATgetArgument(e_29, 0);
                                  o_28 :
                                  if(match_cons(f_29, sym_Var_1))
                                    {
                                      g_29 = ATgetArgument(f_29, 0);
                                      {
                                        ATerm w_29 = NULL,y_29 = NULL;
                                        ATerm j_10;
                                        j_10 = t;
                                        {
                                          ATerm x_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(z_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      x_29 = t;
                                                      if(((w_29 != NULL) && (w_29 != x_29)))
                                                        _fail(x_29);
                                                      else
                                                        w_29 = x_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = j_10;
                                        {
                                          ATerm z_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(h_29));
                                          {
                                            t = substitute_2(t, IsVar_0, _id);
                                            {
                                              z_29 = t;
                                              if(((y_29 != NULL) && (y_29 != z_29)))
                                                _fail(z_29);
                                              else
                                                y_29 = z_29;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(y_29)));
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
                  if(match_cons(c_29, sym_Assign_2))
                    {
                      u_28 = ATgetArgument(c_29, 0);
                      w_28 = ATgetArgument(c_29, 1);
                      p_28 :
                      if(match_cons(u_28, sym_Var_1))
                        {
                          v_28 = ATgetArgument(u_28, 0);
                          q_28 :
                          if(match_cons(w_28, sym_Var_1))
                            {
                              x_28 = ATgetArgument(w_28, 0);
                              {
                                ATerm e_30 = NULL,g_30 = NULL;
                                ATerm v_10;
                                v_10 = t;
                                {
                                  ATerm f_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), (ATerm) ATinsert(ATempty, not_null(v_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          f_30 = t;
                                          if(((e_30 != NULL) && (e_30 != f_30)))
                                            _fail(f_30);
                                          else
                                            e_30 = f_30;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = v_10;
                                {
                                  ATerm h_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(v_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_28))), not_null(d_29));
                                  {
                                    t = substitute_2(t, IsVar_0, _id);
                                    {
                                      h_30 = t;
                                      if(((g_30 != NULL) && (g_30 != h_30)))
                                        _fail(h_30);
                                      else
                                        g_30 = h_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_30), not_null(g_30));
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
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  r_31 = t;
  p_31 :
  if(match_cons(r_31, sym_Seq_2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      q_31 :
      if(match_cons(t_31, sym_Let_2))
        {
          u_31 = ATgetArgument(t_31, 0);
          v_31 = ATgetArgument(t_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_31), not_null(v_31)));
        }
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
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym_Cong_2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,w_33 = NULL,y_33 = NULL,a_34 = NULL;
        ATerm w_10;
        w_10 = t;
        {
          ATerm c_33 = NULL;
          t = not_null(t_32);
          {
            ATerm f_33 = NULL;
            t = map_1(t, new_0);
            {
              c_33 = t;
              {
                if(((z_32 != NULL) && (z_32 != c_33)))
                  _fail(c_33);
                else
                  z_32 = c_33;
                {
                  t = not_null(z_32);
                  {
                    ATerm g_33 = NULL;
                    ATerm i_1 (ATerm t)
                    {
                      ATerm d_33 = NULL;
                      ATerm e_33 = NULL;
                      e_33 = t;
                      if(((d_33 != NULL) && (d_33 != e_33)))
                        _fail(e_33);
                      else
                        d_33 = e_33;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_33));
                      return(t);
                    }
                    t = map_1(t, i_1);
                    {
                      f_33 = t;
                      {
                        if(((w_32 != NULL) && (w_32 != f_33)))
                          _fail(f_33);
                        else
                          w_32 = f_33;
                        {
                          ATerm h_33 = NULL;
                          t = new_0(t);
                          {
                            g_33 = t;
                            {
                              if(((x_32 != NULL) && (x_32 != g_33)))
                                _fail(g_33);
                              else
                                x_32 = g_33;
                              {
                                t = not_null(t_32);
                                {
                                  ATerm k_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    h_33 = t;
                                    {
                                      if(((a_33 != NULL) && (a_33 != h_33)))
                                        _fail(h_33);
                                      else
                                        a_33 = h_33;
                                      {
                                        t = not_null(a_33);
                                        {
                                          ATerm l_33 = NULL,v_33 = NULL;
                                          ATerm j_1 (ATerm t)
                                          {
                                            ATerm i_33 = NULL;
                                            ATerm j_33 = NULL;
                                            j_33 = t;
                                            if(((i_33 != NULL) && (i_33 != j_33)))
                                              _fail(j_33);
                                            else
                                              i_33 = j_33;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_33));
                                            return(t);
                                          }
                                          t = map_1(t, j_1);
                                          {
                                            k_33 = t;
                                            {
                                              if(((y_32 != NULL) && (y_32 != k_33)))
                                                _fail(k_33);
                                              else
                                                y_32 = k_33;
                                              {
                                                ATerm m_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), not_null(a_33));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    m_33 = t;
                                                    if(((l_33 != NULL) && (l_33 != m_33)))
                                                      _fail(m_33);
                                                    else
                                                      l_33 = m_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(t_32));
                                                  {
                                                    ATerm k_1 (ATerm t)
                                                    {
                                                      ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
                                                      n_33 = t;
                                                      k_32 :
                                                      if(match_cons(n_33, sym__2))
                                                        {
                                                          o_33 = ATgetArgument(n_33, 0);
                                                          r_33 = ATgetArgument(n_33, 1);
                                                          l_32 :
                                                          if(match_cons(o_33, sym__2))
                                                            {
                                                              p_33 = ATgetArgument(o_33, 0);
                                                              q_33 = ATgetArgument(o_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_33)))));
                                                            }
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
                                                    t = zip_1(t, k_1);
                                                    {
                                                      v_33 = t;
                                                      if(((b_33 != NULL) && (b_33 != v_33)))
                                                        _fail(v_33);
                                                      else
                                                        b_33 = v_33;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = w_10;
        {
          ATerm x_10;
          x_10 = t;
          {
            ATerm x_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), not_null(a_33));
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  t = conc_more_lists_0(t);
                }
              {
                x_33 = t;
                if(((w_33 != NULL) && (w_33 != x_33)))
                  _fail(x_33);
                else
                  w_33 = x_33;
              }
            }
          }
          t = x_10;
          {
            ATerm a_11;
            a_11 = t;
            {
              ATerm z_33 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_32), not_null(w_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_32))));
              {
                t = Mapp2_0(t);
                {
                  z_33 = t;
                  if(((y_33 != NULL) && (y_33 != z_33)))
                    _fail(z_33);
                  else
                    y_33 = z_33;
                }
              }
            }
            t = a_11;
            {
              ATerm b_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_32), not_null(y_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_32))));
              {
                t = Bapp2_0(t);
                {
                  b_34 = t;
                  if(((a_34 != NULL) && (a_34 != b_34)))
                    _fail(b_34);
                  else
                    a_34 = b_34;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_33)), not_null(x_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_33)), not_null(a_34))));
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
  ATerm g_35 = NULL,h_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_Build_1))
    {
      h_35 = ATgetArgument(g_35, 0);
      {
        ATerm d_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
            ATerm n_35 = NULL;
            ATerm r_35 = NULL;
            t = new_0(t);
            {
              n_35 = t;
              {
                if(((l_35 != NULL) && (l_35 != n_35)))
                  _fail(n_35);
                else
                  l_35 = n_35;
                {
                  t = not_null(h_35);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
                      o_35 = t;
                      v_34 :
                      if(match_cons(o_35, sym_Anno_2))
                        {
                          p_35 = ATgetArgument(o_35, 0);
                          q_35 = ATgetArgument(o_35, 1);
                          {
                            if(((j_35 != NULL) && (j_35 != p_35)))
                              _fail(p_35);
                            else
                              j_35 = p_35;
                            {
                              if(((k_35 != NULL) && (k_35 != q_35)))
                                _fail(q_35);
                              else
                                k_35 = q_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_35));
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
                      r_35 = t;
                      if(((m_35 != NULL) && (m_35 != r_35)))
                        _fail(r_35);
                      else
                        m_35 = r_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_s_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_35)), not_null(j_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_35))));
            LocalPopChoice(r_11);
          }
        else
          {
            t = d_11;
            {
              ATerm t_11 = t;
              int u_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
                  ATerm w_35 = NULL;
                  ATerm z_35 = NULL;
                  t = new_0(t);
                  {
                    w_35 = t;
                    {
                      if(((u_35 != NULL) && (u_35 != w_35)))
                        _fail(w_35);
                      else
                        u_35 = w_35;
                      {
                        t = not_null(h_35);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm x_35 = NULL,y_35 = NULL;
                            x_35 = t;
                            z_34 :
                            if(match_cons(x_35, sym_RootApp_1))
                              {
                                y_35 = ATgetArgument(x_35, 0);
                                {
                                  if(((t_35 != NULL) && (t_35 != y_35)))
                                    _fail(y_35);
                                  else
                                    t_35 = y_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_35));
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
                            z_35 = t;
                            if(((v_35 != NULL) && (v_35 != z_35)))
                              _fail(z_35);
                            else
                              v_35 = z_35;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_35))));
                  LocalPopChoice(u_11);
                }
              else
                {
                  t = t_11;
                  {
                    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
                    ATerm f_36 = NULL;
                    ATerm j_36 = NULL;
                    t = new_0(t);
                    {
                      f_36 = t;
                      {
                        if(((d_36 != NULL) && (d_36 != f_36)))
                          _fail(f_36);
                        else
                          d_36 = f_36;
                        {
                          t = not_null(h_35);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
                              g_36 = t;
                              d_35 :
                              if(match_cons(g_36, sym_App_2))
                                {
                                  h_36 = ATgetArgument(g_36, 0);
                                  i_36 = ATgetArgument(g_36, 1);
                                  {
                                    if(((b_36 != NULL) && (b_36 != h_36)))
                                      _fail(h_36);
                                    else
                                      b_36 = h_36;
                                    {
                                      if(((c_36 != NULL) && (c_36 != i_36)))
                                        _fail(i_36);
                                      else
                                        c_36 = i_36;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_36));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, n_1);
                            {
                              j_36 = t;
                              if(((e_36 != NULL) && (e_36 != j_36)))
                                _fail(j_36);
                              else
                                e_36 = j_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_36), not_null(c_36), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_36)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_36))));
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym__2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), not_null(z_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  i_37 = t;
  f_37 :
  if(match_cons(i_37, sym__2))
    {
      j_37 = ATgetArgument(i_37, 0);
      m_37 = ATgetArgument(i_37, 1);
      g_37 :
      if(((ATgetType(j_37) == AT_LIST) && !(ATisEmpty(j_37))))
        {
          k_37 = ATgetFirst((ATermList) j_37);
          l_37 = (ATerm) ATgetNext((ATermList) j_37);
          h_37 :
          if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
            {
              n_37 = ATgetFirst((ATermList) m_37);
              o_37 = (ATerm) ATgetNext((ATermList) m_37);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_37), not_null(n_37)), (ATerm) ATmakeAppl(sym__2, not_null(l_37), not_null(o_37)));
            }
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
  ATerm m_38 = NULL,s_38 = NULL,t_38 = NULL;
  m_38 = t;
  j_38 :
  if(match_cons(m_38, sym__2))
    {
      s_38 = ATgetArgument(m_38, 0);
      t_38 = ATgetArgument(m_38, 1);
      k_38 :
      if(((ATgetType(s_38) == AT_LIST) && ATisEmpty(s_38)))
        {
          l_38 :
          if(((ATgetType(t_38) == AT_LIST) && ATisEmpty(t_38)))
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
ATerm genzip_4 (ATerm t, ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm))
{
  ATerm v_38 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_101(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        {
          t = z_101(t);
          {
            t = _2(t, b_102, v_38);
            t = a_102(t);
          }
        }
      }
    return(t);
  }
  t = v_38(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_102 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_102);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  d_41 = t;
  r_40 :
  if(match_cons(d_41, sym_Call_2))
    {
      e_41 = ATgetArgument(d_41, 0);
      g_41 = ATgetArgument(d_41, 1);
      s_40 :
      if(match_cons(e_41, sym_SVar_1))
        {
          f_41 = ATgetArgument(e_41, 0);
          y_40 :
          if(match_string(f_41, "Anno_Cong__"))
            {
              z_40 :
              if(((ATgetType(g_41) == AT_LIST) && !(ATisEmpty(g_41))))
                {
                  h_41 = ATgetFirst((ATermList) g_41);
                  n_41 = (ATerm) ATgetNext((ATermList) g_41);
                  a_41 :
                  if(match_cons(h_41, sym_Cong_2))
                    {
                      i_41 = ATgetArgument(h_41, 0);
                      l_41 = ATgetArgument(h_41, 1);
                      b_41 :
                      if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
                        {
                          o_41 = ATgetFirst((ATermList) n_41);
                          p_41 = (ATerm) ATgetNext((ATermList) n_41);
                          c_41 :
                          if(((ATgetType(p_41) == AT_LIST) && ATisEmpty(p_41)))
                            {
                              {
                                ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,k_43 = NULL,m_43 = NULL,o_43 = NULL;
                                ATerm y_11;
                                y_11 = t;
                                {
                                  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(l_41)), not_null(o_41));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      n_42 = t;
                                      n_40 :
                                      if(((ATgetType(n_42) == AT_LIST) && !(ATisEmpty(n_42))))
                                        {
                                          o_42 = ATgetFirst((ATermList) n_42);
                                          p_42 = (ATerm) ATgetNext((ATermList) n_42);
                                          {
                                            ATerm s_42 = NULL;
                                            if(((g_42 != NULL) && (g_42 != o_42)))
                                              _fail(o_42);
                                            else
                                              g_42 = o_42;
                                            {
                                              if(((k_42 != NULL) && (k_42 != p_42)))
                                                _fail(p_42);
                                              else
                                                k_42 = p_42;
                                              {
                                                ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
                                                ATerm o_1 (ATerm t)
                                                {
                                                  ATerm q_42 = NULL;
                                                  ATerm r_42 = NULL;
                                                  r_42 = t;
                                                  if(((q_42 != NULL) && (q_42 != r_42)))
                                                    _fail(r_42);
                                                  else
                                                    q_42 = r_42;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_42));
                                                  return(t);
                                                }
                                                t = map_1(t, o_1);
                                                {
                                                  s_42 = t;
                                                  {
                                                    if(((h_42 != NULL) && (h_42 != s_42)))
                                                      _fail(s_42);
                                                    else
                                                      h_42 = s_42;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(l_41)), not_null(o_41));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          t_42 = t;
                                                          m_40 :
                                                          if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
                                                            {
                                                              u_42 = ATgetFirst((ATermList) t_42);
                                                              v_42 = (ATerm) ATgetNext((ATermList) t_42);
                                                              {
                                                                ATerm y_42 = NULL;
                                                                if(((i_42 != NULL) && (i_42 != u_42)))
                                                                  _fail(u_42);
                                                                else
                                                                  i_42 = u_42;
                                                                {
                                                                  if(((l_42 != NULL) && (l_42 != v_42)))
                                                                    _fail(v_42);
                                                                  else
                                                                    l_42 = v_42;
                                                                  {
                                                                    ATerm z_42 = NULL,j_43 = NULL;
                                                                    ATerm p_1 (ATerm t)
                                                                    {
                                                                      ATerm w_42 = NULL;
                                                                      ATerm x_42 = NULL;
                                                                      x_42 = t;
                                                                      if(((w_42 != NULL) && (w_42 != x_42)))
                                                                        _fail(x_42);
                                                                      else
                                                                        w_42 = x_42;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_42));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, p_1);
                                                                    {
                                                                      y_42 = t;
                                                                      {
                                                                        if(((j_42 != NULL) && (j_42 != y_42)))
                                                                          _fail(y_42);
                                                                        else
                                                                          j_42 = y_42;
                                                                        {
                                                                          ATerm a_43 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), not_null(l_42));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              a_43 = t;
                                                                              if(((z_42 != NULL) && (z_42 != a_43)))
                                                                                _fail(a_43);
                                                                              else
                                                                                z_42 = a_43;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_42), (ATerm) ATinsert(CheckATermList(not_null(l_41)), not_null(o_41)));
                                                                            {
                                                                              ATerm q_1 (ATerm t)
                                                                              {
                                                                                ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
                                                                                b_43 = t;
                                                                                j_40 :
                                                                                if(match_cons(b_43, sym__2))
                                                                                  {
                                                                                    c_43 = ATgetArgument(b_43, 0);
                                                                                    f_43 = ATgetArgument(b_43, 1);
                                                                                    k_40 :
                                                                                    if(match_cons(c_43, sym__2))
                                                                                      {
                                                                                        d_43 = ATgetArgument(c_43, 0);
                                                                                        e_43 = ATgetArgument(c_43, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_43))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_43)))));
                                                                                      }
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
                                                                              t = zip_1(t, q_1);
                                                                              {
                                                                                j_43 = t;
                                                                                if(((m_42 != NULL) && (m_42 != j_43)))
                                                                                  _fail(j_43);
                                                                                else
                                                                                  m_42 = j_43;
                                                                              }
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
                                t = y_11;
                                {
                                  ATerm c_12;
                                  c_12 = t;
                                  {
                                    ATerm l_43 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), not_null(l_42));
                                    {
                                      ATerm g_12 = t;
                                      int l_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(l_12);
                                        }
                                      else
                                        {
                                          t = g_12;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        l_43 = t;
                                        if(((k_43 != NULL) && (k_43 != l_43)))
                                          _fail(l_43);
                                        else
                                          k_43 = l_43;
                                      }
                                    }
                                  }
                                  t = c_12;
                                  {
                                    ATerm m_12;
                                    m_12 = t;
                                    {
                                      ATerm n_43 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_41), not_null(h_42)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_42))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          n_43 = t;
                                          if(((m_43 != NULL) && (m_43 != n_43)))
                                            _fail(n_43);
                                          else
                                            m_43 = n_43;
                                        }
                                      }
                                    }
                                    t = m_12;
                                    {
                                      ATerm p_43 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_41), not_null(j_42)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_42))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          p_43 = t;
                                          if(((o_43 != NULL) && (o_43 != p_43)))
                                            _fail(p_43);
                                          else
                                            o_43 = p_43;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(k_43)), not_null(i_42)), not_null(g_42)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_42)), not_null(o_43))));
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
ATerm As_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym_As_2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      {
        ATerm p_44 = NULL,r_44 = NULL;
        ATerm q_44 = NULL;
        t = SSLgetAnnotations(not_null(j_44));
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
        {
          t = not_null(k_44);
          {
            ATerm t_44 = NULL;
            t = h_88(t);
            {
              r_44 = t;
              {
                t = not_null(l_44);
                {
                  ATerm v_44 = NULL;
                  t = i_88(t);
                  {
                    t_44 = t;
                    {
                      ATerm w_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(r_44), not_null(t_44)), not_null(p_44));
                      {
                        w_44 = t;
                        if(((v_44 != NULL) && (v_44 != w_44)))
                          _fail(w_44);
                        else
                          v_44 = w_44;
                      }
                      t = not_null(v_44);
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
ATerm Prim_2 (ATerm t, ATerm e_84 (ATerm), ATerm f_84 (ATerm))
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  n_45 :
  if(match_cons(o_45, sym_Prim_2))
    {
      p_45 = ATgetArgument(o_45, 0);
      q_45 = ATgetArgument(o_45, 1);
      {
        ATerm u_45 = NULL,w_45 = NULL;
        ATerm v_45 = NULL;
        t = SSLgetAnnotations(not_null(o_45));
        {
          v_45 = t;
          if(((u_45 != NULL) && (u_45 != v_45)))
            _fail(v_45);
          else
            u_45 = v_45;
        }
        {
          t = not_null(p_45);
          {
            ATerm y_45 = NULL;
            t = e_84(t);
            {
              w_45 = t;
              {
                t = not_null(q_45);
                {
                  ATerm a_46 = NULL;
                  t = f_84(t);
                  {
                    y_45 = t;
                    {
                      ATerm b_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_45), not_null(y_45)), not_null(u_45));
                      {
                        b_46 = t;
                        if(((a_46 != NULL) && (a_46 != b_46)))
                          _fail(b_46);
                        else
                          a_46 = b_46;
                      }
                      t = not_null(a_46);
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
ATerm Explode_2 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm))
{
  ATerm n_46 = NULL,t_46 = NULL,u_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym_Explode_2))
    {
      t_46 = ATgetArgument(n_46, 0);
      u_46 = ATgetArgument(n_46, 1);
      {
        ATerm y_46 = NULL,a_47 = NULL;
        ATerm z_46 = NULL;
        t = SSLgetAnnotations(not_null(n_46));
        {
          z_46 = t;
          if(((y_46 != NULL) && (y_46 != z_46)))
            _fail(z_46);
          else
            y_46 = z_46;
        }
        {
          t = not_null(t_46);
          {
            ATerm c_47 = NULL;
            t = d_88(t);
            {
              a_47 = t;
              {
                t = not_null(u_46);
                {
                  ATerm e_47 = NULL;
                  t = e_88(t);
                  {
                    c_47 = t;
                    {
                      ATerm f_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(a_47), not_null(c_47)), not_null(y_46));
                      {
                        f_47 = t;
                        if(((e_47 != NULL) && (e_47 != f_47)))
                          _fail(f_47);
                        else
                          e_47 = f_47;
                      }
                      t = not_null(e_47);
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
ATerm Op_2 (ATerm t, ATerm i_86 (ATerm), ATerm j_86 (ATerm))
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
  u_47 = t;
  t_47 :
  if(match_cons(u_47, sym_Op_2))
    {
      v_47 = ATgetArgument(u_47, 0);
      w_47 = ATgetArgument(u_47, 1);
      {
        ATerm a_48 = NULL,k_48 = NULL;
        ATerm b_48 = NULL;
        t = SSLgetAnnotations(not_null(u_47));
        {
          b_48 = t;
          if(((a_48 != NULL) && (a_48 != b_48)))
            _fail(b_48);
          else
            a_48 = b_48;
        }
        {
          t = not_null(v_47);
          {
            ATerm p_48 = NULL;
            t = i_86(t);
            {
              k_48 = t;
              {
                t = not_null(w_47);
                {
                  ATerm r_48 = NULL;
                  t = j_86(t);
                  {
                    p_48 = t;
                    {
                      ATerm s_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(k_48), not_null(p_48)), not_null(a_48));
                      {
                        s_48 = t;
                        if(((r_48 != NULL) && (r_48 != s_48)))
                          _fail(s_48);
                        else
                          r_48 = s_48;
                      }
                      t = not_null(r_48);
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
ATerm pat_td_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_95(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm x_12 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = pat_td_1(t, n_95);
                return(t);
              }
              t = fetch_1(t, s_1);
              return(t);
            }
            t = Op_2(t, _id, r_1);
            LocalPopChoice(e_13);
          }
        else
          {
            t = x_12;
            {
              ATerm f_13 = t;
              int g_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = pat_td_1(t, n_95);
                    return(t);
                  }
                  t = Explode_2(t, _id, t_1);
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
                        ATerm u_1 (ATerm t)
                        {
                          t = pat_td_1(t, n_95);
                          return(t);
                        }
                        t = Explode_2(t, u_1, _id);
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
                              ATerm v_1 (ATerm t)
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_95);
                                  return(t);
                                }
                                t = fetch_1(t, w_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, v_1);
                              LocalPopChoice(k_13);
                            }
                          else
                            {
                              t = j_13;
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_95);
                                  return(t);
                                }
                                t = As_2(t, _id, x_1);
                              }
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
  ATerm w_49 = NULL,x_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym_Match_1))
    {
      x_49 = ATgetArgument(w_49, 0);
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
            ATerm d_50 = NULL;
            ATerm h_50 = NULL;
            t = new_0(t);
            {
              d_50 = t;
              {
                if(((b_50 != NULL) && (b_50 != d_50)))
                  _fail(d_50);
                else
                  b_50 = d_50;
                {
                  t = not_null(x_49);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
                      e_50 = t;
                      l_49 :
                      if(match_cons(e_50, sym_Anno_2))
                        {
                          f_50 = ATgetArgument(e_50, 0);
                          g_50 = ATgetArgument(e_50, 1);
                          {
                            if(((z_49 != NULL) && (z_49 != f_50)))
                              _fail(f_50);
                            else
                              z_49 = f_50;
                            {
                              if(((a_50 != NULL) && (a_50 != g_50)))
                                _fail(g_50);
                              else
                                a_50 = g_50;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_50)), not_null(z_49));
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
                      h_50 = t;
                      if(((c_50 != NULL) && (c_50 != h_50)))
                        _fail(h_50);
                      else
                        c_50 = h_50;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_50)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_50)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_50))))));
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            {
              ATerm a_14 = t;
              int b_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
                  ATerm m_50 = NULL;
                  ATerm p_50 = NULL;
                  t = new_0(t);
                  {
                    m_50 = t;
                    {
                      if(((k_50 != NULL) && (k_50 != m_50)))
                        _fail(m_50);
                      else
                        k_50 = m_50;
                      {
                        t = not_null(x_49);
                        {
                          ATerm z_1 (ATerm t)
                          {
                            ATerm n_50 = NULL,o_50 = NULL;
                            n_50 = t;
                            p_49 :
                            if(match_cons(n_50, sym_RootApp_1))
                              {
                                o_50 = ATgetArgument(n_50, 0);
                                {
                                  if(((j_50 != NULL) && (j_50 != o_50)))
                                    _fail(o_50);
                                  else
                                    j_50 = o_50;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_50));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, z_1);
                          {
                            p_50 = t;
                            if(((l_50 != NULL) && (l_50 != p_50)))
                              _fail(p_50);
                            else
                              l_50 = p_50;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_50))), not_null(j_50))));
                  LocalPopChoice(b_14);
                }
              else
                {
                  t = a_14;
                  {
                    ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
                    ATerm v_50 = NULL;
                    ATerm z_50 = NULL;
                    t = new_0(t);
                    {
                      v_50 = t;
                      {
                        if(((t_50 != NULL) && (t_50 != v_50)))
                          _fail(v_50);
                        else
                          t_50 = v_50;
                        {
                          t = not_null(x_49);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
                              w_50 = t;
                              t_49 :
                              if(match_cons(w_50, sym_App_2))
                                {
                                  x_50 = ATgetArgument(w_50, 0);
                                  y_50 = ATgetArgument(w_50, 1);
                                  {
                                    if(((s_50 != NULL) && (s_50 != x_50)))
                                      _fail(x_50);
                                    else
                                      s_50 = x_50;
                                    {
                                      if(((r_50 != NULL) && (r_50 != y_50)))
                                        _fail(y_50);
                                      else
                                        r_50 = y_50;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_50));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, a_2);
                            {
                              z_50 = t;
                              if(((u_50 != NULL) && (u_50 != z_50)))
                                _fail(z_50);
                              else
                                u_50 = z_50;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_50))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_50)), not_null(s_50)))));
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
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  r_51 :
  if(match_cons(s_51, sym_Cong_2))
    {
      t_51 = ATgetArgument(s_51, 0);
      u_51 = ATgetArgument(s_51, 1);
      {
        ATerm x_51 = NULL;
        ATerm b_52 = NULL;
        t = not_null(u_51);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm y_51 = NULL,z_51 = NULL;
            z_51 = t;
            p_51 :
            if(match_cons(z_51, sym_Match_1))
              {
                y_51 = ATgetArgument(z_51, 0);
                t = not_null(y_51);
              }
            else
              {
                if(match_cons(z_51, sym_Id_0))
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
          t = map_1(t, b_2);
          {
            b_52 = t;
            if(((x_51 != NULL) && (x_51 != b_52)))
              _fail(b_52);
            else
              x_51 = b_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(t_51), not_null(x_51)));
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
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  i_52 :
  if(match_cons(k_52, sym_Scope_2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      j_52 :
      if(((ATgetType(l_52) == AT_LIST) && ATisEmpty(l_52)))
        {
          t = not_null(m_52);
        }
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
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  v_52 :
  if(match_cons(i_53, sym_Where_1))
    {
      j_53 = ATgetArgument(i_53, 0);
      w_52 :
      if(match_cons(j_53, sym_Seq_2))
        {
          h_53 = ATgetArgument(j_53, 0);
          d_53 = ATgetArgument(j_53, 1);
          x_52 :
          if(match_cons(h_53, sym_Where_1))
            {
              c_53 = ATgetArgument(h_53, 0);
              y_52 :
              if(match_cons(d_53, sym_Seq_2))
                {
                  e_53 = ATgetArgument(d_53, 0);
                  g_53 = ATgetArgument(d_53, 1);
                  z_52 :
                  if(match_cons(e_53, sym_Build_1))
                    {
                      f_53 = ATgetArgument(e_53, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_53)), not_null(g_53))));
                    }
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
          if(match_cons(j_53, sym_Where_1))
            {
              h_53 = ATgetArgument(j_53, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(h_53));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(i_53, sym_Test_1))
        {
          j_53 = ATgetArgument(i_53, 0);
          a_53 :
          if(match_cons(j_53, sym_Test_1))
            {
              h_53 = ATgetArgument(j_53, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(h_53));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(i_53, sym_Not_1))
            {
              j_53 = ATgetArgument(i_53, 0);
              b_53 :
              if(match_cons(j_53, sym_Not_1))
                {
                  h_53 = ATgetArgument(j_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(h_53));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(i_53, sym_LChoice_2))
                {
                  j_53 = ATgetArgument(i_53, 0);
                  k_53 = ATgetArgument(i_53, 1);
                  {
                    if(((j_53 != NULL) && (j_53 != k_53)))
                      _fail(k_53);
                    else
                      j_53 = k_53;
                    t = not_null(j_53);
                  }
                }
              else
                {
                  if(match_cons(i_53, sym_Choice_2))
                    {
                      j_53 = ATgetArgument(i_53, 0);
                      k_53 = ATgetArgument(i_53, 1);
                      {
                        if(((j_53 != NULL) && (j_53 != k_53)))
                          _fail(k_53);
                        else
                          j_53 = k_53;
                        t = not_null(j_53);
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
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  g_54 = t;
  c_54 :
  if(match_cons(g_54, sym_LChoice_2))
    {
      h_54 = ATgetArgument(g_54, 0);
      k_54 = ATgetArgument(g_54, 1);
      d_54 :
      if(match_cons(h_54, sym_LChoice_2))
        {
          i_54 = ATgetArgument(h_54, 0);
          j_54 = ATgetArgument(h_54, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_54), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_54), not_null(k_54)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(g_54, sym_Seq_2))
        {
          h_54 = ATgetArgument(g_54, 0);
          k_54 = ATgetArgument(g_54, 1);
          e_54 :
          if(match_cons(h_54, sym_Seq_2))
            {
              i_54 = ATgetArgument(h_54, 0);
              j_54 = ATgetArgument(h_54, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_54), not_null(k_54)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(g_54, sym_Choice_2))
            {
              h_54 = ATgetArgument(g_54, 0);
              k_54 = ATgetArgument(g_54, 1);
              f_54 :
              if(match_cons(h_54, sym_Choice_2))
                {
                  i_54 = ATgetArgument(h_54, 0);
                  j_54 = ATgetArgument(h_54, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_54), (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_54), not_null(k_54)));
                }
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  r_55 = t;
  k_55 :
  if(match_cons(r_55, sym_Lets_2))
    {
      s_55 = ATgetArgument(r_55, 0);
      t_55 = ATgetArgument(r_55, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_55), not_null(t_55));
    }
  else
    {
      if(match_cons(r_55, sym_LChoices_1))
        {
          s_55 = ATgetArgument(r_55, 0);
          l_55 :
          if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
            {
              o_55 = ATgetFirst((ATermList) s_55);
              p_55 = (ATerm) ATgetNext((ATermList) s_55);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_55), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_55)));
            }
          else
            {
              if(((ATgetType(s_55) == AT_LIST) && ATisEmpty(s_55)))
                {
                  t = term_l_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(r_55, sym_Choices_1))
            {
              s_55 = ATgetArgument(r_55, 0);
              m_55 :
              if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
                {
                  o_55 = ATgetFirst((ATermList) s_55);
                  p_55 = (ATerm) ATgetNext((ATermList) s_55);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_55), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_55)));
                }
              else
                {
                  if(((ATgetType(s_55) == AT_LIST) && ATisEmpty(s_55)))
                    {
                      t = term_l_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(r_55, sym_Seqs_1))
                {
                  s_55 = ATgetArgument(r_55, 0);
                  n_55 :
                  if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
                    {
                      o_55 = ATgetFirst((ATermList) s_55);
                      p_55 = (ATerm) ATgetNext((ATermList) s_55);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_55), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_55)));
                    }
                  else
                    {
                      if(((ATgetType(s_55) == AT_LIST) && ATisEmpty(s_55)))
                        {
                          t = term_d_14;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(r_55, sym_DefaultVarDec_1))
                    {
                      s_55 = ATgetArgument(r_55, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_14), term_g_14));
                    }
                  else
                    {
                      if(match_cons(r_55, sym_InfixApp_3))
                        {
                          s_55 = ATgetArgument(r_55, 0);
                          t_55 = ATgetArgument(r_55, 1);
                          q_55 = ATgetArgument(r_55, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Op_2, term_r_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_55)), not_null(s_55))));
                        }
                      else
                        {
                          if(match_cons(r_55, sym_BAM_3))
                            {
                              s_55 = ATgetArgument(r_55, 0);
                              t_55 = ATgetArgument(r_55, 1);
                              q_55 = ATgetArgument(r_55, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(q_55))), not_null(s_55)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_55))));
                            }
                          else
                            {
                              if(match_cons(r_55, sym_AM_2))
                                {
                                  s_55 = ATgetArgument(r_55, 0);
                                  t_55 = ATgetArgument(r_55, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_55), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_55)));
                                }
                              else
                                {
                                  if(match_cons(r_55, sym_MA_2))
                                    {
                                      s_55 = ATgetArgument(r_55, 0);
                                      t_55 = ATgetArgument(r_55, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_55)), not_null(t_55));
                                    }
                                  else
                                    {
                                      if(match_cons(r_55, sym_BA_2))
                                        {
                                          s_55 = ATgetArgument(r_55, 0);
                                          t_55 = ATgetArgument(r_55, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_55)), not_null(s_55));
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
  return(t);
}
ATerm F15_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL;
  i_57 = t;
  g_57 :
  if(match_cons(i_57, sym_Where_1))
    {
      j_57 = ATgetArgument(i_57, 0);
      h_57 :
      if(match_cons(j_57, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  m_57 :
  if(match_cons(o_57, sym_LChoice_2))
    {
      p_57 = ATgetArgument(o_57, 0);
      q_57 = ATgetArgument(o_57, 1);
      n_57 :
      if(match_cons(q_57, sym_Fail_0))
        {
          t = not_null(p_57);
        }
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
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  w_57 = t;
  u_57 :
  if(match_cons(w_57, sym_LChoice_2))
    {
      x_57 = ATgetArgument(w_57, 0);
      y_57 = ATgetArgument(w_57, 1);
      v_57 :
      if(match_cons(x_57, sym_Fail_0))
        {
          t = not_null(y_57);
        }
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
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  e_58 = t;
  c_58 :
  if(match_cons(e_58, sym_Choice_2))
    {
      f_58 = ATgetArgument(e_58, 0);
      g_58 = ATgetArgument(e_58, 1);
      d_58 :
      if(match_cons(g_58, sym_Fail_0))
        {
          t = not_null(f_58);
        }
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
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
  m_58 = t;
  k_58 :
  if(match_cons(m_58, sym_Choice_2))
    {
      n_58 = ATgetArgument(m_58, 0);
      o_58 = ATgetArgument(m_58, 1);
      l_58 :
      if(match_cons(n_58, sym_Fail_0))
        {
          t = not_null(o_58);
        }
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
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_Cong_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        t = not_null(w_58);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm z_58 = NULL;
            z_58 = t;
            s_58 :
            if(!(match_cons(z_58, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, c_2);
        }
        t = term_l_7;
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
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
  e_59 = t;
  c_59 :
  if(match_cons(e_59, sym_Path_2))
    {
      f_59 = ATgetArgument(e_59, 0);
      g_59 = ATgetArgument(e_59, 1);
      d_59 :
      if(match_cons(g_59, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm m_59 = NULL,n_59 = NULL;
  m_59 = t;
  k_59 :
  if(match_cons(m_59, sym_One_1))
    {
      n_59 = ATgetArgument(m_59, 0);
      l_59 :
      if(match_cons(n_59, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm s_59 = NULL,t_59 = NULL;
  s_59 = t;
  q_59 :
  if(match_cons(s_59, sym_Some_1))
    {
      t_59 = ATgetArgument(s_59, 0);
      r_59 :
      if(match_cons(t_59, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
  y_59 = t;
  w_59 :
  if(match_cons(y_59, sym_Rec_2))
    {
      z_59 = ATgetArgument(y_59, 0);
      a_60 = ATgetArgument(y_59, 1);
      x_59 :
      if(match_cons(a_60, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL;
  g_60 = t;
  e_60 :
  if(match_cons(g_60, sym_Scope_2))
    {
      h_60 = ATgetArgument(g_60, 0);
      i_60 = ATgetArgument(g_60, 1);
      f_60 :
      if(match_cons(i_60, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm o_60 = NULL,q_60 = NULL,r_60 = NULL;
  o_60 = t;
  m_60 :
  if(match_cons(o_60, sym_Seq_2))
    {
      q_60 = ATgetArgument(o_60, 0);
      r_60 = ATgetArgument(o_60, 1);
      n_60 :
      if(match_cons(q_60, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm z_60 = NULL,a_61 = NULL;
  z_60 = t;
  x_60 :
  if(match_cons(z_60, sym_Not_1))
    {
      a_61 = ATgetArgument(z_60, 0);
      y_60 :
      if(match_cons(a_61, sym_Fail_0))
        {
          t = term_d_14;
        }
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
  ATerm f_61 = NULL,g_61 = NULL;
  f_61 = t;
  d_61 :
  if(match_cons(f_61, sym_Test_1))
    {
      g_61 = ATgetArgument(f_61, 0);
      e_61 :
      if(match_cons(g_61, sym_Fail_0))
        {
          t = term_l_7;
        }
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
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            {
              ATerm w_14 = t;
              int x_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(x_14);
                }
              else
                {
                  t = w_14;
                  {
                    ATerm y_14 = t;
                    int a_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(a_15);
                      }
                    else
                      {
                        t = y_14;
                        {
                          ATerm p_15 = t;
                          int q_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(q_15);
                            }
                          else
                            {
                              t = p_15;
                              {
                                ATerm w_15 = t;
                                int x_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(x_15);
                                  }
                                else
                                  {
                                    t = w_15;
                                    {
                                      ATerm z_15 = t;
                                      int a_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
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
                                                t = F9_0(t);
                                                LocalPopChoice(c_16);
                                              }
                                            else
                                              {
                                                t = b_16;
                                                {
                                                  ATerm r_16 = t;
                                                  int s_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(s_16);
                                                    }
                                                  else
                                                    {
                                                      t = r_16;
                                                      {
                                                        ATerm t_16 = t;
                                                        int u_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(u_16);
                                                          }
                                                        else
                                                          {
                                                            t = t_16;
                                                            {
                                                              ATerm v_16 = t;
                                                              int w_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(w_16);
                                                                }
                                                              else
                                                                {
                                                                  t = v_16;
                                                                  {
                                                                    ATerm x_16 = t;
                                                                    int y_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(y_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_16;
                                                                        {
                                                                          ATerm z_16 = t;
                                                                          int h_17 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(h_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_16;
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
  ATerm l_61 = NULL,m_61 = NULL;
  l_61 = t;
  j_61 :
  if(match_cons(l_61, sym_Match_1))
    {
      m_61 = ATgetArgument(l_61, 0);
      k_61 :
      if(match_cons(m_61, sym_Wld_0))
        {
          t = term_d_14;
        }
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
  ATerm r_61 = NULL,s_61 = NULL;
  r_61 = t;
  p_61 :
  if(match_cons(r_61, sym_Where_1))
    {
      s_61 = ATgetArgument(r_61, 0);
      q_61 :
      if(match_cons(s_61, sym_Id_0))
        {
          t = term_d_14;
        }
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
  ATerm z_61 = NULL,b_62 = NULL;
  z_61 = t;
  x_61 :
  if(match_cons(z_61, sym_All_1))
    {
      b_62 = ATgetArgument(z_61, 0);
      y_61 :
      if(match_cons(b_62, sym_Id_0))
        {
          t = term_d_14;
        }
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
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
  g_62 = t;
  e_62 :
  if(match_cons(g_62, sym_Rec_2))
    {
      h_62 = ATgetArgument(g_62, 0);
      i_62 = ATgetArgument(g_62, 1);
      f_62 :
      if(match_cons(i_62, sym_Id_0))
        {
          t = term_d_14;
        }
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
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
  o_62 = t;
  m_62 :
  if(match_cons(o_62, sym_Scope_2))
    {
      p_62 = ATgetArgument(o_62, 0);
      q_62 = ATgetArgument(o_62, 1);
      n_62 :
      if(match_cons(q_62, sym_Id_0))
        {
          t = term_d_14;
        }
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
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  w_62 = t;
  u_62 :
  if(match_cons(w_62, sym_LChoice_2))
    {
      x_62 = ATgetArgument(w_62, 0);
      y_62 = ATgetArgument(w_62, 1);
      v_62 :
      if(match_cons(x_62, sym_Id_0))
        {
          t = term_d_14;
        }
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
  ATerm e_63 = NULL,f_63 = NULL,i_63 = NULL;
  e_63 = t;
  c_63 :
  if(match_cons(e_63, sym_Seq_2))
    {
      f_63 = ATgetArgument(e_63, 0);
      i_63 = ATgetArgument(e_63, 1);
      d_63 :
      if(match_cons(i_63, sym_Id_0))
        {
          t = not_null(f_63);
        }
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
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
  u_63 = t;
  r_63 :
  if(match_cons(u_63, sym_Seq_2))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      t_63 :
      if(match_cons(v_63, sym_Id_0))
        {
          t = not_null(w_63);
        }
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
  ATerm c_64 = NULL,d_64 = NULL;
  c_64 = t;
  a_64 :
  if(match_cons(c_64, sym_Not_1))
    {
      d_64 = ATgetArgument(c_64, 0);
      b_64 :
      if(match_cons(d_64, sym_Id_0))
        {
          t = term_l_7;
        }
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
  ATerm i_64 = NULL,j_64 = NULL;
  i_64 = t;
  g_64 :
  if(match_cons(i_64, sym_Test_1))
    {
      j_64 = ATgetArgument(i_64, 0);
      h_64 :
      if(match_cons(j_64, sym_Id_0))
        {
          t = term_d_14;
        }
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
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            {
              ATerm q_17 = t;
              int s_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(s_17);
                }
              else
                {
                  t = q_17;
                  {
                    ATerm t_17 = t;
                    int u_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(u_17);
                      }
                    else
                      {
                        t = t_17;
                        {
                          ATerm g_18 = t;
                          int h_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(h_18);
                            }
                          else
                            {
                              t = g_18;
                              {
                                ATerm i_18 = t;
                                int j_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(j_18);
                                  }
                                else
                                  {
                                    t = i_18;
                                    {
                                      ATerm k_18 = t;
                                      int l_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(l_18);
                                        }
                                      else
                                        {
                                          t = k_18;
                                          {
                                            ATerm t_18 = t;
                                            int u_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(u_18);
                                              }
                                            else
                                              {
                                                t = t_18;
                                                {
                                                  ATerm v_18 = t;
                                                  int y_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(y_18);
                                                    }
                                                  else
                                                    {
                                                      t = v_18;
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
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            {
              ATerm g_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = g_19;
                  {
                    ATerm p_19 = t;
                    int q_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(q_19);
                      }
                    else
                      {
                        t = p_19;
                        {
                          ATerm r_19 = t;
                          int c_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(c_20);
                            }
                          else
                            {
                              t = r_19;
                              {
                                ATerm e_20 = t;
                                int f_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(f_20);
                                  }
                                else
                                  {
                                    t = e_20;
                                    {
                                      ATerm g_20 = t;
                                      int h_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(h_20);
                                        }
                                      else
                                        {
                                          t = g_20;
                                          {
                                            ATerm i_20 = t;
                                            int k_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(k_20);
                                              }
                                            else
                                              {
                                                t = i_20;
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
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm r_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = r_20;
            {
              ATerm u_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(v_20);
                }
              else
                {
                  t = u_20;
                  {
                    ATerm b_21 = t;
                    int d_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(d_21);
                      }
                    else
                      {
                        t = b_21;
                        {
                          ATerm e_21 = t;
                          int f_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(f_21);
                            }
                          else
                            {
                              t = e_21;
                              {
                                ATerm g_21 = t;
                                int h_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(h_21);
                                  }
                                else
                                  {
                                    t = g_21;
                                    {
                                      ATerm k_21 = t;
                                      int l_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(l_21);
                                        }
                                      else
                                        {
                                          t = k_21;
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
ATerm repeat_2 (ATerm t, ATerm g_113 (ATerm), ATerm h_113 (ATerm))
{
  ATerm l_64 (ATerm t)
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_113(t);
        t = l_64(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = h_113(t);
      }
    return(t);
  }
  t = l_64(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_113 (ATerm))
{
  t = repeat_2(t, j_113, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm i_97 (ATerm))
{
  ATerm m_64 (ATerm t)
  {
    t = i_97(t);
    {
      t = _all(t, m_64);
      t = i_97(t);
    }
    return(t);
  }
  t = m_64(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_2(t, e_2, _id);
    return(t);
  }
  t = downup_1(t, d_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm u_85 (ATerm))
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
  u_64 = t;
  t_64 :
  if(match_cons(u_64, sym_SDef_3))
    {
      v_64 = ATgetArgument(u_64, 0);
      w_64 = ATgetArgument(u_64, 1);
      x_64 = ATgetArgument(u_64, 2);
      {
        ATerm c_65 = NULL,e_65 = NULL;
        ATerm d_65 = NULL;
        t = SSLgetAnnotations(not_null(u_64));
        {
          d_65 = t;
          if(((c_65 != NULL) && (c_65 != d_65)))
            _fail(d_65);
          else
            c_65 = d_65;
        }
        {
          t = not_null(v_64);
          {
            ATerm g_65 = NULL;
            t = s_85(t);
            {
              e_65 = t;
              {
                t = not_null(w_64);
                {
                  ATerm i_65 = NULL;
                  t = t_85(t);
                  {
                    g_65 = t;
                    {
                      t = not_null(x_64);
                      {
                        ATerm k_65 = NULL;
                        t = u_85(t);
                        {
                          i_65 = t;
                          {
                            ATerm l_65 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(e_65), not_null(g_65), not_null(i_65)), not_null(c_65));
                            {
                              l_65 = t;
                              if(((k_65 != NULL) && (k_65 != l_65)))
                                _fail(l_65);
                              else
                                k_65 = l_65;
                            }
                            t = not_null(k_65);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm x_65 = NULL,y_65 = NULL;
  x_65 = t;
  w_65 :
  if(match_cons(x_65, sym_Strategies_1))
    {
      y_65 = ATgetArgument(x_65, 0);
      {
        ATerm b_66 = NULL,d_66 = NULL;
        ATerm c_66 = NULL;
        t = SSLgetAnnotations(not_null(x_65));
        {
          c_66 = t;
          if(((b_66 != NULL) && (b_66 != c_66)))
            _fail(c_66);
          else
            b_66 = c_66;
        }
        {
          t = not_null(y_65);
          {
            ATerm f_66 = NULL;
            t = w_86(t);
            {
              d_66 = t;
              {
                ATerm g_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(d_66)), not_null(b_66));
                {
                  g_66 = t;
                  if(((f_66 != NULL) && (f_66 != g_66)))
                    _fail(g_66);
                  else
                    f_66 = g_66;
                }
                t = not_null(f_66);
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
ATerm Specification_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm z_66 = NULL,a_67 = NULL;
  z_66 = t;
  y_66 :
  if(match_cons(z_66, sym_Specification_1))
    {
      a_67 = ATgetArgument(z_66, 0);
      {
        ATerm n_67 = NULL,p_67 = NULL;
        ATerm o_67 = NULL;
        t = SSLgetAnnotations(not_null(z_66));
        {
          o_67 = t;
          if(((n_67 != NULL) && (n_67 != o_67)))
            _fail(o_67);
          else
            n_67 = o_67;
        }
        {
          t = not_null(a_67);
          {
            ATerm r_67 = NULL;
            t = y_86(t);
            {
              p_67 = t;
              {
                ATerm s_67 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(p_67)), not_null(n_67));
                {
                  s_67 = t;
                  if(((r_67 != NULL) && (r_67 != s_67)))
                    _fail(s_67);
                  else
                    r_67 = s_67;
                }
                t = not_null(r_67);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm k_95 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm h_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          ATerm j_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, k_95);
            return(t);
          }
          t = map_1(t, j_2);
          return(t);
        }
        t = Strategies_1(t, i_2);
        return(t);
      }
      t = Cons_2(t, h_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, g_2);
    return(t);
  }
  t = Specification_1(t, f_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm t_82 (ATerm), ATerm u_82 (ATerm))
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
  h_68 = t;
  g_68 :
  if(match_cons(h_68, sym__2))
    {
      i_68 = ATgetArgument(h_68, 0);
      j_68 = ATgetArgument(h_68, 1);
      {
        ATerm n_68 = NULL,p_68 = NULL;
        ATerm o_68 = NULL;
        t = SSLgetAnnotations(not_null(h_68));
        {
          o_68 = t;
          if(((n_68 != NULL) && (n_68 != o_68)))
            _fail(o_68);
          else
            n_68 = o_68;
        }
        {
          t = not_null(i_68);
          {
            ATerm s_68 = NULL;
            t = t_82(t);
            {
              p_68 = t;
              {
                t = not_null(j_68);
                {
                  ATerm u_68 = NULL;
                  t = u_82(t);
                  {
                    s_68 = t;
                    {
                      ATerm v_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_68), not_null(s_68)), not_null(n_68));
                      {
                        v_68 = t;
                        if(((u_68 != NULL) && (u_68 != v_68)))
                          _fail(v_68);
                        else
                          u_68 = v_68;
                      }
                      t = not_null(u_68);
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
  ATerm d_69 = NULL;
  ATerm u_21;
  u_21 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm e_69 = NULL,f_69 = NULL;
      e_69 = t;
      c_69 :
      if(match_cons(e_69, sym_Program_1))
        {
          f_69 = ATgetArgument(e_69, 0);
          if(((d_69 != NULL) && (d_69 != f_69)))
            _fail(f_69);
          else
            d_69 = f_69;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, k_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_22), not_null(d_69)), term_a_22));
      {
        t = printnl_0(t);
        {
          t = term_c_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym__2))
    {
      k_69 = ATgetArgument(j_69, 0);
      l_69 = ATgetArgument(j_69, 1);
      {
        ATerm d_22;
        d_22 = t;
        t = SSL_printnl(not_null(k_69), not_null(l_69));
        t = d_22;
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
  ATerm q_69 = NULL;
  q_69 = t;
  t = SSL_implode_string(not_null(q_69));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
        y_69 = t;
        x_69 :
        if(((ATgetType(y_69) == AT_LIST) && !(ATisEmpty(y_69))))
          {
            z_69 = ATgetFirst((ATermList) y_69);
            a_70 = (ATerm) ATgetNext((ATermList) y_69);
            {
              t = not_null(z_69);
              {
                ATerm l_2 (ATerm t)
                {
                  t = not_null(a_70);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_2);
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
  ATerm k_70 = NULL;
  ATerm m_70 = NULL;
  k_70 = t;
  {
    ATerm n_70 = NULL;
    ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
    t = not_null(k_70);
    {
      n_70 = t;
      {
        t = SSL_explode_term(not_null(n_70));
        {
          p_70 = t;
          i_70 :
          if(match_cons(p_70, sym__2))
            {
              q_70 = ATgetArgument(p_70, 0);
              r_70 = ATgetArgument(p_70, 1);
              j_70 :
              if(match_string(q_70, ""))
                {
                  if(((m_70 != NULL) && (m_70 != r_70)))
                    _fail(r_70);
                  else
                    m_70 = r_70;
                }
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
      t = not_null(m_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_104 (ATerm))
{
  ATerm v_70 (ATerm t)
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_70);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          t = Nil_0(t);
          t = b_104(t);
        }
      }
    return(t);
  }
  t = v_70(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  x_70 :
  if(match_cons(y_70, sym__2))
    {
      z_70 = ATgetArgument(y_70, 0);
      a_71 = ATgetArgument(y_70, 1);
      {
        t = not_null(z_70);
        {
          ATerm m_2 (ATerm t)
          {
            t = not_null(a_71);
            return(t);
          }
          t = at_end_1(t, m_2);
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
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_71 = NULL;
  m_71 = t;
  t = SSL_explode_string(not_null(m_71));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_117 (ATerm))
{
  ATerm v_22;
  v_22 = t;
  {
    ATerm r_71 = NULL,t_71 = NULL;
    ATerm x_22;
    x_22 = t;
    {
      ATerm s_71 = NULL;
      t = s_117(t);
      {
        s_71 = t;
        if(((r_71 != NULL) && (r_71 != s_71)))
          _fail(s_71);
        else
          r_71 = s_71;
      }
    }
    t = x_22;
    {
      ATerm u_71 = NULL;
      u_71 = t;
      if(((t_71 != NULL) && (t_71 != u_71)))
        _fail(u_71);
      else
        t_71 = u_71;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_71)), not_null(r_71)));
        t = printnl_0(t);
      }
    }
  }
  t = v_22;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_71 = NULL;
  y_71 = t;
  t = SSL_is_string(not_null(y_71));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm j_23 = t;
              int k_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(k_23);
                }
              else
                {
                  t = j_23;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, n_2);
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm h_72 = NULL,s_72 = NULL,t_72 = NULL;
              h_72 = t;
              g_72 :
              if(match_cons(h_72, sym_Path_1))
                {
                  s_72 = ATgetArgument(h_72, 0);
                  t = not_null(s_72);
                }
              else
                {
                  if(match_cons(h_72, sym_Var_1))
                    {
                      s_72 = ATgetArgument(h_72, 0);
                      {
                        t = not_null(s_72);
                        {
                          ATerm l_23 = t;
                          int n_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_23);
                            }
                          else
                            {
                              t = l_23;
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  t = term_o_23;
                                  return(t);
                                }
                                t = debug_1(t, o_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_72, sym_Prefix_2))
                        {
                          s_72 = ATgetArgument(h_72, 0);
                          t_72 = ATgetArgument(h_72, 1);
                          {
                            ATerm c_74 = NULL,e_74 = NULL;
                            ATerm q_23;
                            q_23 = t;
                            {
                              ATerm d_74 = NULL;
                              t = not_null(s_72);
                              {
                                t = eval_config_0(t);
                                {
                                  d_74 = t;
                                  if(((c_74 != NULL) && (c_74 != d_74)))
                                    _fail(d_74);
                                  else
                                    c_74 = d_74;
                                }
                              }
                            }
                            t = q_23;
                            {
                              ATerm f_74 = NULL;
                              t = not_null(t_72);
                              {
                                t = eval_config_0(t);
                                {
                                  f_74 = t;
                                  if(((e_74 != NULL) && (e_74 != f_74)))
                                    _fail(f_74);
                                  else
                                    e_74 = f_74;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_74), not_null(e_74));
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
  ATerm o_75 = NULL;
  o_75 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_23, not_null(o_75));
    {
      t = table_get_0(t);
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm e_24;
              e_24 = t;
              {
                ATerm q_75 = NULL;
                ATerm r_75 = NULL;
                r_75 = t;
                if(((q_75 != NULL) && (q_75 != r_75)))
                  _fail(r_75);
                else
                  q_75 = r_75;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_y_23, not_null(o_75), not_null(q_75));
                  t = table_put_0(t);
                }
              }
              t = e_24;
            }
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_120 (ATerm))
{
  ATerm k_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24;
      r_24 = t;
      {
        ATerm v_75 = NULL;
        ATerm w_75 = NULL;
        t = term_s_24;
        {
          t = get_config_0(t);
          {
            w_75 = t;
            if(((v_75 != NULL) && (v_75 != w_75)))
              _fail(w_75);
            else
              v_75 = w_75;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_75), term_t_24);
          t = geq_0(t);
        }
      }
      t = r_24;
      t = p_120(t);
      LocalPopChoice(q_24);
    }
  else
    {
      t = k_24;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  a_76 = t;
  z_75 :
  if(match_cons(a_76, sym__2))
    {
      b_76 = ATgetArgument(a_76, 0);
      c_76 = ATgetArgument(a_76, 1);
      t = SSL_WriteToTextFile(not_null(b_76), not_null(c_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,u_76 = NULL;
  i_76 = t;
  h_76 :
  if(match_cons(i_76, sym__2))
    {
      j_76 = ATgetArgument(i_76, 0);
      u_76 = ATgetArgument(i_76, 1);
      t = SSL_WriteToBinaryFile(not_null(j_76), not_null(u_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_77 = NULL;
  ATerm u_24;
  u_24 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm g_77 = NULL,h_77 = NULL;
            g_77 = t;
            c_77 :
            if(match_cons(g_77, sym_Output_1))
              {
                h_77 = ATgetArgument(g_77, 0);
                if(((f_77 != NULL) && (f_77 != h_77)))
                  _fail(h_77);
                else
                  f_77 = h_77;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, q_2);
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          {
            ATerm i_77 = NULL;
            t = term_e_25;
            {
              i_77 = t;
              if(((f_77 != NULL) && (f_77 != i_77)))
                _fail(i_77);
              else
                f_77 = i_77;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = u_24;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(f_77);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm g_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm j_77 = NULL;
              j_77 = t;
              e_77 :
              if(!(match_cons(j_77, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          LocalPopChoice(i_25);
        }
      else
        {
          t = g_25;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_118 (ATerm))
{
  ATerm q_77 = NULL,d_78 = NULL,m_80 = NULL,n_80 = NULL;
  ATerm k_25;
  k_25 = t;
  t = dtime_0(t);
  t = k_25;
  {
    t = w_118(t);
    {
      ATerm l_25;
      l_25 = t;
      {
        ATerm c_78 = NULL;
        t = dtime_0(t);
        {
          c_78 = t;
          if(((q_77 != NULL) && (q_77 != c_78)))
            _fail(c_78);
          else
            q_77 = c_78;
        }
      }
      t = l_25;
      {
        d_78 = t;
        o_77 :
        if(match_cons(d_78, sym__2))
          {
            m_80 = ATgetArgument(d_78, 0);
            n_80 = ATgetArgument(d_78, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_77))), not_null(n_80));
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
ATerm split_2 (ATerm t, ATerm y_100 (ATerm), ATerm z_100 (ATerm))
{
  ATerm y_80 = NULL,a_81 = NULL;
  ATerm n_25;
  n_25 = t;
  {
    ATerm z_80 = NULL;
    t = y_100(t);
    {
      z_80 = t;
      if(((y_80 != NULL) && (y_80 != z_80)))
        _fail(z_80);
      else
        y_80 = z_80;
    }
  }
  t = n_25;
  {
    ATerm b_81 = NULL;
    t = z_100(t);
    {
      b_81 = t;
      if(((a_81 != NULL) && (a_81 != b_81)))
        _fail(b_81);
      else
        a_81 = b_81;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_80), not_null(a_81));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_81 = NULL;
  ATerm o_25;
  o_25 = t;
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 (ATerm t)
        {
          ATerm i_81 = NULL,j_81 = NULL;
          i_81 = t;
          f_81 :
          if(match_cons(i_81, sym_Input_1))
            {
              j_81 = ATgetArgument(i_81, 0);
              if(((h_81 != NULL) && (h_81 != j_81)))
                _fail(j_81);
              else
                h_81 = j_81;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, v_2);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          ATerm k_81 = NULL;
          t = term_w_25;
          {
            k_81 = t;
            if(((h_81 != NULL) && (h_81 != k_81)))
              _fail(k_81);
            else
              h_81 = k_81;
          }
        }
      }
  }
  t = o_25;
  {
    ATerm w_2 (ATerm t)
    {
      t = not_null(h_81);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm o_81 = NULL;
    o_81 = t;
    n_81 :
    if(!(match_string(o_81, "-v")))
      {
        if(!(match_string(o_81, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_z_25;
    t = set_config_0(t);
    t = term_a_26;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_b_26;
    return(t);
  }
  t = Option_3(t, x_2, y_2, z_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm r_81 = NULL;
    r_81 = t;
    p_81 :
    if(!(match_string(r_81, "-k")))
      {
        if(!(match_string(r_81, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm c_26;
    c_26 = t;
    {
      ATerm s_81 = NULL;
      ATerm t_81 = NULL;
      t = string_to_int_0(t);
      {
        t_81 = t;
        if(((s_81 != NULL) && (s_81 != t_81)))
          _fail(t_81);
        else
          s_81 = t_81;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(s_81));
        t = set_config_0(t);
      }
    }
    t = c_26;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  t = ArgOption_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_81 = NULL;
  w_81 = t;
  t = SSL_string_to_int(not_null(w_81));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm e_82 = NULL;
        e_82 = t;
        z_81 :
        if(!(match_string(e_82, "-S")))
          {
            if(!(match_string(e_82, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_o_26;
        t = set_config_0(t);
        t = term_r_26;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_s_26;
        return(t);
      }
      t = Option_3(t, d_3, e_3, f_3);
      LocalPopChoice(j_26);
    }
  else
    {
      t = f_26;
      {
        ATerm w_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              ATerm f_82 = NULL;
              f_82 = t;
              a_82 :
              if(!(match_string(f_82, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              ATerm i_82 = NULL;
              ATerm a_27;
              a_27 = t;
              {
                ATerm g_82 = NULL;
                ATerm h_82 = NULL;
                t = string_to_int_0(t);
                {
                  h_82 = t;
                  if(((g_82 != NULL) && (g_82 != h_82)))
                    _fail(h_82);
                  else
                    g_82 = h_82;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_24, not_null(g_82));
                  t = set_config_0(t);
                }
              }
              t = a_27;
              {
                ATerm j_82 = NULL;
                j_82 = t;
                if(((i_82 != NULL) && (i_82 != j_82)))
                  _fail(j_82);
                else
                  i_82 = j_82;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_82));
              }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_b_27;
              return(t);
            }
            t = ArgOption_3(t, g_3, h_3, i_3);
            LocalPopChoice(z_26);
          }
        else
          {
            t = w_26;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm k_82 = NULL;
                k_82 = t;
                d_82 :
                if(!(match_string(k_82, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_d_27;
                t = set_config_0(t);
                t = term_e_27;
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_f_27;
                return(t);
              }
              t = Option_3(t, k_3, l_3, m_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm q_82 = NULL;
    q_82 = t;
    n_82 :
    if(!(match_string(q_82, "-o")))
      {
        if(!(match_string(q_82, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm v_82 = NULL;
    ATerm k_27;
    k_27 = t;
    {
      ATerm r_82 = NULL;
      ATerm s_82 = NULL;
      s_82 = t;
      if(((r_82 != NULL) && (r_82 != s_82)))
        _fail(s_82);
      else
        r_82 = s_82;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_27, not_null(r_82));
        t = set_config_0(t);
      }
    }
    t = k_27;
    {
      ATerm w_82 = NULL;
      w_82 = t;
      if(((v_82 != NULL) && (v_82 != w_82)))
        _fail(w_82);
      else
        v_82 = w_82;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_82));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_m_27;
    return(t);
  }
  t = ArgOption_3(t, n_3, o_3, p_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm a_83 = NULL;
          a_83 = t;
          z_82 :
          if(!(match_string(a_83, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_q_27;
          t = set_config_0(t);
          t = term_r_27;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_s_27;
          return(t);
        }
        t = Option_3(t, q_3, r_3, s_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL;
  g_83 = t;
  e_83 :
  if(match_string(g_83, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(g_83) == AT_LIST) && !(ATisEmpty(g_83))))
        {
          h_83 = ATgetFirst((ATermList) g_83);
          i_83 = (ATerm) ATgetNext((ATermList) g_83);
          f_83 :
          if(((ATgetType(i_83) == AT_LIST) && !(ATisEmpty(i_83))))
            {
              j_83 = ATgetFirst((ATermList) i_83);
              k_83 = (ATerm) ATgetNext((ATermList) i_83);
              {
                ATerm o_83 = NULL;
                ATerm t_27;
                t_27 = t;
                {
                  t = not_null(h_83);
                  t = l_0(t);
                }
                t = t_27;
                {
                  ATerm p_83 = NULL;
                  t = not_null(j_83);
                  {
                    t = n_0(t);
                    {
                      p_83 = t;
                      if(((o_83 != NULL) && (o_83 != p_83)))
                        _fail(p_83);
                      else
                        o_83 = p_83;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_83)), not_null(o_83));
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
ATerm input_option_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm w_83 = NULL;
    w_83 = t;
    t_83 :
    if(!(match_string(w_83, "-i")))
      {
        if(!(match_string(w_83, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm z_83 = NULL;
    ATerm u_27;
    u_27 = t;
    {
      ATerm x_83 = NULL;
      ATerm y_83 = NULL;
      y_83 = t;
      if(((x_83 != NULL) && (x_83 != y_83)))
        _fail(y_83);
      else
        x_83 = y_83;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_27, not_null(x_83));
        t = set_config_0(t);
      }
    }
    t = u_27;
    {
      ATerm a_84 = NULL;
      a_84 = t;
      if(((z_83 != NULL) && (z_83 != a_84)))
        _fail(a_84);
      else
        z_83 = a_84;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_83));
    }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_w_27;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, v_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = i_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATempty, term_s_29));
  {
    t = printnl_0(t);
    {
      t = term_c_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  t = SSL_TicksToSeconds(not_null(i_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL;
  p_84 = t;
  o_84 :
  if(match_cons(p_84, sym__2))
    {
      q_84 = ATgetArgument(p_84, 0);
      r_84 = ATgetArgument(p_84, 1);
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_84), not_null(r_84));
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            t = SSL_addr(not_null(q_84), not_null(r_84));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_108 (ATerm), ATerm b_108 (ATerm))
{
  ATerm v_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_108(t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = v_29;
      {
        ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL;
        y_84 = t;
        x_84 :
        if(((ATgetType(y_84) == AT_LIST) && !(ATisEmpty(y_84))))
          {
            z_84 = ATgetFirst((ATermList) y_84);
            a_85 = (ATerm) ATgetNext((ATermList) y_84);
            {
              ATerm d_85 = NULL;
              ATerm e_85 = NULL;
              t = not_null(a_85);
              {
                t = foldr_2(t, a_108, b_108);
                {
                  e_85 = t;
                  if(((d_85 != NULL) && (d_85 != e_85)))
                    _fail(e_85);
                  else
                    d_85 = e_85;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_84), not_null(d_85));
                t = b_108(t);
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
ATerm crush_2 (ATerm t, ATerm y_106 (ATerm), ATerm z_106 (ATerm))
{
  ATerm l_85 = NULL;
  ATerm n_85 = NULL;
  l_85 = t;
  {
    ATerm o_85 = NULL;
    ATerm q_85 = NULL,r_85 = NULL,v_85 = NULL;
    t = not_null(l_85);
    {
      o_85 = t;
      {
        t = SSL_explode_term(not_null(o_85));
        {
          q_85 = t;
          k_85 :
          if(match_cons(q_85, sym__2))
            {
              r_85 = ATgetArgument(q_85, 0);
              v_85 = ATgetArgument(q_85, 1);
              if(((n_85 != NULL) && (n_85 != v_85)))
                _fail(v_85);
              else
                n_85 = v_85;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_85);
      t = foldr_2(t, y_106, z_106);
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
      t = term_k_26;
      return(t);
    }
    t = crush_2(t, w_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
  b_86 = t;
  a_86 :
  if(match_cons(b_86, sym__2))
    {
      c_86 = ATgetArgument(b_86, 0);
      d_86 = ATgetArgument(b_86, 1);
      {
        ATerm b_30;
        b_30 = t;
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_86), not_null(d_86));
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
              t = SSL_gtr(not_null(c_86), not_null(d_86));
            }
        }
        t = b_30;
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
  ATerm l_86 = NULL;
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
      m_86 = t;
      k_86 :
      if(match_cons(m_86, sym__2))
        {
          n_86 = ATgetArgument(m_86, 0);
          o_86 = ATgetArgument(m_86, 1);
          {
            if(((l_86 != NULL) && (l_86 != n_86)))
              _fail(n_86);
            else
              l_86 = n_86;
            if(((l_86 != NULL) && (l_86 != o_86)))
              _fail(o_86);
            else
              l_86 = o_86;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_120 (ATerm))
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30;
      q_30 = t;
      {
        ATerm r_86 = NULL;
        ATerm s_86 = NULL;
        t = term_s_24;
        {
          t = get_config_0(t);
          {
            s_86 = t;
            if(((r_86 != NULL) && (r_86 != s_86)))
              _fail(s_86);
            else
              r_86 = s_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_86), term_c_22);
          t = geq_0(t);
        }
      }
      t = q_30;
      t = o_120(t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm x_86 = NULL,a_87 = NULL;
    ATerm r_30;
    r_30 = t;
    {
      ATerm z_86 = NULL;
      t = run_time_0(t);
      {
        z_86 = t;
        if(((x_86 != NULL) && (x_86 != z_86)))
          _fail(z_86);
        else
          x_86 = z_86;
      }
    }
    t = r_30;
    {
      ATerm b_87 = NULL;
      t = term_s_30;
      {
        t = get_config_0(t);
        {
          b_87 = t;
          if(((a_87 != NULL) && (a_87 != b_87)))
            _fail(b_87);
          else
            a_87 = b_87;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_30), not_null(x_86)), term_t_30), not_null(a_87)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_4);
  {
    t = term_k_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym_Version_0))
    {
      ATerm k_87 = NULL,m_87 = NULL;
      ATerm z_30;
      z_30 = t;
      {
        ATerm l_87 = NULL;
        t = SSLgetAnnotations(not_null(i_87));
        {
          l_87 = t;
          if(((k_87 != NULL) && (k_87 != l_87)))
            _fail(l_87);
          else
            k_87 = l_87;
        }
      }
      t = z_30;
      {
        ATerm n_87 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_87));
        {
          n_87 = t;
          if(((m_87 != NULL) && (m_87 != n_87)))
            _fail(n_87);
          else
            m_87 = n_87;
        }
        t = not_null(m_87);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_118 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_4);
  t = u_118(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_87 = NULL;
  t_87 = t;
  t = SSL_table_create(not_null(t_87));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_87 = NULL;
  x_87 = t;
  {
    ATerm e_31;
    e_31 = t;
    {
      t = term_f_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_31, term_g_31, not_null(x_87));
          t = table_put_0(t);
        }
      }
    }
    t = e_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_88 = NULL;
  b_88 = t;
  t = SSL_table_destroy(not_null(b_88));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_88 = NULL;
  j_88 = t;
  t = SSL_exit(not_null(j_88));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  n_88 = t;
  m_88 :
  if(((ATgetType(n_88) == AT_LIST) && ATisEmpty(n_88)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_88) == AT_LIST) && !(ATisEmpty(n_88))))
        {
          o_88 = ATgetFirst((ATermList) n_88);
          p_88 = (ATerm) ATgetNext((ATermList) n_88);
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
  ATerm h_31;
  h_31 = t;
  {
    ATerm s_88 = NULL;
    ATerm v_88 = NULL;
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        {
          ATerm t_88 = NULL;
          ATerm u_88 = NULL;
          u_88 = t;
          if(((t_88 != NULL) && (t_88 != u_88)))
            _fail(u_88);
          else
            t_88 = u_88;
          t = (ATerm) ATinsert(ATempty, not_null(t_88));
        }
      }
    {
      v_88 = t;
      if(((s_88 != NULL) && (s_88 != v_88)))
        _fail(v_88);
      else
        s_88 = v_88;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_25, not_null(s_88));
      t = printnl_0(t);
    }
  }
  t = h_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_122 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_103 (ATerm))
{
  ATerm y_88 (ATerm t)
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = Cons_2(t, m_103, y_88);
      }
    return(t);
  }
  t = y_88(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  h_89 = t;
  e_89 :
  if(((ATgetType(h_89) == AT_LIST) && !(ATisEmpty(h_89))))
    {
      f_89 = ATgetFirst((ATermList) h_89);
      g_89 = (ATerm) ATgetNext((ATermList) h_89);
      {
        ATerm k_89 = NULL;
        t = not_null(g_89);
        {
          ATerm m_31;
          m_31 = t;
          {
            ATerm l_89 = NULL,n_89 = NULL,p_89 = NULL;
            ATerm n_31;
            n_31 = t;
            {
              ATerm m_89 = NULL;
              t = k_0(t);
              {
                m_89 = t;
                if(((l_89 != NULL) && (l_89 != m_89)))
                  _fail(m_89);
                else
                  l_89 = m_89;
              }
            }
            t = n_31;
            {
              ATerm o_89 = NULL;
              t = not_null(f_89);
              {
                t = i_0(t);
                {
                  o_89 = t;
                  if(((n_89 != NULL) && (n_89 != o_89)))
                    _fail(o_89);
                  else
                    n_89 = o_89;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_89)), not_null(n_89));
                {
                  p_89 = t;
                  if(((k_89 != NULL) && (k_89 != p_89)))
                    _fail(p_89);
                  else
                    k_89 = p_89;
                }
              }
            }
          }
          t = m_31;
          {
            ATerm c_4 (ATerm t)
            {
              t = not_null(k_89);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_89) == AT_LIST) && ATisEmpty(h_89)))
        {
          {
            t = term_y_25;
            t = k_0(t);
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
  ATerm d_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_122 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_94 (ATerm))
{
  ATerm a_90 = NULL,b_90 = NULL;
  a_90 = t;
  z_89 :
  if(match_cons(a_90, sym_Program_1))
    {
      b_90 = ATgetArgument(a_90, 0);
      {
        ATerm e_90 = NULL,g_90 = NULL;
        ATerm f_90 = NULL;
        t = SSLgetAnnotations(not_null(a_90));
        {
          f_90 = t;
          if(((e_90 != NULL) && (e_90 != f_90)))
            _fail(f_90);
          else
            e_90 = f_90;
        }
        {
          t = not_null(b_90);
          {
            ATerm i_90 = NULL;
            t = z_94(t);
            {
              g_90 = t;
              {
                ATerm j_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_90)), not_null(e_90));
                {
                  j_90 = t;
                  if(((i_90 != NULL) && (i_90 != j_90)))
                    _fail(j_90);
                  else
                    i_90 = j_90;
                }
                t = not_null(i_90);
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
  ATerm r_90 = NULL;
  ATerm o_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_90 = NULL;
      t = term_s_30;
      {
        t = get_config_0(t);
        {
          s_90 = t;
          if(((r_90 != NULL) && (r_90 != s_90)))
            _fail(s_90);
          else
            r_90 = s_90;
        }
      }
      LocalPopChoice(w_31);
    }
  else
    {
      t = o_31;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm t_90 = NULL;
            t_90 = t;
            if(((r_90 != NULL) && (r_90 != t_90)))
              _fail(t_90);
            else
              r_90 = t_90;
            return(t);
          }
          t = Program_1(t, f_4);
          return(t);
        }
        t = fetch_1(t, e_4);
      }
    }
  {
    t = term_x_31;
    {
      t = echo_0(t);
      {
        t = term_a_32;
        {
          t = table_get_0(t);
          {
            ATerm g_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, g_4);
            {
              ATerm h_4 (ATerm t)
              {
                ATerm u_90 = NULL;
                ATerm v_90 = NULL;
                v_90 = t;
                if(((u_90 != NULL) && (u_90 != v_90)))
                  _fail(v_90);
                else
                  u_90 = v_90;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_90)), term_b_32);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, h_4);
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
  ATerm c_32;
  c_32 = t;
  {
    ATerm a_91 = NULL;
    ATerm b_91 = NULL;
    b_91 = t;
    if(((a_91 != NULL) && (a_91 != b_91)))
      _fail(b_91);
    else
      a_91 = b_91;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATempty, not_null(a_91)));
      t = printnl_0(t);
    }
  }
  t = c_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_117 (ATerm))
{
  ATerm d_32;
  d_32 = t;
  {
    t = t_117(t);
    t = debug_0(t);
  }
  t = d_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_95 (ATerm))
{
  ATerm i_91 = NULL,j_91 = NULL;
  i_91 = t;
  h_91 :
  if(match_cons(i_91, sym_Undefined_1))
    {
      j_91 = ATgetArgument(i_91, 0);
      {
        ATerm m_91 = NULL,o_91 = NULL;
        ATerm n_91 = NULL;
        t = SSLgetAnnotations(not_null(i_91));
        {
          n_91 = t;
          if(((m_91 != NULL) && (m_91 != n_91)))
            _fail(n_91);
          else
            m_91 = n_91;
        }
        {
          t = not_null(j_91);
          {
            ATerm q_91 = NULL;
            t = a_95(t);
            {
              o_91 = t;
              {
                ATerm r_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_91)), not_null(m_91));
                {
                  r_91 = t;
                  if(((q_91 != NULL) && (q_91 != r_91)))
                    _fail(r_91);
                  else
                    q_91 = r_91;
                }
                t = not_null(q_91);
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
ATerm fetch_1 (ATerm t, ATerm v_103 (ATerm))
{
  ATerm w_91 (ATerm t)
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_103, _id);
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = Cons_2(t, _id, w_91);
      }
    return(t);
  }
  t = w_91(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_121 (ATerm))
{
  t = fetch_1(t, r_121);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_92 = NULL;
  b_92 = t;
  a_92 :
  if(match_cons(b_92, sym_Help_0))
    {
      ATerm d_92 = NULL,f_92 = NULL;
      ATerm g_32;
      g_32 = t;
      {
        ATerm e_92 = NULL;
        t = SSLgetAnnotations(not_null(b_92));
        {
          e_92 = t;
          if(((d_92 != NULL) && (d_92 != e_92)))
            _fail(e_92);
          else
            d_92 = e_92;
        }
      }
      t = g_32;
      {
        ATerm g_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_92));
        {
          g_92 = t;
          if(((f_92 != NULL) && (f_92 != g_92)))
            _fail(g_92);
          else
            f_92 = g_92;
        }
        t = not_null(f_92);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_100(t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
  m_92 = t;
  l_92 :
  if(match_cons(m_92, sym__2))
    {
      n_92 = ATgetArgument(m_92, 0);
      o_92 = ATgetArgument(m_92, 1);
      t = SSL_table_get(not_null(n_92), not_null(o_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  v_92 = t;
  u_92 :
  if(match_cons(v_92, sym__3))
    {
      w_92 = ATgetArgument(v_92, 0);
      x_92 = ATgetArgument(v_92, 1);
      y_92 = ATgetArgument(v_92, 2);
      {
        ATerm j_32;
        j_32 = t;
        {
          ATerm c_93 = NULL;
          ATerm d_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_92), not_null(x_92));
          {
            ATerm m_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_32);
              }
            else
              {
                t = m_32;
                t = (ATerm) ATempty;
              }
            {
              d_93 = t;
              if(((c_93 != NULL) && (c_93 != d_93)))
                _fail(d_93);
              else
                c_93 = d_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_92), not_null(x_92), (ATerm) ATinsert(CheckATermList(not_null(c_93)), not_null(y_92)));
            t = table_put_0(t);
          }
        }
        t = j_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_122 (ATerm))
{
  ATerm h_93 = NULL;
  ATerm i_93 = NULL;
  t = term_y_25;
  {
    t = w_122(t);
    {
      i_93 = t;
      if(((h_93 != NULL) && (h_93 != i_93)))
        _fail(i_93);
      else
        h_93 = i_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_31, term_z_31, not_null(h_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
  o_93 = t;
  n_93 :
  if(match_string(o_93, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_93) == AT_LIST) && !(ATisEmpty(o_93))))
        {
          p_93 = ATgetFirst((ATermList) o_93);
          q_93 = (ATerm) ATgetNext((ATermList) o_93);
          {
            ATerm t_93 = NULL;
            ATerm o_32;
            o_32 = t;
            {
              t = not_null(p_93);
              t = a_0(t);
            }
            t = o_32;
            {
              ATerm u_93 = NULL;
              t = term_y_25;
              {
                t = d_0(t);
                {
                  u_93 = t;
                  if(((t_93 != NULL) && (t_93 != u_93)))
                    _fail(u_93);
                  else
                    t_93 = u_93;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_93)), not_null(t_93));
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
    ATerm z_93 = NULL;
    z_93 = t;
    y_93 :
    if(!(match_string(z_93, "--help")))
      {
        if(!(match_string(z_93, "-h")))
          {
            if(!(match_string(z_93, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_u_32;
    {
      t = set_config_0(t);
      t = term_v_32;
    }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_s_33;
    return(t);
  }
  t = Option_3(t, i_4, j_4, l_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL;
  c_94 = t;
  b_94 :
  if(((ATgetType(c_94) == AT_LIST) && !(ATisEmpty(c_94))))
    {
      d_94 = ATgetFirst((ATermList) c_94);
      e_94 = (ATerm) ATgetNext((ATermList) c_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
  o_94 = t;
  n_94 :
  if(((ATgetType(o_94) == AT_LIST) && !(ATisEmpty(o_94))))
    {
      p_94 = ATgetFirst((ATermList) o_94);
      q_94 = (ATerm) ATgetNext((ATermList) o_94);
      {
        ATerm u_94 = NULL,w_94 = NULL;
        ATerm v_94 = NULL;
        t = SSLgetAnnotations(not_null(o_94));
        {
          v_94 = t;
          if(((u_94 != NULL) && (u_94 != v_94)))
            _fail(v_94);
          else
            u_94 = v_94;
        }
        {
          t = not_null(p_94);
          {
            ATerm y_94 = NULL;
            t = c_84(t);
            {
              w_94 = t;
              {
                t = not_null(q_94);
                {
                  ATerm c_95 = NULL;
                  t = d_84(t);
                  {
                    y_94 = t;
                    {
                      ATerm d_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_94)), not_null(w_94)), not_null(u_94));
                      {
                        d_95 = t;
                        if(((c_95 != NULL) && (c_95 != d_95)))
                          _fail(d_95);
                        else
                          c_95 = d_95;
                      }
                      t = not_null(c_95);
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
  ATerm p_95 = NULL;
  p_95 = t;
  o_95 :
  if(((ATgetType(p_95) == AT_LIST) && ATisEmpty(p_95)))
    {
      {
        ATerm r_95 = NULL,t_95 = NULL;
        ATerm t_33;
        t_33 = t;
        {
          ATerm s_95 = NULL;
          t = SSLgetAnnotations(not_null(p_95));
          {
            s_95 = t;
            if(((r_95 != NULL) && (r_95 != s_95)))
              _fail(s_95);
            else
              r_95 = s_95;
          }
        }
        t = t_33;
        {
          ATerm u_95 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_95));
          {
            u_95 = t;
            if(((t_95 != NULL) && (t_95 != u_95)))
              _fail(u_95);
            else
              t_95 = u_95;
          }
          t = not_null(t_95);
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
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL;
  a_96 = t;
  z_95 :
  if(match_cons(a_96, sym__2))
    {
      b_96 = ATgetArgument(a_96, 0);
      c_96 = ATgetArgument(a_96, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_23, not_null(b_96), not_null(c_96));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_122 (ATerm))
{
  ATerm u_33;
  u_33 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_34;
        t = u_122(t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
        }
      }
  }
  t = u_33;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm n_96 = NULL;
      ATerm f_34;
      f_34 = t;
      {
        ATerm l_96 = NULL;
        ATerm m_96 = NULL;
        m_96 = t;
        if(((l_96 != NULL) && (l_96 != m_96)))
          _fail(m_96);
        else
          l_96 = m_96;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_30, not_null(l_96));
          t = set_config_0(t);
        }
      }
      t = f_34;
      {
        ATerm o_96 = NULL;
        o_96 = t;
        if(((n_96 != NULL) && (n_96 != o_96)))
          _fail(o_96);
        else
          n_96 = o_96;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_96));
      }
      return(t);
    }
    ATerm n_4 (ATerm t)
    {
      ATerm g_34 = t;
      int h_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              {
                t = u_122(t);
                t = Cons_2(t, _id, n_4);
              }
            }
          LocalPopChoice(h_34);
        }
      else
        {
          t = g_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_4, n_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL;
  ATerm k_34;
  k_34 = t;
  {
    ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL;
    a_97 = t;
    w_96 :
    if(match_cons(a_97, sym__3))
      {
        b_97 = ATgetArgument(a_97, 0);
        c_97 = ATgetArgument(a_97, 1);
        d_97 = ATgetArgument(a_97, 2);
        {
          if(((x_96 != NULL) && (x_96 != b_97)))
            _fail(b_97);
          else
            x_96 = b_97;
          {
            if(((y_96 != NULL) && (y_96 != c_97)))
              _fail(c_97);
            else
              y_96 = c_97;
            {
              if(((z_96 != NULL) && (z_96 != d_97)))
                _fail(d_97);
              else
                z_96 = d_97;
              t = SSL_table_put(not_null(x_96), not_null(y_96), not_null(z_96));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_122 (ATerm))
{
  ATerm l_97 = NULL;
  ATerm l_34;
  l_34 = t;
  {
    t = term_m_34;
    t = table_put_0(t);
  }
  t = l_34;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm n_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_122(t);
          LocalPopChoice(o_34);
        }
      else
        {
          t = n_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_4);
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_34;
          r_34 = t;
          {
            ATerm s_34 = t;
            int t_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_p_32;
                t = get_config_0(t);
                LocalPopChoice(t_34);
              }
            else
              {
                t = s_34;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_34;
          {
            t = system_usage_0(t);
            {
              t = term_k_26;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm u_34 = t;
            int w_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm m_97 = NULL;
                    m_97 = t;
                    if(((l_97 != NULL) && (l_97 != m_97)))
                      _fail(m_97);
                    else
                      l_97 = m_97;
                    return(t);
                  }
                  t = Undefined_1(t, t_4);
                  return(t);
                }
                t = fetch_1(t, p_4);
                {
                  ATerm u_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_97)), term_x_34);
                    return(t);
                  }
                  t = say_1(t, u_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_34);
              }
            else
              {
                t = u_34;
                {
                }
              }
          }
        }
      {
        ATerm y_34;
        y_34 = t;
        {
          t = term_y_31;
          t = table_destroy_0(t);
        }
        t = y_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm))
{
  t = parse_options_1(t, a_119);
  {
    t = store_options_0(t);
    {
      t = c_119(t);
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_119);
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              ATerm c_35 = t;
              int e_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_119(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_35);
                }
              else
                {
                  t = c_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm i_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_119(t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = i_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_119);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_4, t_119, u_119, w_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm a_36;
      a_36 = t;
      {
        ATerm p_97 = NULL;
        ATerm q_97 = NULL;
        t = term_s_30;
        {
          t = get_config_0(t);
          {
            q_97 = t;
            if(((p_97 != NULL) && (p_97 != q_97)))
              _fail(q_97);
            else
              p_97 = q_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATempty, not_null(p_97)));
          t = printnl_0(t);
        }
      }
      t = a_36;
      return(t);
    }
    t = if_verbose2_1(t, z_4);
    return(t);
  }
  t = iowrap_4(t, l_119, m_119, n_119, y_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_119 (ATerm), ATerm k_119 (ATerm))
{
  t = iowrap_3(t, j_119, k_119, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_119 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    t = _2(t, _id, g_119);
    return(t);
  }
  t = iowrap_2(t, a_5, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, c_5);
    return(t);
  }
  t = iowrap_1(t, b_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
