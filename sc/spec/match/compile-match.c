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
Symbol sym_CUT_0;
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_b_35;
ATerm term_q_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_y_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_n_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_h_26;
ATerm term_c_25;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_y_15;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_u_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_o_11;
void init_constant_terms (void)
{
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
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
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATempty);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_o_11);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_11);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_p_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_x_31, term_p_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_p_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_p_31);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__3, term_s_33, term_t_33, (ATerm) ATempty);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm j_95 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm));
ATerm Let_2 (ATerm, ATerm p_84 (ATerm), ATerm q_84 (ATerm));
ATerm sboundin_3 (ATerm, ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm m_95 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm m_84 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm f_95 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm r_86 (ATerm));
ATerm Scope_2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm tboundin_3 (ATerm, ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm i_95 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm diff_1 (ATerm, ATerm d_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_112 (ATerm), ATerm x_112 (ATerm));
ATerm for_3 (ATerm, ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm s_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm y_108 (ATerm), ATerm z_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm s_108 (ATerm), ATerm t_108 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm d_109 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm w_109 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm g_109 (ATerm));
ATerm rename_4 (ATerm, ATerm n_108 (ATerm, ATerm (ATerm)), ATerm o_108 (ATerm), ATerm p_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_108 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm v_87 (ATerm));
ATerm Call_2 (ATerm, ATerm b_85 (ATerm), ATerm c_85 (ATerm));
ATerm Str_1 (ATerm, ATerm y_0 (ATerm));
ATerm Real_1 (ATerm, ATerm x_0 (ATerm));
ATerm Int_1 (ATerm, ATerm w_0 (ATerm));
ATerm Var_1 (ATerm, ATerm v_0 (ATerm));
ATerm list_1 (ATerm, ATerm o_102 (ATerm));
ATerm Build_1 (ATerm, ATerm i_83 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm k_116 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm r_0 (ATerm), ATerm t_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm j_123 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm m_101 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm r_103 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm b_108 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm Row_3 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm h_116 (ATerm));
ATerm restore_always_2 (ATerm, ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm g_116 (ATerm));
ATerm scope_2 (ATerm, ATerm i_116 (ATerm), ATerm j_116 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm d_101 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm g_87 (ATerm), ATerm h_87 (ATerm));
ATerm Prim_2 (ATerm, ATerm d_83 (ATerm), ATerm e_83 (ATerm));
ATerm Explode_2 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm));
ATerm Op_2 (ATerm, ATerm h_85 (ATerm), ATerm i_85 (ATerm));
ATerm pat_td_1 (ATerm, ATerm m_94 (ATerm));
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
ATerm foldr_3 (ATerm, ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm));
ATerm crush_3 (ATerm, ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm));
ATerm collect_om_1 (ATerm, ATerm x_104 (ATerm));
ATerm collect_1 (ATerm, ATerm z_104 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm l_106 (ATerm), ATerm m_106 (ATerm));
ATerm union_1 (ATerm, ATerm h_106 (ATerm));
ATerm unions_1 (ATerm, ATerm j_106 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm i_101 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm j_104 (ATerm), ATerm k_104 (ATerm));
ATerm collect_split_2 (ATerm, ATerm o_105 (ATerm), ATerm p_105 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm k_94 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm j_101 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_96 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm f_112 (ATerm), ATerm g_112 (ATerm));
ATerm repeat_1 (ATerm, ATerm i_112 (ATerm));
ATerm downup_1 (ATerm, ATerm h_96 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm));
ATerm Strategies_1 (ATerm, ATerm v_85 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_85 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm j_94 (ATerm));
ATerm _2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_103 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_116 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_119 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_117 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm y_106 (ATerm), ATerm z_106 (ATerm));
ATerm crush_2 (ATerm, ATerm w_105 (ATerm), ATerm x_105 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_119 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_117 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_121 (ATerm));
ATerm map_1 (ATerm, ATerm m_102 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_121 (ATerm));
ATerm Program_1 (ATerm, ATerm y_93 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_116 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_93 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_102 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_120 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_121 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_83 (ATerm), ATerm c_83 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_121 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_121 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_118 (ATerm), ATerm j_118 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_118 (ATerm));
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
ATerm spaste_1 (ATerm t, ATerm j_95 (ATerm))
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, j_95);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL;
            n_8 = t;
            t_7 :
            if(match_cons(n_8, sym__2))
              {
                o_8 = ATgetArgument(n_8, 0);
                t_8 = ATgetArgument(n_8, 1);
                f_8 :
                if(match_cons(o_8, sym_SDef_3))
                  {
                    p_8 = ATgetArgument(o_8, 0);
                    q_8 = ATgetArgument(o_8, 1);
                    r_8 = ATgetArgument(o_8, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_8), not_null(q_8), not_null(r_8));
                  }
                else
                  {
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
              t = split_2(t, _id, j_95);
              {
                ATerm g_0 (ATerm t)
                {
                  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
                  x_8 = t;
                  h_8 :
                  if(match_cons(x_8, sym__2))
                    {
                      y_8 = ATgetArgument(x_8, 0);
                      b_9 = ATgetArgument(x_8, 1);
                      l_8 :
                      if(match_cons(y_8, sym_VarDec_2))
                        {
                          z_8 = ATgetArgument(y_8, 0);
                          a_9 = ATgetArgument(y_8, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(b_9), not_null(a_9));
                        }
                      else
                        {
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
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(b_7);
          }
        else
          {
            t = a_7;
            {
              ATerm h_0 (ATerm t)
              {
                t = j_95(t);
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
ATerm Rec_2 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm))
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym_Rec_2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      {
        ATerm t_9 = NULL,v_9 = NULL;
        ATerm u_9 = NULL;
        t = SSLgetAnnotations(not_null(n_9));
        {
          u_9 = t;
          if(((t_9 != NULL) && (t_9 != u_9)))
            _fail(u_9);
          else
            t_9 = u_9;
        }
        {
          t = not_null(o_9);
          {
            ATerm x_9 = NULL;
            t = n_84(t);
            {
              v_9 = t;
              {
                t = not_null(p_9);
                {
                  ATerm z_9 = NULL;
                  t = o_84(t);
                  {
                    x_9 = t;
                    {
                      ATerm a_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(v_9), not_null(x_9)), not_null(t_9));
                      {
                        a_10 = t;
                        if(((z_9 != NULL) && (z_9 != a_10)))
                          _fail(a_10);
                        else
                          z_9 = a_10;
                      }
                      t = not_null(z_9);
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
ATerm Let_2 (ATerm t, ATerm p_84 (ATerm), ATerm q_84 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_Let_2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(m_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(n_10);
          {
            ATerm w_10 = NULL;
            t = p_84(t);
            {
              u_10 = t;
              {
                t = not_null(o_10);
                {
                  ATerm y_10 = NULL;
                  t = q_84(t);
                  {
                    w_10 = t;
                    {
                      ATerm z_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(u_10), not_null(w_10)), not_null(s_10));
                      {
                        z_10 = t;
                        if(((y_10 != NULL) && (y_10 != z_10)))
                          _fail(z_10);
                        else
                          y_10 = z_10;
                      }
                      t = not_null(y_10);
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
ATerm sboundin_3 (ATerm t, ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm m_95 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, k_95, k_95);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, m_95, m_95, k_95);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            t = Rec_2(t, m_95, k_95);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym_Rec_2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      t = (ATerm) ATinsert(ATempty, not_null(i_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym_SDef_3))
    {
      s_11 = ATgetArgument(r_11, 0);
      t_11 = ATgetArgument(r_11, 1);
      u_11 = ATgetArgument(r_11, 2);
      {
        t = not_null(t_11);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
            y_11 = t;
            p_11 :
            if(match_cons(y_11, sym_VarDec_2))
              {
                z_11 = ATgetArgument(y_11, 0);
                a_12 = ATgetArgument(y_11, 1);
                t = not_null(z_11);
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
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_Let_2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      {
        t = not_null(j_12);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
            n_12 = t;
            g_12 :
            if(match_cons(n_12, sym_SDef_3))
              {
                o_12 = ATgetArgument(n_12, 0);
                p_12 = ATgetArgument(n_12, 1);
                q_12 = ATgetArgument(n_12, 2);
                t = not_null(o_12);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm b_13 = NULL,c_13 = NULL;
  b_13 = t;
  a_13 :
  if(match_cons(b_13, sym_SVar_1))
    {
      c_13 = ATgetArgument(b_13, 0);
      {
        ATerm f_13 = NULL,h_13 = NULL;
        ATerm g_13 = NULL;
        t = SSLgetAnnotations(not_null(b_13));
        {
          g_13 = t;
          if(((f_13 != NULL) && (f_13 != g_13)))
            _fail(g_13);
          else
            f_13 = g_13;
        }
        {
          t = not_null(c_13);
          {
            ATerm j_13 = NULL;
            t = m_84(t);
            {
              h_13 = t;
              {
                ATerm k_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(h_13)), not_null(f_13));
                {
                  k_13 = t;
                  if(((j_13 != NULL) && (j_13 != k_13)))
                    _fail(k_13);
                  else
                    j_13 = k_13;
                }
                t = not_null(j_13);
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
  ATerm o_0 (ATerm t)
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          ATerm i_7 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(j_7);
            }
          else
            {
              t = i_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, o_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm f_95 (ATerm))
{
  t = Scope_2(t, f_95, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_DynamicRules_1))
    {
      v_13 = ATgetArgument(u_13, 0);
      {
        ATerm y_13 = NULL,a_14 = NULL;
        ATerm z_13 = NULL;
        t = SSLgetAnnotations(not_null(u_13));
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        {
          t = not_null(v_13);
          {
            ATerm c_14 = NULL;
            t = r_86(t);
            {
              a_14 = t;
              {
                ATerm d_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(a_14)), not_null(y_13));
                {
                  d_14 = t;
                  if(((c_14 != NULL) && (c_14 != d_14)))
                    _fail(d_14);
                  else
                    c_14 = d_14;
                }
                t = not_null(c_14);
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
ATerm Scope_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym_Scope_2))
    {
      p_14 = ATgetArgument(o_14, 0);
      q_14 = ATgetArgument(o_14, 1);
      {
        ATerm u_14 = NULL,w_14 = NULL;
        ATerm v_14 = NULL;
        t = SSLgetAnnotations(not_null(o_14));
        {
          v_14 = t;
          if(((u_14 != NULL) && (u_14 != v_14)))
            _fail(v_14);
          else
            u_14 = v_14;
        }
        {
          t = not_null(p_14);
          {
            ATerm y_14 = NULL;
            t = l_83(t);
            {
              w_14 = t;
              {
                t = not_null(q_14);
                {
                  ATerm a_15 = NULL;
                  t = m_83(t);
                  {
                    y_14 = t;
                    {
                      ATerm b_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(w_14), not_null(y_14)), not_null(u_14));
                      {
                        b_15 = t;
                        if(((a_15 != NULL) && (a_15 != b_15)))
                          _fail(b_15);
                        else
                          a_15 = b_15;
                      }
                      t = not_null(a_15);
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
ATerm tboundin_3 (ATerm t, ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm i_95 (ATerm))
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, i_95, g_95);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      t = DynamicRules_1(t, g_95);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_DynamicRules_1))
    {
      k_15 = ATgetArgument(j_15, 0);
      {
        t = not_null(k_15);
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
  ATerm p_15 = NULL,q_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym_Var_1))
    {
      q_15 = ATgetArgument(p_15, 0);
      t = (ATerm) ATinsert(ATempty, not_null(q_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm d_106 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym__2))
    {
      w_15 = ATgetArgument(v_15, 0);
      x_15 = ATgetArgument(v_15, 1);
      {
        t = not_null(w_15);
        {
          ATerm b_16 (ATerm t)
          {
            ATerm m_7 = t;
            int n_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(x_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_106, q_0);
                      t = b_16(t);
                      LocalPopChoice(p_7);
                    }
                  else
                    {
                      t = o_7;
                      t = Cons_2(t, _id, b_16);
                    }
                }
              }
            return(t);
          }
          t = b_16(t);
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
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  f_16 = t;
  d_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      e_16 :
      if(((ATgetType(h_16) == AT_LIST) && !(ATisEmpty(h_16))))
        {
          i_16 = ATgetFirst((ATermList) h_16);
          j_16 = (ATerm) ATgetNext((ATermList) h_16);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_16)), not_null(i_16)), not_null(j_16));
        }
      else
        {
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
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  y_16 = t;
  w_16 :
  if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
    {
      z_16 = ATgetFirst((ATermList) y_16);
      c_17 = (ATerm) ATgetNext((ATermList) y_16);
      x_16 :
      if(match_cons(z_16, sym__2))
        {
          a_17 = ATgetArgument(z_16, 0);
          b_17 = ATgetArgument(z_16, 1);
          {
            ATerm g_17 = NULL,h_17 = NULL,n_17 = NULL,t_17 = NULL;
            ATerm q_7;
            q_7 = t;
            {
              ATerm i_17 = NULL;
              ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
              t = not_null(b_17);
              {
                i_17 = t;
                {
                  t = SSL_explode_term(not_null(i_17));
                  {
                    k_17 = t;
                    r_16 :
                    if(match_cons(k_17, sym__2))
                      {
                        l_17 = ATgetArgument(k_17, 0);
                        m_17 = ATgetArgument(k_17, 1);
                        {
                          if(((g_17 != NULL) && (g_17 != l_17)))
                            _fail(l_17);
                          else
                            g_17 = l_17;
                          if(((h_17 != NULL) && (h_17 != m_17)))
                            _fail(m_17);
                          else
                            h_17 = m_17;
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
            t = q_7;
            {
              ATerm r_7;
              r_7 = t;
              {
                ATerm o_17 = NULL;
                ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
                t = not_null(a_17);
                {
                  o_17 = t;
                  {
                    t = SSL_explode_term(not_null(o_17));
                    {
                      q_17 = t;
                      u_16 :
                      if(match_cons(q_17, sym__2))
                        {
                          r_17 = ATgetArgument(q_17, 0);
                          s_17 = ATgetArgument(q_17, 1);
                          {
                            if(((g_17 != NULL) && (g_17 != r_17)))
                              _fail(r_17);
                            else
                              g_17 = r_17;
                            if(((n_17 != NULL) && (n_17 != s_17)))
                              _fail(s_17);
                            else
                              n_17 = s_17;
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
                ATerm u_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(h_17));
                {
                  t = zip_1(t, _id);
                  {
                    u_17 = t;
                    if(((t_17 != NULL) && (t_17 != u_17)))
                      _fail(u_17);
                    else
                      t_17 = u_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(c_17));
                  {
                    ATerm s_7 = t;
                    int u_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(u_7);
                      }
                    else
                      {
                        t = s_7;
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
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  e_18 = t;
  c_18 :
  if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
    {
      f_18 = ATgetFirst((ATermList) e_18);
      i_18 = (ATerm) ATgetNext((ATermList) e_18);
      d_18 :
      if(match_cons(f_18, sym__2))
        {
          g_18 = ATgetArgument(f_18, 0);
          h_18 = ATgetArgument(f_18, 1);
          {
            ATerm k_18 = NULL;
            if(((g_18 != NULL) && (g_18 != h_18)))
              _fail(h_18);
            else
              g_18 = h_18;
            {
              if(((k_18 != NULL) && (k_18 != i_18)))
                _fail(i_18);
              else
                k_18 = i_18;
              t = not_null(k_18);
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
ATerm while_not_2 (ATerm t, ATerm w_112 (ATerm), ATerm x_112 (ATerm))
{
  ATerm m_18 (ATerm t)
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_112(t);
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        {
          t = x_112(t);
          t = m_18(t);
        }
      }
    return(t);
  }
  t = m_18(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm))
{
  t = z_112(t);
  t = while_not_2(t, a_113, b_113);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm o_18 = NULL;
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_18));
        return(t);
      }
      ATerm z_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm b_8 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = b_8;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, b_1);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, s_0, z_0, a_1);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm s_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_18 (ATerm t)
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_110(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        {
          ATerm g_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_18 = NULL;
              ATerm j_8;
              j_8 = t;
              {
                ATerm t_18 = NULL;
                t = r_110(t);
                {
                  t_18 = t;
                  if(((s_18 != NULL) && (s_18 != t_18)))
                    _fail(t_18);
                  else
                    s_18 = t_18;
                }
              }
              t = j_8;
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(s_18);
                    return(t);
                  }
                  t = split_2(t, u_18, e_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = s_110(t, c_1, u_18, d_1);
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
              LocalPopChoice(i_8);
            }
          else
            {
              t = g_8;
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
                t = crush_3(t, h_1, i_1, u_18);
              }
            }
        }
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = k_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, j_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  y_18 :
  if(match_cons(d_19, sym_LRule_1))
    {
      e_19 = ATgetArgument(d_19, 0);
      z_18 :
      if(match_cons(e_19, sym_Rule_3))
        {
          a_19 = ATgetArgument(e_19, 0);
          b_19 = ATgetArgument(e_19, 1);
          c_19 = ATgetArgument(e_19, 2);
          {
            t = not_null(a_19);
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
      if(match_cons(d_19, sym_Scope_2))
        {
          e_19 = ATgetArgument(d_19, 0);
          f_19 = ATgetArgument(d_19, 1);
          t = not_null(e_19);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm y_108 (ATerm), ATerm z_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym__3))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      u_19 = ATgetArgument(r_19, 2);
      {
        t = not_null(s_19);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm y_19 = NULL;
            y_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(u_19));
              t = y_108(t);
            }
            return(t);
          }
          ATerm l_1 (ATerm t)
          {
            ATerm a_20 = NULL;
            a_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(t_19));
              t = y_108(t);
            }
            return(t);
          }
          t = z_108(t, k_1, l_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm s_108 (ATerm), ATerm t_108 (ATerm, ATerm (ATerm)))
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  l_20 :
  if(match_cons(m_20, sym__2))
    {
      n_20 = ATgetArgument(m_20, 0);
      o_20 = ATgetArgument(m_20, 1);
      {
        ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,z_20 = NULL;
        ATerm s_8;
        s_8 = t;
        {
          ATerm u_20 = NULL;
          t = not_null(n_20);
          {
            ATerm v_20 = NULL;
            t = s_108(t);
            {
              u_20 = t;
              {
                if(((r_20 != NULL) && (r_20 != u_20)))
                  _fail(u_20);
                else
                  r_20 = u_20;
                {
                  ATerm w_20 = NULL,y_20 = NULL;
                  t = map_1(t, new_0);
                  {
                    v_20 = t;
                    {
                      if(((s_20 != NULL) && (s_20 != v_20)))
                        _fail(v_20);
                      else
                        s_20 = v_20;
                      {
                        ATerm x_20 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(s_20));
                        {
                          t = zip_1(t, _id);
                          {
                            x_20 = t;
                            if(((w_20 != NULL) && (w_20 != x_20)))
                              _fail(x_20);
                            else
                              w_20 = x_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), not_null(o_20));
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
                              y_20 = t;
                              if(((t_20 != NULL) && (t_20 != y_20)))
                                _fail(y_20);
                              else
                                t_20 = y_20;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = s_8;
        {
          ATerm a_21 = NULL;
          t = not_null(n_20);
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(s_20);
              return(t);
            }
            t = t_108(t, m_1);
            {
              a_21 = t;
              if(((z_20 != NULL) && (z_20 != a_21)))
                _fail(a_21);
              else
                z_20 = a_21;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(z_20), not_null(o_20), not_null(t_20));
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
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  k_21 = t;
  i_21 :
  if(match_cons(k_21, sym__2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      j_21 :
      if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
        {
          n_21 = ATgetFirst((ATermList) m_21);
          o_21 = (ATerm) ATgetNext((ATermList) m_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_21), not_null(o_21));
        }
      else
        {
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
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  w_21 = t;
  t_21 :
  if(match_cons(w_21, sym__2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      u_21 :
      if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
        {
          z_21 = ATgetFirst((ATermList) y_21);
          c_22 = (ATerm) ATgetNext((ATermList) y_21);
          v_21 :
          if(match_cons(z_21, sym__2))
            {
              a_22 = ATgetArgument(z_21, 0);
              b_22 = ATgetArgument(z_21, 1);
              {
                ATerm e_22 = NULL;
                if(((x_21 != NULL) && (x_21 != a_22)))
                  _fail(a_22);
                else
                  x_21 = a_22;
                {
                  if(((e_22 != NULL) && (e_22 != b_22)))
                    _fail(b_22);
                  else
                    e_22 = b_22;
                  t = not_null(e_22);
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
  ATerm w_8 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = w_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm d_109 (ATerm, ATerm (ATerm)))
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym__2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      {
        t = not_null(k_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              t = not_null(l_22);
              return(t);
            }
            t = split_2(t, _id, o_1);
            t = lookup_0(t);
            return(t);
          }
          t = d_109(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm w_109 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        t = not_null(t_22);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm x_22 = NULL;
            x_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), not_null(u_22));
              t = w_109(t);
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
ATerm env_alltd_1 (ATerm t, ATerm g_109 (ATerm))
{
  ATerm b_23 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_109(t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = all_dist_1(t, b_23);
      }
    return(t);
  }
  t = b_23(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm n_108 (ATerm, ATerm (ATerm)), ATerm o_108 (ATerm), ATerm p_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_108 (ATerm, ATerm (ATerm)))
{
  ATerm d_23 = NULL;
  d_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), (ATerm) ATempty);
    {
      ATerm g_23 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm f_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, n_108);
              LocalPopChoice(g_9);
            }
          else
            {
              t = f_9;
              {
                t = RnBinding_2(t, o_108, q_108);
                t = DistBinding_2(t, g_23, p_108);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, q_1);
        return(t);
      }
      t = g_23(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm h_23 (ATerm t, ATerm i_23 (ATerm))
  {
    t = Scope_2(t, i_23, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, h_23);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_Seqs_1))
    {
      p_23 = ATgetArgument(o_23, 0);
      {
        ATerm s_23 = NULL,u_23 = NULL;
        ATerm t_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
        }
        {
          t = not_null(p_23);
          {
            ATerm w_23 = NULL;
            t = v_87(t);
            {
              u_23 = t;
              {
                ATerm x_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, not_null(u_23)), not_null(s_23));
                {
                  x_23 = t;
                  if(((w_23 != NULL) && (w_23 != x_23)))
                    _fail(x_23);
                  else
                    w_23 = x_23;
                }
                t = not_null(w_23);
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
ATerm Call_2 (ATerm t, ATerm b_85 (ATerm), ATerm c_85 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym_Call_2))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      {
        ATerm o_24 = NULL,q_24 = NULL;
        ATerm p_24 = NULL;
        t = SSLgetAnnotations(not_null(i_24));
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
        {
          t = not_null(j_24);
          {
            ATerm s_24 = NULL;
            t = b_85(t);
            {
              q_24 = t;
              {
                t = not_null(k_24);
                {
                  ATerm u_24 = NULL;
                  t = c_85(t);
                  {
                    s_24 = t;
                    {
                      ATerm v_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(q_24), not_null(s_24)), not_null(o_24));
                      {
                        v_24 = t;
                        if(((u_24 != NULL) && (u_24 != v_24)))
                          _fail(v_24);
                        else
                          u_24 = v_24;
                      }
                      t = not_null(u_24);
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
ATerm Str_1 (ATerm t, ATerm y_0 (ATerm))
{
  ATerm k_25 = NULL,l_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_Str_1))
    {
      l_25 = ATgetArgument(k_25, 0);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_25 = NULL,q_25 = NULL;
            ATerm p_25 = NULL;
            t = SSLgetAnnotations(not_null(k_25));
            {
              p_25 = t;
              if(((o_25 != NULL) && (o_25 != p_25)))
                _fail(p_25);
              else
                o_25 = p_25;
            }
            {
              t = not_null(l_25);
              {
                ATerm s_25 = NULL;
                t = y_0(t);
                {
                  q_25 = t;
                  {
                    ATerm t_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(q_25)), not_null(o_25));
                    {
                      t_25 = t;
                      if(((s_25 != NULL) && (s_25 != t_25)))
                        _fail(t_25);
                      else
                        s_25 = t_25;
                    }
                    t = not_null(s_25);
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
              ATerm w_25 = NULL,y_25 = NULL;
              ATerm x_25 = NULL;
              t = SSLgetAnnotations(not_null(k_25));
              {
                x_25 = t;
                if(((w_25 != NULL) && (w_25 != x_25)))
                  _fail(x_25);
                else
                  w_25 = x_25;
              }
              {
                t = not_null(l_25);
                {
                  ATerm a_26 = NULL;
                  t = y_0(t);
                  {
                    y_25 = t;
                    {
                      ATerm b_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(y_25)), not_null(w_25));
                      {
                        b_26 = t;
                        if(((a_26 != NULL) && (a_26 != b_26)))
                          _fail(b_26);
                        else
                          a_26 = b_26;
                      }
                      t = not_null(a_26);
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
ATerm Real_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym_Real_1))
    {
      u_26 = ATgetArgument(t_26, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_26 = NULL,z_26 = NULL;
            ATerm y_26 = NULL;
            t = SSLgetAnnotations(not_null(t_26));
            {
              y_26 = t;
              if(((x_26 != NULL) && (x_26 != y_26)))
                _fail(y_26);
              else
                x_26 = y_26;
            }
            {
              t = not_null(u_26);
              {
                ATerm b_27 = NULL;
                t = x_0(t);
                {
                  z_26 = t;
                  {
                    ATerm c_27 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(z_26)), not_null(x_26));
                    {
                      c_27 = t;
                      if(((b_27 != NULL) && (b_27 != c_27)))
                        _fail(c_27);
                      else
                        b_27 = c_27;
                    }
                    t = not_null(b_27);
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
              ATerm f_27 = NULL,h_27 = NULL;
              ATerm g_27 = NULL;
              t = SSLgetAnnotations(not_null(t_26));
              {
                g_27 = t;
                if(((f_27 != NULL) && (f_27 != g_27)))
                  _fail(g_27);
                else
                  f_27 = g_27;
              }
              {
                t = not_null(u_26);
                {
                  ATerm j_27 = NULL;
                  t = x_0(t);
                  {
                    h_27 = t;
                    {
                      ATerm k_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(h_27)), not_null(f_27));
                      {
                        k_27 = t;
                        if(((j_27 != NULL) && (j_27 != k_27)))
                          _fail(k_27);
                        else
                          j_27 = k_27;
                      }
                      t = not_null(j_27);
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
ATerm Int_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_Int_1))
    {
      d_28 = ATgetArgument(c_28, 0);
      {
        ATerm l_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_28 = NULL,i_28 = NULL;
            ATerm h_28 = NULL;
            t = SSLgetAnnotations(not_null(c_28));
            {
              h_28 = t;
              if(((g_28 != NULL) && (g_28 != h_28)))
                _fail(h_28);
              else
                g_28 = h_28;
            }
            {
              t = not_null(d_28);
              {
                ATerm k_28 = NULL;
                t = w_0(t);
                {
                  i_28 = t;
                  {
                    ATerm l_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(i_28)), not_null(g_28));
                    {
                      l_28 = t;
                      if(((k_28 != NULL) && (k_28 != l_28)))
                        _fail(l_28);
                      else
                        k_28 = l_28;
                    }
                    t = not_null(k_28);
                  }
                }
              }
            }
            LocalPopChoice(q_9);
          }
        else
          {
            t = l_9;
            {
              ATerm o_28 = NULL,q_28 = NULL;
              ATerm p_28 = NULL;
              t = SSLgetAnnotations(not_null(c_28));
              {
                p_28 = t;
                if(((o_28 != NULL) && (o_28 != p_28)))
                  _fail(p_28);
                else
                  o_28 = p_28;
              }
              {
                t = not_null(d_28);
                {
                  ATerm s_28 = NULL;
                  t = w_0(t);
                  {
                    q_28 = t;
                    {
                      ATerm t_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_28)), not_null(o_28));
                      {
                        t_28 = t;
                        if(((s_28 != NULL) && (s_28 != t_28)))
                          _fail(t_28);
                        else
                          s_28 = t_28;
                      }
                      t = not_null(s_28);
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
ATerm Var_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Var_1))
    {
      m_29 = ATgetArgument(l_29, 0);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_29 = NULL,r_29 = NULL;
            ATerm q_29 = NULL;
            t = SSLgetAnnotations(not_null(l_29));
            {
              q_29 = t;
              if(((p_29 != NULL) && (p_29 != q_29)))
                _fail(q_29);
              else
                p_29 = q_29;
            }
            {
              t = not_null(m_29);
              {
                ATerm t_29 = NULL;
                t = v_0(t);
                {
                  r_29 = t;
                  {
                    ATerm u_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_29)), not_null(p_29));
                    {
                      u_29 = t;
                      if(((t_29 != NULL) && (t_29 != u_29)))
                        _fail(u_29);
                      else
                        t_29 = u_29;
                    }
                    t = not_null(t_29);
                  }
                }
              }
            }
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            {
              ATerm x_29 = NULL,z_29 = NULL;
              ATerm y_29 = NULL;
              t = SSLgetAnnotations(not_null(l_29));
              {
                y_29 = t;
                if(((x_29 != NULL) && (x_29 != y_29)))
                  _fail(y_29);
                else
                  x_29 = y_29;
              }
              {
                t = not_null(m_29);
                {
                  ATerm b_30 = NULL;
                  t = v_0(t);
                  {
                    z_29 = t;
                    {
                      ATerm c_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_29)), not_null(x_29));
                      {
                        c_30 = t;
                        if(((b_30 != NULL) && (b_30 != c_30)))
                          _fail(c_30);
                        else
                          b_30 = c_30;
                      }
                      t = not_null(b_30);
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
ATerm list_1 (ATerm t, ATerm o_102 (ATerm))
{
  ATerm l_30 (ATerm t)
  {
    ATerm w_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = w_9;
        t = Cons_2(t, o_102, l_30);
      }
    return(t);
  }
  t = l_30(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm i_83 (ATerm))
{
  ATerm r_30 = NULL,s_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym_Build_1))
    {
      s_30 = ATgetArgument(r_30, 0);
      {
        ATerm v_30 = NULL,x_30 = NULL;
        ATerm w_30 = NULL;
        t = SSLgetAnnotations(not_null(r_30));
        {
          w_30 = t;
          if(((v_30 != NULL) && (v_30 != w_30)))
            _fail(w_30);
          else
            v_30 = w_30;
        }
        {
          t = not_null(s_30);
          {
            ATerm z_30 = NULL;
            t = i_83(t);
            {
              x_30 = t;
              {
                ATerm a_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_30)), not_null(v_30));
                {
                  a_31 = t;
                  if(((z_30 != NULL) && (z_30 != a_31)))
                    _fail(a_31);
                  else
                    z_30 = a_31;
                }
                t = not_null(z_30);
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
  ATerm j_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym_Fail_0))
    {
      ATerm l_31 = NULL,n_31 = NULL;
      ATerm b_10;
      b_10 = t;
      {
        ATerm m_31 = NULL;
        t = SSLgetAnnotations(not_null(j_31));
        {
          m_31 = t;
          if(((l_31 != NULL) && (l_31 != m_31)))
            _fail(m_31);
          else
            l_31 = m_31;
        }
      }
      t = b_10;
      {
        ATerm o_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(l_31));
        {
          o_31 = t;
          if(((n_31 != NULL) && (n_31 != o_31)))
            _fail(o_31);
          else
            n_31 = o_31;
        }
        t = not_null(n_31);
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
  ATerm w_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_Id_0))
    {
      ATerm y_31 = NULL,m_33 = NULL;
      ATerm c_10;
      c_10 = t;
      {
        ATerm l_33 = NULL;
        t = SSLgetAnnotations(not_null(w_31));
        {
          l_33 = t;
          if(((y_31 != NULL) && (y_31 != l_33)))
            _fail(l_33);
          else
            y_31 = l_33;
        }
      }
      t = c_10;
      {
        ATerm n_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(y_31));
        {
          n_33 = t;
          if(((m_33 != NULL) && (m_33 != n_33)))
            _fail(n_33);
          else
            m_33 = n_33;
        }
        t = not_null(m_33);
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
                    int k_10 = stack_ptr;
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
                                ATerm r_10 = t;
                                int v_10 = stack_ptr;
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
                                    LocalPopChoice(v_10);
                                  }
                                else
                                  {
                                    t = r_10;
                                    {
                                      ATerm x_10 = t;
                                      int a_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          LocalPopChoice(a_11);
                                        }
                                      else
                                        {
                                          t = x_10;
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
                        LocalPopChoice(k_10);
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
                                ATerm f_11 = t;
                                int k_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(k_11);
                                  }
                                else
                                  {
                                    t = f_11;
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
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  f_34 :
  if(match_cons(x_34, sym_Row_2))
    {
      y_34 = ATgetArgument(x_34, 0);
      z_34 = ATgetArgument(x_34, 1);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_35 = NULL;
            ATerm d_35 = NULL;
            t = not_null(z_34);
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
                  d_35 = t;
                  if(((c_35 != NULL) && (c_35 != d_35)))
                    _fail(d_35);
                  else
                    c_35 = d_35;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_35), (ATerm)ATempty, not_null(z_34))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(y_34), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_35)), (ATerm) ATempty)));
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              t = not_null(z_34);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(y_34), not_null(z_34)));
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
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym_Matrix_2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      {
        ATerm s_35 = NULL,t_35 = NULL;
        ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
        t = not_null(p_35);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              u_35 = t;
              l_35 :
              if(match_cons(u_35, sym__2))
                {
                  v_35 = ATgetArgument(u_35, 0);
                  w_35 = ATgetArgument(u_35, 1);
                  {
                    if(((s_35 != NULL) && (s_35 != v_35)))
                      _fail(v_35);
                    else
                      s_35 = v_35;
                    if(((t_35 != NULL) && (t_35 != w_35)))
                      _fail(w_35);
                    else
                      t_35 = w_35;
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_35), (ATerm) ATmakeAppl(sym_Let_2, not_null(s_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_o_11))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(t_35)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_116 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym__2))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      {
        ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
        ATerm v_11;
        v_11 = t;
        {
          ATerm m_36 = NULL;
          ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
          t = k_116(t);
          {
            m_36 = t;
            {
              if(((j_36 != NULL) && (j_36 != m_36)))
                _fail(m_36);
              else
                j_36 = m_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_36), not_null(f_36), not_null(g_36));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_11 = t;
                    int x_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), term_b_12);
                        t = table_get_0(t);
                        LocalPopChoice(x_11);
                      }
                    else
                      {
                        t = w_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_36 = t;
                      c_36 :
                      if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
                        {
                          o_36 = ATgetFirst((ATermList) n_36);
                          p_36 = (ATerm) ATgetNext((ATermList) n_36);
                          {
                            if(((k_36 != NULL) && (k_36 != o_36)))
                              _fail(o_36);
                            else
                              k_36 = o_36;
                            {
                              if(((l_36 != NULL) && (l_36 != p_36)))
                                _fail(p_36);
                              else
                                l_36 = p_36;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_36), term_b_12, (ATerm) ATinsert(CheckATermList(not_null(l_36)), (ATerm) ATinsert(CheckATermList(not_null(k_36)), not_null(f_36))));
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  y_36 = t;
  u_36 :
  if(match_cons(y_36, sym_Row_3))
    {
      z_36 = ATgetArgument(y_36, 0);
      e_37 = ATgetArgument(y_36, 1);
      f_37 = ATgetArgument(y_36, 2);
      v_36 :
      if(((ATgetType(z_36) == AT_LIST) && !(ATisEmpty(z_36))))
        {
          a_37 = ATgetFirst((ATermList) z_36);
          d_37 = (ATerm) ATgetNext((ATermList) z_36);
          w_36 :
          if(match_cons(a_37, sym_As_2))
            {
              b_37 = ATgetArgument(a_37, 0);
              c_37 = ATgetArgument(a_37, 1);
              x_36 :
              if(match_cons(c_37, sym_Wld_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(d_37), not_null(e_37), not_null(f_37));
                }
              else
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
  ATerm l_37 = NULL;
  t = filter_1(t, WildPat_0);
  {
    l_37 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(l_37));
  }
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm r_0 (ATerm), ATerm t_0 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym_Wld_0))
    {
      ATerm j_40 = NULL;
      ATerm l_41 = NULL;
      t = t_0(t);
      {
        ATerm v_1 (ATerm t)
        {
          ATerm i_41 = NULL,j_41 = NULL;
          i_41 = t;
          i_38 :
          if(match_cons(i_41, sym_Var_1))
            {
              j_41 = ATgetArgument(i_41, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_41)), term_c_12);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, v_1);
        {
          l_41 = t;
          if(((j_40 != NULL) && (j_40 != l_41)))
            _fail(l_41);
          else
            j_40 = l_41;
        }
      }
      t = not_null(j_40);
    }
  else
    {
      if(match_cons(g_40, sym_Int_1))
        {
          h_40 = ATgetArgument(g_40, 0);
          {
            ATerm n_41 = NULL,o_41 = NULL;
            t = r_0(t);
            {
              n_41 = t;
              r_38 :
              if(match_cons(n_41, sym_Int_1))
                {
                  o_41 = ATgetArgument(n_41, 0);
                  {
                    ATerm p_41 = NULL;
                    if(((h_40 != NULL) && (h_40 != o_41)))
                      _fail(o_41);
                    else
                      h_40 = o_41;
                    {
                      t = t_0(t);
                      {
                        p_41 = t;
                        q_38 :
                        if(((ATgetType(p_41) == AT_LIST) && ATisEmpty(p_41)))
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
          if(match_cons(g_40, sym_Real_1))
            {
              h_40 = ATgetArgument(g_40, 0);
              {
                ATerm r_41 = NULL,s_41 = NULL;
                t = r_0(t);
                {
                  r_41 = t;
                  d_39 :
                  if(match_cons(r_41, sym_Real_1))
                    {
                      s_41 = ATgetArgument(r_41, 0);
                      {
                        ATerm t_41 = NULL;
                        if(((h_40 != NULL) && (h_40 != s_41)))
                          _fail(s_41);
                        else
                          h_40 = s_41;
                        {
                          t = t_0(t);
                          {
                            t_41 = t;
                            c_39 :
                            if(((ATgetType(t_41) == AT_LIST) && ATisEmpty(t_41)))
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
              if(match_cons(g_40, sym_Str_1))
                {
                  h_40 = ATgetArgument(g_40, 0);
                  {
                    ATerm v_41 = NULL,w_41 = NULL;
                    t = r_0(t);
                    {
                      v_41 = t;
                      g_39 :
                      if(match_cons(v_41, sym_Str_1))
                        {
                          w_41 = ATgetArgument(v_41, 0);
                          {
                            ATerm x_41 = NULL;
                            if(((h_40 != NULL) && (h_40 != w_41)))
                              _fail(w_41);
                            else
                              h_40 = w_41;
                            {
                              t = t_0(t);
                              {
                                x_41 = t;
                                f_39 :
                                if(((ATgetType(x_41) == AT_LIST) && ATisEmpty(x_41)))
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
                  if(match_cons(g_40, sym_Op_2))
                    {
                      h_40 = ATgetArgument(g_40, 0);
                      i_40 = ATgetArgument(g_40, 1);
                      {
                        ATerm b_42 = NULL;
                        ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
                        t = r_0(t);
                        {
                          c_42 = t;
                          j_39 :
                          if(match_cons(c_42, sym_Fun_2))
                            {
                              d_42 = ATgetArgument(c_42, 0);
                              e_42 = ATgetArgument(c_42, 1);
                              {
                                ATerm f_42 = NULL;
                                if(((h_40 != NULL) && (h_40 != d_42)))
                                  _fail(d_42);
                                else
                                  h_40 = d_42;
                                {
                                  if(((b_42 != NULL) && (b_42 != e_42)))
                                    _fail(e_42);
                                  else
                                    b_42 = e_42;
                                  {
                                    ATerm g_42 = NULL;
                                    t = not_null(i_40);
                                    {
                                      t = length_0(t);
                                      {
                                        g_42 = t;
                                        if(((f_42 != NULL) && (f_42 != g_42)))
                                          _fail(g_42);
                                        else
                                          f_42 = g_42;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_42), not_null(b_42));
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
                        t = not_null(i_40);
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
ATerm ConsTransition_1 (ATerm t, ATerm j_123 (ATerm))
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  z_42 = t;
  w_42 :
  if(match_cons(z_42, sym_Row_3))
    {
      a_43 = ATgetArgument(z_42, 0);
      f_43 = ATgetArgument(z_42, 1);
      g_43 = ATgetArgument(z_42, 2);
      x_42 :
      if(((ATgetType(a_43) == AT_LIST) && !(ATisEmpty(a_43))))
        {
          b_43 = ATgetFirst((ATermList) a_43);
          e_43 = (ATerm) ATgetNext((ATermList) a_43);
          y_42 :
          if(match_cons(b_43, sym_As_2))
            {
              c_43 = ATgetArgument(b_43, 0);
              d_43 = ATgetArgument(b_43, 1);
              {
                ATerm l_43 = NULL,n_43 = NULL;
                ATerm d_12;
                d_12 = t;
                {
                  ATerm m_43 = NULL;
                  t = not_null(d_43);
                  {
                    t = j_123(t);
                    {
                      m_43 = t;
                      if(((l_43 != NULL) && (l_43 != m_43)))
                        _fail(m_43);
                      else
                        l_43 = m_43;
                    }
                  }
                }
                t = d_12;
                {
                  ATerm o_43 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), not_null(f_43));
                  {
                    ATerm e_12 = t;
                    int f_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(f_12);
                      }
                    else
                      {
                        t = e_12;
                        t = conc_more_lists_0(t);
                      }
                    {
                      o_43 = t;
                      if(((n_43 != NULL) && (n_43 != o_43)))
                        _fail(o_43);
                      else
                        n_43 = o_43;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(e_43), not_null(n_43), not_null(g_43));
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
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  w_43 = t;
  u_43 :
  if(match_cons(w_43, sym__2))
    {
      x_43 = ATgetArgument(w_43, 0);
      y_43 = ATgetArgument(w_43, 1);
      v_43 :
      if(match_cons(y_43, sym__2))
        {
          z_43 = ATgetArgument(y_43, 0);
          a_44 = ATgetArgument(y_43, 1);
          {
            ATerm e_44 = NULL;
            ATerm f_44 = NULL;
            t = not_null(x_43);
            {
              ATerm w_1 (ATerm t)
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = not_null(z_43);
                    return(t);
                  }
                  ATerm z_1 (ATerm t)
                  {
                    t = not_null(a_44);
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
                f_44 = t;
                if(((e_44 != NULL) && (e_44 != f_44)))
                  _fail(f_44);
                else
                  e_44 = f_44;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(z_43), not_null(a_44), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(e_44)));
          }
        }
      else
        {
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
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  l_44 = t;
  j_44 :
  if(match_cons(l_44, sym__2))
    {
      m_44 = ATgetArgument(l_44, 0);
      n_44 = ATgetArgument(l_44, 1);
      k_44 :
      if(((ATgetType(n_44) == AT_LIST) && !(ATisEmpty(n_44))))
        {
          o_44 = ATgetFirst((ATermList) n_44);
          p_44 = (ATerm) ATgetNext((ATermList) n_44);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_44), not_null(o_44)), (ATerm) ATmakeAppl(sym__2, not_null(m_44), not_null(p_44)));
        }
      else
        {
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
  ATerm b_45 = NULL,c_45 = NULL,p_45 = NULL;
  b_45 = t;
  v_44 :
  if(match_cons(b_45, sym__2))
    {
      c_45 = ATgetArgument(b_45, 0);
      p_45 = ATgetArgument(b_45, 1);
      a_45 :
      if(((ATgetType(p_45) == AT_LIST) && ATisEmpty(p_45)))
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
ATerm rzip_1 (ATerm t, ATerm m_101 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, m_101);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  a_46 :
  if(((ATgetType(b_46) == AT_LIST) && !(ATisEmpty(b_46))))
    {
      c_46 = ATgetFirst((ATermList) b_46);
      d_46 = (ATerm) ATgetNext((ATermList) b_46);
      {
        ATerm g_46 = NULL;
        ATerm i_46 = NULL;
        t = not_null(d_46);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm l_12 = t;
            if((PushChoice() == 0))
              {
                ATerm h_46 = NULL;
                h_46 = t;
                if(((c_46 != NULL) && (c_46 != h_46)))
                  _fail(h_46);
                else
                  c_46 = h_46;
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
            i_46 = t;
            if(((g_46 != NULL) && (g_46 != i_46)))
              _fail(i_46);
            else
              g_46 = i_46;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(g_46)), not_null(c_46));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm r_46 (ATerm t)
  {
    t = r_103(t);
    {
      ATerm m_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(r_12);
        }
      else
        {
          t = m_12;
          t = Cons_2(t, _id, r_46);
        }
    }
    return(t);
  }
  t = r_46(t);
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
    ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
    v_46 = t;
    t_46 :
    if(match_cons(v_46, sym_As_2))
      {
        w_46 = ATgetArgument(v_46, 0);
        y_46 = ATgetArgument(v_46, 1);
        u_46 :
        if(match_cons(w_46, sym_Off_1))
          {
            x_46 = ATgetArgument(w_46, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_46));
          }
        else
          {
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
    t = term_o_11;
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
  ATerm g_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  g_48 = t;
  w_47 :
  if(match_cons(g_48, sym_Row_3))
    {
      k_48 = ATgetArgument(g_48, 0);
      r_48 = ATgetArgument(g_48, 1);
      s_48 = ATgetArgument(g_48, 2);
      z_47 :
      if(((ATgetType(k_48) == AT_LIST) && !(ATisEmpty(k_48))))
        {
          l_48 = ATgetFirst((ATermList) k_48);
          q_48 = (ATerm) ATgetNext((ATermList) k_48);
          a_48 :
          if(match_cons(l_48, sym_As_2))
            {
              m_48 = ATgetArgument(l_48, 0);
              n_48 = ATgetArgument(l_48, 1);
              f_48 :
              if(match_cons(n_48, sym_Str_1))
                {
                  o_48 = ATgetArgument(n_48, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(o_48)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(n_48, sym_Real_1))
                    {
                      o_48 = ATgetArgument(n_48, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(o_48)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(n_48, sym_Int_1))
                        {
                          o_48 = ATgetArgument(n_48, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(o_48)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(n_48, sym_Op_2))
                            {
                              o_48 = ATgetArgument(n_48, 0);
                              p_48 = ATgetArgument(n_48, 1);
                              {
                                ATerm g_49 = NULL,i_49 = NULL;
                                ATerm v_12;
                                v_12 = t;
                                {
                                  ATerm h_49 = NULL;
                                  t = not_null(p_48);
                                  {
                                    t = length_0(t);
                                    {
                                      h_49 = t;
                                      if(((g_49 != NULL) && (g_49 != h_49)))
                                        _fail(h_49);
                                      else
                                        g_49 = h_49;
                                    }
                                  }
                                }
                                t = v_12;
                                {
                                  ATerm j_49 = NULL;
                                  t = not_null(p_48);
                                  {
                                    t = offsets_0(t);
                                    {
                                      j_49 = t;
                                      if(((i_49 != NULL) && (i_49 != j_49)))
                                        _fail(j_49);
                                      else
                                        i_49 = j_49;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(o_48), not_null(g_49)), not_null(i_49));
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
ATerm filter_1 (ATerm t, ATerm b_108 (ATerm))
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
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              t = filter_1(t, b_108);
              return(t);
            }
            t = Cons_2(t, b_108, f_2);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            {
              ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
              s_49 = t;
              r_49 :
              if(((ATgetType(s_49) == AT_LIST) && !(ATisEmpty(s_49))))
                {
                  t_49 = ATgetFirst((ATermList) s_49);
                  u_49 = (ATerm) ATgetNext((ATermList) s_49);
                  {
                    t = not_null(u_49);
                    t = filter_1(t, b_108);
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
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,s_50 = NULL,y_50 = NULL,b_51 = NULL;
      e_50 = t;
      y_49 :
      if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
        {
          f_50 = ATgetFirst((ATermList) e_50);
          b_51 = (ATerm) ATgetNext((ATermList) e_50);
          z_49 :
          if(match_cons(f_50, sym_Row_3))
            {
              g_50 = ATgetArgument(f_50, 0);
              s_50 = ATgetArgument(f_50, 1);
              y_50 = ATgetArgument(f_50, 2);
              a_50 :
              if(((ATgetType(g_50) == AT_LIST) && !(ATisEmpty(g_50))))
                {
                  h_50 = ATgetFirst((ATermList) g_50);
                  l_50 = (ATerm) ATgetNext((ATermList) g_50);
                  b_50 :
                  if(match_cons(h_50, sym_As_2))
                    {
                      i_50 = ATgetArgument(h_50, 0);
                      k_50 = ATgetArgument(h_50, 1);
                      c_50 :
                      if(match_cons(i_50, sym_Off_1))
                        {
                          j_50 = ATgetArgument(i_50, 0);
                          t = not_null(j_50);
                        }
                      else
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
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        t = explode_string_0(t);
        {
          ATerm i_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_51 (ATerm t)
              {
                ATerm m_13 = t;
                int n_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, f_51);
                    LocalPopChoice(n_13);
                  }
                else
                  {
                    t = m_13;
                    {
                      ATerm g_2 (ATerm t)
                      {
                        ATerm d_51 = NULL;
                        d_51 = t;
                        d_50 :
                        if(!(match_int(d_51, 47)))
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
              t = f_51(t);
              LocalPopChoice(l_13);
            }
          else
            {
              t = i_13;
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
  ATerm q_51 = NULL,r_51 = NULL;
  q_51 = t;
  p_51 :
  if(match_cons(q_51, sym_Matrix_1))
    {
      r_51 = ATgetArgument(q_51, 0);
      {
        ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
        ATerm y_51 = NULL;
        t = not_null(r_51);
        {
          ATerm z_51 = NULL;
          t = get_path_0(t);
          {
            y_51 = t;
            {
              if(((t_51 != NULL) && (t_51 != y_51)))
                _fail(y_51);
              else
                t_51 = y_51;
              {
                t = not_null(r_51);
                {
                  ATerm b_52 = NULL;
                  t = outedges_0(t);
                  {
                    z_51 = t;
                    {
                      if(((u_51 != NULL) && (u_51 != z_51)))
                        _fail(z_51);
                      else
                        u_51 = z_51;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_51), not_null(u_51));
                        {
                          ATerm c_52 = NULL;
                          t = rzip_1(t, Transition_0);
                          {
                            b_52 = t;
                            {
                              if(((v_51 != NULL) && (v_51 != b_52)))
                                _fail(b_52);
                              else
                                v_51 = b_52;
                              {
                                t = not_null(r_51);
                                {
                                  ATerm d_52 = NULL;
                                  t = default_state_0(t);
                                  {
                                    c_52 = t;
                                    {
                                      if(((w_51 != NULL) && (w_51 != c_52)))
                                        _fail(c_52);
                                      else
                                        w_51 = c_52;
                                      {
                                        t = new_0(t);
                                        {
                                          d_52 = t;
                                          {
                                            if(((x_51 != NULL) && (x_51 != d_52)))
                                              _fail(d_52);
                                            else
                                              x_51 = d_52;
                                            {
                                              ATerm o_13;
                                              o_13 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, not_null(r_51)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_13, not_null(x_51)));
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
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(x_51), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_51)), not_null(v_51), not_null(w_51));
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
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  n_52 = t;
  l_52 :
  if(match_cons(n_52, sym_Row_3))
    {
      o_52 = ATgetArgument(n_52, 0);
      p_52 = ATgetArgument(n_52, 1);
      s_52 = ATgetArgument(n_52, 2);
      m_52 :
      if(((ATgetType(p_52) == AT_LIST) && !(ATisEmpty(p_52))))
        {
          q_52 = ATgetFirst((ATermList) p_52);
          r_52 = (ATerm) ATgetNext((ATermList) p_52);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(o_52)), not_null(q_52)), not_null(r_52), not_null(s_52));
        }
      else
        {
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
  ATerm b_53 = NULL,c_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym_Matrix_1))
    {
      c_53 = ATgetArgument(b_53, 0);
      {
        ATerm e_53 = NULL;
        ATerm f_53 = NULL;
        t = not_null(c_53);
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
                      ATerm s_13 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = s_13;
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
            t = not_null(c_53);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                f_53 = t;
                if(((e_53 != NULL) && (e_53 != f_53)))
                  _fail(f_53);
                else
                  e_53 = f_53;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(e_53));
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
  ATerm m_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym_Wld_0))
    {
      ATerm o_53 = NULL,q_53 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm p_53 = NULL;
        t = SSLgetAnnotations(not_null(m_53));
        {
          p_53 = t;
          if(((o_53 != NULL) && (o_53 != p_53)))
            _fail(p_53);
          else
            o_53 = p_53;
        }
      }
      t = w_13;
      {
        ATerm r_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(o_53));
        {
          r_53 = t;
          if(((q_53 != NULL) && (q_53 != r_53)))
            _fail(r_53);
          else
            q_53 = r_53;
        }
        t = not_null(q_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Row_3 (ATerm t, ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm))
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
            t = f_88(t);
            {
              m_54 = t;
              {
                t = not_null(e_54);
                {
                  ATerm q_54 = NULL;
                  t = g_88(t);
                  {
                    o_54 = t;
                    {
                      t = not_null(f_54);
                      {
                        ATerm s_54 = NULL;
                        t = h_88(t);
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
        ATerm g_56 = NULL;
        t = not_null(s_55);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm v_55 = NULL,w_55 = NULL,d_56 = NULL,e_56 = NULL;
            v_55 = t;
            m_55 :
            if(match_cons(v_55, sym_Row_3))
              {
                w_55 = ATgetArgument(v_55, 0);
                d_56 = ATgetArgument(v_55, 1);
                e_56 = ATgetArgument(v_55, 2);
                n_55 :
                if(((ATgetType(w_55) == AT_LIST) && ATisEmpty(w_55)))
                  {
                    o_55 :
                    if(((ATgetType(d_56) == AT_LIST) && ATisEmpty(d_56)))
                      {
                        t = not_null(e_56);
                      }
                    else
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
            g_56 = t;
            if(((u_55 != NULL) && (u_55 != g_56)))
              _fail(g_56);
            else
              u_55 = g_56;
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
  ATerm x_13 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      LocalPopChoice(b_14);
    }
  else
    {
      t = x_13;
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
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  l_56 :
  if(((ATgetType(m_56) == AT_LIST) && !(ATisEmpty(m_56))))
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
        ATerm i_14;
        i_14 = t;
        {
          ATerm a_57 = NULL;
          ATerm b_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_56), not_null(x_56));
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
        t = i_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm h_116 (ATerm))
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm l_57 = NULL;
    ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
    t = h_116(t);
    {
      l_57 = t;
      {
        if(((k_57 != NULL) && (k_57 != l_57)))
          _fail(l_57);
        else
          k_57 = l_57;
        {
          ATerm m_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_57), term_b_12);
              t = table_get_0(t);
              LocalPopChoice(r_14);
            }
          else
            {
              t = m_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_57 = t;
            h_57 :
            if(((ATgetType(m_57) == AT_LIST) && !(ATisEmpty(m_57))))
              {
                n_57 = ATgetFirst((ATermList) m_57);
                o_57 = (ATerm) ATgetNext((ATermList) m_57);
                {
                  if(((j_57 != NULL) && (j_57 != n_57)))
                    _fail(n_57);
                  else
                    j_57 = n_57;
                  {
                    if(((i_57 != NULL) && (i_57 != o_57)))
                      _fail(o_57);
                    else
                      i_57 = o_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_57), term_b_12, not_null(i_57));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(j_57);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm p_57 = NULL;
                              p_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_57), not_null(p_57));
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
ATerm restore_always_2 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_99(t);
      t = x_99(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        t = x_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_116 (ATerm))
{
  ATerm w_57 = NULL;
  ATerm x_14;
  x_14 = t;
  {
    ATerm x_57 = NULL;
    ATerm y_57 = NULL;
    t = g_116(t);
    {
      x_57 = t;
      {
        if(((w_57 != NULL) && (w_57 != x_57)))
          _fail(x_57);
        else
          w_57 = x_57;
        {
          ATerm z_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_57), term_b_12);
          {
            ATerm z_14 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_15);
              }
            else
              {
                t = z_14;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_57), term_b_12, (ATerm) ATinsert(CheckATermList(not_null(y_57)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = x_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm i_116 (ATerm), ATerm j_116 (ATerm))
{
  t = begin_scope_1(t, i_116);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, i_116);
      return(t);
    }
    t = restore_always_2(t, j_116, s_2);
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
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_Cong_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,c_60 = NULL,e_60 = NULL,g_60 = NULL;
        ATerm h_15;
        h_15 = t;
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
                    ATerm w_2 (ATerm t)
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
                    t = map_1(t, w_2);
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
                                          ATerm o_59 = NULL,b_60 = NULL;
                                          ATerm x_2 (ATerm t)
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
                                          t = map_1(t, x_2);
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
                                                    ATerm y_2 (ATerm t)
                                                    {
                                                      ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,v_59 = NULL;
                                                      q_59 = t;
                                                      n_58 :
                                                      if(match_cons(q_59, sym__2))
                                                        {
                                                          r_59 = ATgetArgument(q_59, 0);
                                                          v_59 = ATgetArgument(q_59, 1);
                                                          o_58 :
                                                          if(match_cons(r_59, sym__2))
                                                            {
                                                              s_59 = ATgetArgument(r_59, 0);
                                                              t_59 = ATgetArgument(r_59, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_59)))));
                                                            }
                                                          else
                                                            {
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
                                                      b_60 = t;
                                                      if(((e_59 != NULL) && (e_59 != b_60)))
                                                        _fail(b_60);
                                                      else
                                                        e_59 = b_60;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = h_15;
        {
          ATerm l_15;
          l_15 = t;
          {
            ATerm d_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), not_null(d_59));
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = m_15;
                  t = conc_more_lists_0(t);
                }
              {
                d_60 = t;
                if(((c_60 != NULL) && (c_60 != d_60)))
                  _fail(d_60);
                else
                  c_60 = d_60;
              }
            }
          }
          t = l_15;
          {
            ATerm r_15;
            r_15 = t;
            {
              ATerm f_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_58), not_null(z_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_59))));
              {
                t = Mapp2_0(t);
                {
                  f_60 = t;
                  if(((e_60 != NULL) && (e_60 != f_60)))
                    _fail(f_60);
                  else
                    e_60 = f_60;
                }
              }
            }
            t = r_15;
            {
              ATerm h_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_58), not_null(b_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_59))));
              {
                t = Bapp2_0(t);
                {
                  h_60 = t;
                  if(((g_60 != NULL) && (g_60 != h_60)))
                    _fail(h_60);
                  else
                    g_60 = h_60;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(c_60)), not_null(a_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_59)), not_null(g_60))));
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
  ATerm z_61 = NULL,a_62 = NULL;
  z_61 = t;
  y_61 :
  if(match_cons(z_61, sym_Build_1))
    {
      a_62 = ATgetArgument(z_61, 0);
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
            ATerm g_62 = NULL;
            ATerm k_62 = NULL;
            t = new_0(t);
            {
              g_62 = t;
              {
                if(((e_62 != NULL) && (e_62 != g_62)))
                  _fail(g_62);
                else
                  e_62 = g_62;
                {
                  t = not_null(a_62);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
                      h_62 = t;
                      d_61 :
                      if(match_cons(h_62, sym_Anno_2))
                        {
                          i_62 = ATgetArgument(h_62, 0);
                          j_62 = ATgetArgument(h_62, 1);
                          {
                            if(((c_62 != NULL) && (c_62 != i_62)))
                              _fail(i_62);
                            else
                              c_62 = i_62;
                            {
                              if(((d_62 != NULL) && (d_62 != j_62)))
                                _fail(j_62);
                              else
                                d_62 = j_62;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_62));
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
                      k_62 = t;
                      if(((f_62 != NULL) && (f_62 != k_62)))
                        _fail(k_62);
                      else
                        f_62 = k_62;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_62)), not_null(c_62))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_62))));
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            {
              ATerm z_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
                  ATerm w_62 = NULL;
                  ATerm a_63 = NULL;
                  t = new_0(t);
                  {
                    w_62 = t;
                    {
                      if(((p_62 != NULL) && (p_62 != w_62)))
                        _fail(w_62);
                      else
                        p_62 = w_62;
                      {
                        t = not_null(a_62);
                        {
                          ATerm a_3 (ATerm t)
                          {
                            ATerm y_62 = NULL,z_62 = NULL;
                            y_62 = t;
                            s_61 :
                            if(match_cons(y_62, sym_RootApp_1))
                              {
                                z_62 = ATgetArgument(y_62, 0);
                                {
                                  if(((o_62 != NULL) && (o_62 != z_62)))
                                    _fail(z_62);
                                  else
                                    o_62 = z_62;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_62));
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
                            a_63 = t;
                            if(((q_62 != NULL) && (q_62 != a_63)))
                              _fail(a_63);
                            else
                              q_62 = a_63;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_62), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_62))));
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = z_15;
                  {
                    ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
                    ATerm g_63 = NULL;
                    ATerm k_63 = NULL;
                    t = new_0(t);
                    {
                      g_63 = t;
                      {
                        if(((e_63 != NULL) && (e_63 != g_63)))
                          _fail(g_63);
                        else
                          e_63 = g_63;
                        {
                          t = not_null(a_62);
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
                              h_63 = t;
                              w_61 :
                              if(match_cons(h_63, sym_App_2))
                                {
                                  i_63 = ATgetArgument(h_63, 0);
                                  j_63 = ATgetArgument(h_63, 1);
                                  {
                                    if(((c_63 != NULL) && (c_63 != i_63)))
                                      _fail(i_63);
                                    else
                                      c_63 = i_63;
                                    {
                                      if(((d_63 != NULL) && (d_63 != j_63)))
                                        _fail(j_63);
                                      else
                                        d_63 = j_63;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_63));
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
                              k_63 = t;
                              if(((f_63 != NULL) && (f_63 != k_63)))
                                _fail(k_63);
                              else
                                f_63 = k_63;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_63)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_63), not_null(d_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_63)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_63))));
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
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL;
  z_63 = t;
  y_63 :
  if(match_cons(z_63, sym__2))
    {
      a_64 = ATgetArgument(z_63, 0);
      b_64 = ATgetArgument(z_63, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_64)), not_null(a_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  j_64 = t;
  g_64 :
  if(match_cons(j_64, sym__2))
    {
      k_64 = ATgetArgument(j_64, 0);
      n_64 = ATgetArgument(j_64, 1);
      h_64 :
      if(((ATgetType(k_64) == AT_LIST) && !(ATisEmpty(k_64))))
        {
          l_64 = ATgetFirst((ATermList) k_64);
          m_64 = (ATerm) ATgetNext((ATermList) k_64);
          i_64 :
          if(((ATgetType(n_64) == AT_LIST) && !(ATisEmpty(n_64))))
            {
              o_64 = ATgetFirst((ATermList) n_64);
              p_64 = (ATerm) ATgetNext((ATermList) n_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_64), not_null(o_64)), (ATerm) ATmakeAppl(sym__2, not_null(m_64), not_null(p_64)));
            }
          else
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
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  w_64 :
  if(match_cons(g_65, sym__2))
    {
      h_65 = ATgetArgument(g_65, 0);
      i_65 = ATgetArgument(g_65, 1);
      x_64 :
      if(((ATgetType(h_65) == AT_LIST) && ATisEmpty(h_65)))
        {
          f_65 :
          if(((ATgetType(i_65) == AT_LIST) && ATisEmpty(i_65)))
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
ATerm zip_1 (ATerm t, ATerm d_101 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_101);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
  u_66 = t;
  i_66 :
  if(match_cons(u_66, sym_Call_2))
    {
      v_66 = ATgetArgument(u_66, 0);
      x_66 = ATgetArgument(u_66, 1);
      j_66 :
      if(match_cons(v_66, sym_SVar_1))
        {
          w_66 = ATgetArgument(v_66, 0);
          k_66 :
          if(match_string(w_66, "Anno_Cong__"))
            {
              l_66 :
              if(((ATgetType(x_66) == AT_LIST) && !(ATisEmpty(x_66))))
                {
                  y_66 = ATgetFirst((ATermList) x_66);
                  f_67 = (ATerm) ATgetNext((ATermList) x_66);
                  r_66 :
                  if(match_cons(y_66, sym_Cong_2))
                    {
                      d_67 = ATgetArgument(y_66, 0);
                      e_67 = ATgetArgument(y_66, 1);
                      s_66 :
                      if(((ATgetType(f_67) == AT_LIST) && !(ATisEmpty(f_67))))
                        {
                          g_67 = ATgetFirst((ATermList) f_67);
                          h_67 = (ATerm) ATgetNext((ATermList) f_67);
                          t_66 :
                          if(((ATgetType(h_67) == AT_LIST) && ATisEmpty(h_67)))
                            {
                              {
                                ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,v_68 = NULL,x_68 = NULL,z_68 = NULL;
                                ATerm c_16;
                                c_16 = t;
                                {
                                  ATerm s_67 = NULL,t_67 = NULL,v_67 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(e_67)), not_null(g_67));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      s_67 = t;
                                      e_66 :
                                      if(((ATgetType(s_67) == AT_LIST) && !(ATisEmpty(s_67))))
                                        {
                                          t_67 = ATgetFirst((ATermList) s_67);
                                          v_67 = (ATerm) ATgetNext((ATermList) s_67);
                                          {
                                            ATerm y_67 = NULL;
                                            if(((l_67 != NULL) && (l_67 != t_67)))
                                              _fail(t_67);
                                            else
                                              l_67 = t_67;
                                            {
                                              if(((p_67 != NULL) && (p_67 != v_67)))
                                                _fail(v_67);
                                              else
                                                p_67 = v_67;
                                              {
                                                ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
                                                ATerm c_3 (ATerm t)
                                                {
                                                  ATerm w_67 = NULL;
                                                  ATerm x_67 = NULL;
                                                  x_67 = t;
                                                  if(((w_67 != NULL) && (w_67 != x_67)))
                                                    _fail(x_67);
                                                  else
                                                    w_67 = x_67;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_67));
                                                  return(t);
                                                }
                                                t = map_1(t, c_3);
                                                {
                                                  y_67 = t;
                                                  {
                                                    if(((m_67 != NULL) && (m_67 != y_67)))
                                                      _fail(y_67);
                                                    else
                                                      m_67 = y_67;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(e_67)), not_null(g_67));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          z_67 = t;
                                                          d_66 :
                                                          if(((ATgetType(z_67) == AT_LIST) && !(ATisEmpty(z_67))))
                                                            {
                                                              a_68 = ATgetFirst((ATermList) z_67);
                                                              b_68 = (ATerm) ATgetNext((ATermList) z_67);
                                                              {
                                                                ATerm e_68 = NULL;
                                                                if(((n_67 != NULL) && (n_67 != a_68)))
                                                                  _fail(a_68);
                                                                else
                                                                  n_67 = a_68;
                                                                {
                                                                  if(((q_67 != NULL) && (q_67 != b_68)))
                                                                    _fail(b_68);
                                                                  else
                                                                    q_67 = b_68;
                                                                  {
                                                                    ATerm f_68 = NULL,p_68 = NULL;
                                                                    ATerm d_3 (ATerm t)
                                                                    {
                                                                      ATerm c_68 = NULL;
                                                                      ATerm d_68 = NULL;
                                                                      d_68 = t;
                                                                      if(((c_68 != NULL) && (c_68 != d_68)))
                                                                        _fail(d_68);
                                                                      else
                                                                        c_68 = d_68;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_68));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, d_3);
                                                                    {
                                                                      e_68 = t;
                                                                      {
                                                                        if(((o_67 != NULL) && (o_67 != e_68)))
                                                                          _fail(e_68);
                                                                        else
                                                                          o_67 = e_68;
                                                                        {
                                                                          ATerm g_68 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_67), not_null(q_67));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              g_68 = t;
                                                                              if(((f_68 != NULL) && (f_68 != g_68)))
                                                                                _fail(g_68);
                                                                              else
                                                                                f_68 = g_68;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), (ATerm) ATinsert(CheckATermList(not_null(e_67)), not_null(g_67)));
                                                                            {
                                                                              ATerm e_3 (ATerm t)
                                                                              {
                                                                                ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
                                                                                h_68 = t;
                                                                                a_66 :
                                                                                if(match_cons(h_68, sym__2))
                                                                                  {
                                                                                    i_68 = ATgetArgument(h_68, 0);
                                                                                    l_68 = ATgetArgument(h_68, 1);
                                                                                    b_66 :
                                                                                    if(match_cons(i_68, sym__2))
                                                                                      {
                                                                                        j_68 = ATgetArgument(i_68, 0);
                                                                                        k_68 = ATgetArgument(i_68, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_68))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_68), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_68)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                p_68 = t;
                                                                                if(((r_67 != NULL) && (r_67 != p_68)))
                                                                                  _fail(p_68);
                                                                                else
                                                                                  r_67 = p_68;
                                                                              }
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
                                t = c_16;
                                {
                                  ATerm k_16;
                                  k_16 = t;
                                  {
                                    ATerm w_68 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_67), not_null(q_67));
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
                                        w_68 = t;
                                        if(((v_68 != NULL) && (v_68 != w_68)))
                                          _fail(w_68);
                                        else
                                          v_68 = w_68;
                                      }
                                    }
                                  }
                                  t = k_16;
                                  {
                                    ATerm n_16;
                                    n_16 = t;
                                    {
                                      ATerm y_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_67), not_null(m_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_67))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          y_68 = t;
                                          if(((x_68 != NULL) && (x_68 != y_68)))
                                            _fail(y_68);
                                          else
                                            x_68 = y_68;
                                        }
                                      }
                                    }
                                    t = n_16;
                                    {
                                      ATerm a_69 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_67), not_null(o_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_67))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          a_69 = t;
                                          if(((z_68 != NULL) && (z_68 != a_69)))
                                            _fail(a_69);
                                          else
                                            z_68 = a_69;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(v_68)), not_null(n_67)), not_null(l_67)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_68), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_67)), not_null(z_68))));
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
ATerm As_2 (ATerm t, ATerm g_87 (ATerm), ATerm h_87 (ATerm))
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym_As_2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      {
        ATerm h_70 = NULL,j_70 = NULL;
        ATerm i_70 = NULL;
        t = SSLgetAnnotations(not_null(u_69));
        {
          i_70 = t;
          if(((h_70 != NULL) && (h_70 != i_70)))
            _fail(i_70);
          else
            h_70 = i_70;
        }
        {
          t = not_null(v_69);
          {
            ATerm l_70 = NULL;
            t = g_87(t);
            {
              j_70 = t;
              {
                t = not_null(w_69);
                {
                  ATerm n_70 = NULL;
                  t = h_87(t);
                  {
                    l_70 = t;
                    {
                      ATerm o_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(j_70), not_null(l_70)), not_null(h_70));
                      {
                        o_70 = t;
                        if(((n_70 != NULL) && (n_70 != o_70)))
                          _fail(o_70);
                        else
                          n_70 = o_70;
                      }
                      t = not_null(n_70);
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
ATerm Prim_2 (ATerm t, ATerm d_83 (ATerm), ATerm e_83 (ATerm))
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  a_71 = t;
  z_70 :
  if(match_cons(a_71, sym_Prim_2))
    {
      b_71 = ATgetArgument(a_71, 0);
      c_71 = ATgetArgument(a_71, 1);
      {
        ATerm g_71 = NULL,s_71 = NULL;
        ATerm r_71 = NULL;
        t = SSLgetAnnotations(not_null(a_71));
        {
          r_71 = t;
          if(((g_71 != NULL) && (g_71 != r_71)))
            _fail(r_71);
          else
            g_71 = r_71;
        }
        {
          t = not_null(b_71);
          {
            ATerm d_72 = NULL;
            t = d_83(t);
            {
              s_71 = t;
              {
                t = not_null(c_71);
                {
                  ATerm o_72 = NULL;
                  t = e_83(t);
                  {
                    d_72 = t;
                    {
                      ATerm p_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(s_71), not_null(d_72)), not_null(g_71));
                      {
                        p_72 = t;
                        if(((o_72 != NULL) && (o_72 != p_72)))
                          _fail(p_72);
                        else
                          o_72 = p_72;
                      }
                      t = not_null(o_72);
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
ATerm Explode_2 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm))
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  b_73 = t;
  a_73 :
  if(match_cons(b_73, sym_Explode_2))
    {
      c_73 = ATgetArgument(b_73, 0);
      d_73 = ATgetArgument(b_73, 1);
      {
        ATerm h_73 = NULL,j_73 = NULL;
        ATerm i_73 = NULL;
        t = SSLgetAnnotations(not_null(b_73));
        {
          i_73 = t;
          if(((h_73 != NULL) && (h_73 != i_73)))
            _fail(i_73);
          else
            h_73 = i_73;
        }
        {
          t = not_null(c_73);
          {
            ATerm l_73 = NULL;
            t = c_87(t);
            {
              j_73 = t;
              {
                t = not_null(d_73);
                {
                  ATerm n_73 = NULL;
                  t = d_87(t);
                  {
                    l_73 = t;
                    {
                      ATerm o_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(j_73), not_null(l_73)), not_null(h_73));
                      {
                        o_73 = t;
                        if(((n_73 != NULL) && (n_73 != o_73)))
                          _fail(o_73);
                        else
                          n_73 = o_73;
                      }
                      t = not_null(n_73);
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
ATerm Op_2 (ATerm t, ATerm h_85 (ATerm), ATerm i_85 (ATerm))
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
  a_74 = t;
  z_73 :
  if(match_cons(a_74, sym_Op_2))
    {
      b_74 = ATgetArgument(a_74, 0);
      c_74 = ATgetArgument(a_74, 1);
      {
        ATerm g_74 = NULL,i_74 = NULL;
        ATerm h_74 = NULL;
        t = SSLgetAnnotations(not_null(a_74));
        {
          h_74 = t;
          if(((g_74 != NULL) && (g_74 != h_74)))
            _fail(h_74);
          else
            g_74 = h_74;
        }
        {
          t = not_null(b_74);
          {
            ATerm k_74 = NULL;
            t = h_85(t);
            {
              i_74 = t;
              {
                t = not_null(c_74);
                {
                  ATerm m_74 = NULL;
                  t = i_85(t);
                  {
                    k_74 = t;
                    {
                      ATerm n_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_74), not_null(k_74)), not_null(g_74));
                      {
                        n_74 = t;
                        if(((m_74 != NULL) && (m_74 != n_74)))
                          _fail(n_74);
                        else
                          m_74 = n_74;
                      }
                      t = not_null(m_74);
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
ATerm pat_td_1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_94(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm q_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm g_3 (ATerm t)
              {
                t = pat_td_1(t, m_94);
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
            t = q_16;
            {
              ATerm t_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    t = pat_td_1(t, m_94);
                    return(t);
                  }
                  t = Explode_2(t, _id, h_3);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = t_16;
                  {
                    ATerm d_17 = t;
                    int e_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_3 (ATerm t)
                        {
                          t = pat_td_1(t, m_94);
                          return(t);
                        }
                        t = Explode_2(t, i_3, _id);
                        LocalPopChoice(e_17);
                      }
                    else
                      {
                        t = d_17;
                        {
                          ATerm f_17 = t;
                          int j_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_3 (ATerm t)
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = pat_td_1(t, m_94);
                                  return(t);
                                }
                                t = fetch_1(t, k_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, j_3);
                              LocalPopChoice(j_17);
                            }
                          else
                            {
                              t = f_17;
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  t = pat_td_1(t, m_94);
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
  ATerm j_75 = NULL,k_75 = NULL;
  j_75 = t;
  i_75 :
  if(match_cons(j_75, sym_Match_1))
    {
      k_75 = ATgetArgument(j_75, 0);
      {
        ATerm p_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL;
            ATerm q_75 = NULL;
            ATerm u_75 = NULL;
            t = new_0(t);
            {
              q_75 = t;
              {
                if(((o_75 != NULL) && (o_75 != q_75)))
                  _fail(q_75);
                else
                  o_75 = q_75;
                {
                  t = not_null(k_75);
                  {
                    ATerm m_3 (ATerm t)
                    {
                      ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
                      r_75 = t;
                      y_74 :
                      if(match_cons(r_75, sym_Anno_2))
                        {
                          s_75 = ATgetArgument(r_75, 0);
                          t_75 = ATgetArgument(r_75, 1);
                          {
                            if(((m_75 != NULL) && (m_75 != s_75)))
                              _fail(s_75);
                            else
                              m_75 = s_75;
                            {
                              if(((n_75 != NULL) && (n_75 != t_75)))
                                _fail(t_75);
                              else
                                n_75 = t_75;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_75)), not_null(m_75));
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
                      u_75 = t;
                      if(((p_75 != NULL) && (p_75 != u_75)))
                        _fail(u_75);
                      else
                        p_75 = u_75;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_75)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_75)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_75))))));
            LocalPopChoice(v_17);
          }
        else
          {
            t = p_17;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL;
                  ATerm z_75 = NULL;
                  ATerm c_76 = NULL;
                  t = new_0(t);
                  {
                    z_75 = t;
                    {
                      if(((x_75 != NULL) && (x_75 != z_75)))
                        _fail(z_75);
                      else
                        x_75 = z_75;
                      {
                        t = not_null(k_75);
                        {
                          ATerm n_3 (ATerm t)
                          {
                            ATerm a_76 = NULL,b_76 = NULL;
                            a_76 = t;
                            c_75 :
                            if(match_cons(a_76, sym_RootApp_1))
                              {
                                b_76 = ATgetArgument(a_76, 0);
                                {
                                  if(((w_75 != NULL) && (w_75 != b_76)))
                                    _fail(b_76);
                                  else
                                    w_75 = b_76;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_75));
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
                            c_76 = t;
                            if(((y_75 != NULL) && (y_75 != c_76)))
                              _fail(c_76);
                            else
                              y_75 = c_76;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_75))), not_null(w_75))));
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  {
                    ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
                    ATerm i_76 = NULL;
                    ATerm m_76 = NULL;
                    t = new_0(t);
                    {
                      i_76 = t;
                      {
                        if(((g_76 != NULL) && (g_76 != i_76)))
                          _fail(i_76);
                        else
                          g_76 = i_76;
                        {
                          t = not_null(k_75);
                          {
                            ATerm o_3 (ATerm t)
                            {
                              ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
                              j_76 = t;
                              g_75 :
                              if(match_cons(j_76, sym_App_2))
                                {
                                  k_76 = ATgetArgument(j_76, 0);
                                  l_76 = ATgetArgument(j_76, 1);
                                  {
                                    if(((f_76 != NULL) && (f_76 != k_76)))
                                      _fail(k_76);
                                    else
                                      f_76 = k_76;
                                    {
                                      if(((e_76 != NULL) && (e_76 != l_76)))
                                        _fail(l_76);
                                      else
                                        e_76 = l_76;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_76));
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
                              m_76 = t;
                              if(((h_76 != NULL) && (h_76 != m_76)))
                                _fail(m_76);
                              else
                                h_76 = m_76;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_76))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_76)), not_null(f_76)))));
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
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
  w_78 = t;
  v_78 :
  if(match_cons(w_78, sym_Cong_2))
    {
      x_78 = ATgetArgument(w_78, 0);
      y_78 = ATgetArgument(w_78, 1);
      {
        ATerm b_79 = NULL;
        ATerm f_79 = NULL;
        t = not_null(y_78);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm c_79 = NULL,d_79 = NULL;
            d_79 = t;
            t_78 :
            if(match_cons(d_79, sym_Match_1))
              {
                c_79 = ATgetArgument(d_79, 0);
                t = not_null(c_79);
              }
            else
              {
                if(match_cons(d_79, sym_Id_0))
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
            f_79 = t;
            if(((b_79 != NULL) && (b_79 != f_79)))
              _fail(f_79);
            else
              b_79 = f_79;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_78), not_null(b_79)));
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
  ATerm g_81 = NULL,r_81 = NULL,u_81 = NULL;
  g_81 = t;
  e_81 :
  if(match_cons(g_81, sym_Scope_2))
    {
      r_81 = ATgetArgument(g_81, 0);
      u_81 = ATgetArgument(g_81, 1);
      f_81 :
      if(((ATgetType(r_81) == AT_LIST) && ATisEmpty(r_81)))
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
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  q_82 = t;
  d_82 :
  if(match_cons(q_82, sym_Where_1))
    {
      r_82 = ATgetArgument(q_82, 0);
      e_82 :
      if(match_cons(r_82, sym_Seq_2))
        {
          p_82 = ATgetArgument(r_82, 0);
          l_82 = ATgetArgument(r_82, 1);
          f_82 :
          if(match_cons(p_82, sym_Where_1))
            {
              k_82 = ATgetArgument(p_82, 0);
              g_82 :
              if(match_cons(l_82, sym_Seq_2))
                {
                  m_82 = ATgetArgument(l_82, 0);
                  o_82 = ATgetArgument(l_82, 1);
                  h_82 :
                  if(match_cons(m_82, sym_Build_1))
                    {
                      n_82 = ATgetArgument(m_82, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_82), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_82)), not_null(o_82))));
                    }
                  else
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
          if(match_cons(r_82, sym_Where_1))
            {
              p_82 = ATgetArgument(r_82, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_82));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(q_82, sym_Test_1))
        {
          r_82 = ATgetArgument(q_82, 0);
          i_82 :
          if(match_cons(r_82, sym_Test_1))
            {
              p_82 = ATgetArgument(r_82, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_82));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(q_82, sym_Not_1))
            {
              r_82 = ATgetArgument(q_82, 0);
              j_82 :
              if(match_cons(r_82, sym_Not_1))
                {
                  p_82 = ATgetArgument(r_82, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_82));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_82, sym_LChoice_2))
                {
                  r_82 = ATgetArgument(q_82, 0);
                  s_82 = ATgetArgument(q_82, 1);
                  {
                    if(((r_82 != NULL) && (r_82 != s_82)))
                      _fail(s_82);
                    else
                      r_82 = s_82;
                    t = not_null(r_82);
                  }
                }
              else
                {
                  if(match_cons(q_82, sym_Choice_2))
                    {
                      r_82 = ATgetArgument(q_82, 0);
                      s_82 = ATgetArgument(q_82, 1);
                      {
                        if(((r_82 != NULL) && (r_82 != s_82)))
                          _fail(s_82);
                        else
                          r_82 = s_82;
                        t = not_null(r_82);
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
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL;
  v_83 = t;
  r_83 :
  if(match_cons(v_83, sym_LChoice_2))
    {
      w_83 = ATgetArgument(v_83, 0);
      z_83 = ATgetArgument(v_83, 1);
      s_83 :
      if(match_cons(w_83, sym_LChoice_2))
        {
          x_83 = ATgetArgument(w_83, 0);
          y_83 = ATgetArgument(w_83, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_83), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_83), not_null(z_83)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(v_83, sym_Seq_2))
        {
          w_83 = ATgetArgument(v_83, 0);
          z_83 = ATgetArgument(v_83, 1);
          t_83 :
          if(match_cons(w_83, sym_Seq_2))
            {
              x_83 = ATgetArgument(w_83, 0);
              y_83 = ATgetArgument(w_83, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_83), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_83), not_null(z_83)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(v_83, sym_Choice_2))
            {
              w_83 = ATgetArgument(v_83, 0);
              z_83 = ATgetArgument(v_83, 1);
              u_83 :
              if(match_cons(w_83, sym_Choice_2))
                {
                  x_83 = ATgetArgument(w_83, 0);
                  y_83 = ATgetArgument(w_83, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_83), (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_83), not_null(z_83)));
                }
              else
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
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
  s_85 = t;
  l_85 :
  if(match_cons(s_85, sym_Lets_2))
    {
      t_85 = ATgetArgument(s_85, 0);
      u_85 = ATgetArgument(s_85, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_85), not_null(u_85));
    }
  else
    {
      if(match_cons(s_85, sym_LChoices_1))
        {
          t_85 = ATgetArgument(s_85, 0);
          m_85 :
          if(((ATgetType(t_85) == AT_LIST) && !(ATisEmpty(t_85))))
            {
              p_85 = ATgetFirst((ATermList) t_85);
              q_85 = (ATerm) ATgetNext((ATermList) t_85);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_85), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_85)));
            }
          else
            {
              if(((ATgetType(t_85) == AT_LIST) && ATisEmpty(t_85)))
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
          if(match_cons(s_85, sym_Choices_1))
            {
              t_85 = ATgetArgument(s_85, 0);
              n_85 :
              if(((ATgetType(t_85) == AT_LIST) && !(ATisEmpty(t_85))))
                {
                  p_85 = ATgetFirst((ATermList) t_85);
                  q_85 = (ATerm) ATgetNext((ATermList) t_85);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_85), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_85)));
                }
              else
                {
                  if(((ATgetType(t_85) == AT_LIST) && ATisEmpty(t_85)))
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
              if(match_cons(s_85, sym_Seqs_1))
                {
                  t_85 = ATgetArgument(s_85, 0);
                  o_85 :
                  if(((ATgetType(t_85) == AT_LIST) && !(ATisEmpty(t_85))))
                    {
                      p_85 = ATgetFirst((ATermList) t_85);
                      q_85 = (ATerm) ATgetNext((ATermList) t_85);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_85), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_85)));
                    }
                  else
                    {
                      if(((ATgetType(t_85) == AT_LIST) && ATisEmpty(t_85)))
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
                  if(match_cons(s_85, sym_DefaultVarDec_1))
                    {
                      t_85 = ATgetArgument(s_85, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_85), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_18), term_l_18));
                    }
                  else
                    {
                      if(match_cons(s_85, sym_InfixApp_3))
                        {
                          t_85 = ATgetArgument(s_85, 0);
                          u_85 = ATgetArgument(s_85, 1);
                          r_85 = ATgetArgument(s_85, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_85), (ATerm) ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_85)), not_null(t_85))));
                        }
                      else
                        {
                          if(match_cons(s_85, sym_BAM_3))
                            {
                              t_85 = ATgetArgument(s_85, 0);
                              u_85 = ATgetArgument(s_85, 1);
                              r_85 = ATgetArgument(s_85, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(r_85))), not_null(t_85)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_85))));
                            }
                          else
                            {
                              if(match_cons(s_85, sym_AM_2))
                                {
                                  t_85 = ATgetArgument(s_85, 0);
                                  u_85 = ATgetArgument(s_85, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_85), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_85)));
                                }
                              else
                                {
                                  if(match_cons(s_85, sym_MA_2))
                                    {
                                      t_85 = ATgetArgument(s_85, 0);
                                      u_85 = ATgetArgument(s_85, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_85)), not_null(u_85));
                                    }
                                  else
                                    {
                                      if(match_cons(s_85, sym_BA_2))
                                        {
                                          t_85 = ATgetArgument(s_85, 0);
                                          u_85 = ATgetArgument(s_85, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_85)), not_null(t_85));
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
  ATerm n_87 = NULL,o_87 = NULL;
  n_87 = t;
  l_87 :
  if(match_cons(n_87, sym_Where_1))
    {
      o_87 = ATgetArgument(n_87, 0);
      m_87 :
      if(match_cons(o_87, sym_Fail_0))
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
  ATerm t_87 = NULL,u_87 = NULL,w_87 = NULL;
  t_87 = t;
  r_87 :
  if(match_cons(t_87, sym_LChoice_2))
    {
      u_87 = ATgetArgument(t_87, 0);
      w_87 = ATgetArgument(t_87, 1);
      s_87 :
      if(match_cons(w_87, sym_Fail_0))
        {
          t = not_null(u_87);
        }
      else
        {
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
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
  c_88 = t;
  a_88 :
  if(match_cons(c_88, sym_LChoice_2))
    {
      d_88 = ATgetArgument(c_88, 0);
      e_88 = ATgetArgument(c_88, 1);
      b_88 :
      if(match_cons(d_88, sym_Fail_0))
        {
          t = not_null(e_88);
        }
      else
        {
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
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  n_88 = t;
  l_88 :
  if(match_cons(n_88, sym_Choice_2))
    {
      o_88 = ATgetArgument(n_88, 0);
      p_88 = ATgetArgument(n_88, 1);
      m_88 :
      if(match_cons(p_88, sym_Fail_0))
        {
          t = not_null(o_88);
        }
      else
        {
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
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
  v_88 = t;
  t_88 :
  if(match_cons(v_88, sym_Choice_2))
    {
      w_88 = ATgetArgument(v_88, 0);
      x_88 = ATgetArgument(v_88, 1);
      u_88 :
      if(match_cons(w_88, sym_Fail_0))
        {
          t = not_null(x_88);
        }
      else
        {
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
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  c_89 :
  if(match_cons(d_89, sym_Cong_2))
    {
      e_89 = ATgetArgument(d_89, 0);
      f_89 = ATgetArgument(d_89, 1);
      {
        t = not_null(f_89);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm i_89 = NULL;
            i_89 = t;
            b_89 :
            if(!(match_cons(i_89, sym_Fail_0)))
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
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
  n_89 = t;
  l_89 :
  if(match_cons(n_89, sym_Path_2))
    {
      o_89 = ATgetArgument(n_89, 0);
      p_89 = ATgetArgument(n_89, 1);
      m_89 :
      if(match_cons(p_89, sym_Fail_0))
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
  ATerm v_89 = NULL,w_89 = NULL;
  v_89 = t;
  t_89 :
  if(match_cons(v_89, sym_One_1))
    {
      w_89 = ATgetArgument(v_89, 0);
      u_89 :
      if(match_cons(w_89, sym_Fail_0))
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
  ATerm b_90 = NULL,c_90 = NULL;
  b_90 = t;
  z_89 :
  if(match_cons(b_90, sym_Some_1))
    {
      c_90 = ATgetArgument(b_90, 0);
      a_90 :
      if(match_cons(c_90, sym_Fail_0))
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
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  f_90 :
  if(match_cons(h_90, sym_Rec_2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      g_90 :
      if(match_cons(j_90, sym_Fail_0))
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
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  n_90 :
  if(match_cons(p_90, sym_Scope_2))
    {
      q_90 = ATgetArgument(p_90, 0);
      r_90 = ATgetArgument(p_90, 1);
      o_90 :
      if(match_cons(r_90, sym_Fail_0))
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
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  x_90 = t;
  v_90 :
  if(match_cons(x_90, sym_Seq_2))
    {
      y_90 = ATgetArgument(x_90, 0);
      z_90 = ATgetArgument(x_90, 1);
      w_90 :
      if(match_cons(y_90, sym_Fail_0))
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
  ATerm f_91 = NULL,g_91 = NULL;
  f_91 = t;
  d_91 :
  if(match_cons(f_91, sym_Not_1))
    {
      g_91 = ATgetArgument(f_91, 0);
      e_91 :
      if(match_cons(g_91, sym_Fail_0))
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
  ATerm l_91 = NULL,m_91 = NULL;
  l_91 = t;
  j_91 :
  if(match_cons(l_91, sym_Test_1))
    {
      m_91 = ATgetArgument(l_91, 0);
      k_91 :
      if(match_cons(m_91, sym_Fail_0))
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
        ATerm r_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = r_18;
            {
              ATerm w_18 = t;
              int x_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(x_18);
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
                                            int p_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(p_19);
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
                                                        ATerm x_19 = t;
                                                        int z_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(z_19);
                                                          }
                                                        else
                                                          {
                                                            t = x_19;
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
  ATerm r_91 = NULL,s_91 = NULL;
  r_91 = t;
  p_91 :
  if(match_cons(r_91, sym_Match_1))
    {
      s_91 = ATgetArgument(r_91, 0);
      q_91 :
      if(match_cons(s_91, sym_Wld_0))
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
  ATerm x_91 = NULL,y_91 = NULL;
  x_91 = t;
  v_91 :
  if(match_cons(x_91, sym_Where_1))
    {
      y_91 = ATgetArgument(x_91, 0);
      w_91 :
      if(match_cons(y_91, sym_Id_0))
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
  ATerm d_92 = NULL,e_92 = NULL;
  d_92 = t;
  b_92 :
  if(match_cons(d_92, sym_All_1))
    {
      e_92 = ATgetArgument(d_92, 0);
      c_92 :
      if(match_cons(e_92, sym_Id_0))
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
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  h_92 :
  if(match_cons(j_92, sym_Rec_2))
    {
      k_92 = ATgetArgument(j_92, 0);
      l_92 = ATgetArgument(j_92, 1);
      i_92 :
      if(match_cons(l_92, sym_Id_0))
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
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
  r_92 = t;
  p_92 :
  if(match_cons(r_92, sym_Scope_2))
    {
      s_92 = ATgetArgument(r_92, 0);
      t_92 = ATgetArgument(r_92, 1);
      q_92 :
      if(match_cons(t_92, sym_Id_0))
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
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL;
  z_92 = t;
  x_92 :
  if(match_cons(z_92, sym_LChoice_2))
    {
      a_93 = ATgetArgument(z_92, 0);
      b_93 = ATgetArgument(z_92, 1);
      y_92 :
      if(match_cons(a_93, sym_Id_0))
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
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  h_93 = t;
  f_93 :
  if(match_cons(h_93, sym_Seq_2))
    {
      i_93 = ATgetArgument(h_93, 0);
      j_93 = ATgetArgument(h_93, 1);
      g_93 :
      if(match_cons(j_93, sym_Id_0))
        {
          t = not_null(i_93);
        }
      else
        {
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
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL;
  p_93 = t;
  n_93 :
  if(match_cons(p_93, sym_Seq_2))
    {
      q_93 = ATgetArgument(p_93, 0);
      r_93 = ATgetArgument(p_93, 1);
      o_93 :
      if(match_cons(q_93, sym_Id_0))
        {
          t = not_null(r_93);
        }
      else
        {
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
  ATerm x_93 = NULL,a_94 = NULL;
  x_93 = t;
  v_93 :
  if(match_cons(x_93, sym_Not_1))
    {
      a_94 = ATgetArgument(x_93, 0);
      w_93 :
      if(match_cons(a_94, sym_Id_0))
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
  ATerm f_94 = NULL,g_94 = NULL;
  f_94 = t;
  d_94 :
  if(match_cons(f_94, sym_Test_1))
    {
      g_94 = ATgetArgument(f_94, 0);
      e_94 :
      if(match_cons(g_94, sym_Id_0))
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
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm p_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(q_20);
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
                                      ATerm h_21 = t;
                                      int p_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(p_21);
                                        }
                                      else
                                        {
                                          t = h_21;
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
                                                  ATerm s_21 = t;
                                                  int d_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(d_22);
                                                    }
                                                  else
                                                    {
                                                      t = s_21;
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
        ATerm h_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(m_22);
          }
        else
          {
            t = h_22;
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
                    int q_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(q_22);
                      }
                    else
                      {
                        t = p_22;
                        {
                          ATerm v_22 = t;
                          int w_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(w_22);
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
                                      ATerm a_23 = t;
                                      int c_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(c_23);
                                        }
                                      else
                                        {
                                          t = a_23;
                                          {
                                            ATerm e_23 = t;
                                            int f_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(f_23);
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
  ATerm e_96 = NULL,g_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
  l_96 = t;
  q_95 :
  if(match_cons(l_96, sym_LChoice_2))
    {
      m_96 = ATgetArgument(l_96, 0);
      t_96 = ATgetArgument(l_96, 1);
      r_95 :
      if(match_cons(m_96, sym_Matrix_2))
        {
          n_96 = ATgetArgument(m_96, 0);
          o_96 = ATgetArgument(m_96, 1);
          s_95 :
          if(match_cons(t_96, sym_Choice_2))
            {
              j_96 = ATgetArgument(t_96, 0);
              k_96 = ATgetArgument(t_96, 1);
              t_95 :
              if(match_cons(j_96, sym_Matrix_2))
                {
                  e_96 = ATgetArgument(j_96, 0);
                  g_96 = ATgetArgument(j_96, 1);
                  {
                    ATerm z_96 = NULL,b_97 = NULL;
                    ATerm j_23;
                    j_23 = t;
                    {
                      ATerm a_97 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(e_96));
                      {
                        t = union_1(t, eq_0);
                        {
                          a_97 = t;
                          if(((z_96 != NULL) && (z_96 != a_97)))
                            _fail(a_97);
                          else
                            z_96 = a_97;
                        }
                      }
                    }
                    t = j_23;
                    {
                      ATerm c_97 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_96), not_null(g_96));
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
                          c_97 = t;
                          if(((b_97 != NULL) && (b_97 != c_97)))
                            _fail(c_97);
                          else
                            b_97 = c_97;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(z_96), not_null(b_97)), not_null(k_96));
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
              if(match_cons(t_96, sym_LChoice_2))
                {
                  j_96 = ATgetArgument(t_96, 0);
                  k_96 = ATgetArgument(t_96, 1);
                  u_95 :
                  if(match_cons(j_96, sym_Matrix_2))
                    {
                      e_96 = ATgetArgument(j_96, 0);
                      g_96 = ATgetArgument(j_96, 1);
                      {
                        ATerm i_97 = NULL,k_97 = NULL;
                        ATerm m_23;
                        m_23 = t;
                        {
                          ATerm j_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(e_96));
                          {
                            t = union_1(t, eq_0);
                            {
                              j_97 = t;
                              if(((i_97 != NULL) && (i_97 != j_97)))
                                _fail(j_97);
                              else
                                i_97 = j_97;
                            }
                          }
                        }
                        t = m_23;
                        {
                          ATerm l_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_96), not_null(g_96));
                          {
                            ATerm q_23 = t;
                            int r_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(r_23);
                              }
                            else
                              {
                                t = q_23;
                                t = conc_more_lists_0(t);
                              }
                            {
                              l_97 = t;
                              if(((k_97 != NULL) && (k_97 != l_97)))
                                _fail(l_97);
                              else
                                k_97 = l_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(i_97), not_null(k_97)), not_null(k_96));
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
                  if(match_cons(t_96, sym_Matrix_2))
                    {
                      j_96 = ATgetArgument(t_96, 0);
                      k_96 = ATgetArgument(t_96, 1);
                      {
                        ATerm q_97 = NULL,s_97 = NULL;
                        ATerm v_23;
                        v_23 = t;
                        {
                          ATerm r_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(j_96));
                          {
                            t = union_1(t, eq_0);
                            {
                              r_97 = t;
                              if(((q_97 != NULL) && (q_97 != r_97)))
                                _fail(r_97);
                              else
                                q_97 = r_97;
                            }
                          }
                        }
                        t = v_23;
                        {
                          ATerm t_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_96), not_null(k_96));
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
                              t_97 = t;
                              if(((s_97 != NULL) && (s_97 != t_97)))
                                _fail(t_97);
                              else
                                s_97 = t_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(q_97), not_null(s_97));
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
      if(match_cons(l_96, sym_Choice_2))
        {
          m_96 = ATgetArgument(l_96, 0);
          t_96 = ATgetArgument(l_96, 1);
          v_95 :
          if(match_cons(m_96, sym_Matrix_2))
            {
              n_96 = ATgetArgument(m_96, 0);
              o_96 = ATgetArgument(m_96, 1);
              w_95 :
              if(match_cons(t_96, sym_LChoice_2))
                {
                  j_96 = ATgetArgument(t_96, 0);
                  k_96 = ATgetArgument(t_96, 1);
                  x_95 :
                  if(match_cons(j_96, sym_Matrix_2))
                    {
                      e_96 = ATgetArgument(j_96, 0);
                      g_96 = ATgetArgument(j_96, 1);
                      {
                        ATerm z_97 = NULL,b_98 = NULL;
                        ATerm a_24;
                        a_24 = t;
                        {
                          ATerm a_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(e_96));
                          {
                            t = union_1(t, eq_0);
                            {
                              a_98 = t;
                              if(((z_97 != NULL) && (z_97 != a_98)))
                                _fail(a_98);
                              else
                                z_97 = a_98;
                            }
                          }
                        }
                        t = a_24;
                        {
                          ATerm c_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_96), not_null(g_96));
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
                              c_98 = t;
                              if(((b_98 != NULL) && (b_98 != c_98)))
                                _fail(c_98);
                              else
                                b_98 = c_98;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(z_97), not_null(b_98)), not_null(k_96));
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
                  if(match_cons(t_96, sym_Choice_2))
                    {
                      j_96 = ATgetArgument(t_96, 0);
                      k_96 = ATgetArgument(t_96, 1);
                      y_95 :
                      if(match_cons(j_96, sym_Matrix_2))
                        {
                          e_96 = ATgetArgument(j_96, 0);
                          g_96 = ATgetArgument(j_96, 1);
                          {
                            ATerm i_98 = NULL,k_98 = NULL;
                            ATerm d_24;
                            d_24 = t;
                            {
                              ATerm j_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(e_96));
                              {
                                t = union_1(t, eq_0);
                                {
                                  j_98 = t;
                                  if(((i_98 != NULL) && (i_98 != j_98)))
                                    _fail(j_98);
                                  else
                                    i_98 = j_98;
                                }
                              }
                            }
                            t = d_24;
                            {
                              ATerm l_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_96), not_null(g_96));
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
                                  l_98 = t;
                                  if(((k_98 != NULL) && (k_98 != l_98)))
                                    _fail(l_98);
                                  else
                                    k_98 = l_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(i_98), not_null(k_98)), not_null(k_96));
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
                      if(match_cons(t_96, sym_Matrix_2))
                        {
                          j_96 = ATgetArgument(t_96, 0);
                          k_96 = ATgetArgument(t_96, 1);
                          {
                            ATerm q_98 = NULL,s_98 = NULL;
                            ATerm g_24;
                            g_24 = t;
                            {
                              ATerm r_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(j_96));
                              {
                                t = union_1(t, eq_0);
                                {
                                  r_98 = t;
                                  if(((q_98 != NULL) && (q_98 != r_98)))
                                    _fail(r_98);
                                  else
                                    q_98 = r_98;
                                }
                              }
                            }
                            t = g_24;
                            {
                              ATerm t_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_96), not_null(k_96));
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
                                  t_98 = t;
                                  if(((s_98 != NULL) && (s_98 != t_98)))
                                    _fail(t_98);
                                  else
                                    s_98 = t_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(q_98), not_null(s_98));
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
          if(match_cons(l_96, sym_Scope_2))
            {
              m_96 = ATgetArgument(l_96, 0);
              t_96 = ATgetArgument(l_96, 1);
              z_95 :
              if(match_cons(t_96, sym_Matrix_2))
                {
                  j_96 = ATgetArgument(t_96, 0);
                  k_96 = ATgetArgument(t_96, 1);
                  {
                    ATerm x_98 = NULL;
                    ATerm d_99 = NULL;
                    t = not_null(k_96);
                    {
                      ATerm r_3 (ATerm t)
                      {
                        ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL;
                        y_98 = t;
                        o_95 :
                        if(match_cons(y_98, sym_Row_2))
                          {
                            z_98 = ATgetArgument(y_98, 0);
                            a_99 = ATgetArgument(y_98, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(z_98), (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_96), not_null(a_99)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, r_3);
                      {
                        d_99 = t;
                        if(((x_98 != NULL) && (x_98 != d_99)))
                          _fail(d_99);
                        else
                          x_98 = d_99;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(j_96), not_null(x_98));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(l_96, sym_Seq_2))
                {
                  m_96 = ATgetArgument(l_96, 0);
                  t_96 = ATgetArgument(l_96, 1);
                  a_96 :
                  if(match_cons(m_96, sym_Matrix_2))
                    {
                      n_96 = ATgetArgument(m_96, 0);
                      o_96 = ATgetArgument(m_96, 1);
                      b_96 :
                      if(((ATgetType(o_96) == AT_LIST) && !(ATisEmpty(o_96))))
                        {
                          p_96 = ATgetFirst((ATermList) o_96);
                          s_96 = (ATerm) ATgetNext((ATermList) o_96);
                          c_96 :
                          if(match_cons(p_96, sym_Row_2))
                            {
                              q_96 = ATgetArgument(p_96, 0);
                              r_96 = ATgetArgument(p_96, 1);
                              d_96 :
                              if(((ATgetType(s_96) == AT_LIST) && ATisEmpty(s_96)))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(n_96), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(q_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_96), not_null(t_96)))));
                                }
                              else
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
ATerm foldr_3 (ATerm t, ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm))
{
  ATerm n_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_107(t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = n_24;
      {
        ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL;
        n_100 = t;
        m_100 :
        if(((ATgetType(n_100) == AT_LIST) && !(ATisEmpty(n_100))))
          {
            o_100 = ATgetFirst((ATermList) n_100);
            p_100 = (ATerm) ATgetNext((ATermList) n_100);
            {
              ATerm s_100 = NULL,u_100 = NULL;
              ATerm t_24;
              t_24 = t;
              {
                ATerm t_100 = NULL;
                t = not_null(o_100);
                {
                  t = c_107(t);
                  {
                    t_100 = t;
                    if(((s_100 != NULL) && (s_100 != t_100)))
                      _fail(t_100);
                    else
                      s_100 = t_100;
                  }
                }
              }
              t = t_24;
              {
                ATerm v_100 = NULL;
                t = not_null(p_100);
                {
                  t = foldr_3(t, a_107, b_107, c_107);
                  {
                    v_100 = t;
                    if(((u_100 != NULL) && (u_100 != v_100)))
                      _fail(v_100);
                    else
                      u_100 = v_100;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_100), not_null(u_100));
                  t = b_107(t);
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
ATerm crush_3 (ATerm t, ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm))
{
  ATerm l_101 = NULL;
  ATerm o_101 = NULL;
  l_101 = t;
  {
    ATerm p_101 = NULL;
    ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
    t = not_null(l_101);
    {
      p_101 = t;
      {
        t = SSL_explode_term(not_null(p_101));
        {
          r_101 = t;
          k_101 :
          if(match_cons(r_101, sym__2))
            {
              s_101 = ATgetArgument(r_101, 0);
              t_101 = ATgetArgument(r_101, 1);
              if(((o_101 != NULL) && (o_101 != t_101)))
                _fail(t_101);
              else
                o_101 = t_101;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_101);
      t = foldr_3(t, y_105, z_105, a_106);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm x_104 (ATerm))
{
  ATerm a_102 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_101 = NULL;
        ATerm z_101 = NULL;
        t = x_104(t);
        {
          z_101 = t;
          if(((y_101 != NULL) && (y_101 != z_101)))
            _fail(z_101);
          else
            y_101 = z_101;
        }
        t = (ATerm) ATinsert(ATempty, not_null(y_101));
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
          t = crush_3(t, s_3, t_3, a_102);
        }
      }
    return(t);
  }
  t = a_102(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm z_104 (ATerm))
{
  t = collect_om_1(t, z_104);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm e_102 = NULL,f_102 = NULL;
    e_102 = t;
    d_102 :
    if(match_cons(e_102, sym_Off_1))
      {
        f_102 = ATgetArgument(e_102, 0);
        t = not_null(f_102);
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
  ATerm u_102 = NULL,x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,d_103 = NULL,e_103 = NULL;
  y_102 = t;
  l_102 :
  if(match_cons(y_102, sym_As_2))
    {
      z_102 = ATgetArgument(y_102, 0);
      d_103 = ATgetArgument(y_102, 1);
      q_102 :
      if(match_cons(z_102, sym_Var_1))
        {
          a_103 = ATgetArgument(z_102, 0);
          r_102 :
          if(match_cons(d_103, sym_As_2))
            {
              e_103 = ATgetArgument(d_103, 0);
              x_102 = ATgetArgument(d_103, 1);
              s_102 :
              if(match_cons(e_103, sym_Off_1))
                {
                  u_102 = ATgetArgument(e_103, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_103)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_102))));
                }
              else
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
          if(match_cons(z_102, sym_Off_1))
            {
              a_103 = ATgetArgument(z_102, 0);
              t_102 :
              if(match_cons(d_103, sym_Var_1))
                {
                  e_103 = ATgetArgument(d_103, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_103)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_103))));
                }
              else
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
  ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL;
  x_103 = t;
  o_103 :
  if(match_cons(x_103, sym_As_2))
    {
      y_103 = ATgetArgument(x_103, 0);
      a_104 = ATgetArgument(x_103, 1);
      p_103 :
      if(match_cons(y_103, sym_Var_1))
        {
          z_103 = ATgetArgument(y_103, 0);
          q_103 :
          if(match_cons(a_104, sym_As_2))
            {
              b_104 = ATgetArgument(a_104, 0);
              w_103 = ATgetArgument(a_104, 1);
              t_103 :
              if(match_cons(b_104, sym_Off_1))
                {
                  v_103 = ATgetArgument(b_104, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(v_103)), not_null(w_103));
                }
              else
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
          if(match_cons(y_103, sym_Off_1))
            {
              z_103 = ATgetArgument(y_103, 0);
              u_103 :
              if(match_cons(a_104, sym_Var_1))
                {
                  b_104 = ATgetArgument(a_104, 0);
                  {
                    t = not_null(z_103);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_103)), term_c_12);
                  }
                }
              else
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
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_cons(n_104, sym__2))
    {
      o_104 = ATgetArgument(n_104, 0);
      p_104 = ATgetArgument(n_104, 1);
      if(((o_104 != NULL) && (o_104 != p_104)))
        _fail(p_104);
      else
        o_104 = p_104;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm l_106 (ATerm), ATerm m_106 (ATerm))
{
  ATerm v_104 = NULL,w_104 = NULL,a_105 = NULL;
  v_104 = t;
  u_104 :
  if(((ATgetType(v_104) == AT_LIST) && !(ATisEmpty(v_104))))
    {
      w_104 = ATgetFirst((ATermList) v_104);
      a_105 = (ATerm) ATgetNext((ATermList) v_104);
      {
        t = m_106(t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm d_105 = NULL;
            d_105 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_104), not_null(d_105));
              t = l_106(t);
            }
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        t = not_null(a_105);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm h_106 (ATerm))
{
  ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL;
  j_105 = t;
  i_105 :
  if(match_cons(j_105, sym__2))
    {
      k_105 = ATgetArgument(j_105, 0);
      l_105 = ATgetArgument(j_105, 1);
      {
        t = not_null(k_105);
        {
          ATerm s_105 (ATerm t)
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_105);
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
                        t = not_null(l_105);
                        return(t);
                      }
                      t = HdMember_p__2(t, h_106, w_3);
                      t = s_105(t);
                      LocalPopChoice(b_25);
                    }
                  else
                    {
                      t = a_25;
                      t = Cons_2(t, _id, s_105);
                    }
                }
              }
            return(t);
          }
          t = s_105(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unions_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = union_1(t, j_106);
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
  ATerm c_106 = NULL,f_106 = NULL,g_106 = NULL,k_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL;
  c_106 = t;
  u_105 :
  if(match_cons(c_106, sym__2))
    {
      f_106 = ATgetArgument(c_106, 0);
      o_106 = ATgetArgument(c_106, 1);
      v_105 :
      if(match_cons(f_106, sym__2))
        {
          g_106 = ATgetArgument(f_106, 0);
          k_106 = ATgetArgument(f_106, 1);
          b_106 :
          if(match_cons(o_106, sym__2))
            {
              p_106 = ATgetArgument(o_106, 0);
              q_106 = ATgetArgument(o_106, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_106)), not_null(g_106)), (ATerm) ATinsert(CheckATermList(not_null(q_106)), not_null(k_106)));
            }
          else
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
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
  d_107 = t;
  x_106 :
  if(((ATgetType(d_107) == AT_LIST) && !(ATisEmpty(d_107))))
    {
      e_107 = ATgetFirst((ATermList) d_107);
      f_107 = (ATerm) ATgetNext((ATermList) d_107);
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_107), not_null(f_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm l_107 = NULL;
  l_107 = t;
  k_107 :
  if(((ATgetType(l_107) == AT_LIST) && ATisEmpty(l_107)))
    {
      t = term_c_25;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm i_101 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, i_101);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm j_104 (ATerm), ATerm k_104 (ATerm))
{
  ATerm c_108 = NULL;
  ATerm f_108 = NULL,g_108 = NULL,m_108 = NULL,v_108 = NULL,w_108 = NULL,x_108 = NULL,a_109 = NULL,q_109 = NULL;
  c_108 = t;
  {
    ATerm d_25;
    d_25 = t;
    {
      ATerm h_108 = NULL;
      ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL;
      t = not_null(c_108);
      {
        h_108 = t;
        {
          t = SSL_explode_term(not_null(h_108));
          {
            j_108 = t;
            q_107 :
            if(match_cons(j_108, sym__2))
              {
                k_108 = ATgetArgument(j_108, 0);
                l_108 = ATgetArgument(j_108, 1);
                {
                  if(((f_108 != NULL) && (f_108 != k_108)))
                    _fail(k_108);
                  else
                    f_108 = k_108;
                  if(((g_108 != NULL) && (g_108 != l_108)))
                    _fail(l_108);
                  else
                    g_108 = l_108;
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
        ATerm u_108 = NULL;
        t = SSLgetAnnotations(not_null(c_108));
        {
          u_108 = t;
          if(((m_108 != NULL) && (m_108 != u_108)))
            _fail(u_108);
          else
            m_108 = u_108;
        }
      }
      t = e_25;
      {
        ATerm f_25;
        f_25 = t;
        {
          ATerm b_109 = NULL,c_109 = NULL,e_109 = NULL;
          t = not_null(g_108);
          {
            t = unzip_1(t, j_104);
            {
              b_109 = t;
              y_107 :
              if(match_cons(b_109, sym__2))
                {
                  c_109 = ATgetArgument(b_109, 0);
                  e_109 = ATgetArgument(b_109, 1);
                  {
                    ATerm f_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL;
                    if(((w_108 != NULL) && (w_108 != c_109)))
                      _fail(c_109);
                    else
                      w_108 = c_109;
                    {
                      if(((v_108 != NULL) && (v_108 != e_109)))
                        _fail(e_109);
                      else
                        v_108 = e_109;
                      {
                        ATerm i_109 = NULL,m_109 = NULL;
                        ATerm g_25;
                        g_25 = t;
                        {
                          ATerm j_109 = NULL;
                          ATerm l_109 = NULL;
                          t = SSL_mkterm(not_null(f_108), not_null(w_108));
                          {
                            j_109 = t;
                            {
                              l_109 = t;
                              if(((i_109 != NULL) && (i_109 != l_109)))
                                _fail(l_109);
                              else
                                i_109 = l_109;
                            }
                          }
                        }
                        t = g_25;
                        {
                          t = SSLsetAnnotations(not_null(i_109), not_null(m_108));
                          {
                            m_109 = t;
                            if(((f_109 != NULL) && (f_109 != m_109)))
                              _fail(m_109);
                            else
                              f_109 = m_109;
                          }
                        }
                        {
                          t = not_null(f_109);
                          {
                            t = k_104(t);
                            {
                              n_109 = t;
                              x_107 :
                              if(match_cons(n_109, sym__2))
                                {
                                  o_109 = ATgetArgument(n_109, 0);
                                  p_109 = ATgetArgument(n_109, 1);
                                  {
                                    if(((x_108 != NULL) && (x_108 != o_109)))
                                      _fail(o_109);
                                    else
                                      x_108 = o_109;
                                    if(((a_109 != NULL) && (a_109 != p_109)))
                                      _fail(p_109);
                                    else
                                      a_109 = p_109;
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
          ATerm r_109 = NULL,t_109 = NULL;
          ATerm s_109 = NULL;
          t = not_null(v_108);
          {
            t = unions_1(t, eq_0);
            {
              s_109 = t;
              if(((r_109 != NULL) && (r_109 != s_109)))
                _fail(s_109);
              else
                r_109 = s_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_109), not_null(r_109));
            {
              t = union_1(t, eq_0);
              {
                t_109 = t;
                if(((q_109 != NULL) && (q_109 != t_109)))
                  _fail(t_109);
                else
                  q_109 = t_109;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_108), not_null(q_109));
        }
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm o_105 (ATerm), ATerm p_105 (ATerm))
{
  ATerm m_110 (ATerm t)
  {
    ATerm z_3 (ATerm t)
    {
      ATerm i_110 = NULL,k_110 = NULL;
      ATerm h_25;
      h_25 = t;
      {
        ATerm j_110 = NULL;
        ATerm i_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_105(t);
            LocalPopChoice(m_25);
          }
        else
          {
            t = i_25;
            {
            }
          }
        {
          j_110 = t;
          if(((i_110 != NULL) && (i_110 != j_110)))
            _fail(j_110);
          else
            i_110 = j_110;
        }
      }
      t = h_25;
      {
        ATerm l_110 = NULL;
        ATerm n_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_105(t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = n_25;
            t = (ATerm) ATempty;
          }
        {
          l_110 = t;
          if(((k_110 != NULL) && (k_110 != l_110)))
            _fail(l_110);
          else
            k_110 = l_110;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_110), not_null(k_110));
      }
      return(t);
    }
    t = CollectSplit_2(t, m_110, z_3);
    return(t);
  }
  t = m_110(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm k_94 (ATerm))
{
  ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL;
  w_110 = t;
  v_110 :
  if(match_cons(w_110, sym__2))
    {
      x_110 = ATgetArgument(w_110, 0);
      y_110 = ATgetArgument(w_110, 1);
      {
        ATerm b_111 = NULL;
        ATerm c_111 = NULL;
        t = k_94(t);
        {
          c_111 = t;
          if(((b_111 != NULL) && (b_111 != c_111)))
            _fail(c_111);
          else
            b_111 = c_111;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(b_111)), not_null(x_110))), not_null(y_110));
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
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL;
  h_111 = t;
  g_111 :
  if(match_cons(h_111, sym__2))
    {
      i_111 = ATgetArgument(h_111, 0);
      j_111 = ATgetArgument(h_111, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_111)), not_null(i_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm r_111 = NULL,t_111 = NULL,u_111 = NULL,v_111 = NULL,w_111 = NULL;
  r_111 = t;
  p_111 :
  if(match_cons(r_111, sym__2))
    {
      t_111 = ATgetArgument(r_111, 0);
      u_111 = ATgetArgument(r_111, 1);
      q_111 :
      if(((ATgetType(u_111) == AT_LIST) && !(ATisEmpty(u_111))))
        {
          v_111 = ATgetFirst((ATermList) u_111);
          w_111 = (ATerm) ATgetNext((ATermList) u_111);
          {
            ATerm a_112 = NULL;
            ATerm b_112 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_111), term_u_12);
            {
              t = add_0(t);
              {
                b_112 = t;
                if(((a_112 != NULL) && (a_112 != b_112)))
                  _fail(b_112);
                else
                  a_112 = b_112;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_111), not_null(v_111)), (ATerm) ATmakeAppl(sym__2, not_null(a_112), not_null(w_111)));
          }
        }
      else
        {
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
  ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
  l_112 = t;
  j_112 :
  if(match_cons(l_112, sym__2))
    {
      m_112 = ATgetArgument(l_112, 0);
      n_112 = ATgetArgument(l_112, 1);
      k_112 :
      if(((ATgetType(n_112) == AT_LIST) && ATisEmpty(n_112)))
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
ATerm genzip_4 (ATerm t, ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm))
{
  ATerm q_112 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_100(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
          t = z_100(t);
          {
            t = _2(t, b_101, q_112);
            t = a_101(t);
          }
        }
      }
    return(t);
  }
  t = q_112(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm s_112 = NULL;
  s_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(s_112));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm j_101 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, j_101);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL;
  ATerm d_114 (ATerm t)
  {
    ATerm t_113 = NULL;
    ATerm u_113 = NULL;
    t = not_null(o_113);
    {
      ATerm a_4 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = not_null(n_113);
          return(t);
        }
        t = Annotate_1(t, b_4);
        return(t);
      }
      t = nzip0_1(t, a_4);
      {
        u_113 = t;
        if(((t_113 != NULL) && (t_113 != u_113)))
          _fail(u_113);
        else
          t_113 = u_113;
      }
    }
    t = not_null(t_113);
    return(t);
  }
  ATerm e_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_113)), term_c_12);
    return(t);
  }
  ATerm f_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_113)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_113)), not_null(q_113)));
    return(t);
  }
  ATerm g_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_113)), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_113), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_113)), not_null(q_113))));
    return(t);
  }
  l_113 = t;
  g_113 :
  if(match_cons(l_113, sym_As_2))
    {
      m_113 = ATgetArgument(l_113, 0);
      o_113 = ATgetArgument(l_113, 1);
      h_113 :
      if(match_cons(m_113, sym_Off_1))
        {
          n_113 = ATgetArgument(m_113, 0);
          i_113 :
          if(match_cons(o_113, sym_BuildDefault_1))
            {
              p_113 = ATgetArgument(o_113, 0);
              {
                ATerm z_25 = t;
                int c_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_114(t);
                    LocalPopChoice(c_26);
                  }
                else
                  {
                    t = z_25;
                    t = e_114(t);
                  }
              }
            }
          else
            {
              if(match_cons(o_113, sym_As_2))
                {
                  p_113 = ATgetArgument(o_113, 0);
                  q_113 = ATgetArgument(o_113, 1);
                  j_113 :
                  if(match_cons(p_113, sym_Var_1))
                    {
                      k_113 = ATgetArgument(p_113, 0);
                      {
                        ATerm d_26 = t;
                        int e_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_114(t);
                            LocalPopChoice(e_26);
                          }
                        else
                          {
                            t = d_26;
                            t = f_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = d_114(t);
                    }
                }
              else
                {
                  if(match_cons(o_113, sym_Op_2))
                    {
                      p_113 = ATgetArgument(o_113, 0);
                      q_113 = ATgetArgument(o_113, 1);
                      {
                        ATerm f_26 = t;
                        int g_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_114(t);
                            LocalPopChoice(g_26);
                          }
                        else
                          {
                            t = f_26;
                            t = g_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = d_114(t);
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
ATerm topdown_1 (ATerm t, ATerm f_96 (ATerm))
{
  t = f_96(t);
  {
    ATerm c_4 (ATerm t)
    {
      t = topdown_1(t, f_96);
      return(t);
    }
    t = _all(t, c_4);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm m_114 = NULL;
  ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
  m_114 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_h_26, (ATerm) ATinsert(ATempty, not_null(m_114)));
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
          o_114 = t;
          l_114 :
          if(match_cons(o_114, sym__2))
            {
              p_114 = ATgetArgument(o_114, 0);
              q_114 = ATgetArgument(o_114, 1);
              {
                ATerm t_114 = NULL;
                ATerm u_114 = NULL;
                t = not_null(p_114);
                {
                  t = collect_offsets_0(t);
                  {
                    u_114 = t;
                    if(((t_114 != NULL) && (t_114 != u_114)))
                      _fail(u_114);
                    else
                      t_114 = u_114;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(t_114), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(p_114), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_114)))));
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
  ATerm a_115 = NULL,b_115 = NULL;
  a_115 = t;
  z_114 :
  if(match_cons(a_115, sym_Match_1))
    {
      b_115 = ATgetArgument(a_115, 0);
      {
        t = not_null(b_115);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm f_112 (ATerm), ATerm g_112 (ATerm))
{
  ATerm e_115 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_112(t);
        t = e_115(t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = g_112(t);
      }
    return(t);
  }
  t = e_115(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_112 (ATerm))
{
  t = repeat_2(t, i_112, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm h_96 (ATerm))
{
  ATerm f_115 (ATerm t)
  {
    t = h_96(t);
    {
      t = _all(t, f_115);
      t = h_96(t);
    }
    return(t);
  }
  t = f_115(t);
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
ATerm SDef_3 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm))
{
  ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL;
  n_115 = t;
  m_115 :
  if(match_cons(n_115, sym_SDef_3))
    {
      o_115 = ATgetArgument(n_115, 0);
      p_115 = ATgetArgument(n_115, 1);
      q_115 = ATgetArgument(n_115, 2);
      {
        ATerm v_115 = NULL,x_115 = NULL;
        ATerm w_115 = NULL;
        t = SSLgetAnnotations(not_null(n_115));
        {
          w_115 = t;
          if(((v_115 != NULL) && (v_115 != w_115)))
            _fail(w_115);
          else
            v_115 = w_115;
        }
        {
          t = not_null(o_115);
          {
            ATerm z_115 = NULL;
            t = r_84(t);
            {
              x_115 = t;
              {
                t = not_null(p_115);
                {
                  ATerm b_116 = NULL;
                  t = s_84(t);
                  {
                    z_115 = t;
                    {
                      t = not_null(q_115);
                      {
                        ATerm d_116 = NULL;
                        t = t_84(t);
                        {
                          b_116 = t;
                          {
                            ATerm e_116 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(x_115), not_null(z_115), not_null(b_116)), not_null(v_115));
                            {
                              e_116 = t;
                              if(((d_116 != NULL) && (d_116 != e_116)))
                                _fail(e_116);
                              else
                                d_116 = e_116;
                            }
                            t = not_null(d_116);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm v_85 (ATerm))
{
  ATerm x_116 = NULL,y_116 = NULL;
  x_116 = t;
  w_116 :
  if(match_cons(x_116, sym_Strategies_1))
    {
      y_116 = ATgetArgument(x_116, 0);
      {
        ATerm b_117 = NULL,d_117 = NULL;
        ATerm c_117 = NULL;
        t = SSLgetAnnotations(not_null(x_116));
        {
          c_117 = t;
          if(((b_117 != NULL) && (b_117 != c_117)))
            _fail(c_117);
          else
            b_117 = c_117;
        }
        {
          t = not_null(y_116);
          {
            ATerm f_117 = NULL;
            t = v_85(t);
            {
              d_117 = t;
              {
                ATerm g_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(d_117)), not_null(b_117));
                {
                  g_117 = t;
                  if(((f_117 != NULL) && (f_117 != g_117)))
                    _fail(g_117);
                  else
                    f_117 = g_117;
                }
                t = not_null(f_117);
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
ATerm Specification_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm q_117 = NULL,r_117 = NULL;
  q_117 = t;
  p_117 :
  if(match_cons(q_117, sym_Specification_1))
    {
      r_117 = ATgetArgument(q_117, 0);
      {
        ATerm w_117 = NULL,y_117 = NULL;
        ATerm x_117 = NULL;
        t = SSLgetAnnotations(not_null(q_117));
        {
          x_117 = t;
          if(((w_117 != NULL) && (w_117 != x_117)))
            _fail(x_117);
          else
            w_117 = x_117;
        }
        {
          t = not_null(r_117);
          {
            ATerm e_118 = NULL;
            t = x_85(t);
            {
              y_117 = t;
              {
                ATerm g_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_117)), not_null(w_117));
                {
                  g_118 = t;
                  if(((e_118 != NULL) && (e_118 != g_118)))
                    _fail(g_118);
                  else
                    e_118 = g_118;
                }
                t = not_null(e_118);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm j_94 (ATerm))
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
            t = SDef_3(t, _id, _id, j_94);
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
ATerm _2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  ATerm a_119 = NULL,b_119 = NULL,c_119 = NULL;
  a_119 = t;
  z_118 :
  if(match_cons(a_119, sym__2))
    {
      b_119 = ATgetArgument(a_119, 0);
      c_119 = ATgetArgument(a_119, 1);
      {
        ATerm g_119 = NULL,i_119 = NULL;
        ATerm h_119 = NULL;
        t = SSLgetAnnotations(not_null(a_119));
        {
          h_119 = t;
          if(((g_119 != NULL) && (g_119 != h_119)))
            _fail(h_119);
          else
            g_119 = h_119;
        }
        {
          t = not_null(b_119);
          {
            ATerm k_119 = NULL;
            t = s_81(t);
            {
              i_119 = t;
              {
                t = not_null(c_119);
                {
                  ATerm m_119 = NULL;
                  t = t_81(t);
                  {
                    k_119 = t;
                    {
                      ATerm p_119 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_119), not_null(k_119)), not_null(g_119));
                      {
                        p_119 = t;
                        if(((m_119 != NULL) && (m_119 != p_119)))
                          _fail(p_119);
                        else
                          m_119 = p_119;
                      }
                      t = not_null(m_119);
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
  ATerm x_119 = NULL;
  ATerm q_26;
  q_26 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm y_119 = NULL,z_119 = NULL;
      y_119 = t;
      w_119 :
      if(match_cons(y_119, sym_Program_1))
        {
          z_119 = ATgetArgument(y_119, 0);
          if(((x_119 != NULL) && (x_119 != z_119)))
            _fail(z_119);
          else
            x_119 = z_119;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, p_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_26), not_null(x_119)), term_v_26));
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
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL;
  d_120 = t;
  c_120 :
  if(match_cons(d_120, sym__2))
    {
      e_120 = ATgetArgument(d_120, 0);
      f_120 = ATgetArgument(d_120, 1);
      {
        ATerm a_27;
        a_27 = t;
        t = SSL_printnl(not_null(e_120), not_null(f_120));
        t = a_27;
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
  ATerm k_120 = NULL;
  k_120 = t;
  t = SSL_implode_string(not_null(k_120));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm p_120 = NULL,r_120 = NULL,s_120 = NULL;
        p_120 = t;
        o_120 :
        if(((ATgetType(p_120) == AT_LIST) && !(ATisEmpty(p_120))))
          {
            r_120 = ATgetFirst((ATermList) p_120);
            s_120 = (ATerm) ATgetNext((ATermList) p_120);
            {
              t = not_null(r_120);
              {
                ATerm q_4 (ATerm t)
                {
                  t = not_null(s_120);
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
  ATerm c_121 = NULL;
  ATerm e_121 = NULL;
  c_121 = t;
  {
    ATerm f_121 = NULL;
    ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL;
    t = not_null(c_121);
    {
      f_121 = t;
      {
        t = SSL_explode_term(not_null(f_121));
        {
          h_121 = t;
          a_121 :
          if(match_cons(h_121, sym__2))
            {
              i_121 = ATgetArgument(h_121, 0);
              j_121 = ATgetArgument(h_121, 1);
              b_121 :
              if(match_string(i_121, ""))
                {
                  if(((e_121 != NULL) && (e_121 != j_121)))
                    _fail(j_121);
                  else
                    e_121 = j_121;
                }
              else
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
      t = not_null(e_121);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_103 (ATerm))
{
  ATerm n_121 (ATerm t)
  {
    ATerm i_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_121);
        LocalPopChoice(l_27);
      }
    else
      {
        t = i_27;
        {
          t = Nil_0(t);
          t = b_103(t);
        }
      }
    return(t);
  }
  t = n_121(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL;
  w_121 = t;
  p_121 :
  if(match_cons(w_121, sym__2))
    {
      x_121 = ATgetArgument(w_121, 0);
      y_121 = ATgetArgument(w_121, 1);
      {
        t = not_null(x_121);
        {
          ATerm r_4 (ATerm t)
          {
            t = not_null(y_121);
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
  ATerm d_122 = NULL;
  d_122 = t;
  t = SSL_explode_string(not_null(d_122));
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
ATerm debug_1 (ATerm t, ATerm r_116 (ATerm))
{
  ATerm q_27;
  q_27 = t;
  {
    ATerm i_122 = NULL,k_122 = NULL;
    ATerm r_27;
    r_27 = t;
    {
      ATerm j_122 = NULL;
      t = r_116(t);
      {
        j_122 = t;
        if(((i_122 != NULL) && (i_122 != j_122)))
          _fail(j_122);
        else
          i_122 = j_122;
      }
    }
    t = r_27;
    {
      ATerm l_122 = NULL;
      l_122 = t;
      if(((k_122 != NULL) && (k_122 != l_122)))
        _fail(l_122);
      else
        k_122 = l_122;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_122)), not_null(i_122)));
        t = printnl_0(t);
      }
    }
  }
  t = q_27;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_122 = NULL;
  p_122 = t;
  t = SSL_is_string(not_null(p_122));
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
              ATerm y_122 = NULL,z_122 = NULL,a_123 = NULL;
              y_122 = t;
              x_122 :
              if(match_cons(y_122, sym_Path_1))
                {
                  z_122 = ATgetArgument(y_122, 0);
                  t = not_null(z_122);
                }
              else
                {
                  if(match_cons(y_122, sym_Var_1))
                    {
                      z_122 = ATgetArgument(y_122, 0);
                      {
                        t = not_null(z_122);
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
                                  t = term_a_28;
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
                      if(match_cons(y_122, sym_Prefix_2))
                        {
                          z_122 = ATgetArgument(y_122, 0);
                          a_123 = ATgetArgument(y_122, 1);
                          {
                            ATerm f_123 = NULL,h_123 = NULL;
                            ATerm e_28;
                            e_28 = t;
                            {
                              ATerm g_123 = NULL;
                              t = not_null(z_122);
                              {
                                t = eval_config_0(t);
                                {
                                  g_123 = t;
                                  if(((f_123 != NULL) && (f_123 != g_123)))
                                    _fail(g_123);
                                  else
                                    f_123 = g_123;
                                }
                              }
                            }
                            t = e_28;
                            {
                              ATerm i_123 = NULL;
                              t = not_null(a_123);
                              {
                                t = eval_config_0(t);
                                {
                                  i_123 = t;
                                  if(((h_123 != NULL) && (h_123 != i_123)))
                                    _fail(i_123);
                                  else
                                    h_123 = i_123;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_123), not_null(h_123));
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
  ATerm r_123 = NULL;
  r_123 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_28, not_null(r_123));
    {
      t = table_get_0(t);
      {
        ATerm j_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm n_28;
              n_28 = t;
              {
                ATerm t_123 = NULL;
                ATerm w_123 = NULL;
                w_123 = t;
                if(((t_123 != NULL) && (t_123 != w_123)))
                  _fail(w_123);
                else
                  t_123 = w_123;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_28, not_null(r_123), not_null(t_123));
                  t = table_put_0(t);
                }
              }
              t = n_28;
            }
            LocalPopChoice(m_28);
          }
        else
          {
            t = j_28;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_119 (ATerm))
{
  ATerm r_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28;
      v_28 = t;
      {
        ATerm a_124 = NULL;
        ATerm b_124 = NULL;
        t = term_w_28;
        {
          t = get_config_0(t);
          {
            b_124 = t;
            if(((a_124 != NULL) && (a_124 != b_124)))
              _fail(b_124);
            else
              a_124 = b_124;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_124), term_x_28);
          t = geq_0(t);
        }
      }
      t = v_28;
      t = o_119(t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = r_28;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL;
  f_124 = t;
  e_124 :
  if(match_cons(f_124, sym__2))
    {
      g_124 = ATgetArgument(f_124, 0);
      h_124 = ATgetArgument(f_124, 1);
      t = SSL_WriteToTextFile(not_null(g_124), not_null(h_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL;
  n_124 = t;
  m_124 :
  if(match_cons(n_124, sym__2))
    {
      o_124 = ATgetArgument(n_124, 0);
      p_124 = ATgetArgument(n_124, 1);
      t = SSL_WriteToBinaryFile(not_null(o_124), not_null(p_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_124 = NULL;
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
            ATerm y_124 = NULL,z_124 = NULL;
            y_124 = t;
            u_124 :
            if(match_cons(y_124, sym_Output_1))
              {
                z_124 = ATgetArgument(y_124, 0);
                if(((x_124 != NULL) && (x_124 != z_124)))
                  _fail(z_124);
                else
                  x_124 = z_124;
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
            ATerm a_125 = NULL;
            t = term_b_29;
            {
              a_125 = t;
              if(((x_124 != NULL) && (x_124 != a_125)))
                _fail(a_125);
              else
                x_124 = a_125;
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
        t = not_null(x_124);
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
              ATerm b_125 = NULL;
              b_125 = t;
              w_124 :
              if(!(match_cons(b_125, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm v_117 (ATerm))
{
  ATerm h_125 = NULL,j_125 = NULL,k_125 = NULL,l_125 = NULL;
  ATerm e_29;
  e_29 = t;
  t = dtime_0(t);
  t = e_29;
  {
    t = v_117(t);
    {
      ATerm f_29;
      f_29 = t;
      {
        ATerm i_125 = NULL;
        t = dtime_0(t);
        {
          i_125 = t;
          if(((h_125 != NULL) && (h_125 != i_125)))
            _fail(i_125);
          else
            h_125 = i_125;
        }
      }
      t = f_29;
      {
        j_125 = t;
        g_125 :
        if(match_cons(j_125, sym__2))
          {
            k_125 = ATgetArgument(j_125, 0);
            l_125 = ATgetArgument(j_125, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_125)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_125))), not_null(l_125));
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
  ATerm r_125 = NULL;
  r_125 = t;
  t = SSL_ReadFromFile(not_null(r_125));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_99 (ATerm), ATerm z_99 (ATerm))
{
  ATerm w_125 = NULL,y_125 = NULL;
  ATerm g_29;
  g_29 = t;
  {
    ATerm x_125 = NULL;
    t = y_99(t);
    {
      x_125 = t;
      if(((w_125 != NULL) && (w_125 != x_125)))
        _fail(x_125);
      else
        w_125 = x_125;
    }
  }
  t = g_29;
  {
    ATerm z_125 = NULL;
    t = z_99(t);
    {
      z_125 = t;
      if(((y_125 != NULL) && (y_125 != z_125)))
        _fail(z_125);
      else
        y_125 = z_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_125), not_null(y_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_126 = NULL;
  ATerm h_29;
  h_29 = t;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 (ATerm t)
        {
          ATerm g_126 = NULL,h_126 = NULL;
          g_126 = t;
          d_126 :
          if(match_cons(g_126, sym_Input_1))
            {
              h_126 = ATgetArgument(g_126, 0);
              if(((f_126 != NULL) && (f_126 != h_126)))
                _fail(h_126);
              else
                f_126 = h_126;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, a_5);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        {
          ATerm i_126 = NULL;
          t = term_n_29;
          {
            i_126 = t;
            if(((f_126 != NULL) && (f_126 != i_126)))
              _fail(i_126);
            else
              f_126 = i_126;
          }
        }
      }
  }
  t = h_29;
  {
    ATerm b_5 (ATerm t)
    {
      t = not_null(f_126);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_5);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_126 = NULL;
  m_126 = t;
  t = SSL_string_to_int(not_null(m_126));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL;
  v_126 = t;
  t_126 :
  if(match_string(v_126, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(v_126) == AT_LIST) && !(ATisEmpty(v_126))))
        {
          w_126 = ATgetFirst((ATermList) v_126);
          x_126 = (ATerm) ATgetNext((ATermList) v_126);
          u_126 :
          if(((ATgetType(x_126) == AT_LIST) && !(ATisEmpty(x_126))))
            {
              y_126 = ATgetFirst((ATermList) x_126);
              z_126 = (ATerm) ATgetNext((ATermList) x_126);
              {
                ATerm d_127 = NULL;
                ATerm o_29;
                o_29 = t;
                {
                  t = not_null(w_126);
                  t = m_0(t);
                }
                t = o_29;
                {
                  ATerm e_127 = NULL;
                  t = not_null(y_126);
                  {
                    t = n_0(t);
                    {
                      e_127 = t;
                      if(((d_127 != NULL) && (d_127 != e_127)))
                        _fail(e_127);
                      else
                        d_127 = e_127;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_126)), not_null(d_127));
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
  ATerm s_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm y_127 = NULL;
        y_127 = t;
        i_127 :
        if(!(match_string(y_127, "-i")))
          {
            if(!(match_string(y_127, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        ATerm b_128 = NULL;
        ATerm w_29;
        w_29 = t;
        {
          ATerm z_127 = NULL;
          ATerm a_128 = NULL;
          a_128 = t;
          if(((z_127 != NULL) && (z_127 != a_128)))
            _fail(a_128);
          else
            z_127 = a_128;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_a_30, not_null(z_127));
            t = set_config_0(t);
          }
        }
        t = w_29;
        {
          ATerm c_128 = NULL;
          c_128 = t;
          if(((b_128 != NULL) && (b_128 != c_128)))
            _fail(c_128);
          else
            b_128 = c_128;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_128));
        }
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_d_30;
        return(t);
      }
      t = ArgOption_3(t, c_5, d_5, e_5);
      LocalPopChoice(v_29);
    }
  else
    {
      t = s_29;
      {
        ATerm e_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              ATerm d_128 = NULL;
              d_128 = t;
              l_127 :
              if(!(match_string(d_128, "-o")))
                {
                  if(!(match_string(d_128, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              ATerm g_128 = NULL;
              ATerm g_30;
              g_30 = t;
              {
                ATerm e_128 = NULL;
                ATerm f_128 = NULL;
                f_128 = t;
                if(((e_128 != NULL) && (e_128 != f_128)))
                  _fail(f_128);
                else
                  e_128 = f_128;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_30, not_null(e_128));
                  t = set_config_0(t);
                }
              }
              t = g_30;
              {
                ATerm h_128 = NULL;
                h_128 = t;
                if(((g_128 != NULL) && (g_128 != h_128)))
                  _fail(h_128);
                else
                  g_128 = h_128;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_128));
              }
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              t = term_i_30;
              return(t);
            }
            t = ArgOption_3(t, f_5, g_5, h_5);
            LocalPopChoice(f_30);
          }
        else
          {
            t = e_30;
            {
              ATerm j_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm j_128 = NULL;
                    j_128 = t;
                    o_127 :
                    if(!(match_string(j_128, "-S")))
                      {
                        if(!(match_string(j_128, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_5 (ATerm t)
                  {
                    t = term_m_30;
                    t = set_config_0(t);
                    t = term_n_30;
                    return(t);
                  }
                  ATerm k_5 (ATerm t)
                  {
                    t = term_o_30;
                    return(t);
                  }
                  t = Option_3(t, i_5, j_5, k_5);
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = j_30;
                  {
                    ATerm p_30 = t;
                    int t_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_5 (ATerm t)
                        {
                          ATerm k_128 = NULL;
                          k_128 = t;
                          p_127 :
                          if(!(match_string(k_128, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_5 (ATerm t)
                        {
                          ATerm n_128 = NULL;
                          ATerm u_30;
                          u_30 = t;
                          {
                            ATerm l_128 = NULL;
                            ATerm m_128 = NULL;
                            t = string_to_int_0(t);
                            {
                              m_128 = t;
                              if(((l_128 != NULL) && (l_128 != m_128)))
                                _fail(m_128);
                              else
                                l_128 = m_128;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_28, not_null(l_128));
                              t = set_config_0(t);
                            }
                          }
                          t = u_30;
                          {
                            ATerm o_128 = NULL;
                            o_128 = t;
                            if(((n_128 != NULL) && (n_128 != o_128)))
                              _fail(o_128);
                            else
                              n_128 = o_128;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_128));
                          }
                          return(t);
                        }
                        ATerm n_5 (ATerm t)
                        {
                          t = term_y_30;
                          return(t);
                        }
                        t = ArgOption_3(t, l_5, m_5, n_5);
                        LocalPopChoice(t_30);
                      }
                    else
                      {
                        t = p_30;
                        {
                          ATerm b_31 = t;
                          int c_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_5 (ATerm t)
                              {
                                ATerm p_128 = NULL;
                                p_128 = t;
                                s_127 :
                                if(!(match_string(p_128, "-k")))
                                  {
                                    if(!(match_string(p_128, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_5 (ATerm t)
                              {
                                ATerm d_31;
                                d_31 = t;
                                {
                                  ATerm q_128 = NULL;
                                  ATerm r_128 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    r_128 = t;
                                    if(((q_128 != NULL) && (q_128 != r_128)))
                                      _fail(r_128);
                                    else
                                      q_128 = r_128;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_e_31, not_null(q_128));
                                    t = set_config_0(t);
                                  }
                                }
                                t = d_31;
                                return(t);
                              }
                              ATerm q_5 (ATerm t)
                              {
                                t = term_f_31;
                                return(t);
                              }
                              t = ArgOption_3(t, o_5, p_5, q_5);
                              LocalPopChoice(c_31);
                            }
                          else
                            {
                              t = b_31;
                              {
                                ATerm g_31 = t;
                                int h_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_5 (ATerm t)
                                    {
                                      ATerm s_128 = NULL;
                                      s_128 = t;
                                      u_127 :
                                      if(!(match_string(s_128, "-v")))
                                        {
                                          if(!(match_string(s_128, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm s_5 (ATerm t)
                                    {
                                      t = term_q_31;
                                      t = set_config_0(t);
                                      t = term_r_31;
                                      return(t);
                                    }
                                    ATerm t_5 (ATerm t)
                                    {
                                      t = term_s_31;
                                      return(t);
                                    }
                                    t = Option_3(t, r_5, s_5, t_5);
                                    LocalPopChoice(h_31);
                                  }
                                else
                                  {
                                    t = g_31;
                                    {
                                      ATerm t_31 = t;
                                      int u_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_5 (ATerm t)
                                          {
                                            ATerm t_128 = NULL;
                                            t_128 = t;
                                            v_127 :
                                            if(!(match_string(t_128, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm v_5 (ATerm t)
                                          {
                                            t = term_z_31;
                                            t = set_config_0(t);
                                            t = term_a_32;
                                            return(t);
                                          }
                                          ATerm w_5 (ATerm t)
                                          {
                                            t = term_b_32;
                                            return(t);
                                          }
                                          t = Option_3(t, u_5, v_5, w_5);
                                          LocalPopChoice(u_31);
                                        }
                                      else
                                        {
                                          t = t_31;
                                          {
                                            ATerm x_5 (ATerm t)
                                            {
                                              ATerm u_128 = NULL;
                                              u_128 = t;
                                              x_127 :
                                              if(!(match_string(u_128, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm y_5 (ATerm t)
                                            {
                                              t = term_d_32;
                                              t = set_config_0(t);
                                              t = term_e_32;
                                              return(t);
                                            }
                                            ATerm z_5 (ATerm t)
                                            {
                                              t = term_f_32;
                                              return(t);
                                            }
                                            t = Option_3(t, x_5, y_5, z_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, (ATerm) ATinsert(ATempty, term_g_32));
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
  ATerm e_129 = NULL;
  e_129 = t;
  t = SSL_TicksToSeconds(not_null(e_129));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_129 = NULL,k_129 = NULL,l_129 = NULL;
  j_129 = t;
  i_129 :
  if(match_cons(j_129, sym__2))
    {
      k_129 = ATgetArgument(j_129, 0);
      l_129 = ATgetArgument(j_129, 1);
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_129), not_null(l_129));
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            t = SSL_addr(not_null(k_129), not_null(l_129));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_106 (ATerm), ATerm z_106 (ATerm))
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_106(t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
        ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL;
        t_129 = t;
        s_129 :
        if(((ATgetType(t_129) == AT_LIST) && !(ATisEmpty(t_129))))
          {
            u_129 = ATgetFirst((ATermList) t_129);
            v_129 = (ATerm) ATgetNext((ATermList) t_129);
            {
              ATerm y_129 = NULL;
              ATerm z_129 = NULL;
              t = not_null(v_129);
              {
                t = foldr_2(t, y_106, z_106);
                {
                  z_129 = t;
                  if(((y_129 != NULL) && (y_129 != z_129)))
                    _fail(z_129);
                  else
                    y_129 = z_129;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_129), not_null(y_129));
                t = z_106(t);
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
ATerm crush_2 (ATerm t, ATerm w_105 (ATerm), ATerm x_105 (ATerm))
{
  ATerm g_130 = NULL;
  ATerm i_130 = NULL;
  g_130 = t;
  {
    ATerm j_130 = NULL;
    ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL;
    t = not_null(g_130);
    {
      j_130 = t;
      {
        t = SSL_explode_term(not_null(j_130));
        {
          m_130 = t;
          f_130 :
          if(match_cons(m_130, sym__2))
            {
              n_130 = ATgetArgument(m_130, 0);
              o_130 = ATgetArgument(m_130, 1);
              if(((i_130 != NULL) && (i_130 != o_130)))
                _fail(o_130);
              else
                i_130 = o_130;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_130);
      t = foldr_2(t, w_105, x_105);
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
      t = term_o_11;
      return(t);
    }
    t = crush_2(t, a_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_130 = NULL,v_130 = NULL,x_130 = NULL;
  u_130 = t;
  t_130 :
  if(match_cons(u_130, sym__2))
    {
      v_130 = ATgetArgument(u_130, 0);
      x_130 = ATgetArgument(u_130, 1);
      {
        ATerm l_32;
        l_32 = t;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_130), not_null(x_130));
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              t = SSL_gtr(not_null(v_130), not_null(x_130));
            }
        }
        t = l_32;
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
  ATerm d_131 = NULL;
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL;
      e_131 = t;
      c_131 :
      if(match_cons(e_131, sym__2))
        {
          f_131 = ATgetArgument(e_131, 0);
          g_131 = ATgetArgument(e_131, 1);
          {
            if(((d_131 != NULL) && (d_131 != f_131)))
              _fail(f_131);
            else
              d_131 = f_131;
            if(((d_131 != NULL) && (d_131 != g_131)))
              _fail(g_131);
            else
              d_131 = g_131;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_119 (ATerm))
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32;
      s_32 = t;
      {
        ATerm j_131 = NULL;
        ATerm k_131 = NULL;
        t = term_w_28;
        {
          t = get_config_0(t);
          {
            k_131 = t;
            if(((j_131 != NULL) && (j_131 != k_131)))
              _fail(k_131);
            else
              j_131 = k_131;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_131), term_u_12);
          t = geq_0(t);
        }
      }
      t = s_32;
      t = n_119(t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm o_131 = NULL,q_131 = NULL;
    ATerm t_32;
    t_32 = t;
    {
      ATerm p_131 = NULL;
      t = run_time_0(t);
      {
        p_131 = t;
        if(((o_131 != NULL) && (o_131 != p_131)))
          _fail(p_131);
        else
          o_131 = p_131;
      }
    }
    t = t_32;
    {
      ATerm s_131 = NULL;
      t = term_u_32;
      {
        t = get_config_0(t);
        {
          s_131 = t;
          if(((q_131 != NULL) && (q_131 != s_131)))
            _fail(s_131);
          else
            q_131 = s_131;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), not_null(o_131)), term_v_32), not_null(q_131)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_6);
  {
    t = term_o_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_131 = NULL;
  z_131 = t;
  y_131 :
  if(match_cons(z_131, sym_Version_0))
    {
      ATerm b_132 = NULL,e_132 = NULL;
      ATerm x_32;
      x_32 = t;
      {
        ATerm c_132 = NULL;
        t = SSLgetAnnotations(not_null(z_131));
        {
          c_132 = t;
          if(((b_132 != NULL) && (b_132 != c_132)))
            _fail(c_132);
          else
            b_132 = c_132;
        }
      }
      t = x_32;
      {
        ATerm f_132 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_132));
        {
          f_132 = t;
          if(((e_132 != NULL) && (e_132 != f_132)))
            _fail(f_132);
          else
            e_132 = f_132;
        }
        t = not_null(e_132);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_117 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_6);
  t = t_117(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_132 = NULL;
  k_132 = t;
  t = SSL_table_create(not_null(k_132));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_132 = NULL;
  o_132 = t;
  {
    ATerm c_33;
    c_33 = t;
    {
      t = term_d_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_33, term_e_33, not_null(o_132));
          t = table_put_0(t);
        }
      }
    }
    t = c_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_132 = NULL;
  s_132 = t;
  t = SSL_table_destroy(not_null(s_132));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_132 = NULL;
  w_132 = t;
  t = SSL_exit(not_null(w_132));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL;
  b_133 = t;
  a_133 :
  if(((ATgetType(b_133) == AT_LIST) && ATisEmpty(b_133)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_133) == AT_LIST) && !(ATisEmpty(b_133))))
        {
          c_133 = ATgetFirst((ATermList) b_133);
          d_133 = (ATerm) ATgetNext((ATermList) b_133);
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
  ATerm f_33;
  f_33 = t;
  {
    ATerm g_133 = NULL;
    ATerm j_133 = NULL;
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        {
          ATerm h_133 = NULL;
          ATerm i_133 = NULL;
          i_133 = t;
          if(((h_133 != NULL) && (h_133 != i_133)))
            _fail(i_133);
          else
            h_133 = i_133;
          t = (ATerm) ATinsert(ATempty, not_null(h_133));
        }
      }
    {
      j_133 = t;
      if(((g_133 != NULL) && (g_133 != j_133)))
        _fail(j_133);
      else
        g_133 = j_133;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(g_133));
      t = printnl_0(t);
    }
  }
  t = f_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_121 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_102 (ATerm))
{
  ATerm n_133 (ATerm t)
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = Cons_2(t, m_102, n_133);
      }
    return(t);
  }
  t = n_133(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm u_133 = NULL,v_133 = NULL,w_133 = NULL;
  w_133 = t;
  t_133 :
  if(((ATgetType(w_133) == AT_LIST) && !(ATisEmpty(w_133))))
    {
      u_133 = ATgetFirst((ATermList) w_133);
      v_133 = (ATerm) ATgetNext((ATermList) w_133);
      {
        ATerm z_133 = NULL;
        t = not_null(v_133);
        {
          ATerm k_33;
          k_33 = t;
          {
            ATerm a_134 = NULL,c_134 = NULL,e_134 = NULL;
            ATerm o_33;
            o_33 = t;
            {
              ATerm b_134 = NULL;
              t = k_0(t);
              {
                b_134 = t;
                if(((a_134 != NULL) && (a_134 != b_134)))
                  _fail(b_134);
                else
                  a_134 = b_134;
              }
            }
            t = o_33;
            {
              ATerm d_134 = NULL;
              t = not_null(u_133);
              {
                t = i_0(t);
                {
                  d_134 = t;
                  if(((c_134 != NULL) && (c_134 != d_134)))
                    _fail(d_134);
                  else
                    c_134 = d_134;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_134)), not_null(c_134));
                {
                  e_134 = t;
                  if(((z_133 != NULL) && (z_133 != e_134)))
                    _fail(e_134);
                  else
                    z_133 = e_134;
                }
              }
            }
          }
          t = k_33;
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(z_133);
              return(t);
            }
            t = reverse_acc_2(t, i_0, d_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_133) == AT_LIST) && ATisEmpty(w_133)))
        {
          {
            t = term_p_31;
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
ATerm short_description_1 (ATerm t, ATerm q_121 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm q_134 = NULL,s_134 = NULL;
  q_134 = t;
  p_134 :
  if(match_cons(q_134, sym_Program_1))
    {
      s_134 = ATgetArgument(q_134, 0);
      {
        ATerm v_134 = NULL,x_134 = NULL;
        ATerm w_134 = NULL;
        t = SSLgetAnnotations(not_null(q_134));
        {
          w_134 = t;
          if(((v_134 != NULL) && (v_134 != w_134)))
            _fail(w_134);
          else
            v_134 = w_134;
        }
        {
          t = not_null(s_134);
          {
            ATerm z_134 = NULL;
            t = y_93(t);
            {
              x_134 = t;
              {
                ATerm a_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_134)), not_null(v_134));
                {
                  a_135 = t;
                  if(((z_134 != NULL) && (z_134 != a_135)))
                    _fail(a_135);
                  else
                    z_134 = a_135;
                }
                t = not_null(z_134);
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
  ATerm i_135 = NULL;
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_135 = NULL;
      t = term_u_32;
      {
        t = get_config_0(t);
        {
          j_135 = t;
          if(((i_135 != NULL) && (i_135 != j_135)))
            _fail(j_135);
          else
            i_135 = j_135;
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
            ATerm k_135 = NULL;
            k_135 = t;
            if(((i_135 != NULL) && (i_135 != k_135)))
              _fail(k_135);
            else
              i_135 = k_135;
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
                ATerm l_135 = NULL;
                ATerm m_135 = NULL;
                m_135 = t;
                if(((l_135 != NULL) && (l_135 != m_135)))
                  _fail(m_135);
                else
                  l_135 = m_135;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_135)), term_v_33);
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
    ATerm r_135 = NULL;
    ATerm s_135 = NULL;
    s_135 = t;
    if(((r_135 != NULL) && (r_135 != s_135)))
      _fail(s_135);
    else
      r_135 = s_135;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_26, (ATerm) ATinsert(ATempty, not_null(r_135)));
      t = printnl_0(t);
    }
  }
  t = w_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_116 (ATerm))
{
  ATerm x_33;
  x_33 = t;
  {
    t = s_116(t);
    t = debug_0(t);
  }
  t = x_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_93 (ATerm))
{
  ATerm z_135 = NULL,a_136 = NULL;
  z_135 = t;
  y_135 :
  if(match_cons(z_135, sym_Undefined_1))
    {
      a_136 = ATgetArgument(z_135, 0);
      {
        ATerm d_136 = NULL,f_136 = NULL;
        ATerm e_136 = NULL;
        t = SSLgetAnnotations(not_null(z_135));
        {
          e_136 = t;
          if(((d_136 != NULL) && (d_136 != e_136)))
            _fail(e_136);
          else
            d_136 = e_136;
        }
        {
          t = not_null(a_136);
          {
            ATerm h_136 = NULL;
            t = z_93(t);
            {
              f_136 = t;
              {
                ATerm i_136 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_136)), not_null(d_136));
                {
                  i_136 = t;
                  if(((h_136 != NULL) && (h_136 != i_136)))
                    _fail(i_136);
                  else
                    h_136 = i_136;
                }
                t = not_null(h_136);
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
ATerm fetch_1 (ATerm t, ATerm v_102 (ATerm))
{
  ATerm n_136 (ATerm t)
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_102, _id);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = Cons_2(t, _id, n_136);
      }
    return(t);
  }
  t = n_136(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_120 (ATerm))
{
  t = fetch_1(t, q_120);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_136 = NULL;
  s_136 = t;
  r_136 :
  if(match_cons(s_136, sym_Help_0))
    {
      ATerm u_136 = NULL,w_136 = NULL;
      ATerm a_34;
      a_34 = t;
      {
        ATerm v_136 = NULL;
        t = SSLgetAnnotations(not_null(s_136));
        {
          v_136 = t;
          if(((u_136 != NULL) && (u_136 != v_136)))
            _fail(v_136);
          else
            u_136 = v_136;
        }
      }
      t = a_34;
      {
        ATerm x_136 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_136));
        {
          x_136 = t;
          if(((w_136 != NULL) && (w_136 != x_136)))
            _fail(x_136);
          else
            w_136 = x_136;
        }
        t = not_null(w_136);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_99(t);
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
  ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL;
  d_137 = t;
  c_137 :
  if(match_cons(d_137, sym__2))
    {
      e_137 = ATgetArgument(d_137, 0);
      f_137 = ATgetArgument(d_137, 1);
      t = SSL_table_get(not_null(e_137), not_null(f_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_137 = NULL,n_137 = NULL,o_137 = NULL,p_137 = NULL;
  m_137 = t;
  l_137 :
  if(match_cons(m_137, sym__3))
    {
      n_137 = ATgetArgument(m_137, 0);
      o_137 = ATgetArgument(m_137, 1);
      p_137 = ATgetArgument(m_137, 2);
      {
        ATerm d_34;
        d_34 = t;
        {
          ATerm t_137 = NULL;
          ATerm u_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_137), not_null(o_137));
          {
            ATerm e_34 = t;
            int g_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_34);
              }
            else
              {
                t = e_34;
                t = (ATerm) ATempty;
              }
            {
              u_137 = t;
              if(((t_137 != NULL) && (t_137 != u_137)))
                _fail(u_137);
              else
                t_137 = u_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_137), not_null(o_137), (ATerm) ATinsert(CheckATermList(not_null(t_137)), not_null(p_137)));
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
ATerm register_usage_1 (ATerm t, ATerm v_121 (ATerm))
{
  ATerm y_137 = NULL;
  ATerm z_137 = NULL;
  t = term_p_31;
  {
    t = v_121(t);
    {
      z_137 = t;
      if(((y_137 != NULL) && (y_137 != z_137)))
        _fail(z_137);
      else
        y_137 = z_137;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_33, term_t_33, not_null(y_137));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm f_138 = NULL,g_138 = NULL,h_138 = NULL;
  f_138 = t;
  e_138 :
  if(match_string(f_138, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(f_138) == AT_LIST) && !(ATisEmpty(f_138))))
        {
          g_138 = ATgetFirst((ATermList) f_138);
          h_138 = (ATerm) ATgetNext((ATermList) f_138);
          {
            ATerm k_138 = NULL;
            ATerm h_34;
            h_34 = t;
            {
              t = not_null(g_138);
              t = a_0(t);
            }
            t = h_34;
            {
              ATerm l_138 = NULL;
              t = term_p_31;
              {
                t = d_0(t);
                {
                  l_138 = t;
                  if(((k_138 != NULL) && (k_138 != l_138)))
                    _fail(l_138);
                  else
                    k_138 = l_138;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_138)), not_null(k_138));
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
    ATerm q_138 = NULL;
    q_138 = t;
    p_138 :
    if(!(match_string(q_138, "--help")))
      {
        if(!(match_string(q_138, "-h")))
          {
            if(!(match_string(q_138, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_j_34;
    {
      t = set_config_0(t);
      t = term_k_34;
    }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_l_34;
    return(t);
  }
  t = Option_3(t, j_6, k_6, l_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL;
  t_138 = t;
  s_138 :
  if(((ATgetType(t_138) == AT_LIST) && !(ATisEmpty(t_138))))
    {
      u_138 = ATgetFirst((ATermList) t_138);
      v_138 = (ATerm) ATgetNext((ATermList) t_138);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_138)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_138)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_83 (ATerm), ATerm c_83 (ATerm))
{
  ATerm f_139 = NULL,g_139 = NULL,h_139 = NULL;
  f_139 = t;
  e_139 :
  if(((ATgetType(f_139) == AT_LIST) && !(ATisEmpty(f_139))))
    {
      g_139 = ATgetFirst((ATermList) f_139);
      h_139 = (ATerm) ATgetNext((ATermList) f_139);
      {
        ATerm l_139 = NULL,n_139 = NULL;
        ATerm m_139 = NULL;
        t = SSLgetAnnotations(not_null(f_139));
        {
          m_139 = t;
          if(((l_139 != NULL) && (l_139 != m_139)))
            _fail(m_139);
          else
            l_139 = m_139;
        }
        {
          t = not_null(g_139);
          {
            ATerm p_139 = NULL;
            t = b_83(t);
            {
              n_139 = t;
              {
                t = not_null(h_139);
                {
                  ATerm r_139 = NULL;
                  t = c_83(t);
                  {
                    p_139 = t;
                    {
                      ATerm s_139 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_139)), not_null(n_139)), not_null(l_139));
                      {
                        s_139 = t;
                        if(((r_139 != NULL) && (r_139 != s_139)))
                          _fail(s_139);
                        else
                          r_139 = s_139;
                      }
                      t = not_null(r_139);
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
  ATerm c_140 = NULL;
  c_140 = t;
  b_140 :
  if(((ATgetType(c_140) == AT_LIST) && ATisEmpty(c_140)))
    {
      {
        ATerm e_140 = NULL,g_140 = NULL;
        ATerm m_34;
        m_34 = t;
        {
          ATerm f_140 = NULL;
          t = SSLgetAnnotations(not_null(c_140));
          {
            f_140 = t;
            if(((e_140 != NULL) && (e_140 != f_140)))
              _fail(f_140);
            else
              e_140 = f_140;
          }
        }
        t = m_34;
        {
          ATerm h_140 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_140));
          {
            h_140 = t;
            if(((g_140 != NULL) && (g_140 != h_140)))
              _fail(h_140);
            else
              g_140 = h_140;
          }
          t = not_null(g_140);
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
  ATerm n_140 = NULL,o_140 = NULL,p_140 = NULL;
  n_140 = t;
  m_140 :
  if(match_cons(n_140, sym__2))
    {
      o_140 = ATgetArgument(n_140, 0);
      p_140 = ATgetArgument(n_140, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_28, not_null(o_140), not_null(p_140));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_121 (ATerm))
{
  ATerm n_34;
  n_34 = t;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_34;
        t = t_121(t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        {
        }
      }
  }
  t = n_34;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm x_140 = NULL;
      ATerm r_34;
      r_34 = t;
      {
        ATerm v_140 = NULL;
        ATerm w_140 = NULL;
        w_140 = t;
        if(((v_140 != NULL) && (v_140 != w_140)))
          _fail(w_140);
        else
          v_140 = w_140;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_32, not_null(v_140));
          t = set_config_0(t);
        }
      }
      t = r_34;
      {
        ATerm y_140 = NULL;
        y_140 = t;
        if(((x_140 != NULL) && (x_140 != y_140)))
          _fail(y_140);
        else
          x_140 = y_140;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_140));
      }
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm s_34 = t;
      int t_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              {
                t = t_121(t);
                t = Cons_2(t, _id, n_6);
              }
            }
          LocalPopChoice(t_34);
        }
      else
        {
          t = s_34;
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
  ATerm e_141 = NULL,f_141 = NULL,g_141 = NULL;
  ATerm w_34;
  w_34 = t;
  {
    ATerm h_141 = NULL,i_141 = NULL,j_141 = NULL,k_141 = NULL;
    h_141 = t;
    d_141 :
    if(match_cons(h_141, sym__3))
      {
        i_141 = ATgetArgument(h_141, 0);
        j_141 = ATgetArgument(h_141, 1);
        k_141 = ATgetArgument(h_141, 2);
        {
          if(((e_141 != NULL) && (e_141 != i_141)))
            _fail(i_141);
          else
            e_141 = i_141;
          {
            if(((f_141 != NULL) && (f_141 != j_141)))
              _fail(j_141);
            else
              f_141 = j_141;
            {
              if(((g_141 != NULL) && (g_141 != k_141)))
                _fail(k_141);
              else
                g_141 = k_141;
              t = SSL_table_put(not_null(e_141), not_null(f_141), not_null(g_141));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_121 (ATerm))
{
  ATerm n_141 = NULL;
  ATerm a_35;
  a_35 = t;
  {
    t = term_b_35;
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
          t = s_121(t);
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
            int k_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_34;
                t = get_config_0(t);
                LocalPopChoice(k_35);
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
              t = term_o_11;
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
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_6 (ATerm t)
                {
                  ATerm q_6 (ATerm t)
                  {
                    ATerm o_141 = NULL;
                    o_141 = t;
                    if(((n_141 != NULL) && (n_141 != o_141)))
                      _fail(o_141);
                    else
                      n_141 = o_141;
                    return(t);
                  }
                  t = Undefined_1(t, q_6);
                  return(t);
                }
                t = fetch_1(t, p_6);
                {
                  ATerm r_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_141)), term_x_35);
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
                LocalPopChoice(r_35);
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
ATerm option_wrap_4 (ATerm t, ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm))
{
  t = parse_options_1(t, z_117);
  {
    t = store_options_0(t);
    {
      t = b_118(t);
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_118);
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            {
              ATerm b_36 = t;
              int h_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_118(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_36);
                }
              else
                {
                  t = b_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm i_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_118(t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = i_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_118);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_6, s_118, t_118, t_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm r_36;
      r_36 = t;
      {
        ATerm r_141 = NULL;
        ATerm s_141 = NULL;
        t = term_u_32;
        {
          t = get_config_0(t);
          {
            s_141 = t;
            if(((r_141 != NULL) && (r_141 != s_141)))
              _fail(s_141);
            else
              r_141 = s_141;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_26, (ATerm) ATinsert(ATempty, not_null(r_141)));
          t = printnl_0(t);
        }
      }
      t = r_36;
      return(t);
    }
    t = if_verbose2_1(t, v_6);
    return(t);
  }
  t = iowrap_4(t, k_118, l_118, m_118, u_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_118 (ATerm), ATerm j_118 (ATerm))
{
  t = iowrap_3(t, i_118, j_118, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_118 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    t = _2(t, _id, f_118);
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
