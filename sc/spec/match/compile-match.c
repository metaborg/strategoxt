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
ATerm term_x_35;
ATerm term_d_35;
ATerm term_t_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_j_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_j_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_l_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_r_29;
ATerm term_n_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_i_28;
ATerm term_d_28;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_h_26;
ATerm term_c_25;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_y_15;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_u_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_u_11;
void init_constant_terms (void)
{
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Op_2, term_i_18, (ATerm) ATempty);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_u_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_u_11);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_11);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_t_30, term_u_29);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_u_29);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_t_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_u_29);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__3, term_s_33, term_t_33, (ATerm) ATempty);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm e_96 (ATerm));
ATerm Rec_2 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm Let_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm h_85 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm a_96 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm m_87 (ATerm));
ATerm Scope_2 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm diff_1 (ATerm, ATerm z_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm r_113 (ATerm), ATerm s_113 (ATerm));
ATerm for_3 (ATerm, ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm u_109 (ATerm), ATerm v_109 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm o_109 (ATerm), ATerm p_109 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm z_109 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm s_110 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm c_110 (ATerm));
ATerm rename_4 (ATerm, ATerm j_109 (ATerm, ATerm (ATerm)), ATerm k_109 (ATerm), ATerm l_109 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_109 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm q_88 (ATerm));
ATerm Call_2 (ATerm, ATerm w_85 (ATerm), ATerm x_85 (ATerm));
ATerm Str_1 (ATerm, ATerm x_0 (ATerm));
ATerm Real_1 (ATerm, ATerm v_0 (ATerm));
ATerm Int_1 (ATerm, ATerm u_0 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm list_1 (ATerm, ATerm i_103 (ATerm));
ATerm Build_1 (ATerm, ATerm d_84 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm f_117 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm p_0 (ATerm), ATerm r_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm e_124 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm g_102 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm n_104 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm x_108 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm Row_3 (ATerm, ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm c_89 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_117 (ATerm));
ATerm restore_always_2 (ATerm, ATerm o_100 (ATerm), ATerm p_100 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_117 (ATerm));
ATerm scope_2 (ATerm, ATerm d_117 (ATerm), ATerm e_117 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm x_101 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm));
ATerm Prim_2 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm Explode_2 (ATerm, ATerm x_87 (ATerm), ATerm y_87 (ATerm));
ATerm Op_2 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm h_95 (ATerm));
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
ATerm foldr_3 (ATerm, ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm));
ATerm crush_3 (ATerm, ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm));
ATerm collect_om_1 (ATerm, ATerm t_105 (ATerm));
ATerm collect_1 (ATerm, ATerm v_105 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm));
ATerm union_1 (ATerm, ATerm d_107 (ATerm));
ATerm unions_1 (ATerm, ATerm f_107 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm c_102 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm f_105 (ATerm), ATerm g_105 (ATerm));
ATerm collect_split_2 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm f_95 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm d_102 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_97 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_113 (ATerm), ATerm b_113 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_113 (ATerm));
ATerm downup_1 (ATerm, ATerm c_97 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm Strategies_1 (ATerm, ATerm q_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_86 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm e_95 (ATerm));
ATerm _2 (ATerm, ATerm n_82 (ATerm), ATerm o_82 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_103 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_117 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_120 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_118 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_100 (ATerm), ATerm t_100 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm u_107 (ATerm), ATerm v_107 (ATerm));
ATerm crush_2 (ATerm, ATerm s_106 (ATerm), ATerm t_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_120 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_118 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_122 (ATerm));
ATerm map_1 (ATerm, ATerm g_103 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_122 (ATerm));
ATerm Program_1 (ATerm, ATerm t_94 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_117 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_94 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_103 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_121 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_100 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_122 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_83 (ATerm), ATerm x_83 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_122 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_122 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm), ATerm x_118 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_119 (ATerm), ATerm e_119 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_119 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm g_4 = NULL,l_4 = NULL,m_4 = NULL;
  g_4 = t;
  f_4 :
  if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
    {
      l_4 = ATgetFirst((ATermList) g_4);
      m_4 = (ATerm) ATgetNext((ATermList) g_4);
      t = not_null(l_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, e_96);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm l_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
            l_8 = t;
            e_7 :
            if(match_cons(l_8, sym__2))
              {
                n_8 = ATgetArgument(l_8, 0);
                r_8 = ATgetArgument(l_8, 1);
                t_7 :
                if(match_cons(n_8, sym_SDef_3))
                  {
                    o_8 = ATgetArgument(n_8, 0);
                    p_8 = ATgetArgument(n_8, 1);
                    q_8 = ATgetArgument(n_8, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_8), not_null(p_8), not_null(q_8));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, c_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm a_7 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, e_96);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
                  w_8 = t;
                  g_8 :
                  if(match_cons(w_8, sym__2))
                    {
                      x_8 = ATgetArgument(w_8, 0);
                      a_9 = ATgetArgument(w_8, 1);
                      h_8 :
                      if(match_cons(x_8, sym_VarDec_2))
                        {
                          y_8 = ATgetArgument(x_8, 0);
                          z_8 = ATgetArgument(x_8, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_9), not_null(z_8));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, f_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(b_7);
          }
        else
          {
            t = a_7;
            {
              ATerm h_0 (ATerm t)
              {
                t = e_96(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, h_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym_Rec_2))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      {
        ATerm s_9 = NULL,u_9 = NULL;
        ATerm t_9 = NULL;
        t = SSLgetAnnotations(not_null(m_9));
        {
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
        }
        {
          t = not_null(n_9);
          {
            ATerm w_9 = NULL;
            t = i_85(t);
            {
              u_9 = t;
              {
                t = not_null(o_9);
                {
                  ATerm y_9 = NULL;
                  t = j_85(t);
                  {
                    w_9 = t;
                    {
                      ATerm z_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_9), not_null(w_9)), not_null(s_9));
                      {
                        z_9 = t;
                        if(((y_9 != NULL) && (y_9 != z_9)))
                          _fail(z_9);
                        else
                          y_9 = z_9;
                      }
                      t = not_null(y_9);
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
ATerm Let_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_Let_2))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      {
        ATerm r_10 = NULL,t_10 = NULL;
        ATerm s_10 = NULL;
        t = SSLgetAnnotations(not_null(l_10));
        {
          s_10 = t;
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
        }
        {
          t = not_null(m_10);
          {
            ATerm v_10 = NULL;
            t = k_85(t);
            {
              t_10 = t;
              {
                t = not_null(n_10);
                {
                  ATerm x_10 = NULL;
                  t = l_85(t);
                  {
                    v_10 = t;
                    {
                      ATerm y_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_10), not_null(v_10)), not_null(r_10));
                      {
                        y_10 = t;
                        if(((x_10 != NULL) && (x_10 != y_10)))
                          _fail(y_10);
                        else
                          x_10 = y_10;
                      }
                      t = not_null(x_10);
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
ATerm sboundin_3 (ATerm t, ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_96, f_96);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, h_96, h_96, f_96);
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            t = Rec_2(t, h_96, f_96);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym_Rec_2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      t = (ATerm) ATinsert(ATempty, not_null(h_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym_SDef_3))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      t_11 = ATgetArgument(q_11, 2);
      {
        t = not_null(s_11);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
            x_11 = t;
            o_11 :
            if(match_cons(x_11, sym_VarDec_2))
              {
                y_11 = ATgetArgument(x_11, 0);
                z_11 = ATgetArgument(x_11, 1);
                t = not_null(y_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_0);
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
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_Let_2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      {
        t = not_null(i_12);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
            m_12 = t;
            f_12 :
            if(match_cons(m_12, sym_SDef_3))
              {
                n_12 = ATgetArgument(m_12, 0);
                o_12 = ATgetArgument(m_12, 1);
                p_12 = ATgetArgument(m_12, 2);
                t = not_null(n_12);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, m_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_SVar_1))
    {
      b_13 = ATgetArgument(a_13, 0);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(a_13));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
        {
          t = not_null(b_13);
          {
            ATerm i_13 = NULL;
            t = h_85(t);
            {
              g_13 = t;
              {
                ATerm j_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(g_13)), not_null(e_13));
                {
                  j_13 = t;
                  if(((i_13 != NULL) && (i_13 != j_13)))
                    _fail(j_13);
                  else
                    i_13 = j_13;
                }
                t = not_null(i_13);
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
  ATerm q_0 (ATerm t)
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        {
          ATerm j_7 = t;
          int k_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(k_7);
            }
          else
            {
              t = j_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm a_96 (ATerm))
{
  t = Scope_2(t, a_96, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm m_87 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_DynamicRules_1))
    {
      u_13 = ATgetArgument(t_13, 0);
      {
        ATerm x_13 = NULL,z_13 = NULL;
        ATerm y_13 = NULL;
        t = SSLgetAnnotations(not_null(t_13));
        {
          y_13 = t;
          if(((x_13 != NULL) && (x_13 != y_13)))
            _fail(y_13);
          else
            x_13 = y_13;
        }
        {
          t = not_null(u_13);
          {
            ATerm b_14 = NULL;
            t = m_87(t);
            {
              z_13 = t;
              {
                ATerm c_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(z_13)), not_null(x_13));
                {
                  c_14 = t;
                  if(((b_14 != NULL) && (b_14 != c_14)))
                    _fail(c_14);
                  else
                    b_14 = c_14;
                }
                t = not_null(b_14);
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
ATerm Scope_2 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Scope_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      {
        ATerm t_14 = NULL,v_14 = NULL;
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(n_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
        {
          t = not_null(o_14);
          {
            ATerm x_14 = NULL;
            t = g_84(t);
            {
              v_14 = t;
              {
                t = not_null(p_14);
                {
                  ATerm z_14 = NULL;
                  t = h_84(t);
                  {
                    x_14 = t;
                    {
                      ATerm a_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_14), not_null(x_14)), not_null(t_14));
                      {
                        a_15 = t;
                        if(((z_14 != NULL) && (z_14 != a_15)))
                          _fail(a_15);
                        else
                          z_14 = a_15;
                      }
                      t = not_null(z_14);
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
ATerm tboundin_3 (ATerm t, ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm))
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, d_96, b_96);
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      t = DynamicRules_1(t, b_96);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_DynamicRules_1))
    {
      j_15 = ATgetArgument(i_15, 0);
      {
        t = not_null(j_15);
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
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_Var_1))
    {
      p_15 = ATgetArgument(o_15, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm z_106 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      {
        t = not_null(v_15);
        {
          ATerm a_16 (ATerm t)
          {
            ATerm n_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(o_7);
              }
            else
              {
                t = n_7;
                {
                  ATerm p_7 = t;
                  int q_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(w_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_106, t_0);
                      t = a_16(t);
                      LocalPopChoice(q_7);
                    }
                  else
                    {
                      t = p_7;
                      t = Cons_2(t, _id, a_16);
                    }
                }
              }
            return(t);
          }
          t = a_16(t);
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  e_16 = t;
  c_16 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      d_16 :
      if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
        {
          h_16 = ATgetFirst((ATermList) g_16);
          i_16 = (ATerm) ATgetNext((ATermList) g_16);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_16)), not_null(h_16)), not_null(i_16));
        }
      else
        {
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
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  x_16 = t;
  v_16 :
  if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
    {
      y_16 = ATgetFirst((ATermList) x_16);
      b_17 = (ATerm) ATgetNext((ATermList) x_16);
      w_16 :
      if(match_cons(y_16, sym__2))
        {
          z_16 = ATgetArgument(y_16, 0);
          a_17 = ATgetArgument(y_16, 1);
          {
            ATerm f_17 = NULL,g_17 = NULL,m_17 = NULL,s_17 = NULL;
            ATerm r_7;
            r_7 = t;
            {
              ATerm h_17 = NULL;
              ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
              t = not_null(a_17);
              {
                h_17 = t;
                {
                  t = SSL_explode_term(not_null(h_17));
                  {
                    j_17 = t;
                    q_16 :
                    if(match_cons(j_17, sym__2))
                      {
                        k_17 = ATgetArgument(j_17, 0);
                        l_17 = ATgetArgument(j_17, 1);
                        {
                          if(((f_17 != NULL) && (f_17 != k_17)))
                            _fail(k_17);
                          else
                            f_17 = k_17;
                          if(((g_17 != NULL) && (g_17 != l_17)))
                            _fail(l_17);
                          else
                            g_17 = l_17;
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
            t = r_7;
            {
              ATerm s_7;
              s_7 = t;
              {
                ATerm n_17 = NULL;
                ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
                t = not_null(z_16);
                {
                  n_17 = t;
                  {
                    t = SSL_explode_term(not_null(n_17));
                    {
                      p_17 = t;
                      t_16 :
                      if(match_cons(p_17, sym__2))
                        {
                          q_17 = ATgetArgument(p_17, 0);
                          r_17 = ATgetArgument(p_17, 1);
                          {
                            if(((f_17 != NULL) && (f_17 != q_17)))
                              _fail(q_17);
                            else
                              f_17 = q_17;
                            if(((m_17 != NULL) && (m_17 != r_17)))
                              _fail(r_17);
                            else
                              m_17 = r_17;
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
              t = s_7;
              {
                ATerm t_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), not_null(g_17));
                {
                  t = zip_1(t, _id);
                  {
                    t_17 = t;
                    if(((s_17 != NULL) && (s_17 != t_17)))
                      _fail(t_17);
                    else
                      s_17 = t_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(b_17));
                  {
                    ATerm u_7 = t;
                    int v_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(v_7);
                      }
                    else
                      {
                        t = u_7;
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
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  d_18 = t;
  b_18 :
  if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
    {
      e_18 = ATgetFirst((ATermList) d_18);
      h_18 = (ATerm) ATgetNext((ATermList) d_18);
      c_18 :
      if(match_cons(e_18, sym__2))
        {
          f_18 = ATgetArgument(e_18, 0);
          g_18 = ATgetArgument(e_18, 1);
          {
            ATerm j_18 = NULL;
            if(((f_18 != NULL) && (f_18 != g_18)))
              _fail(g_18);
            else
              f_18 = g_18;
            {
              if(((j_18 != NULL) && (j_18 != h_18)))
                _fail(h_18);
              else
                j_18 = h_18;
              t = not_null(j_18);
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
ATerm while_not_2 (ATerm t, ATerm r_113 (ATerm), ATerm s_113 (ATerm))
{
  ATerm l_18 (ATerm t)
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_113(t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        {
          t = s_113(t);
          t = l_18(t);
        }
      }
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm))
{
  t = u_113(t);
  t = while_not_2(t, v_113, w_113);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm n_18 = NULL;
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(n_18));
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, b_1);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, w_0, y_0, a_1);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_18 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_111(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        {
          ATerm i_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_18 = NULL;
              ATerm k_8;
              k_8 = t;
              {
                ATerm s_18 = NULL;
                t = n_111(t);
                {
                  s_18 = t;
                  if(((r_18 != NULL) && (r_18 != s_18)))
                    _fail(s_18);
                  else
                    r_18 = s_18;
                }
              }
              t = k_8;
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(r_18);
                    return(t);
                  }
                  t = split_2(t, t_18, e_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_111(t, c_1, t_18, d_1);
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm g_1 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, f_1, g_1, _id);
                }
              }
              LocalPopChoice(j_8);
            }
          else
            {
              t = i_8;
              {
                ATerm h_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm i_1 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, h_1, i_1, t_18);
              }
            }
        }
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm m_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = m_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, j_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  x_18 :
  if(match_cons(c_19, sym_LRule_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      y_18 :
      if(match_cons(d_19, sym_Rule_3))
        {
          z_18 = ATgetArgument(d_19, 0);
          a_19 = ATgetArgument(d_19, 1);
          b_19 = ATgetArgument(d_19, 2);
          {
            t = not_null(z_18);
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
      if(match_cons(c_19, sym_Scope_2))
        {
          d_19 = ATgetArgument(c_19, 0);
          e_19 = ATgetArgument(c_19, 1);
          t = not_null(d_19);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm u_109 (ATerm), ATerm v_109 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym__3))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      t_19 = ATgetArgument(q_19, 2);
      {
        t = not_null(r_19);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm x_19 = NULL;
            x_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(t_19));
              t = u_109(t);
            }
            return(t);
          }
          ATerm l_1 (ATerm t)
          {
            ATerm z_19 = NULL;
            z_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(s_19));
              t = u_109(t);
            }
            return(t);
          }
          t = v_109(t, k_1, l_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm o_109 (ATerm), ATerm p_109 (ATerm, ATerm (ATerm)))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym__2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,y_20 = NULL;
        ATerm t_8;
        t_8 = t;
        {
          ATerm t_20 = NULL;
          t = not_null(m_20);
          {
            ATerm u_20 = NULL;
            t = o_109(t);
            {
              t_20 = t;
              {
                if(((q_20 != NULL) && (q_20 != t_20)))
                  _fail(t_20);
                else
                  q_20 = t_20;
                {
                  ATerm v_20 = NULL,x_20 = NULL;
                  t = map_1(t, new_0);
                  {
                    u_20 = t;
                    {
                      if(((r_20 != NULL) && (r_20 != u_20)))
                        _fail(u_20);
                      else
                        r_20 = u_20;
                      {
                        ATerm w_20 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(r_20));
                        {
                          t = zip_1(t, _id);
                          {
                            w_20 = t;
                            if(((v_20 != NULL) && (v_20 != w_20)))
                              _fail(w_20);
                            else
                              v_20 = w_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(n_20));
                          {
                            ATerm u_8 = t;
                            int v_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(v_8);
                              }
                            else
                              {
                                t = u_8;
                                t = conc_more_lists_0(t);
                              }
                            {
                              x_20 = t;
                              if(((s_20 != NULL) && (s_20 != x_20)))
                                _fail(x_20);
                              else
                                s_20 = x_20;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_8;
        {
          ATerm z_20 = NULL;
          t = not_null(m_20);
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(r_20);
              return(t);
            }
            t = p_109(t, m_1);
            {
              z_20 = t;
              if(((y_20 != NULL) && (y_20 != z_20)))
                _fail(z_20);
              else
                y_20 = z_20;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(y_20), not_null(n_20), not_null(s_20));
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
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  j_21 = t;
  h_21 :
  if(match_cons(j_21, sym__2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      i_21 :
      if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
        {
          m_21 = ATgetFirst((ATermList) l_21);
          n_21 = (ATerm) ATgetNext((ATermList) l_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(n_21));
        }
      else
        {
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
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  v_21 = t;
  s_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      t_21 :
      if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
        {
          y_21 = ATgetFirst((ATermList) x_21);
          b_22 = (ATerm) ATgetNext((ATermList) x_21);
          u_21 :
          if(match_cons(y_21, sym__2))
            {
              z_21 = ATgetArgument(y_21, 0);
              a_22 = ATgetArgument(y_21, 1);
              {
                ATerm d_22 = NULL;
                if(((w_21 != NULL) && (w_21 != z_21)))
                  _fail(z_21);
                else
                  w_21 = z_21;
                {
                  if(((d_22 != NULL) && (d_22 != a_22)))
                    _fail(a_22);
                  else
                    d_22 = a_22;
                  t = not_null(d_22);
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
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm z_109 (ATerm, ATerm (ATerm)))
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym__2))
    {
      j_22 = ATgetArgument(i_22, 0);
      k_22 = ATgetArgument(i_22, 1);
      {
        t = not_null(j_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              t = not_null(k_22);
              return(t);
            }
            t = split_2(t, _id, o_1);
            t = lookup_0(t);
            return(t);
          }
          t = z_109(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm s_110 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym__2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        t = not_null(s_22);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm w_22 = NULL;
            w_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), not_null(t_22));
              t = s_110(t);
            }
            return(t);
          }
          t = _all(t, p_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm a_23 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = all_dist_1(t, a_23);
      }
    return(t);
  }
  t = a_23(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_109 (ATerm, ATerm (ATerm)), ATerm k_109 (ATerm), ATerm l_109 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_109 (ATerm, ATerm (ATerm)))
{
  ATerm c_23 = NULL;
  c_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), (ATerm) ATempty);
    {
      ATerm f_23 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm f_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, j_109);
              LocalPopChoice(g_9);
            }
          else
            {
              t = f_9;
              {
                t = RnBinding_2(t, k_109, m_109);
                t = DistBinding_2(t, f_23, l_109);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, q_1);
        return(t);
      }
      t = f_23(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm g_23 (ATerm t, ATerm h_23 (ATerm))
  {
    t = Scope_2(t, h_23, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, g_23);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_Seqs_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(o_23);
          {
            ATerm v_23 = NULL;
            t = q_88(t);
            {
              t_23 = t;
              {
                ATerm w_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_23)), not_null(r_23));
                {
                  w_23 = t;
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                }
                t = not_null(v_23);
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
ATerm Call_2 (ATerm t, ATerm w_85 (ATerm), ATerm x_85 (ATerm))
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_Call_2))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      {
        ATerm n_24 = NULL,p_24 = NULL;
        ATerm o_24 = NULL;
        t = SSLgetAnnotations(not_null(h_24));
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
        {
          t = not_null(i_24);
          {
            ATerm r_24 = NULL;
            t = w_85(t);
            {
              p_24 = t;
              {
                t = not_null(j_24);
                {
                  ATerm t_24 = NULL;
                  t = x_85(t);
                  {
                    r_24 = t;
                    {
                      ATerm u_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(p_24), not_null(r_24)), not_null(n_24));
                      {
                        u_24 = t;
                        if(((t_24 != NULL) && (t_24 != u_24)))
                          _fail(u_24);
                        else
                          t_24 = u_24;
                      }
                      t = not_null(t_24);
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
ATerm Str_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_Str_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = NULL,p_25 = NULL;
            ATerm o_25 = NULL;
            t = SSLgetAnnotations(not_null(j_25));
            {
              o_25 = t;
              if(((n_25 != NULL) && (n_25 != o_25)))
                _fail(o_25);
              else
                n_25 = o_25;
            }
            {
              t = not_null(k_25);
              {
                ATerm r_25 = NULL;
                t = x_0(t);
                {
                  p_25 = t;
                  {
                    ATerm s_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(p_25)), not_null(n_25));
                    {
                      s_25 = t;
                      if(((r_25 != NULL) && (r_25 != s_25)))
                        _fail(s_25);
                      else
                        r_25 = s_25;
                    }
                    t = not_null(r_25);
                  }
                }
              }
            }
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm v_25 = NULL,x_25 = NULL;
              ATerm w_25 = NULL;
              t = SSLgetAnnotations(not_null(j_25));
              {
                w_25 = t;
                if(((v_25 != NULL) && (v_25 != w_25)))
                  _fail(w_25);
                else
                  v_25 = w_25;
              }
              {
                t = not_null(k_25);
                {
                  ATerm z_25 = NULL;
                  t = x_0(t);
                  {
                    x_25 = t;
                    {
                      ATerm a_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(x_25)), not_null(v_25));
                      {
                        a_26 = t;
                        if(((z_25 != NULL) && (z_25 != a_26)))
                          _fail(a_26);
                        else
                          z_25 = a_26;
                      }
                      t = not_null(z_25);
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
ATerm Real_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Real_1))
    {
      t_26 = ATgetArgument(s_26, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_26 = NULL,y_26 = NULL;
            ATerm x_26 = NULL;
            t = SSLgetAnnotations(not_null(s_26));
            {
              x_26 = t;
              if(((w_26 != NULL) && (w_26 != x_26)))
                _fail(x_26);
              else
                w_26 = x_26;
            }
            {
              t = not_null(t_26);
              {
                ATerm a_27 = NULL;
                t = v_0(t);
                {
                  y_26 = t;
                  {
                    ATerm b_27 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_26)), not_null(w_26));
                    {
                      b_27 = t;
                      if(((a_27 != NULL) && (a_27 != b_27)))
                        _fail(b_27);
                      else
                        a_27 = b_27;
                    }
                    t = not_null(a_27);
                  }
                }
              }
            }
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
              ATerm e_27 = NULL,g_27 = NULL;
              ATerm f_27 = NULL;
              t = SSLgetAnnotations(not_null(s_26));
              {
                f_27 = t;
                if(((e_27 != NULL) && (e_27 != f_27)))
                  _fail(f_27);
                else
                  e_27 = f_27;
              }
              {
                t = not_null(t_26);
                {
                  ATerm i_27 = NULL;
                  t = v_0(t);
                  {
                    g_27 = t;
                    {
                      ATerm j_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(g_27)), not_null(e_27));
                      {
                        j_27 = t;
                        if(((i_27 != NULL) && (i_27 != j_27)))
                          _fail(j_27);
                        else
                          i_27 = j_27;
                      }
                      t = not_null(i_27);
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
ATerm Int_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym_Int_1))
    {
      c_28 = ATgetArgument(b_28, 0);
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_28 = NULL,h_28 = NULL;
            ATerm g_28 = NULL;
            t = SSLgetAnnotations(not_null(b_28));
            {
              g_28 = t;
              if(((f_28 != NULL) && (f_28 != g_28)))
                _fail(g_28);
              else
                f_28 = g_28;
            }
            {
              t = not_null(c_28);
              {
                ATerm j_28 = NULL;
                t = u_0(t);
                {
                  h_28 = t;
                  {
                    ATerm k_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(h_28)), not_null(f_28));
                    {
                      k_28 = t;
                      if(((j_28 != NULL) && (j_28 != k_28)))
                        _fail(k_28);
                      else
                        j_28 = k_28;
                    }
                    t = not_null(j_28);
                  }
                }
              }
            }
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            {
              ATerm n_28 = NULL,p_28 = NULL;
              ATerm o_28 = NULL;
              t = SSLgetAnnotations(not_null(b_28));
              {
                o_28 = t;
                if(((n_28 != NULL) && (n_28 != o_28)))
                  _fail(o_28);
                else
                  n_28 = o_28;
              }
              {
                t = not_null(c_28);
                {
                  ATerm r_28 = NULL;
                  t = u_0(t);
                  {
                    p_28 = t;
                    {
                      ATerm s_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(p_28)), not_null(n_28));
                      {
                        s_28 = t;
                        if(((r_28 != NULL) && (r_28 != s_28)))
                          _fail(s_28);
                        else
                          r_28 = s_28;
                      }
                      t = not_null(r_28);
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
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Var_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm r_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_29 = NULL,q_29 = NULL;
            ATerm p_29 = NULL;
            t = SSLgetAnnotations(not_null(k_29));
            {
              p_29 = t;
              if(((o_29 != NULL) && (o_29 != p_29)))
                _fail(p_29);
              else
                o_29 = p_29;
            }
            {
              t = not_null(l_29);
              {
                ATerm s_29 = NULL;
                t = s_0(t);
                {
                  q_29 = t;
                  {
                    ATerm t_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_29)), not_null(o_29));
                    {
                      t_29 = t;
                      if(((s_29 != NULL) && (s_29 != t_29)))
                        _fail(t_29);
                      else
                        s_29 = t_29;
                    }
                    t = not_null(s_29);
                  }
                }
              }
            }
            LocalPopChoice(v_9);
          }
        else
          {
            t = r_9;
            {
              ATerm w_29 = NULL,y_29 = NULL;
              ATerm x_29 = NULL;
              t = SSLgetAnnotations(not_null(k_29));
              {
                x_29 = t;
                if(((w_29 != NULL) && (w_29 != x_29)))
                  _fail(x_29);
                else
                  w_29 = x_29;
              }
              {
                t = not_null(l_29);
                {
                  ATerm a_30 = NULL;
                  t = s_0(t);
                  {
                    y_29 = t;
                    {
                      ATerm b_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_29)), not_null(w_29));
                      {
                        b_30 = t;
                        if(((a_30 != NULL) && (a_30 != b_30)))
                          _fail(b_30);
                        else
                          a_30 = b_30;
                      }
                      t = not_null(a_30);
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
ATerm list_1 (ATerm t, ATerm i_103 (ATerm))
{
  ATerm k_30 (ATerm t)
  {
    ATerm x_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_10);
      }
    else
      {
        t = x_9;
        t = Cons_2(t, i_103, k_30);
      }
    return(t);
  }
  t = k_30(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym_Build_1))
    {
      r_30 = ATgetArgument(q_30, 0);
      {
        ATerm u_30 = NULL,w_30 = NULL;
        ATerm v_30 = NULL;
        t = SSLgetAnnotations(not_null(q_30));
        {
          v_30 = t;
          if(((u_30 != NULL) && (u_30 != v_30)))
            _fail(v_30);
          else
            u_30 = v_30;
        }
        {
          t = not_null(r_30);
          {
            ATerm y_30 = NULL;
            t = d_84(t);
            {
              w_30 = t;
              {
                ATerm z_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(w_30)), not_null(u_30));
                {
                  z_30 = t;
                  if(((y_30 != NULL) && (y_30 != z_30)))
                    _fail(z_30);
                  else
                    y_30 = z_30;
                }
                t = not_null(y_30);
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
  ATerm i_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym_Fail_0))
    {
      ATerm k_31 = NULL,m_31 = NULL;
      ATerm b_10;
      b_10 = t;
      {
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(i_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
      }
      t = b_10;
      {
        ATerm n_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(k_31));
        {
          n_31 = t;
          if(((m_31 != NULL) && (m_31 != n_31)))
            _fail(n_31);
          else
            m_31 = n_31;
        }
        t = not_null(m_31);
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
  ATerm v_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym_Id_0))
    {
      ATerm x_31 = NULL,z_31 = NULL;
      ATerm c_10;
      c_10 = t;
      {
        ATerm y_31 = NULL;
        t = SSLgetAnnotations(not_null(v_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
      }
      t = c_10;
      {
        ATerm a_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(x_31));
        {
          a_32 = t;
          if(((z_31 != NULL) && (z_31 != a_32)))
            _fail(a_32);
          else
            z_31 = a_32;
        }
        t = not_null(z_31);
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
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  {
                    ATerm j_10 = t;
                    int o_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_1 (ATerm t)
                        {
                          ATerm p_10 = t;
                          int q_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              LocalPopChoice(q_10);
                            }
                          else
                            {
                              t = p_10;
                              {
                                ATerm u_10 = t;
                                int w_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_1 (ATerm t)
                                    {
                                      ATerm t_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, t_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, s_1);
                                    LocalPopChoice(w_10);
                                  }
                                else
                                  {
                                    t = u_10;
                                    {
                                      ATerm z_10 = t;
                                      int a_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          LocalPopChoice(a_11);
                                        }
                                      else
                                        {
                                          t = z_10;
                                          {
                                            ATerm b_11 = t;
                                            int c_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                LocalPopChoice(c_11);
                                              }
                                            else
                                              {
                                                t = b_11;
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
                        t = Build_1(t, r_1);
                        LocalPopChoice(o_10);
                      }
                    else
                      {
                        t = j_10;
                        {
                          ATerm d_11 = t;
                          int e_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              LocalPopChoice(e_11);
                            }
                          else
                            {
                              t = d_11;
                              {
                                ATerm j_11 = t;
                                int k_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(k_11);
                                  }
                                else
                                  {
                                    t = j_11;
                                    {
                                      ATerm u_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, u_1);
                                    }
                                  }
                              }
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
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym_Row_2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_35 = NULL;
            ATerm c_35 = NULL;
            t = not_null(h_34);
            {
              ATerm n_11 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_11;
                }
              {
                t = new_0(t);
                {
                  c_35 = t;
                  if(((b_35 != NULL) && (b_35 != c_35)))
                    _fail(c_35);
                  else
                    b_35 = c_35;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_35), (ATerm)ATempty, not_null(h_34))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(g_34), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_35)), (ATerm) ATempty)));
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              t = not_null(h_34);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(g_34), not_null(h_34)));
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
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym_Matrix_2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      {
        ATerm r_35 = NULL,s_35 = NULL;
        ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
        t = not_null(o_35);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              t_35 = t;
              k_35 :
              if(match_cons(t_35, sym__2))
                {
                  u_35 = ATgetArgument(t_35, 0);
                  v_35 = ATgetArgument(t_35, 1);
                  {
                    if(((r_35 != NULL) && (r_35 != u_35)))
                      _fail(u_35);
                    else
                      r_35 = u_35;
                    if(((s_35 != NULL) && (s_35 != v_35)))
                      _fail(v_35);
                    else
                      s_35 = v_35;
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_35), (ATerm) ATmakeAppl(sym_Let_2, not_null(r_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_u_11))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(s_35)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_117 (ATerm))
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym__2))
    {
      e_36 = ATgetArgument(d_36, 0);
      f_36 = ATgetArgument(d_36, 1);
      {
        ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
        ATerm v_11;
        v_11 = t;
        {
          ATerm l_36 = NULL;
          ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
          t = f_117(t);
          {
            l_36 = t;
            {
              if(((i_36 != NULL) && (i_36 != l_36)))
                _fail(l_36);
              else
                i_36 = l_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_36), not_null(e_36), not_null(f_36));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_11 = t;
                    int a_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_36), term_b_12);
                        t = table_get_0(t);
                        LocalPopChoice(a_12);
                      }
                    else
                      {
                        t = w_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_36 = t;
                      b_36 :
                      if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
                        {
                          n_36 = ATgetFirst((ATermList) m_36);
                          o_36 = (ATerm) ATgetNext((ATermList) m_36);
                          {
                            if(((j_36 != NULL) && (j_36 != n_36)))
                              _fail(n_36);
                            else
                              j_36 = n_36;
                            {
                              if(((k_36 != NULL) && (k_36 != o_36)))
                                _fail(o_36);
                              else
                                k_36 = o_36;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_36), term_b_12, (ATerm) ATinsert(CheckATermList(not_null(k_36)), (ATerm) ATinsert(CheckATermList(not_null(j_36)), not_null(e_36))));
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
        t = v_11;
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
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  x_36 = t;
  t_36 :
  if(match_cons(x_36, sym_Row_3))
    {
      y_36 = ATgetArgument(x_36, 0);
      d_37 = ATgetArgument(x_36, 1);
      e_37 = ATgetArgument(x_36, 2);
      u_36 :
      if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
        {
          z_36 = ATgetFirst((ATermList) y_36);
          c_37 = (ATerm) ATgetNext((ATermList) y_36);
          v_36 :
          if(match_cons(z_36, sym_As_2))
            {
              a_37 = ATgetArgument(z_36, 0);
              b_37 = ATgetArgument(z_36, 1);
              w_36 :
              if(match_cons(b_37, sym_Wld_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(c_37), not_null(d_37), not_null(e_37));
                }
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
  ATerm k_37 = NULL;
  t = filter_1(t, WildPat_0);
  {
    k_37 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(k_37));
  }
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm p_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  j_39 :
  if(match_cons(k_39, sym_Wld_0))
    {
      ATerm i_40 = NULL;
      ATerm m_40 = NULL;
      t = r_0(t);
      {
        ATerm v_1 (ATerm t)
        {
          ATerm j_40 = NULL,k_40 = NULL;
          j_40 = t;
          h_38 :
          if(match_cons(j_40, sym_Var_1))
            {
              k_40 = ATgetArgument(j_40, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(k_40)), term_c_12);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, v_1);
        {
          m_40 = t;
          if(((i_40 != NULL) && (i_40 != m_40)))
            _fail(m_40);
          else
            i_40 = m_40;
        }
      }
      t = not_null(i_40);
    }
  else
    {
      if(match_cons(k_39, sym_Int_1))
        {
          l_39 = ATgetArgument(k_39, 0);
          {
            ATerm m_41 = NULL,n_41 = NULL;
            t = p_0(t);
            {
              m_41 = t;
              l_38 :
              if(match_cons(m_41, sym_Int_1))
                {
                  n_41 = ATgetArgument(m_41, 0);
                  {
                    ATerm o_41 = NULL;
                    if(((l_39 != NULL) && (l_39 != n_41)))
                      _fail(n_41);
                    else
                      l_39 = n_41;
                    {
                      t = r_0(t);
                      {
                        o_41 = t;
                        k_38 :
                        if(((ATgetType(o_41) == AT_LIST) && ATisEmpty(o_41)))
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
          if(match_cons(k_39, sym_Real_1))
            {
              l_39 = ATgetArgument(k_39, 0);
              {
                ATerm q_41 = NULL,r_41 = NULL;
                t = p_0(t);
                {
                  q_41 = t;
                  t_38 :
                  if(match_cons(q_41, sym_Real_1))
                    {
                      r_41 = ATgetArgument(q_41, 0);
                      {
                        ATerm s_41 = NULL;
                        if(((l_39 != NULL) && (l_39 != r_41)))
                          _fail(r_41);
                        else
                          l_39 = r_41;
                        {
                          t = r_0(t);
                          {
                            s_41 = t;
                            s_38 :
                            if(((ATgetType(s_41) == AT_LIST) && ATisEmpty(s_41)))
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
              if(match_cons(k_39, sym_Str_1))
                {
                  l_39 = ATgetArgument(k_39, 0);
                  {
                    ATerm u_41 = NULL,v_41 = NULL;
                    t = p_0(t);
                    {
                      u_41 = t;
                      f_39 :
                      if(match_cons(u_41, sym_Str_1))
                        {
                          v_41 = ATgetArgument(u_41, 0);
                          {
                            ATerm w_41 = NULL;
                            if(((l_39 != NULL) && (l_39 != v_41)))
                              _fail(v_41);
                            else
                              l_39 = v_41;
                            {
                              t = r_0(t);
                              {
                                w_41 = t;
                                v_38 :
                                if(((ATgetType(w_41) == AT_LIST) && ATisEmpty(w_41)))
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
                  if(match_cons(k_39, sym_Op_2))
                    {
                      l_39 = ATgetArgument(k_39, 0);
                      m_39 = ATgetArgument(k_39, 1);
                      {
                        ATerm z_41 = NULL;
                        ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
                        t = p_0(t);
                        {
                          a_42 = t;
                          i_39 :
                          if(match_cons(a_42, sym_Fun_2))
                            {
                              b_42 = ATgetArgument(a_42, 0);
                              c_42 = ATgetArgument(a_42, 1);
                              {
                                ATerm e_42 = NULL;
                                if(((l_39 != NULL) && (l_39 != b_42)))
                                  _fail(b_42);
                                else
                                  l_39 = b_42;
                                {
                                  if(((z_41 != NULL) && (z_41 != c_42)))
                                    _fail(c_42);
                                  else
                                    z_41 = c_42;
                                  {
                                    ATerm f_42 = NULL;
                                    t = not_null(m_39);
                                    {
                                      t = length_0(t);
                                      {
                                        f_42 = t;
                                        if(((e_42 != NULL) && (e_42 != f_42)))
                                          _fail(f_42);
                                        else
                                          e_42 = f_42;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_42), not_null(z_41));
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
                        t = not_null(m_39);
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
ATerm ConsTransition_1 (ATerm t, ATerm e_124 (ATerm))
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  y_42 = t;
  v_42 :
  if(match_cons(y_42, sym_Row_3))
    {
      z_42 = ATgetArgument(y_42, 0);
      e_43 = ATgetArgument(y_42, 1);
      f_43 = ATgetArgument(y_42, 2);
      w_42 :
      if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
        {
          a_43 = ATgetFirst((ATermList) z_42);
          d_43 = (ATerm) ATgetNext((ATermList) z_42);
          x_42 :
          if(match_cons(a_43, sym_As_2))
            {
              b_43 = ATgetArgument(a_43, 0);
              c_43 = ATgetArgument(a_43, 1);
              {
                ATerm k_43 = NULL,m_43 = NULL;
                ATerm d_12;
                d_12 = t;
                {
                  ATerm l_43 = NULL;
                  t = not_null(c_43);
                  {
                    t = e_124(t);
                    {
                      l_43 = t;
                      if(((k_43 != NULL) && (k_43 != l_43)))
                        _fail(l_43);
                      else
                        k_43 = l_43;
                    }
                  }
                }
                t = d_12;
                {
                  ATerm n_43 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_43), not_null(e_43));
                  {
                    ATerm e_12 = t;
                    int k_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(k_12);
                      }
                    else
                      {
                        t = e_12;
                        t = conc_more_lists_0(t);
                      }
                    {
                      n_43 = t;
                      if(((m_43 != NULL) && (m_43 != n_43)))
                        _fail(n_43);
                      else
                        m_43 = n_43;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(d_43), not_null(m_43), not_null(f_43));
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
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
  v_43 = t;
  t_43 :
  if(match_cons(v_43, sym__2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      u_43 :
      if(match_cons(x_43, sym__2))
        {
          y_43 = ATgetArgument(x_43, 0);
          z_43 = ATgetArgument(x_43, 1);
          {
            ATerm d_44 = NULL;
            ATerm e_44 = NULL;
            t = not_null(w_43);
            {
              ATerm w_1 (ATerm t)
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = not_null(y_43);
                    return(t);
                  }
                  ATerm z_1 (ATerm t)
                  {
                    t = not_null(z_43);
                    return(t);
                  }
                  t = MatchCons_2(t, y_1, z_1);
                  return(t);
                }
                t = ConsTransition_1(t, x_1);
                return(t);
              }
              t = filter_1(t, w_1);
              {
                e_44 = t;
                if(((d_44 != NULL) && (d_44 != e_44)))
                  _fail(e_44);
                else
                  d_44 = e_44;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(y_43), not_null(z_43), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(d_44)));
          }
        }
      else
        {
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
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
  k_44 = t;
  i_44 :
  if(match_cons(k_44, sym__2))
    {
      l_44 = ATgetArgument(k_44, 0);
      m_44 = ATgetArgument(k_44, 1);
      j_44 :
      if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
        {
          n_44 = ATgetFirst((ATermList) m_44);
          o_44 = (ATerm) ATgetNext((ATermList) m_44);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_44), not_null(n_44)), (ATerm) ATmakeAppl(sym__2, not_null(l_44), not_null(o_44)));
        }
      else
        {
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
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  u_44 :
  if(match_cons(w_44, sym__2))
    {
      x_44 = ATgetArgument(w_44, 0);
      y_44 = ATgetArgument(w_44, 1);
      v_44 :
      if(((ATgetType(y_44) == AT_LIST) && ATisEmpty(y_44)))
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
ATerm rzip_1 (ATerm t, ATerm g_102 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, g_102);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  z_45 :
  if(((ATgetType(a_46) == AT_LIST) && !(ATisEmpty(a_46))))
    {
      b_46 = ATgetFirst((ATermList) a_46);
      c_46 = (ATerm) ATgetNext((ATermList) a_46);
      {
        ATerm f_46 = NULL;
        ATerm h_46 = NULL;
        t = not_null(c_46);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm l_12 = t;
            if((PushChoice() == 0))
              {
                ATerm g_46 = NULL;
                g_46 = t;
                if(((b_46 != NULL) && (b_46 != g_46)))
                  _fail(g_46);
                else
                  b_46 = g_46;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_12;
              }
            return(t);
          }
          t = filter_1(t, a_2);
          {
            h_46 = t;
            if(((f_46 != NULL) && (f_46 != h_46)))
              _fail(h_46);
            else
              f_46 = h_46;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(f_46)), not_null(b_46));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm n_104 (ATerm))
{
  ATerm l_46 (ATerm t)
  {
    t = n_104(t);
    {
      ATerm q_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(r_12);
        }
      else
        {
          t = q_12;
          t = Cons_2(t, _id, l_46);
        }
    }
    return(t);
  }
  t = l_46(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Uniq_0(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        {
        }
      }
    return(t);
  }
  t = listtd_1(t, b_2);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
    u_46 = t;
    n_46 :
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
  t = map_1(t, c_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = term_u_11;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_u_12;
    return(t);
  }
  t = foldr_3(t, d_2, add_0, e_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,e_48 = NULL,f_48 = NULL,k_48 = NULL,l_48 = NULL,p_48 = NULL;
  q_47 = t;
  m_47 :
  if(match_cons(q_47, sym_Row_3))
    {
      r_47 = ATgetArgument(q_47, 0);
      l_48 = ATgetArgument(q_47, 1);
      p_48 = ATgetArgument(q_47, 2);
      n_47 :
      if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
        {
          z_47 = ATgetFirst((ATermList) r_47);
          k_48 = (ATerm) ATgetNext((ATermList) r_47);
          o_47 :
          if(match_cons(z_47, sym_As_2))
            {
              a_48 = ATgetArgument(z_47, 0);
              b_48 = ATgetArgument(z_47, 1);
              p_47 :
              if(match_cons(b_48, sym_Str_1))
                {
                  e_48 = ATgetArgument(b_48, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(e_48)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(b_48, sym_Real_1))
                    {
                      e_48 = ATgetArgument(b_48, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(e_48)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(b_48, sym_Int_1))
                        {
                          e_48 = ATgetArgument(b_48, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(e_48)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(b_48, sym_Op_2))
                            {
                              e_48 = ATgetArgument(b_48, 0);
                              f_48 = ATgetArgument(b_48, 1);
                              {
                                ATerm v_48 = NULL,x_48 = NULL;
                                ATerm v_12;
                                v_12 = t;
                                {
                                  ATerm w_48 = NULL;
                                  t = not_null(f_48);
                                  {
                                    t = length_0(t);
                                    {
                                      w_48 = t;
                                      if(((v_48 != NULL) && (v_48 != w_48)))
                                        _fail(w_48);
                                      else
                                        v_48 = w_48;
                                    }
                                  }
                                }
                                t = v_12;
                                {
                                  ATerm c_49 = NULL;
                                  t = not_null(f_48);
                                  {
                                    t = offsets_0(t);
                                    {
                                      c_49 = t;
                                      if(((x_48 != NULL) && (x_48 != c_49)))
                                        _fail(c_49);
                                      else
                                        x_48 = c_49;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(e_48), not_null(v_48)), not_null(x_48));
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
ATerm filter_1 (ATerm t, ATerm x_108 (ATerm))
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm y_12 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              t = filter_1(t, x_108);
              return(t);
            }
            t = Cons_2(t, x_108, f_2);
            LocalPopChoice(c_13);
          }
        else
          {
            t = y_12;
            {
              ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
              p_49 = t;
              o_49 :
              if(((ATgetType(p_49) == AT_LIST) && !(ATisEmpty(p_49))))
                {
                  q_49 = ATgetFirst((ATermList) p_49);
                  r_49 = (ATerm) ATgetNext((ATermList) p_49);
                  {
                    t = not_null(r_49);
                    t = filter_1(t, x_108);
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
  ATerm d_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
      b_50 = t;
      v_49 :
      if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
        {
          c_50 = ATgetFirst((ATermList) b_50);
          l_50 = (ATerm) ATgetNext((ATermList) b_50);
          w_49 :
          if(match_cons(c_50, sym_Row_3))
            {
              d_50 = ATgetArgument(c_50, 0);
              j_50 = ATgetArgument(c_50, 1);
              k_50 = ATgetArgument(c_50, 2);
              x_49 :
              if(((ATgetType(d_50) == AT_LIST) && !(ATisEmpty(d_50))))
                {
                  e_50 = ATgetFirst((ATermList) d_50);
                  i_50 = (ATerm) ATgetNext((ATermList) d_50);
                  y_49 :
                  if(match_cons(e_50, sym_As_2))
                    {
                      f_50 = ATgetArgument(e_50, 0);
                      h_50 = ATgetArgument(e_50, 1);
                      z_49 :
                      if(match_cons(f_50, sym_Off_1))
                        {
                          g_50 = ATgetArgument(f_50, 0);
                          t = not_null(g_50);
                        }
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
      LocalPopChoice(h_13);
    }
  else
    {
      t = d_13;
      {
        t = explode_string_0(t);
        {
          ATerm k_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_50 (ATerm t)
              {
                ATerm m_13 = t;
                int n_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, p_50);
                    LocalPopChoice(n_13);
                  }
                else
                  {
                    t = m_13;
                    {
                      ATerm g_2 (ATerm t)
                      {
                        ATerm n_50 = NULL;
                        n_50 = t;
                        a_50 :
                        if(!(match_int(n_50, 47)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      ATerm h_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = Cons_2(t, g_2, h_2);
                    }
                  }
                return(t);
              }
              t = p_50(t);
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
              t = (ATerm) ATempty;
            }
          t = implode_string_0(t);
        }
      }
    }
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym_Matrix_1))
    {
      l_51 = ATgetArgument(k_51, 0);
      {
        ATerm n_51 = NULL,o_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
        ATerm v_51 = NULL;
        t = not_null(l_51);
        {
          ATerm w_51 = NULL;
          t = get_path_0(t);
          {
            v_51 = t;
            {
              if(((n_51 != NULL) && (n_51 != v_51)))
                _fail(v_51);
              else
                n_51 = v_51;
              {
                t = not_null(l_51);
                {
                  ATerm x_51 = NULL;
                  t = outedges_0(t);
                  {
                    w_51 = t;
                    {
                      if(((o_51 != NULL) && (o_51 != w_51)))
                        _fail(w_51);
                      else
                        o_51 = w_51;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), not_null(o_51));
                        {
                          ATerm y_51 = NULL;
                          t = rzip_1(t, Transition_0);
                          {
                            x_51 = t;
                            {
                              if(((s_51 != NULL) && (s_51 != x_51)))
                                _fail(x_51);
                              else
                                s_51 = x_51;
                              {
                                t = not_null(l_51);
                                {
                                  ATerm z_51 = NULL;
                                  t = default_state_0(t);
                                  {
                                    y_51 = t;
                                    {
                                      if(((t_51 != NULL) && (t_51 != y_51)))
                                        _fail(y_51);
                                      else
                                        t_51 = y_51;
                                      {
                                        t = new_0(t);
                                        {
                                          z_51 = t;
                                          {
                                            if(((u_51 != NULL) && (u_51 != z_51)))
                                              _fail(z_51);
                                            else
                                              u_51 = z_51;
                                            {
                                              ATerm o_13;
                                              o_13 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, not_null(l_51)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_13, not_null(u_51)));
                                                {
                                                  ATerm i_2 (ATerm t)
                                                  {
                                                    t = term_q_13;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, i_2);
                                                }
                                              }
                                              t = o_13;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(u_51), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_51)), not_null(s_51), not_null(t_51));
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
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  k_52 = t;
  i_52 :
  if(match_cons(k_52, sym_Row_3))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      p_52 = ATgetArgument(k_52, 2);
      j_52 :
      if(((ATgetType(m_52) == AT_LIST) && !(ATisEmpty(m_52))))
        {
          n_52 = ATgetFirst((ATermList) m_52);
          o_52 = (ATerm) ATgetNext((ATermList) m_52);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(l_52)), not_null(n_52)), not_null(o_52), not_null(p_52));
        }
      else
        {
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
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  x_52 :
  if(match_cons(y_52, sym_Matrix_1))
    {
      z_52 = ATgetArgument(y_52, 0);
      {
        ATerm b_53 = NULL;
        ATerm c_53 = NULL;
        t = not_null(z_52);
        {
          ATerm r_13 = t;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm m_2 (ATerm t)
                    {
                      ATerm v_13 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = v_13;
                        }
                      return(t);
                    }
                    t = As_2(t, _id, m_2);
                    return(t);
                  }
                  t = Cons_2(t, l_2, _id);
                  return(t);
                }
                t = Row_3(t, k_2, _id, _id);
                return(t);
              }
              t = map_1(t, j_2);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_13;
            }
          {
            t = not_null(z_52);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                c_53 = t;
                if(((b_53 != NULL) && (b_53 != c_53)))
                  _fail(c_53);
                else
                  b_53 = c_53;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(b_53));
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
  ATerm j_53 = NULL;
  j_53 = t;
  i_53 :
  if(match_cons(j_53, sym_Wld_0))
    {
      ATerm l_53 = NULL,n_53 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm m_53 = NULL;
        t = SSLgetAnnotations(not_null(j_53));
        {
          m_53 = t;
          if(((l_53 != NULL) && (l_53 != m_53)))
            _fail(m_53);
          else
            l_53 = m_53;
        }
      }
      t = w_13;
      {
        ATerm o_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(l_53));
        {
          o_53 = t;
          if(((n_53 != NULL) && (n_53 != o_53)))
            _fail(o_53);
          else
            n_53 = o_53;
        }
        t = not_null(n_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Row_3 (ATerm t, ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm c_89 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_Row_3))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      c_54 = ATgetArgument(z_53, 2);
      {
        ATerm h_54 = NULL,j_54 = NULL;
        ATerm i_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          i_54 = t;
          if(((h_54 != NULL) && (h_54 != i_54)))
            _fail(i_54);
          else
            h_54 = i_54;
        }
        {
          t = not_null(a_54);
          {
            ATerm l_54 = NULL;
            t = a_89(t);
            {
              j_54 = t;
              {
                t = not_null(b_54);
                {
                  ATerm n_54 = NULL;
                  t = b_89(t);
                  {
                    l_54 = t;
                    {
                      t = not_null(c_54);
                      {
                        ATerm p_54 = NULL;
                        t = c_89(t);
                        {
                          n_54 = t;
                          {
                            ATerm q_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, not_null(j_54), not_null(l_54), not_null(n_54)), not_null(h_54));
                            {
                              q_54 = t;
                              if(((p_54 != NULL) && (p_54 != q_54)))
                                _fail(q_54);
                              else
                                p_54 = q_54;
                            }
                            t = not_null(p_54);
                          }
                        }
                      }
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
  ATerm a_55 = NULL,b_55 = NULL;
  a_55 = t;
  z_54 :
  if(match_cons(a_55, sym_Matrix_1))
    {
      b_55 = ATgetArgument(a_55, 0);
      {
        ATerm d_55 = NULL;
        ATerm e_55 = NULL;
        t = not_null(b_55);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm o_2 (ATerm t)
            {
              ATerm p_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, p_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, o_2, _id);
            return(t);
          }
          t = map_1(t, n_2);
          {
            e_55 = t;
            if(((d_55 != NULL) && (d_55 != e_55)))
              _fail(e_55);
            else
              d_55 = e_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(d_55));
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
  ATerm o_55 = NULL,p_55 = NULL;
  o_55 = t;
  n_55 :
  if(match_cons(o_55, sym_Matrix_1))
    {
      p_55 = ATgetArgument(o_55, 0);
      {
        ATerm r_55 = NULL;
        ATerm x_55 = NULL;
        t = not_null(p_55);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
            s_55 = t;
            j_55 :
            if(match_cons(s_55, sym_Row_3))
              {
                t_55 = ATgetArgument(s_55, 0);
                u_55 = ATgetArgument(s_55, 1);
                v_55 = ATgetArgument(s_55, 2);
                k_55 :
                if(((ATgetType(t_55) == AT_LIST) && ATisEmpty(t_55)))
                  {
                    l_55 :
                    if(((ATgetType(u_55) == AT_LIST) && ATisEmpty(u_55)))
                      {
                        t = not_null(v_55);
                      }
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
          t = map_1(t, q_2);
          {
            x_55 = t;
            if(((r_55 != NULL) && (r_55 != x_55)))
              _fail(x_55);
            else
              r_55 = x_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(r_55));
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
  ATerm a_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = a_14;
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            {
              ATerm g_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = g_14;
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
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
  d_56 = t;
  c_56 :
  if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
    {
      e_56 = ATgetFirst((ATermList) d_56);
      f_56 = (ATerm) ATgetNext((ATermList) d_56);
      t = not_null(f_56);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym__2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      {
        ATerm i_14;
        i_14 = t;
        {
          ATerm q_56 = NULL;
          ATerm r_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_56), not_null(n_56));
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = (ATerm) ATempty;
              }
            {
              r_56 = t;
              if(((q_56 != NULL) && (q_56 != r_56)))
                _fail(r_56);
              else
                q_56 = r_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_56), not_null(n_56), not_null(q_56));
            t = table_put_0(t);
          }
        }
        t = i_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_117 (ATerm))
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm h_57 = NULL;
    ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
    t = c_117(t);
    {
      h_57 = t;
      {
        if(((g_57 != NULL) && (g_57 != h_57)))
          _fail(h_57);
        else
          g_57 = h_57;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_57), term_b_12);
              t = table_get_0(t);
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_57 = t;
            d_57 :
            if(((ATgetType(i_57) == AT_LIST) && !(ATisEmpty(i_57))))
              {
                j_57 = ATgetFirst((ATermList) i_57);
                k_57 = (ATerm) ATgetNext((ATermList) i_57);
                {
                  if(((f_57 != NULL) && (f_57 != j_57)))
                    _fail(j_57);
                  else
                    f_57 = j_57;
                  {
                    if(((e_57 != NULL) && (e_57 != k_57)))
                      _fail(k_57);
                    else
                      e_57 = k_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_57), term_b_12, not_null(e_57));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_57);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm l_57 = NULL;
                              l_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_57), not_null(l_57));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_2);
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
  t = l_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm o_100 (ATerm), ATerm p_100 (ATerm))
{
  ATerm s_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_100(t);
      t = p_100(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = s_14;
      {
        t = p_100(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_117 (ATerm))
{
  ATerm s_57 = NULL;
  ATerm y_14;
  y_14 = t;
  {
    ATerm t_57 = NULL;
    ATerm u_57 = NULL;
    t = b_117(t);
    {
      t_57 = t;
      {
        if(((s_57 != NULL) && (s_57 != t_57)))
          _fail(t_57);
        else
          s_57 = t_57;
        {
          ATerm v_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_57), term_b_12);
          {
            ATerm b_15 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_15);
              }
            else
              {
                t = b_15;
                t = (ATerm) ATempty;
              }
            {
              v_57 = t;
              if(((u_57 != NULL) && (u_57 != v_57)))
                _fail(v_57);
              else
                u_57 = v_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_57), term_b_12, (ATerm) ATinsert(CheckATermList(not_null(u_57)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm d_117 (ATerm), ATerm e_117 (ATerm))
{
  t = begin_scope_1(t, d_117);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, d_117);
      return(t);
    }
    t = restore_always_2(t, e_117, s_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm v_2 (ATerm t)
    {
      ATerm d_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          LocalPopChoice(e_15);
        }
      else
        {
          t = d_15;
          {
            ATerm f_15 = t;
            int g_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                LocalPopChoice(g_15);
              }
            else
              {
                t = f_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_2(t, v_2, _id);
    t = _all(t, u_2);
    return(t);
  }
  t = scope_2(t, t_2, u_2);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym_Cong_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,v_59 = NULL,x_59 = NULL,z_59 = NULL;
        ATerm k_15;
        k_15 = t;
        {
          ATerm b_59 = NULL;
          t = not_null(s_58);
          {
            ATerm e_59 = NULL;
            t = map_1(t, new_0);
            {
              b_59 = t;
              {
                if(((y_58 != NULL) && (y_58 != b_59)))
                  _fail(b_59);
                else
                  y_58 = b_59;
                {
                  t = not_null(y_58);
                  {
                    ATerm f_59 = NULL;
                    ATerm w_2 (ATerm t)
                    {
                      ATerm c_59 = NULL;
                      ATerm d_59 = NULL;
                      d_59 = t;
                      if(((c_59 != NULL) && (c_59 != d_59)))
                        _fail(d_59);
                      else
                        c_59 = d_59;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_59));
                      return(t);
                    }
                    t = map_1(t, w_2);
                    {
                      e_59 = t;
                      {
                        if(((v_58 != NULL) && (v_58 != e_59)))
                          _fail(e_59);
                        else
                          v_58 = e_59;
                        {
                          ATerm g_59 = NULL;
                          t = new_0(t);
                          {
                            f_59 = t;
                            {
                              if(((w_58 != NULL) && (w_58 != f_59)))
                                _fail(f_59);
                              else
                                w_58 = f_59;
                              {
                                t = not_null(s_58);
                                {
                                  ATerm j_59 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    g_59 = t;
                                    {
                                      if(((z_58 != NULL) && (z_58 != g_59)))
                                        _fail(g_59);
                                      else
                                        z_58 = g_59;
                                      {
                                        t = not_null(z_58);
                                        {
                                          ATerm k_59 = NULL,u_59 = NULL;
                                          ATerm x_2 (ATerm t)
                                          {
                                            ATerm h_59 = NULL;
                                            ATerm i_59 = NULL;
                                            i_59 = t;
                                            if(((h_59 != NULL) && (h_59 != i_59)))
                                              _fail(i_59);
                                            else
                                              h_59 = i_59;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_59));
                                            return(t);
                                          }
                                          t = map_1(t, x_2);
                                          {
                                            j_59 = t;
                                            {
                                              if(((x_58 != NULL) && (x_58 != j_59)))
                                                _fail(j_59);
                                              else
                                                x_58 = j_59;
                                              {
                                                ATerm l_59 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_58), not_null(z_58));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    l_59 = t;
                                                    if(((k_59 != NULL) && (k_59 != l_59)))
                                                      _fail(l_59);
                                                    else
                                                      k_59 = l_59;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_59), not_null(s_58));
                                                  {
                                                    ATerm y_2 (ATerm t)
                                                    {
                                                      ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
                                                      m_59 = t;
                                                      j_58 :
                                                      if(match_cons(m_59, sym__2))
                                                        {
                                                          n_59 = ATgetArgument(m_59, 0);
                                                          q_59 = ATgetArgument(m_59, 1);
                                                          k_58 :
                                                          if(match_cons(n_59, sym__2))
                                                            {
                                                              o_59 = ATgetArgument(n_59, 0);
                                                              p_59 = ATgetArgument(n_59, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_59)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, y_2);
                                                    {
                                                      u_59 = t;
                                                      if(((a_59 != NULL) && (a_59 != u_59)))
                                                        _fail(u_59);
                                                      else
                                                        a_59 = u_59;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = k_15;
        {
          ATerm l_15;
          l_15 = t;
          {
            ATerm w_59 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_58), not_null(z_58));
            {
              ATerm m_15 = t;
              int q_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(q_15);
                }
              else
                {
                  t = m_15;
                  t = conc_more_lists_0(t);
                }
              {
                w_59 = t;
                if(((v_59 != NULL) && (v_59 != w_59)))
                  _fail(w_59);
                else
                  v_59 = w_59;
              }
            }
          }
          t = l_15;
          {
            ATerm r_15;
            r_15 = t;
            {
              ATerm y_59 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_58), not_null(v_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_58))));
              {
                t = Mapp2_0(t);
                {
                  y_59 = t;
                  if(((x_59 != NULL) && (x_59 != y_59)))
                    _fail(y_59);
                  else
                    x_59 = y_59;
                }
              }
            }
            t = r_15;
            {
              ATerm a_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_58), not_null(x_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_58))));
              {
                t = Bapp2_0(t);
                {
                  a_60 = t;
                  if(((z_59 != NULL) && (z_59 != a_60)))
                    _fail(a_60);
                  else
                    z_59 = a_60;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_59)), not_null(w_58)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_59), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_59)), not_null(z_59))));
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
  ATerm i_61 = NULL,j_61 = NULL;
  i_61 = t;
  h_61 :
  if(match_cons(i_61, sym_Build_1))
    {
      j_61 = ATgetArgument(i_61, 0);
      {
        ATerm s_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
            ATerm p_61 = NULL;
            ATerm t_61 = NULL;
            t = new_0(t);
            {
              p_61 = t;
              {
                if(((n_61 != NULL) && (n_61 != p_61)))
                  _fail(p_61);
                else
                  n_61 = p_61;
                {
                  t = not_null(j_61);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
                      q_61 = t;
                      x_60 :
                      if(match_cons(q_61, sym_Anno_2))
                        {
                          r_61 = ATgetArgument(q_61, 0);
                          s_61 = ATgetArgument(q_61, 1);
                          {
                            if(((l_61 != NULL) && (l_61 != r_61)))
                              _fail(r_61);
                            else
                              l_61 = r_61;
                            {
                              if(((m_61 != NULL) && (m_61 != s_61)))
                                _fail(s_61);
                              else
                                m_61 = s_61;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_61));
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
                      t_61 = t;
                      if(((o_61 != NULL) && (o_61 != t_61)))
                        _fail(t_61);
                      else
                        o_61 = t_61;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_61)), not_null(l_61))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_61))));
            LocalPopChoice(x_15);
          }
        else
          {
            t = s_15;
            {
              ATerm z_15 = t;
              int b_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
                  ATerm l_62 = NULL;
                  ATerm o_62 = NULL;
                  t = new_0(t);
                  {
                    l_62 = t;
                    {
                      if(((y_61 != NULL) && (y_61 != l_62)))
                        _fail(l_62);
                      else
                        y_61 = l_62;
                      {
                        t = not_null(j_61);
                        {
                          ATerm a_3 (ATerm t)
                          {
                            ATerm m_62 = NULL,n_62 = NULL;
                            m_62 = t;
                            b_61 :
                            if(match_cons(m_62, sym_RootApp_1))
                              {
                                n_62 = ATgetArgument(m_62, 0);
                                {
                                  if(((x_61 != NULL) && (x_61 != n_62)))
                                    _fail(n_62);
                                  else
                                    x_61 = n_62;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_61));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, a_3);
                          {
                            o_62 = t;
                            if(((z_61 != NULL) && (z_61 != o_62)))
                              _fail(o_62);
                            else
                              z_61 = o_62;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_61))));
                  LocalPopChoice(b_16);
                }
              else
                {
                  t = z_15;
                  {
                    ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
                    ATerm u_62 = NULL;
                    ATerm y_62 = NULL;
                    t = new_0(t);
                    {
                      u_62 = t;
                      {
                        if(((s_62 != NULL) && (s_62 != u_62)))
                          _fail(u_62);
                        else
                          s_62 = u_62;
                        {
                          t = not_null(j_61);
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL;
                              v_62 = t;
                              f_61 :
                              if(match_cons(v_62, sym_App_2))
                                {
                                  w_62 = ATgetArgument(v_62, 0);
                                  x_62 = ATgetArgument(v_62, 1);
                                  {
                                    if(((q_62 != NULL) && (q_62 != w_62)))
                                      _fail(w_62);
                                    else
                                      q_62 = w_62;
                                    {
                                      if(((r_62 != NULL) && (r_62 != x_62)))
                                        _fail(x_62);
                                      else
                                        r_62 = x_62;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_62));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, b_3);
                            {
                              y_62 = t;
                              if(((t_62 != NULL) && (t_62 != y_62)))
                                _fail(y_62);
                              else
                                t_62 = y_62;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_62), not_null(r_62), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_62)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_62))));
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
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
  v_63 = t;
  u_63 :
  if(match_cons(v_63, sym__2))
    {
      w_63 = ATgetArgument(v_63, 0);
      x_63 = ATgetArgument(v_63, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_63)), not_null(w_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  f_64 = t;
  c_64 :
  if(match_cons(f_64, sym__2))
    {
      g_64 = ATgetArgument(f_64, 0);
      j_64 = ATgetArgument(f_64, 1);
      d_64 :
      if(((ATgetType(g_64) == AT_LIST) && !(ATisEmpty(g_64))))
        {
          h_64 = ATgetFirst((ATermList) g_64);
          i_64 = (ATerm) ATgetNext((ATermList) g_64);
          e_64 :
          if(((ATgetType(j_64) == AT_LIST) && !(ATisEmpty(j_64))))
            {
              k_64 = ATgetFirst((ATermList) j_64);
              l_64 = (ATerm) ATgetNext((ATermList) j_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_64), not_null(k_64)), (ATerm) ATmakeAppl(sym__2, not_null(i_64), not_null(l_64)));
            }
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
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  v_64 = t;
  s_64 :
  if(match_cons(v_64, sym__2))
    {
      w_64 = ATgetArgument(v_64, 0);
      x_64 = ATgetArgument(v_64, 1);
      t_64 :
      if(((ATgetType(w_64) == AT_LIST) && ATisEmpty(w_64)))
        {
          u_64 :
          if(((ATgetType(x_64) == AT_LIST) && ATisEmpty(x_64)))
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
ATerm zip_1 (ATerm t, ATerm x_101 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, x_101);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL;
  x_65 = t;
  q_65 :
  if(match_cons(x_65, sym_Call_2))
    {
      y_65 = ATgetArgument(x_65, 0);
      a_66 = ATgetArgument(x_65, 1);
      r_65 :
      if(match_cons(y_65, sym_SVar_1))
        {
          z_65 = ATgetArgument(y_65, 0);
          s_65 :
          if(match_string(z_65, "Anno_Cong__"))
            {
              t_65 :
              if(((ATgetType(a_66) == AT_LIST) && !(ATisEmpty(a_66))))
                {
                  b_66 = ATgetFirst((ATermList) a_66);
                  e_66 = (ATerm) ATgetNext((ATermList) a_66);
                  u_65 :
                  if(match_cons(b_66, sym_Cong_2))
                    {
                      c_66 = ATgetArgument(b_66, 0);
                      d_66 = ATgetArgument(b_66, 1);
                      v_65 :
                      if(((ATgetType(e_66) == AT_LIST) && !(ATisEmpty(e_66))))
                        {
                          f_66 = ATgetFirst((ATermList) e_66);
                          g_66 = (ATerm) ATgetNext((ATermList) e_66);
                          w_65 :
                          if(((ATgetType(g_66) == AT_LIST) && ATisEmpty(g_66)))
                            {
                              {
                                ATerm r_66 = NULL,s_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,l_68 = NULL,n_68 = NULL,q_68 = NULL;
                                ATerm j_16;
                                j_16 = t;
                                {
                                  ATerm a_67 = NULL,b_67 = NULL,m_67 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_66)), not_null(f_66));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      a_67 = t;
                                      m_65 :
                                      if(((ATgetType(a_67) == AT_LIST) && !(ATisEmpty(a_67))))
                                        {
                                          b_67 = ATgetFirst((ATermList) a_67);
                                          m_67 = (ATerm) ATgetNext((ATermList) a_67);
                                          {
                                            ATerm p_67 = NULL;
                                            if(((r_66 != NULL) && (r_66 != b_67)))
                                              _fail(b_67);
                                            else
                                              r_66 = b_67;
                                            {
                                              if(((x_66 != NULL) && (x_66 != m_67)))
                                                _fail(m_67);
                                              else
                                                x_66 = m_67;
                                              {
                                                ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
                                                ATerm c_3 (ATerm t)
                                                {
                                                  ATerm n_67 = NULL;
                                                  ATerm o_67 = NULL;
                                                  o_67 = t;
                                                  if(((n_67 != NULL) && (n_67 != o_67)))
                                                    _fail(o_67);
                                                  else
                                                    n_67 = o_67;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_67));
                                                  return(t);
                                                }
                                                t = map_1(t, c_3);
                                                {
                                                  p_67 = t;
                                                  {
                                                    if(((s_66 != NULL) && (s_66 != p_67)))
                                                      _fail(p_67);
                                                    else
                                                      s_66 = p_67;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(d_66)), not_null(f_66));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          q_67 = t;
                                                          l_65 :
                                                          if(((ATgetType(q_67) == AT_LIST) && !(ATisEmpty(q_67))))
                                                            {
                                                              r_67 = ATgetFirst((ATermList) q_67);
                                                              s_67 = (ATerm) ATgetNext((ATermList) q_67);
                                                              {
                                                                ATerm z_67 = NULL;
                                                                if(((v_66 != NULL) && (v_66 != r_67)))
                                                                  _fail(r_67);
                                                                else
                                                                  v_66 = r_67;
                                                                {
                                                                  if(((y_66 != NULL) && (y_66 != s_67)))
                                                                    _fail(s_67);
                                                                  else
                                                                    y_66 = s_67;
                                                                  {
                                                                    ATerm a_68 = NULL,k_68 = NULL;
                                                                    ATerm d_3 (ATerm t)
                                                                    {
                                                                      ATerm t_67 = NULL;
                                                                      ATerm y_67 = NULL;
                                                                      y_67 = t;
                                                                      if(((t_67 != NULL) && (t_67 != y_67)))
                                                                        _fail(y_67);
                                                                      else
                                                                        t_67 = y_67;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_67));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, d_3);
                                                                    {
                                                                      z_67 = t;
                                                                      {
                                                                        if(((w_66 != NULL) && (w_66 != z_67)))
                                                                          _fail(z_67);
                                                                        else
                                                                          w_66 = z_67;
                                                                        {
                                                                          ATerm b_68 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_66), not_null(y_66));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              b_68 = t;
                                                                              if(((a_68 != NULL) && (a_68 != b_68)))
                                                                                _fail(b_68);
                                                                              else
                                                                                a_68 = b_68;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_68), (ATerm) ATinsert(CheckATermList(not_null(d_66)), not_null(f_66)));
                                                                            {
                                                                              ATerm e_3 (ATerm t)
                                                                              {
                                                                                ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
                                                                                c_68 = t;
                                                                                i_65 :
                                                                                if(match_cons(c_68, sym__2))
                                                                                  {
                                                                                    d_68 = ATgetArgument(c_68, 0);
                                                                                    g_68 = ATgetArgument(c_68, 1);
                                                                                    j_65 :
                                                                                    if(match_cons(d_68, sym__2))
                                                                                      {
                                                                                        e_68 = ATgetArgument(d_68, 0);
                                                                                        f_68 = ATgetArgument(d_68, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_68))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_68), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_68)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, e_3);
                                                                              {
                                                                                k_68 = t;
                                                                                if(((z_66 != NULL) && (z_66 != k_68)))
                                                                                  _fail(k_68);
                                                                                else
                                                                                  z_66 = k_68;
                                                                              }
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
                                t = j_16;
                                {
                                  ATerm k_16;
                                  k_16 = t;
                                  {
                                    ATerm m_68 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_66), not_null(y_66));
                                    {
                                      ATerm l_16 = t;
                                      int m_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(m_16);
                                        }
                                      else
                                        {
                                          t = l_16;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        m_68 = t;
                                        if(((l_68 != NULL) && (l_68 != m_68)))
                                          _fail(m_68);
                                        else
                                          l_68 = m_68;
                                      }
                                    }
                                  }
                                  t = k_16;
                                  {
                                    ATerm n_16;
                                    n_16 = t;
                                    {
                                      ATerm o_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_66), not_null(s_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_66))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          o_68 = t;
                                          if(((n_68 != NULL) && (n_68 != o_68)))
                                            _fail(o_68);
                                          else
                                            n_68 = o_68;
                                        }
                                      }
                                    }
                                    t = n_16;
                                    {
                                      ATerm r_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_66), not_null(w_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_66))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          r_68 = t;
                                          if(((q_68 != NULL) && (q_68 != r_68)))
                                            _fail(r_68);
                                          else
                                            q_68 = r_68;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(l_68)), not_null(v_66)), not_null(r_66)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_68), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(z_66)), not_null(q_68))));
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
ATerm As_2 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm))
{
  ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL;
  q_69 = t;
  k_69 :
  if(match_cons(q_69, sym_As_2))
    {
      r_69 = ATgetArgument(q_69, 0);
      s_69 = ATgetArgument(q_69, 1);
      {
        ATerm w_69 = NULL,y_69 = NULL;
        ATerm x_69 = NULL;
        t = SSLgetAnnotations(not_null(q_69));
        {
          x_69 = t;
          if(((w_69 != NULL) && (w_69 != x_69)))
            _fail(x_69);
          else
            w_69 = x_69;
        }
        {
          t = not_null(r_69);
          {
            ATerm a_70 = NULL;
            t = b_88(t);
            {
              y_69 = t;
              {
                t = not_null(s_69);
                {
                  ATerm c_70 = NULL;
                  t = c_88(t);
                  {
                    a_70 = t;
                    {
                      ATerm d_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(y_69), not_null(a_70)), not_null(w_69));
                      {
                        d_70 = t;
                        if(((c_70 != NULL) && (c_70 != d_70)))
                          _fail(d_70);
                        else
                          c_70 = d_70;
                      }
                      t = not_null(c_70);
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
ATerm Prim_2 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  o_70 :
  if(match_cons(p_70, sym_Prim_2))
    {
      q_70 = ATgetArgument(p_70, 0);
      r_70 = ATgetArgument(p_70, 1);
      {
        ATerm c_71 = NULL,e_71 = NULL;
        ATerm d_71 = NULL;
        t = SSLgetAnnotations(not_null(p_70));
        {
          d_71 = t;
          if(((c_71 != NULL) && (c_71 != d_71)))
            _fail(d_71);
          else
            c_71 = d_71;
        }
        {
          t = not_null(q_70);
          {
            ATerm g_71 = NULL;
            t = y_83(t);
            {
              e_71 = t;
              {
                t = not_null(r_70);
                {
                  ATerm i_71 = NULL;
                  t = z_83(t);
                  {
                    g_71 = t;
                    {
                      ATerm j_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(e_71), not_null(g_71)), not_null(c_71));
                      {
                        j_71 = t;
                        if(((i_71 != NULL) && (i_71 != j_71)))
                          _fail(j_71);
                        else
                          i_71 = j_71;
                      }
                      t = not_null(i_71);
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
ATerm Explode_2 (ATerm t, ATerm x_87 (ATerm), ATerm y_87 (ATerm))
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  v_71 = t;
  u_71 :
  if(match_cons(v_71, sym_Explode_2))
    {
      w_71 = ATgetArgument(v_71, 0);
      x_71 = ATgetArgument(v_71, 1);
      {
        ATerm b_72 = NULL,n_72 = NULL;
        ATerm m_72 = NULL;
        t = SSLgetAnnotations(not_null(v_71));
        {
          m_72 = t;
          if(((b_72 != NULL) && (b_72 != m_72)))
            _fail(m_72);
          else
            b_72 = m_72;
        }
        {
          t = not_null(w_71);
          {
            ATerm y_72 = NULL;
            t = x_87(t);
            {
              n_72 = t;
              {
                t = not_null(x_71);
                {
                  ATerm j_73 = NULL;
                  t = y_87(t);
                  {
                    y_72 = t;
                    {
                      ATerm k_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(n_72), not_null(y_72)), not_null(b_72));
                      {
                        k_73 = t;
                        if(((j_73 != NULL) && (j_73 != k_73)))
                          _fail(k_73);
                        else
                          j_73 = k_73;
                      }
                      t = not_null(j_73);
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
ATerm Op_2 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_cons(w_73, sym_Op_2))
    {
      x_73 = ATgetArgument(w_73, 0);
      y_73 = ATgetArgument(w_73, 1);
      {
        ATerm c_74 = NULL,e_74 = NULL;
        ATerm d_74 = NULL;
        t = SSLgetAnnotations(not_null(w_73));
        {
          d_74 = t;
          if(((c_74 != NULL) && (c_74 != d_74)))
            _fail(d_74);
          else
            c_74 = d_74;
        }
        {
          t = not_null(x_73);
          {
            ATerm g_74 = NULL;
            t = c_86(t);
            {
              e_74 = t;
              {
                t = not_null(y_73);
                {
                  ATerm i_74 = NULL;
                  t = d_86(t);
                  {
                    g_74 = t;
                    {
                      ATerm j_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_74), not_null(g_74)), not_null(c_74));
                      {
                        j_74 = t;
                        if(((i_74 != NULL) && (i_74 != j_74)))
                          _fail(j_74);
                        else
                          i_74 = j_74;
                      }
                      t = not_null(i_74);
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
ATerm pat_td_1 (ATerm t, ATerm h_95 (ATerm))
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_95(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm g_3 (ATerm t)
              {
                t = pat_td_1(t, h_95);
                return(t);
              }
              t = fetch_1(t, g_3);
              return(t);
            }
            t = Op_2(t, _id, f_3);
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            {
              ATerm u_16 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    t = pat_td_1(t, h_95);
                    return(t);
                  }
                  t = Explode_2(t, _id, h_3);
                  LocalPopChoice(c_17);
                }
              else
                {
                  t = u_16;
                  {
                    ATerm d_17 = t;
                    int e_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_3 (ATerm t)
                        {
                          t = pat_td_1(t, h_95);
                          return(t);
                        }
                        t = Explode_2(t, i_3, _id);
                        LocalPopChoice(e_17);
                      }
                    else
                      {
                        t = d_17;
                        {
                          ATerm i_17 = t;
                          int o_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_3 (ATerm t)
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = pat_td_1(t, h_95);
                                  return(t);
                                }
                                t = fetch_1(t, k_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, j_3);
                              LocalPopChoice(o_17);
                            }
                          else
                            {
                              t = i_17;
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  t = pat_td_1(t, h_95);
                                  return(t);
                                }
                                t = As_2(t, _id, l_3);
                              }
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
  ATerm f_75 = NULL,g_75 = NULL;
  f_75 = t;
  e_75 :
  if(match_cons(f_75, sym_Match_1))
    {
      g_75 = ATgetArgument(f_75, 0);
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL;
            ATerm m_75 = NULL;
            ATerm q_75 = NULL;
            t = new_0(t);
            {
              m_75 = t;
              {
                if(((k_75 != NULL) && (k_75 != m_75)))
                  _fail(m_75);
                else
                  k_75 = m_75;
                {
                  t = not_null(g_75);
                  {
                    ATerm m_3 (ATerm t)
                    {
                      ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
                      n_75 = t;
                      u_74 :
                      if(match_cons(n_75, sym_Anno_2))
                        {
                          o_75 = ATgetArgument(n_75, 0);
                          p_75 = ATgetArgument(n_75, 1);
                          {
                            if(((i_75 != NULL) && (i_75 != o_75)))
                              _fail(o_75);
                            else
                              i_75 = o_75;
                            {
                              if(((j_75 != NULL) && (j_75 != p_75)))
                                _fail(p_75);
                              else
                                j_75 = p_75;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_75)), not_null(i_75));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, m_3);
                    {
                      q_75 = t;
                      if(((l_75 != NULL) && (l_75 != q_75)))
                        _fail(q_75);
                      else
                        l_75 = q_75;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_75)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_75)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_75))))));
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
                  ATerm v_75 = NULL;
                  ATerm y_75 = NULL;
                  t = new_0(t);
                  {
                    v_75 = t;
                    {
                      if(((t_75 != NULL) && (t_75 != v_75)))
                        _fail(v_75);
                      else
                        t_75 = v_75;
                      {
                        t = not_null(g_75);
                        {
                          ATerm n_3 (ATerm t)
                          {
                            ATerm w_75 = NULL,x_75 = NULL;
                            w_75 = t;
                            y_74 :
                            if(match_cons(w_75, sym_RootApp_1))
                              {
                                x_75 = ATgetArgument(w_75, 0);
                                {
                                  if(((s_75 != NULL) && (s_75 != x_75)))
                                    _fail(x_75);
                                  else
                                    s_75 = x_75;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_75));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, n_3);
                          {
                            y_75 = t;
                            if(((u_75 != NULL) && (u_75 != y_75)))
                              _fail(y_75);
                            else
                              u_75 = y_75;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_75))), not_null(s_75))));
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  {
                    ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
                    ATerm e_76 = NULL;
                    ATerm i_76 = NULL;
                    t = new_0(t);
                    {
                      e_76 = t;
                      {
                        if(((c_76 != NULL) && (c_76 != e_76)))
                          _fail(e_76);
                        else
                          c_76 = e_76;
                        {
                          t = not_null(g_75);
                          {
                            ATerm o_3 (ATerm t)
                            {
                              ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
                              f_76 = t;
                              c_75 :
                              if(match_cons(f_76, sym_App_2))
                                {
                                  g_76 = ATgetArgument(f_76, 0);
                                  h_76 = ATgetArgument(f_76, 1);
                                  {
                                    if(((b_76 != NULL) && (b_76 != g_76)))
                                      _fail(g_76);
                                    else
                                      b_76 = g_76;
                                    {
                                      if(((a_76 != NULL) && (a_76 != h_76)))
                                        _fail(h_76);
                                      else
                                        a_76 = h_76;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_76));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, o_3);
                            {
                              i_76 = t;
                              if(((d_76 != NULL) && (d_76 != i_76)))
                                _fail(i_76);
                              else
                                d_76 = i_76;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_76))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_76)), not_null(b_76)))));
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
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  a_77 :
  if(match_cons(b_77, sym_Cong_2))
    {
      c_77 = ATgetArgument(b_77, 0);
      d_77 = ATgetArgument(b_77, 1);
      {
        ATerm g_77 = NULL;
        ATerm w_77 = NULL;
        t = not_null(d_77);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm h_77 = NULL,i_77 = NULL;
            i_77 = t;
            y_76 :
            if(match_cons(i_77, sym_Match_1))
              {
                h_77 = ATgetArgument(i_77, 0);
                t = not_null(h_77);
              }
            else
              {
                if(match_cons(i_77, sym_Id_0))
                  {
                    t = term_c_12;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, p_3);
          {
            w_77 = t;
            if(((g_77 != NULL) && (g_77 != w_77)))
              _fail(w_77);
            else
              g_77 = w_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_77), not_null(g_77)));
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
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  j_79 = t;
  h_79 :
  if(match_cons(j_79, sym_Scope_2))
    {
      k_79 = ATgetArgument(j_79, 0);
      l_79 = ATgetArgument(j_79, 1);
      i_79 :
      if(((ATgetType(k_79) == AT_LIST) && ATisEmpty(k_79)))
        {
          t = not_null(l_79);
        }
      else
        {
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
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,m_82 = NULL;
  a_82 = t;
  u_79 :
  if(match_cons(a_82, sym_Where_1))
    {
      b_82 = ATgetArgument(a_82, 0);
      v_79 :
      if(match_cons(b_82, sym_Seq_2))
        {
          z_81 = ATgetArgument(b_82, 0);
          c_80 = ATgetArgument(b_82, 1);
          w_79 :
          if(match_cons(z_81, sym_Where_1))
            {
              b_80 = ATgetArgument(z_81, 0);
              x_79 :
              if(match_cons(c_80, sym_Seq_2))
                {
                  d_80 = ATgetArgument(c_80, 0);
                  f_80 = ATgetArgument(c_80, 1);
                  y_79 :
                  if(match_cons(d_80, sym_Build_1))
                    {
                      e_80 = ATgetArgument(d_80, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_80)), not_null(f_80))));
                    }
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
          if(match_cons(b_82, sym_Where_1))
            {
              z_81 = ATgetArgument(b_82, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(z_81));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(a_82, sym_Test_1))
        {
          b_82 = ATgetArgument(a_82, 0);
          z_79 :
          if(match_cons(b_82, sym_Test_1))
            {
              z_81 = ATgetArgument(b_82, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_81));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(a_82, sym_Not_1))
            {
              b_82 = ATgetArgument(a_82, 0);
              a_80 :
              if(match_cons(b_82, sym_Not_1))
                {
                  z_81 = ATgetArgument(b_82, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_81));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(a_82, sym_LChoice_2))
                {
                  b_82 = ATgetArgument(a_82, 0);
                  m_82 = ATgetArgument(a_82, 1);
                  {
                    if(((b_82 != NULL) && (b_82 != m_82)))
                      _fail(m_82);
                    else
                      b_82 = m_82;
                    t = not_null(b_82);
                  }
                }
              else
                {
                  if(match_cons(a_82, sym_Choice_2))
                    {
                      b_82 = ATgetArgument(a_82, 0);
                      m_82 = ATgetArgument(a_82, 1);
                      {
                        if(((b_82 != NULL) && (b_82 != m_82)))
                          _fail(m_82);
                        else
                          b_82 = m_82;
                        t = not_null(b_82);
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
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL;
  k_83 = t;
  g_83 :
  if(match_cons(k_83, sym_LChoice_2))
    {
      l_83 = ATgetArgument(k_83, 0);
      o_83 = ATgetArgument(k_83, 1);
      h_83 :
      if(match_cons(l_83, sym_LChoice_2))
        {
          m_83 = ATgetArgument(l_83, 0);
          n_83 = ATgetArgument(l_83, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_83), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_83), not_null(o_83)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(k_83, sym_Seq_2))
        {
          l_83 = ATgetArgument(k_83, 0);
          o_83 = ATgetArgument(k_83, 1);
          i_83 :
          if(match_cons(l_83, sym_Seq_2))
            {
              m_83 = ATgetArgument(l_83, 0);
              n_83 = ATgetArgument(l_83, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_83), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_83), not_null(o_83)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(k_83, sym_Choice_2))
            {
              l_83 = ATgetArgument(k_83, 0);
              o_83 = ATgetArgument(k_83, 1);
              j_83 :
              if(match_cons(l_83, sym_Choice_2))
                {
                  m_83 = ATgetArgument(l_83, 0);
                  n_83 = ATgetArgument(l_83, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_83), (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_83), not_null(o_83)));
                }
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
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL;
  c_85 = t;
  v_84 :
  if(match_cons(c_85, sym_Lets_2))
    {
      d_85 = ATgetArgument(c_85, 0);
      e_85 = ATgetArgument(c_85, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_85), not_null(e_85));
    }
  else
    {
      if(match_cons(c_85, sym_LChoices_1))
        {
          d_85 = ATgetArgument(c_85, 0);
          w_84 :
          if(((ATgetType(d_85) == AT_LIST) && !(ATisEmpty(d_85))))
            {
              z_84 = ATgetFirst((ATermList) d_85);
              a_85 = (ATerm) ATgetNext((ATermList) d_85);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_84), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_85)));
            }
          else
            {
              if(((ATgetType(d_85) == AT_LIST) && ATisEmpty(d_85)))
                {
                  t = term_z_17;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(c_85, sym_Choices_1))
            {
              d_85 = ATgetArgument(c_85, 0);
              x_84 :
              if(((ATgetType(d_85) == AT_LIST) && !(ATisEmpty(d_85))))
                {
                  z_84 = ATgetFirst((ATermList) d_85);
                  a_85 = (ATerm) ATgetNext((ATermList) d_85);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_84), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_85)));
                }
              else
                {
                  if(((ATgetType(d_85) == AT_LIST) && ATisEmpty(d_85)))
                    {
                      t = term_z_17;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(c_85, sym_Seqs_1))
                {
                  d_85 = ATgetArgument(c_85, 0);
                  y_84 :
                  if(((ATgetType(d_85) == AT_LIST) && !(ATisEmpty(d_85))))
                    {
                      z_84 = ATgetFirst((ATermList) d_85);
                      a_85 = (ATerm) ATgetNext((ATermList) d_85);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_84), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_85)));
                    }
                  else
                    {
                      if(((ATgetType(d_85) == AT_LIST) && ATisEmpty(d_85)))
                        {
                          t = term_a_18;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(c_85, sym_DefaultVarDec_1))
                    {
                      d_85 = ATgetArgument(c_85, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_85), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_18), term_m_18));
                    }
                  else
                    {
                      if(match_cons(c_85, sym_InfixApp_3))
                        {
                          d_85 = ATgetArgument(c_85, 0);
                          e_85 = ATgetArgument(c_85, 1);
                          b_85 = ATgetArgument(c_85, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_85), (ATerm) ATmakeAppl(sym_Op_2, term_o_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_85)), not_null(d_85))));
                        }
                      else
                        {
                          if(match_cons(c_85, sym_BAM_3))
                            {
                              d_85 = ATgetArgument(c_85, 0);
                              e_85 = ATgetArgument(c_85, 1);
                              b_85 = ATgetArgument(c_85, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_85))), not_null(d_85)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_85))));
                            }
                          else
                            {
                              if(match_cons(c_85, sym_AM_2))
                                {
                                  d_85 = ATgetArgument(c_85, 0);
                                  e_85 = ATgetArgument(c_85, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_85), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_85)));
                                }
                              else
                                {
                                  if(match_cons(c_85, sym_MA_2))
                                    {
                                      d_85 = ATgetArgument(c_85, 0);
                                      e_85 = ATgetArgument(c_85, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_85)), not_null(e_85));
                                    }
                                  else
                                    {
                                      if(match_cons(c_85, sym_BA_2))
                                        {
                                          d_85 = ATgetArgument(c_85, 0);
                                          e_85 = ATgetArgument(c_85, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_85)), not_null(d_85));
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
  ATerm e_87 = NULL,f_87 = NULL;
  e_87 = t;
  c_87 :
  if(match_cons(e_87, sym_Where_1))
    {
      f_87 = ATgetArgument(e_87, 0);
      d_87 :
      if(match_cons(f_87, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm k_87 = NULL,l_87 = NULL,n_87 = NULL;
  k_87 = t;
  i_87 :
  if(match_cons(k_87, sym_LChoice_2))
    {
      l_87 = ATgetArgument(k_87, 0);
      n_87 = ATgetArgument(k_87, 1);
      j_87 :
      if(match_cons(n_87, sym_Fail_0))
        {
          t = not_null(l_87);
        }
      else
        {
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
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL;
  t_87 = t;
  r_87 :
  if(match_cons(t_87, sym_LChoice_2))
    {
      u_87 = ATgetArgument(t_87, 0);
      v_87 = ATgetArgument(t_87, 1);
      s_87 :
      if(match_cons(u_87, sym_Fail_0))
        {
          t = not_null(v_87);
        }
      else
        {
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
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
  f_88 = t;
  d_88 :
  if(match_cons(f_88, sym_Choice_2))
    {
      g_88 = ATgetArgument(f_88, 0);
      h_88 = ATgetArgument(f_88, 1);
      e_88 :
      if(match_cons(h_88, sym_Fail_0))
        {
          t = not_null(g_88);
        }
      else
        {
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
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  n_88 = t;
  l_88 :
  if(match_cons(n_88, sym_Choice_2))
    {
      o_88 = ATgetArgument(n_88, 0);
      p_88 = ATgetArgument(n_88, 1);
      m_88 :
      if(match_cons(o_88, sym_Fail_0))
        {
          t = not_null(p_88);
        }
      else
        {
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
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
  w_88 = t;
  v_88 :
  if(match_cons(w_88, sym_Cong_2))
    {
      x_88 = ATgetArgument(w_88, 0);
      y_88 = ATgetArgument(w_88, 1);
      {
        t = not_null(y_88);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm e_89 = NULL;
            e_89 = t;
            u_88 :
            if(!(match_cons(e_89, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, q_3);
        }
        t = term_z_17;
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
  ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
  j_89 = t;
  h_89 :
  if(match_cons(j_89, sym_Path_2))
    {
      k_89 = ATgetArgument(j_89, 0);
      l_89 = ATgetArgument(j_89, 1);
      i_89 :
      if(match_cons(l_89, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm r_89 = NULL,s_89 = NULL;
  r_89 = t;
  p_89 :
  if(match_cons(r_89, sym_One_1))
    {
      s_89 = ATgetArgument(r_89, 0);
      q_89 :
      if(match_cons(s_89, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm x_89 = NULL,y_89 = NULL;
  x_89 = t;
  v_89 :
  if(match_cons(x_89, sym_Some_1))
    {
      y_89 = ATgetArgument(x_89, 0);
      w_89 :
      if(match_cons(y_89, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
  d_90 = t;
  b_90 :
  if(match_cons(d_90, sym_Rec_2))
    {
      e_90 = ATgetArgument(d_90, 0);
      f_90 = ATgetArgument(d_90, 1);
      c_90 :
      if(match_cons(f_90, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
  l_90 = t;
  j_90 :
  if(match_cons(l_90, sym_Scope_2))
    {
      m_90 = ATgetArgument(l_90, 0);
      n_90 = ATgetArgument(l_90, 1);
      k_90 :
      if(match_cons(n_90, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  r_90 :
  if(match_cons(t_90, sym_Seq_2))
    {
      u_90 = ATgetArgument(t_90, 0);
      v_90 = ATgetArgument(t_90, 1);
      s_90 :
      if(match_cons(u_90, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm b_91 = NULL,c_91 = NULL;
  b_91 = t;
  z_90 :
  if(match_cons(b_91, sym_Not_1))
    {
      c_91 = ATgetArgument(b_91, 0);
      a_91 :
      if(match_cons(c_91, sym_Fail_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm h_91 = NULL,i_91 = NULL;
  h_91 = t;
  f_91 :
  if(match_cons(h_91, sym_Test_1))
    {
      i_91 = ATgetArgument(h_91, 0);
      g_91 :
      if(match_cons(i_91, sym_Fail_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            {
              ATerm w_18 = t;
              int f_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(f_19);
                }
              else
                {
                  t = w_18;
                  {
                    ATerm g_19 = t;
                    int h_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(h_19);
                      }
                    else
                      {
                        t = g_19;
                        {
                          ATerm i_19 = t;
                          int j_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(j_19);
                            }
                          else
                            {
                              t = i_19;
                              {
                                ATerm k_19 = t;
                                int l_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(l_19);
                                  }
                                else
                                  {
                                    t = k_19;
                                    {
                                      ATerm m_19 = t;
                                      int n_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(n_19);
                                        }
                                      else
                                        {
                                          t = m_19;
                                          {
                                            ATerm o_19 = t;
                                            int u_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(u_19);
                                              }
                                            else
                                              {
                                                t = o_19;
                                                {
                                                  ATerm v_19 = t;
                                                  int w_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(w_19);
                                                    }
                                                  else
                                                    {
                                                      t = v_19;
                                                      {
                                                        ATerm y_19 = t;
                                                        int a_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(a_20);
                                                          }
                                                        else
                                                          {
                                                            t = y_19;
                                                            {
                                                              ATerm b_20 = t;
                                                              int c_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
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
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(e_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_20;
                                                                        {
                                                                          ATerm f_20 = t;
                                                                          int g_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(g_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_20;
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
  ATerm n_91 = NULL,o_91 = NULL;
  n_91 = t;
  l_91 :
  if(match_cons(n_91, sym_Match_1))
    {
      o_91 = ATgetArgument(n_91, 0);
      m_91 :
      if(match_cons(o_91, sym_Wld_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm t_91 = NULL,u_91 = NULL;
  t_91 = t;
  r_91 :
  if(match_cons(t_91, sym_Where_1))
    {
      u_91 = ATgetArgument(t_91, 0);
      s_91 :
      if(match_cons(u_91, sym_Id_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm z_91 = NULL,a_92 = NULL;
  z_91 = t;
  x_91 :
  if(match_cons(z_91, sym_All_1))
    {
      a_92 = ATgetArgument(z_91, 0);
      y_91 :
      if(match_cons(a_92, sym_Id_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  d_92 :
  if(match_cons(f_92, sym_Rec_2))
    {
      g_92 = ATgetArgument(f_92, 0);
      h_92 = ATgetArgument(f_92, 1);
      e_92 :
      if(match_cons(h_92, sym_Id_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL;
  n_92 = t;
  l_92 :
  if(match_cons(n_92, sym_Scope_2))
    {
      o_92 = ATgetArgument(n_92, 0);
      p_92 = ATgetArgument(n_92, 1);
      m_92 :
      if(match_cons(p_92, sym_Id_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
  v_92 = t;
  t_92 :
  if(match_cons(v_92, sym_LChoice_2))
    {
      w_92 = ATgetArgument(v_92, 0);
      x_92 = ATgetArgument(v_92, 1);
      u_92 :
      if(match_cons(w_92, sym_Id_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
  d_93 = t;
  b_93 :
  if(match_cons(d_93, sym_Seq_2))
    {
      e_93 = ATgetArgument(d_93, 0);
      f_93 = ATgetArgument(d_93, 1);
      c_93 :
      if(match_cons(f_93, sym_Id_0))
        {
          t = not_null(e_93);
        }
      else
        {
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
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
  l_93 = t;
  j_93 :
  if(match_cons(l_93, sym_Seq_2))
    {
      m_93 = ATgetArgument(l_93, 0);
      n_93 = ATgetArgument(l_93, 1);
      k_93 :
      if(match_cons(m_93, sym_Id_0))
        {
          t = not_null(n_93);
        }
      else
        {
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
  ATerm t_93 = NULL,u_93 = NULL;
  t_93 = t;
  r_93 :
  if(match_cons(t_93, sym_Not_1))
    {
      u_93 = ATgetArgument(t_93, 0);
      s_93 :
      if(match_cons(u_93, sym_Id_0))
        {
          t = term_z_17;
        }
      else
        {
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
  ATerm z_93 = NULL,a_94 = NULL;
  z_93 = t;
  x_93 :
  if(match_cons(z_93, sym_Test_1))
    {
      a_94 = ATgetArgument(z_93, 0);
      y_93 :
      if(match_cons(a_94, sym_Id_0))
        {
          t = term_a_18;
        }
      else
        {
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
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(o_20);
          }
        else
          {
            t = j_20;
            {
              ATerm p_20 = t;
              int a_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(a_21);
                }
              else
                {
                  t = p_20;
                  {
                    ATerm b_21 = t;
                    int c_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(c_21);
                      }
                    else
                      {
                        t = b_21;
                        {
                          ATerm d_21 = t;
                          int e_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(e_21);
                            }
                          else
                            {
                              t = d_21;
                              {
                                ATerm f_21 = t;
                                int g_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(g_21);
                                  }
                                else
                                  {
                                    t = f_21;
                                    {
                                      ATerm o_21 = t;
                                      int p_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(p_21);
                                        }
                                      else
                                        {
                                          t = o_21;
                                          {
                                            ATerm q_21 = t;
                                            int r_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(r_21);
                                              }
                                            else
                                              {
                                                t = q_21;
                                                {
                                                  ATerm c_22 = t;
                                                  int e_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(e_22);
                                                    }
                                                  else
                                                    {
                                                      t = c_22;
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
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm n_22 = t;
              int o_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(o_22);
                }
              else
                {
                  t = n_22;
                  {
                    ATerm p_22 = t;
                    int u_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(u_22);
                      }
                    else
                      {
                        t = p_22;
                        {
                          ATerm v_22 = t;
                          int x_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(x_22);
                            }
                          else
                            {
                              t = v_22;
                              {
                                ATerm y_22 = t;
                                int z_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(z_22);
                                  }
                                else
                                  {
                                    t = y_22;
                                    {
                                      ATerm b_23 = t;
                                      int d_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(d_23);
                                        }
                                      else
                                        {
                                          t = b_23;
                                          {
                                            ATerm e_23 = t;
                                            int i_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(i_23);
                                              }
                                            else
                                              {
                                                t = e_23;
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
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
  w_95 = t;
  b_95 :
  if(match_cons(w_95, sym_LChoice_2))
    {
      x_95 = ATgetArgument(w_95, 0);
      m_96 = ATgetArgument(w_95, 1);
      c_95 :
      if(match_cons(x_95, sym_Matrix_2))
        {
          y_95 = ATgetArgument(x_95, 0);
          z_95 = ATgetArgument(x_95, 1);
          d_95 :
          if(match_cons(m_96, sym_Choice_2))
            {
              u_95 = ATgetArgument(m_96, 0);
              v_95 = ATgetArgument(m_96, 1);
              g_95 :
              if(match_cons(u_95, sym_Matrix_2))
                {
                  s_95 = ATgetArgument(u_95, 0);
                  t_95 = ATgetArgument(u_95, 1);
                  {
                    ATerm s_96 = NULL,u_96 = NULL;
                    ATerm j_23;
                    j_23 = t;
                    {
                      ATerm t_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_95), not_null(s_95));
                      {
                        t = union_1(t, eq_0);
                        {
                          t_96 = t;
                          if(((s_96 != NULL) && (s_96 != t_96)))
                            _fail(t_96);
                          else
                            s_96 = t_96;
                        }
                      }
                    }
                    t = j_23;
                    {
                      ATerm v_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                      {
                        ATerm k_23 = t;
                        int l_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(l_23);
                          }
                        else
                          {
                            t = k_23;
                            t = conc_more_lists_0(t);
                          }
                        {
                          v_96 = t;
                          if(((u_96 != NULL) && (u_96 != v_96)))
                            _fail(v_96);
                          else
                            u_96 = v_96;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(s_96), not_null(u_96)), not_null(v_95));
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
              if(match_cons(m_96, sym_LChoice_2))
                {
                  u_95 = ATgetArgument(m_96, 0);
                  v_95 = ATgetArgument(m_96, 1);
                  i_95 :
                  if(match_cons(u_95, sym_Matrix_2))
                    {
                      s_95 = ATgetArgument(u_95, 0);
                      t_95 = ATgetArgument(u_95, 1);
                      {
                        ATerm e_97 = NULL,g_97 = NULL;
                        ATerm p_23;
                        p_23 = t;
                        {
                          ATerm f_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_95), not_null(s_95));
                          {
                            t = union_1(t, eq_0);
                            {
                              f_97 = t;
                              if(((e_97 != NULL) && (e_97 != f_97)))
                                _fail(f_97);
                              else
                                e_97 = f_97;
                            }
                          }
                        }
                        t = p_23;
                        {
                          ATerm h_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                          {
                            ATerm q_23 = t;
                            int u_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(u_23);
                              }
                            else
                              {
                                t = q_23;
                                t = conc_more_lists_0(t);
                              }
                            {
                              h_97 = t;
                              if(((g_97 != NULL) && (g_97 != h_97)))
                                _fail(h_97);
                              else
                                g_97 = h_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(e_97), not_null(g_97)), not_null(v_95));
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
                  if(match_cons(m_96, sym_Matrix_2))
                    {
                      u_95 = ATgetArgument(m_96, 0);
                      v_95 = ATgetArgument(m_96, 1);
                      {
                        ATerm m_97 = NULL,o_97 = NULL;
                        ATerm x_23;
                        x_23 = t;
                        {
                          ATerm n_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_95), not_null(u_95));
                          {
                            t = union_1(t, eq_0);
                            {
                              n_97 = t;
                              if(((m_97 != NULL) && (m_97 != n_97)))
                                _fail(n_97);
                              else
                                m_97 = n_97;
                            }
                          }
                        }
                        t = x_23;
                        {
                          ATerm p_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(v_95));
                          {
                            ATerm y_23 = t;
                            int z_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(z_23);
                              }
                            else
                              {
                                t = y_23;
                                t = conc_more_lists_0(t);
                              }
                            {
                              p_97 = t;
                              if(((o_97 != NULL) && (o_97 != p_97)))
                                _fail(p_97);
                              else
                                o_97 = p_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(m_97), not_null(o_97));
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
      if(match_cons(w_95, sym_Choice_2))
        {
          x_95 = ATgetArgument(w_95, 0);
          m_96 = ATgetArgument(w_95, 1);
          j_95 :
          if(match_cons(x_95, sym_Matrix_2))
            {
              y_95 = ATgetArgument(x_95, 0);
              z_95 = ATgetArgument(x_95, 1);
              k_95 :
              if(match_cons(m_96, sym_LChoice_2))
                {
                  u_95 = ATgetArgument(m_96, 0);
                  v_95 = ATgetArgument(m_96, 1);
                  l_95 :
                  if(match_cons(u_95, sym_Matrix_2))
                    {
                      s_95 = ATgetArgument(u_95, 0);
                      t_95 = ATgetArgument(u_95, 1);
                      {
                        ATerm v_97 = NULL,x_97 = NULL;
                        ATerm a_24;
                        a_24 = t;
                        {
                          ATerm w_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_95), not_null(s_95));
                          {
                            t = union_1(t, eq_0);
                            {
                              w_97 = t;
                              if(((v_97 != NULL) && (v_97 != w_97)))
                                _fail(w_97);
                              else
                                v_97 = w_97;
                            }
                          }
                        }
                        t = a_24;
                        {
                          ATerm y_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                          {
                            ATerm b_24 = t;
                            int c_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(c_24);
                              }
                            else
                              {
                                t = b_24;
                                t = conc_more_lists_0(t);
                              }
                            {
                              y_97 = t;
                              if(((x_97 != NULL) && (x_97 != y_97)))
                                _fail(y_97);
                              else
                                x_97 = y_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(v_97), not_null(x_97)), not_null(v_95));
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
                  if(match_cons(m_96, sym_Choice_2))
                    {
                      u_95 = ATgetArgument(m_96, 0);
                      v_95 = ATgetArgument(m_96, 1);
                      m_95 :
                      if(match_cons(u_95, sym_Matrix_2))
                        {
                          s_95 = ATgetArgument(u_95, 0);
                          t_95 = ATgetArgument(u_95, 1);
                          {
                            ATerm e_98 = NULL,g_98 = NULL;
                            ATerm d_24;
                            d_24 = t;
                            {
                              ATerm f_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_95), not_null(s_95));
                              {
                                t = union_1(t, eq_0);
                                {
                                  f_98 = t;
                                  if(((e_98 != NULL) && (e_98 != f_98)))
                                    _fail(f_98);
                                  else
                                    e_98 = f_98;
                                }
                              }
                            }
                            t = d_24;
                            {
                              ATerm h_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                              {
                                ATerm e_24 = t;
                                int f_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = conc_two_lists_0(t);
                                    LocalPopChoice(f_24);
                                  }
                                else
                                  {
                                    t = e_24;
                                    t = conc_more_lists_0(t);
                                  }
                                {
                                  h_98 = t;
                                  if(((g_98 != NULL) && (g_98 != h_98)))
                                    _fail(h_98);
                                  else
                                    g_98 = h_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(e_98), not_null(g_98)), not_null(v_95));
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
                      if(match_cons(m_96, sym_Matrix_2))
                        {
                          u_95 = ATgetArgument(m_96, 0);
                          v_95 = ATgetArgument(m_96, 1);
                          {
                            ATerm m_98 = NULL,o_98 = NULL;
                            ATerm k_24;
                            k_24 = t;
                            {
                              ATerm n_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_95), not_null(u_95));
                              {
                                t = union_1(t, eq_0);
                                {
                                  n_98 = t;
                                  if(((m_98 != NULL) && (m_98 != n_98)))
                                    _fail(n_98);
                                  else
                                    m_98 = n_98;
                                }
                              }
                            }
                            t = k_24;
                            {
                              ATerm p_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(v_95));
                              {
                                ATerm l_24 = t;
                                int m_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = conc_two_lists_0(t);
                                    LocalPopChoice(m_24);
                                  }
                                else
                                  {
                                    t = l_24;
                                    t = conc_more_lists_0(t);
                                  }
                                {
                                  p_98 = t;
                                  if(((o_98 != NULL) && (o_98 != p_98)))
                                    _fail(p_98);
                                  else
                                    o_98 = p_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(m_98), not_null(o_98));
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
          if(match_cons(w_95, sym_Scope_2))
            {
              x_95 = ATgetArgument(w_95, 0);
              m_96 = ATgetArgument(w_95, 1);
              n_95 :
              if(match_cons(m_96, sym_Matrix_2))
                {
                  u_95 = ATgetArgument(m_96, 0);
                  v_95 = ATgetArgument(m_96, 1);
                  {
                    ATerm t_98 = NULL;
                    ATerm z_98 = NULL;
                    t = not_null(v_95);
                    {
                      ATerm r_3 (ATerm t)
                      {
                        ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL;
                        u_98 = t;
                        z_94 :
                        if(match_cons(u_98, sym_Row_2))
                          {
                            v_98 = ATgetArgument(u_98, 0);
                            w_98 = ATgetArgument(u_98, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(v_98), (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_95), not_null(w_98)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, r_3);
                      {
                        z_98 = t;
                        if(((t_98 != NULL) && (t_98 != z_98)))
                          _fail(z_98);
                        else
                          t_98 = z_98;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(u_95), not_null(t_98));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(w_95, sym_Seq_2))
                {
                  x_95 = ATgetArgument(w_95, 0);
                  m_96 = ATgetArgument(w_95, 1);
                  o_95 :
                  if(match_cons(x_95, sym_Matrix_2))
                    {
                      y_95 = ATgetArgument(x_95, 0);
                      z_95 = ATgetArgument(x_95, 1);
                      p_95 :
                      if(((ATgetType(z_95) == AT_LIST) && !(ATisEmpty(z_95))))
                        {
                          i_96 = ATgetFirst((ATermList) z_95);
                          l_96 = (ATerm) ATgetNext((ATermList) z_95);
                          q_95 :
                          if(match_cons(i_96, sym_Row_2))
                            {
                              j_96 = ATgetArgument(i_96, 0);
                              k_96 = ATgetArgument(i_96, 1);
                              r_95 :
                              if(((ATgetType(l_96) == AT_LIST) && ATisEmpty(l_96)))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(y_95), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(j_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_96), not_null(m_96)))));
                                }
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
ATerm foldr_3 (ATerm t, ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm))
{
  ATerm q_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_107(t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = q_24;
      {
        ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL;
        f_100 = t;
        d_100 :
        if(((ATgetType(f_100) == AT_LIST) && !(ATisEmpty(f_100))))
          {
            g_100 = ATgetFirst((ATermList) f_100);
            h_100 = (ATerm) ATgetNext((ATermList) f_100);
            {
              ATerm k_100 = NULL,m_100 = NULL;
              ATerm v_24;
              v_24 = t;
              {
                ATerm l_100 = NULL;
                t = not_null(g_100);
                {
                  t = y_107(t);
                  {
                    l_100 = t;
                    if(((k_100 != NULL) && (k_100 != l_100)))
                      _fail(l_100);
                    else
                      k_100 = l_100;
                  }
                }
              }
              t = v_24;
              {
                ATerm n_100 = NULL;
                t = not_null(h_100);
                {
                  t = foldr_3(t, w_107, x_107, y_107);
                  {
                    n_100 = t;
                    if(((m_100 != NULL) && (m_100 != n_100)))
                      _fail(n_100);
                    else
                      m_100 = n_100;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_100), not_null(m_100));
                  t = x_107(t);
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
ATerm crush_3 (ATerm t, ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm))
{
  ATerm z_100 = NULL;
  ATerm b_101 = NULL;
  z_100 = t;
  {
    ATerm c_101 = NULL;
    ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
    t = not_null(z_100);
    {
      c_101 = t;
      {
        t = SSL_explode_term(not_null(c_101));
        {
          e_101 = t;
          y_100 :
          if(match_cons(e_101, sym__2))
            {
              f_101 = ATgetArgument(e_101, 0);
              g_101 = ATgetArgument(e_101, 1);
              if(((b_101 != NULL) && (b_101 != g_101)))
                _fail(g_101);
              else
                b_101 = g_101;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_101);
      t = foldr_3(t, u_106, v_106, w_106);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm t_105 (ATerm))
{
  ATerm n_101 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_101 = NULL;
        ATerm m_101 = NULL;
        t = t_105(t);
        {
          m_101 = t;
          if(((l_101 != NULL) && (l_101 != m_101)))
            _fail(m_101);
          else
            l_101 = m_101;
        }
        t = (ATerm) ATinsert(ATempty, not_null(l_101));
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          ATerm s_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm t_3 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = crush_3(t, s_3, t_3, n_101);
        }
      }
    return(t);
  }
  t = n_101(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm v_105 (ATerm))
{
  t = collect_om_1(t, v_105);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm r_101 = NULL,y_101 = NULL;
    r_101 = t;
    q_101 :
    if(match_cons(r_101, sym_Off_1))
      {
        y_101 = ATgetArgument(r_101, 0);
        t = not_null(y_101);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_om_1(t, u_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL;
  n_102 = t;
  f_102 :
  if(match_cons(n_102, sym_As_2))
    {
      o_102 = ATgetArgument(n_102, 0);
      q_102 = ATgetArgument(n_102, 1);
      h_102 :
      if(match_cons(o_102, sym_Var_1))
        {
          p_102 = ATgetArgument(o_102, 0);
          i_102 :
          if(match_cons(q_102, sym_As_2))
            {
              r_102 = ATgetArgument(q_102, 0);
              m_102 = ATgetArgument(q_102, 1);
              j_102 :
              if(match_cons(r_102, sym_Off_1))
                {
                  l_102 = ATgetArgument(r_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_102))));
                }
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
          if(match_cons(o_102, sym_Off_1))
            {
              p_102 = ATgetArgument(o_102, 0);
              k_102 :
              if(match_cons(q_102, sym_Var_1))
                {
                  r_102 = ATgetArgument(q_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_102))));
                }
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
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL;
  n_103 = t;
  b_103 :
  if(match_cons(n_103, sym_As_2))
    {
      o_103 = ATgetArgument(n_103, 0);
      s_103 = ATgetArgument(n_103, 1);
      c_103 :
      if(match_cons(o_103, sym_Var_1))
        {
          r_103 = ATgetArgument(o_103, 0);
          d_103 :
          if(match_cons(s_103, sym_As_2))
            {
              t_103 = ATgetArgument(s_103, 0);
              m_103 = ATgetArgument(s_103, 1);
              f_103 :
              if(match_cons(t_103, sym_Off_1))
                {
                  l_103 = ATgetArgument(t_103, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(l_103)), not_null(m_103));
                }
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
          if(match_cons(o_103, sym_Off_1))
            {
              r_103 = ATgetArgument(o_103, 0);
              k_103 :
              if(match_cons(s_103, sym_Var_1))
                {
                  t_103 = ATgetArgument(s_103, 0);
                  {
                    t = not_null(r_103);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(r_103)), term_c_12);
                  }
                }
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
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
  f_104 = t;
  e_104 :
  if(match_cons(f_104, sym__2))
    {
      g_104 = ATgetArgument(f_104, 0);
      h_104 = ATgetArgument(f_104, 1);
      if(((g_104 != NULL) && (g_104 != h_104)))
        _fail(h_104);
      else
        g_104 = h_104;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm))
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
  p_104 = t;
  m_104 :
  if(((ATgetType(p_104) == AT_LIST) && !(ATisEmpty(p_104))))
    {
      q_104 = ATgetFirst((ATermList) p_104);
      r_104 = (ATerm) ATgetNext((ATermList) p_104);
      {
        t = i_107(t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm u_104 = NULL;
            u_104 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_104), not_null(u_104));
              t = h_107(t);
            }
            return(t);
          }
          t = fetch_1(t, v_3);
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
ATerm union_1 (ATerm t, ATerm d_107 (ATerm))
{
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
  a_105 = t;
  z_104 :
  if(match_cons(a_105, sym__2))
    {
      b_105 = ATgetArgument(a_105, 0);
      c_105 = ATgetArgument(a_105, 1);
      {
        t = not_null(b_105);
        {
          ATerm i_105 (ATerm t)
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_105);
                LocalPopChoice(z_24);
              }
            else
              {
                t = y_24;
                {
                  ATerm a_25 = t;
                  int b_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_3 (ATerm t)
                      {
                        t = not_null(c_105);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_107, w_3);
                      t = i_105(t);
                      LocalPopChoice(b_25);
                    }
                  else
                    {
                      t = a_25;
                      t = Cons_2(t, _id, i_105);
                    }
                }
              }
            return(t);
          }
          t = i_105(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unions_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = union_1(t, f_107);
    return(t);
  }
  t = foldr_2(t, x_3, y_3);
  return(t);
}
ATerm unions_0 (ATerm t)
{
  t = unions_1(t, eq_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL,w_105 = NULL;
  n_105 = t;
  k_105 :
  if(match_cons(n_105, sym__2))
    {
      o_105 = ATgetArgument(n_105, 0);
      r_105 = ATgetArgument(n_105, 1);
      l_105 :
      if(match_cons(o_105, sym__2))
        {
          p_105 = ATgetArgument(o_105, 0);
          q_105 = ATgetArgument(o_105, 1);
          m_105 :
          if(match_cons(r_105, sym__2))
            {
              s_105 = ATgetArgument(r_105, 0);
              w_105 = ATgetArgument(r_105, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_105)), not_null(p_105)), (ATerm) ATinsert(CheckATermList(not_null(w_105)), not_null(q_105)));
            }
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
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL;
  e_106 = t;
  d_106 :
  if(((ATgetType(e_106) == AT_LIST) && !(ATisEmpty(e_106))))
    {
      f_106 = ATgetFirst((ATermList) e_106);
      g_106 = (ATerm) ATgetNext((ATermList) e_106);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_106), not_null(g_106));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm p_106 = NULL;
  p_106 = t;
  o_106 :
  if(((ATgetType(p_106) == AT_LIST) && ATisEmpty(p_106)))
    {
      t = term_c_25;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm c_102 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, c_102);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm f_105 (ATerm), ATerm g_105 (ATerm))
{
  ATerm s_107 = NULL;
  ATerm a_108 = NULL,b_108 = NULL,h_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,a_109 = NULL;
  s_107 = t;
  {
    ATerm d_25;
    d_25 = t;
    {
      ATerm c_108 = NULL;
      ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
      t = not_null(s_107);
      {
        c_108 = t;
        {
          t = SSL_explode_term(not_null(c_108));
          {
            e_108 = t;
            b_107 :
            if(match_cons(e_108, sym__2))
              {
                f_108 = ATgetArgument(e_108, 0);
                g_108 = ATgetArgument(e_108, 1);
                {
                  if(((a_108 != NULL) && (a_108 != f_108)))
                    _fail(f_108);
                  else
                    a_108 = f_108;
                  if(((b_108 != NULL) && (b_108 != g_108)))
                    _fail(g_108);
                  else
                    b_108 = g_108;
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
    t = d_25;
    {
      ATerm e_25;
      e_25 = t;
      {
        ATerm i_108 = NULL;
        t = SSLgetAnnotations(not_null(s_107));
        {
          i_108 = t;
          if(((h_108 != NULL) && (h_108 != i_108)))
            _fail(i_108);
          else
            h_108 = i_108;
        }
      }
      t = e_25;
      {
        ATerm f_25;
        f_25 = t;
        {
          ATerm n_108 = NULL,o_108 = NULL,p_108 = NULL;
          t = not_null(b_108);
          {
            t = unzip_1(t, f_105);
            {
              n_108 = t;
              p_107 :
              if(match_cons(n_108, sym__2))
                {
                  o_108 = ATgetArgument(n_108, 0);
                  p_108 = ATgetArgument(n_108, 1);
                  {
                    ATerm q_108 = NULL,w_108 = NULL,y_108 = NULL,z_108 = NULL;
                    if(((k_108 != NULL) && (k_108 != o_108)))
                      _fail(o_108);
                    else
                      k_108 = o_108;
                    {
                      if(((j_108 != NULL) && (j_108 != p_108)))
                        _fail(p_108);
                      else
                        j_108 = p_108;
                      {
                        ATerm r_108 = NULL,v_108 = NULL;
                        ATerm g_25;
                        g_25 = t;
                        {
                          ATerm s_108 = NULL;
                          ATerm u_108 = NULL;
                          t = SSL_mkterm(not_null(a_108), not_null(k_108));
                          {
                            s_108 = t;
                            {
                              u_108 = t;
                              if(((r_108 != NULL) && (r_108 != u_108)))
                                _fail(u_108);
                              else
                                r_108 = u_108;
                            }
                          }
                        }
                        t = g_25;
                        {
                          t = SSLsetAnnotations(not_null(r_108), not_null(h_108));
                          {
                            v_108 = t;
                            if(((q_108 != NULL) && (q_108 != v_108)))
                              _fail(v_108);
                            else
                              q_108 = v_108;
                          }
                        }
                        {
                          t = not_null(q_108);
                          {
                            t = g_105(t);
                            {
                              w_108 = t;
                              o_107 :
                              if(match_cons(w_108, sym__2))
                                {
                                  y_108 = ATgetArgument(w_108, 0);
                                  z_108 = ATgetArgument(w_108, 1);
                                  {
                                    if(((l_108 != NULL) && (l_108 != y_108)))
                                      _fail(y_108);
                                    else
                                      l_108 = y_108;
                                    if(((m_108 != NULL) && (m_108 != z_108)))
                                      _fail(z_108);
                                    else
                                      m_108 = z_108;
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
        t = f_25;
        {
          ATerm b_109 = NULL,d_109 = NULL;
          ATerm c_109 = NULL;
          t = not_null(j_108);
          {
            t = unions_1(t, eq_0);
            {
              c_109 = t;
              if(((b_109 != NULL) && (b_109 != c_109)))
                _fail(c_109);
              else
                b_109 = c_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_108), not_null(b_109));
            {
              t = union_1(t, eq_0);
              {
                d_109 = t;
                if(((a_109 != NULL) && (a_109 != d_109)))
                  _fail(d_109);
                else
                  a_109 = d_109;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_108), not_null(a_109));
        }
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm))
{
  ATerm h_110 (ATerm t)
  {
    ATerm z_3 (ATerm t)
    {
      ATerm b_110 = NULL,f_110 = NULL;
      ATerm h_25;
      h_25 = t;
      {
        ATerm e_110 = NULL;
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_106(t);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
            }
          }
        {
          e_110 = t;
          if(((b_110 != NULL) && (b_110 != e_110)))
            _fail(e_110);
          else
            b_110 = e_110;
        }
      }
      t = h_25;
      {
        ATerm g_110 = NULL;
        ATerm q_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_106(t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = q_25;
            t = (ATerm) ATempty;
          }
        {
          g_110 = t;
          if(((f_110 != NULL) && (f_110 != g_110)))
            _fail(g_110);
          else
            f_110 = g_110;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_110), not_null(f_110));
      }
      return(t);
    }
    t = CollectSplit_2(t, h_110, z_3);
    return(t);
  }
  t = h_110(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL;
  n_110 = t;
  m_110 :
  if(match_cons(n_110, sym__2))
    {
      o_110 = ATgetArgument(n_110, 0);
      p_110 = ATgetArgument(n_110, 1);
      {
        ATerm t_110 = NULL;
        ATerm u_110 = NULL;
        t = f_95(t);
        {
          u_110 = t;
          if(((t_110 != NULL) && (t_110 != u_110)))
            _fail(u_110);
          else
            t_110 = u_110;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(t_110)), not_null(o_110))), not_null(p_110));
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
  ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL;
  z_110 = t;
  y_110 :
  if(match_cons(z_110, sym__2))
    {
      a_111 = ATgetArgument(z_110, 0);
      b_111 = ATgetArgument(z_110, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_111)), not_null(a_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL,q_111 = NULL,r_111 = NULL;
  j_111 = t;
  h_111 :
  if(match_cons(j_111, sym__2))
    {
      k_111 = ATgetArgument(j_111, 0);
      l_111 = ATgetArgument(j_111, 1);
      i_111 :
      if(((ATgetType(l_111) == AT_LIST) && !(ATisEmpty(l_111))))
        {
          q_111 = ATgetFirst((ATermList) l_111);
          r_111 = (ATerm) ATgetNext((ATermList) l_111);
          {
            ATerm v_111 = NULL;
            ATerm w_111 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_111), term_u_12);
            {
              t = add_0(t);
              {
                w_111 = t;
                if(((v_111 != NULL) && (v_111 != w_111)))
                  _fail(w_111);
                else
                  v_111 = w_111;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_111), not_null(q_111)), (ATerm) ATmakeAppl(sym__2, not_null(v_111), not_null(r_111)));
          }
        }
      else
        {
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
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL;
  c_112 = t;
  a_112 :
  if(match_cons(c_112, sym__2))
    {
      d_112 = ATgetArgument(c_112, 0);
      e_112 = ATgetArgument(c_112, 1);
      b_112 :
      if(((ATgetType(e_112) == AT_LIST) && ATisEmpty(e_112)))
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
ATerm genzip_4 (ATerm t, ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm))
{
  ATerm h_112 (ATerm t)
  {
    ATerm u_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_101(t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = u_25;
        {
          t = t_101(t);
          {
            t = _2(t, v_101, h_112);
            t = u_101(t);
          }
        }
      }
    return(t);
  }
  t = h_112(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm j_112 = NULL;
  j_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(j_112));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm d_102 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, d_102);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL;
  ATerm z_113 (ATerm t)
  {
    ATerm j_113 = NULL;
    ATerm k_113 = NULL;
    t = not_null(e_113);
    {
      ATerm a_4 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = not_null(z_112);
          return(t);
        }
        t = Annotate_1(t, b_4);
        return(t);
      }
      t = nzip0_1(t, a_4);
      {
        k_113 = t;
        if(((j_113 != NULL) && (j_113 != k_113)))
          _fail(k_113);
        else
          j_113 = k_113;
      }
    }
    t = not_null(j_113);
    return(t);
  }
  ATerm a_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_112)), term_c_12);
    return(t);
  }
  ATerm b_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_112)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_112)), not_null(g_113)));
    return(t);
  }
  ATerm c_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_112)), (ATerm) ATmakeAppl(sym_Op_2, not_null(f_113), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_112)), not_null(g_113))));
    return(t);
  }
  x_112 = t;
  s_112 :
  if(match_cons(x_112, sym_As_2))
    {
      y_112 = ATgetArgument(x_112, 0);
      e_113 = ATgetArgument(x_112, 1);
      t_112 :
      if(match_cons(y_112, sym_Off_1))
        {
          z_112 = ATgetArgument(y_112, 0);
          u_112 :
          if(match_cons(e_113, sym_BuildDefault_1))
            {
              f_113 = ATgetArgument(e_113, 0);
              {
                ATerm b_26 = t;
                int c_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_113(t);
                    LocalPopChoice(c_26);
                  }
                else
                  {
                    t = b_26;
                    t = a_114(t);
                  }
              }
            }
          else
            {
              if(match_cons(e_113, sym_As_2))
                {
                  f_113 = ATgetArgument(e_113, 0);
                  g_113 = ATgetArgument(e_113, 1);
                  v_112 :
                  if(match_cons(f_113, sym_Var_1))
                    {
                      w_112 = ATgetArgument(f_113, 0);
                      {
                        ATerm d_26 = t;
                        int e_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = z_113(t);
                            LocalPopChoice(e_26);
                          }
                        else
                          {
                            t = d_26;
                            t = b_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = z_113(t);
                    }
                }
              else
                {
                  if(match_cons(e_113, sym_Op_2))
                    {
                      f_113 = ATgetArgument(e_113, 0);
                      g_113 = ATgetArgument(e_113, 1);
                      {
                        ATerm f_26 = t;
                        int g_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = z_113(t);
                            LocalPopChoice(g_26);
                          }
                        else
                          {
                            t = f_26;
                            t = c_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = z_113(t);
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
ATerm topdown_1 (ATerm t, ATerm a_97 (ATerm))
{
  t = a_97(t);
  {
    ATerm c_4 (ATerm t)
    {
      t = topdown_1(t, a_97);
      return(t);
    }
    t = _all(t, c_4);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm i_114 = NULL;
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL;
  i_114 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_h_26, (ATerm) ATinsert(ATempty, not_null(i_114)));
    {
      ATerm d_4 (ATerm t)
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Propagate_0(t);
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
            }
          }
        return(t);
      }
      t = topdown_1(t, d_4);
      {
        t = collect_substitutions_0(t);
        {
          k_114 = t;
          h_114 :
          if(match_cons(k_114, sym__2))
            {
              l_114 = ATgetArgument(k_114, 0);
              m_114 = ATgetArgument(k_114, 1);
              {
                ATerm p_114 = NULL;
                ATerm q_114 = NULL;
                t = not_null(l_114);
                {
                  t = collect_offsets_0(t);
                  {
                    q_114 = t;
                    if(((p_114 != NULL) && (p_114 != q_114)))
                      _fail(q_114);
                    else
                      p_114 = q_114;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(p_114), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(l_114), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_114)))));
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
  ATerm w_114 = NULL,x_114 = NULL;
  w_114 = t;
  v_114 :
  if(match_cons(w_114, sym_Match_1))
    {
      x_114 = ATgetArgument(w_114, 0);
      {
        t = not_null(x_114);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm a_113 (ATerm), ATerm b_113 (ATerm))
{
  ATerm a_115 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_113(t);
        t = a_115(t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = b_113(t);
      }
    return(t);
  }
  t = a_115(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_113 (ATerm))
{
  t = repeat_2(t, d_113, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm c_97 (ATerm))
{
  ATerm b_115 (ATerm t)
  {
    t = c_97(t);
    {
      t = _all(t, b_115);
      t = c_97(t);
    }
    return(t);
  }
  t = b_115(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm m_26 = t;
      int n_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          LocalPopChoice(n_26);
        }
      else
        {
          t = m_26;
          {
            ATerm o_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                LocalPopChoice(p_26);
              }
            else
              {
                t = o_26;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_2(t, h_4, _id);
    return(t);
  }
  t = downup_1(t, e_4);
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
ATerm SDef_3 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL;
  j_115 = t;
  i_115 :
  if(match_cons(j_115, sym_SDef_3))
    {
      k_115 = ATgetArgument(j_115, 0);
      l_115 = ATgetArgument(j_115, 1);
      m_115 = ATgetArgument(j_115, 2);
      {
        ATerm r_115 = NULL,t_115 = NULL;
        ATerm s_115 = NULL;
        t = SSLgetAnnotations(not_null(j_115));
        {
          s_115 = t;
          if(((r_115 != NULL) && (r_115 != s_115)))
            _fail(s_115);
          else
            r_115 = s_115;
        }
        {
          t = not_null(k_115);
          {
            ATerm v_115 = NULL;
            t = m_85(t);
            {
              t_115 = t;
              {
                t = not_null(l_115);
                {
                  ATerm x_115 = NULL;
                  t = n_85(t);
                  {
                    v_115 = t;
                    {
                      t = not_null(m_115);
                      {
                        ATerm z_115 = NULL;
                        t = o_85(t);
                        {
                          x_115 = t;
                          {
                            ATerm a_116 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(t_115), not_null(v_115), not_null(x_115)), not_null(r_115));
                            {
                              a_116 = t;
                              if(((z_115 != NULL) && (z_115 != a_116)))
                                _fail(a_116);
                              else
                                z_115 = a_116;
                            }
                            t = not_null(z_115);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm m_116 = NULL,n_116 = NULL;
  m_116 = t;
  l_116 :
  if(match_cons(m_116, sym_Strategies_1))
    {
      n_116 = ATgetArgument(m_116, 0);
      {
        ATerm q_116 = NULL,s_116 = NULL;
        ATerm r_116 = NULL;
        t = SSLgetAnnotations(not_null(m_116));
        {
          r_116 = t;
          if(((q_116 != NULL) && (q_116 != r_116)))
            _fail(r_116);
          else
            q_116 = r_116;
        }
        {
          t = not_null(n_116);
          {
            ATerm u_116 = NULL;
            t = q_86(t);
            {
              s_116 = t;
              {
                ATerm v_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(s_116)), not_null(q_116));
                {
                  v_116 = t;
                  if(((u_116 != NULL) && (u_116 != v_116)))
                    _fail(v_116);
                  else
                    u_116 = v_116;
                }
                t = not_null(u_116);
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
ATerm Specification_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm k_117 = NULL,l_117 = NULL;
  k_117 = t;
  j_117 :
  if(match_cons(k_117, sym_Specification_1))
    {
      l_117 = ATgetArgument(k_117, 0);
      {
        ATerm q_117 = NULL,s_117 = NULL;
        ATerm r_117 = NULL;
        t = SSLgetAnnotations(not_null(k_117));
        {
          r_117 = t;
          if(((q_117 != NULL) && (q_117 != r_117)))
            _fail(r_117);
          else
            q_117 = r_117;
        }
        {
          t = not_null(l_117);
          {
            ATerm u_117 = NULL;
            t = s_86(t);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm e_95 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm j_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, e_95);
            return(t);
          }
          t = map_1(t, o_4);
          return(t);
        }
        t = Strategies_1(t, n_4);
        return(t);
      }
      t = Cons_2(t, k_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, j_4);
    return(t);
  }
  t = Specification_1(t, i_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm n_82 (ATerm), ATerm o_82 (ATerm))
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL;
  g_118 = t;
  f_118 :
  if(match_cons(g_118, sym__2))
    {
      h_118 = ATgetArgument(g_118, 0);
      i_118 = ATgetArgument(g_118, 1);
      {
        ATerm m_118 = NULL,p_118 = NULL;
        ATerm n_118 = NULL;
        t = SSLgetAnnotations(not_null(g_118));
        {
          n_118 = t;
          if(((m_118 != NULL) && (m_118 != n_118)))
            _fail(n_118);
          else
            m_118 = n_118;
        }
        {
          t = not_null(h_118);
          {
            ATerm s_118 = NULL;
            t = n_82(t);
            {
              p_118 = t;
              {
                t = not_null(i_118);
                {
                  ATerm y_118 = NULL;
                  t = o_82(t);
                  {
                    s_118 = t;
                    {
                      ATerm z_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_118), not_null(s_118)), not_null(m_118));
                      {
                        z_118 = t;
                        if(((y_118 != NULL) && (y_118 != z_118)))
                          _fail(z_118);
                        else
                          y_118 = z_118;
                      }
                      t = not_null(y_118);
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
  ATerm r_119 = NULL;
  ATerm q_26;
  q_26 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm s_119 = NULL,t_119 = NULL;
      s_119 = t;
      q_119 :
      if(match_cons(s_119, sym_Program_1))
        {
          t_119 = ATgetArgument(s_119, 0);
          if(((r_119 != NULL) && (r_119 != t_119)))
            _fail(t_119);
          else
            r_119 = t_119;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, p_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_26), not_null(r_119)), term_v_26));
      {
        t = printnl_0(t);
        {
          t = term_u_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_26;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL;
  x_119 = t;
  w_119 :
  if(match_cons(x_119, sym__2))
    {
      y_119 = ATgetArgument(x_119, 0);
      z_119 = ATgetArgument(x_119, 1);
      {
        ATerm c_27;
        c_27 = t;
        t = SSL_printnl(not_null(y_119), not_null(z_119));
        t = c_27;
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
  ATerm e_120 = NULL;
  e_120 = t;
  t = SSL_implode_string(not_null(e_120));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = d_27;
      {
        ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL;
        l_120 = t;
        k_120 :
        if(((ATgetType(l_120) == AT_LIST) && !(ATisEmpty(l_120))))
          {
            m_120 = ATgetFirst((ATermList) l_120);
            n_120 = (ATerm) ATgetNext((ATermList) l_120);
            {
              t = not_null(m_120);
              {
                ATerm q_4 (ATerm t)
                {
                  t = not_null(n_120);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_4);
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
  ATerm x_120 = NULL;
  ATerm z_120 = NULL;
  x_120 = t;
  {
    ATerm a_121 = NULL;
    ATerm c_121 = NULL,d_121 = NULL,e_121 = NULL;
    t = not_null(x_120);
    {
      a_121 = t;
      {
        t = SSL_explode_term(not_null(a_121));
        {
          c_121 = t;
          v_120 :
          if(match_cons(c_121, sym__2))
            {
              d_121 = ATgetArgument(c_121, 0);
              e_121 = ATgetArgument(c_121, 1);
              w_120 :
              if(match_string(d_121, ""))
                {
                  if(((z_120 != NULL) && (z_120 != e_121)))
                    _fail(e_121);
                  else
                    z_120 = e_121;
                }
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
      t = not_null(z_120);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_103 (ATerm))
{
  ATerm i_121 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_121);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          t = Nil_0(t);
          t = v_103(t);
        }
      }
    return(t);
  }
  t = i_121(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL;
  m_121 = t;
  k_121 :
  if(match_cons(m_121, sym__2))
    {
      n_121 = ATgetArgument(m_121, 0);
      o_121 = ATgetArgument(m_121, 1);
      {
        t = not_null(n_121);
        {
          ATerm r_4 (ATerm t)
          {
            t = not_null(o_121);
            return(t);
          }
          t = at_end_1(t, r_4);
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
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_121 = NULL;
  t_121 = t;
  t = SSL_explode_string(not_null(t_121));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_117 (ATerm))
{
  ATerm q_27;
  q_27 = t;
  {
    ATerm y_121 = NULL,a_122 = NULL;
    ATerm r_27;
    r_27 = t;
    {
      ATerm z_121 = NULL;
      t = m_117(t);
      {
        z_121 = t;
        if(((y_121 != NULL) && (y_121 != z_121)))
          _fail(z_121);
        else
          y_121 = z_121;
      }
    }
    t = r_27;
    {
      ATerm b_122 = NULL;
      b_122 = t;
      if(((a_122 != NULL) && (a_122 != b_122)))
        _fail(b_122);
      else
        a_122 = b_122;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_122)), not_null(y_121)));
        t = printnl_0(t);
      }
    }
  }
  t = q_27;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_122 = NULL;
  f_122 = t;
  t = SSL_is_string(not_null(f_122));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = w_27;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, s_4);
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL;
              u_122 = t;
              t_122 :
              if(match_cons(u_122, sym_Path_1))
                {
                  v_122 = ATgetArgument(u_122, 0);
                  t = not_null(v_122);
                }
              else
                {
                  if(match_cons(u_122, sym_Var_1))
                    {
                      v_122 = ATgetArgument(u_122, 0);
                      {
                        t = not_null(v_122);
                        {
                          ATerm y_27 = t;
                          int z_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_27);
                            }
                          else
                            {
                              t = y_27;
                              {
                                ATerm t_4 (ATerm t)
                                {
                                  t = term_d_28;
                                  return(t);
                                }
                                t = debug_1(t, t_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_122, sym_Prefix_2))
                        {
                          v_122 = ATgetArgument(u_122, 0);
                          w_122 = ATgetArgument(u_122, 1);
                          {
                            ATerm b_123 = NULL,d_123 = NULL;
                            ATerm e_28;
                            e_28 = t;
                            {
                              ATerm c_123 = NULL;
                              t = not_null(v_122);
                              {
                                t = eval_config_0(t);
                                {
                                  c_123 = t;
                                  if(((b_123 != NULL) && (b_123 != c_123)))
                                    _fail(c_123);
                                  else
                                    b_123 = c_123;
                                }
                              }
                            }
                            t = e_28;
                            {
                              ATerm e_123 = NULL;
                              t = not_null(w_122);
                              {
                                t = eval_config_0(t);
                                {
                                  e_123 = t;
                                  if(((d_123 != NULL) && (d_123 != e_123)))
                                    _fail(e_123);
                                  else
                                    d_123 = e_123;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_123), not_null(d_123));
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
  ATerm m_123 = NULL;
  m_123 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(m_123));
    {
      t = table_get_0(t);
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm q_28;
              q_28 = t;
              {
                ATerm o_123 = NULL;
                ATerm p_123 = NULL;
                p_123 = t;
                if(((o_123 != NULL) && (o_123 != p_123)))
                  _fail(p_123);
                else
                  o_123 = p_123;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_28, not_null(m_123), not_null(o_123));
                  t = table_put_0(t);
                }
              }
              t = q_28;
            }
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_120 (ATerm))
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28;
      v_28 = t;
      {
        ATerm t_123 = NULL;
        ATerm u_123 = NULL;
        t = term_w_28;
        {
          t = get_config_0(t);
          {
            u_123 = t;
            if(((t_123 != NULL) && (t_123 != u_123)))
              _fail(u_123);
            else
              t_123 = u_123;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_123), term_x_28);
          t = geq_0(t);
        }
      }
      t = v_28;
      t = j_120(t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_123 = NULL,z_123 = NULL,a_124 = NULL;
  y_123 = t;
  x_123 :
  if(match_cons(y_123, sym__2))
    {
      z_123 = ATgetArgument(y_123, 0);
      a_124 = ATgetArgument(y_123, 1);
      t = SSL_WriteToTextFile(not_null(z_123), not_null(a_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_124 = NULL,i_124 = NULL,j_124 = NULL;
  h_124 = t;
  g_124 :
  if(match_cons(h_124, sym__2))
    {
      i_124 = ATgetArgument(h_124, 0);
      j_124 = ATgetArgument(h_124, 1);
      t = SSL_WriteToBinaryFile(not_null(i_124), not_null(j_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_124 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_4 (ATerm t)
          {
            ATerm u_124 = NULL,v_124 = NULL;
            u_124 = t;
            o_124 :
            if(match_cons(u_124, sym_Output_1))
              {
                v_124 = ATgetArgument(u_124, 0);
                if(((t_124 != NULL) && (t_124 != v_124)))
                  _fail(v_124);
                else
                  t_124 = v_124;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, v_4);
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          {
            ATerm w_124 = NULL;
            t = term_b_29;
            {
              w_124 = t;
              if(((t_124 != NULL) && (t_124 != w_124)))
                _fail(w_124);
              else
                t_124 = w_124;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_4, _id);
  }
  t = y_28;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        t = not_null(t_124);
        return(t);
      }
      t = split_2(t, x_4, _id);
      return(t);
    }
    t = _2(t, _id, w_4);
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 (ATerm t)
          {
            ATerm z_4 (ATerm t)
            {
              ATerm x_124 = NULL;
              x_124 = t;
              s_124 :
              if(!(match_cons(x_124, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, z_4);
            return(t);
          }
          t = _2(t, y_4, WriteToBinaryFile_0);
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_118 (ATerm))
{
  ATerm d_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL;
  ATerm e_29;
  e_29 = t;
  t = dtime_0(t);
  t = e_29;
  {
    t = q_118(t);
    {
      ATerm f_29;
      f_29 = t;
      {
        ATerm e_125 = NULL;
        t = dtime_0(t);
        {
          e_125 = t;
          if(((d_125 != NULL) && (d_125 != e_125)))
            _fail(e_125);
          else
            d_125 = e_125;
        }
      }
      t = f_29;
      {
        f_125 = t;
        c_125 :
        if(match_cons(f_125, sym__2))
          {
            g_125 = ATgetArgument(f_125, 0);
            h_125 = ATgetArgument(f_125, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_125)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_125))), not_null(h_125));
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
  ATerm n_125 = NULL;
  n_125 = t;
  t = SSL_ReadFromFile(not_null(n_125));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_100 (ATerm), ATerm t_100 (ATerm))
{
  ATerm s_125 = NULL,u_125 = NULL;
  ATerm g_29;
  g_29 = t;
  {
    ATerm t_125 = NULL;
    t = s_100(t);
    {
      t_125 = t;
      if(((s_125 != NULL) && (s_125 != t_125)))
        _fail(t_125);
      else
        s_125 = t_125;
    }
  }
  t = g_29;
  {
    ATerm v_125 = NULL;
    t = t_100(t);
    {
      v_125 = t;
      if(((u_125 != NULL) && (u_125 != v_125)))
        _fail(v_125);
      else
        u_125 = v_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_125), not_null(u_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_126 = NULL;
  ATerm h_29;
  h_29 = t;
  {
    ATerm i_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 (ATerm t)
        {
          ATerm c_126 = NULL,d_126 = NULL;
          c_126 = t;
          z_125 :
          if(match_cons(c_126, sym_Input_1))
            {
              d_126 = ATgetArgument(c_126, 0);
              if(((b_126 != NULL) && (b_126 != d_126)))
                _fail(d_126);
              else
                b_126 = d_126;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, a_5);
        LocalPopChoice(m_29);
      }
    else
      {
        t = i_29;
        {
          ATerm e_126 = NULL;
          t = term_n_29;
          {
            e_126 = t;
            if(((b_126 != NULL) && (b_126 != e_126)))
              _fail(e_126);
            else
              b_126 = e_126;
          }
        }
      }
  }
  t = h_29;
  {
    ATerm b_5 (ATerm t)
    {
      t = not_null(b_126);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_5);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm i_126 = NULL;
    i_126 = t;
    h_126 :
    if(!(match_string(i_126, "-v")))
      {
        if(!(match_string(i_126, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_v_29;
    t = set_config_0(t);
    t = term_z_29;
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_c_30;
    return(t);
  }
  t = Option_3(t, c_5, d_5, e_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm l_126 = NULL;
    l_126 = t;
    j_126 :
    if(!(match_string(l_126, "-k")))
      {
        if(!(match_string(l_126, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm d_30;
    d_30 = t;
    {
      ATerm m_126 = NULL;
      ATerm n_126 = NULL;
      t = string_to_int_0(t);
      {
        n_126 = t;
        if(((m_126 != NULL) && (m_126 != n_126)))
          _fail(n_126);
        else
          m_126 = n_126;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_30, not_null(m_126));
        t = set_config_0(t);
      }
    }
    t = d_30;
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_f_30;
    return(t);
  }
  t = ArgOption_3(t, f_5, g_5, h_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_126 = NULL;
  q_126 = t;
  t = SSL_string_to_int(not_null(q_126));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 (ATerm t)
      {
        ATerm y_126 = NULL;
        y_126 = t;
        t_126 :
        if(!(match_string(y_126, "-S")))
          {
            if(!(match_string(y_126, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = term_i_30;
        t = set_config_0(t);
        t = term_j_30;
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_l_30;
        return(t);
      }
      t = Option_3(t, i_5, j_5, k_5);
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 (ATerm t)
            {
              ATerm z_126 = NULL;
              z_126 = t;
              u_126 :
              if(!(match_string(z_126, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              ATerm c_127 = NULL;
              ATerm o_30;
              o_30 = t;
              {
                ATerm a_127 = NULL;
                ATerm b_127 = NULL;
                t = string_to_int_0(t);
                {
                  b_127 = t;
                  if(((a_127 != NULL) && (a_127 != b_127)))
                    _fail(b_127);
                  else
                    a_127 = b_127;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_28, not_null(a_127));
                  t = set_config_0(t);
                }
              }
              t = o_30;
              {
                ATerm d_127 = NULL;
                d_127 = t;
                if(((c_127 != NULL) && (c_127 != d_127)))
                  _fail(d_127);
                else
                  c_127 = d_127;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_127));
              }
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              t = term_s_30;
              return(t);
            }
            t = ArgOption_3(t, l_5, m_5, n_5);
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm o_5 (ATerm t)
              {
                ATerm e_127 = NULL;
                e_127 = t;
                x_126 :
                if(!(match_string(e_127, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_5 (ATerm t)
              {
                t = term_x_30;
                t = set_config_0(t);
                t = term_a_31;
                return(t);
              }
              ATerm q_5 (ATerm t)
              {
                t = term_b_31;
                return(t);
              }
              t = Option_3(t, o_5, p_5, q_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm k_127 = NULL;
    k_127 = t;
    h_127 :
    if(!(match_string(k_127, "-o")))
      {
        if(!(match_string(k_127, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm o_127 = NULL;
    ATerm g_31;
    g_31 = t;
    {
      ATerm l_127 = NULL;
      ATerm m_127 = NULL;
      m_127 = t;
      if(((l_127 != NULL) && (l_127 != m_127)))
        _fail(m_127);
      else
        l_127 = m_127;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_31, not_null(l_127));
        t = set_config_0(t);
      }
    }
    t = g_31;
    {
      ATerm p_127 = NULL;
      p_127 = t;
      if(((o_127 != NULL) && (o_127 != p_127)))
        _fail(p_127);
      else
        o_127 = p_127;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_127));
    }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_o_31;
    return(t);
  }
  t = ArgOption_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm u_5 (ATerm t)
        {
          ATerm t_127 = NULL;
          t_127 = t;
          s_127 :
          if(!(match_string(t_127, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_s_31;
          t = set_config_0(t);
          t = term_t_31;
          return(t);
        }
        ATerm w_5 (ATerm t)
        {
          t = term_w_31;
          return(t);
        }
        t = Option_3(t, u_5, v_5, w_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL,d_128 = NULL;
  z_127 = t;
  x_127 :
  if(match_string(z_127, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(z_127) == AT_LIST) && !(ATisEmpty(z_127))))
        {
          a_128 = ATgetFirst((ATermList) z_127);
          b_128 = (ATerm) ATgetNext((ATermList) z_127);
          y_127 :
          if(((ATgetType(b_128) == AT_LIST) && !(ATisEmpty(b_128))))
            {
              c_128 = ATgetFirst((ATermList) b_128);
              d_128 = (ATerm) ATgetNext((ATermList) b_128);
              {
                ATerm h_128 = NULL;
                ATerm b_32;
                b_32 = t;
                {
                  t = not_null(a_128);
                  t = l_0(t);
                }
                t = b_32;
                {
                  ATerm i_128 = NULL;
                  t = not_null(c_128);
                  {
                    t = n_0(t);
                    {
                      i_128 = t;
                      if(((h_128 != NULL) && (h_128 != i_128)))
                        _fail(i_128);
                      else
                        h_128 = i_128;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_128)), not_null(h_128));
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
  ATerm x_5 (ATerm t)
  {
    ATerm p_128 = NULL;
    p_128 = t;
    m_128 :
    if(!(match_string(p_128, "-i")))
      {
        if(!(match_string(p_128, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm t_128 = NULL;
    ATerm c_32;
    c_32 = t;
    {
      ATerm q_128 = NULL;
      ATerm s_128 = NULL;
      s_128 = t;
      if(((q_128 != NULL) && (q_128 != s_128)))
        _fail(s_128);
      else
        q_128 = s_128;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_32, not_null(q_128));
        t = set_config_0(t);
      }
    }
    t = c_32;
    {
      ATerm u_128 = NULL;
      u_128 = t;
      if(((t_128 != NULL) && (t_128 != u_128)))
        _fail(u_128);
      else
        t_128 = u_128;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_128));
    }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_e_32;
    return(t);
  }
  t = ArgOption_3(t, x_5, y_5, z_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATempty, term_j_32));
  {
    t = printnl_0(t);
    {
      t = term_u_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_128 = NULL;
  y_128 = t;
  t = SSL_TicksToSeconds(not_null(y_128));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_129 = NULL,f_129 = NULL,g_129 = NULL;
  e_129 = t;
  c_129 :
  if(match_cons(e_129, sym__2))
    {
      f_129 = ATgetArgument(e_129, 0);
      g_129 = ATgetArgument(e_129, 1);
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_129), not_null(g_129));
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            t = SSL_addr(not_null(f_129), not_null(g_129));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_107 (ATerm), ATerm v_107 (ATerm))
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_107(t);
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm n_129 = NULL,o_129 = NULL,p_129 = NULL;
        n_129 = t;
        m_129 :
        if(((ATgetType(n_129) == AT_LIST) && !(ATisEmpty(n_129))))
          {
            o_129 = ATgetFirst((ATermList) n_129);
            p_129 = (ATerm) ATgetNext((ATermList) n_129);
            {
              ATerm s_129 = NULL;
              ATerm t_129 = NULL;
              t = not_null(p_129);
              {
                t = foldr_2(t, u_107, v_107);
                {
                  t_129 = t;
                  if(((s_129 != NULL) && (s_129 != t_129)))
                    _fail(t_129);
                  else
                    s_129 = t_129;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_129), not_null(s_129));
                t = v_107(t);
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
ATerm crush_2 (ATerm t, ATerm s_106 (ATerm), ATerm t_106 (ATerm))
{
  ATerm b_130 = NULL;
  ATerm d_130 = NULL;
  b_130 = t;
  {
    ATerm e_130 = NULL;
    ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL;
    t = not_null(b_130);
    {
      e_130 = t;
      {
        t = SSL_explode_term(not_null(e_130));
        {
          g_130 = t;
          a_130 :
          if(match_cons(g_130, sym__2))
            {
              h_130 = ATgetArgument(g_130, 0);
              i_130 = ATgetArgument(g_130, 1);
              if(((d_130 != NULL) && (d_130 != i_130)))
                _fail(i_130);
              else
                d_130 = i_130;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_130);
      t = foldr_2(t, s_106, t_106);
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
    ATerm a_6 (ATerm t)
    {
      t = term_u_11;
      return(t);
    }
    t = crush_2(t, a_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
  p_130 = t;
  o_130 :
  if(match_cons(p_130, sym__2))
    {
      q_130 = ATgetArgument(p_130, 0);
      r_130 = ATgetArgument(p_130, 1);
      {
        ATerm o_32;
        o_32 = t;
        {
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_130), not_null(r_130));
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
              t = SSL_gtr(not_null(q_130), not_null(r_130));
            }
        }
        t = o_32;
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
  ATerm x_130 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL;
      y_130 = t;
      w_130 :
      if(match_cons(y_130, sym__2))
        {
          z_130 = ATgetArgument(y_130, 0);
          a_131 = ATgetArgument(y_130, 1);
          {
            if(((x_130 != NULL) && (x_130 != z_130)))
              _fail(z_130);
            else
              x_130 = z_130;
            if(((x_130 != NULL) && (x_130 != a_131)))
              _fail(a_131);
            else
              x_130 = a_131;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_120 (ATerm))
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_32;
      v_32 = t;
      {
        ATerm d_131 = NULL;
        ATerm e_131 = NULL;
        t = term_w_28;
        {
          t = get_config_0(t);
          {
            e_131 = t;
            if(((d_131 != NULL) && (d_131 != e_131)))
              _fail(e_131);
            else
              d_131 = e_131;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_131), term_u_12);
          t = geq_0(t);
        }
      }
      t = v_32;
      t = i_120(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm j_131 = NULL,l_131 = NULL;
    ATerm w_32;
    w_32 = t;
    {
      ATerm k_131 = NULL;
      t = run_time_0(t);
      {
        k_131 = t;
        if(((j_131 != NULL) && (j_131 != k_131)))
          _fail(k_131);
        else
          j_131 = k_131;
      }
    }
    t = w_32;
    {
      ATerm m_131 = NULL;
      t = term_x_32;
      {
        t = get_config_0(t);
        {
          m_131 = t;
          if(((l_131 != NULL) && (l_131 != m_131)))
            _fail(m_131);
          else
            l_131 = m_131;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_32), not_null(j_131)), term_y_32), not_null(l_131)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_6);
  {
    t = term_u_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_131 = NULL;
  u_131 = t;
  t_131 :
  if(match_cons(u_131, sym_Version_0))
    {
      ATerm w_131 = NULL,y_131 = NULL;
      ATerm a_33;
      a_33 = t;
      {
        ATerm x_131 = NULL;
        t = SSLgetAnnotations(not_null(u_131));
        {
          x_131 = t;
          if(((w_131 != NULL) && (w_131 != x_131)))
            _fail(x_131);
          else
            w_131 = x_131;
        }
      }
      t = a_33;
      {
        ATerm z_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_131));
        {
          z_131 = t;
          if(((y_131 != NULL) && (y_131 != z_131)))
            _fail(z_131);
          else
            y_131 = z_131;
        }
        t = not_null(y_131);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_118 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        {
          ATerm d_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_33);
            }
          else
            {
              t = d_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_6);
  t = o_118(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_132 = NULL;
  e_132 = t;
  t = SSL_table_create(not_null(e_132));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_132 = NULL;
  i_132 = t;
  {
    ATerm f_33;
    f_33 = t;
    {
      t = term_g_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_33, term_h_33, not_null(i_132));
          t = table_put_0(t);
        }
      }
    }
    t = f_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_132 = NULL;
  n_132 = t;
  t = SSL_table_destroy(not_null(n_132));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_132 = NULL;
  r_132 = t;
  t = SSL_exit(not_null(r_132));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_132 = NULL,w_132 = NULL,x_132 = NULL;
  v_132 = t;
  u_132 :
  if(((ATgetType(v_132) == AT_LIST) && ATisEmpty(v_132)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_132) == AT_LIST) && !(ATisEmpty(v_132))))
        {
          w_132 = ATgetFirst((ATermList) v_132);
          x_132 = (ATerm) ATgetNext((ATermList) v_132);
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
  ATerm i_33;
  i_33 = t;
  {
    ATerm b_133 = NULL;
    ATerm e_133 = NULL;
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        {
          ATerm c_133 = NULL;
          ATerm d_133 = NULL;
          d_133 = t;
          if(((c_133 != NULL) && (c_133 != d_133)))
            _fail(d_133);
          else
            c_133 = d_133;
          t = (ATerm) ATinsert(ATempty, not_null(c_133));
        }
      }
    {
      e_133 = t;
      if(((b_133 != NULL) && (b_133 != e_133)))
        _fail(e_133);
      else
        b_133 = e_133;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(b_133));
      t = printnl_0(t);
    }
  }
  t = i_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_122 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_103 (ATerm))
{
  ATerm h_133 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = Cons_2(t, g_103, h_133);
      }
    return(t);
  }
  t = h_133(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm o_133 = NULL,p_133 = NULL,q_133 = NULL;
  q_133 = t;
  n_133 :
  if(((ATgetType(q_133) == AT_LIST) && !(ATisEmpty(q_133))))
    {
      o_133 = ATgetFirst((ATermList) q_133);
      p_133 = (ATerm) ATgetNext((ATermList) q_133);
      {
        ATerm u_133 = NULL;
        t = not_null(p_133);
        {
          ATerm n_33;
          n_33 = t;
          {
            ATerm v_133 = NULL,x_133 = NULL,z_133 = NULL;
            ATerm o_33;
            o_33 = t;
            {
              ATerm w_133 = NULL;
              t = k_0(t);
              {
                w_133 = t;
                if(((v_133 != NULL) && (v_133 != w_133)))
                  _fail(w_133);
                else
                  v_133 = w_133;
              }
            }
            t = o_33;
            {
              ATerm y_133 = NULL;
              t = not_null(o_133);
              {
                t = i_0(t);
                {
                  y_133 = t;
                  if(((x_133 != NULL) && (x_133 != y_133)))
                    _fail(y_133);
                  else
                    x_133 = y_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_133)), not_null(x_133));
                {
                  z_133 = t;
                  if(((u_133 != NULL) && (u_133 != z_133)))
                    _fail(z_133);
                  else
                    u_133 = z_133;
                }
              }
            }
          }
          t = n_33;
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(u_133);
              return(t);
            }
            t = reverse_acc_2(t, i_0, d_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_133) == AT_LIST) && ATisEmpty(q_133)))
        {
          {
            t = term_u_29;
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
  ATerm e_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_122 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_94 (ATerm))
{
  ATerm l_134 = NULL,m_134 = NULL;
  l_134 = t;
  k_134 :
  if(match_cons(l_134, sym_Program_1))
    {
      m_134 = ATgetArgument(l_134, 0);
      {
        ATerm p_134 = NULL,r_134 = NULL;
        ATerm q_134 = NULL;
        t = SSLgetAnnotations(not_null(l_134));
        {
          q_134 = t;
          if(((p_134 != NULL) && (p_134 != q_134)))
            _fail(q_134);
          else
            p_134 = q_134;
        }
        {
          t = not_null(m_134);
          {
            ATerm t_134 = NULL;
            t = t_94(t);
            {
              r_134 = t;
              {
                ATerm u_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_134)), not_null(p_134));
                {
                  u_134 = t;
                  if(((t_134 != NULL) && (t_134 != u_134)))
                    _fail(u_134);
                  else
                    t_134 = u_134;
                }
                t = not_null(t_134);
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
  ATerm d_135 = NULL;
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_135 = NULL;
      t = term_x_32;
      {
        t = get_config_0(t);
        {
          e_135 = t;
          if(((d_135 != NULL) && (d_135 != e_135)))
            _fail(e_135);
          else
            d_135 = e_135;
        }
      }
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm f_135 = NULL;
            f_135 = t;
            if(((d_135 != NULL) && (d_135 != f_135)))
              _fail(f_135);
            else
              d_135 = f_135;
            return(t);
          }
          t = Program_1(t, g_6);
          return(t);
        }
        t = fetch_1(t, f_6);
      }
    }
  {
    t = term_r_33;
    {
      t = echo_0(t);
      {
        t = term_u_33;
        {
          t = table_get_0(t);
          {
            ATerm h_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_6);
            {
              ATerm i_6 (ATerm t)
              {
                ATerm g_135 = NULL;
                ATerm h_135 = NULL;
                h_135 = t;
                if(((g_135 != NULL) && (g_135 != h_135)))
                  _fail(h_135);
                else
                  g_135 = h_135;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_135)), term_v_33);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_6);
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
  ATerm w_33;
  w_33 = t;
  {
    ATerm n_135 = NULL;
    ATerm o_135 = NULL;
    o_135 = t;
    if(((n_135 != NULL) && (n_135 != o_135)))
      _fail(o_135);
    else
      n_135 = o_135;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATempty, not_null(n_135)));
      t = printnl_0(t);
    }
  }
  t = w_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_117 (ATerm))
{
  ATerm x_33;
  x_33 = t;
  {
    t = n_117(t);
    t = debug_0(t);
  }
  t = x_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm v_135 = NULL,w_135 = NULL;
  v_135 = t;
  u_135 :
  if(match_cons(v_135, sym_Undefined_1))
    {
      w_135 = ATgetArgument(v_135, 0);
      {
        ATerm z_135 = NULL,b_136 = NULL;
        ATerm a_136 = NULL;
        t = SSLgetAnnotations(not_null(v_135));
        {
          a_136 = t;
          if(((z_135 != NULL) && (z_135 != a_136)))
            _fail(a_136);
          else
            z_135 = a_136;
        }
        {
          t = not_null(w_135);
          {
            ATerm d_136 = NULL;
            t = u_94(t);
            {
              b_136 = t;
              {
                ATerm e_136 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_136)), not_null(z_135));
                {
                  e_136 = t;
                  if(((d_136 != NULL) && (d_136 != e_136)))
                    _fail(e_136);
                  else
                    d_136 = e_136;
                }
                t = not_null(d_136);
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
ATerm fetch_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm j_136 (ATerm t)
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_103, _id);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = Cons_2(t, _id, j_136);
      }
    return(t);
  }
  t = j_136(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_121 (ATerm))
{
  t = fetch_1(t, l_121);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_136 = NULL;
  o_136 = t;
  n_136 :
  if(match_cons(o_136, sym_Help_0))
    {
      ATerm q_136 = NULL,s_136 = NULL;
      ATerm a_34;
      a_34 = t;
      {
        ATerm r_136 = NULL;
        t = SSLgetAnnotations(not_null(o_136));
        {
          r_136 = t;
          if(((q_136 != NULL) && (q_136 != r_136)))
            _fail(r_136);
          else
            q_136 = r_136;
        }
      }
      t = a_34;
      {
        ATerm t_136 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_136));
        {
          t_136 = t;
          if(((s_136 != NULL) && (s_136 != t_136)))
            _fail(t_136);
          else
            s_136 = t_136;
        }
        t = not_null(s_136);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_100 (ATerm))
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_100(t);
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_136 = NULL,a_137 = NULL,b_137 = NULL;
  z_136 = t;
  y_136 :
  if(match_cons(z_136, sym__2))
    {
      a_137 = ATgetArgument(z_136, 0);
      b_137 = ATgetArgument(z_136, 1);
      t = SSL_table_get(not_null(a_137), not_null(b_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL;
  i_137 = t;
  h_137 :
  if(match_cons(i_137, sym__3))
    {
      j_137 = ATgetArgument(i_137, 0);
      k_137 = ATgetArgument(i_137, 1);
      l_137 = ATgetArgument(i_137, 2);
      {
        ATerm d_34;
        d_34 = t;
        {
          ATerm p_137 = NULL;
          ATerm q_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_137), not_null(k_137));
          {
            ATerm i_34 = t;
            int j_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_34);
              }
            else
              {
                t = i_34;
                t = (ATerm) ATempty;
              }
            {
              q_137 = t;
              if(((p_137 != NULL) && (p_137 != q_137)))
                _fail(q_137);
              else
                p_137 = q_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_137), not_null(k_137), (ATerm) ATinsert(CheckATermList(not_null(p_137)), not_null(l_137)));
            t = table_put_0(t);
          }
        }
        t = d_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_122 (ATerm))
{
  ATerm u_137 = NULL;
  ATerm v_137 = NULL;
  t = term_u_29;
  {
    t = q_122(t);
    {
      v_137 = t;
      if(((u_137 != NULL) && (u_137 != v_137)))
        _fail(v_137);
      else
        u_137 = v_137;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_33, term_t_33, not_null(u_137));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_138 = NULL,c_138 = NULL,d_138 = NULL;
  b_138 = t;
  a_138 :
  if(match_string(b_138, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_138) == AT_LIST) && !(ATisEmpty(b_138))))
        {
          c_138 = ATgetFirst((ATermList) b_138);
          d_138 = (ATerm) ATgetNext((ATermList) b_138);
          {
            ATerm g_138 = NULL;
            ATerm k_34;
            k_34 = t;
            {
              t = not_null(c_138);
              t = a_0(t);
            }
            t = k_34;
            {
              ATerm h_138 = NULL;
              t = term_u_29;
              {
                t = d_0(t);
                {
                  h_138 = t;
                  if(((g_138 != NULL) && (g_138 != h_138)))
                    _fail(h_138);
                  else
                    g_138 = h_138;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_138)), not_null(g_138));
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
  ATerm j_6 (ATerm t)
  {
    ATerm m_138 = NULL;
    m_138 = t;
    l_138 :
    if(!(match_string(m_138, "--help")))
      {
        if(!(match_string(m_138, "-h")))
          {
            if(!(match_string(m_138, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_m_34;
    {
      t = set_config_0(t);
      t = term_n_34;
    }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_o_34;
    return(t);
  }
  t = Option_3(t, j_6, k_6, l_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_138 = NULL,q_138 = NULL,r_138 = NULL;
  p_138 = t;
  o_138 :
  if(((ATgetType(p_138) == AT_LIST) && !(ATisEmpty(p_138))))
    {
      q_138 = ATgetFirst((ATermList) p_138);
      r_138 = (ATerm) ATgetNext((ATermList) p_138);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_138)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_138)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_83 (ATerm), ATerm x_83 (ATerm))
{
  ATerm b_139 = NULL,c_139 = NULL,d_139 = NULL;
  b_139 = t;
  a_139 :
  if(((ATgetType(b_139) == AT_LIST) && !(ATisEmpty(b_139))))
    {
      c_139 = ATgetFirst((ATermList) b_139);
      d_139 = (ATerm) ATgetNext((ATermList) b_139);
      {
        ATerm h_139 = NULL,j_139 = NULL;
        ATerm i_139 = NULL;
        t = SSLgetAnnotations(not_null(b_139));
        {
          i_139 = t;
          if(((h_139 != NULL) && (h_139 != i_139)))
            _fail(i_139);
          else
            h_139 = i_139;
        }
        {
          t = not_null(c_139);
          {
            ATerm l_139 = NULL;
            t = w_83(t);
            {
              j_139 = t;
              {
                t = not_null(d_139);
                {
                  ATerm n_139 = NULL;
                  t = x_83(t);
                  {
                    l_139 = t;
                    {
                      ATerm o_139 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_139)), not_null(j_139)), not_null(h_139));
                      {
                        o_139 = t;
                        if(((n_139 != NULL) && (n_139 != o_139)))
                          _fail(o_139);
                        else
                          n_139 = o_139;
                      }
                      t = not_null(n_139);
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
  ATerm y_139 = NULL;
  y_139 = t;
  x_139 :
  if(((ATgetType(y_139) == AT_LIST) && ATisEmpty(y_139)))
    {
      {
        ATerm a_140 = NULL,c_140 = NULL;
        ATerm p_34;
        p_34 = t;
        {
          ATerm b_140 = NULL;
          t = SSLgetAnnotations(not_null(y_139));
          {
            b_140 = t;
            if(((a_140 != NULL) && (a_140 != b_140)))
              _fail(b_140);
            else
              a_140 = b_140;
          }
        }
        t = p_34;
        {
          ATerm d_140 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_140));
          {
            d_140 = t;
            if(((c_140 != NULL) && (c_140 != d_140)))
              _fail(d_140);
            else
              c_140 = d_140;
          }
          t = not_null(c_140);
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
  ATerm j_140 = NULL,k_140 = NULL,l_140 = NULL;
  j_140 = t;
  i_140 :
  if(match_cons(j_140, sym__2))
    {
      k_140 = ATgetArgument(j_140, 0);
      l_140 = ATgetArgument(j_140, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_28, not_null(k_140), not_null(l_140));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_122 (ATerm))
{
  ATerm q_34;
  q_34 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_34;
        t = o_122(t);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        {
        }
      }
  }
  t = q_34;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm t_140 = NULL;
      ATerm u_34;
      u_34 = t;
      {
        ATerm r_140 = NULL;
        ATerm s_140 = NULL;
        s_140 = t;
        if(((r_140 != NULL) && (r_140 != s_140)))
          _fail(s_140);
        else
          r_140 = s_140;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_32, not_null(r_140));
          t = set_config_0(t);
        }
      }
      t = u_34;
      {
        ATerm u_140 = NULL;
        u_140 = t;
        if(((t_140 != NULL) && (t_140 != u_140)))
          _fail(u_140);
        else
          t_140 = u_140;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_140));
      }
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm v_34 = t;
      int w_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_34);
            }
          else
            {
              t = x_34;
              {
                t = o_122(t);
                t = Cons_2(t, _id, n_6);
              }
            }
          LocalPopChoice(w_34);
        }
      else
        {
          t = v_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_6, n_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL;
  ATerm z_34;
  z_34 = t;
  {
    ATerm d_141 = NULL,e_141 = NULL,f_141 = NULL,g_141 = NULL;
    d_141 = t;
    z_140 :
    if(match_cons(d_141, sym__3))
      {
        e_141 = ATgetArgument(d_141, 0);
        f_141 = ATgetArgument(d_141, 1);
        g_141 = ATgetArgument(d_141, 2);
        {
          if(((a_141 != NULL) && (a_141 != e_141)))
            _fail(e_141);
          else
            a_141 = e_141;
          {
            if(((b_141 != NULL) && (b_141 != f_141)))
              _fail(f_141);
            else
              b_141 = f_141;
            {
              if(((c_141 != NULL) && (c_141 != g_141)))
                _fail(g_141);
              else
                c_141 = g_141;
              t = SSL_table_put(not_null(a_141), not_null(b_141), not_null(c_141));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_122 (ATerm))
{
  ATerm j_141 = NULL;
  ATerm a_35;
  a_35 = t;
  {
    t = term_d_35;
    t = table_put_0(t);
  }
  t = a_35;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_122(t);
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_6);
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_35;
          i_35 = t;
          {
            ATerm j_35 = t;
            int p_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_l_34;
                t = get_config_0(t);
                LocalPopChoice(p_35);
              }
            else
              {
                t = j_35;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_35;
          {
            t = system_usage_0(t);
            {
              t = term_u_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          {
            ATerm q_35 = t;
            int w_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_6 (ATerm t)
                {
                  ATerm q_6 (ATerm t)
                  {
                    ATerm k_141 = NULL;
                    k_141 = t;
                    if(((j_141 != NULL) && (j_141 != k_141)))
                      _fail(k_141);
                    else
                      j_141 = k_141;
                    return(t);
                  }
                  t = Undefined_1(t, q_6);
                  return(t);
                }
                t = fetch_1(t, p_6);
                {
                  ATerm r_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_141)), term_x_35);
                    return(t);
                  }
                  t = say_1(t, r_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_u_12;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_35);
              }
            else
              {
                t = q_35;
                {
                }
              }
          }
        }
      {
        ATerm y_35;
        y_35 = t;
        {
          t = term_s_33;
          t = table_destroy_0(t);
        }
        t = y_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm), ATerm x_118 (ATerm))
{
  t = parse_options_1(t, u_118);
  {
    t = store_options_0(t);
    {
      t = w_118(t);
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_118);
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            {
              ATerm g_36 = t;
              int h_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_118(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_36);
                }
              else
                {
                  t = g_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_119(t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_119);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_6, n_119, o_119, t_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm r_36;
      r_36 = t;
      {
        ATerm n_141 = NULL;
        ATerm o_141 = NULL;
        t = term_x_32;
        {
          t = get_config_0(t);
          {
            o_141 = t;
            if(((n_141 != NULL) && (n_141 != o_141)))
              _fail(o_141);
            else
              n_141 = o_141;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_26, (ATerm) ATinsert(ATempty, not_null(n_141)));
          t = printnl_0(t);
        }
      }
      t = r_36;
      return(t);
    }
    t = if_verbose2_1(t, v_6);
    return(t);
  }
  t = iowrap_4(t, f_119, g_119, h_119, u_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_119 (ATerm), ATerm e_119 (ATerm))
{
  t = iowrap_3(t, d_119, e_119, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_119 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    t = _2(t, _id, a_119);
    return(t);
  }
  t = iowrap_2(t, w_6, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, x_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
