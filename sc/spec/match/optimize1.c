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
ATerm term_b_35;
ATerm term_q_34;
ATerm term_i_34;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_w_11;
ATerm term_l_7;
ATerm term_y_6;
void init_constant_terms (void)
{
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Op_2, term_i_14, (ATerm) ATempty);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_w_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_r_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_r_27);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_d_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_r_27);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__3, term_c_32, term_d_32, (ATerm) ATempty);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
ATerm isect_1 (ATerm, ATerm i_106 (ATerm));
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm w_86 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_83 (ATerm), ATerm r_83 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm o_106 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm));
ATerm crush_3 (ATerm, ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm));
ATerm free_vars_3 (ATerm, ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_96 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm k_103 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm alltd_1 (ATerm, ATerm o_98 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm t_95 (ATerm), ATerm u_95 (ATerm));
ATerm substitute_1 (ATerm, ATerm v_95 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm s_106 (ATerm), ATerm t_106 (ATerm));
ATerm diff_1 (ATerm, ATerm k_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm d_113 (ATerm), ATerm e_113 (ATerm));
ATerm for_3 (ATerm, ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm a_98 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm));
ATerm zip_1 (ATerm, ATerm i_101 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm));
ATerm Prim_2 (ATerm, ATerm i_83 (ATerm), ATerm j_83 (ATerm));
ATerm Explode_2 (ATerm, ATerm h_87 (ATerm), ATerm i_87 (ATerm));
ATerm Op_2 (ATerm, ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_94 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm m_112 (ATerm), ATerm n_112 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_112 (ATerm));
ATerm downup_1 (ATerm, ATerm m_96 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm));
ATerm Strategies_1 (ATerm, ATerm a_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_86 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm o_94 (ATerm));
ATerm _2 (ATerm, ATerm x_81 (ATerm), ATerm y_81 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_103 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_116 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_119 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_118 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_100 (ATerm), ATerm e_100 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_107 (ATerm), ATerm g_107 (ATerm));
ATerm crush_2 (ATerm, ATerm d_106 (ATerm), ATerm e_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_119 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_118 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_121 (ATerm));
ATerm map_1 (ATerm, ATerm r_102 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_121 (ATerm));
ATerm Program_1 (ATerm, ATerm d_94 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_116 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_94 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_103 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_120 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_122 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_122 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_121 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm));
ATerm iowrap_4 (ATerm, ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_118 (ATerm), ATerm q_118 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_118 (ATerm));
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = repeat_2(t, Optimize_0, _id);
    return(t);
  }
  t = downup_1(t, b_0);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm i_106 (ATerm))
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
                        ATerm c_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, i_106, c_0);
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
ATerm DynamicRules_1 (ATerm t, ATerm w_86 (ATerm))
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
            t = w_86(t);
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
ATerm Scope_2 (ATerm t, ATerm q_83 (ATerm), ATerm r_83 (ATerm))
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
            t = q_83(t);
            {
              i_6 = t;
              {
                t = not_null(c_6);
                {
                  ATerm m_6 = NULL;
                  t = r_83(t);
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
ATerm tboundin_3 (ATerm t, ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm))
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, n_95, l_95);
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      t = DynamicRules_1(t, l_95);
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
ATerm union_1 (ATerm t, ATerm o_106 (ATerm))
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
                      ATerm e_0 (ATerm t)
                      {
                        t = not_null(a_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_106, e_0);
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
ATerm foldr_3 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm))
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_107(t);
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
                  t = j_107(t);
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
                  t = foldr_3(t, h_107, i_107, j_107);
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
                  t = i_107(t);
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
ATerm crush_3 (ATerm t, ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm))
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
      t = foldr_3(t, f_106, g_106, h_106);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_9 (ATerm t)
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_110(t);
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
                t = y_110(t);
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
                ATerm f_0 (ATerm t)
                {
                  ATerm j_0 (ATerm t)
                  {
                    t = not_null(l_9);
                    return(t);
                  }
                  t = split_2(t, n_9, j_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm h_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_110(t, f_0, n_9, h_0);
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm q_0 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, m_0, q_0, _id);
                }
              }
              LocalPopChoice(j_6);
            }
          else
            {
              t = f_6;
              {
                ATerm r_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm s_0 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, r_0, s_0, n_9);
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
  ATerm t_0 (ATerm t)
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
  t = free_vars_3(t, Add1_0, t_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  v_9 = t;
  t_9 :
  if(match_cons(v_9, sym_Scope_2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      u_9 :
      if(match_cons(x_9, sym_Seq_2))
        {
          y_9 = ATgetArgument(x_9, 0);
          z_9 = ATgetArgument(x_9, 1);
          {
            ATerm d_10 = NULL,e_10 = NULL;
            ATerm f_10 = NULL,h_10 = NULL;
            ATerm g_10 = NULL;
            t = not_null(y_9);
            {
              t = tvars_0(t);
              {
                g_10 = t;
                if(((f_10 != NULL) && (f_10 != g_10)))
                  _fail(g_10);
                else
                  f_10 = g_10;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), not_null(w_9));
              {
                ATerm i_10 = NULL;
                t = isect_1(t, eq_0);
                {
                  h_10 = t;
                  {
                    if(((d_10 != NULL) && (d_10 != h_10)))
                      _fail(h_10);
                    else
                      d_10 = h_10;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(d_10));
                      {
                        t = diff_0(t);
                        {
                          i_10 = t;
                          {
                            if(((e_10 != NULL) && (e_10 != i_10)))
                              _fail(i_10);
                            else
                              e_10 = i_10;
                            {
                              ATerm q_6 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
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
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_9), (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_10), not_null(z_9))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm k_96 (ATerm))
{
  t = k_96(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = topdown_1(t, k_96);
      return(t);
    }
    t = _all(t, u_0);
  }
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NarrowScope_0(t);
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
  t = topdown_1(t, v_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  ATerm g_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_10), not_null(u_10)));
    return(t);
  }
  ATerm h_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_10), not_null(z_10)));
    return(t);
  }
  v_10 = t;
  p_10 :
  if(match_cons(v_10, sym_Seq_2))
    {
      w_10 = ATgetArgument(v_10, 0);
      z_10 = ATgetArgument(v_10, 1);
      q_10 :
      if(match_cons(z_10, sym_Scope_2))
        {
          t_10 = ATgetArgument(z_10, 0);
          u_10 = ATgetArgument(z_10, 1);
          r_10 :
          if(match_cons(w_10, sym_Scope_2))
            {
              x_10 = ATgetArgument(w_10, 0);
              y_10 = ATgetArgument(w_10, 1);
              {
                ATerm t_6 = t;
                int x_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_11(t);
                    LocalPopChoice(x_6);
                  }
                else
                  {
                    t = t_6;
                    t = h_11(t);
                  }
              }
            }
          else
            {
              t = g_11(t);
            }
        }
      else
        {
          s_10 :
          if(match_cons(w_10, sym_Scope_2))
            {
              x_10 = ATgetArgument(w_10, 0);
              y_10 = ATgetArgument(w_10, 1);
              t = h_11(t);
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
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  o_11 = t;
  j_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      v_11 = ATgetArgument(o_11, 1);
      k_11 :
      if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
        {
          q_11 = ATgetFirst((ATermList) p_11);
          u_11 = (ATerm) ATgetNext((ATermList) p_11);
          l_11 :
          if(match_cons(q_11, sym_SDef_3))
            {
              r_11 = ATgetArgument(q_11, 0);
              s_11 = ATgetArgument(q_11, 1);
              t_11 = ATgetArgument(q_11, 2);
              m_11 :
              if(((ATgetType(s_11) == AT_LIST) && ATisEmpty(s_11)))
                {
                  n_11 :
                  if(((ATgetType(u_11) == AT_LIST) && ATisEmpty(u_11)))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_y_6), not_null(r_11), (ATerm)ATempty, not_null(t_11))), not_null(v_11));
                    }
                  else
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
ATerm at_suffix_1 (ATerm t, ATerm k_103 (ATerm))
{
  ATerm a_12 (ATerm t)
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_103(t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = Cons_2(t, _id, a_12);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Let_2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      {
        ATerm s_12 = NULL,t_12 = NULL;
        ATerm i_13 = NULL;
        t = not_null(o_12);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
            u_12 = t;
            i_12 :
            if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
              {
                v_12 = ATgetFirst((ATermList) u_12);
                z_12 = (ATerm) ATgetNext((ATermList) u_12);
                j_12 :
                if(match_cons(v_12, sym_SDef_3))
                  {
                    w_12 = ATgetArgument(v_12, 0);
                    x_12 = ATgetArgument(v_12, 1);
                    y_12 = ATgetArgument(v_12, 2);
                    k_12 :
                    if(((ATgetType(x_12) == AT_LIST) && ATisEmpty(x_12)))
                      {
                        {
                          ATerm h_13 = NULL;
                          t = not_null(p_12);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
                              d_13 = t;
                              e_12 :
                              if(match_cons(d_13, sym_Call_2))
                                {
                                  e_13 = ATgetArgument(d_13, 0);
                                  g_13 = ATgetArgument(d_13, 1);
                                  f_12 :
                                  if(match_cons(e_13, sym_SVar_1))
                                    {
                                      f_13 = ATgetArgument(e_13, 0);
                                      g_12 :
                                      if(((ATgetType(g_13) == AT_LIST) && ATisEmpty(g_13)))
                                        {
                                          {
                                            if(((w_12 != NULL) && (w_12 != f_13)))
                                              _fail(f_13);
                                            else
                                              w_12 = f_13;
                                            t = not_null(y_12);
                                          }
                                        }
                                      else
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
                              h_13 = t;
                              {
                                if(((s_12 != NULL) && (s_12 != h_13)))
                                  _fail(h_13);
                                else
                                  s_12 = h_13;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_12)), (ATerm) ATempty), not_null(s_12));
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
                          t = not_null(z_12);
                        }
                      }
                    else
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
            i_13 = t;
            if(((t_12 != NULL) && (t_12 != i_13)))
              _fail(i_13);
            else
              t_12 = i_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_12), not_null(s_12));
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
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  w_13 = t;
  q_13 :
  if(match_cons(w_13, sym__2))
    {
      x_13 = ATgetArgument(w_13, 0);
      z_13 = ATgetArgument(w_13, 1);
      r_13 :
      if(match_cons(x_13, sym_Build_1))
        {
          y_13 = ATgetArgument(x_13, 0);
          s_13 :
          if(match_cons(z_13, sym_Where_1))
            {
              a_14 = ATgetArgument(z_13, 0);
              t_13 :
              if(match_cons(a_14, sym_Prim_2))
                {
                  u_13 = ATgetArgument(a_14, 0);
                  v_13 = ATgetArgument(a_14, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_13), not_null(v_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(z_13, sym_Prim_2))
                {
                  a_14 = ATgetArgument(z_13, 0);
                  b_14 = ATgetArgument(z_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_14), not_null(b_14));
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
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  r_14 = t;
  m_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      u_14 = ATgetArgument(r_14, 1);
      n_14 :
      if(match_cons(s_14, sym_Build_1))
        {
          t_14 = ATgetArgument(s_14, 0);
          o_14 :
          if(match_cons(u_14, sym_Where_1))
            {
              v_14 = ATgetArgument(u_14, 0);
              p_14 :
              if(match_cons(v_14, sym_Build_1))
                {
                  q_14 = ATgetArgument(v_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(u_14, sym_Build_1))
                {
                  v_14 = ATgetArgument(u_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_14));
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
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
  l_15 = t;
  g_15 :
  if(match_cons(l_15, sym__2))
    {
      m_15 = ATgetArgument(l_15, 0);
      q_15 = ATgetArgument(l_15, 1);
      h_15 :
      if(match_cons(m_15, sym_Build_1))
        {
          n_15 = ATgetArgument(m_15, 0);
          i_15 :
          if(match_cons(n_15, sym_Op_2))
            {
              o_15 = ATgetArgument(n_15, 0);
              p_15 = ATgetArgument(n_15, 1);
              j_15 :
              if(match_cons(q_15, sym_Match_1))
                {
                  r_15 = ATgetArgument(q_15, 0);
                  k_15 :
                  if(match_cons(r_15, sym_Op_2))
                    {
                      s_15 = ATgetArgument(r_15, 0);
                      t_15 = ATgetArgument(r_15, 1);
                      {
                        ATerm w_15 = NULL,x_15 = NULL;
                        if(((o_15 != NULL) && (o_15 != s_15)))
                          _fail(s_15);
                        else
                          o_15 = s_15;
                        {
                          if(((w_15 != NULL) && (w_15 != t_15)))
                            _fail(t_15);
                          else
                            w_15 = t_15;
                          {
                            ATerm d_16 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(w_15));
                            {
                              ATerm y_0 (ATerm t)
                              {
                                ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
                                y_15 = t;
                                e_15 :
                                if(match_cons(y_15, sym__2))
                                  {
                                    z_15 = ATgetArgument(y_15, 0);
                                    a_16 = ATgetArgument(y_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_16)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, y_0);
                              {
                                d_16 = t;
                                if(((x_15 != NULL) && (x_15 != d_16)))
                                  _fail(d_16);
                                else
                                  x_15 = d_16;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(o_15), not_null(p_15))));
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
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  n_16 = t;
  i_16 :
  if(match_cons(n_16, sym__2))
    {
      o_16 = ATgetArgument(n_16, 0);
      s_16 = ATgetArgument(n_16, 1);
      j_16 :
      if(match_cons(o_16, sym_Build_1))
        {
          p_16 = ATgetArgument(o_16, 0);
          k_16 :
          if(match_cons(p_16, sym_Op_2))
            {
              q_16 = ATgetArgument(p_16, 0);
              r_16 = ATgetArgument(p_16, 1);
              l_16 :
              if(match_cons(s_16, sym_Match_1))
                {
                  t_16 = ATgetArgument(s_16, 0);
                  m_16 :
                  if(match_cons(t_16, sym_Op_2))
                    {
                      u_16 = ATgetArgument(t_16, 0);
                      v_16 = ATgetArgument(t_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(u_16));
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
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  ATerm w_17 (ATerm t)
  {
    ATerm t_17 = NULL;
    ATerm u_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(l_17));
    {
      t = BMF_0(t);
      {
        u_17 = t;
        if(((t_17 != NULL) && (t_17 != u_17)))
          _fail(u_17);
        else
          t_17 = u_17;
      }
    }
    t = not_null(t_17);
    return(t);
  }
  j_17 = t;
  f_17 :
  if(match_cons(j_17, sym_Seq_2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      g_17 :
      if(match_cons(l_17, sym_Seq_2))
        {
          h_17 = ATgetArgument(l_17, 0);
          i_17 = ATgetArgument(l_17, 1);
          {
            ATerm v_7 = t;
            int w_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_17 = NULL;
                ATerm q_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(h_17));
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
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_17), not_null(i_17));
                LocalPopChoice(w_7);
              }
            else
              {
                t = v_7;
                t = w_17(t);
              }
          }
        }
      else
        {
          t = w_17(t);
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
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  e_18 = t;
  a_18 :
  if(match_cons(e_18, sym_Seq_2))
    {
      f_18 = ATgetArgument(e_18, 0);
      h_18 = ATgetArgument(e_18, 1);
      b_18 :
      if(match_cons(f_18, sym_Build_1))
        {
          g_18 = ATgetArgument(f_18, 0);
          c_18 :
          if(match_cons(h_18, sym_Seq_2))
            {
              i_18 = ATgetArgument(h_18, 0);
              k_18 = ATgetArgument(h_18, 1);
              d_18 :
              if(match_cons(i_18, sym_Build_1))
                {
                  j_18 = ATgetArgument(i_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_18)), not_null(k_18));
                }
              else
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
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  t_18 = t;
  r_18 :
  if(match_cons(t_18, sym_Scope_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      s_18 :
      if(match_cons(v_18, sym_Scope_2))
        {
          w_18 = ATgetArgument(v_18, 0);
          x_18 = ATgetArgument(v_18, 1);
          {
            ATerm b_19 = NULL;
            ATerm c_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(w_18));
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
                c_19 = t;
                if(((b_19 != NULL) && (b_19 != c_19)))
                  _fail(c_19);
                else
                  b_19 = c_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_19), not_null(x_18));
          }
        }
      else
        {
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
  ATerm h_19 = NULL,i_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_Var_1))
    {
      i_19 = ATgetArgument(h_19, 0);
      t = not_null(i_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  o_19 = t;
  m_19 :
  if(match_cons(o_19, sym__2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      n_19 :
      if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
        {
          r_19 = ATgetFirst((ATermList) q_19);
          s_19 = (ATerm) ATgetNext((ATermList) q_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), not_null(s_19));
        }
      else
        {
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
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  a_20 = t;
  x_19 :
  if(match_cons(a_20, sym__2))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      y_19 :
      if(((ATgetType(c_20) == AT_LIST) && !(ATisEmpty(c_20))))
        {
          d_20 = ATgetFirst((ATermList) c_20);
          g_20 = (ATerm) ATgetNext((ATermList) c_20);
          z_19 :
          if(match_cons(d_20, sym__2))
            {
              e_20 = ATgetArgument(d_20, 0);
              f_20 = ATgetArgument(d_20, 1);
              {
                ATerm i_20 = NULL;
                if(((b_20 != NULL) && (b_20 != e_20)))
                  _fail(e_20);
                else
                  b_20 = e_20;
                {
                  if(((i_20 != NULL) && (i_20 != f_20)))
                    _fail(f_20);
                  else
                    i_20 = f_20;
                  t = not_null(i_20);
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
ATerm SubsVar_2 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm o_20 = NULL;
  ATerm q_20 = NULL,r_20 = NULL;
  o_20 = t;
  {
    ATerm s_20 = NULL;
    t = not_null(o_20);
    {
      ATerm t_20 = NULL;
      t = i_96(t);
      {
        s_20 = t;
        {
          if(((q_20 != NULL) && (q_20 != s_20)))
            _fail(s_20);
          else
            q_20 = s_20;
          {
            t = j_96(t);
            {
              t_20 = t;
              if(((r_20 != NULL) && (r_20 != t_20)))
                _fail(t_20);
              else
                r_20 = t_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(r_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm o_98 (ATerm))
{
  ATerm x_20 (ATerm t)
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_98(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = _all(t, x_20);
      }
    return(t);
  }
  t = x_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      {
        ATerm h_21 = NULL;
        if(((h_21 != NULL) && (h_21 != e_21)))
          _fail(e_21);
        else
          h_21 = e_21;
      }
    }
  else
    {
      if(match_cons(c_21, sym__3))
        {
          d_21 = ATgetArgument(c_21, 0);
          e_21 = ATgetArgument(c_21, 1);
          f_21 = ATgetArgument(c_21, 2);
          {
            ATerm n_21 = NULL;
            ATerm o_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(e_21));
            {
              t = zip_1(t, _id);
              {
                o_21 = t;
                if(((n_21 != NULL) && (n_21 != o_21)))
                  _fail(o_21);
                else
                  n_21 = o_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), not_null(f_21));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm t_95 (ATerm), ATerm u_95 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  t = subs_args_0(t);
  {
    u_21 = t;
    t_21 :
    if(match_cons(u_21, sym__2))
      {
        v_21 = ATgetArgument(u_21, 0);
        w_21 = ATgetArgument(u_21, 1);
        {
          t = not_null(w_21);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                t = not_null(v_21);
                return(t);
              }
              t = SubsVar_2(t, t_95, a_1);
              t = u_95(t);
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
ATerm substitute_1 (ATerm t, ATerm v_95 (ATerm))
{
  t = substitute_2(t, v_95, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_2(t, IsVar_0, _id);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      if(((d_22 != NULL) && (d_22 != e_22)))
        _fail(e_22);
      else
        d_22 = e_22;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm s_106 (ATerm), ATerm t_106 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  j_22 :
  if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
    {
      l_22 = ATgetFirst((ATermList) k_22);
      m_22 = (ATerm) ATgetNext((ATermList) k_22);
      {
        t = t_106(t);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm p_22 = NULL;
            p_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), not_null(p_22));
              t = s_106(t);
            }
            return(t);
          }
          t = fetch_1(t, b_1);
        }
        t = not_null(m_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        t = not_null(w_22);
        {
          ATerm b_23 (ATerm t)
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
                        t = not_null(x_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_106, c_1);
                      t = b_23(t);
                      LocalPopChoice(t_8);
                    }
                  else
                    {
                      t = s_8;
                      t = Cons_2(t, _id, b_23);
                    }
                }
              }
            return(t);
          }
          t = b_23(t);
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
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  f_23 = t;
  d_23 :
  if(match_cons(f_23, sym__2))
    {
      g_23 = ATgetArgument(f_23, 0);
      h_23 = ATgetArgument(f_23, 1);
      e_23 :
      if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
        {
          i_23 = ATgetFirst((ATermList) h_23);
          j_23 = (ATerm) ATgetNext((ATermList) h_23);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_23)), not_null(i_23)), not_null(j_23));
        }
      else
        {
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
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  w_23 :
  if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
    {
      z_23 = ATgetFirst((ATermList) y_23);
      c_24 = (ATerm) ATgetNext((ATermList) y_23);
      x_23 :
      if(match_cons(z_23, sym__2))
        {
          a_24 = ATgetArgument(z_23, 0);
          b_24 = ATgetArgument(z_23, 1);
          {
            ATerm g_24 = NULL,h_24 = NULL,n_24 = NULL,t_24 = NULL;
            ATerm u_8;
            u_8 = t;
            {
              ATerm i_24 = NULL;
              ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
              t = not_null(b_24);
              {
                i_24 = t;
                {
                  t = SSL_explode_term(not_null(i_24));
                  {
                    k_24 = t;
                    r_23 :
                    if(match_cons(k_24, sym__2))
                      {
                        l_24 = ATgetArgument(k_24, 0);
                        m_24 = ATgetArgument(k_24, 1);
                        {
                          if(((g_24 != NULL) && (g_24 != l_24)))
                            _fail(l_24);
                          else
                            g_24 = l_24;
                          if(((h_24 != NULL) && (h_24 != m_24)))
                            _fail(m_24);
                          else
                            h_24 = m_24;
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
                ATerm o_24 = NULL;
                ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
                t = not_null(a_24);
                {
                  o_24 = t;
                  {
                    t = SSL_explode_term(not_null(o_24));
                    {
                      q_24 = t;
                      u_23 :
                      if(match_cons(q_24, sym__2))
                        {
                          r_24 = ATgetArgument(q_24, 0);
                          s_24 = ATgetArgument(q_24, 1);
                          {
                            if(((g_24 != NULL) && (g_24 != r_24)))
                              _fail(r_24);
                            else
                              g_24 = r_24;
                            if(((n_24 != NULL) && (n_24 != s_24)))
                              _fail(s_24);
                            else
                              n_24 = s_24;
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
                ATerm u_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(h_24));
                {
                  t = zip_1(t, _id);
                  {
                    u_24 = t;
                    if(((t_24 != NULL) && (t_24 != u_24)))
                      _fail(u_24);
                    else
                      t_24 = u_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_24), not_null(c_24));
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  e_25 = t;
  c_25 :
  if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
    {
      f_25 = ATgetFirst((ATermList) e_25);
      i_25 = (ATerm) ATgetNext((ATermList) e_25);
      d_25 :
      if(match_cons(f_25, sym__2))
        {
          g_25 = ATgetArgument(f_25, 0);
          h_25 = ATgetArgument(f_25, 1);
          {
            ATerm k_25 = NULL;
            if(((g_25 != NULL) && (g_25 != h_25)))
              _fail(h_25);
            else
              g_25 = h_25;
            {
              if(((k_25 != NULL) && (k_25 != i_25)))
                _fail(i_25);
              else
                k_25 = i_25;
              t = not_null(k_25);
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
ATerm while_not_2 (ATerm t, ATerm d_113 (ATerm), ATerm e_113 (ATerm))
{
  ATerm m_25 (ATerm t)
  {
    ATerm a_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_113(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = a_9;
        {
          t = e_113(t);
          t = m_25(t);
        }
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm))
{
  t = g_113(t);
  t = while_not_2(t, h_113, i_113);
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
        ATerm o_25 = NULL;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_25));
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
ATerm oncetd_1 (ATerm t, ATerm a_98 (ATerm))
{
  ATerm r_25 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = _one(t, r_25);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        ATerm s_9;
        s_9 = t;
        {
          t = not_null(x_25);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm a_26 = NULL;
              a_26 = t;
              if(((w_25 != NULL) && (w_25 != a_26)))
                _fail(a_26);
              else
                w_25 = a_26;
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
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym_Var_1))
    {
      n_26 = ATgetArgument(m_26, 0);
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_26 = NULL,s_26 = NULL;
            ATerm r_26 = NULL;
            t = SSLgetAnnotations(not_null(m_26));
            {
              r_26 = t;
              if(((q_26 != NULL) && (q_26 != r_26)))
                _fail(r_26);
              else
                q_26 = r_26;
            }
            {
              t = not_null(n_26);
              {
                ATerm u_26 = NULL;
                t = p_0(t);
                {
                  s_26 = t;
                  {
                    ATerm v_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_26)), not_null(q_26));
                    {
                      v_26 = t;
                      if(((u_26 != NULL) && (u_26 != v_26)))
                        _fail(v_26);
                      else
                        u_26 = v_26;
                    }
                    t = not_null(u_26);
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
              ATerm y_26 = NULL,a_27 = NULL;
              ATerm z_26 = NULL;
              t = SSLgetAnnotations(not_null(m_26));
              {
                z_26 = t;
                if(((y_26 != NULL) && (y_26 != z_26)))
                  _fail(z_26);
                else
                  y_26 = z_26;
              }
              {
                t = not_null(n_26);
                {
                  ATerm c_27 = NULL;
                  t = p_0(t);
                  {
                    a_27 = t;
                    {
                      ATerm d_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_27)), not_null(y_26));
                      {
                        d_27 = t;
                        if(((c_27 != NULL) && (c_27 != d_27)))
                          _fail(d_27);
                        else
                          c_27 = d_27;
                      }
                      t = not_null(c_27);
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  d_29 = t;
  c_28 :
  if(match_cons(d_29, sym_Seq_2))
    {
      e_29 = ATgetArgument(d_29, 0);
      g_29 = ATgetArgument(d_29, 1);
      d_28 :
      if(match_cons(e_29, sym_Assign_1))
        {
          f_29 = ATgetArgument(e_29, 0);
          e_28 :
          if(match_cons(f_29, sym_Var_1))
            {
              w_28 = ATgetArgument(f_29, 0);
              f_28 :
              if(match_cons(g_29, sym_Seq_2))
                {
                  h_29 = ATgetArgument(g_29, 0);
                  i_29 = ATgetArgument(g_29, 1);
                  g_28 :
                  if(match_cons(h_29, sym_Build_1))
                    {
                      z_28 = ATgetArgument(h_29, 0);
                      h_28 :
                      if(match_cons(z_28, sym_Var_1))
                        {
                          a_29 = ATgetArgument(z_28, 0);
                          {
                            ATerm o_29 = NULL;
                            if(((w_28 != NULL) && (w_28 != a_29)))
                              _fail(a_29);
                            else
                              w_28 = a_29;
                            {
                              if(((o_29 != NULL) && (o_29 != i_29)))
                                _fail(i_29);
                              else
                                o_29 = i_29;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(o_29));
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
          if(match_cons(e_29, sym_Build_1))
            {
              f_29 = ATgetArgument(e_29, 0);
              i_28 :
              if(match_cons(g_29, sym_Scope_2))
                {
                  h_29 = ATgetArgument(g_29, 0);
                  i_29 = ATgetArgument(g_29, 1);
                  j_28 :
                  if(match_cons(i_29, sym_Seq_2))
                    {
                      j_29 = ATgetArgument(i_29, 0);
                      m_29 = ATgetArgument(i_29, 1);
                      k_28 :
                      if(match_cons(j_29, sym_Assign_1))
                        {
                          k_29 = ATgetArgument(j_29, 0);
                          l_28 :
                          if(match_cons(k_29, sym_Var_1))
                            {
                              l_29 = ATgetArgument(k_29, 0);
                              {
                                ATerm c_10 = t;
                                int j_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_30 = NULL,t_30 = NULL;
                                    ATerm k_10;
                                    k_10 = t;
                                    {
                                      ATerm s_30 = NULL;
                                      t = not_null(f_29);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(h_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  s_30 = t;
                                                  if(((r_30 != NULL) && (r_30 != s_30)))
                                                    _fail(s_30);
                                                  else
                                                    r_30 = s_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = k_10;
                                    {
                                      ATerm u_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, not_null(f_29)), not_null(m_29));
                                      {
                                        t = substitute_2(t, IsVar_0, _id);
                                        {
                                          u_30 = t;
                                          if(((t_30 != NULL) && (t_30 != u_30)))
                                            _fail(u_30);
                                          else
                                            t_30 = u_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_30), not_null(t_30)));
                                    }
                                    LocalPopChoice(j_10);
                                  }
                                else
                                  {
                                    t = c_10;
                                    {
                                      ATerm z_30 = NULL,b_31 = NULL;
                                      ATerm l_10;
                                      l_10 = t;
                                      {
                                        ATerm a_31 = NULL;
                                        t = not_null(f_29);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(h_29));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    a_31 = t;
                                                    if(((z_30 != NULL) && (z_30 != a_31)))
                                                      _fail(a_31);
                                                    else
                                                      z_30 = a_31;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = l_10;
                                      {
                                        ATerm c_31 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, not_null(f_29)), not_null(m_29));
                                        {
                                          t = substitute_2(t, IsVar_0, _id);
                                          {
                                            c_31 = t;
                                            if(((b_31 != NULL) && (b_31 != c_31)))
                                              _fail(c_31);
                                            else
                                              b_31 = c_31;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_30), not_null(b_31)));
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
      if(match_cons(d_29, sym_Scope_2))
        {
          e_29 = ATgetArgument(d_29, 0);
          g_29 = ATgetArgument(d_29, 1);
          m_28 :
          if(match_cons(g_29, sym_Seq_2))
            {
              h_29 = ATgetArgument(g_29, 0);
              i_29 = ATgetArgument(g_29, 1);
              n_28 :
              if(match_cons(h_29, sym_Assign_1))
                {
                  z_28 = ATgetArgument(h_29, 0);
                  o_28 :
                  if(match_cons(z_28, sym_Var_1))
                    {
                      a_29 = ATgetArgument(z_28, 0);
                      p_28 :
                      if(match_cons(i_29, sym_Seq_2))
                        {
                          j_29 = ATgetArgument(i_29, 0);
                          m_29 = ATgetArgument(i_29, 1);
                          q_28 :
                          if(match_cons(j_29, sym_Assign_2))
                            {
                              k_29 = ATgetArgument(j_29, 0);
                              x_28 = ATgetArgument(j_29, 1);
                              r_28 :
                              if(match_cons(k_29, sym_Var_1))
                                {
                                  l_29 = ATgetArgument(k_29, 0);
                                  s_28 :
                                  if(match_cons(x_28, sym_Var_1))
                                    {
                                      y_28 = ATgetArgument(x_28, 0);
                                      {
                                        ATerm s_29 = NULL,t_29 = NULL,v_29 = NULL;
                                        if(((a_29 != NULL) && (a_29 != y_28)))
                                          _fail(y_28);
                                        else
                                          a_29 = y_28;
                                        {
                                          if(((s_29 != NULL) && (s_29 != m_29)))
                                            _fail(m_29);
                                          else
                                            s_29 = m_29;
                                          {
                                            ATerm m_10;
                                            m_10 = t;
                                            {
                                              ATerm u_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(e_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(e_29));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
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
                                              }
                                            }
                                            t = m_10;
                                            {
                                              ATerm w_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(s_29));
                                              {
                                                t = substitute_2(t, IsVar_0, _id);
                                                {
                                                  w_29 = t;
                                                  if(((v_29 != NULL) && (v_29 != w_29)))
                                                    _fail(w_29);
                                                  else
                                                    v_29 = w_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(v_29)));
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
                              if(match_cons(j_29, sym_Assign_1))
                                {
                                  k_29 = ATgetArgument(j_29, 0);
                                  t_28 :
                                  if(match_cons(k_29, sym_Var_1))
                                    {
                                      l_29 = ATgetArgument(k_29, 0);
                                      {
                                        ATerm b_30 = NULL,d_30 = NULL;
                                        ATerm n_10;
                                        n_10 = t;
                                        {
                                          ATerm c_30 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(e_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(e_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
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
                                        t = n_10;
                                        {
                                          ATerm e_30 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(m_29));
                                          {
                                            t = substitute_2(t, IsVar_0, _id);
                                            {
                                              e_30 = t;
                                              if(((d_30 != NULL) && (d_30 != e_30)))
                                                _fail(e_30);
                                              else
                                                d_30 = e_30;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(d_30)));
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
                  if(match_cons(h_29, sym_Assign_2))
                    {
                      z_28 = ATgetArgument(h_29, 0);
                      b_29 = ATgetArgument(h_29, 1);
                      u_28 :
                      if(match_cons(z_28, sym_Var_1))
                        {
                          a_29 = ATgetArgument(z_28, 0);
                          v_28 :
                          if(match_cons(b_29, sym_Var_1))
                            {
                              c_29 = ATgetArgument(b_29, 0);
                              {
                                ATerm j_30 = NULL,l_30 = NULL;
                                ATerm o_10;
                                o_10 = t;
                                {
                                  ATerm k_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(e_29));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), (ATerm) ATinsert(ATempty, not_null(a_29)));
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
                                t = o_10;
                                {
                                  ATerm m_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_29))), not_null(i_29));
                                  {
                                    t = substitute_2(t, IsVar_0, _id);
                                    {
                                      m_30 = t;
                                      if(((l_30 != NULL) && (l_30 != m_30)))
                                        _fail(m_30);
                                      else
                                        l_30 = m_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_30), not_null(l_30));
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
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  w_31 = t;
  u_31 :
  if(match_cons(w_31, sym_Seq_2))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      v_31 :
      if(match_cons(y_31, sym_Let_2))
        {
          z_31 = ATgetArgument(y_31, 0);
          a_32 = ATgetArgument(y_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_31), not_null(a_32)));
        }
      else
        {
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
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_Cong_2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,b_34 = NULL,d_34 = NULL,f_34 = NULL;
        ATerm a_11;
        a_11 = t;
        {
          ATerm h_33 = NULL;
          t = not_null(y_32);
          {
            ATerm k_33 = NULL;
            t = map_1(t, new_0);
            {
              h_33 = t;
              {
                if(((e_33 != NULL) && (e_33 != h_33)))
                  _fail(h_33);
                else
                  e_33 = h_33;
                {
                  t = not_null(e_33);
                  {
                    ATerm l_33 = NULL;
                    ATerm i_1 (ATerm t)
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
                    t = map_1(t, i_1);
                    {
                      k_33 = t;
                      {
                        if(((b_33 != NULL) && (b_33 != k_33)))
                          _fail(k_33);
                        else
                          b_33 = k_33;
                        {
                          ATerm m_33 = NULL;
                          t = new_0(t);
                          {
                            l_33 = t;
                            {
                              if(((c_33 != NULL) && (c_33 != l_33)))
                                _fail(l_33);
                              else
                                c_33 = l_33;
                              {
                                t = not_null(y_32);
                                {
                                  ATerm p_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    m_33 = t;
                                    {
                                      if(((f_33 != NULL) && (f_33 != m_33)))
                                        _fail(m_33);
                                      else
                                        f_33 = m_33;
                                      {
                                        t = not_null(f_33);
                                        {
                                          ATerm q_33 = NULL,a_34 = NULL;
                                          ATerm j_1 (ATerm t)
                                          {
                                            ATerm n_33 = NULL;
                                            ATerm o_33 = NULL;
                                            o_33 = t;
                                            if(((n_33 != NULL) && (n_33 != o_33)))
                                              _fail(o_33);
                                            else
                                              n_33 = o_33;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_33));
                                            return(t);
                                          }
                                          t = map_1(t, j_1);
                                          {
                                            p_33 = t;
                                            {
                                              if(((d_33 != NULL) && (d_33 != p_33)))
                                                _fail(p_33);
                                              else
                                                d_33 = p_33;
                                              {
                                                ATerm r_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(f_33));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    r_33 = t;
                                                    if(((q_33 != NULL) && (q_33 != r_33)))
                                                      _fail(r_33);
                                                    else
                                                      q_33 = r_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(y_32));
                                                  {
                                                    ATerm k_1 (ATerm t)
                                                    {
                                                      ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
                                                      s_33 = t;
                                                      p_32 :
                                                      if(match_cons(s_33, sym__2))
                                                        {
                                                          t_33 = ATgetArgument(s_33, 0);
                                                          w_33 = ATgetArgument(s_33, 1);
                                                          q_32 :
                                                          if(match_cons(t_33, sym__2))
                                                            {
                                                              u_33 = ATgetArgument(t_33, 0);
                                                              v_33 = ATgetArgument(t_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_33)))));
                                                            }
                                                          else
                                                            {
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
                                                      a_34 = t;
                                                      if(((g_33 != NULL) && (g_33 != a_34)))
                                                        _fail(a_34);
                                                      else
                                                        g_33 = a_34;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
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
            ATerm c_34 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(f_33));
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
                  t = conc_more_lists_0(t);
                }
              {
                c_34 = t;
                if(((b_34 != NULL) && (b_34 != c_34)))
                  _fail(c_34);
                else
                  b_34 = c_34;
              }
            }
          }
          t = b_11;
          {
            ATerm e_11;
            e_11 = t;
            {
              ATerm e_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_32), not_null(b_33)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_33))));
              {
                t = Mapp2_0(t);
                {
                  e_34 = t;
                  if(((d_34 != NULL) && (d_34 != e_34)))
                    _fail(e_34);
                  else
                    d_34 = e_34;
                }
              }
            }
            t = e_11;
            {
              ATerm g_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_32), not_null(d_33)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_33))));
              {
                t = Bapp2_0(t);
                {
                  g_34 = t;
                  if(((f_34 != NULL) && (f_34 != g_34)))
                    _fail(g_34);
                  else
                    f_34 = g_34;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(b_34)), not_null(c_33)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(g_33)), not_null(f_34))));
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
  ATerm l_35 = NULL,m_35 = NULL;
  l_35 = t;
  k_35 :
  if(match_cons(l_35, sym_Build_1))
    {
      m_35 = ATgetArgument(l_35, 0);
      {
        ATerm f_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
            ATerm s_35 = NULL;
            ATerm w_35 = NULL;
            t = new_0(t);
            {
              s_35 = t;
              {
                if(((q_35 != NULL) && (q_35 != s_35)))
                  _fail(s_35);
                else
                  q_35 = s_35;
                {
                  t = not_null(m_35);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
                      t_35 = t;
                      a_35 :
                      if(match_cons(t_35, sym_Anno_2))
                        {
                          u_35 = ATgetArgument(t_35, 0);
                          v_35 = ATgetArgument(t_35, 1);
                          {
                            if(((o_35 != NULL) && (o_35 != u_35)))
                              _fail(u_35);
                            else
                              o_35 = u_35;
                            {
                              if(((p_35 != NULL) && (p_35 != v_35)))
                                _fail(v_35);
                              else
                                p_35 = v_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_35));
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
                      w_35 = t;
                      if(((r_35 != NULL) && (r_35 != w_35)))
                        _fail(w_35);
                      else
                        r_35 = w_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_35)), not_null(o_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_35))));
            LocalPopChoice(i_11);
          }
        else
          {
            t = f_11;
            {
              ATerm x_11 = t;
              int y_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
                  ATerm b_36 = NULL;
                  ATerm e_36 = NULL;
                  t = new_0(t);
                  {
                    b_36 = t;
                    {
                      if(((z_35 != NULL) && (z_35 != b_36)))
                        _fail(b_36);
                      else
                        z_35 = b_36;
                      {
                        t = not_null(m_35);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm c_36 = NULL,d_36 = NULL;
                            c_36 = t;
                            e_35 :
                            if(match_cons(c_36, sym_RootApp_1))
                              {
                                d_36 = ATgetArgument(c_36, 0);
                                {
                                  if(((y_35 != NULL) && (y_35 != d_36)))
                                    _fail(d_36);
                                  else
                                    y_35 = d_36;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_35));
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
                            e_36 = t;
                            if(((a_36 != NULL) && (a_36 != e_36)))
                              _fail(e_36);
                            else
                              a_36 = e_36;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_36))));
                  LocalPopChoice(y_11);
                }
              else
                {
                  t = x_11;
                  {
                    ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
                    ATerm k_36 = NULL;
                    ATerm o_36 = NULL;
                    t = new_0(t);
                    {
                      k_36 = t;
                      {
                        if(((i_36 != NULL) && (i_36 != k_36)))
                          _fail(k_36);
                        else
                          i_36 = k_36;
                        {
                          t = not_null(m_35);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
                              l_36 = t;
                              i_35 :
                              if(match_cons(l_36, sym_App_2))
                                {
                                  m_36 = ATgetArgument(l_36, 0);
                                  n_36 = ATgetArgument(l_36, 1);
                                  {
                                    if(((g_36 != NULL) && (g_36 != m_36)))
                                      _fail(m_36);
                                    else
                                      g_36 = m_36;
                                    {
                                      if(((h_36 != NULL) && (h_36 != n_36)))
                                        _fail(n_36);
                                      else
                                        h_36 = n_36;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_36));
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
                              o_36 = t;
                              if(((j_36 != NULL) && (j_36 != o_36)))
                                _fail(o_36);
                              else
                                j_36 = o_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_36), not_null(h_36), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_36)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_36))));
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
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym__2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_37)), not_null(e_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm n_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,g_38 = NULL,h_38 = NULL;
  n_37 = t;
  k_37 :
  if(match_cons(n_37, sym__2))
    {
      t_37 = ATgetArgument(n_37, 0);
      w_37 = ATgetArgument(n_37, 1);
      l_37 :
      if(((ATgetType(t_37) == AT_LIST) && !(ATisEmpty(t_37))))
        {
          u_37 = ATgetFirst((ATermList) t_37);
          v_37 = (ATerm) ATgetNext((ATermList) t_37);
          m_37 :
          if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
            {
              g_38 = ATgetFirst((ATermList) w_37);
              h_38 = (ATerm) ATgetNext((ATermList) w_37);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_37), not_null(g_38)), (ATerm) ATmakeAppl(sym__2, not_null(v_37), not_null(h_38)));
            }
          else
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
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  t_38 :
  if(match_cons(f_39, sym__2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      u_38 :
      if(((ATgetType(g_39) == AT_LIST) && ATisEmpty(g_39)))
        {
          e_39 :
          if(((ATgetType(h_39) == AT_LIST) && ATisEmpty(h_39)))
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
ATerm genzip_4 (ATerm t, ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm))
{
  ATerm j_39 (ATerm t)
  {
    ATerm z_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_101(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = z_11;
        {
          t = e_101(t);
          {
            t = _2(t, g_101, j_39);
            t = f_101(t);
          }
        }
      }
    return(t);
  }
  t = j_39(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm i_101 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, i_101);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm k_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,s_41 = NULL,t_41 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  k_41 = t;
  b_41 :
  if(match_cons(k_41, sym_Call_2))
    {
      m_41 = ATgetArgument(k_41, 0);
      o_41 = ATgetArgument(k_41, 1);
      c_41 :
      if(match_cons(m_41, sym_SVar_1))
        {
          n_41 = ATgetArgument(m_41, 0);
          d_41 :
          if(match_string(n_41, "Anno_Cong__"))
            {
              e_41 :
              if(((ATgetType(o_41) == AT_LIST) && !(ATisEmpty(o_41))))
                {
                  p_41 = ATgetFirst((ATermList) o_41);
                  f_42 = (ATerm) ATgetNext((ATermList) o_41);
                  f_41 :
                  if(match_cons(p_41, sym_Cong_2))
                    {
                      s_41 = ATgetArgument(p_41, 0);
                      t_41 = ATgetArgument(p_41, 1);
                      g_41 :
                      if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
                        {
                          g_42 = ATgetFirst((ATermList) f_42);
                          h_42 = (ATerm) ATgetNext((ATermList) f_42);
                          h_41 :
                          if(((ATgetType(h_42) == AT_LIST) && ATisEmpty(h_42)))
                            {
                              {
                                ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,p_43 = NULL,r_43 = NULL,t_43 = NULL;
                                ATerm c_12;
                                c_12 = t;
                                {
                                  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(g_42));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      s_42 = t;
                                      x_40 :
                                      if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
                                        {
                                          t_42 = ATgetFirst((ATermList) s_42);
                                          u_42 = (ATerm) ATgetNext((ATermList) s_42);
                                          {
                                            ATerm x_42 = NULL;
                                            if(((l_42 != NULL) && (l_42 != t_42)))
                                              _fail(t_42);
                                            else
                                              l_42 = t_42;
                                            {
                                              if(((p_42 != NULL) && (p_42 != u_42)))
                                                _fail(u_42);
                                              else
                                                p_42 = u_42;
                                              {
                                                ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
                                                ATerm o_1 (ATerm t)
                                                {
                                                  ATerm v_42 = NULL;
                                                  ATerm w_42 = NULL;
                                                  w_42 = t;
                                                  if(((v_42 != NULL) && (v_42 != w_42)))
                                                    _fail(w_42);
                                                  else
                                                    v_42 = w_42;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_42));
                                                  return(t);
                                                }
                                                t = map_1(t, o_1);
                                                {
                                                  x_42 = t;
                                                  {
                                                    if(((m_42 != NULL) && (m_42 != x_42)))
                                                      _fail(x_42);
                                                    else
                                                      m_42 = x_42;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(g_42));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          y_42 = t;
                                                          r_40 :
                                                          if(((ATgetType(y_42) == AT_LIST) && !(ATisEmpty(y_42))))
                                                            {
                                                              z_42 = ATgetFirst((ATermList) y_42);
                                                              a_43 = (ATerm) ATgetNext((ATermList) y_42);
                                                              {
                                                                ATerm d_43 = NULL;
                                                                if(((n_42 != NULL) && (n_42 != z_42)))
                                                                  _fail(z_42);
                                                                else
                                                                  n_42 = z_42;
                                                                {
                                                                  if(((q_42 != NULL) && (q_42 != a_43)))
                                                                    _fail(a_43);
                                                                  else
                                                                    q_42 = a_43;
                                                                  {
                                                                    ATerm e_43 = NULL,o_43 = NULL;
                                                                    ATerm p_1 (ATerm t)
                                                                    {
                                                                      ATerm b_43 = NULL;
                                                                      ATerm c_43 = NULL;
                                                                      c_43 = t;
                                                                      if(((b_43 != NULL) && (b_43 != c_43)))
                                                                        _fail(c_43);
                                                                      else
                                                                        b_43 = c_43;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_43));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, p_1);
                                                                    {
                                                                      d_43 = t;
                                                                      {
                                                                        if(((o_42 != NULL) && (o_42 != d_43)))
                                                                          _fail(d_43);
                                                                        else
                                                                          o_42 = d_43;
                                                                        {
                                                                          ATerm f_43 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_42), not_null(q_42));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              f_43 = t;
                                                                              if(((e_43 != NULL) && (e_43 != f_43)))
                                                                                _fail(f_43);
                                                                              else
                                                                                e_43 = f_43;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_43), (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(g_42)));
                                                                            {
                                                                              ATerm q_1 (ATerm t)
                                                                              {
                                                                                ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
                                                                                g_43 = t;
                                                                                o_40 :
                                                                                if(match_cons(g_43, sym__2))
                                                                                  {
                                                                                    h_43 = ATgetArgument(g_43, 0);
                                                                                    k_43 = ATgetArgument(g_43, 1);
                                                                                    p_40 :
                                                                                    if(match_cons(h_43, sym__2))
                                                                                      {
                                                                                        i_43 = ATgetArgument(h_43, 0);
                                                                                        j_43 = ATgetArgument(h_43, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_43))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_43)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                o_43 = t;
                                                                                if(((r_42 != NULL) && (r_42 != o_43)))
                                                                                  _fail(o_43);
                                                                                else
                                                                                  r_42 = o_43;
                                                                              }
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
                                t = c_12;
                                {
                                  ATerm d_12;
                                  d_12 = t;
                                  {
                                    ATerm q_43 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_42), not_null(q_42));
                                    {
                                      ATerm h_12 = t;
                                      int l_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(l_12);
                                        }
                                      else
                                        {
                                          t = h_12;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        q_43 = t;
                                        if(((p_43 != NULL) && (p_43 != q_43)))
                                          _fail(q_43);
                                        else
                                          p_43 = q_43;
                                      }
                                    }
                                  }
                                  t = d_12;
                                  {
                                    ATerm q_12;
                                    q_12 = t;
                                    {
                                      ATerm s_43 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_41), not_null(m_42)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_42))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          s_43 = t;
                                          if(((r_43 != NULL) && (r_43 != s_43)))
                                            _fail(s_43);
                                          else
                                            r_43 = s_43;
                                        }
                                      }
                                    }
                                    t = q_12;
                                    {
                                      ATerm u_43 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_41), not_null(o_42)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          u_43 = t;
                                          if(((t_43 != NULL) && (t_43 != u_43)))
                                            _fail(u_43);
                                          else
                                            t_43 = u_43;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(p_43)), not_null(n_42)), not_null(l_42)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_42)), not_null(t_43))));
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
ATerm As_2 (ATerm t, ATerm l_87 (ATerm), ATerm m_87 (ATerm))
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_As_2))
    {
      p_44 = ATgetArgument(o_44, 0);
      q_44 = ATgetArgument(o_44, 1);
      {
        ATerm u_44 = NULL,w_44 = NULL;
        ATerm v_44 = NULL;
        t = SSLgetAnnotations(not_null(o_44));
        {
          v_44 = t;
          if(((u_44 != NULL) && (u_44 != v_44)))
            _fail(v_44);
          else
            u_44 = v_44;
        }
        {
          t = not_null(p_44);
          {
            ATerm c_45 = NULL;
            t = l_87(t);
            {
              w_44 = t;
              {
                t = not_null(q_44);
                {
                  ATerm e_45 = NULL;
                  t = m_87(t);
                  {
                    c_45 = t;
                    {
                      ATerm f_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(w_44), not_null(c_45)), not_null(u_44));
                      {
                        f_45 = t;
                        if(((e_45 != NULL) && (e_45 != f_45)))
                          _fail(f_45);
                        else
                          e_45 = f_45;
                      }
                      t = not_null(e_45);
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
ATerm Prim_2 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm))
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  s_45 :
  if(match_cons(t_45, sym_Prim_2))
    {
      u_45 = ATgetArgument(t_45, 0);
      v_45 = ATgetArgument(t_45, 1);
      {
        ATerm z_45 = NULL,b_46 = NULL;
        ATerm a_46 = NULL;
        t = SSLgetAnnotations(not_null(t_45));
        {
          a_46 = t;
          if(((z_45 != NULL) && (z_45 != a_46)))
            _fail(a_46);
          else
            z_45 = a_46;
        }
        {
          t = not_null(u_45);
          {
            ATerm d_46 = NULL;
            t = i_83(t);
            {
              b_46 = t;
              {
                t = not_null(v_45);
                {
                  ATerm f_46 = NULL;
                  t = j_83(t);
                  {
                    d_46 = t;
                    {
                      ATerm g_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_46), not_null(d_46)), not_null(z_45));
                      {
                        g_46 = t;
                        if(((f_46 != NULL) && (f_46 != g_46)))
                          _fail(g_46);
                        else
                          f_46 = g_46;
                      }
                      t = not_null(f_46);
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
ATerm Explode_2 (ATerm t, ATerm h_87 (ATerm), ATerm i_87 (ATerm))
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  w_46 :
  if(match_cons(x_46, sym_Explode_2))
    {
      y_46 = ATgetArgument(x_46, 0);
      z_46 = ATgetArgument(x_46, 1);
      {
        ATerm d_47 = NULL,f_47 = NULL;
        ATerm e_47 = NULL;
        t = SSLgetAnnotations(not_null(x_46));
        {
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
        }
        {
          t = not_null(y_46);
          {
            ATerm k_47 = NULL;
            t = h_87(t);
            {
              f_47 = t;
              {
                t = not_null(z_46);
                {
                  ATerm m_47 = NULL;
                  t = i_87(t);
                  {
                    k_47 = t;
                    {
                      ATerm n_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(f_47), not_null(k_47)), not_null(d_47));
                      {
                        n_47 = t;
                        if(((m_47 != NULL) && (m_47 != n_47)))
                          _fail(n_47);
                        else
                          m_47 = n_47;
                      }
                      t = not_null(m_47);
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
ATerm Op_2 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  ATerm z_47 = NULL,a_48 = NULL,j_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym_Op_2))
    {
      a_48 = ATgetArgument(z_47, 0);
      j_48 = ATgetArgument(z_47, 1);
      {
        ATerm q_48 = NULL,s_48 = NULL;
        ATerm r_48 = NULL;
        t = SSLgetAnnotations(not_null(z_47));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
        {
          t = not_null(a_48);
          {
            ATerm u_48 = NULL;
            t = m_85(t);
            {
              s_48 = t;
              {
                t = not_null(j_48);
                {
                  ATerm w_48 = NULL;
                  t = n_85(t);
                  {
                    u_48 = t;
                    {
                      ATerm b_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(s_48), not_null(u_48)), not_null(q_48));
                      {
                        b_49 = t;
                        if(((w_48 != NULL) && (w_48 != b_49)))
                          _fail(b_49);
                        else
                          w_48 = b_49;
                      }
                      t = not_null(w_48);
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
ATerm pat_td_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm r_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_94(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = r_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = pat_td_1(t, r_94);
                return(t);
              }
              t = fetch_1(t, s_1);
              return(t);
            }
            t = Op_2(t, _id, r_1);
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm j_13 = t;
              int k_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = pat_td_1(t, r_94);
                    return(t);
                  }
                  t = Explode_2(t, _id, t_1);
                  LocalPopChoice(k_13);
                }
              else
                {
                  t = j_13;
                  {
                    ATerm l_13 = t;
                    int m_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_94);
                          return(t);
                        }
                        t = Explode_2(t, u_1, _id);
                        LocalPopChoice(m_13);
                      }
                    else
                      {
                        t = l_13;
                        {
                          ATerm n_13 = t;
                          int o_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_1 (ATerm t)
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_94);
                                  return(t);
                                }
                                t = fetch_1(t, w_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, v_1);
                              LocalPopChoice(o_13);
                            }
                          else
                            {
                              t = n_13;
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_94);
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
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym_Match_1))
    {
      c_50 = ATgetArgument(b_50, 0);
      {
        ATerm p_13 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
            ATerm i_50 = NULL;
            ATerm m_50 = NULL;
            t = new_0(t);
            {
              i_50 = t;
              {
                if(((g_50 != NULL) && (g_50 != i_50)))
                  _fail(i_50);
                else
                  g_50 = i_50;
                {
                  t = not_null(c_50);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
                      j_50 = t;
                      q_49 :
                      if(match_cons(j_50, sym_Anno_2))
                        {
                          k_50 = ATgetArgument(j_50, 0);
                          l_50 = ATgetArgument(j_50, 1);
                          {
                            if(((e_50 != NULL) && (e_50 != k_50)))
                              _fail(k_50);
                            else
                              e_50 = k_50;
                            {
                              if(((f_50 != NULL) && (f_50 != l_50)))
                                _fail(l_50);
                              else
                                f_50 = l_50;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_50)), not_null(e_50));
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
                      m_50 = t;
                      if(((h_50 != NULL) && (h_50 != m_50)))
                        _fail(m_50);
                      else
                        h_50 = m_50;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_50)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_50)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_50))))));
            LocalPopChoice(c_14);
          }
        else
          {
            t = p_13;
            {
              ATerm e_14 = t;
              int f_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
                  ATerm r_50 = NULL;
                  ATerm u_50 = NULL;
                  t = new_0(t);
                  {
                    r_50 = t;
                    {
                      if(((p_50 != NULL) && (p_50 != r_50)))
                        _fail(r_50);
                      else
                        p_50 = r_50;
                      {
                        t = not_null(c_50);
                        {
                          ATerm z_1 (ATerm t)
                          {
                            ATerm s_50 = NULL,t_50 = NULL;
                            s_50 = t;
                            u_49 :
                            if(match_cons(s_50, sym_RootApp_1))
                              {
                                t_50 = ATgetArgument(s_50, 0);
                                {
                                  if(((o_50 != NULL) && (o_50 != t_50)))
                                    _fail(t_50);
                                  else
                                    o_50 = t_50;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_50));
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
                            u_50 = t;
                            if(((q_50 != NULL) && (q_50 != u_50)))
                              _fail(u_50);
                            else
                              q_50 = u_50;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_50))), not_null(o_50))));
                  LocalPopChoice(f_14);
                }
              else
                {
                  t = e_14;
                  {
                    ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
                    ATerm a_51 = NULL;
                    ATerm e_51 = NULL;
                    t = new_0(t);
                    {
                      a_51 = t;
                      {
                        if(((y_50 != NULL) && (y_50 != a_51)))
                          _fail(a_51);
                        else
                          y_50 = a_51;
                        {
                          t = not_null(c_50);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
                              b_51 = t;
                              y_49 :
                              if(match_cons(b_51, sym_App_2))
                                {
                                  c_51 = ATgetArgument(b_51, 0);
                                  d_51 = ATgetArgument(b_51, 1);
                                  {
                                    if(((x_50 != NULL) && (x_50 != c_51)))
                                      _fail(c_51);
                                    else
                                      x_50 = c_51;
                                    {
                                      if(((w_50 != NULL) && (w_50 != d_51)))
                                        _fail(d_51);
                                      else
                                        w_50 = d_51;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50));
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
                              e_51 = t;
                              if(((z_50 != NULL) && (z_50 != e_51)))
                                _fail(e_51);
                              else
                                z_50 = e_51;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_50)), not_null(x_50)))));
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
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym_Cong_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      {
        ATerm c_52 = NULL;
        ATerm h_52 = NULL;
        t = not_null(z_51);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm d_52 = NULL,f_52 = NULL;
            f_52 = t;
            u_51 :
            if(match_cons(f_52, sym_Match_1))
              {
                d_52 = ATgetArgument(f_52, 0);
                t = not_null(d_52);
              }
            else
              {
                if(match_cons(f_52, sym_Id_0))
                  {
                    t = term_g_14;
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
            h_52 = t;
            if(((c_52 != NULL) && (c_52 != h_52)))
              _fail(h_52);
            else
              c_52 = h_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(y_51), not_null(c_52)));
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
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  n_52 :
  if(match_cons(p_52, sym_Scope_2))
    {
      q_52 = ATgetArgument(p_52, 0);
      r_52 = ATgetArgument(p_52, 1);
      o_52 :
      if(((ATgetType(q_52) == AT_LIST) && ATisEmpty(q_52)))
        {
          t = not_null(r_52);
        }
      else
        {
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
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  a_53 :
  if(match_cons(n_53, sym_Where_1))
    {
      o_53 = ATgetArgument(n_53, 0);
      b_53 :
      if(match_cons(o_53, sym_Seq_2))
        {
          m_53 = ATgetArgument(o_53, 0);
          i_53 = ATgetArgument(o_53, 1);
          c_53 :
          if(match_cons(m_53, sym_Where_1))
            {
              h_53 = ATgetArgument(m_53, 0);
              d_53 :
              if(match_cons(i_53, sym_Seq_2))
                {
                  j_53 = ATgetArgument(i_53, 0);
                  l_53 = ATgetArgument(i_53, 1);
                  e_53 :
                  if(match_cons(j_53, sym_Build_1))
                    {
                      k_53 = ATgetArgument(j_53, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_53)), not_null(l_53))));
                    }
                  else
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
          if(match_cons(o_53, sym_Where_1))
            {
              m_53 = ATgetArgument(o_53, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(m_53));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(n_53, sym_Test_1))
        {
          o_53 = ATgetArgument(n_53, 0);
          f_53 :
          if(match_cons(o_53, sym_Test_1))
            {
              m_53 = ATgetArgument(o_53, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_53));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(n_53, sym_Not_1))
            {
              o_53 = ATgetArgument(n_53, 0);
              g_53 :
              if(match_cons(o_53, sym_Not_1))
                {
                  m_53 = ATgetArgument(o_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_53));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(n_53, sym_LChoice_2))
                {
                  o_53 = ATgetArgument(n_53, 0);
                  p_53 = ATgetArgument(n_53, 1);
                  {
                    if(((o_53 != NULL) && (o_53 != p_53)))
                      _fail(p_53);
                    else
                      o_53 = p_53;
                    t = not_null(o_53);
                  }
                }
              else
                {
                  if(match_cons(n_53, sym_Choice_2))
                    {
                      o_53 = ATgetArgument(n_53, 0);
                      p_53 = ATgetArgument(n_53, 1);
                      {
                        if(((o_53 != NULL) && (o_53 != p_53)))
                          _fail(p_53);
                        else
                          o_53 = p_53;
                        t = not_null(o_53);
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
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  l_54 = t;
  h_54 :
  if(match_cons(l_54, sym_LChoice_2))
    {
      m_54 = ATgetArgument(l_54, 0);
      p_54 = ATgetArgument(l_54, 1);
      i_54 :
      if(match_cons(m_54, sym_LChoice_2))
        {
          n_54 = ATgetArgument(m_54, 0);
          o_54 = ATgetArgument(m_54, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_54), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_54), not_null(p_54)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(l_54, sym_Seq_2))
        {
          m_54 = ATgetArgument(l_54, 0);
          p_54 = ATgetArgument(l_54, 1);
          j_54 :
          if(match_cons(m_54, sym_Seq_2))
            {
              n_54 = ATgetArgument(m_54, 0);
              o_54 = ATgetArgument(m_54, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_54), not_null(p_54)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(l_54, sym_Choice_2))
            {
              m_54 = ATgetArgument(l_54, 0);
              p_54 = ATgetArgument(l_54, 1);
              k_54 :
              if(match_cons(m_54, sym_Choice_2))
                {
                  n_54 = ATgetArgument(m_54, 0);
                  o_54 = ATgetArgument(m_54, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_54), (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_54), not_null(p_54)));
                }
              else
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
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  p_55 :
  if(match_cons(w_55, sym_Lets_2))
    {
      x_55 = ATgetArgument(w_55, 0);
      y_55 = ATgetArgument(w_55, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_55), not_null(y_55));
    }
  else
    {
      if(match_cons(w_55, sym_LChoices_1))
        {
          x_55 = ATgetArgument(w_55, 0);
          q_55 :
          if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
            {
              t_55 = ATgetFirst((ATermList) x_55);
              u_55 = (ATerm) ATgetNext((ATermList) x_55);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_55), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_55)));
            }
          else
            {
              if(((ATgetType(x_55) == AT_LIST) && ATisEmpty(x_55)))
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
          if(match_cons(w_55, sym_Choices_1))
            {
              x_55 = ATgetArgument(w_55, 0);
              r_55 :
              if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
                {
                  t_55 = ATgetFirst((ATermList) x_55);
                  u_55 = (ATerm) ATgetNext((ATermList) x_55);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Choices_1, not_null(u_55)));
                }
              else
                {
                  if(((ATgetType(x_55) == AT_LIST) && ATisEmpty(x_55)))
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
              if(match_cons(w_55, sym_Seqs_1))
                {
                  x_55 = ATgetArgument(w_55, 0);
                  s_55 :
                  if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
                    {
                      t_55 = ATgetFirst((ATermList) x_55);
                      u_55 = (ATerm) ATgetNext((ATermList) x_55);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_55)));
                    }
                  else
                    {
                      if(((ATgetType(x_55) == AT_LIST) && ATisEmpty(x_55)))
                        {
                          t = term_h_14;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_55, sym_DefaultVarDec_1))
                    {
                      x_55 = ATgetArgument(w_55, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_14), term_k_14));
                    }
                  else
                    {
                      if(match_cons(w_55, sym_InfixApp_3))
                        {
                          x_55 = ATgetArgument(w_55, 0);
                          y_55 = ATgetArgument(w_55, 1);
                          v_55 = ATgetArgument(w_55, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_55), (ATerm) ATmakeAppl(sym_Op_2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_55)), not_null(x_55))));
                        }
                      else
                        {
                          if(match_cons(w_55, sym_BAM_3))
                            {
                              x_55 = ATgetArgument(w_55, 0);
                              y_55 = ATgetArgument(w_55, 1);
                              v_55 = ATgetArgument(w_55, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_55))), not_null(x_55)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_55))));
                            }
                          else
                            {
                              if(match_cons(w_55, sym_AM_2))
                                {
                                  x_55 = ATgetArgument(w_55, 0);
                                  y_55 = ATgetArgument(w_55, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_55), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_55)));
                                }
                              else
                                {
                                  if(match_cons(w_55, sym_MA_2))
                                    {
                                      x_55 = ATgetArgument(w_55, 0);
                                      y_55 = ATgetArgument(w_55, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_55)), not_null(y_55));
                                    }
                                  else
                                    {
                                      if(match_cons(w_55, sym_BA_2))
                                        {
                                          x_55 = ATgetArgument(w_55, 0);
                                          y_55 = ATgetArgument(w_55, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_55)), not_null(x_55));
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
  ATerm n_57 = NULL,o_57 = NULL;
  n_57 = t;
  l_57 :
  if(match_cons(n_57, sym_Where_1))
    {
      o_57 = ATgetArgument(n_57, 0);
      m_57 :
      if(match_cons(o_57, sym_Fail_0))
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
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
  t_57 = t;
  r_57 :
  if(match_cons(t_57, sym_LChoice_2))
    {
      u_57 = ATgetArgument(t_57, 0);
      v_57 = ATgetArgument(t_57, 1);
      s_57 :
      if(match_cons(v_57, sym_Fail_0))
        {
          t = not_null(u_57);
        }
      else
        {
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
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  z_57 :
  if(match_cons(b_58, sym_LChoice_2))
    {
      c_58 = ATgetArgument(b_58, 0);
      d_58 = ATgetArgument(b_58, 1);
      a_58 :
      if(match_cons(c_58, sym_Fail_0))
        {
          t = not_null(d_58);
        }
      else
        {
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
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  h_58 :
  if(match_cons(j_58, sym_Choice_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      i_58 :
      if(match_cons(l_58, sym_Fail_0))
        {
          t = not_null(k_58);
        }
      else
        {
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
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  p_58 :
  if(match_cons(r_58, sym_Choice_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      t_58 = ATgetArgument(r_58, 1);
      q_58 :
      if(match_cons(s_58, sym_Fail_0))
        {
          t = not_null(t_58);
        }
      else
        {
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
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  y_58 :
  if(match_cons(z_58, sym_Cong_2))
    {
      a_59 = ATgetArgument(z_58, 0);
      b_59 = ATgetArgument(z_58, 1);
      {
        t = not_null(b_59);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm e_59 = NULL;
            e_59 = t;
            x_58 :
            if(!(match_cons(e_59, sym_Fail_0)))
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
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
  j_59 = t;
  h_59 :
  if(match_cons(j_59, sym_Path_2))
    {
      k_59 = ATgetArgument(j_59, 0);
      l_59 = ATgetArgument(j_59, 1);
      i_59 :
      if(match_cons(l_59, sym_Fail_0))
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
  ATerm r_59 = NULL,s_59 = NULL;
  r_59 = t;
  p_59 :
  if(match_cons(r_59, sym_One_1))
    {
      s_59 = ATgetArgument(r_59, 0);
      q_59 :
      if(match_cons(s_59, sym_Fail_0))
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
  ATerm x_59 = NULL,y_59 = NULL;
  x_59 = t;
  v_59 :
  if(match_cons(x_59, sym_Some_1))
    {
      y_59 = ATgetArgument(x_59, 0);
      w_59 :
      if(match_cons(y_59, sym_Fail_0))
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
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL;
  g_60 = t;
  c_60 :
  if(match_cons(g_60, sym_Rec_2))
    {
      h_60 = ATgetArgument(g_60, 0);
      i_60 = ATgetArgument(g_60, 1);
      d_60 :
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
ATerm F5_0 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
  o_60 = t;
  m_60 :
  if(match_cons(o_60, sym_Scope_2))
    {
      p_60 = ATgetArgument(o_60, 0);
      q_60 = ATgetArgument(o_60, 1);
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
ATerm F3_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  w_60 = t;
  u_60 :
  if(match_cons(w_60, sym_Seq_2))
    {
      x_60 = ATgetArgument(w_60, 0);
      y_60 = ATgetArgument(w_60, 1);
      v_60 :
      if(match_cons(x_60, sym_Fail_0))
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
  ATerm g_61 = NULL,h_61 = NULL;
  g_61 = t;
  c_61 :
  if(match_cons(g_61, sym_Not_1))
    {
      h_61 = ATgetArgument(g_61, 0);
      d_61 :
      if(match_cons(h_61, sym_Fail_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm n_61 = NULL,o_61 = NULL;
  n_61 = t;
  l_61 :
  if(match_cons(n_61, sym_Test_1))
    {
      o_61 = ATgetArgument(n_61, 0);
      m_61 :
      if(match_cons(o_61, sym_Fail_0))
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
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            {
              ATerm a_15 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(b_15);
                }
              else
                {
                  t = a_15;
                  {
                    ATerm c_15 = t;
                    int d_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(d_15);
                      }
                    else
                      {
                        t = c_15;
                        {
                          ATerm f_15 = t;
                          int u_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(u_15);
                            }
                          else
                            {
                              t = f_15;
                              {
                                ATerm v_15 = t;
                                int b_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(b_16);
                                  }
                                else
                                  {
                                    t = v_15;
                                    {
                                      ATerm c_16 = t;
                                      int e_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(e_16);
                                        }
                                      else
                                        {
                                          t = c_16;
                                          {
                                            ATerm f_16 = t;
                                            int g_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(g_16);
                                              }
                                            else
                                              {
                                                t = f_16;
                                                {
                                                  ATerm h_16 = t;
                                                  int w_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(w_16);
                                                    }
                                                  else
                                                    {
                                                      t = h_16;
                                                      {
                                                        ATerm x_16 = t;
                                                        int y_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(y_16);
                                                          }
                                                        else
                                                          {
                                                            t = x_16;
                                                            {
                                                              ATerm z_16 = t;
                                                              int a_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(a_17);
                                                                }
                                                              else
                                                                {
                                                                  t = z_16;
                                                                  {
                                                                    ATerm b_17 = t;
                                                                    int c_17 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(c_17);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_17;
                                                                        {
                                                                          ATerm d_17 = t;
                                                                          int e_17 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(e_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_17;
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
  ATerm t_61 = NULL,u_61 = NULL;
  t_61 = t;
  r_61 :
  if(match_cons(t_61, sym_Match_1))
    {
      u_61 = ATgetArgument(t_61, 0);
      s_61 :
      if(match_cons(u_61, sym_Wld_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm z_61 = NULL,a_62 = NULL;
  z_61 = t;
  x_61 :
  if(match_cons(z_61, sym_Where_1))
    {
      a_62 = ATgetArgument(z_61, 0);
      y_61 :
      if(match_cons(a_62, sym_Id_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm f_62 = NULL,g_62 = NULL;
  f_62 = t;
  d_62 :
  if(match_cons(f_62, sym_All_1))
    {
      g_62 = ATgetArgument(f_62, 0);
      e_62 :
      if(match_cons(g_62, sym_Id_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  l_62 = t;
  j_62 :
  if(match_cons(l_62, sym_Rec_2))
    {
      m_62 = ATgetArgument(l_62, 0);
      n_62 = ATgetArgument(l_62, 1);
      k_62 :
      if(match_cons(n_62, sym_Id_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm v_62 = NULL,b_63 = NULL,d_63 = NULL;
  v_62 = t;
  t_62 :
  if(match_cons(v_62, sym_Scope_2))
    {
      b_63 = ATgetArgument(v_62, 0);
      d_63 = ATgetArgument(v_62, 1);
      u_62 :
      if(match_cons(d_63, sym_Id_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  h_63 :
  if(match_cons(j_63, sym_LChoice_2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      i_63 :
      if(match_cons(k_63, sym_Id_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  r_63 = t;
  p_63 :
  if(match_cons(r_63, sym_Seq_2))
    {
      s_63 = ATgetArgument(r_63, 0);
      t_63 = ATgetArgument(r_63, 1);
      q_63 :
      if(match_cons(t_63, sym_Id_0))
        {
          t = not_null(s_63);
        }
      else
        {
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
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL;
  z_63 = t;
  x_63 :
  if(match_cons(z_63, sym_Seq_2))
    {
      a_64 = ATgetArgument(z_63, 0);
      b_64 = ATgetArgument(z_63, 1);
      y_63 :
      if(match_cons(a_64, sym_Id_0))
        {
          t = not_null(b_64);
        }
      else
        {
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
  ATerm h_64 = NULL,i_64 = NULL;
  h_64 = t;
  f_64 :
  if(match_cons(h_64, sym_Not_1))
    {
      i_64 = ATgetArgument(h_64, 0);
      g_64 :
      if(match_cons(i_64, sym_Id_0))
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
  ATerm n_64 = NULL,o_64 = NULL;
  n_64 = t;
  l_64 :
  if(match_cons(n_64, sym_Test_1))
    {
      o_64 = ATgetArgument(n_64, 0);
      m_64 :
      if(match_cons(o_64, sym_Id_0))
        {
          t = term_h_14;
        }
      else
        {
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
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm o_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = o_17;
            {
              ATerm s_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = s_17;
                  {
                    ATerm x_17 = t;
                    int y_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(y_17);
                      }
                    else
                      {
                        t = x_17;
                        {
                          ATerm z_17 = t;
                          int l_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(l_18);
                            }
                          else
                            {
                              t = z_17;
                              {
                                ATerm m_18 = t;
                                int n_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(n_18);
                                  }
                                else
                                  {
                                    t = m_18;
                                    {
                                      ATerm o_18 = t;
                                      int p_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(p_18);
                                        }
                                      else
                                        {
                                          t = o_18;
                                          {
                                            ATerm q_18 = t;
                                            int y_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(y_18);
                                              }
                                            else
                                              {
                                                t = q_18;
                                                {
                                                  ATerm z_18 = t;
                                                  int a_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(a_19);
                                                    }
                                                  else
                                                    {
                                                      t = z_18;
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
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm f_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = f_19;
            {
              ATerm k_19 = t;
              int l_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(l_19);
                }
              else
                {
                  t = k_19;
                  {
                    ATerm t_19 = t;
                    int u_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(u_19);
                      }
                    else
                      {
                        t = t_19;
                        {
                          ATerm v_19 = t;
                          int w_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(w_19);
                            }
                          else
                            {
                              t = v_19;
                              {
                                ATerm h_20 = t;
                                int j_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(j_20);
                                  }
                                else
                                  {
                                    t = h_20;
                                    {
                                      ATerm k_20 = t;
                                      int l_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(l_20);
                                        }
                                      else
                                        {
                                          t = k_20;
                                          {
                                            ATerm m_20 = t;
                                            int n_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(n_20);
                                              }
                                            else
                                              {
                                                t = m_20;
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
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = p_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = y_20;
                  {
                    ATerm a_21 = t;
                    int g_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(g_21);
                      }
                    else
                      {
                        t = a_21;
                        {
                          ATerm i_21 = t;
                          int j_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(j_21);
                            }
                          else
                            {
                              t = i_21;
                              {
                                ATerm k_21 = t;
                                int l_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(l_21);
                                  }
                                else
                                  {
                                    t = k_21;
                                    {
                                      ATerm m_21 = t;
                                      int p_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(p_21);
                                        }
                                      else
                                        {
                                          t = m_21;
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
ATerm repeat_2 (ATerm t, ATerm m_112 (ATerm), ATerm n_112 (ATerm))
{
  ATerm q_64 (ATerm t)
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_112(t);
        t = q_64(t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = n_112(t);
      }
    return(t);
  }
  t = q_64(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_112 (ATerm))
{
  t = repeat_2(t, p_112, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm m_96 (ATerm))
{
  ATerm r_64 (ATerm t)
  {
    t = m_96(t);
    {
      t = _all(t, r_64);
      t = m_96(t);
    }
    return(t);
  }
  t = r_64(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      ATerm s_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(x_21);
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
ATerm SDef_3 (ATerm t, ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm))
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL;
  z_64 = t;
  y_64 :
  if(match_cons(z_64, sym_SDef_3))
    {
      a_65 = ATgetArgument(z_64, 0);
      b_65 = ATgetArgument(z_64, 1);
      c_65 = ATgetArgument(z_64, 2);
      {
        ATerm q_65 = NULL,s_65 = NULL;
        ATerm r_65 = NULL;
        t = SSLgetAnnotations(not_null(z_64));
        {
          r_65 = t;
          if(((q_65 != NULL) && (q_65 != r_65)))
            _fail(r_65);
          else
            q_65 = r_65;
        }
        {
          t = not_null(a_65);
          {
            ATerm u_65 = NULL;
            t = w_84(t);
            {
              s_65 = t;
              {
                t = not_null(b_65);
                {
                  ATerm w_65 = NULL;
                  t = x_84(t);
                  {
                    u_65 = t;
                    {
                      t = not_null(c_65);
                      {
                        ATerm d_66 = NULL;
                        t = y_84(t);
                        {
                          w_65 = t;
                          {
                            ATerm e_66 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_65), not_null(u_65), not_null(w_65)), not_null(q_65));
                            {
                              e_66 = t;
                              if(((d_66 != NULL) && (d_66 != e_66)))
                                _fail(e_66);
                              else
                                d_66 = e_66;
                            }
                            t = not_null(d_66);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm q_66 = NULL,w_66 = NULL;
  q_66 = t;
  p_66 :
  if(match_cons(q_66, sym_Strategies_1))
    {
      w_66 = ATgetArgument(q_66, 0);
      {
        ATerm z_66 = NULL,b_67 = NULL;
        ATerm a_67 = NULL;
        t = SSLgetAnnotations(not_null(q_66));
        {
          a_67 = t;
          if(((z_66 != NULL) && (z_66 != a_67)))
            _fail(a_67);
          else
            z_66 = a_67;
        }
        {
          t = not_null(w_66);
          {
            ATerm d_67 = NULL;
            t = a_86(t);
            {
              b_67 = t;
              {
                ATerm i_67 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_67)), not_null(z_66));
                {
                  i_67 = t;
                  if(((d_67 != NULL) && (d_67 != i_67)))
                    _fail(i_67);
                  else
                    d_67 = i_67;
                }
                t = not_null(d_67);
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
ATerm Specification_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm s_67 = NULL,t_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_cons(s_67, sym_Specification_1))
    {
      t_67 = ATgetArgument(s_67, 0);
      {
        ATerm w_67 = NULL,y_67 = NULL;
        ATerm x_67 = NULL;
        t = SSLgetAnnotations(not_null(s_67));
        {
          x_67 = t;
          if(((w_67 != NULL) && (w_67 != x_67)))
            _fail(x_67);
          else
            w_67 = x_67;
        }
        {
          t = not_null(t_67);
          {
            ATerm b_68 = NULL;
            t = c_86(t);
            {
              y_67 = t;
              {
                ATerm c_68 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_67)), not_null(w_67));
                {
                  c_68 = t;
                  if(((b_68 != NULL) && (b_68 != c_68)))
                    _fail(c_68);
                  else
                    b_68 = c_68;
                }
                t = not_null(b_68);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm o_94 (ATerm))
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
            t = SDef_3(t, _id, _id, o_94);
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
ATerm _2 (ATerm t, ATerm x_81 (ATerm), ATerm y_81 (ATerm))
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym__2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      {
        ATerm t_68 = NULL,y_68 = NULL;
        ATerm u_68 = NULL;
        t = SSLgetAnnotations(not_null(n_68));
        {
          u_68 = t;
          if(((t_68 != NULL) && (t_68 != u_68)))
            _fail(u_68);
          else
            t_68 = u_68;
        }
        {
          t = not_null(o_68);
          {
            ATerm a_69 = NULL;
            t = x_81(t);
            {
              y_68 = t;
              {
                t = not_null(p_68);
                {
                  ATerm c_69 = NULL;
                  t = y_81(t);
                  {
                    a_69 = t;
                    {
                      ATerm d_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_68), not_null(a_69)), not_null(t_68));
                      {
                        d_69 = t;
                        if(((c_69 != NULL) && (c_69 != d_69)))
                          _fail(d_69);
                        else
                          c_69 = d_69;
                      }
                      t = not_null(c_69);
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
  ATerm l_69 = NULL;
  ATerm y_21;
  y_21 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm m_69 = NULL,n_69 = NULL;
      m_69 = t;
      k_69 :
      if(match_cons(m_69, sym_Program_1))
        {
          n_69 = ATgetArgument(m_69, 0);
          if(((l_69 != NULL) && (l_69 != n_69)))
            _fail(n_69);
          else
            l_69 = n_69;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, k_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_22), not_null(l_69)), term_a_22));
      {
        t = printnl_0(t);
        {
          t = term_g_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  r_69 = t;
  q_69 :
  if(match_cons(r_69, sym__2))
    {
      s_69 = ATgetArgument(r_69, 0);
      t_69 = ATgetArgument(r_69, 1);
      {
        ATerm h_22;
        h_22 = t;
        t = SSL_printnl(not_null(s_69), not_null(t_69));
        t = h_22;
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
  ATerm y_69 = NULL;
  y_69 = t;
  t = SSL_implode_string(not_null(y_69));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = i_22;
      {
        ATerm d_70 = NULL,e_70 = NULL,m_70 = NULL;
        d_70 = t;
        c_70 :
        if(((ATgetType(d_70) == AT_LIST) && !(ATisEmpty(d_70))))
          {
            e_70 = ATgetFirst((ATermList) d_70);
            m_70 = (ATerm) ATgetNext((ATermList) d_70);
            {
              t = not_null(e_70);
              {
                ATerm l_2 (ATerm t)
                {
                  t = not_null(m_70);
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
  ATerm w_70 = NULL;
  ATerm y_70 = NULL;
  w_70 = t;
  {
    ATerm z_70 = NULL;
    ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
    t = not_null(w_70);
    {
      z_70 = t;
      {
        t = SSL_explode_term(not_null(z_70));
        {
          b_71 = t;
          u_70 :
          if(match_cons(b_71, sym__2))
            {
              c_71 = ATgetArgument(b_71, 0);
              d_71 = ATgetArgument(b_71, 1);
              v_70 :
              if(match_string(c_71, ""))
                {
                  if(((y_70 != NULL) && (y_70 != d_71)))
                    _fail(d_71);
                  else
                    y_70 = d_71;
                }
              else
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
      t = not_null(y_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_103 (ATerm))
{
  ATerm h_71 (ATerm t)
  {
    ATerm o_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_71);
        LocalPopChoice(q_22);
      }
    else
      {
        t = o_22;
        {
          t = Nil_0(t);
          t = g_103(t);
        }
      }
    return(t);
  }
  t = h_71(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,w_71 = NULL;
  k_71 = t;
  j_71 :
  if(match_cons(k_71, sym__2))
    {
      l_71 = ATgetArgument(k_71, 0);
      w_71 = ATgetArgument(k_71, 1);
      {
        t = not_null(l_71);
        {
          ATerm m_2 (ATerm t)
          {
            t = not_null(w_71);
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
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_73 = NULL;
  c_73 = t;
  t = SSL_explode_string(not_null(c_73));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm t_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(y_22);
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
ATerm debug_1 (ATerm t, ATerm y_116 (ATerm))
{
  ATerm z_22;
  z_22 = t;
  {
    ATerm n_74 = NULL,p_74 = NULL;
    ATerm a_23;
    a_23 = t;
    {
      ATerm o_74 = NULL;
      t = y_116(t);
      {
        o_74 = t;
        if(((n_74 != NULL) && (n_74 != o_74)))
          _fail(o_74);
        else
          n_74 = o_74;
      }
    }
    t = a_23;
    {
      ATerm q_74 = NULL;
      q_74 = t;
      if(((p_74 != NULL) && (p_74 != q_74)))
        _fail(q_74);
      else
        p_74 = q_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_74)), not_null(n_74)));
        t = printnl_0(t);
      }
    }
  }
  t = z_22;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_74 = NULL;
  u_74 = t;
  t = SSL_is_string(not_null(u_74));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = c_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, n_2);
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
              d_75 = t;
              c_75 :
              if(match_cons(d_75, sym_Path_1))
                {
                  e_75 = ATgetArgument(d_75, 0);
                  t = not_null(e_75);
                }
              else
                {
                  if(match_cons(d_75, sym_Var_1))
                    {
                      e_75 = ATgetArgument(d_75, 0);
                      {
                        t = not_null(e_75);
                        {
                          ATerm p_23 = t;
                          int q_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_23);
                            }
                          else
                            {
                              t = p_23;
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  t = term_s_23;
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
                      if(match_cons(d_75, sym_Prefix_2))
                        {
                          e_75 = ATgetArgument(d_75, 0);
                          f_75 = ATgetArgument(d_75, 1);
                          {
                            ATerm k_75 = NULL,m_75 = NULL;
                            ATerm t_23;
                            t_23 = t;
                            {
                              ATerm l_75 = NULL;
                              t = not_null(e_75);
                              {
                                t = eval_config_0(t);
                                {
                                  l_75 = t;
                                  if(((k_75 != NULL) && (k_75 != l_75)))
                                    _fail(l_75);
                                  else
                                    k_75 = l_75;
                                }
                              }
                            }
                            t = t_23;
                            {
                              ATerm n_75 = NULL;
                              t = not_null(f_75);
                              {
                                t = eval_config_0(t);
                                {
                                  n_75 = t;
                                  if(((m_75 != NULL) && (m_75 != n_75)))
                                    _fail(n_75);
                                  else
                                    m_75 = n_75;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_75), not_null(m_75));
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
  ATerm i_76 = NULL;
  i_76 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_23, not_null(i_76));
    {
      t = table_get_0(t);
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm f_24;
              f_24 = t;
              {
                ATerm k_76 = NULL;
                ATerm l_76 = NULL;
                l_76 = t;
                if(((k_76 != NULL) && (k_76 != l_76)))
                  _fail(l_76);
                else
                  k_76 = l_76;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_v_23, not_null(i_76), not_null(k_76));
                  t = table_put_0(t);
                }
              }
              t = f_24;
            }
            LocalPopChoice(e_24);
          }
        else
          {
            t = d_24;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_119 (ATerm))
{
  ATerm j_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_24;
      v_24 = t;
      {
        ATerm p_76 = NULL;
        ATerm q_76 = NULL;
        t = term_w_24;
        {
          t = get_config_0(t);
          {
            q_76 = t;
            if(((p_76 != NULL) && (p_76 != q_76)))
              _fail(q_76);
            else
              p_76 = q_76;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), term_x_24);
          t = geq_0(t);
        }
      }
      t = v_24;
      t = v_119(t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = j_24;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,q_79 = NULL;
  g_77 = t;
  u_76 :
  if(match_cons(g_77, sym__2))
    {
      h_77 = ATgetArgument(g_77, 0);
      q_79 = ATgetArgument(g_77, 1);
      t = SSL_WriteToTextFile(not_null(h_77), not_null(q_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
  w_79 = t;
  v_79 :
  if(match_cons(w_79, sym__2))
    {
      x_79 = ATgetArgument(w_79, 0);
      y_79 = ATgetArgument(w_79, 1);
      t = SSL_WriteToBinaryFile(not_null(x_79), not_null(y_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_80 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm h_80 = NULL,i_80 = NULL;
            h_80 = t;
            d_80 :
            if(match_cons(h_80, sym_Output_1))
              {
                i_80 = ATgetArgument(h_80, 0);
                if(((g_80 != NULL) && (g_80 != i_80)))
                  _fail(i_80);
                else
                  g_80 = i_80;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, q_2);
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          {
            ATerm j_80 = NULL;
            t = term_b_25;
            {
              j_80 = t;
              if(((g_80 != NULL) && (g_80 != j_80)))
                _fail(j_80);
              else
                g_80 = j_80;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = y_24;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(g_80);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm j_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm k_80 = NULL;
              k_80 = t;
              f_80 :
              if(!(match_cons(k_80, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          LocalPopChoice(l_25);
        }
      else
        {
          t = j_25;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_118 (ATerm))
{
  ATerm q_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL;
  ATerm n_25;
  n_25 = t;
  t = dtime_0(t);
  t = n_25;
  {
    t = c_118(t);
    {
      ATerm p_25;
      p_25 = t;
      {
        ATerm r_80 = NULL;
        t = dtime_0(t);
        {
          r_80 = t;
          if(((q_80 != NULL) && (q_80 != r_80)))
            _fail(r_80);
          else
            q_80 = r_80;
        }
      }
      t = p_25;
      {
        s_80 = t;
        p_80 :
        if(match_cons(s_80, sym__2))
          {
            t_80 = ATgetArgument(s_80, 0);
            u_80 = ATgetArgument(s_80, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_80))), not_null(u_80));
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
  ATerm a_81 = NULL;
  a_81 = t;
  t = SSL_ReadFromFile(not_null(a_81));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_100 (ATerm), ATerm e_100 (ATerm))
{
  ATerm f_81 = NULL,h_81 = NULL;
  ATerm q_25;
  q_25 = t;
  {
    ATerm g_81 = NULL;
    t = d_100(t);
    {
      g_81 = t;
      if(((f_81 != NULL) && (f_81 != g_81)))
        _fail(g_81);
      else
        f_81 = g_81;
    }
  }
  t = q_25;
  {
    ATerm i_81 = NULL;
    t = e_100(t);
    {
      i_81 = t;
      if(((h_81 != NULL) && (h_81 != i_81)))
        _fail(i_81);
      else
        h_81 = i_81;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_81), not_null(h_81));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_81 = NULL;
  ATerm s_25;
  s_25 = t;
  {
    ATerm t_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 (ATerm t)
        {
          ATerm p_81 = NULL,q_81 = NULL;
          p_81 = t;
          m_81 :
          if(match_cons(p_81, sym_Input_1))
            {
              q_81 = ATgetArgument(p_81, 0);
              if(((o_81 != NULL) && (o_81 != q_81)))
                _fail(q_81);
              else
                o_81 = q_81;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, v_2);
        LocalPopChoice(y_25);
      }
    else
      {
        t = t_25;
        {
          ATerm r_81 = NULL;
          t = term_z_25;
          {
            r_81 = t;
            if(((o_81 != NULL) && (o_81 != r_81)))
              _fail(r_81);
            else
              o_81 = r_81;
          }
        }
      }
  }
  t = s_25;
  {
    ATerm w_2 (ATerm t)
    {
      t = not_null(o_81);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_2);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_81 = NULL;
  v_81 = t;
  t = SSL_string_to_int(not_null(v_81));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL;
  f_82 = t;
  d_82 :
  if(match_string(f_82, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(f_82) == AT_LIST) && !(ATisEmpty(f_82))))
        {
          g_82 = ATgetFirst((ATermList) f_82);
          h_82 = (ATerm) ATgetNext((ATermList) f_82);
          e_82 :
          if(((ATgetType(h_82) == AT_LIST) && !(ATisEmpty(h_82))))
            {
              i_82 = ATgetFirst((ATermList) h_82);
              j_82 = (ATerm) ATgetNext((ATermList) h_82);
              {
                ATerm n_82 = NULL;
                ATerm b_26;
                b_26 = t;
                {
                  t = not_null(g_82);
                  t = l_0(t);
                }
                t = b_26;
                {
                  ATerm o_82 = NULL;
                  t = not_null(i_82);
                  {
                    t = n_0(t);
                    {
                      o_82 = t;
                      if(((n_82 != NULL) && (n_82 != o_82)))
                        _fail(o_82);
                      else
                        n_82 = o_82;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_82)), not_null(n_82));
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
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm l_83 = NULL;
        l_83 = t;
        s_82 :
        if(!(match_string(l_83, "-i")))
          {
            if(!(match_string(l_83, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        ATerm o_83 = NULL;
        ATerm e_26;
        e_26 = t;
        {
          ATerm m_83 = NULL;
          ATerm n_83 = NULL;
          n_83 = t;
          if(((m_83 != NULL) && (m_83 != n_83)))
            _fail(n_83);
          else
            m_83 = n_83;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_26, not_null(m_83));
            t = set_config_0(t);
          }
        }
        t = e_26;
        {
          ATerm p_83 = NULL;
          p_83 = t;
          if(((o_83 != NULL) && (o_83 != p_83)))
            _fail(p_83);
          else
            o_83 = p_83;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_83));
        }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_g_26;
        return(t);
      }
      t = ArgOption_3(t, x_2, y_2, z_2);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm s_83 = NULL;
              s_83 = t;
              v_82 :
              if(!(match_string(s_83, "-o")))
                {
                  if(!(match_string(s_83, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm v_83 = NULL;
              ATerm j_26;
              j_26 = t;
              {
                ATerm t_83 = NULL;
                ATerm u_83 = NULL;
                u_83 = t;
                if(((t_83 != NULL) && (t_83 != u_83)))
                  _fail(u_83);
                else
                  t_83 = u_83;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(t_83));
                  t = set_config_0(t);
                }
              }
              t = j_26;
              {
                ATerm w_83 = NULL;
                w_83 = t;
                if(((v_83 != NULL) && (v_83 != w_83)))
                  _fail(w_83);
                else
                  v_83 = w_83;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_83));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_o_26;
              return(t);
            }
            t = ArgOption_3(t, a_3, b_3, c_3);
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            {
              ATerm p_26 = t;
              int t_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm x_83 = NULL;
                    x_83 = t;
                    y_82 :
                    if(!(match_string(x_83, "-S")))
                      {
                        if(!(match_string(x_83, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_3 (ATerm t)
                  {
                    t = term_x_26;
                    t = set_config_0(t);
                    t = term_b_27;
                    return(t);
                  }
                  ATerm f_3 (ATerm t)
                  {
                    t = term_e_27;
                    return(t);
                  }
                  t = Option_3(t, d_3, e_3, f_3);
                  LocalPopChoice(t_26);
                }
              else
                {
                  t = p_26;
                  {
                    ATerm f_27 = t;
                    int g_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_3 (ATerm t)
                        {
                          ATerm y_83 = NULL;
                          y_83 = t;
                          z_82 :
                          if(!(match_string(y_83, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_3 (ATerm t)
                        {
                          ATerm b_84 = NULL;
                          ATerm h_27;
                          h_27 = t;
                          {
                            ATerm z_83 = NULL;
                            ATerm a_84 = NULL;
                            t = string_to_int_0(t);
                            {
                              a_84 = t;
                              if(((z_83 != NULL) && (z_83 != a_84)))
                                _fail(a_84);
                              else
                                z_83 = a_84;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_24, not_null(z_83));
                              t = set_config_0(t);
                            }
                          }
                          t = h_27;
                          {
                            ATerm c_84 = NULL;
                            c_84 = t;
                            if(((b_84 != NULL) && (b_84 != c_84)))
                              _fail(c_84);
                            else
                              b_84 = c_84;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_84));
                          }
                          return(t);
                        }
                        ATerm i_3 (ATerm t)
                        {
                          t = term_i_27;
                          return(t);
                        }
                        t = ArgOption_3(t, g_3, h_3, i_3);
                        LocalPopChoice(g_27);
                      }
                    else
                      {
                        t = f_27;
                        {
                          ATerm j_27 = t;
                          int k_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_3 (ATerm t)
                              {
                                ATerm d_84 = NULL;
                                d_84 = t;
                                c_83 :
                                if(!(match_string(d_84, "-k")))
                                  {
                                    if(!(match_string(d_84, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm l_3 (ATerm t)
                              {
                                ATerm l_27;
                                l_27 = t;
                                {
                                  ATerm e_84 = NULL;
                                  ATerm f_84 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    f_84 = t;
                                    if(((e_84 != NULL) && (e_84 != f_84)))
                                      _fail(f_84);
                                    else
                                      e_84 = f_84;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_27, not_null(e_84));
                                    t = set_config_0(t);
                                  }
                                }
                                t = l_27;
                                return(t);
                              }
                              ATerm m_3 (ATerm t)
                              {
                                t = term_n_27;
                                return(t);
                              }
                              t = ArgOption_3(t, k_3, l_3, m_3);
                              LocalPopChoice(k_27);
                            }
                          else
                            {
                              t = j_27;
                              {
                                ATerm o_27 = t;
                                int p_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_3 (ATerm t)
                                    {
                                      ATerm g_84 = NULL;
                                      g_84 = t;
                                      e_83 :
                                      if(!(match_string(g_84, "-v")))
                                        {
                                          if(!(match_string(g_84, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_3 (ATerm t)
                                    {
                                      t = term_s_27;
                                      t = set_config_0(t);
                                      t = term_t_27;
                                      return(t);
                                    }
                                    ATerm p_3 (ATerm t)
                                    {
                                      t = term_u_27;
                                      return(t);
                                    }
                                    t = Option_3(t, n_3, o_3, p_3);
                                    LocalPopChoice(p_27);
                                  }
                                else
                                  {
                                    t = o_27;
                                    {
                                      ATerm v_27 = t;
                                      int w_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_3 (ATerm t)
                                          {
                                            ATerm h_84 = NULL;
                                            h_84 = t;
                                            f_83 :
                                            if(!(match_string(h_84, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_3 (ATerm t)
                                          {
                                            t = term_y_27;
                                            t = set_config_0(t);
                                            t = term_z_27;
                                            return(t);
                                          }
                                          ATerm s_3 (ATerm t)
                                          {
                                            t = term_a_28;
                                            return(t);
                                          }
                                          t = Option_3(t, q_3, r_3, s_3);
                                          LocalPopChoice(w_27);
                                        }
                                      else
                                        {
                                          t = v_27;
                                          {
                                            ATerm t_3 (ATerm t)
                                            {
                                              ATerm i_84 = NULL;
                                              i_84 = t;
                                              k_83 :
                                              if(!(match_string(i_84, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_3 (ATerm t)
                                            {
                                              t = term_n_29;
                                              t = set_config_0(t);
                                              t = term_p_29;
                                              return(t);
                                            }
                                            ATerm v_3 (ATerm t)
                                            {
                                              t = term_q_29;
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
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATempty, term_r_29));
  {
    t = printnl_0(t);
    {
      t = term_g_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_84 = NULL;
  r_84 = t;
  t = SSL_TicksToSeconds(not_null(r_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
  z_84 = t;
  v_84 :
  if(match_cons(z_84, sym__2))
    {
      a_85 = ATgetArgument(z_84, 0);
      b_85 = ATgetArgument(z_84, 1);
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_85), not_null(b_85));
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            t = SSL_addr(not_null(a_85), not_null(b_85));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_107 (ATerm), ATerm g_107 (ATerm))
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_107(t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
        i_85 = t;
        h_85 :
        if(((ATgetType(i_85) == AT_LIST) && !(ATisEmpty(i_85))))
          {
            j_85 = ATgetFirst((ATermList) i_85);
            k_85 = (ATerm) ATgetNext((ATermList) i_85);
            {
              ATerm p_85 = NULL;
              ATerm q_85 = NULL;
              t = not_null(k_85);
              {
                t = foldr_2(t, f_107, g_107);
                {
                  q_85 = t;
                  if(((p_85 != NULL) && (p_85 != q_85)))
                    _fail(q_85);
                  else
                    p_85 = q_85;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_85), not_null(p_85));
                t = g_107(t);
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
ATerm crush_2 (ATerm t, ATerm d_106 (ATerm), ATerm e_106 (ATerm))
{
  ATerm x_85 = NULL;
  ATerm z_85 = NULL;
  x_85 = t;
  {
    ATerm b_86 = NULL;
    ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
    t = not_null(x_85);
    {
      b_86 = t;
      {
        t = SSL_explode_term(not_null(b_86));
        {
          e_86 = t;
          w_85 :
          if(match_cons(e_86, sym__2))
            {
              f_86 = ATgetArgument(e_86, 0);
              g_86 = ATgetArgument(e_86, 1);
              if(((z_85 != NULL) && (z_85 != g_86)))
                _fail(g_86);
              else
                z_85 = g_86;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_85);
      t = foldr_2(t, d_106, e_106);
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
      t = term_w_26;
      return(t);
    }
    t = crush_2(t, w_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
  m_86 = t;
  l_86 :
  if(match_cons(m_86, sym__2))
    {
      n_86 = ATgetArgument(m_86, 0);
      o_86 = ATgetArgument(m_86, 1);
      {
        ATerm f_30;
        f_30 = t;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_86), not_null(o_86));
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              t = SSL_gtr(not_null(n_86), not_null(o_86));
            }
        }
        t = f_30;
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
  ATerm u_86 = NULL;
  ATerm i_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_86 = NULL,x_86 = NULL,y_86 = NULL;
      v_86 = t;
      t_86 :
      if(match_cons(v_86, sym__2))
        {
          x_86 = ATgetArgument(v_86, 0);
          y_86 = ATgetArgument(v_86, 1);
          {
            if(((u_86 != NULL) && (u_86 != x_86)))
              _fail(x_86);
            else
              u_86 = x_86;
            if(((u_86 != NULL) && (u_86 != y_86)))
              _fail(y_86);
            else
              u_86 = y_86;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_30);
    }
  else
    {
      t = i_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_119 (ATerm))
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30;
      q_30 = t;
      {
        ATerm b_87 = NULL;
        ATerm c_87 = NULL;
        t = term_w_24;
        {
          t = get_config_0(t);
          {
            c_87 = t;
            if(((b_87 != NULL) && (b_87 != c_87)))
              _fail(c_87);
            else
              b_87 = c_87;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_87), term_g_22);
          t = geq_0(t);
        }
      }
      t = q_30;
      t = u_119(t);
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
ATerm report_success_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm g_87 = NULL,k_87 = NULL;
    ATerm v_30;
    v_30 = t;
    {
      ATerm j_87 = NULL;
      t = run_time_0(t);
      {
        j_87 = t;
        if(((g_87 != NULL) && (g_87 != j_87)))
          _fail(j_87);
        else
          g_87 = j_87;
      }
    }
    t = v_30;
    {
      ATerm n_87 = NULL;
      t = term_w_30;
      {
        t = get_config_0(t);
        {
          n_87 = t;
          if(((k_87 != NULL) && (k_87 != n_87)))
            _fail(n_87);
          else
            k_87 = n_87;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_30), not_null(g_87)), term_x_30), not_null(k_87)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_4);
  {
    t = term_w_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_87 = NULL;
  u_87 = t;
  t_87 :
  if(match_cons(u_87, sym_Version_0))
    {
      ATerm w_87 = NULL,y_87 = NULL;
      ATerm d_31;
      d_31 = t;
      {
        ATerm x_87 = NULL;
        t = SSLgetAnnotations(not_null(u_87));
        {
          x_87 = t;
          if(((w_87 != NULL) && (w_87 != x_87)))
            _fail(x_87);
          else
            w_87 = x_87;
        }
      }
      t = d_31;
      {
        ATerm z_87 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_87));
        {
          z_87 = t;
          if(((y_87 != NULL) && (y_87 != z_87)))
            _fail(z_87);
          else
            y_87 = z_87;
        }
        t = not_null(y_87);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_118 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_4);
  t = a_118(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_88 = NULL;
  e_88 = t;
  t = SSL_table_create(not_null(e_88));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_88 = NULL;
  i_88 = t;
  {
    ATerm i_31;
    i_31 = t;
    {
      t = term_j_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_k_31, not_null(i_88));
          t = table_put_0(t);
        }
      }
    }
    t = i_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_88 = NULL;
  m_88 = t;
  t = SSL_table_destroy(not_null(m_88));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_88 = NULL;
  q_88 = t;
  t = SSL_exit(not_null(q_88));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL;
  u_88 = t;
  t_88 :
  if(((ATgetType(u_88) == AT_LIST) && ATisEmpty(u_88)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_88) == AT_LIST) && !(ATisEmpty(u_88))))
        {
          v_88 = ATgetFirst((ATermList) u_88);
          w_88 = (ATerm) ATgetNext((ATermList) u_88);
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
  ATerm l_31;
  l_31 = t;
  {
    ATerm z_88 = NULL;
    ATerm c_89 = NULL;
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        {
          ATerm a_89 = NULL;
          ATerm b_89 = NULL;
          b_89 = t;
          if(((a_89 != NULL) && (a_89 != b_89)))
            _fail(b_89);
          else
            a_89 = b_89;
          t = (ATerm) ATinsert(ATempty, not_null(a_89));
        }
      }
    {
      c_89 = t;
      if(((z_88 != NULL) && (z_88 != c_89)))
        _fail(c_89);
      else
        z_88 = c_89;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_25, not_null(z_88));
      t = printnl_0(t);
    }
  }
  t = l_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_121 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_102 (ATerm))
{
  ATerm f_89 (ATerm t)
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = Cons_2(t, r_102, f_89);
      }
    return(t);
  }
  t = f_89(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL;
  o_89 = t;
  l_89 :
  if(((ATgetType(o_89) == AT_LIST) && !(ATisEmpty(o_89))))
    {
      m_89 = ATgetFirst((ATermList) o_89);
      n_89 = (ATerm) ATgetNext((ATermList) o_89);
      {
        ATerm r_89 = NULL;
        t = not_null(n_89);
        {
          ATerm q_31;
          q_31 = t;
          {
            ATerm s_89 = NULL,u_89 = NULL,w_89 = NULL;
            ATerm r_31;
            r_31 = t;
            {
              ATerm t_89 = NULL;
              t = k_0(t);
              {
                t_89 = t;
                if(((s_89 != NULL) && (s_89 != t_89)))
                  _fail(t_89);
                else
                  s_89 = t_89;
              }
            }
            t = r_31;
            {
              ATerm v_89 = NULL;
              t = not_null(m_89);
              {
                t = i_0(t);
                {
                  v_89 = t;
                  if(((u_89 != NULL) && (u_89 != v_89)))
                    _fail(v_89);
                  else
                    u_89 = v_89;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_89)), not_null(u_89));
                {
                  w_89 = t;
                  if(((r_89 != NULL) && (r_89 != w_89)))
                    _fail(w_89);
                  else
                    r_89 = w_89;
                }
              }
            }
          }
          t = q_31;
          {
            ATerm c_4 (ATerm t)
            {
              t = not_null(r_89);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_89) == AT_LIST) && ATisEmpty(o_89)))
        {
          {
            t = term_r_27;
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
ATerm short_description_1 (ATerm t, ATerm x_121 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm h_90 = NULL,i_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym_Program_1))
    {
      i_90 = ATgetArgument(h_90, 0);
      {
        ATerm l_90 = NULL,n_90 = NULL;
        ATerm m_90 = NULL;
        t = SSLgetAnnotations(not_null(h_90));
        {
          m_90 = t;
          if(((l_90 != NULL) && (l_90 != m_90)))
            _fail(m_90);
          else
            l_90 = m_90;
        }
        {
          t = not_null(i_90);
          {
            ATerm p_90 = NULL;
            t = d_94(t);
            {
              n_90 = t;
              {
                ATerm q_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_90)), not_null(l_90));
                {
                  q_90 = t;
                  if(((p_90 != NULL) && (p_90 != q_90)))
                    _fail(q_90);
                  else
                    p_90 = q_90;
                }
                t = not_null(p_90);
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
  ATerm y_90 = NULL;
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_90 = NULL;
      t = term_w_30;
      {
        t = get_config_0(t);
        {
          z_90 = t;
          if(((y_90 != NULL) && (y_90 != z_90)))
            _fail(z_90);
          else
            y_90 = z_90;
        }
      }
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm a_91 = NULL;
            a_91 = t;
            if(((y_90 != NULL) && (y_90 != a_91)))
              _fail(a_91);
            else
              y_90 = a_91;
            return(t);
          }
          t = Program_1(t, f_4);
          return(t);
        }
        t = fetch_1(t, e_4);
      }
    }
  {
    t = term_b_32;
    {
      t = echo_0(t);
      {
        t = term_e_32;
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
                ATerm b_91 = NULL;
                ATerm c_91 = NULL;
                c_91 = t;
                if(((b_91 != NULL) && (b_91 != c_91)))
                  _fail(c_91);
                else
                  b_91 = c_91;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_91)), term_f_32);
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
  ATerm g_32;
  g_32 = t;
  {
    ATerm h_91 = NULL;
    ATerm i_91 = NULL;
    i_91 = t;
    if(((h_91 != NULL) && (h_91 != i_91)))
      _fail(i_91);
    else
      h_91 = i_91;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATempty, not_null(h_91)));
      t = printnl_0(t);
    }
  }
  t = g_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_116 (ATerm))
{
  ATerm h_32;
  h_32 = t;
  {
    t = z_116(t);
    t = debug_0(t);
  }
  t = h_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm p_91 = NULL,q_91 = NULL;
  p_91 = t;
  o_91 :
  if(match_cons(p_91, sym_Undefined_1))
    {
      q_91 = ATgetArgument(p_91, 0);
      {
        ATerm t_91 = NULL,v_91 = NULL;
        ATerm u_91 = NULL;
        t = SSLgetAnnotations(not_null(p_91));
        {
          u_91 = t;
          if(((t_91 != NULL) && (t_91 != u_91)))
            _fail(u_91);
          else
            t_91 = u_91;
        }
        {
          t = not_null(q_91);
          {
            ATerm x_91 = NULL;
            t = e_94(t);
            {
              v_91 = t;
              {
                ATerm y_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_91)), not_null(t_91));
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
ATerm fetch_1 (ATerm t, ATerm a_103 (ATerm))
{
  ATerm d_92 (ATerm t)
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_103, _id);
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = Cons_2(t, _id, d_92);
      }
    return(t);
  }
  t = d_92(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_120 (ATerm))
{
  t = fetch_1(t, x_120);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  h_92 :
  if(match_cons(i_92, sym_Help_0))
    {
      ATerm k_92 = NULL,m_92 = NULL;
      ATerm k_32;
      k_32 = t;
      {
        ATerm l_92 = NULL;
        t = SSLgetAnnotations(not_null(i_92));
        {
          l_92 = t;
          if(((k_92 != NULL) && (k_92 != l_92)))
            _fail(l_92);
          else
            k_92 = l_92;
        }
      }
      t = k_32;
      {
        ATerm n_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_92));
        {
          n_92 = t;
          if(((m_92 != NULL) && (m_92 != n_92)))
            _fail(n_92);
          else
            m_92 = n_92;
        }
        t = not_null(m_92);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_99 (ATerm))
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_99(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  s_92 :
  if(match_cons(t_92, sym__2))
    {
      u_92 = ATgetArgument(t_92, 0);
      v_92 = ATgetArgument(t_92, 1);
      t = SSL_table_get(not_null(u_92), not_null(v_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  c_93 = t;
  b_93 :
  if(match_cons(c_93, sym__3))
    {
      d_93 = ATgetArgument(c_93, 0);
      e_93 = ATgetArgument(c_93, 1);
      f_93 = ATgetArgument(c_93, 2);
      {
        ATerm n_32;
        n_32 = t;
        {
          ATerm j_93 = NULL;
          ATerm k_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_93), not_null(e_93));
          {
            ATerm o_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_32);
              }
            else
              {
                t = o_32;
                t = (ATerm) ATempty;
              }
            {
              k_93 = t;
              if(((j_93 != NULL) && (j_93 != k_93)))
                _fail(k_93);
              else
                j_93 = k_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_93), not_null(e_93), (ATerm) ATinsert(CheckATermList(not_null(j_93)), not_null(f_93)));
            t = table_put_0(t);
          }
        }
        t = n_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_122 (ATerm))
{
  ATerm o_93 = NULL;
  ATerm p_93 = NULL;
  t = term_r_27;
  {
    t = c_122(t);
    {
      p_93 = t;
      if(((o_93 != NULL) && (o_93 != p_93)))
        _fail(p_93);
      else
        o_93 = p_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_32, term_d_32, not_null(o_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  v_93 = t;
  u_93 :
  if(match_string(v_93, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_93) == AT_LIST) && !(ATisEmpty(v_93))))
        {
          w_93 = ATgetFirst((ATermList) v_93);
          x_93 = (ATerm) ATgetNext((ATermList) v_93);
          {
            ATerm a_94 = NULL;
            ATerm s_32;
            s_32 = t;
            {
              t = not_null(w_93);
              t = a_0(t);
            }
            t = s_32;
            {
              ATerm b_94 = NULL;
              t = term_r_27;
              {
                t = d_0(t);
                {
                  b_94 = t;
                  if(((a_94 != NULL) && (a_94 != b_94)))
                    _fail(b_94);
                  else
                    a_94 = b_94;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_93)), not_null(a_94));
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
    ATerm i_94 = NULL;
    i_94 = t;
    h_94 :
    if(!(match_string(i_94, "--help")))
      {
        if(!(match_string(i_94, "-h")))
          {
            if(!(match_string(i_94, "-?")))
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
      t = term_z_32;
    }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_a_33;
    return(t);
  }
  t = Option_3(t, i_4, j_4, l_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL;
  l_94 = t;
  k_94 :
  if(((ATgetType(l_94) == AT_LIST) && !(ATisEmpty(l_94))))
    {
      m_94 = ATgetFirst((ATermList) l_94);
      n_94 = (ATerm) ATgetNext((ATermList) l_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
  z_94 = t;
  y_94 :
  if(((ATgetType(z_94) == AT_LIST) && !(ATisEmpty(z_94))))
    {
      a_95 = ATgetFirst((ATermList) z_94);
      b_95 = (ATerm) ATgetNext((ATermList) z_94);
      {
        ATerm f_95 = NULL,h_95 = NULL;
        ATerm g_95 = NULL;
        t = SSLgetAnnotations(not_null(z_94));
        {
          g_95 = t;
          if(((f_95 != NULL) && (f_95 != g_95)))
            _fail(g_95);
          else
            f_95 = g_95;
        }
        {
          t = not_null(a_95);
          {
            ATerm j_95 = NULL;
            t = g_83(t);
            {
              h_95 = t;
              {
                t = not_null(b_95);
                {
                  ATerm o_95 = NULL;
                  t = h_83(t);
                  {
                    j_95 = t;
                    {
                      ATerm p_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_95)), not_null(h_95)), not_null(f_95));
                      {
                        p_95 = t;
                        if(((o_95 != NULL) && (o_95 != p_95)))
                          _fail(p_95);
                        else
                          o_95 = p_95;
                      }
                      t = not_null(o_95);
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
  ATerm c_96 = NULL;
  c_96 = t;
  b_96 :
  if(((ATgetType(c_96) == AT_LIST) && ATisEmpty(c_96)))
    {
      {
        ATerm e_96 = NULL,g_96 = NULL;
        ATerm x_33;
        x_33 = t;
        {
          ATerm f_96 = NULL;
          t = SSLgetAnnotations(not_null(c_96));
          {
            f_96 = t;
            if(((e_96 != NULL) && (e_96 != f_96)))
              _fail(f_96);
            else
              e_96 = f_96;
          }
        }
        t = x_33;
        {
          ATerm h_96 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_96));
          {
            h_96 = t;
            if(((g_96 != NULL) && (g_96 != h_96)))
              _fail(h_96);
            else
              g_96 = h_96;
          }
          t = not_null(g_96);
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
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
  s_96 = t;
  r_96 :
  if(match_cons(s_96, sym__2))
    {
      t_96 = ATgetArgument(s_96, 0);
      u_96 = ATgetArgument(s_96, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_23, not_null(t_96), not_null(u_96));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_122 (ATerm))
{
  ATerm y_33;
  y_33 = t;
  {
    ATerm z_33 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_34;
        t = a_122(t);
        LocalPopChoice(h_34);
      }
    else
      {
        t = z_33;
        {
        }
      }
  }
  t = y_33;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm c_97 = NULL;
      ATerm j_34;
      j_34 = t;
      {
        ATerm a_97 = NULL;
        ATerm b_97 = NULL;
        b_97 = t;
        if(((a_97 != NULL) && (a_97 != b_97)))
          _fail(b_97);
        else
          a_97 = b_97;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_30, not_null(a_97));
          t = set_config_0(t);
        }
      }
      t = j_34;
      {
        ATerm d_97 = NULL;
        d_97 = t;
        if(((c_97 != NULL) && (c_97 != d_97)))
          _fail(d_97);
        else
          c_97 = d_97;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_97));
      }
      return(t);
    }
    ATerm n_4 (ATerm t)
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              {
                t = a_122(t);
                t = Cons_2(t, _id, n_4);
              }
            }
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
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
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
  ATerm o_34;
  o_34 = t;
  {
    ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL;
    m_97 = t;
    i_97 :
    if(match_cons(m_97, sym__3))
      {
        n_97 = ATgetArgument(m_97, 0);
        o_97 = ATgetArgument(m_97, 1);
        p_97 = ATgetArgument(m_97, 2);
        {
          if(((j_97 != NULL) && (j_97 != n_97)))
            _fail(n_97);
          else
            j_97 = n_97;
          {
            if(((k_97 != NULL) && (k_97 != o_97)))
              _fail(o_97);
            else
              k_97 = o_97;
            {
              if(((l_97 != NULL) && (l_97 != p_97)))
                _fail(p_97);
              else
                l_97 = p_97;
              t = SSL_table_put(not_null(j_97), not_null(k_97), not_null(l_97));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_121 (ATerm))
{
  ATerm s_97 = NULL;
  ATerm p_34;
  p_34 = t;
  {
    t = term_q_34;
    t = table_put_0(t);
  }
  t = p_34;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm r_34 = t;
      int s_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_121(t);
          LocalPopChoice(s_34);
        }
      else
        {
          t = r_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_4);
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_34;
          v_34 = t;
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_32;
                t = get_config_0(t);
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
                t = fetch_1(t, Help_0);
              }
          }
          t = v_34;
          {
            t = system_usage_0(t);
            {
              t = term_w_26;
              t = exit_0(t);
            }
          }
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm y_34 = t;
            int z_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm t_97 = NULL;
                    t_97 = t;
                    if(((s_97 != NULL) && (s_97 != t_97)))
                      _fail(t_97);
                    else
                      s_97 = t_97;
                    return(t);
                  }
                  t = Undefined_1(t, t_4);
                  return(t);
                }
                t = fetch_1(t, p_4);
                {
                  ATerm u_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_97)), term_b_35);
                    return(t);
                  }
                  t = say_1(t, u_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_g_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(z_34);
              }
            else
              {
                t = y_34;
                {
                }
              }
          }
        }
      {
        ATerm c_35;
        c_35 = t;
        {
          t = term_c_32;
          t = table_destroy_0(t);
        }
        t = c_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm))
{
  t = parse_options_1(t, g_118);
  {
    t = store_options_0(t);
    {
      t = i_118(t);
      {
        ATerm d_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_118);
            LocalPopChoice(f_35);
          }
        else
          {
            t = d_35;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_118(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm j_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_118(t);
        LocalPopChoice(n_35);
      }
    else
      {
        t = j_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, x_118);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_4, z_118, a_119, w_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm x_35;
      x_35 = t;
      {
        ATerm w_97 = NULL;
        ATerm x_97 = NULL;
        t = term_w_30;
        {
          t = get_config_0(t);
          {
            x_97 = t;
            if(((w_97 != NULL) && (w_97 != x_97)))
              _fail(x_97);
            else
              w_97 = x_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATempty, not_null(w_97)));
          t = printnl_0(t);
        }
      }
      t = x_35;
      return(t);
    }
    t = if_verbose2_1(t, z_4);
    return(t);
  }
  t = iowrap_4(t, r_118, s_118, t_118, y_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_118 (ATerm), ATerm q_118 (ATerm))
{
  t = iowrap_3(t, p_118, q_118, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_118 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    t = _2(t, _id, m_118);
    return(t);
  }
  t = iowrap_2(t, a_5, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
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
    t = apply_to_bodies_1(t, c_5);
    return(t);
  }
  t = iowrap_1(t, b_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
