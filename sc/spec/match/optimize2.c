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
ATerm term_v_33;
ATerm term_n_33;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_m_30;
ATerm term_h_30;
ATerm term_w_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_a_25;
ATerm term_i_24;
ATerm term_y_23;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_z_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_s_11;
ATerm term_x_7;
ATerm term_l_7;
void init_constant_terms (void)
{
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_w_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_z_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_z_26);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_z_26);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_z_26);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, (ATerm) ATempty);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
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
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_117 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
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
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
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
            ATerm s_5 = t;
            int t_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(t_5);
              }
            else
              {
                t = s_5;
                {
                  ATerm u_5 = t;
                  int z_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_6;
                      a_6 = t;
                      {
                        ATerm c_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, r_110, c_0);
                      }
                      t = a_6;
                      t = Cons_2(t, _id, v_4);
                      LocalPopChoice(z_5);
                    }
                  else
                    {
                      t = u_5;
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
  ATerm b_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, k_121, i_121);
      LocalPopChoice(f_6);
    }
  else
    {
      t = b_6;
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
            ATerm h_6 = t;
            int k_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_7);
                LocalPopChoice(k_6);
              }
            else
              {
                t = h_6;
                {
                  ATerm l_6 = t;
                  int m_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_0 (ATerm t)
                      {
                        t = not_null(w_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_110, d_0);
                      t = a_8(t);
                      LocalPopChoice(m_6);
                    }
                  else
                    {
                      t = l_6;
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
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_109(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
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
              ATerm p_6;
              p_6 = t;
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
              t = p_6;
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
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        {
          ATerm v_6 = t;
          int w_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL;
              ATerm f_7;
              f_7 = t;
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
              t = f_7;
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = not_null(h_9);
                    return(t);
                  }
                  t = split_2(t, j_9, m_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm f_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = a_106(t, e_0, j_9, f_0);
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, n_0, union_0, _id);
                }
              }
              LocalPopChoice(w_6);
            }
          else
            {
              t = v_6;
              {
                ATerm o_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_0, union_0, j_9);
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
  ATerm p_0 (ATerm t)
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, p_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Scope_2))
    {
      r_9 = ATgetArgument(q_9, 0);
      s_9 = ATgetArgument(q_9, 1);
      {
        ATerm v_9 = NULL;
        ATerm w_9 = NULL,y_9 = NULL;
        ATerm x_9 = NULL;
        t = not_null(s_9);
        {
          t = tvars_0(t);
          {
            x_9 = t;
            if(((w_9 != NULL) && (w_9 != x_9)))
              _fail(x_9);
            else
              w_9 = x_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_9), not_null(w_9));
          {
            t = isect_0(t);
            {
              y_9 = t;
              {
                if(((v_9 != NULL) && (v_9 != y_9)))
                  _fail(y_9);
                else
                  v_9 = y_9;
                {
                  ATerm i_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm z_9 = NULL;
                      z_9 = t;
                      if(((r_9 != NULL) && (r_9 != z_9)))
                        _fail(z_9);
                      else
                        r_9 = z_9;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = i_7;
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_9), not_null(s_9));
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
    ATerm q_0 (ATerm t)
    {
      t = topdown_1(t, l_117);
      return(t);
    }
    t = _all(t, q_0);
  }
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, s_0);
    return(t);
  }
  t = topdown_1(t, r_0);
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
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  ATerm x_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_10), not_null(l_10)));
    return(t);
  }
  ATerm y_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_10), not_null(q_10)));
    return(t);
  }
  m_10 = t;
  g_10 :
  if(match_cons(m_10, sym_Seq_2))
    {
      n_10 = ATgetArgument(m_10, 0);
      q_10 = ATgetArgument(m_10, 1);
      h_10 :
      if(match_cons(q_10, sym_Scope_2))
        {
          k_10 = ATgetArgument(q_10, 0);
          l_10 = ATgetArgument(q_10, 1);
          i_10 :
          if(match_cons(n_10, sym_Scope_2))
            {
              o_10 = ATgetArgument(n_10, 0);
              p_10 = ATgetArgument(n_10, 1);
              {
                ATerm j_7 = t;
                int k_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_10(t);
                    LocalPopChoice(k_7);
                  }
                else
                  {
                    t = j_7;
                    t = y_10(t);
                  }
              }
            }
          else
            {
              t = x_10(t);
            }
        }
      else
        {
          j_10 :
          if(match_cons(n_10, sym_Scope_2))
            {
              o_10 = ATgetArgument(n_10, 0);
              p_10 = ATgetArgument(n_10, 1);
              t = y_10(t);
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
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  f_11 = t;
  a_11 :
  if(match_cons(f_11, sym_Let_2))
    {
      g_11 = ATgetArgument(f_11, 0);
      m_11 = ATgetArgument(f_11, 1);
      b_11 :
      if(((ATgetType(g_11) == AT_LIST) && ((ATermList) g_11 != ATempty)))
        {
          h_11 = ATgetFirst((ATermList) g_11);
          l_11 = (ATerm) ATgetNext((ATermList) g_11);
          c_11 :
          if(match_cons(h_11, sym_SDef_3))
            {
              i_11 = ATgetArgument(h_11, 0);
              j_11 = ATgetArgument(h_11, 1);
              k_11 = ATgetArgument(h_11, 2);
              d_11 :
              if(((ATermList) j_11 == ATempty))
                {
                  e_11 :
                  if(((ATermList) l_11 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_l_7), not_null(i_11), (ATerm)ATempty, not_null(k_11))), not_null(m_11));
                    }
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
  ATerm r_11 (ATerm t)
  {
    ATerm m_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_113(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = m_7;
        t = Cons_2(t, _id, r_11);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_Let_2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm j_12 = NULL,k_12 = NULL;
        ATerm z_12 = NULL;
        t = not_null(f_12);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
            l_12 = t;
            z_11 :
            if(((ATgetType(l_12) == AT_LIST) && ((ATermList) l_12 != ATempty)))
              {
                m_12 = ATgetFirst((ATermList) l_12);
                q_12 = (ATerm) ATgetNext((ATermList) l_12);
                a_12 :
                if(match_cons(m_12, sym_SDef_3))
                  {
                    n_12 = ATgetArgument(m_12, 0);
                    o_12 = ATgetArgument(m_12, 1);
                    p_12 = ATgetArgument(m_12, 2);
                    b_12 :
                    if(((ATermList) o_12 == ATempty))
                      {
                        {
                          ATerm y_12 = NULL;
                          t = not_null(g_12);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                              u_12 = t;
                              v_11 :
                              if(match_cons(u_12, sym_Call_2))
                                {
                                  v_12 = ATgetArgument(u_12, 0);
                                  x_12 = ATgetArgument(u_12, 1);
                                  w_11 :
                                  if(match_cons(v_12, sym_SVar_1))
                                    {
                                      w_12 = ATgetArgument(v_12, 0);
                                      x_11 :
                                      if(((ATermList) x_12 == ATempty))
                                        {
                                          {
                                            if(((n_12 != NULL) && (n_12 != w_12)))
                                              _fail(w_12);
                                            else
                                              n_12 = w_12;
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
                            t = oncetd_1(t, w_0);
                            {
                              y_12 = t;
                              {
                                if(((j_12 != NULL) && (j_12 != y_12)))
                                  _fail(y_12);
                                else
                                  j_12 = y_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_12)), (ATerm) ATempty), not_null(j_12));
                                  {
                                    ATerm r_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_subterm_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = r_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(q_12);
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
            z_12 = t;
            if(((k_12 != NULL) && (k_12 != z_12)))
              _fail(z_12);
            else
              k_12 = z_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_12), not_null(j_12));
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
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  n_13 = t;
  h_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      q_13 = ATgetArgument(n_13, 1);
      i_13 :
      if(match_cons(o_13, sym_Build_1))
        {
          p_13 = ATgetArgument(o_13, 0);
          j_13 :
          if(match_cons(q_13, sym_Where_1))
            {
              r_13 = ATgetArgument(q_13, 0);
              k_13 :
              if(match_cons(r_13, sym_Prim_2))
                {
                  l_13 = ATgetArgument(r_13, 0);
                  m_13 = ATgetArgument(r_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_13), not_null(m_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_13, sym_Prim_2))
                {
                  r_13 = ATgetArgument(q_13, 0);
                  s_13 = ATgetArgument(q_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_13), not_null(s_13));
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
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  i_14 = t;
  d_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      l_14 = ATgetArgument(i_14, 1);
      e_14 :
      if(match_cons(j_14, sym_Build_1))
        {
          k_14 = ATgetArgument(j_14, 0);
          f_14 :
          if(match_cons(l_14, sym_Where_1))
            {
              m_14 = ATgetArgument(l_14, 0);
              g_14 :
              if(match_cons(m_14, sym_Build_1))
                {
                  h_14 = ATgetArgument(m_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(l_14, sym_Build_1))
                {
                  m_14 = ATgetArgument(l_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_14));
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  c_15 = t;
  x_14 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      h_15 = ATgetArgument(c_15, 1);
      y_14 :
      if(match_cons(d_15, sym_Build_1))
        {
          e_15 = ATgetArgument(d_15, 0);
          z_14 :
          if(match_cons(e_15, sym_Op_2))
            {
              f_15 = ATgetArgument(e_15, 0);
              g_15 = ATgetArgument(e_15, 1);
              a_15 :
              if(match_cons(h_15, sym_Match_1))
                {
                  i_15 = ATgetArgument(h_15, 0);
                  b_15 :
                  if(match_cons(i_15, sym_Op_2))
                    {
                      j_15 = ATgetArgument(i_15, 0);
                      k_15 = ATgetArgument(i_15, 1);
                      {
                        ATerm n_15 = NULL,o_15 = NULL;
                        if(((f_15 != NULL) && (f_15 != j_15)))
                          _fail(j_15);
                        else
                          f_15 = j_15;
                        {
                          if(((n_15 != NULL) && (n_15 != k_15)))
                            _fail(k_15);
                          else
                            n_15 = k_15;
                          {
                            ATerm u_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), not_null(n_15));
                            {
                              ATerm x_0 (ATerm t)
                              {
                                ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
                                p_15 = t;
                                v_14 :
                                if(match_cons(p_15, sym__2))
                                  {
                                    q_15 = ATgetArgument(p_15, 0);
                                    r_15 = ATgetArgument(p_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, x_0);
                              {
                                u_15 = t;
                                if(((o_15 != NULL) && (o_15 != u_15)))
                                  _fail(u_15);
                                else
                                  o_15 = u_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(o_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(f_15), not_null(g_15))));
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  e_16 = t;
  z_15 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      j_16 = ATgetArgument(e_16, 1);
      a_16 :
      if(match_cons(f_16, sym_Build_1))
        {
          g_16 = ATgetArgument(f_16, 0);
          b_16 :
          if(match_cons(g_16, sym_Op_2))
            {
              h_16 = ATgetArgument(g_16, 0);
              i_16 = ATgetArgument(g_16, 1);
              c_16 :
              if(match_cons(j_16, sym_Match_1))
                {
                  k_16 = ATgetArgument(j_16, 0);
                  d_16 :
                  if(match_cons(k_16, sym_Op_2))
                    {
                      l_16 = ATgetArgument(k_16, 0);
                      m_16 = ATgetArgument(k_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(l_16));
                        {
                          ATerm s_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = s_7;
                            }
                        }
                        t = term_x_7;
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
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm d_8 = t;
              int i_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(i_8);
                }
              else
                {
                  t = d_8;
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
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  ATerm n_17 (ATerm t)
  {
    ATerm k_17 = NULL;
    ATerm l_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(c_17));
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
    t = not_null(k_17);
    return(t);
  }
  a_17 = t;
  w_16 :
  if(match_cons(a_17, sym_Seq_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      x_16 :
      if(match_cons(c_17, sym_Seq_2))
        {
          y_16 = ATgetArgument(c_17, 0);
          z_16 = ATgetArgument(c_17, 1);
          {
            ATerm j_8 = t;
            int o_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_17 = NULL;
                ATerm h_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(y_16));
                {
                  t = BMF_0(t);
                  {
                    h_17 = t;
                    if(((g_17 != NULL) && (g_17 != h_17)))
                      _fail(h_17);
                    else
                      g_17 = h_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_17), not_null(z_16));
                LocalPopChoice(o_8);
              }
            else
              {
                t = j_8;
                t = n_17(t);
              }
          }
        }
      else
        {
          t = n_17(t);
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  r_17 :
  if(match_cons(v_17, sym_Seq_2))
    {
      w_17 = ATgetArgument(v_17, 0);
      y_17 = ATgetArgument(v_17, 1);
      s_17 :
      if(match_cons(w_17, sym_Build_1))
        {
          x_17 = ATgetArgument(w_17, 0);
          t_17 :
          if(match_cons(y_17, sym_Seq_2))
            {
              z_17 = ATgetArgument(y_17, 0);
              b_18 = ATgetArgument(y_17, 1);
              u_17 :
              if(match_cons(z_17, sym_Build_1))
                {
                  a_18 = ATgetArgument(z_17, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_18)), not_null(b_18));
                }
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  k_18 = t;
  i_18 :
  if(match_cons(k_18, sym_Scope_2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      j_18 :
      if(match_cons(m_18, sym_Scope_2))
        {
          n_18 = ATgetArgument(m_18, 0);
          o_18 = ATgetArgument(m_18, 1);
          {
            ATerm s_18 = NULL;
            ATerm t_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(n_18));
            {
              t = conc_0(t);
              {
                t_18 = t;
                if(((s_18 != NULL) && (s_18 != t_18)))
                  _fail(t_18);
                else
                  s_18 = t_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_18), not_null(o_18));
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
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_Var_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      t = not_null(z_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  f_19 = t;
  d_19 :
  if(match_cons(f_19, sym__2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      e_19 :
      if(((ATgetType(h_19) == AT_LIST) && ((ATermList) h_19 != ATempty)))
        {
          i_19 = ATgetFirst((ATermList) h_19);
          j_19 = (ATerm) ATgetNext((ATermList) h_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_19), not_null(j_19));
        }
      else
        {
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
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  r_19 = t;
  o_19 :
  if(match_cons(r_19, sym__2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      p_19 :
      if(((ATgetType(t_19) == AT_LIST) && ((ATermList) t_19 != ATempty)))
        {
          u_19 = ATgetFirst((ATermList) t_19);
          x_19 = (ATerm) ATgetNext((ATermList) t_19);
          q_19 :
          if(match_cons(u_19, sym__2))
            {
              v_19 = ATgetArgument(u_19, 0);
              w_19 = ATgetArgument(u_19, 1);
              {
                ATerm z_19 = NULL;
                if(((s_19 != NULL) && (s_19 != v_19)))
                  _fail(v_19);
                else
                  s_19 = v_19;
                {
                  if(((z_19 != NULL) && (z_19 != w_19)))
                    _fail(w_19);
                  else
                    z_19 = w_19;
                  t = not_null(z_19);
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
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm p_120 (ATerm), ATerm q_120 (ATerm))
{
  ATerm f_20 = NULL;
  ATerm h_20 = NULL,i_20 = NULL;
  f_20 = t;
  {
    ATerm j_20 = NULL;
    t = not_null(f_20);
    {
      ATerm k_20 = NULL;
      t = p_120(t);
      {
        j_20 = t;
        {
          if(((h_20 != NULL) && (h_20 != j_20)))
            _fail(j_20);
          else
            h_20 = j_20;
          {
            t = q_120(t);
            {
              k_20 = t;
              if(((i_20 != NULL) && (i_20 != k_20)))
                _fail(k_20);
              else
                i_20 = k_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(i_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm p_119 (ATerm))
{
  ATerm o_20 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_119(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = _all(t, o_20);
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm y_20 = NULL;
        if(((y_20 != NULL) && (y_20 != v_20)))
          _fail(v_20);
        else
          y_20 = v_20;
      }
    }
  else
    {
      if(match_cons(t_20, sym__3))
        {
          u_20 = ATgetArgument(t_20, 0);
          v_20 = ATgetArgument(t_20, 1);
          w_20 = ATgetArgument(t_20, 2);
          {
            ATerm e_21 = NULL;
            ATerm f_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), not_null(v_20));
            {
              t = zip_1(t, _id);
              {
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), not_null(w_20));
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  t = subs_args_0(t);
  {
    l_21 = t;
    k_21 :
    if(match_cons(l_21, sym__2))
      {
        m_21 = ATgetArgument(l_21, 0);
        n_21 = ATgetArgument(l_21, 1);
        {
          t = not_null(n_21);
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = not_null(m_21);
                return(t);
              }
              t = SubsVar_2(t, r_120, z_0);
              t = s_120(t);
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
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  u_21 = t;
  s_21 :
  if(match_cons(u_21, sym__2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      t_21 :
      if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
        {
          x_21 = ATgetFirst((ATermList) w_21);
          y_21 = (ATerm) ATgetNext((ATermList) w_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_21)), not_null(x_21)), not_null(y_21));
        }
      else
        {
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
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  n_22 = t;
  l_22 :
  if(((ATgetType(n_22) == AT_LIST) && ((ATermList) n_22 != ATempty)))
    {
      o_22 = ATgetFirst((ATermList) n_22);
      r_22 = (ATerm) ATgetNext((ATermList) n_22);
      m_22 :
      if(match_cons(o_22, sym__2))
        {
          p_22 = ATgetArgument(o_22, 0);
          q_22 = ATgetArgument(o_22, 1);
          {
            ATerm v_22 = NULL,w_22 = NULL,c_23 = NULL,i_23 = NULL;
            ATerm t_8;
            t_8 = t;
            {
              ATerm x_22 = NULL;
              ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
              t = not_null(q_22);
              {
                x_22 = t;
                {
                  t = SSL_explode_term(not_null(x_22));
                  {
                    z_22 = t;
                    g_22 :
                    if(match_cons(z_22, sym__2))
                      {
                        a_23 = ATgetArgument(z_22, 0);
                        b_23 = ATgetArgument(z_22, 1);
                        {
                          if(((v_22 != NULL) && (v_22 != a_23)))
                            _fail(a_23);
                          else
                            v_22 = a_23;
                          if(((w_22 != NULL) && (w_22 != b_23)))
                            _fail(b_23);
                          else
                            w_22 = b_23;
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
              ATerm w_8;
              w_8 = t;
              {
                ATerm d_23 = NULL;
                ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
                t = not_null(p_22);
                {
                  d_23 = t;
                  {
                    t = SSL_explode_term(not_null(d_23));
                    {
                      f_23 = t;
                      j_22 :
                      if(match_cons(f_23, sym__2))
                        {
                          g_23 = ATgetArgument(f_23, 0);
                          h_23 = ATgetArgument(f_23, 1);
                          {
                            if(((v_22 != NULL) && (v_22 != g_23)))
                              _fail(g_23);
                            else
                              v_22 = g_23;
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
              t = w_8;
              {
                ATerm j_23 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), not_null(w_22));
                {
                  t = zip_1(t, _id);
                  {
                    j_23 = t;
                    if(((i_23 != NULL) && (i_23 != j_23)))
                      _fail(j_23);
                    else
                      i_23 = j_23;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(r_22));
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
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  t_23 = t;
  r_23 :
  if(((ATgetType(t_23) == AT_LIST) && ((ATermList) t_23 != ATempty)))
    {
      u_23 = ATgetFirst((ATermList) t_23);
      x_23 = (ATerm) ATgetNext((ATermList) t_23);
      s_23 :
      if(match_cons(u_23, sym__2))
        {
          v_23 = ATgetArgument(u_23, 0);
          w_23 = ATgetArgument(u_23, 1);
          {
            ATerm z_23 = NULL;
            if(((v_23 != NULL) && (v_23 != w_23)))
              _fail(w_23);
            else
              v_23 = w_23;
            {
              if(((z_23 != NULL) && (z_23 != x_23)))
                _fail(x_23);
              else
                z_23 = x_23;
              t = not_null(z_23);
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
  ATerm b_24 (ATerm t)
  {
    ATerm z_8 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_104(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = z_8;
        {
          t = l_104(t);
          t = b_24(t);
        }
      }
    return(t);
  }
  t = b_24(t);
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
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      if(((f_24 != NULL) && (f_24 != g_24)))
        _fail(g_24);
      else
        f_24 = g_24;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  l_24 :
  if(((ATgetType(m_24) == AT_LIST) && ((ATermList) m_24 != ATempty)))
    {
      n_24 = ATgetFirst((ATermList) m_24);
      o_24 = (ATerm) ATgetNext((ATermList) m_24);
      {
        t = j_110(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm r_24 = NULL;
            r_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(r_24));
              t = i_110(t);
            }
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(o_24);
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
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      {
        t = not_null(y_24);
        {
          ATerm d_25 (ATerm t)
          {
            ATerm e_9 = t;
            int f_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(f_9);
              }
            else
              {
                t = e_9;
                {
                  ATerm g_9 = t;
                  int k_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(z_24);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_110, b_1);
                      t = d_25(t);
                      LocalPopChoice(k_9);
                    }
                  else
                    {
                      t = g_9;
                      t = Cons_2(t, _id, d_25);
                    }
                }
              }
            return(t);
          }
          t = d_25(t);
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm f_25 = NULL;
          f_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_25));
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm e_1 (ATerm t)
        {
          ATerm n_9 = t;
          int o_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_1 (ATerm t)
              {
                ATerm t_9 = t;
                int u_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(u_9);
                  }
                else
                  {
                    t = t_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, f_1);
              LocalPopChoice(o_9);
            }
          else
            {
              t = n_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, c_1, d_1, e_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm b_119 (ATerm))
{
  ATerm i_25 (ATerm t)
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_119(t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = _one(t, i_25);
      }
    return(t);
  }
  t = i_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym__2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      {
        ATerm c_10;
        c_10 = t;
        {
          t = not_null(o_25);
          {
            ATerm g_1 (ATerm t)
            {
              ATerm r_25 = NULL;
              r_25 = t;
              if(((n_25 != NULL) && (n_25 != r_25)))
                _fail(r_25);
              else
                n_25 = r_25;
              return(t);
            }
            t = oncetd_1(t, g_1);
          }
        }
        t = c_10;
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
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_Var_1))
    {
      e_26 = ATgetArgument(d_26, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_26 = NULL,j_26 = NULL;
            ATerm i_26 = NULL;
            t = SSLgetAnnotations(not_null(d_26));
            {
              i_26 = t;
              if(((h_26 != NULL) && (h_26 != i_26)))
                _fail(i_26);
              else
                h_26 = i_26;
            }
            {
              t = not_null(e_26);
              {
                ATerm l_26 = NULL;
                t = t_0(t);
                {
                  j_26 = t;
                  {
                    ATerm m_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_26)), not_null(h_26));
                    {
                      m_26 = t;
                      if(((l_26 != NULL) && (l_26 != m_26)))
                        _fail(m_26);
                      else
                        l_26 = m_26;
                    }
                    t = not_null(l_26);
                  }
                }
              }
            }
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm p_26 = NULL,r_26 = NULL;
              ATerm q_26 = NULL;
              t = SSLgetAnnotations(not_null(d_26));
              {
                q_26 = t;
                if(((p_26 != NULL) && (p_26 != q_26)))
                  _fail(q_26);
                else
                  p_26 = q_26;
              }
              {
                t = not_null(e_26);
                {
                  ATerm t_26 = NULL;
                  t = t_0(t);
                  {
                    r_26 = t;
                    {
                      ATerm u_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_26)), not_null(p_26));
                      {
                        u_26 = t;
                        if(((t_26 != NULL) && (t_26 != u_26)))
                          _fail(u_26);
                        else
                          t_26 = u_26;
                      }
                      t = not_null(t_26);
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
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  u_28 = t;
  t_27 :
  if(match_cons(u_28, sym_Seq_2))
    {
      v_28 = ATgetArgument(u_28, 0);
      x_28 = ATgetArgument(u_28, 1);
      u_27 :
      if(match_cons(v_28, sym_Assign_1))
        {
          w_28 = ATgetArgument(v_28, 0);
          v_27 :
          if(match_cons(w_28, sym_Var_1))
            {
              n_28 = ATgetArgument(w_28, 0);
              w_27 :
              if(match_cons(x_28, sym_Seq_2))
                {
                  y_28 = ATgetArgument(x_28, 0);
                  z_28 = ATgetArgument(x_28, 1);
                  x_27 :
                  if(match_cons(y_28, sym_Build_1))
                    {
                      q_28 = ATgetArgument(y_28, 0);
                      y_27 :
                      if(match_cons(q_28, sym_Var_1))
                        {
                          r_28 = ATgetArgument(q_28, 0);
                          {
                            ATerm f_29 = NULL;
                            if(((n_28 != NULL) && (n_28 != r_28)))
                              _fail(r_28);
                            else
                              n_28 = r_28;
                            {
                              if(((f_29 != NULL) && (f_29 != z_28)))
                                _fail(z_28);
                              else
                                f_29 = z_28;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_28))), not_null(f_29));
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
          if(match_cons(v_28, sym_Build_1))
            {
              w_28 = ATgetArgument(v_28, 0);
              z_27 :
              if(match_cons(x_28, sym_Scope_2))
                {
                  y_28 = ATgetArgument(x_28, 0);
                  z_28 = ATgetArgument(x_28, 1);
                  a_28 :
                  if(match_cons(z_28, sym_Seq_2))
                    {
                      a_29 = ATgetArgument(z_28, 0);
                      d_29 = ATgetArgument(z_28, 1);
                      b_28 :
                      if(match_cons(a_29, sym_Assign_1))
                        {
                          b_29 = ATgetArgument(a_29, 0);
                          c_28 :
                          if(match_cons(b_29, sym_Var_1))
                            {
                              c_29 = ATgetArgument(b_29, 0);
                              {
                                ATerm f_10 = t;
                                int r_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_30 = NULL,k_30 = NULL;
                                    ATerm s_10;
                                    s_10 = t;
                                    {
                                      ATerm j_30 = NULL;
                                      t = not_null(w_28);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(y_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  j_30 = t;
                                                  if(((i_30 != NULL) && (i_30 != j_30)))
                                                    _fail(j_30);
                                                  else
                                                    i_30 = j_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = s_10;
                                    {
                                      ATerm l_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, not_null(w_28)), not_null(d_29));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          l_30 = t;
                                          if(((k_30 != NULL) && (k_30 != l_30)))
                                            _fail(l_30);
                                          else
                                            k_30 = l_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_30), not_null(k_30)));
                                    }
                                    LocalPopChoice(r_10);
                                  }
                                else
                                  {
                                    t = f_10;
                                    {
                                      ATerm q_30 = NULL,s_30 = NULL;
                                      ATerm t_10;
                                      t_10 = t;
                                      {
                                        ATerm r_30 = NULL;
                                        t = not_null(w_28);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(y_28));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    r_30 = t;
                                                    if(((q_30 != NULL) && (q_30 != r_30)))
                                                      _fail(r_30);
                                                    else
                                                      q_30 = r_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = t_10;
                                      {
                                        ATerm t_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, not_null(w_28)), not_null(d_29));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            t_30 = t;
                                            if(((s_30 != NULL) && (s_30 != t_30)))
                                              _fail(t_30);
                                            else
                                              s_30 = t_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_30), not_null(s_30)));
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
      if(match_cons(u_28, sym_Scope_2))
        {
          v_28 = ATgetArgument(u_28, 0);
          x_28 = ATgetArgument(u_28, 1);
          d_28 :
          if(match_cons(x_28, sym_Seq_2))
            {
              y_28 = ATgetArgument(x_28, 0);
              z_28 = ATgetArgument(x_28, 1);
              e_28 :
              if(match_cons(y_28, sym_Assign_1))
                {
                  q_28 = ATgetArgument(y_28, 0);
                  f_28 :
                  if(match_cons(q_28, sym_Var_1))
                    {
                      r_28 = ATgetArgument(q_28, 0);
                      g_28 :
                      if(match_cons(z_28, sym_Seq_2))
                        {
                          a_29 = ATgetArgument(z_28, 0);
                          d_29 = ATgetArgument(z_28, 1);
                          h_28 :
                          if(match_cons(a_29, sym_Assign_2))
                            {
                              b_29 = ATgetArgument(a_29, 0);
                              o_28 = ATgetArgument(a_29, 1);
                              i_28 :
                              if(match_cons(b_29, sym_Var_1))
                                {
                                  c_29 = ATgetArgument(b_29, 0);
                                  j_28 :
                                  if(match_cons(o_28, sym_Var_1))
                                    {
                                      p_28 = ATgetArgument(o_28, 0);
                                      {
                                        ATerm j_29 = NULL,k_29 = NULL,m_29 = NULL;
                                        if(((r_28 != NULL) && (r_28 != p_28)))
                                          _fail(p_28);
                                        else
                                          r_28 = p_28;
                                        {
                                          if(((j_29 != NULL) && (j_29 != d_29)))
                                            _fail(d_29);
                                          else
                                            j_29 = d_29;
                                          {
                                            ATerm u_10;
                                            u_10 = t;
                                            {
                                              ATerm l_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(v_28));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          l_29 = t;
                                                          if(((k_29 != NULL) && (k_29 != l_29)))
                                                            _fail(l_29);
                                                          else
                                                            k_29 = l_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = u_10;
                                            {
                                              ATerm n_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(j_29));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  n_29 = t;
                                                  if(((m_29 != NULL) && (m_29 != n_29)))
                                                    _fail(n_29);
                                                  else
                                                    m_29 = n_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(m_29)));
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
                              if(match_cons(a_29, sym_Assign_1))
                                {
                                  b_29 = ATgetArgument(a_29, 0);
                                  k_28 :
                                  if(match_cons(b_29, sym_Var_1))
                                    {
                                      c_29 = ATgetArgument(b_29, 0);
                                      {
                                        ATerm s_29 = NULL,u_29 = NULL;
                                        ATerm v_10;
                                        v_10 = t;
                                        {
                                          ATerm t_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(v_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      t_29 = t;
                                                      if(((s_29 != NULL) && (s_29 != t_29)))
                                                        _fail(t_29);
                                                      else
                                                        s_29 = t_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = v_10;
                                        {
                                          ATerm v_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(d_29));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              v_29 = t;
                                              if(((u_29 != NULL) && (u_29 != v_29)))
                                                _fail(v_29);
                                              else
                                                u_29 = v_29;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(u_29)));
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
                  if(match_cons(y_28, sym_Assign_2))
                    {
                      q_28 = ATgetArgument(y_28, 0);
                      s_28 = ATgetArgument(y_28, 1);
                      l_28 :
                      if(match_cons(q_28, sym_Var_1))
                        {
                          r_28 = ATgetArgument(q_28, 0);
                          m_28 :
                          if(match_cons(s_28, sym_Var_1))
                            {
                              t_28 = ATgetArgument(s_28, 0);
                              {
                                ATerm a_30 = NULL,c_30 = NULL;
                                ATerm w_10;
                                w_10 = t;
                                {
                                  ATerm b_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), (ATerm) ATinsert(ATempty, not_null(r_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          b_30 = t;
                                          if(((a_30 != NULL) && (a_30 != b_30)))
                                            _fail(b_30);
                                          else
                                            a_30 = b_30;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = w_10;
                                {
                                  ATerm d_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(r_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_28))), not_null(z_28));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      d_30 = t;
                                      if(((c_30 != NULL) && (c_30 != d_30)))
                                        _fail(d_30);
                                      else
                                        c_30 = d_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_30), not_null(c_30));
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
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  n_31 = t;
  l_31 :
  if(match_cons(n_31, sym_Seq_2))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      m_31 :
      if(match_cons(p_31, sym_Let_2))
        {
          q_31 = ATgetArgument(p_31, 0);
          r_31 = ATgetArgument(p_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_31), not_null(r_31)));
        }
      else
        {
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
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_Cong_2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      {
        ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,m_36 = NULL,o_36 = NULL,q_36 = NULL;
        ATerm z_10;
        z_10 = t;
        {
          ATerm y_32 = NULL;
          t = not_null(p_32);
          {
            ATerm b_33 = NULL;
            t = map_1(t, new_0);
            {
              y_32 = t;
              {
                if(((v_32 != NULL) && (v_32 != y_32)))
                  _fail(y_32);
                else
                  v_32 = y_32;
                {
                  t = not_null(v_32);
                  {
                    ATerm c_33 = NULL;
                    ATerm h_1 (ATerm t)
                    {
                      ATerm z_32 = NULL;
                      ATerm a_33 = NULL;
                      a_33 = t;
                      if(((z_32 != NULL) && (z_32 != a_33)))
                        _fail(a_33);
                      else
                        z_32 = a_33;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_32));
                      return(t);
                    }
                    t = map_1(t, h_1);
                    {
                      b_33 = t;
                      {
                        if(((s_32 != NULL) && (s_32 != b_33)))
                          _fail(b_33);
                        else
                          s_32 = b_33;
                        {
                          ATerm d_33 = NULL;
                          t = new_0(t);
                          {
                            c_33 = t;
                            {
                              if(((t_32 != NULL) && (t_32 != c_33)))
                                _fail(c_33);
                              else
                                t_32 = c_33;
                              {
                                t = not_null(p_32);
                                {
                                  ATerm g_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    d_33 = t;
                                    {
                                      if(((w_32 != NULL) && (w_32 != d_33)))
                                        _fail(d_33);
                                      else
                                        w_32 = d_33;
                                      {
                                        t = not_null(w_32);
                                        {
                                          ATerm h_33 = NULL,l_36 = NULL;
                                          ATerm i_1 (ATerm t)
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
                                          t = map_1(t, i_1);
                                          {
                                            g_33 = t;
                                            {
                                              if(((u_32 != NULL) && (u_32 != g_33)))
                                                _fail(g_33);
                                              else
                                                u_32 = g_33;
                                              {
                                                ATerm i_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), not_null(w_32));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    i_33 = t;
                                                    if(((h_33 != NULL) && (h_33 != i_33)))
                                                      _fail(i_33);
                                                    else
                                                      h_33 = i_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_33), not_null(p_32));
                                                  {
                                                    ATerm j_1 (ATerm t)
                                                    {
                                                      ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,u_35 = NULL;
                                                      j_33 = t;
                                                      g_32 :
                                                      if(match_cons(j_33, sym__2))
                                                        {
                                                          k_33 = ATgetArgument(j_33, 0);
                                                          u_35 = ATgetArgument(j_33, 1);
                                                          h_32 :
                                                          if(match_cons(k_33, sym__2))
                                                            {
                                                              l_33 = ATgetArgument(k_33, 0);
                                                              m_33 = ATgetArgument(k_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_33)))));
                                                            }
                                                          else
                                                            {
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
                                                      l_36 = t;
                                                      if(((x_32 != NULL) && (x_32 != l_36)))
                                                        _fail(l_36);
                                                      else
                                                        x_32 = l_36;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_10;
        {
          ATerm n_11;
          n_11 = t;
          {
            ATerm n_36 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), not_null(w_32));
            {
              t = conc_0(t);
              {
                n_36 = t;
                if(((m_36 != NULL) && (m_36 != n_36)))
                  _fail(n_36);
                else
                  m_36 = n_36;
              }
            }
          }
          t = n_11;
          {
            ATerm o_11;
            o_11 = t;
            {
              ATerm p_36 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_32), not_null(s_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32))));
              {
                t = Mapp2_0(t);
                {
                  p_36 = t;
                  if(((o_36 != NULL) && (o_36 != p_36)))
                    _fail(p_36);
                  else
                    o_36 = p_36;
                }
              }
            }
            t = o_11;
            {
              ATerm r_36 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_32), not_null(u_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32))));
              {
                t = Bapp2_0(t);
                {
                  r_36 = t;
                  if(((q_36 != NULL) && (q_36 != r_36)))
                    _fail(r_36);
                  else
                    q_36 = r_36;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(m_36)), not_null(t_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_32)), not_null(q_36))));
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
  ATerm j_38 = NULL,k_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_Build_1))
    {
      k_38 = ATgetArgument(j_38, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,q_39 = NULL;
            ATerm r_39 = NULL;
            ATerm i_40 = NULL;
            t = new_0(t);
            {
              r_39 = t;
              {
                if(((o_38 != NULL) && (o_38 != r_39)))
                  _fail(r_39);
                else
                  o_38 = r_39;
                {
                  t = not_null(k_38);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      ATerm s_39 = NULL,g_40 = NULL,h_40 = NULL;
                      s_39 = t;
                      v_37 :
                      if(match_cons(s_39, sym_Anno_2))
                        {
                          g_40 = ATgetArgument(s_39, 0);
                          h_40 = ATgetArgument(s_39, 1);
                          {
                            if(((m_38 != NULL) && (m_38 != g_40)))
                              _fail(g_40);
                            else
                              m_38 = g_40;
                            {
                              if(((n_38 != NULL) && (n_38 != h_40)))
                                _fail(h_40);
                              else
                                n_38 = h_40;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_38));
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
                      i_40 = t;
                      if(((q_39 != NULL) && (q_39 != i_40)))
                        _fail(i_40);
                      else
                        q_39 = i_40;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_s_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_38)), not_null(m_38))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_39))));
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm t_11 = t;
              int u_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
                  ATerm w_40 = NULL;
                  ATerm r_41 = NULL;
                  t = new_0(t);
                  {
                    w_40 = t;
                    {
                      if(((l_40 != NULL) && (l_40 != w_40)))
                        _fail(w_40);
                      else
                        l_40 = w_40;
                      {
                        t = not_null(k_38);
                        {
                          ATerm l_1 (ATerm t)
                          {
                            ATerm x_40 = NULL,y_40 = NULL;
                            x_40 = t;
                            c_38 :
                            if(match_cons(x_40, sym_RootApp_1))
                              {
                                y_40 = ATgetArgument(x_40, 0);
                                {
                                  if(((k_40 != NULL) && (k_40 != y_40)))
                                    _fail(y_40);
                                  else
                                    k_40 = y_40;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_40));
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
                            r_41 = t;
                            if(((m_40 != NULL) && (m_40 != r_41)))
                              _fail(r_41);
                            else
                              m_40 = r_41;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_40), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_40))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_40))));
                  LocalPopChoice(u_11);
                }
              else
                {
                  t = t_11;
                  {
                    ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
                    ATerm x_41 = NULL;
                    ATerm b_42 = NULL;
                    t = new_0(t);
                    {
                      x_41 = t;
                      {
                        if(((v_41 != NULL) && (v_41 != x_41)))
                          _fail(x_41);
                        else
                          v_41 = x_41;
                        {
                          t = not_null(k_38);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
                              y_41 = t;
                              g_38 :
                              if(match_cons(y_41, sym_App_2))
                                {
                                  z_41 = ATgetArgument(y_41, 0);
                                  a_42 = ATgetArgument(y_41, 1);
                                  {
                                    if(((t_41 != NULL) && (t_41 != z_41)))
                                      _fail(z_41);
                                    else
                                      t_41 = z_41;
                                    {
                                      if(((u_41 != NULL) && (u_41 != a_42)))
                                        _fail(a_42);
                                      else
                                        u_41 = a_42;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_41));
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
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_41), not_null(u_41), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_41)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_41))));
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
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym__2))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
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
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
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
          n_43 = (ATerm) ATgetNext((ATermList) i_43);
          g_43 :
          if(((ATgetType(o_43) == AT_LIST) && ((ATermList) o_43 != ATempty)))
            {
              p_43 = ATgetFirst((ATermList) o_43);
              q_43 = (ATerm) ATgetNext((ATermList) o_43);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_43), not_null(p_43)), (ATerm) ATmakeAppl(sym__2, not_null(n_43), not_null(q_43)));
            }
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
ATerm genzip_4 (ATerm t, ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm))
{
  ATerm e_44 (ATerm t)
  {
    ATerm y_11 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_114(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = y_11;
        {
          t = r_114(t);
          {
            t = _2(t, t_114, e_44);
            t = s_114(t);
          }
        }
      }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_114 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_114);
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
                                ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,g_47 = NULL,i_47 = NULL,q_47 = NULL;
                                ATerm h_12;
                                h_12 = t;
                                {
                                  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(m_45));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      f_46 = t;
                                      t_44 :
                                      if(((ATgetType(f_46) == AT_LIST) && ((ATermList) f_46 != ATempty)))
                                        {
                                          g_46 = ATgetFirst((ATermList) f_46);
                                          h_46 = (ATerm) ATgetNext((ATermList) f_46);
                                          {
                                            ATerm m_46 = NULL;
                                            if(((r_45 != NULL) && (r_45 != g_46)))
                                              _fail(g_46);
                                            else
                                              r_45 = g_46;
                                            {
                                              if(((c_46 != NULL) && (c_46 != h_46)))
                                                _fail(h_46);
                                              else
                                                c_46 = h_46;
                                              {
                                                ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
                                                ATerm n_1 (ATerm t)
                                                {
                                                  ATerm i_46 = NULL;
                                                  ATerm j_46 = NULL;
                                                  j_46 = t;
                                                  if(((i_46 != NULL) && (i_46 != j_46)))
                                                    _fail(j_46);
                                                  else
                                                    i_46 = j_46;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_46));
                                                  return(t);
                                                }
                                                t = map_1(t, n_1);
                                                {
                                                  m_46 = t;
                                                  {
                                                    if(((s_45 != NULL) && (s_45 != m_46)))
                                                      _fail(m_46);
                                                    else
                                                      s_45 = m_46;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(m_45));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          n_46 = t;
                                                          s_44 :
                                                          if(((ATgetType(n_46) == AT_LIST) && ((ATermList) n_46 != ATempty)))
                                                            {
                                                              o_46 = ATgetFirst((ATermList) n_46);
                                                              p_46 = (ATerm) ATgetNext((ATermList) n_46);
                                                              {
                                                                ATerm s_46 = NULL;
                                                                if(((t_45 != NULL) && (t_45 != o_46)))
                                                                  _fail(o_46);
                                                                else
                                                                  t_45 = o_46;
                                                                {
                                                                  if(((d_46 != NULL) && (d_46 != p_46)))
                                                                    _fail(p_46);
                                                                  else
                                                                    d_46 = p_46;
                                                                  {
                                                                    ATerm t_46 = NULL,f_47 = NULL;
                                                                    ATerm o_1 (ATerm t)
                                                                    {
                                                                      ATerm q_46 = NULL;
                                                                      ATerm r_46 = NULL;
                                                                      r_46 = t;
                                                                      if(((q_46 != NULL) && (q_46 != r_46)))
                                                                        _fail(r_46);
                                                                      else
                                                                        q_46 = r_46;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_46));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, o_1);
                                                                    {
                                                                      s_46 = t;
                                                                      {
                                                                        if(((u_45 != NULL) && (u_45 != s_46)))
                                                                          _fail(s_46);
                                                                        else
                                                                          u_45 = s_46;
                                                                        {
                                                                          ATerm u_46 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_46), not_null(d_46));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              u_46 = t;
                                                                              if(((t_46 != NULL) && (t_46 != u_46)))
                                                                                _fail(u_46);
                                                                              else
                                                                                t_46 = u_46;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(t_46), (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(m_45)));
                                                                            {
                                                                              ATerm p_1 (ATerm t)
                                                                              {
                                                                                ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
                                                                                v_46 = t;
                                                                                p_44 :
                                                                                if(match_cons(v_46, sym__2))
                                                                                  {
                                                                                    w_46 = ATgetArgument(v_46, 0);
                                                                                    z_46 = ATgetArgument(v_46, 1);
                                                                                    q_44 :
                                                                                    if(match_cons(w_46, sym__2))
                                                                                      {
                                                                                        x_46 = ATgetArgument(w_46, 0);
                                                                                        y_46 = ATgetArgument(w_46, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_46))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_46)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                f_47 = t;
                                                                                if(((e_46 != NULL) && (e_46 != f_47)))
                                                                                  _fail(f_47);
                                                                                else
                                                                                  e_46 = f_47;
                                                                              }
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
                                t = h_12;
                                {
                                  ATerm i_12;
                                  i_12 = t;
                                  {
                                    ATerm h_47 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_46), not_null(d_46));
                                    {
                                      t = conc_0(t);
                                      {
                                        h_47 = t;
                                        if(((g_47 != NULL) && (g_47 != h_47)))
                                          _fail(h_47);
                                        else
                                          g_47 = h_47;
                                      }
                                    }
                                  }
                                  t = i_12;
                                  {
                                    ATerm r_12;
                                    r_12 = t;
                                    {
                                      ATerm j_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(j_45), not_null(s_45)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_45))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          j_47 = t;
                                          if(((i_47 != NULL) && (i_47 != j_47)))
                                            _fail(j_47);
                                          else
                                            i_47 = j_47;
                                        }
                                      }
                                    }
                                    t = r_12;
                                    {
                                      ATerm r_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(j_45), not_null(u_45)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_45))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          r_47 = t;
                                          if(((q_47 != NULL) && (q_47 != r_47)))
                                            _fail(r_47);
                                          else
                                            q_47 = r_47;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(g_47)), not_null(t_45)), not_null(r_45)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_46)), not_null(q_47))));
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
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  r_48 :
  if(match_cons(s_48, sym_As_2))
    {
      t_48 = ATgetArgument(s_48, 0);
      u_48 = ATgetArgument(s_48, 1);
      {
        ATerm y_48 = NULL,a_49 = NULL;
        ATerm z_48 = NULL;
        t = SSLgetAnnotations(not_null(s_48));
        {
          z_48 = t;
          if(((y_48 != NULL) && (y_48 != z_48)))
            _fail(z_48);
          else
            y_48 = z_48;
        }
        {
          t = not_null(t_48);
          {
            ATerm c_49 = NULL;
            t = y_88(t);
            {
              a_49 = t;
              {
                t = not_null(u_48);
                {
                  ATerm e_49 = NULL;
                  t = z_88(t);
                  {
                    c_49 = t;
                    {
                      ATerm f_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(a_49), not_null(c_49)), not_null(y_48));
                      {
                        f_49 = t;
                        if(((e_49 != NULL) && (e_49 != f_49)))
                          _fail(f_49);
                        else
                          e_49 = f_49;
                      }
                      t = not_null(e_49);
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
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
  r_49 = t;
  q_49 :
  if(match_cons(r_49, sym_Prim_2))
    {
      s_49 = ATgetArgument(r_49, 0);
      t_49 = ATgetArgument(r_49, 1);
      {
        ATerm x_49 = NULL,z_49 = NULL;
        ATerm y_49 = NULL;
        t = SSLgetAnnotations(not_null(r_49));
        {
          y_49 = t;
          if(((x_49 != NULL) && (x_49 != y_49)))
            _fail(y_49);
          else
            x_49 = y_49;
        }
        {
          t = not_null(s_49);
          {
            ATerm b_50 = NULL;
            t = s_92(t);
            {
              z_49 = t;
              {
                t = not_null(t_49);
                {
                  ATerm d_50 = NULL;
                  t = t_92(t);
                  {
                    b_50 = t;
                    {
                      ATerm e_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(z_49), not_null(b_50)), not_null(x_49));
                      {
                        e_50 = t;
                        if(((d_50 != NULL) && (d_50 != e_50)))
                          _fail(e_50);
                        else
                          d_50 = e_50;
                      }
                      t = not_null(d_50);
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
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym_Explode_2))
    {
      y_50 = ATgetArgument(x_50, 0);
      z_50 = ATgetArgument(x_50, 1);
      {
        ATerm d_51 = NULL,f_51 = NULL;
        ATerm e_51 = NULL;
        t = SSLgetAnnotations(not_null(x_50));
        {
          e_51 = t;
          if(((d_51 != NULL) && (d_51 != e_51)))
            _fail(e_51);
          else
            d_51 = e_51;
        }
        {
          t = not_null(y_50);
          {
            ATerm h_51 = NULL;
            t = u_88(t);
            {
              f_51 = t;
              {
                t = not_null(z_50);
                {
                  ATerm j_51 = NULL;
                  t = v_88(t);
                  {
                    h_51 = t;
                    {
                      ATerm k_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(f_51), not_null(h_51)), not_null(d_51));
                      {
                        k_51 = t;
                        if(((j_51 != NULL) && (j_51 != k_51)))
                          _fail(k_51);
                        else
                          j_51 = k_51;
                      }
                      t = not_null(j_51);
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
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_Op_2))
    {
      z_51 = ATgetArgument(y_51, 0);
      a_52 = ATgetArgument(y_51, 1);
      {
        ATerm e_52 = NULL,g_52 = NULL;
        ATerm f_52 = NULL;
        t = SSLgetAnnotations(not_null(y_51));
        {
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
        }
        {
          t = not_null(z_51);
          {
            ATerm i_52 = NULL;
            t = s_90(t);
            {
              g_52 = t;
              {
                t = not_null(a_52);
                {
                  ATerm k_52 = NULL;
                  t = t_90(t);
                  {
                    i_52 = t;
                    {
                      ATerm l_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(g_52), not_null(i_52)), not_null(e_52));
                      {
                        l_52 = t;
                        if(((k_52 != NULL) && (k_52 != l_52)))
                          _fail(l_52);
                        else
                          k_52 = l_52;
                      }
                      t = not_null(k_52);
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
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_122(t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, h_122);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm c_13 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, h_122);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = c_13;
                  {
                    ATerm e_13 = t;
                    int f_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, h_122);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(f_13);
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm g_13 = t;
                          int t_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_122);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              LocalPopChoice(t_13);
                            }
                          else
                            {
                              t = g_13;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_122);
                                  return(t);
                                }
                                t = As_2(t, _id, w_1);
                              }
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
  ATerm l_53 = NULL,m_53 = NULL;
  l_53 = t;
  k_53 :
  if(match_cons(l_53, sym_Match_1))
    {
      m_53 = ATgetArgument(l_53, 0);
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
            ATerm s_53 = NULL;
            ATerm w_53 = NULL;
            t = new_0(t);
            {
              s_53 = t;
              {
                if(((q_53 != NULL) && (q_53 != s_53)))
                  _fail(s_53);
                else
                  q_53 = s_53;
                {
                  t = not_null(m_53);
                  {
                    ATerm x_1 (ATerm t)
                    {
                      ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
                      t_53 = t;
                      z_52 :
                      if(match_cons(t_53, sym_Anno_2))
                        {
                          u_53 = ATgetArgument(t_53, 0);
                          v_53 = ATgetArgument(t_53, 1);
                          {
                            if(((o_53 != NULL) && (o_53 != u_53)))
                              _fail(u_53);
                            else
                              o_53 = u_53;
                            {
                              if(((p_53 != NULL) && (p_53 != v_53)))
                                _fail(v_53);
                              else
                                p_53 = v_53;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_53)), not_null(o_53));
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
                      w_53 = t;
                      if(((r_53 != NULL) && (r_53 != w_53)))
                        _fail(w_53);
                      else
                        r_53 = w_53;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_53)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_53)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_53))))));
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm x_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
                  ATerm b_54 = NULL;
                  ATerm e_54 = NULL;
                  t = new_0(t);
                  {
                    b_54 = t;
                    {
                      if(((z_53 != NULL) && (z_53 != b_54)))
                        _fail(b_54);
                      else
                        z_53 = b_54;
                      {
                        t = not_null(m_53);
                        {
                          ATerm y_1 (ATerm t)
                          {
                            ATerm c_54 = NULL,d_54 = NULL;
                            c_54 = t;
                            e_53 :
                            if(match_cons(c_54, sym_RootApp_1))
                              {
                                d_54 = ATgetArgument(c_54, 0);
                                {
                                  if(((y_53 != NULL) && (y_53 != d_54)))
                                    _fail(d_54);
                                  else
                                    y_53 = d_54;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53));
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
                            e_54 = t;
                            if(((a_54 != NULL) && (a_54 != e_54)))
                              _fail(e_54);
                            else
                              a_54 = e_54;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53))), not_null(y_53))));
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = x_13;
                  {
                    ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
                    ATerm k_54 = NULL;
                    ATerm o_54 = NULL;
                    t = new_0(t);
                    {
                      k_54 = t;
                      {
                        if(((i_54 != NULL) && (i_54 != k_54)))
                          _fail(k_54);
                        else
                          i_54 = k_54;
                        {
                          t = not_null(m_53);
                          {
                            ATerm z_1 (ATerm t)
                            {
                              ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
                              l_54 = t;
                              i_53 :
                              if(match_cons(l_54, sym_App_2))
                                {
                                  m_54 = ATgetArgument(l_54, 0);
                                  n_54 = ATgetArgument(l_54, 1);
                                  {
                                    if(((h_54 != NULL) && (h_54 != m_54)))
                                      _fail(m_54);
                                    else
                                      h_54 = m_54;
                                    {
                                      if(((g_54 != NULL) && (g_54 != n_54)))
                                        _fail(n_54);
                                      else
                                        g_54 = n_54;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_54));
                                    }
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
                              o_54 = t;
                              if(((j_54 != NULL) && (j_54 != o_54)))
                                _fail(o_54);
                              else
                                j_54 = o_54;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_54))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_54)), not_null(h_54)))));
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
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_cons(h_55, sym_Cong_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      j_55 = ATgetArgument(h_55, 1);
      {
        ATerm m_55 = NULL;
        ATerm q_55 = NULL;
        t = not_null(j_55);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm n_55 = NULL,o_55 = NULL;
            o_55 = t;
            e_55 :
            if(match_cons(o_55, sym_Match_1))
              {
                n_55 = ATgetArgument(o_55, 0);
                t = not_null(n_55);
              }
            else
              {
                if(match_cons(o_55, sym_Id_0))
                  {
                    t = term_z_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, a_2);
          {
            q_55 = t;
            if(((m_55 != NULL) && (m_55 != q_55)))
              _fail(q_55);
            else
              m_55 = q_55;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(i_55), not_null(m_55)));
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
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  w_55 :
  if(match_cons(y_55, sym_Scope_2))
    {
      z_55 = ATgetArgument(y_55, 0);
      a_56 = ATgetArgument(y_55, 1);
      x_55 :
      if(((ATermList) z_55 == ATempty))
        {
          t = not_null(a_56);
        }
      else
        {
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
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  j_56 :
  if(match_cons(z_56, sym_Where_1))
    {
      a_57 = ATgetArgument(z_56, 0);
      k_56 :
      if(match_cons(a_57, sym_Seq_2))
        {
          y_56 = ATgetArgument(a_57, 0);
          u_56 = ATgetArgument(a_57, 1);
          l_56 :
          if(match_cons(y_56, sym_Where_1))
            {
              t_56 = ATgetArgument(y_56, 0);
              m_56 :
              if(match_cons(u_56, sym_Seq_2))
                {
                  v_56 = ATgetArgument(u_56, 0);
                  x_56 = ATgetArgument(u_56, 1);
                  q_56 :
                  if(match_cons(v_56, sym_Build_1))
                    {
                      w_56 = ATgetArgument(v_56, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_56)), not_null(x_56))));
                    }
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
          if(match_cons(a_57, sym_Where_1))
            {
              y_56 = ATgetArgument(a_57, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_56));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(z_56, sym_Test_1))
        {
          a_57 = ATgetArgument(z_56, 0);
          r_56 :
          if(match_cons(a_57, sym_Test_1))
            {
              y_56 = ATgetArgument(a_57, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_56));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(z_56, sym_Not_1))
            {
              a_57 = ATgetArgument(z_56, 0);
              s_56 :
              if(match_cons(a_57, sym_Not_1))
                {
                  y_56 = ATgetArgument(a_57, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_56));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(z_56, sym_LChoice_2))
                {
                  a_57 = ATgetArgument(z_56, 0);
                  b_57 = ATgetArgument(z_56, 1);
                  {
                    if(((a_57 != NULL) && (a_57 != b_57)))
                      _fail(b_57);
                    else
                      a_57 = b_57;
                    t = not_null(a_57);
                  }
                }
              else
                {
                  if(match_cons(z_56, sym_Choice_2))
                    {
                      a_57 = ATgetArgument(z_56, 0);
                      b_57 = ATgetArgument(z_56, 1);
                      {
                        if(((a_57 != NULL) && (a_57 != b_57)))
                          _fail(b_57);
                        else
                          a_57 = b_57;
                        t = not_null(a_57);
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
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL;
  x_57 = t;
  t_57 :
  if(match_cons(x_57, sym_LChoice_2))
    {
      y_57 = ATgetArgument(x_57, 0);
      b_58 = ATgetArgument(x_57, 1);
      u_57 :
      if(match_cons(y_57, sym_LChoice_2))
        {
          z_57 = ATgetArgument(y_57, 0);
          a_58 = ATgetArgument(y_57, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_57), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_58), not_null(b_58)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(x_57, sym_Seq_2))
        {
          y_57 = ATgetArgument(x_57, 0);
          b_58 = ATgetArgument(x_57, 1);
          v_57 :
          if(match_cons(y_57, sym_Seq_2))
            {
              z_57 = ATgetArgument(y_57, 0);
              a_58 = ATgetArgument(y_57, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_57), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_58), not_null(b_58)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(x_57, sym_Choice_2))
            {
              y_57 = ATgetArgument(x_57, 0);
              b_58 = ATgetArgument(x_57, 1);
              w_57 :
              if(match_cons(y_57, sym_Choice_2))
                {
                  z_57 = ATgetArgument(y_57, 0);
                  a_58 = ATgetArgument(y_57, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_57), (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_58), not_null(b_58)));
                }
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
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
  i_59 = t;
  a_59 :
  if(match_cons(i_59, sym_InfixApp_3))
    {
      j_59 = ATgetArgument(i_59, 0);
      f_59 = ATgetArgument(i_59, 1);
      e_59 = ATgetArgument(i_59, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(f_59), (ATerm) ATmakeAppl(sym_Op_2, term_a_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_59)), not_null(j_59))));
    }
  else
    {
      if(match_cons(i_59, sym_BAM_3))
        {
          j_59 = ATgetArgument(i_59, 0);
          f_59 = ATgetArgument(i_59, 1);
          e_59 = ATgetArgument(i_59, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(e_59))), not_null(j_59)), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_59))));
        }
      else
        {
          if(match_cons(i_59, sym_AM_2))
            {
              j_59 = ATgetArgument(i_59, 0);
              f_59 = ATgetArgument(i_59, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_59), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_59)));
            }
          else
            {
              if(match_cons(i_59, sym_MA_2))
                {
                  j_59 = ATgetArgument(i_59, 0);
                  f_59 = ATgetArgument(i_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_59)), not_null(f_59));
                }
              else
                {
                  if(match_cons(i_59, sym_BA_2))
                    {
                      j_59 = ATgetArgument(i_59, 0);
                      f_59 = ATgetArgument(i_59, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_59)), not_null(j_59));
                    }
                  else
                    {
                      if(match_cons(i_59, sym_Lets_2))
                        {
                          j_59 = ATgetArgument(i_59, 0);
                          f_59 = ATgetArgument(i_59, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_59), not_null(f_59));
                        }
                      else
                        {
                          if(match_cons(i_59, sym_LChoices_1))
                            {
                              j_59 = ATgetArgument(i_59, 0);
                              b_59 :
                              if(((ATgetType(j_59) == AT_LIST) && ((ATermList) j_59 != ATempty)))
                                {
                                  g_59 = ATgetFirst((ATermList) j_59);
                                  h_59 = (ATerm) ATgetNext((ATermList) j_59);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_59), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_59)));
                                }
                              else
                                {
                                  if(((ATermList) j_59 == ATempty))
                                    {
                                      t = term_x_7;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(i_59, sym_Choices_1))
                                {
                                  j_59 = ATgetArgument(i_59, 0);
                                  c_59 :
                                  if(((ATgetType(j_59) == AT_LIST) && ((ATermList) j_59 != ATempty)))
                                    {
                                      g_59 = ATgetFirst((ATermList) j_59);
                                      h_59 = (ATerm) ATgetNext((ATermList) j_59);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_59), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_59)));
                                    }
                                  else
                                    {
                                      if(((ATermList) j_59 == ATempty))
                                        {
                                          t = term_x_7;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(i_59, sym_Seqs_1))
                                    {
                                      j_59 = ATgetArgument(i_59, 0);
                                      d_59 :
                                      if(((ATgetType(j_59) == AT_LIST) && ((ATermList) j_59 != ATempty)))
                                        {
                                          g_59 = ATgetFirst((ATermList) j_59);
                                          h_59 = (ATerm) ATgetNext((ATermList) j_59);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_59), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_59)));
                                        }
                                      else
                                        {
                                          if(((ATermList) j_59 == ATempty))
                                            {
                                              t = term_b_14;
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
  ATerm u_60 = NULL,v_60 = NULL;
  u_60 = t;
  s_60 :
  if(match_cons(u_60, sym_Where_1))
    {
      v_60 = ATgetArgument(u_60, 0);
      t_60 :
      if(match_cons(v_60, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
  a_61 = t;
  y_60 :
  if(match_cons(a_61, sym_LChoice_2))
    {
      b_61 = ATgetArgument(a_61, 0);
      c_61 = ATgetArgument(a_61, 1);
      z_60 :
      if(match_cons(c_61, sym_Fail_0))
        {
          t = not_null(b_61);
        }
      else
        {
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
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  i_61 = t;
  g_61 :
  if(match_cons(i_61, sym_LChoice_2))
    {
      j_61 = ATgetArgument(i_61, 0);
      k_61 = ATgetArgument(i_61, 1);
      h_61 :
      if(match_cons(j_61, sym_Fail_0))
        {
          t = not_null(k_61);
        }
      else
        {
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
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
  q_61 = t;
  o_61 :
  if(match_cons(q_61, sym_Choice_2))
    {
      r_61 = ATgetArgument(q_61, 0);
      s_61 = ATgetArgument(q_61, 1);
      p_61 :
      if(match_cons(s_61, sym_Fail_0))
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
ATerm F11_0 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
  y_61 = t;
  w_61 :
  if(match_cons(y_61, sym_Choice_2))
    {
      z_61 = ATgetArgument(y_61, 0);
      a_62 = ATgetArgument(y_61, 1);
      x_61 :
      if(match_cons(z_61, sym_Fail_0))
        {
          t = not_null(a_62);
        }
      else
        {
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
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
  g_62 = t;
  f_62 :
  if(match_cons(g_62, sym_Cong_2))
    {
      h_62 = ATgetArgument(g_62, 0);
      i_62 = ATgetArgument(g_62, 1);
      {
        t = not_null(i_62);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm p_62 = NULL;
            p_62 = t;
            e_62 :
            if(!(match_cons(p_62, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, b_2);
        }
        t = term_x_7;
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
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  s_62 :
  if(match_cons(u_62, sym_Path_2))
    {
      v_62 = ATgetArgument(u_62, 0);
      w_62 = ATgetArgument(u_62, 1);
      t_62 :
      if(match_cons(w_62, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm c_63 = NULL,d_63 = NULL;
  c_63 = t;
  a_63 :
  if(match_cons(c_63, sym_One_1))
    {
      d_63 = ATgetArgument(c_63, 0);
      b_63 :
      if(match_cons(d_63, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm i_63 = NULL,n_63 = NULL;
  i_63 = t;
  g_63 :
  if(match_cons(i_63, sym_Some_1))
    {
      n_63 = ATgetArgument(i_63, 0);
      h_63 :
      if(match_cons(n_63, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  q_63 :
  if(match_cons(s_63, sym_Rec_2))
    {
      t_63 = ATgetArgument(s_63, 0);
      u_63 = ATgetArgument(s_63, 1);
      r_63 :
      if(match_cons(u_63, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  l_64 = t;
  y_63 :
  if(match_cons(l_64, sym_Scope_2))
    {
      m_64 = ATgetArgument(l_64, 0);
      n_64 = ATgetArgument(l_64, 1);
      z_63 :
      if(match_cons(n_64, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t_64 = t;
  r_64 :
  if(match_cons(t_64, sym_Seq_2))
    {
      u_64 = ATgetArgument(t_64, 0);
      v_64 = ATgetArgument(t_64, 1);
      s_64 :
      if(match_cons(u_64, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm b_65 = NULL,c_65 = NULL;
  b_65 = t;
  z_64 :
  if(match_cons(b_65, sym_Not_1))
    {
      c_65 = ATgetArgument(b_65, 0);
      a_65 :
      if(match_cons(c_65, sym_Fail_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm h_65 = NULL,i_65 = NULL;
  h_65 = t;
  f_65 :
  if(match_cons(h_65, sym_Test_1))
    {
      i_65 = ATgetArgument(h_65, 0);
      g_65 :
      if(match_cons(i_65, sym_Fail_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm c_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = c_14;
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            {
              ATerm q_14 = t;
              int r_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(r_14);
                }
              else
                {
                  t = q_14;
                  {
                    ATerm s_14 = t;
                    int t_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(t_14);
                      }
                    else
                      {
                        t = s_14;
                        {
                          ATerm u_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = u_14;
                              {
                                ATerm l_15 = t;
                                int m_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(m_15);
                                  }
                                else
                                  {
                                    t = l_15;
                                    {
                                      ATerm s_15 = t;
                                      int t_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(t_15);
                                        }
                                      else
                                        {
                                          t = s_15;
                                          {
                                            ATerm v_15 = t;
                                            int w_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(w_15);
                                              }
                                            else
                                              {
                                                t = v_15;
                                                {
                                                  ATerm x_15 = t;
                                                  int y_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(y_15);
                                                    }
                                                  else
                                                    {
                                                      t = x_15;
                                                      {
                                                        ATerm n_16 = t;
                                                        int o_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(o_16);
                                                          }
                                                        else
                                                          {
                                                            t = n_16;
                                                            {
                                                              ATerm p_16 = t;
                                                              int q_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(q_16);
                                                                }
                                                              else
                                                                {
                                                                  t = p_16;
                                                                  {
                                                                    ATerm r_16 = t;
                                                                    int s_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
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
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(u_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_16;
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
  ATerm q_65 = NULL,r_65 = NULL;
  q_65 = t;
  l_65 :
  if(match_cons(q_65, sym_Match_1))
    {
      r_65 = ATgetArgument(q_65, 0);
      p_65 :
      if(match_cons(r_65, sym_Wld_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm b_66 = NULL,c_66 = NULL;
  b_66 = t;
  z_65 :
  if(match_cons(b_66, sym_Where_1))
    {
      c_66 = ATgetArgument(b_66, 0);
      a_66 :
      if(match_cons(c_66, sym_Id_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm l_66 = NULL,m_66 = NULL;
  l_66 = t;
  j_66 :
  if(match_cons(l_66, sym_All_1))
    {
      m_66 = ATgetArgument(l_66, 0);
      k_66 :
      if(match_cons(m_66, sym_Id_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  t_66 = t;
  r_66 :
  if(match_cons(t_66, sym_Rec_2))
    {
      u_66 = ATgetArgument(t_66, 0);
      v_66 = ATgetArgument(t_66, 1);
      s_66 :
      if(match_cons(v_66, sym_Id_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
  b_67 = t;
  z_66 :
  if(match_cons(b_67, sym_Scope_2))
    {
      c_67 = ATgetArgument(b_67, 0);
      d_67 = ATgetArgument(b_67, 1);
      a_67 :
      if(match_cons(d_67, sym_Id_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  h_67 :
  if(match_cons(j_67, sym_LChoice_2))
    {
      k_67 = ATgetArgument(j_67, 0);
      l_67 = ATgetArgument(j_67, 1);
      i_67 :
      if(match_cons(k_67, sym_Id_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
  r_67 = t;
  p_67 :
  if(match_cons(r_67, sym_Seq_2))
    {
      s_67 = ATgetArgument(r_67, 0);
      t_67 = ATgetArgument(r_67, 1);
      q_67 :
      if(match_cons(t_67, sym_Id_0))
        {
          t = not_null(s_67);
        }
      else
        {
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
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  x_67 :
  if(match_cons(z_67, sym_Seq_2))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      y_67 :
      if(match_cons(a_68, sym_Id_0))
        {
          t = not_null(b_68);
        }
      else
        {
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
  ATerm h_68 = NULL,i_68 = NULL;
  h_68 = t;
  f_68 :
  if(match_cons(h_68, sym_Not_1))
    {
      i_68 = ATgetArgument(h_68, 0);
      g_68 :
      if(match_cons(i_68, sym_Id_0))
        {
          t = term_x_7;
        }
      else
        {
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
  ATerm n_68 = NULL,o_68 = NULL;
  n_68 = t;
  l_68 :
  if(match_cons(n_68, sym_Test_1))
    {
      o_68 = ATgetArgument(n_68, 0);
      m_68 :
      if(match_cons(o_68, sym_Id_0))
        {
          t = term_b_14;
        }
      else
        {
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
  ATerm v_16 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(d_17);
    }
  else
    {
      t = v_16;
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm i_17 = t;
              int j_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(j_17);
                }
              else
                {
                  t = i_17;
                  {
                    ATerm m_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = m_17;
                        {
                          ATerm p_17 = t;
                          int q_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(q_17);
                            }
                          else
                            {
                              t = p_17;
                              {
                                ATerm c_18 = t;
                                int d_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(d_18);
                                  }
                                else
                                  {
                                    t = c_18;
                                    {
                                      ATerm e_18 = t;
                                      int f_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(f_18);
                                        }
                                      else
                                        {
                                          t = e_18;
                                          {
                                            ATerm g_18 = t;
                                            int h_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(h_18);
                                              }
                                            else
                                              {
                                                t = g_18;
                                                {
                                                  ATerm p_18 = t;
                                                  int q_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(q_18);
                                                    }
                                                  else
                                                    {
                                                      t = p_18;
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
  ATerm r_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = r_18;
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
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
                    ATerm c_19 = t;
                    int k_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(k_19);
                      }
                    else
                      {
                        t = c_19;
                        {
                          ATerm l_19 = t;
                          int m_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(m_19);
                            }
                          else
                            {
                              t = l_19;
                              {
                                ATerm n_19 = t;
                                int y_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(y_19);
                                  }
                                else
                                  {
                                    t = n_19;
                                    {
                                      ATerm a_20 = t;
                                      int b_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
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
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(d_20);
                                              }
                                            else
                                              {
                                                t = c_20;
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
  ATerm e_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(g_20);
    }
  else
    {
      t = e_20;
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm n_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = n_20;
                  {
                    ATerm q_20 = t;
                    int r_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(r_20);
                      }
                    else
                      {
                        t = q_20;
                        {
                          ATerm x_20 = t;
                          int z_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(z_20);
                            }
                          else
                            {
                              t = x_20;
                              {
                                ATerm a_21 = t;
                                int b_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(b_21);
                                  }
                                else
                                  {
                                    t = a_21;
                                    {
                                      ATerm c_21 = t;
                                      int d_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(d_21);
                                        }
                                      else
                                        {
                                          t = c_21;
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
  ATerm q_68 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_103(t);
        t = q_68(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = u_103(t);
      }
    return(t);
  }
  t = q_68(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_103 (ATerm))
{
  t = repeat_2(t, w_103, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm n_117 (ATerm))
{
  ATerm r_68 (ATerm t)
  {
    t = n_117(t);
    {
      t = _all(t, r_68);
      t = n_117(t);
    }
    return(t);
  }
  t = r_68(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, d_2);
    return(t);
  }
  t = downup_1(t, c_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  z_68 = t;
  y_68 :
  if(match_cons(z_68, sym_SDef_3))
    {
      a_69 = ATgetArgument(z_68, 0);
      b_69 = ATgetArgument(z_68, 1);
      c_69 = ATgetArgument(z_68, 2);
      {
        ATerm h_69 = NULL,j_69 = NULL;
        ATerm i_69 = NULL;
        t = SSLgetAnnotations(not_null(z_68));
        {
          i_69 = t;
          if(((h_69 != NULL) && (h_69 != i_69)))
            _fail(i_69);
          else
            h_69 = i_69;
        }
        {
          t = not_null(a_69);
          {
            ATerm l_69 = NULL;
            t = p_91(t);
            {
              j_69 = t;
              {
                t = not_null(b_69);
                {
                  ATerm n_69 = NULL;
                  t = q_91(t);
                  {
                    l_69 = t;
                    {
                      t = not_null(c_69);
                      {
                        ATerm p_69 = NULL;
                        t = r_91(t);
                        {
                          n_69 = t;
                          {
                            ATerm q_69 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(j_69), not_null(l_69), not_null(n_69)), not_null(h_69));
                            {
                              q_69 = t;
                              if(((p_69 != NULL) && (p_69 != q_69)))
                                _fail(q_69);
                              else
                                p_69 = q_69;
                            }
                            t = not_null(p_69);
                          }
                        }
                      }
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
  ATerm e_70 = NULL,f_70 = NULL;
  e_70 = t;
  d_70 :
  if(match_cons(e_70, sym_Strategies_1))
    {
      f_70 = ATgetArgument(e_70, 0);
      {
        ATerm t_70 = NULL,x_70 = NULL;
        ATerm v_70 = NULL;
        t = SSLgetAnnotations(not_null(e_70));
        {
          v_70 = t;
          if(((t_70 != NULL) && (t_70 != v_70)))
            _fail(v_70);
          else
            t_70 = v_70;
        }
        {
          t = not_null(f_70);
          {
            ATerm z_70 = NULL;
            t = c_90(t);
            {
              x_70 = t;
              {
                ATerm a_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(x_70)), not_null(t_70));
                {
                  a_71 = t;
                  if(((z_70 != NULL) && (z_70 != a_71)))
                    _fail(a_71);
                  else
                    z_70 = a_71;
                }
                t = not_null(z_70);
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
  ATerm p_71 = NULL,q_71 = NULL;
  p_71 = t;
  o_71 :
  if(match_cons(p_71, sym_Specification_1))
    {
      q_71 = ATgetArgument(p_71, 0);
      {
        ATerm u_71 = NULL,w_71 = NULL;
        ATerm v_71 = NULL;
        t = SSLgetAnnotations(not_null(p_71));
        {
          v_71 = t;
          if(((u_71 != NULL) && (u_71 != v_71)))
            _fail(v_71);
          else
            u_71 = v_71;
        }
        {
          t = not_null(q_71);
          {
            ATerm y_71 = NULL;
            t = e_90(t);
            {
              w_71 = t;
              {
                ATerm z_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(w_71)), not_null(u_71));
                {
                  z_71 = t;
                  if(((y_71 != NULL) && (y_71 != z_71)))
                    _fail(z_71);
                  else
                    y_71 = z_71;
                }
                t = not_null(y_71);
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
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          ATerm i_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, k_122);
            return(t);
          }
          t = map_1(t, i_2);
          return(t);
        }
        t = Strategies_1(t, h_2);
        return(t);
      }
      t = Cons_2(t, g_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, f_2);
    return(t);
  }
  t = Specification_1(t, e_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  e_73 = t;
  d_73 :
  if(match_cons(e_73, sym__2))
    {
      f_73 = ATgetArgument(e_73, 0);
      g_73 = ATgetArgument(e_73, 1);
      {
        ATerm k_73 = NULL,r_73 = NULL;
        ATerm q_73 = NULL;
        t = SSLgetAnnotations(not_null(e_73));
        {
          q_73 = t;
          if(((k_73 != NULL) && (k_73 != q_73)))
            _fail(q_73);
          else
            k_73 = q_73;
        }
        {
          t = not_null(f_73);
          {
            ATerm t_73 = NULL;
            t = j_80(t);
            {
              r_73 = t;
              {
                t = not_null(g_73);
                {
                  ATerm e_74 = NULL;
                  t = k_80(t);
                  {
                    t_73 = t;
                    {
                      ATerm k_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_73), not_null(t_73)), not_null(k_73));
                      {
                        k_74 = t;
                        if(((e_74 != NULL) && (e_74 != k_74)))
                          _fail(k_74);
                        else
                          e_74 = k_74;
                      }
                      t = not_null(e_74);
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
  ATerm b_75 = NULL;
  ATerm o_21;
  o_21 = t;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm c_75 = NULL,d_75 = NULL;
      c_75 = t;
      a_75 :
      if(match_cons(c_75, sym_Program_1))
        {
          d_75 = ATgetArgument(c_75, 0);
          if(((b_75 != NULL) && (b_75 != d_75)))
            _fail(d_75);
          else
            b_75 = d_75;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), not_null(b_75)), term_q_21));
      {
        t = printnl_0(t);
        {
          t = term_z_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  h_75 = t;
  g_75 :
  if(match_cons(h_75, sym__2))
    {
      i_75 = ATgetArgument(h_75, 0);
      j_75 = ATgetArgument(h_75, 1);
      {
        ATerm a_22;
        a_22 = t;
        t = SSL_printnl(not_null(i_75), not_null(j_75));
        t = a_22;
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
  ATerm o_75 = NULL;
  o_75 = t;
  t = SSL_implode_string(not_null(o_75));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
        t_75 = t;
        s_75 :
        if(((ATgetType(t_75) == AT_LIST) && ((ATermList) t_75 != ATempty)))
          {
            u_75 = ATgetFirst((ATermList) t_75);
            v_75 = (ATerm) ATgetNext((ATermList) t_75);
            {
              t = not_null(u_75);
              {
                ATerm k_2 (ATerm t)
                {
                  t = not_null(v_75);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm f_76 = NULL;
  ATerm h_76 = NULL;
  f_76 = t;
  {
    ATerm i_76 = NULL;
    ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL;
    t = not_null(f_76);
    {
      i_76 = t;
      {
        t = SSL_explode_term(not_null(i_76));
        {
          k_76 = t;
          d_76 :
          if(match_cons(k_76, sym__2))
            {
              l_76 = ATgetArgument(k_76, 0);
              m_76 = ATgetArgument(k_76, 1);
              e_76 :
              if(match_string(l_76, ""))
                {
                  if(((h_76 != NULL) && (h_76 != m_76)))
                    _fail(m_76);
                  else
                    h_76 = m_76;
                }
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
      t = not_null(h_76);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_113 (ATerm))
{
  ATerm q_76 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_76);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          t = Nil_0(t);
          t = g_113(t);
        }
      }
    return(t);
  }
  t = q_76(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
  t_76 = t;
  s_76 :
  if(match_cons(t_76, sym__2))
    {
      u_76 = ATgetArgument(t_76, 0);
      v_76 = ATgetArgument(t_76, 1);
      {
        t = not_null(u_76);
        {
          ATerm l_2 (ATerm t)
          {
            t = not_null(v_76);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm f_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = f_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_77 = NULL;
  a_77 = t;
  t = SSL_explode_string(not_null(a_77));
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
  ATerm i_22;
  i_22 = t;
  {
    ATerm f_77 = NULL,h_77 = NULL;
    ATerm k_22;
    k_22 = t;
    {
      ATerm g_77 = NULL;
      t = s_99(t);
      {
        g_77 = t;
        if(((f_77 != NULL) && (f_77 != g_77)))
          _fail(g_77);
        else
          f_77 = g_77;
      }
    }
    t = k_22;
    {
      ATerm i_77 = NULL;
      i_77 = t;
      if(((h_77 != NULL) && (h_77 != i_77)))
        _fail(i_77);
      else
        h_77 = i_77;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_77)), not_null(f_77)));
        t = printnl_0(t);
      }
    }
  }
  t = i_22;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_77 = NULL;
  m_77 = t;
  t = SSL_is_string(not_null(m_77));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm u_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_2);
            LocalPopChoice(y_22);
          }
        else
          {
            t = u_22;
            {
              ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
              v_77 = t;
              u_77 :
              if(match_cons(v_77, sym_Path_1))
                {
                  w_77 = ATgetArgument(v_77, 0);
                  t = not_null(w_77);
                }
              else
                {
                  if(match_cons(v_77, sym_Var_1))
                    {
                      w_77 = ATgetArgument(v_77, 0);
                      {
                        t = not_null(w_77);
                        {
                          ATerm e_23 = t;
                          int k_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(k_23);
                            }
                          else
                            {
                              t = e_23;
                              {
                                ATerm n_2 (ATerm t)
                                {
                                  t = term_l_23;
                                  return(t);
                                }
                                t = debug_1(t, n_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_77, sym_Prefix_2))
                        {
                          w_77 = ATgetArgument(v_77, 0);
                          x_77 = ATgetArgument(v_77, 1);
                          {
                            ATerm c_78 = NULL,e_78 = NULL;
                            ATerm m_23;
                            m_23 = t;
                            {
                              ATerm d_78 = NULL;
                              t = not_null(w_77);
                              {
                                t = eval_config_0(t);
                                {
                                  d_78 = t;
                                  if(((c_78 != NULL) && (c_78 != d_78)))
                                    _fail(d_78);
                                  else
                                    c_78 = d_78;
                                }
                              }
                            }
                            t = m_23;
                            {
                              ATerm f_78 = NULL;
                              t = not_null(x_77);
                              {
                                t = eval_config_0(t);
                                {
                                  f_78 = t;
                                  if(((e_78 != NULL) && (e_78 != f_78)))
                                    _fail(f_78);
                                  else
                                    e_78 = f_78;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_78), not_null(e_78));
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
  ATerm n_78 = NULL;
  n_78 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_23, not_null(n_78));
    {
      t = table_get_0(t);
      {
        ATerm o_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_23;
            o_23 = t;
            {
              ATerm p_78 = NULL;
              ATerm q_78 = NULL;
              q_78 = t;
              if(((p_78 != NULL) && (p_78 != q_78)))
                _fail(q_78);
              else
                p_78 = q_78;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_23, not_null(n_78), not_null(p_78));
                t = table_put_0(t);
              }
            }
            t = o_23;
          }
          return(t);
        }
        t = try_1(t, o_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm p_23;
    p_23 = t;
    {
      ATerm u_78 = NULL;
      ATerm v_78 = NULL;
      t = term_q_23;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_78), term_y_23);
        t = geq_0(t);
      }
    }
    t = p_23;
    t = w_96(t);
    return(t);
  }
  t = try_1(t, p_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  y_78 :
  if(match_cons(z_78, sym__2))
    {
      a_79 = ATgetArgument(z_78, 0);
      b_79 = ATgetArgument(z_78, 1);
      t = SSL_WriteToTextFile(not_null(a_79), not_null(b_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
  h_79 = t;
  g_79 :
  if(match_cons(h_79, sym__2))
    {
      i_79 = ATgetArgument(h_79, 0);
      j_79 = ATgetArgument(h_79, 1);
      t = SSL_WriteToBinaryFile(not_null(i_79), not_null(j_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_79 = NULL;
  ATerm a_24;
  a_24 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm c_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_2 (ATerm t)
          {
            ATerm s_79 = NULL,t_79 = NULL;
            s_79 = t;
            o_79 :
            if(match_cons(s_79, sym_Output_1))
              {
                t_79 = ATgetArgument(s_79, 0);
                if(((r_79 != NULL) && (r_79 != t_79)))
                  _fail(t_79);
                else
                  r_79 = t_79;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_2);
          LocalPopChoice(h_24);
        }
      else
        {
          t = c_24;
          {
            ATerm u_79 = NULL;
            t = term_i_24;
            {
              u_79 = t;
              if(((r_79 != NULL) && (r_79 != u_79)))
                _fail(u_79);
              else
                r_79 = u_79;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_2, _id);
  }
  t = a_24;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(r_79);
        return(t);
      }
      t = split_2(t, t_2, _id);
      return(t);
    }
    t = _2(t, _id, s_2);
    {
      ATerm j_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm v_79 = NULL;
              v_79 = t;
              q_79 :
              if(!(match_cons(v_79, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_2);
            return(t);
          }
          t = _2(t, u_2, WriteToBinaryFile_0);
          LocalPopChoice(k_24);
        }
      else
        {
          t = j_24;
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
  ATerm b_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  ATerm p_24;
  p_24 = t;
  t = dtime_0(t);
  t = p_24;
  {
    t = c_99(t);
    {
      ATerm q_24;
      q_24 = t;
      {
        ATerm c_80 = NULL;
        t = dtime_0(t);
        {
          c_80 = t;
          if(((b_80 != NULL) && (b_80 != c_80)))
            _fail(c_80);
          else
            b_80 = c_80;
        }
      }
      t = q_24;
      {
        d_80 = t;
        a_80 :
        if(match_cons(d_80, sym__2))
          {
            e_80 = ATgetArgument(d_80, 0);
            f_80 = ATgetArgument(d_80, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_80))), not_null(f_80));
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
  ATerm n_80 = NULL;
  n_80 = t;
  t = SSL_ReadFromFile(not_null(n_80));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_116 (ATerm), ATerm f_116 (ATerm))
{
  ATerm s_80 = NULL,u_80 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    ATerm t_80 = NULL;
    t = e_116(t);
    {
      t_80 = t;
      if(((s_80 != NULL) && (s_80 != t_80)))
        _fail(t_80);
      else
        s_80 = t_80;
    }
  }
  t = s_24;
  {
    ATerm v_80 = NULL;
    t = f_116(t);
    {
      v_80 = t;
      if(((u_80 != NULL) && (u_80 != v_80)))
        _fail(v_80);
      else
        u_80 = v_80;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_80), not_null(u_80));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_81 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 (ATerm t)
        {
          ATerm c_81 = NULL,d_81 = NULL;
          c_81 = t;
          z_80 :
          if(match_cons(c_81, sym_Input_1))
            {
              d_81 = ATgetArgument(c_81, 0);
              if(((b_81 != NULL) && (b_81 != d_81)))
                _fail(d_81);
              else
                b_81 = d_81;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_2);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm e_81 = NULL;
          t = term_a_25;
          {
            e_81 = t;
            if(((b_81 != NULL) && (b_81 != e_81)))
              _fail(e_81);
            else
              b_81 = e_81;
          }
        }
      }
  }
  t = t_24;
  {
    ATerm x_2 (ATerm t)
    {
      t = not_null(b_81);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_2);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  t = SSL_string_to_int(not_null(i_81));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  q_81 = t;
  o_81 :
  if(match_string(q_81, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_81) == AT_LIST) && ((ATermList) q_81 != ATempty)))
        {
          r_81 = ATgetFirst((ATermList) q_81);
          s_81 = (ATerm) ATgetNext((ATermList) q_81);
          p_81 :
          if(((ATgetType(s_81) == AT_LIST) && ((ATermList) s_81 != ATempty)))
            {
              t_81 = ATgetFirst((ATermList) s_81);
              u_81 = (ATerm) ATgetNext((ATermList) s_81);
              {
                ATerm a_82 = NULL;
                ATerm b_25;
                b_25 = t;
                {
                  t = not_null(r_81);
                  t = j_0(t);
                }
                t = b_25;
                {
                  ATerm b_82 = NULL;
                  t = not_null(t_81);
                  {
                    t = k_0(t);
                    {
                      b_82 = t;
                      if(((a_82 != NULL) && (a_82 != b_82)))
                        _fail(b_82);
                      else
                        a_82 = b_82;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_81)), not_null(a_82));
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
  ATerm c_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm u_82 = NULL;
        u_82 = t;
        f_82 :
        if(!(match_string(u_82, "-i")))
          {
            if(!(match_string(u_82, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        ATerm x_82 = NULL;
        ATerm g_25;
        g_25 = t;
        {
          ATerm v_82 = NULL;
          ATerm w_82 = NULL;
          w_82 = t;
          if(((v_82 != NULL) && (v_82 != w_82)))
            _fail(w_82);
          else
            v_82 = w_82;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(v_82));
            t = set_config_0(t);
          }
        }
        t = g_25;
        {
          ATerm y_82 = NULL;
          y_82 = t;
          if(((x_82 != NULL) && (x_82 != y_82)))
            _fail(y_82);
          else
            x_82 = y_82;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_82));
        }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_j_25;
        return(t);
      }
      t = ArgOption_3(t, y_2, z_2, a_3);
      LocalPopChoice(e_25);
    }
  else
    {
      t = c_25;
      {
        ATerm k_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm z_82 = NULL;
              z_82 = t;
              i_82 :
              if(!(match_string(z_82, "-o")))
                {
                  if(!(match_string(z_82, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              ATerm c_83 = NULL;
              ATerm q_25;
              q_25 = t;
              {
                ATerm a_83 = NULL;
                ATerm b_83 = NULL;
                b_83 = t;
                if(((a_83 != NULL) && (a_83 != b_83)))
                  _fail(b_83);
                else
                  a_83 = b_83;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_25, not_null(a_83));
                  t = set_config_0(t);
                }
              }
              t = q_25;
              {
                ATerm d_83 = NULL;
                d_83 = t;
                if(((c_83 != NULL) && (c_83 != d_83)))
                  _fail(d_83);
                else
                  c_83 = d_83;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_83));
              }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              t = term_t_25;
              return(t);
            }
            t = ArgOption_3(t, b_3, c_3, d_3);
            LocalPopChoice(p_25);
          }
        else
          {
            t = k_25;
            {
              ATerm u_25 = t;
              int v_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm e_83 = NULL;
                    e_83 = t;
                    l_82 :
                    if(!(match_string(e_83, "-S")))
                      {
                        if(!(match_string(e_83, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm f_3 (ATerm t)
                  {
                    t = term_x_25;
                    t = set_config_0(t);
                    t = term_y_25;
                    return(t);
                  }
                  ATerm g_3 (ATerm t)
                  {
                    t = term_z_25;
                    return(t);
                  }
                  t = Option_3(t, e_3, f_3, g_3);
                  LocalPopChoice(v_25);
                }
              else
                {
                  t = u_25;
                  {
                    ATerm a_26 = t;
                    int b_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_3 (ATerm t)
                        {
                          ATerm f_83 = NULL;
                          f_83 = t;
                          m_82 :
                          if(!(match_string(f_83, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm i_3 (ATerm t)
                        {
                          ATerm i_83 = NULL;
                          ATerm f_26;
                          f_26 = t;
                          {
                            ATerm g_83 = NULL;
                            ATerm h_83 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_83 = t;
                              if(((g_83 != NULL) && (g_83 != h_83)))
                                _fail(h_83);
                              else
                                g_83 = h_83;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(g_83));
                              t = set_config_0(t);
                            }
                          }
                          t = f_26;
                          {
                            ATerm j_83 = NULL;
                            j_83 = t;
                            if(((i_83 != NULL) && (i_83 != j_83)))
                              _fail(j_83);
                            else
                              i_83 = j_83;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_83));
                          }
                          return(t);
                        }
                        ATerm k_3 (ATerm t)
                        {
                          t = term_g_26;
                          return(t);
                        }
                        t = ArgOption_3(t, h_3, i_3, k_3);
                        LocalPopChoice(b_26);
                      }
                    else
                      {
                        t = a_26;
                        {
                          ATerm k_26 = t;
                          int n_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_3 (ATerm t)
                              {
                                ATerm k_83 = NULL;
                                k_83 = t;
                                p_82 :
                                if(!(match_string(k_83, "-k")))
                                  {
                                    if(!(match_string(k_83, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm m_3 (ATerm t)
                              {
                                ATerm o_26;
                                o_26 = t;
                                {
                                  ATerm l_83 = NULL;
                                  ATerm m_83 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    m_83 = t;
                                    if(((l_83 != NULL) && (l_83 != m_83)))
                                      _fail(m_83);
                                    else
                                      l_83 = m_83;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_s_26, not_null(l_83));
                                    t = set_config_0(t);
                                  }
                                }
                                t = o_26;
                                return(t);
                              }
                              ATerm n_3 (ATerm t)
                              {
                                t = term_v_26;
                                return(t);
                              }
                              t = ArgOption_3(t, l_3, m_3, n_3);
                              LocalPopChoice(n_26);
                            }
                          else
                            {
                              t = k_26;
                              {
                                ATerm w_26 = t;
                                int x_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_3 (ATerm t)
                                    {
                                      ATerm n_83 = NULL;
                                      n_83 = t;
                                      r_82 :
                                      if(!(match_string(n_83, "-v")))
                                        {
                                          if(!(match_string(n_83, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm p_3 (ATerm t)
                                    {
                                      t = term_a_27;
                                      t = set_config_0(t);
                                      t = term_b_27;
                                      return(t);
                                    }
                                    ATerm q_3 (ATerm t)
                                    {
                                      t = term_c_27;
                                      return(t);
                                    }
                                    t = Option_3(t, o_3, p_3, q_3);
                                    LocalPopChoice(x_26);
                                  }
                                else
                                  {
                                    t = w_26;
                                    {
                                      ATerm d_27 = t;
                                      int e_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_3 (ATerm t)
                                          {
                                            ATerm o_83 = NULL;
                                            o_83 = t;
                                            s_82 :
                                            if(!(match_string(o_83, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm s_3 (ATerm t)
                                          {
                                            t = term_g_27;
                                            t = set_config_0(t);
                                            t = term_h_27;
                                            return(t);
                                          }
                                          ATerm t_3 (ATerm t)
                                          {
                                            t = term_i_27;
                                            return(t);
                                          }
                                          t = Option_3(t, r_3, s_3, t_3);
                                          LocalPopChoice(e_27);
                                        }
                                      else
                                        {
                                          t = d_27;
                                          {
                                            ATerm u_3 (ATerm t)
                                            {
                                              ATerm p_83 = NULL;
                                              p_83 = t;
                                              t_82 :
                                              if(!(match_string(p_83, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm v_3 (ATerm t)
                                            {
                                              t = term_k_27;
                                              t = set_config_0(t);
                                              t = term_l_27;
                                              return(t);
                                            }
                                            ATerm w_3 (ATerm t)
                                            {
                                              t = term_m_27;
                                              return(t);
                                            }
                                            t = Option_3(t, u_3, v_3, w_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATempty, term_n_27));
  {
    t = printnl_0(t);
    {
      t = term_z_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_83 = NULL;
  y_83 = t;
  t = SSL_TicksToSeconds(not_null(y_83));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL;
  d_84 = t;
  c_84 :
  if(match_cons(d_84, sym__2))
    {
      e_84 = ATgetArgument(d_84, 0);
      f_84 = ATgetArgument(d_84, 1);
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_84), not_null(f_84));
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = SSL_addr(not_null(e_84), not_null(f_84));
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
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_109(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
        m_84 = t;
        l_84 :
        if(((ATgetType(m_84) == AT_LIST) && ((ATermList) m_84 != ATempty)))
          {
            n_84 = ATgetFirst((ATermList) m_84);
            o_84 = (ATerm) ATgetNext((ATermList) m_84);
            {
              ATerm r_84 = NULL;
              ATerm s_84 = NULL;
              t = not_null(o_84);
              {
                t = foldr_2(t, b_109, c_109);
                {
                  s_84 = t;
                  if(((r_84 != NULL) && (r_84 != s_84)))
                    _fail(s_84);
                  else
                    r_84 = s_84;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_84), not_null(r_84));
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
  ATerm z_84 = NULL;
  ATerm b_85 = NULL;
  z_84 = t;
  {
    ATerm c_85 = NULL;
    ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
    t = not_null(z_84);
    {
      c_85 = t;
      {
        t = SSL_explode_term(not_null(c_85));
        {
          e_85 = t;
          y_84 :
          if(match_cons(e_85, sym__2))
            {
              f_85 = ATgetArgument(e_85, 0);
              g_85 = ATgetArgument(e_85, 1);
              if(((b_85 != NULL) && (b_85 != g_85)))
                _fail(g_85);
              else
                b_85 = g_85;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_85);
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
    ATerm a_4 (ATerm t)
    {
      t = term_w_25;
      return(t);
    }
    t = crush_2(t, a_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
  m_85 = t;
  l_85 :
  if(match_cons(m_85, sym__2))
    {
      n_85 = ATgetArgument(m_85, 0);
      o_85 = ATgetArgument(m_85, 1);
      {
        ATerm s_27;
        s_27 = t;
        {
          ATerm e_29 = t;
          int g_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_85), not_null(o_85));
              LocalPopChoice(g_29);
            }
          else
            {
              t = e_29;
              t = SSL_gtr(not_null(n_85), not_null(o_85));
            }
        }
        t = s_27;
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
  ATerm u_85 = NULL;
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
      v_85 = t;
      t_85 :
      if(match_cons(v_85, sym__2))
        {
          w_85 = ATgetArgument(v_85, 0);
          x_85 = ATgetArgument(v_85, 1);
          {
            if(((u_85 != NULL) && (u_85 != w_85)))
              _fail(w_85);
            else
              u_85 = w_85;
            if(((u_85 != NULL) && (u_85 != x_85)))
              _fail(x_85);
            else
              u_85 = x_85;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm o_29;
    o_29 = t;
    {
      ATerm a_86 = NULL;
      ATerm b_86 = NULL;
      t = term_q_23;
      {
        t = get_config_0(t);
        {
          b_86 = t;
          if(((a_86 != NULL) && (a_86 != b_86)))
            _fail(b_86);
          else
            a_86 = b_86;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_86), term_z_21);
        t = geq_0(t);
      }
    }
    t = o_29;
    t = v_96(t);
    return(t);
  }
  t = try_1(t, b_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm f_86 = NULL,h_86 = NULL;
    ATerm p_29;
    p_29 = t;
    {
      ATerm g_86 = NULL;
      t = run_time_0(t);
      {
        g_86 = t;
        if(((f_86 != NULL) && (f_86 != g_86)))
          _fail(g_86);
        else
          f_86 = g_86;
      }
    }
    t = p_29;
    {
      ATerm i_86 = NULL;
      t = term_q_29;
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
        t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_29), not_null(f_86)), term_r_29), not_null(h_86)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_4);
  {
    t = term_w_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_86 = NULL;
  p_86 = t;
  o_86 :
  if(match_cons(p_86, sym_Version_0))
    {
      ATerm r_86 = NULL,t_86 = NULL;
      ATerm x_29;
      x_29 = t;
      {
        ATerm s_86 = NULL;
        t = SSLgetAnnotations(not_null(p_86));
        {
          s_86 = t;
          if(((r_86 != NULL) && (r_86 != s_86)))
            _fail(s_86);
          else
            r_86 = s_86;
        }
      }
      t = x_29;
      {
        ATerm u_86 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_86));
        {
          u_86 = t;
          if(((t_86 != NULL) && (t_86 != u_86)))
            _fail(u_86);
          else
            t_86 = u_86;
        }
        t = not_null(t_86);
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
  ATerm d_4 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_4);
  t = a_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_86 = NULL;
  z_86 = t;
  t = SSL_table_create(not_null(z_86));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_87 = NULL;
  d_87 = t;
  {
    ATerm g_30;
    g_30 = t;
    {
      t = term_h_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_30, term_m_30, not_null(d_87));
          t = table_put_0(t);
        }
      }
    }
    t = g_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_87 = NULL;
  h_87 = t;
  t = SSL_table_destroy(not_null(h_87));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_87 = NULL;
  l_87 = t;
  t = SSL_exit(not_null(l_87));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL;
  p_87 = t;
  o_87 :
  if(((ATermList) p_87 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_87) == AT_LIST) && ((ATermList) p_87 != ATempty)))
        {
          q_87 = ATgetFirst((ATermList) p_87);
          r_87 = (ATerm) ATgetNext((ATermList) p_87);
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
  ATerm n_30;
  n_30 = t;
  {
    ATerm u_87 = NULL;
    ATerm x_87 = NULL;
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm v_87 = NULL;
          ATerm w_87 = NULL;
          w_87 = t;
          if(((v_87 != NULL) && (v_87 != w_87)))
            _fail(w_87);
          else
            v_87 = w_87;
          t = (ATerm) ATinsert(ATempty, not_null(v_87));
        }
      }
    {
      x_87 = t;
      if(((u_87 != NULL) && (u_87 != x_87)))
        _fail(x_87);
      else
        u_87 = x_87;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_24, not_null(u_87));
      t = printnl_0(t);
    }
  }
  t = n_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_112 (ATerm))
{
  ATerm a_88 (ATerm t)
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = Cons_2(t, r_112, a_88);
      }
    return(t);
  }
  t = a_88(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
  j_88 = t;
  g_88 :
  if(((ATgetType(j_88) == AT_LIST) && ((ATermList) j_88 != ATempty)))
    {
      h_88 = ATgetFirst((ATermList) j_88);
      i_88 = (ATerm) ATgetNext((ATermList) j_88);
      {
        ATerm m_88 = NULL;
        t = not_null(i_88);
        {
          ATerm w_30;
          w_30 = t;
          {
            ATerm n_88 = NULL,p_88 = NULL,r_88 = NULL;
            ATerm x_30;
            x_30 = t;
            {
              ATerm o_88 = NULL;
              t = i_0(t);
              {
                o_88 = t;
                if(((n_88 != NULL) && (n_88 != o_88)))
                  _fail(o_88);
                else
                  n_88 = o_88;
              }
            }
            t = x_30;
            {
              ATerm q_88 = NULL;
              t = not_null(h_88);
              {
                t = h_0(t);
                {
                  q_88 = t;
                  if(((p_88 != NULL) && (p_88 != q_88)))
                    _fail(q_88);
                  else
                    p_88 = q_88;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_88)), not_null(p_88));
                {
                  r_88 = t;
                  if(((m_88 != NULL) && (m_88 != r_88)))
                    _fail(r_88);
                  else
                    m_88 = r_88;
                }
              }
            }
          }
          t = w_30;
          {
            ATerm e_4 (ATerm t)
            {
              t = not_null(m_88);
              return(t);
            }
            t = reverse_acc_2(t, h_0, e_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_88 == ATempty))
        {
          {
            t = term_z_26;
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
  ATerm f_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm g_89 = NULL,h_89 = NULL;
  g_89 = t;
  f_89 :
  if(match_cons(g_89, sym_Program_1))
    {
      h_89 = ATgetArgument(g_89, 0);
      {
        ATerm k_89 = NULL,m_89 = NULL;
        ATerm l_89 = NULL;
        t = SSLgetAnnotations(not_null(g_89));
        {
          l_89 = t;
          if(((k_89 != NULL) && (k_89 != l_89)))
            _fail(l_89);
          else
            k_89 = l_89;
        }
        {
          t = not_null(h_89);
          {
            ATerm o_89 = NULL;
            t = x_81(t);
            {
              m_89 = t;
              {
                ATerm p_89 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_89)), not_null(k_89));
                {
                  p_89 = t;
                  if(((o_89 != NULL) && (o_89 != p_89)))
                    _fail(p_89);
                  else
                    o_89 = p_89;
                }
                t = not_null(o_89);
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
  ATerm z_89 = NULL;
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_90 = NULL;
      t = term_q_29;
      {
        t = get_config_0(t);
        {
          a_90 = t;
          if(((z_89 != NULL) && (z_89 != a_90)))
            _fail(a_90);
          else
            z_89 = a_90;
        }
      }
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            ATerm b_90 = NULL;
            b_90 = t;
            if(((z_89 != NULL) && (z_89 != b_90)))
              _fail(b_90);
            else
              z_89 = b_90;
            return(t);
          }
          t = Program_1(t, h_4);
          return(t);
        }
        t = option_defined_1(t, g_4);
      }
    }
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = not_null(z_89);
        return(t);
      }
      t = short_description_1(t, j_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_4);
    {
      t = term_a_31;
      {
        t = echo_0(t);
        {
          t = term_d_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm d_90 = NULL;
                  ATerm f_90 = NULL;
                  f_90 = t;
                  if(((d_90 != NULL) && (d_90 != f_90)))
                    _fail(f_90);
                  else
                    d_90 = f_90;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_90)), term_e_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_4);
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm g_90 = NULL;
                    ATerm h_90 = NULL;
                    ATerm n_4 (ATerm t)
                    {
                      t = not_null(z_89);
                      return(t);
                    }
                    t = long_description_1(t, n_4);
                    {
                      h_90 = t;
                      if(((g_90 != NULL) && (g_90 != h_90)))
                        _fail(h_90);
                      else
                        g_90 = h_90;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(g_90)), term_f_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_4);
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
  ATerm g_31;
  g_31 = t;
  {
    ATerm n_90 = NULL;
    ATerm o_90 = NULL;
    o_90 = t;
    if(((n_90 != NULL) && (n_90 != o_90)))
      _fail(o_90);
    else
      n_90 = o_90;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATempty, not_null(n_90)));
      t = printnl_0(t);
    }
  }
  t = g_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm h_31;
  h_31 = t;
  {
    t = t_99(t);
    t = debug_0(t);
  }
  t = h_31;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm x_90 = NULL,y_90 = NULL;
  x_90 = t;
  w_90 :
  if(match_cons(x_90, sym_Undefined_1))
    {
      y_90 = ATgetArgument(x_90, 0);
      {
        ATerm b_91 = NULL,d_91 = NULL;
        ATerm c_91 = NULL;
        t = SSLgetAnnotations(not_null(x_90));
        {
          c_91 = t;
          if(((b_91 != NULL) && (b_91 != c_91)))
            _fail(c_91);
          else
            b_91 = c_91;
        }
        {
          t = not_null(y_90);
          {
            ATerm f_91 = NULL;
            t = y_81(t);
            {
              d_91 = t;
              {
                ATerm g_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_91)), not_null(b_91));
                {
                  g_91 = t;
                  if(((f_91 != NULL) && (f_91 != g_91)))
                    _fail(g_91);
                  else
                    f_91 = g_91;
                }
                t = not_null(f_91);
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
  ATerm l_91 (ATerm t)
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_113, _id);
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = Cons_2(t, _id, l_91);
      }
    return(t);
  }
  t = l_91(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_96 (ATerm))
{
  t = fetch_1(t, f_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_91 = NULL;
  t_91 = t;
  s_91 :
  if(match_cons(t_91, sym_Help_0))
    {
      ATerm v_91 = NULL,x_91 = NULL;
      ATerm k_31;
      k_31 = t;
      {
        ATerm w_91 = NULL;
        t = SSLgetAnnotations(not_null(t_91));
        {
          w_91 = t;
          if(((v_91 != NULL) && (v_91 != w_91)))
            _fail(w_91);
          else
            v_91 = w_91;
        }
      }
      t = k_31;
      {
        ATerm y_91 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_91));
        {
          y_91 = t;
          if(((x_91 != NULL) && (x_91 != y_91)))
            _fail(y_91);
          else
            x_91 = y_91;
        }
        t = not_null(x_91);
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
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_116(t);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
  e_92 = t;
  d_92 :
  if(match_cons(e_92, sym__2))
    {
      f_92 = ATgetArgument(e_92, 0);
      g_92 = ATgetArgument(e_92, 1);
      t = SSL_table_get(not_null(f_92), not_null(g_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL,r_92 = NULL,w_92 = NULL;
  n_92 = t;
  m_92 :
  if(match_cons(n_92, sym__3))
    {
      o_92 = ATgetArgument(n_92, 0);
      r_92 = ATgetArgument(n_92, 1);
      w_92 = ATgetArgument(n_92, 2);
      {
        ATerm u_31;
        u_31 = t;
        {
          ATerm a_93 = NULL;
          ATerm b_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_92), not_null(r_92));
          {
            ATerm v_31 = t;
            int w_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_31);
              }
            else
              {
                t = v_31;
                t = (ATerm) ATempty;
              }
            {
              b_93 = t;
              if(((a_93 != NULL) && (a_93 != b_93)))
                _fail(b_93);
              else
                a_93 = b_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_92), not_null(r_92), (ATerm) ATinsert(CheckATermList(not_null(a_93)), not_null(w_92)));
            t = table_put_0(t);
          }
        }
        t = u_31;
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
  ATerm f_93 = NULL;
  ATerm g_93 = NULL;
  t = term_z_26;
  {
    t = f_95(t);
    {
      g_93 = t;
      if(((f_93 != NULL) && (f_93 != g_93)))
        _fail(g_93);
      else
        f_93 = g_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, not_null(f_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
  m_93 = t;
  l_93 :
  if(match_string(m_93, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_93) == AT_LIST) && ((ATermList) m_93 != ATempty)))
        {
          n_93 = ATgetFirst((ATermList) m_93);
          o_93 = (ATerm) ATgetNext((ATermList) m_93);
          {
            ATerm r_93 = NULL;
            ATerm x_31;
            x_31 = t;
            {
              t = not_null(n_93);
              t = a_0(t);
            }
            t = x_31;
            {
              ATerm s_93 = NULL;
              t = term_z_26;
              {
                t = b_0(t);
                {
                  s_93 = t;
                  if(((r_93 != NULL) && (r_93 != s_93)))
                    _fail(s_93);
                  else
                    r_93 = s_93;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_93)), not_null(r_93));
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
  ATerm o_4 (ATerm t)
  {
    ATerm x_93 = NULL;
    x_93 = t;
    w_93 :
    if(!(match_string(x_93, "--help")))
      {
        if(!(match_string(x_93, "-h")))
          {
            if(!(match_string(x_93, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_z_31;
    {
      t = set_config_0(t);
      t = term_a_32;
    }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_b_32;
    return(t);
  }
  t = Option_3(t, o_4, p_4, t_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
  a_94 = t;
  z_93 :
  if(((ATgetType(a_94) == AT_LIST) && ((ATermList) a_94 != ATempty)))
    {
      b_94 = ATgetFirst((ATermList) a_94);
      c_94 = (ATerm) ATgetNext((ATermList) a_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm))
{
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL;
  m_94 = t;
  l_94 :
  if(((ATgetType(m_94) == AT_LIST) && ((ATermList) m_94 != ATempty)))
    {
      n_94 = ATgetFirst((ATermList) m_94);
      o_94 = (ATerm) ATgetNext((ATermList) m_94);
      {
        ATerm s_94 = NULL,u_94 = NULL;
        ATerm t_94 = NULL;
        t = SSLgetAnnotations(not_null(m_94));
        {
          t_94 = t;
          if(((s_94 != NULL) && (s_94 != t_94)))
            _fail(t_94);
          else
            s_94 = t_94;
        }
        {
          t = not_null(n_94);
          {
            ATerm w_94 = NULL;
            t = u_92(t);
            {
              u_94 = t;
              {
                t = not_null(o_94);
                {
                  ATerm y_94 = NULL;
                  t = v_92(t);
                  {
                    w_94 = t;
                    {
                      ATerm z_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_94)), not_null(u_94)), not_null(s_94));
                      {
                        z_94 = t;
                        if(((y_94 != NULL) && (y_94 != z_94)))
                          _fail(z_94);
                        else
                          y_94 = z_94;
                      }
                      t = not_null(y_94);
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
  if(((ATermList) p_95 == ATempty))
    {
      {
        ATerm r_95 = NULL,t_95 = NULL;
        ATerm c_32;
        c_32 = t;
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
        t = c_32;
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
        t = (ATerm) ATmakeAppl(sym__3, term_n_23, not_null(b_96), not_null(c_96));
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
  ATerm d_32;
  d_32 = t;
  {
    ATerm u_4 (ATerm t)
    {
      t = term_e_32;
      t = d_95(t);
      return(t);
    }
    t = try_1(t, u_4);
  }
  t = d_32;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm l_96 = NULL;
      ATerm f_32;
      f_32 = t;
      {
        ATerm j_96 = NULL;
        ATerm k_96 = NULL;
        k_96 = t;
        if(((j_96 != NULL) && (j_96 != k_96)))
          _fail(k_96);
        else
          j_96 = k_96;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_29, not_null(j_96));
          t = set_config_0(t);
        }
      }
      t = f_32;
      {
        ATerm m_96 = NULL;
        m_96 = t;
        if(((l_96 != NULL) && (l_96 != m_96)))
          _fail(m_96);
        else
          l_96 = m_96;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_96));
      }
      return(t);
    }
    ATerm x_4 (ATerm t)
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_32);
            }
          else
            {
              t = k_32;
              {
                t = d_95(t);
                t = Cons_2(t, _id, x_4);
              }
            }
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_4, x_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
  ATerm q_32;
  q_32 = t;
  {
    ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL;
    x_96 = t;
    r_96 :
    if(match_cons(x_96, sym__3))
      {
        y_96 = ATgetArgument(x_96, 0);
        z_96 = ATgetArgument(x_96, 1);
        a_97 = ATgetArgument(x_96, 2);
        {
          if(((s_96 != NULL) && (s_96 != y_96)))
            _fail(y_96);
          else
            s_96 = y_96;
          {
            if(((t_96 != NULL) && (t_96 != z_96)))
              _fail(z_96);
            else
              t_96 = z_96;
            {
              if(((u_96 != NULL) && (u_96 != a_97)))
                _fail(a_97);
              else
                u_96 = a_97;
              t = SSL_table_put(not_null(s_96), not_null(t_96), not_null(u_96));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm d_97 = NULL;
  ATerm r_32;
  r_32 = t;
  {
    t = term_n_33;
    t = table_put_0(t);
  }
  t = r_32;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm o_33 = t;
      int p_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_95(t);
          LocalPopChoice(p_33);
        }
      else
        {
          t = o_33;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_4);
    {
      ATerm z_4 (ATerm t)
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_33;
            s_33 = t;
            {
              ATerm t_33 = t;
              int u_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_31;
                  t = get_config_0(t);
                  LocalPopChoice(u_33);
                }
              else
                {
                  t = t_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_33;
            {
              t = system_usage_0(t);
              {
                t = term_w_25;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            {
              ATerm a_5 (ATerm t)
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm e_97 = NULL;
                  e_97 = t;
                  if(((d_97 != NULL) && (d_97 != e_97)))
                    _fail(e_97);
                  else
                    d_97 = e_97;
                  return(t);
                }
                t = Undefined_1(t, e_5);
                return(t);
              }
              t = option_defined_1(t, a_5);
              {
                ATerm f_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_97)), term_v_33);
                  return(t);
                }
                t = say_1(t, f_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_4);
      {
        ATerm w_33;
        w_33 = t;
        {
          t = term_b_31;
          t = table_destroy_0(t);
        }
        t = w_33;
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
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_97);
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
            {
              ATerm z_33 = t;
              int a_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_98(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_34);
                }
              else
                {
                  t = z_33;
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
  ATerm j_5 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_98(t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_5, q_98, r_98, m_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm d_34;
      d_34 = t;
      {
        ATerm h_97 = NULL;
        ATerm i_97 = NULL;
        t = term_q_29;
        {
          t = get_config_0(t);
          {
            i_97 = t;
            if(((h_97 != NULL) && (h_97 != i_97)))
              _fail(i_97);
            else
              h_97 = i_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATempty, not_null(h_97)));
          t = printnl_0(t);
        }
      }
      t = d_34;
      return(t);
    }
    t = if_verbose2_1(t, o_5);
    return(t);
  }
  t = iowrap_4(t, i_98, j_98, k_98, n_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_98 (ATerm), ATerm h_98 (ATerm))
{
  t = iowrap_3(t, g_98, h_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_98 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    t = _2(t, _id, d_98);
    return(t);
  }
  t = iowrap_2(t, p_5, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, r_5);
    return(t);
  }
  t = iowrap_1(t, q_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
