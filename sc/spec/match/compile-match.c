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
ATerm term_o_33;
ATerm term_g_33;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_w_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_p_27;
ATerm term_g_27;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_w_24;
ATerm term_w_23;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_w_15;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_r_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_y_11;
void init_constant_terms (void)
{
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_y_11);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_11);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_i_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_i_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_i_29);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_b_32);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_i_29);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, (ATerm) ATempty);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm l_121 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm));
ATerm Let_2 (ATerm, ATerm n_91 (ATerm), ATerm o_91 (ATerm));
ATerm sboundin_3 (ATerm, ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm k_91 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm h_121 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm s_89 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_92 (ATerm), ATerm q_92 (ATerm));
ATerm tboundin_3 (ATerm, ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_104 (ATerm), ATerm l_104 (ATerm));
ATerm for_3 (ATerm, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm));
ATerm diff_1 (ATerm, ATerm n_110 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm u_107 (ATerm), ATerm v_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm a_108 (ATerm), ATerm b_108 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm o_107 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm t_106 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm y_106 (ATerm));
ATerm rename_4 (ATerm, ATerm c_108 (ATerm, ATerm (ATerm)), ATerm d_108 (ATerm), ATerm e_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_108 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm u_87 (ATerm));
ATerm Call_2 (ATerm, ATerm z_91 (ATerm), ATerm a_92 (ATerm));
ATerm Str_1 (ATerm, ATerm y_0 (ATerm));
ATerm Real_1 (ATerm, ATerm x_0 (ATerm));
ATerm Int_1 (ATerm, ATerm w_0 (ATerm));
ATerm Var_1 (ATerm, ATerm v_0 (ATerm));
ATerm list_1 (ATerm, ATerm t_112 (ATerm));
ATerm Build_1 (ATerm, ATerm m_92 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm o_100 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm c_93 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm e_115 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm w_113 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_108 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm Row_3 (ATerm, ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_100 (ATerm));
ATerm restore_always_2 (ATerm, ATerm j_117 (ATerm), ATerm k_117 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm k_100 (ATerm));
ATerm scope_2 (ATerm, ATerm m_100 (ATerm), ATerm n_100 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
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
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm));
ATerm crush_3 (ATerm, ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm x_110 (ATerm));
ATerm collect_om_1 (ATerm, ATerm m_111 (ATerm));
ATerm collect_1 (ATerm, ATerm o_111 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm));
ATerm union_1 (ATerm, ATerm k_110 (ATerm));
ATerm unions_1 (ATerm, ATerm m_110 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm a_115 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm g_112 (ATerm), ATerm h_112 (ATerm));
ATerm collect_split_2 (ATerm, ATerm d_112 (ATerm), ATerm e_112 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm j_122 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm b_115 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_117 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm t_103 (ATerm), ATerm u_103 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_103 (ATerm));
ATerm downup_1 (ATerm, ATerm n_117 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
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
ATerm spaste_1 (ATerm t, ATerm l_121 (ATerm))
{
  ATerm d_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_0 (ATerm t)
      {
        t = split_2(t, _id, l_121);
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
      LocalPopChoice(f_7);
    }
  else
    {
      t = d_7;
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, l_121);
              {
                ATerm m_0 (ATerm t)
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
                t = zip_1(t, m_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, f_0, _id);
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            {
              ATerm n_0 (ATerm t)
              {
                t = l_121(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, n_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm))
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
            t = l_91(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = m_91(t);
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
ATerm Let_2 (ATerm t, ATerm n_91 (ATerm), ATerm o_91 (ATerm))
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
            t = n_91(t);
            {
              p_10 = t;
              {
                t = not_null(j_10);
                {
                  ATerm t_10 = NULL;
                  t = o_91(t);
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
ATerm sboundin_3 (ATerm t, ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm))
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, m_121, m_121);
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, o_121, o_121, m_121);
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
            t = Rec_2(t, o_121, m_121);
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
          ATerm o_0 (ATerm t)
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
          t = map_1(t, o_0);
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
          ATerm p_0 (ATerm t)
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
          t = map_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm k_91 (ATerm))
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
            t = k_91(t);
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
  ATerm q_0 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
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
              t = Bind2_0(t);
              LocalPopChoice(p_7);
            }
          else
            {
              t = o_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm h_121 (ATerm))
{
  t = Scope_2(t, h_121, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm s_89 (ATerm))
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
            t = s_89(t);
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
ATerm Scope_2 (ATerm t, ATerm p_92 (ATerm), ATerm q_92 (ATerm))
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
            t = p_92(t);
            {
              r_14 = t;
              {
                t = not_null(l_14);
                {
                  ATerm v_14 = NULL;
                  t = q_92(t);
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
ATerm tboundin_3 (ATerm t, ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm))
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, k_121, i_121);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      t = DynamicRules_1(t, i_121);
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
            ATerm t_7;
            t_7 = t;
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
            t = t_7;
            {
              ATerm v_7;
              v_7 = t;
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
              t = v_7;
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
ATerm while_not_2 (ATerm t, ATerm k_104 (ATerm), ATerm l_104 (ATerm))
{
  ATerm y_17 (ATerm t)
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_104(t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        {
          t = l_104(t);
          t = y_17(t);
        }
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm))
{
  t = n_104(t);
  t = while_not_2(t, o_104, p_104);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym__2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      {
        t = not_null(c_18);
        {
          ATerm h_18 (ATerm t)
          {
            ATerm y_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(z_7);
              }
            else
              {
                t = y_7;
                {
                  ATerm a_8 = t;
                  int b_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(d_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_110, r_0);
                      t = h_18(t);
                      LocalPopChoice(b_8);
                    }
                  else
                    {
                      t = a_8;
                      t = Cons_2(t, _id, h_18);
                    }
                }
              }
            return(t);
          }
          t = h_18(t);
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
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm j_18 = NULL;
          j_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_18));
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          ATerm e_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_1 (ATerm t)
              {
                ATerm j_8 = t;
                int k_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(k_8);
                  }
                else
                  {
                    t = j_8;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, b_1);
              LocalPopChoice(i_8);
            }
          else
            {
              t = e_8;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, s_0, z_0, a_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm p_18 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm r_8 = t;
          int x_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_18 = NULL;
              ATerm y_8;
              y_8 = t;
              {
                ATerm o_18 = NULL;
                t = z_105(t);
                {
                  o_18 = t;
                  if(((n_18 != NULL) && (n_18 != o_18)))
                    _fail(o_18);
                  else
                    n_18 = o_18;
                }
              }
              t = y_8;
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
                t = a_106(t, c_1, p_18, d_1);
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, f_1, union_0, _id);
                }
              }
              LocalPopChoice(x_8);
            }
          else
            {
              t = r_8;
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
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
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
ATerm DistBinding_2 (ATerm t, ATerm u_107 (ATerm), ATerm v_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
              t = u_107(t);
            }
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            ATerm v_19 = NULL;
            v_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(o_19));
              t = u_107(t);
            }
            return(t);
          }
          t = v_107(t, i_1, j_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm a_108 (ATerm), ATerm b_108 (ATerm, ATerm (ATerm)))
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
        ATerm b_9;
        b_9 = t;
        {
          ATerm p_20 = NULL;
          t = not_null(i_20);
          {
            ATerm q_20 = NULL;
            t = a_108(t);
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
        t = b_9;
        {
          ATerm v_20 = NULL;
          t = not_null(i_20);
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(n_20);
              return(t);
            }
            t = b_108(t, k_1);
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
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm o_107 (ATerm, ATerm (ATerm)))
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
          t = o_107(t, l_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm t_106 (ATerm))
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
              t = t_106(t);
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
ATerm env_alltd_1 (ATerm t, ATerm y_106 (ATerm))
{
  ATerm w_22 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_106(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = all_dist_1(t, w_22);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm c_108 (ATerm, ATerm (ATerm)), ATerm d_108 (ATerm), ATerm e_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_108 (ATerm, ATerm (ATerm)))
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
          ATerm g_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, c_108);
              LocalPopChoice(l_9);
            }
          else
            {
              t = g_9;
              {
                t = RnBinding_2(t, d_108, f_108);
                t = DistBinding_2(t, b_23, e_108);
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
ATerm Seqs_1 (ATerm t, ATerm u_87 (ATerm))
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
            t = u_87(t);
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
ATerm Call_2 (ATerm t, ATerm z_91 (ATerm), ATerm a_92 (ATerm))
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
            t = z_91(t);
            {
              l_24 = t;
              {
                t = not_null(f_24);
                {
                  ATerm p_24 = NULL;
                  t = a_92(t);
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
ATerm Str_1 (ATerm t, ATerm y_0 (ATerm))
{
  ATerm f_25 = NULL,g_25 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym_Str_1))
    {
      g_25 = ATgetArgument(f_25, 0);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
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
                t = y_0(t);
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
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
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
                  t = y_0(t);
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
ATerm Real_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_Real_1))
    {
      p_26 = ATgetArgument(o_26, 0);
      {
        ATerm r_9 = t;
        int t_9 = stack_ptr;
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
                t = x_0(t);
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
            LocalPopChoice(t_9);
          }
        else
          {
            t = r_9;
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
                  t = x_0(t);
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
ATerm Int_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Int_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
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
                t = w_0(t);
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
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
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
                  t = w_0(t);
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
ATerm Var_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Var_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
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
                t = v_0(t);
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
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
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
                  t = v_0(t);
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
ATerm list_1 (ATerm t, ATerm t_112 (ATerm))
{
  ATerm g_30 (ATerm t)
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = Cons_2(t, t_112, g_30);
      }
    return(t);
  }
  t = g_30(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm m_92 (ATerm))
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
            t = m_92(t);
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
      ATerm g_31 = NULL,i_32 = NULL;
      ATerm c_10;
      c_10 = t;
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
      t = c_10;
      {
        ATerm j_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(g_31));
        {
          j_32 = t;
          if(((i_32 != NULL) && (i_32 != j_32)))
            _fail(j_32);
          else
            i_32 = j_32;
        }
        t = not_null(i_32);
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
      ATerm d_10;
      d_10 = t;
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
      t = d_10;
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int q_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  LocalPopChoice(q_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm s_10 = t;
                    int v_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_1 (ATerm t)
                        {
                          ATerm w_10 = t;
                          int x_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              LocalPopChoice(x_10);
                            }
                          else
                            {
                              t = w_10;
                              {
                                ATerm y_10 = t;
                                int z_10 = stack_ptr;
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
                                    LocalPopChoice(z_10);
                                  }
                                else
                                  {
                                    t = y_10;
                                    {
                                      ATerm a_11 = t;
                                      int f_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          LocalPopChoice(f_11);
                                        }
                                      else
                                        {
                                          t = a_11;
                                          {
                                            ATerm g_11 = t;
                                            int h_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                LocalPopChoice(h_11);
                                              }
                                            else
                                              {
                                                t = g_11;
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
                        LocalPopChoice(v_10);
                      }
                    else
                      {
                        t = s_10;
                        {
                          ATerm i_11 = t;
                          int j_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              LocalPopChoice(j_11);
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm q_11 = t;
                                int r_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(r_11);
                                  }
                                else
                                  {
                                    t = q_11;
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
        ATerm s_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_34 = NULL;
            ATerm o_34 = NULL;
            t = not_null(k_34);
            {
              ATerm x_11 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = x_11;
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
            LocalPopChoice(w_11);
          }
        else
          {
            t = s_11;
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
  o_36 :
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
              n_36 :
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_36), (ATerm) ATmakeAppl(sym_Let_2, not_null(u_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_y_11))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(v_36)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_100 (ATerm))
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
        ATerm z_11;
        z_11 = t;
        {
          ATerm o_37 = NULL;
          ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
          t = o_100(t);
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
                    ATerm a_12 = t;
                    int g_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), term_h_12);
                        t = table_get_0(t);
                        LocalPopChoice(g_12);
                      }
                    else
                      {
                        t = a_12;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_37), term_h_12, (ATerm) ATinsert(CheckATermList(not_null(n_37)), (ATerm) ATinsert(CheckATermList(not_null(m_37)), not_null(h_37))));
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
        t = z_11;
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
ATerm MatchCons_2 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_Wld_0))
    {
      ATerm o_39 = NULL;
      ATerm s_39 = NULL;
      t = u_0(t);
      {
        ATerm t_1 (ATerm t)
        {
          ATerm p_39 = NULL,q_39 = NULL;
          p_39 = t;
          w_38 :
          if(match_cons(p_39, sym_Var_1))
            {
              q_39 = ATgetArgument(p_39, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(q_39)), term_m_12);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, t_1);
        {
          s_39 = t;
          if(((o_39 != NULL) && (o_39 != s_39)))
            _fail(s_39);
          else
            o_39 = s_39;
        }
      }
      t = not_null(o_39);
    }
  else
    {
      if(match_cons(l_39, sym_Int_1))
        {
          m_39 = ATgetArgument(l_39, 0);
          {
            ATerm v_39 = NULL,w_39 = NULL;
            t = t_0(t);
            {
              v_39 = t;
              a_39 :
              if(match_cons(v_39, sym_Int_1))
                {
                  w_39 = ATgetArgument(v_39, 0);
                  {
                    ATerm x_39 = NULL;
                    if(((m_39 != NULL) && (m_39 != w_39)))
                      _fail(w_39);
                    else
                      m_39 = w_39;
                    {
                      t = u_0(t);
                      {
                        x_39 = t;
                        z_38 :
                        if(((ATermList) x_39 == ATempty))
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
          if(match_cons(l_39, sym_Real_1))
            {
              m_39 = ATgetArgument(l_39, 0);
              {
                ATerm z_39 = NULL,a_40 = NULL;
                t = t_0(t);
                {
                  z_39 = t;
                  d_39 :
                  if(match_cons(z_39, sym_Real_1))
                    {
                      a_40 = ATgetArgument(z_39, 0);
                      {
                        ATerm b_40 = NULL;
                        if(((m_39 != NULL) && (m_39 != a_40)))
                          _fail(a_40);
                        else
                          m_39 = a_40;
                        {
                          t = u_0(t);
                          {
                            b_40 = t;
                            c_39 :
                            if(((ATermList) b_40 == ATempty))
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
              if(match_cons(l_39, sym_Str_1))
                {
                  m_39 = ATgetArgument(l_39, 0);
                  {
                    ATerm d_40 = NULL,e_40 = NULL;
                    t = t_0(t);
                    {
                      d_40 = t;
                      g_39 :
                      if(match_cons(d_40, sym_Str_1))
                        {
                          e_40 = ATgetArgument(d_40, 0);
                          {
                            ATerm f_40 = NULL;
                            if(((m_39 != NULL) && (m_39 != e_40)))
                              _fail(e_40);
                            else
                              m_39 = e_40;
                            {
                              t = u_0(t);
                              {
                                f_40 = t;
                                f_39 :
                                if(((ATermList) f_40 == ATempty))
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
                  if(match_cons(l_39, sym_Op_2))
                    {
                      m_39 = ATgetArgument(l_39, 0);
                      n_39 = ATgetArgument(l_39, 1);
                      {
                        ATerm i_40 = NULL;
                        ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
                        t = t_0(t);
                        {
                          j_40 = t;
                          j_39 :
                          if(match_cons(j_40, sym_Fun_2))
                            {
                              k_40 = ATgetArgument(j_40, 0);
                              l_40 = ATgetArgument(j_40, 1);
                              {
                                ATerm m_40 = NULL;
                                if(((m_39 != NULL) && (m_39 != k_40)))
                                  _fail(k_40);
                                else
                                  m_39 = k_40;
                                {
                                  if(((i_40 != NULL) && (i_40 != l_40)))
                                    _fail(l_40);
                                  else
                                    i_40 = l_40;
                                  {
                                    ATerm w_40 = NULL;
                                    t = not_null(n_39);
                                    {
                                      t = length_0(t);
                                      {
                                        w_40 = t;
                                        if(((m_40 != NULL) && (m_40 != w_40)))
                                          _fail(w_40);
                                        else
                                          m_40 = w_40;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_40), not_null(i_40));
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
                        t = not_null(n_39);
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
ATerm ConsTransition_1 (ATerm t, ATerm c_93 (ATerm))
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  h_42 = t;
  e_42 :
  if(match_cons(h_42, sym_Row_3))
    {
      i_42 = ATgetArgument(h_42, 0);
      u_42 = ATgetArgument(h_42, 1);
      v_42 = ATgetArgument(h_42, 2);
      f_42 :
      if(((ATgetType(i_42) == AT_LIST) && ((ATermList) i_42 != ATempty)))
        {
          j_42 = ATgetFirst((ATermList) i_42);
          t_42 = (ATerm) ATgetNext((ATermList) i_42);
          g_42 :
          if(match_cons(j_42, sym_As_2))
            {
              k_42 = ATgetArgument(j_42, 0);
              l_42 = ATgetArgument(j_42, 1);
              {
                ATerm a_43 = NULL,c_43 = NULL;
                ATerm n_12;
                n_12 = t;
                {
                  ATerm b_43 = NULL;
                  t = not_null(l_42);
                  {
                    t = c_93(t);
                    {
                      b_43 = t;
                      if(((a_43 != NULL) && (a_43 != b_43)))
                        _fail(b_43);
                      else
                        a_43 = b_43;
                    }
                  }
                }
                t = n_12;
                {
                  ATerm d_43 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_43), not_null(u_42));
                  {
                    t = conc_0(t);
                    {
                      d_43 = t;
                      if(((c_43 != NULL) && (c_43 != d_43)))
                        _fail(d_43);
                      else
                        c_43 = d_43;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(t_42), not_null(c_43), not_null(v_42));
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
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
  q_43 = t;
  j_43 :
  if(match_cons(q_43, sym__2))
    {
      r_43 = ATgetArgument(q_43, 0);
      s_43 = ATgetArgument(q_43, 1);
      p_43 :
      if(match_cons(s_43, sym__2))
        {
          t_43 = ATgetArgument(s_43, 0);
          u_43 = ATgetArgument(s_43, 1);
          {
            ATerm y_43 = NULL;
            ATerm z_43 = NULL;
            t = not_null(r_43);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(t_43);
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = not_null(u_43);
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
                z_43 = t;
                if(((y_43 != NULL) && (y_43 != z_43)))
                  _fail(z_43);
                else
                  y_43 = z_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(t_43), not_null(u_43), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(y_43)));
          }
        }
      else
        {
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
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,j_44 = NULL,k_44 = NULL;
  f_44 = t;
  d_44 :
  if(match_cons(f_44, sym__2))
    {
      g_44 = ATgetArgument(f_44, 0);
      h_44 = ATgetArgument(f_44, 1);
      e_44 :
      if(((ATgetType(h_44) == AT_LIST) && ((ATermList) h_44 != ATempty)))
        {
          j_44 = ATgetFirst((ATermList) h_44);
          k_44 = (ATerm) ATgetNext((ATermList) h_44);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_44), not_null(j_44)), (ATerm) ATmakeAppl(sym__2, not_null(g_44), not_null(k_44)));
        }
      else
        {
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
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  q_44 :
  if(match_cons(s_44, sym__2))
    {
      t_44 = ATgetArgument(s_44, 0);
      u_44 = ATgetArgument(s_44, 1);
      r_44 :
      if(((ATermList) u_44 == ATempty))
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
ATerm rzip_1 (ATerm t, ATerm e_115 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, e_115);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  z_44 :
  if(((ATgetType(a_45) == AT_LIST) && ((ATermList) a_45 != ATempty)))
    {
      b_45 = ATgetFirst((ATermList) a_45);
      c_45 = (ATerm) ATgetNext((ATermList) a_45);
      {
        ATerm f_45 = NULL;
        ATerm h_45 = NULL;
        t = not_null(c_45);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm o_12 = t;
            if((PushChoice() == 0))
              {
                ATerm g_45 = NULL;
                g_45 = t;
                if(((b_45 != NULL) && (b_45 != g_45)))
                  _fail(g_45);
                else
                  b_45 = g_45;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_12;
              }
            return(t);
          }
          t = filter_1(t, y_1);
          {
            h_45 = t;
            if(((f_45 != NULL) && (f_45 != h_45)))
              _fail(h_45);
            else
              f_45 = h_45;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(f_45)), not_null(b_45));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm w_113 (ATerm))
{
  ATerm l_45 (ATerm t)
  {
    t = w_113(t);
    {
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          t = Cons_2(t, _id, l_45);
        }
    }
    return(t);
  }
  t = l_45(t);
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
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
    p_45 = t;
    n_45 :
    if(match_cons(p_45, sym_As_2))
      {
        q_45 = ATgetArgument(p_45, 0);
        s_45 = ATgetArgument(p_45, 1);
        o_45 :
        if(match_cons(q_45, sym_Off_1))
          {
            r_45 = ATgetArgument(q_45, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_45));
          }
        else
          {
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
    t = term_y_11;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_r_12;
    return(t);
  }
  t = foldr_3(t, b_2, add_0, c_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  p_46 = t;
  j_46 :
  if(match_cons(p_46, sym_Row_3))
    {
      q_46 = ATgetArgument(p_46, 0);
      x_46 = ATgetArgument(p_46, 1);
      y_46 = ATgetArgument(p_46, 2);
      m_46 :
      if(((ATgetType(q_46) == AT_LIST) && ((ATermList) q_46 != ATempty)))
        {
          r_46 = ATgetFirst((ATermList) q_46);
          w_46 = (ATerm) ATgetNext((ATermList) q_46);
          n_46 :
          if(match_cons(r_46, sym_As_2))
            {
              s_46 = ATgetArgument(r_46, 0);
              t_46 = ATgetArgument(r_46, 1);
              o_46 :
              if(match_cons(t_46, sym_Str_1))
                {
                  u_46 = ATgetArgument(t_46, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(u_46)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(t_46, sym_Real_1))
                    {
                      u_46 = ATgetArgument(t_46, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(u_46)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t_46, sym_Int_1))
                        {
                          u_46 = ATgetArgument(t_46, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(u_46)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t_46, sym_Op_2))
                            {
                              u_46 = ATgetArgument(t_46, 0);
                              v_46 = ATgetArgument(t_46, 1);
                              {
                                ATerm g_47 = NULL,i_47 = NULL;
                                ATerm s_12;
                                s_12 = t;
                                {
                                  ATerm h_47 = NULL;
                                  t = not_null(v_46);
                                  {
                                    t = length_0(t);
                                    {
                                      h_47 = t;
                                      if(((g_47 != NULL) && (g_47 != h_47)))
                                        _fail(h_47);
                                      else
                                        g_47 = h_47;
                                    }
                                  }
                                }
                                t = s_12;
                                {
                                  ATerm j_47 = NULL;
                                  t = not_null(v_46);
                                  {
                                    t = offsets_0(t);
                                    {
                                      j_47 = t;
                                      if(((i_47 != NULL) && (i_47 != j_47)))
                                        _fail(j_47);
                                      else
                                        i_47 = j_47;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(u_46), not_null(g_47)), not_null(i_47));
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
ATerm filter_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              t = filter_1(t, h_108);
              return(t);
            }
            t = Cons_2(t, h_108, d_2);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            {
              ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
              f_48 = t;
              d_48 :
              if(((ATgetType(f_48) == AT_LIST) && ((ATermList) f_48 != ATempty)))
                {
                  g_48 = ATgetFirst((ATermList) f_48);
                  h_48 = (ATerm) ATgetNext((ATermList) f_48);
                  {
                    t = not_null(h_48);
                    t = filter_1(t, h_108);
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
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_49 (ATerm t)
            {
              ATerm j_13 = t;
              int k_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2(t, _id, e_49);
                  LocalPopChoice(k_13);
                }
              else
                {
                  t = j_13;
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm r_48 = NULL;
                      r_48 = t;
                      k_48 :
                      if(!(match_int(r_48, 47)))
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
            t = e_49(t);
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = (ATerm) ATempty;
          }
        t = implode_string_0(t);
      }
      LocalPopChoice(g_13);
    }
  else
    {
      t = d_13;
      {
        ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
        s_48 = t;
        m_48 :
        if(((ATgetType(s_48) == AT_LIST) && ((ATermList) s_48 != ATempty)))
          {
            t_48 = ATgetFirst((ATermList) s_48);
            c_49 = (ATerm) ATgetNext((ATermList) s_48);
            n_48 :
            if(match_cons(t_48, sym_Row_3))
              {
                u_48 = ATgetArgument(t_48, 0);
                a_49 = ATgetArgument(t_48, 1);
                b_49 = ATgetArgument(t_48, 2);
                o_48 :
                if(((ATgetType(u_48) == AT_LIST) && ((ATermList) u_48 != ATempty)))
                  {
                    v_48 = ATgetFirst((ATermList) u_48);
                    z_48 = (ATerm) ATgetNext((ATermList) u_48);
                    p_48 :
                    if(match_cons(v_48, sym_As_2))
                      {
                        w_48 = ATgetArgument(v_48, 0);
                        y_48 = ATgetArgument(v_48, 1);
                        q_48 :
                        if(match_cons(w_48, sym_Off_1))
                          {
                            x_48 = ATgetArgument(w_48, 0);
                            t = not_null(x_48);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
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
  ATerm n_49 = NULL,o_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_cons(n_49, sym_Matrix_1))
    {
      o_49 = ATgetArgument(n_49, 0);
      {
        ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
        ATerm v_49 = NULL;
        t = not_null(o_49);
        {
          ATerm w_49 = NULL;
          t = get_path_0(t);
          {
            v_49 = t;
            {
              if(((q_49 != NULL) && (q_49 != v_49)))
                _fail(v_49);
              else
                q_49 = v_49;
              {
                t = not_null(o_49);
                {
                  ATerm x_49 = NULL;
                  t = outedges_0(t);
                  {
                    w_49 = t;
                    {
                      if(((r_49 != NULL) && (r_49 != w_49)))
                        _fail(w_49);
                      else
                        r_49 = w_49;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_49), not_null(r_49));
                        {
                          ATerm y_49 = NULL;
                          t = transitions_0(t);
                          {
                            x_49 = t;
                            {
                              if(((s_49 != NULL) && (s_49 != x_49)))
                                _fail(x_49);
                              else
                                s_49 = x_49;
                              {
                                t = not_null(o_49);
                                {
                                  ATerm z_49 = NULL;
                                  t = default_state_0(t);
                                  {
                                    y_49 = t;
                                    {
                                      if(((t_49 != NULL) && (t_49 != y_49)))
                                        _fail(y_49);
                                      else
                                        t_49 = y_49;
                                      {
                                        t = new_0(t);
                                        {
                                          z_49 = t;
                                          {
                                            if(((u_49 != NULL) && (u_49 != z_49)))
                                              _fail(z_49);
                                            else
                                              u_49 = z_49;
                                            {
                                              ATerm l_13;
                                              l_13 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_13, not_null(u_49)));
                                                {
                                                  ATerm g_2 (ATerm t)
                                                  {
                                                    t = term_n_13;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, g_2);
                                                }
                                              }
                                              t = l_13;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(u_49), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_49)), not_null(s_49), not_null(t_49));
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
  ATerm l_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  l_50 = t;
  j_50 :
  if(match_cons(l_50, sym_Row_3))
    {
      r_50 = ATgetArgument(l_50, 0);
      s_50 = ATgetArgument(l_50, 1);
      v_50 = ATgetArgument(l_50, 2);
      k_50 :
      if(((ATgetType(s_50) == AT_LIST) && ((ATermList) s_50 != ATempty)))
        {
          t_50 = ATgetFirst((ATermList) s_50);
          u_50 = (ATerm) ATgetNext((ATermList) s_50);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(r_50)), not_null(t_50)), not_null(u_50), not_null(v_50));
        }
      else
        {
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
  ATerm o_51 = NULL,p_51 = NULL;
  o_51 = t;
  n_51 :
  if(match_cons(o_51, sym_Matrix_1))
    {
      p_51 = ATgetArgument(o_51, 0);
      {
        ATerm t_51 = NULL;
        ATerm u_51 = NULL;
        t = not_null(p_51);
        {
          ATerm r_13 = t;
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
              t = r_13;
            }
          {
            t = not_null(p_51);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                u_51 = t;
                if(((t_51 != NULL) && (t_51 != u_51)))
                  _fail(u_51);
                else
                  t_51 = u_51;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(t_51));
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
  ATerm b_52 = NULL;
  b_52 = t;
  a_52 :
  if(match_cons(b_52, sym_Wld_0))
    {
      ATerm d_52 = NULL,f_52 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm e_52 = NULL;
        t = SSLgetAnnotations(not_null(b_52));
        {
          e_52 = t;
          if(((d_52 != NULL) && (d_52 != e_52)))
            _fail(e_52);
          else
            d_52 = e_52;
        }
      }
      t = w_13;
      {
        ATerm g_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(d_52));
        {
          g_52 = t;
          if(((f_52 != NULL) && (f_52 != g_52)))
            _fail(g_52);
          else
            f_52 = g_52;
        }
        t = not_null(f_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Row_3 (ATerm t, ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm))
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,x_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym_Row_3))
    {
      u_52 = ATgetArgument(t_52, 0);
      v_52 = ATgetArgument(t_52, 1);
      x_52 = ATgetArgument(t_52, 2);
      {
        ATerm d_53 = NULL,f_53 = NULL;
        ATerm e_53 = NULL;
        t = SSLgetAnnotations(not_null(t_52));
        {
          e_53 = t;
          if(((d_53 != NULL) && (d_53 != e_53)))
            _fail(e_53);
          else
            d_53 = e_53;
        }
        {
          t = not_null(u_52);
          {
            ATerm h_53 = NULL;
            t = n_87(t);
            {
              f_53 = t;
              {
                t = not_null(v_52);
                {
                  ATerm j_53 = NULL;
                  t = o_87(t);
                  {
                    h_53 = t;
                    {
                      t = not_null(x_52);
                      {
                        ATerm l_53 = NULL;
                        t = p_87(t);
                        {
                          j_53 = t;
                          {
                            ATerm m_53 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, not_null(f_53), not_null(h_53), not_null(j_53)), not_null(d_53));
                            {
                              m_53 = t;
                              if(((l_53 != NULL) && (l_53 != m_53)))
                                _fail(m_53);
                              else
                                l_53 = m_53;
                            }
                            t = not_null(l_53);
                          }
                        }
                      }
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
  ATerm w_53 = NULL,x_53 = NULL;
  w_53 = t;
  v_53 :
  if(match_cons(w_53, sym_Matrix_1))
    {
      x_53 = ATgetArgument(w_53, 0);
      {
        ATerm z_53 = NULL;
        ATerm a_54 = NULL;
        t = not_null(x_53);
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
            a_54 = t;
            if(((z_53 != NULL) && (z_53 != a_54)))
              _fail(a_54);
            else
              z_53 = a_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(z_53));
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
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym_Matrix_1))
    {
      l_54 = ATgetArgument(k_54, 0);
      {
        ATerm n_54 = NULL;
        ATerm t_54 = NULL;
        t = not_null(l_54);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
            o_54 = t;
            f_54 :
            if(match_cons(o_54, sym_Row_3))
              {
                p_54 = ATgetArgument(o_54, 0);
                q_54 = ATgetArgument(o_54, 1);
                r_54 = ATgetArgument(o_54, 2);
                g_54 :
                if(((ATermList) p_54 == ATempty))
                  {
                    h_54 :
                    if(((ATermList) q_54 == ATempty))
                      {
                        t = not_null(r_54);
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
            t_54 = t;
            if(((n_54 != NULL) && (n_54 != t_54)))
              _fail(t_54);
            else
              n_54 = t_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(n_54));
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
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            {
              ATerm d_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
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
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  y_54 :
  if(((ATgetType(z_54) == AT_LIST) && ((ATermList) z_54 != ATempty)))
    {
      a_55 = ATgetFirst((ATermList) z_54);
      b_55 = (ATerm) ATgetNext((ATermList) z_54);
      t = not_null(b_55);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
  i_55 = t;
  h_55 :
  if(match_cons(i_55, sym__2))
    {
      j_55 = ATgetArgument(i_55, 0);
      k_55 = ATgetArgument(i_55, 1);
      {
        ATerm f_14;
        f_14 = t;
        {
          ATerm n_55 = NULL;
          ATerm o_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_55), not_null(k_55));
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(h_14);
              }
            else
              {
                t = g_14;
                t = (ATerm) ATempty;
              }
            {
              o_55 = t;
              if(((n_55 != NULL) && (n_55 != o_55)))
                _fail(o_55);
              else
                n_55 = o_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_55), not_null(k_55), not_null(n_55));
            t = table_put_0(t);
          }
        }
        t = f_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  ATerm m_14;
  m_14 = t;
  {
    ATerm y_55 = NULL;
    ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
    t = l_100(t);
    {
      y_55 = t;
      {
        if(((x_55 != NULL) && (x_55 != y_55)))
          _fail(y_55);
        else
          x_55 = y_55;
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), term_h_12);
              t = table_get_0(t);
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_55 = t;
            u_55 :
            if(((ATgetType(z_55) == AT_LIST) && ((ATermList) z_55 != ATempty)))
              {
                a_56 = ATgetFirst((ATermList) z_55);
                b_56 = (ATerm) ATgetNext((ATermList) z_55);
                {
                  if(((w_55 != NULL) && (w_55 != a_56)))
                    _fail(a_56);
                  else
                    w_55 = a_56;
                  {
                    if(((v_55 != NULL) && (v_55 != b_56)))
                      _fail(b_56);
                    else
                      v_55 = b_56;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_55), term_h_12, not_null(v_55));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(w_55);
                          {
                            ATerm p_2 (ATerm t)
                            {
                              ATerm c_56 = NULL;
                              c_56 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(c_56));
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
  t = m_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_117 (ATerm), ATerm k_117 (ATerm))
{
  ATerm s_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_117(t);
      t = k_117(t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = s_14;
      {
        t = k_117(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm j_56 = NULL;
  ATerm x_14;
  x_14 = t;
  {
    ATerm q_56 = NULL;
    ATerm r_56 = NULL;
    t = k_100(t);
    {
      q_56 = t;
      {
        if(((j_56 != NULL) && (j_56 != q_56)))
          _fail(q_56);
        else
          j_56 = q_56;
        {
          ATerm s_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_56), term_h_12);
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                t = (ATerm) ATempty;
              }
            {
              s_56 = t;
              if(((r_56 != NULL) && (r_56 != s_56)))
                _fail(s_56);
              else
                r_56 = s_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_56), term_h_12, (ATerm) ATinsert(CheckATermList(not_null(r_56)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = x_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm m_100 (ATerm), ATerm n_100 (ATerm))
{
  t = begin_scope_1(t, m_100);
  {
    ATerm q_2 (ATerm t)
    {
      t = end_scope_1(t, m_100);
      return(t);
    }
    t = restore_always_2(t, n_100, q_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm a_15 = t;
      int b_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          LocalPopChoice(b_15);
        }
      else
        {
          t = a_15;
          {
            ATerm c_15 = t;
            int g_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                LocalPopChoice(g_15);
              }
            else
              {
                t = c_15;
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
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  m_57 :
  if(match_cons(n_57, sym_Cong_2))
    {
      o_57 = ATgetArgument(n_57, 0);
      p_57 = ATgetArgument(n_57, 1);
      {
        ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,s_58 = NULL,u_58 = NULL,w_58 = NULL;
        ATerm h_15;
        h_15 = t;
        {
          ATerm y_57 = NULL;
          t = not_null(p_57);
          {
            ATerm b_58 = NULL;
            t = map_1(t, new_0);
            {
              y_57 = t;
              {
                if(((v_57 != NULL) && (v_57 != y_57)))
                  _fail(y_57);
                else
                  v_57 = y_57;
                {
                  t = not_null(v_57);
                  {
                    ATerm c_58 = NULL;
                    ATerm u_2 (ATerm t)
                    {
                      ATerm z_57 = NULL;
                      ATerm a_58 = NULL;
                      a_58 = t;
                      if(((z_57 != NULL) && (z_57 != a_58)))
                        _fail(a_58);
                      else
                        z_57 = a_58;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_57));
                      return(t);
                    }
                    t = map_1(t, u_2);
                    {
                      b_58 = t;
                      {
                        if(((s_57 != NULL) && (s_57 != b_58)))
                          _fail(b_58);
                        else
                          s_57 = b_58;
                        {
                          ATerm d_58 = NULL;
                          t = new_0(t);
                          {
                            c_58 = t;
                            {
                              if(((t_57 != NULL) && (t_57 != c_58)))
                                _fail(c_58);
                              else
                                t_57 = c_58;
                              {
                                t = not_null(p_57);
                                {
                                  ATerm g_58 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    d_58 = t;
                                    {
                                      if(((w_57 != NULL) && (w_57 != d_58)))
                                        _fail(d_58);
                                      else
                                        w_57 = d_58;
                                      {
                                        t = not_null(w_57);
                                        {
                                          ATerm h_58 = NULL,r_58 = NULL;
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm e_58 = NULL;
                                            ATerm f_58 = NULL;
                                            f_58 = t;
                                            if(((e_58 != NULL) && (e_58 != f_58)))
                                              _fail(f_58);
                                            else
                                              e_58 = f_58;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_58));
                                            return(t);
                                          }
                                          t = map_1(t, v_2);
                                          {
                                            g_58 = t;
                                            {
                                              if(((u_57 != NULL) && (u_57 != g_58)))
                                                _fail(g_58);
                                              else
                                                u_57 = g_58;
                                              {
                                                ATerm i_58 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_57), not_null(w_57));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    i_58 = t;
                                                    if(((h_58 != NULL) && (h_58 != i_58)))
                                                      _fail(i_58);
                                                    else
                                                      h_58 = i_58;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_58), not_null(p_57));
                                                  {
                                                    ATerm w_2 (ATerm t)
                                                    {
                                                      ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL;
                                                      j_58 = t;
                                                      g_57 :
                                                      if(match_cons(j_58, sym__2))
                                                        {
                                                          k_58 = ATgetArgument(j_58, 0);
                                                          n_58 = ATgetArgument(j_58, 1);
                                                          h_57 :
                                                          if(match_cons(k_58, sym__2))
                                                            {
                                                              l_58 = ATgetArgument(k_58, 0);
                                                              m_58 = ATgetArgument(k_58, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_58))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_58)))));
                                                            }
                                                          else
                                                            {
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
                                                      r_58 = t;
                                                      if(((x_57 != NULL) && (x_57 != r_58)))
                                                        _fail(r_58);
                                                      else
                                                        x_57 = r_58;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
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
          ATerm i_15;
          i_15 = t;
          {
            ATerm t_58 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_57), not_null(w_57));
            {
              t = conc_0(t);
              {
                t_58 = t;
                if(((s_58 != NULL) && (s_58 != t_58)))
                  _fail(t_58);
                else
                  s_58 = t_58;
              }
            }
          }
          t = i_15;
          {
            ATerm m_15;
            m_15 = t;
            {
              ATerm v_58 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_57), not_null(s_57)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_57))));
              {
                t = Mapp2_0(t);
                {
                  v_58 = t;
                  if(((u_58 != NULL) && (u_58 != v_58)))
                    _fail(v_58);
                  else
                    u_58 = v_58;
                }
              }
            }
            t = m_15;
            {
              ATerm x_58 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_57), not_null(u_57)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_57))));
              {
                t = Bapp2_0(t);
                {
                  x_58 = t;
                  if(((w_58 != NULL) && (w_58 != x_58)))
                    _fail(x_58);
                  else
                    w_58 = x_58;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_58)), not_null(t_57)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_58), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_57)), not_null(w_58))));
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
  ATerm c_60 = NULL,d_60 = NULL;
  c_60 = t;
  b_60 :
  if(match_cons(c_60, sym_Build_1))
    {
      d_60 = ATgetArgument(c_60, 0);
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
            ATerm n_60 = NULL;
            ATerm r_60 = NULL;
            t = new_0(t);
            {
              n_60 = t;
              {
                if(((i_60 != NULL) && (i_60 != n_60)))
                  _fail(n_60);
                else
                  i_60 = n_60;
                {
                  t = not_null(d_60);
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
                      o_60 = t;
                      r_59 :
                      if(match_cons(o_60, sym_Anno_2))
                        {
                          p_60 = ATgetArgument(o_60, 0);
                          q_60 = ATgetArgument(o_60, 1);
                          {
                            if(((f_60 != NULL) && (f_60 != p_60)))
                              _fail(p_60);
                            else
                              f_60 = p_60;
                            {
                              if(((h_60 != NULL) && (h_60 != q_60)))
                                _fail(q_60);
                              else
                                h_60 = q_60;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_60));
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
                      r_60 = t;
                      if(((j_60 != NULL) && (j_60 != r_60)))
                        _fail(r_60);
                      else
                        j_60 = r_60;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_60)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_60)), not_null(f_60))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_60))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_60))));
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
                  ATerm w_60 = NULL;
                  ATerm b_61 = NULL;
                  t = new_0(t);
                  {
                    w_60 = t;
                    {
                      if(((u_60 != NULL) && (u_60 != w_60)))
                        _fail(w_60);
                      else
                        u_60 = w_60;
                      {
                        t = not_null(d_60);
                        {
                          ATerm y_2 (ATerm t)
                          {
                            ATerm x_60 = NULL,a_61 = NULL;
                            x_60 = t;
                            v_59 :
                            if(match_cons(x_60, sym_RootApp_1))
                              {
                                a_61 = ATgetArgument(x_60, 0);
                                {
                                  if(((t_60 != NULL) && (t_60 != a_61)))
                                    _fail(a_61);
                                  else
                                    t_60 = a_61;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_60));
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
                            b_61 = t;
                            if(((v_60 != NULL) && (v_60 != b_61)))
                              _fail(b_61);
                            else
                              v_60 = b_61;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_60)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_60))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_60))));
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  {
                    ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
                    ATerm h_61 = NULL;
                    ATerm w_61 = NULL;
                    t = new_0(t);
                    {
                      h_61 = t;
                      {
                        if(((f_61 != NULL) && (f_61 != h_61)))
                          _fail(h_61);
                        else
                          f_61 = h_61;
                        {
                          t = not_null(d_60);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm i_61 = NULL,j_61 = NULL,p_61 = NULL;
                              i_61 = t;
                              z_59 :
                              if(match_cons(i_61, sym_App_2))
                                {
                                  j_61 = ATgetArgument(i_61, 0);
                                  p_61 = ATgetArgument(i_61, 1);
                                  {
                                    if(((d_61 != NULL) && (d_61 != j_61)))
                                      _fail(j_61);
                                    else
                                      d_61 = j_61;
                                    {
                                      if(((e_61 != NULL) && (e_61 != p_61)))
                                        _fail(p_61);
                                      else
                                        e_61 = p_61;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_61));
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
                              w_61 = t;
                              if(((g_61 != NULL) && (g_61 != w_61)))
                                _fail(w_61);
                              else
                                g_61 = w_61;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_61), not_null(e_61), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_61)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_61))));
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
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
  p_62 = t;
  k_62 :
  if(match_cons(p_62, sym__2))
    {
      q_62 = ATgetArgument(p_62, 0);
      r_62 = ATgetArgument(p_62, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_62)), not_null(q_62));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  z_62 = t;
  w_62 :
  if(match_cons(z_62, sym__2))
    {
      a_63 = ATgetArgument(z_62, 0);
      d_63 = ATgetArgument(z_62, 1);
      x_62 :
      if(((ATgetType(a_63) == AT_LIST) && ((ATermList) a_63 != ATempty)))
        {
          b_63 = ATgetFirst((ATermList) a_63);
          c_63 = (ATerm) ATgetNext((ATermList) a_63);
          y_62 :
          if(((ATgetType(d_63) == AT_LIST) && ((ATermList) d_63 != ATempty)))
            {
              e_63 = ATgetFirst((ATermList) d_63);
              f_63 = (ATerm) ATgetNext((ATermList) d_63);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_63), not_null(e_63)), (ATerm) ATmakeAppl(sym__2, not_null(c_63), not_null(f_63)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  q_63 :
  if(match_cons(t_63, sym__2))
    {
      u_63 = ATgetArgument(t_63, 0);
      v_63 = ATgetArgument(t_63, 1);
      r_63 :
      if(((ATermList) u_63 == ATempty))
        {
          s_63 :
          if(((ATermList) v_63 == ATempty))
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
ATerm zip_1 (ATerm t, ATerm v_114 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_114);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,w_66 = NULL;
  s_65 = t;
  i_65 :
  if(match_cons(s_65, sym_Call_2))
    {
      t_65 = ATgetArgument(s_65, 0);
      a_66 = ATgetArgument(s_65, 1);
      j_65 :
      if(match_cons(t_65, sym_SVar_1))
        {
          z_65 = ATgetArgument(t_65, 0);
          k_65 :
          if(match_string(z_65, "Anno_Cong__"))
            {
              l_65 :
              if(((ATgetType(a_66) == AT_LIST) && ((ATermList) a_66 != ATempty)))
                {
                  b_66 = ATgetFirst((ATermList) a_66);
                  i_66 = (ATerm) ATgetNext((ATermList) a_66);
                  p_65 :
                  if(match_cons(b_66, sym_Cong_2))
                    {
                      c_66 = ATgetArgument(b_66, 0);
                      h_66 = ATgetArgument(b_66, 1);
                      q_65 :
                      if(((ATgetType(i_66) == AT_LIST) && ((ATermList) i_66 != ATempty)))
                        {
                          j_66 = ATgetFirst((ATermList) i_66);
                          w_66 = (ATerm) ATgetNext((ATermList) i_66);
                          r_65 :
                          if(((ATermList) w_66 == ATempty))
                            {
                              {
                                ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,k_68 = NULL,m_68 = NULL,o_68 = NULL;
                                ATerm z_15;
                                z_15 = t;
                                {
                                  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(h_66)), not_null(j_66));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      n_67 = t;
                                      e_65 :
                                      if(((ATgetType(n_67) == AT_LIST) && ((ATermList) n_67 != ATempty)))
                                        {
                                          o_67 = ATgetFirst((ATermList) n_67);
                                          p_67 = (ATerm) ATgetNext((ATermList) n_67);
                                          {
                                            ATerm s_67 = NULL;
                                            if(((g_67 != NULL) && (g_67 != o_67)))
                                              _fail(o_67);
                                            else
                                              g_67 = o_67;
                                            {
                                              if(((k_67 != NULL) && (k_67 != p_67)))
                                                _fail(p_67);
                                              else
                                                k_67 = p_67;
                                              {
                                                ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
                                                ATerm a_3 (ATerm t)
                                                {
                                                  ATerm q_67 = NULL;
                                                  ATerm r_67 = NULL;
                                                  r_67 = t;
                                                  if(((q_67 != NULL) && (q_67 != r_67)))
                                                    _fail(r_67);
                                                  else
                                                    q_67 = r_67;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_67));
                                                  return(t);
                                                }
                                                t = map_1(t, a_3);
                                                {
                                                  s_67 = t;
                                                  {
                                                    if(((h_67 != NULL) && (h_67 != s_67)))
                                                      _fail(s_67);
                                                    else
                                                      h_67 = s_67;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(h_66)), not_null(j_66));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          t_67 = t;
                                                          d_65 :
                                                          if(((ATgetType(t_67) == AT_LIST) && ((ATermList) t_67 != ATempty)))
                                                            {
                                                              u_67 = ATgetFirst((ATermList) t_67);
                                                              v_67 = (ATerm) ATgetNext((ATermList) t_67);
                                                              {
                                                                ATerm y_67 = NULL;
                                                                if(((i_67 != NULL) && (i_67 != u_67)))
                                                                  _fail(u_67);
                                                                else
                                                                  i_67 = u_67;
                                                                {
                                                                  if(((l_67 != NULL) && (l_67 != v_67)))
                                                                    _fail(v_67);
                                                                  else
                                                                    l_67 = v_67;
                                                                  {
                                                                    ATerm z_67 = NULL,j_68 = NULL;
                                                                    ATerm b_3 (ATerm t)
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
                                                                    t = map_1(t, b_3);
                                                                    {
                                                                      y_67 = t;
                                                                      {
                                                                        if(((j_67 != NULL) && (j_67 != y_67)))
                                                                          _fail(y_67);
                                                                        else
                                                                          j_67 = y_67;
                                                                        {
                                                                          ATerm a_68 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_67), not_null(l_67));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              a_68 = t;
                                                                              if(((z_67 != NULL) && (z_67 != a_68)))
                                                                                _fail(a_68);
                                                                              else
                                                                                z_67 = a_68;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_67), (ATerm) ATinsert(CheckATermList(not_null(h_66)), not_null(j_66)));
                                                                            {
                                                                              ATerm c_3 (ATerm t)
                                                                              {
                                                                                ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
                                                                                b_68 = t;
                                                                                a_65 :
                                                                                if(match_cons(b_68, sym__2))
                                                                                  {
                                                                                    c_68 = ATgetArgument(b_68, 0);
                                                                                    f_68 = ATgetArgument(b_68, 1);
                                                                                    b_65 :
                                                                                    if(match_cons(c_68, sym__2))
                                                                                      {
                                                                                        d_68 = ATgetArgument(c_68, 0);
                                                                                        e_68 = ATgetArgument(c_68, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_68))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_68), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_68)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                j_68 = t;
                                                                                if(((m_67 != NULL) && (m_67 != j_68)))
                                                                                  _fail(j_68);
                                                                                else
                                                                                  m_67 = j_68;
                                                                              }
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
                                t = z_15;
                                {
                                  ATerm a_16;
                                  a_16 = t;
                                  {
                                    ATerm l_68 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_67), not_null(l_67));
                                    {
                                      t = conc_0(t);
                                      {
                                        l_68 = t;
                                        if(((k_68 != NULL) && (k_68 != l_68)))
                                          _fail(l_68);
                                        else
                                          k_68 = l_68;
                                      }
                                    }
                                  }
                                  t = a_16;
                                  {
                                    ATerm b_16;
                                    b_16 = t;
                                    {
                                      ATerm n_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_66), not_null(h_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_67))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          n_68 = t;
                                          if(((m_68 != NULL) && (m_68 != n_68)))
                                            _fail(n_68);
                                          else
                                            m_68 = n_68;
                                        }
                                      }
                                    }
                                    t = b_16;
                                    {
                                      ATerm p_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_66), not_null(j_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          p_68 = t;
                                          if(((o_68 != NULL) && (o_68 != p_68)))
                                            _fail(p_68);
                                          else
                                            o_68 = p_68;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(k_68)), not_null(i_67)), not_null(g_67)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_68), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_67)), not_null(o_68))));
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
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym_As_2))
    {
      k_69 = ATgetArgument(j_69, 0);
      l_69 = ATgetArgument(j_69, 1);
      {
        ATerm p_69 = NULL,r_69 = NULL;
        ATerm q_69 = NULL;
        t = SSLgetAnnotations(not_null(j_69));
        {
          q_69 = t;
          if(((p_69 != NULL) && (p_69 != q_69)))
            _fail(q_69);
          else
            p_69 = q_69;
        }
        {
          t = not_null(k_69);
          {
            ATerm t_69 = NULL;
            t = y_88(t);
            {
              r_69 = t;
              {
                t = not_null(l_69);
                {
                  ATerm v_69 = NULL;
                  t = z_88(t);
                  {
                    t_69 = t;
                    {
                      ATerm w_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(r_69), not_null(t_69)), not_null(p_69));
                      {
                        w_69 = t;
                        if(((v_69 != NULL) && (v_69 != w_69)))
                          _fail(w_69);
                        else
                          v_69 = w_69;
                      }
                      t = not_null(v_69);
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
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  j_70 = t;
  i_70 :
  if(match_cons(j_70, sym_Prim_2))
    {
      k_70 = ATgetArgument(j_70, 0);
      l_70 = ATgetArgument(j_70, 1);
      {
        ATerm p_70 = NULL,r_70 = NULL;
        ATerm q_70 = NULL;
        t = SSLgetAnnotations(not_null(j_70));
        {
          q_70 = t;
          if(((p_70 != NULL) && (p_70 != q_70)))
            _fail(q_70);
          else
            p_70 = q_70;
        }
        {
          t = not_null(k_70);
          {
            ATerm t_70 = NULL;
            t = s_92(t);
            {
              r_70 = t;
              {
                t = not_null(l_70);
                {
                  ATerm w_70 = NULL;
                  t = t_92(t);
                  {
                    t_70 = t;
                    {
                      ATerm x_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(r_70), not_null(t_70)), not_null(p_70));
                      {
                        x_70 = t;
                        if(((w_70 != NULL) && (w_70 != x_70)))
                          _fail(x_70);
                        else
                          w_70 = x_70;
                      }
                      t = not_null(w_70);
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
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
  a_73 = t;
  z_72 :
  if(match_cons(a_73, sym_Explode_2))
    {
      b_73 = ATgetArgument(a_73, 0);
      c_73 = ATgetArgument(a_73, 1);
      {
        ATerm g_73 = NULL,i_73 = NULL;
        ATerm h_73 = NULL;
        t = SSLgetAnnotations(not_null(a_73));
        {
          h_73 = t;
          if(((g_73 != NULL) && (g_73 != h_73)))
            _fail(h_73);
          else
            g_73 = h_73;
        }
        {
          t = not_null(b_73);
          {
            ATerm k_73 = NULL;
            t = u_88(t);
            {
              i_73 = t;
              {
                t = not_null(c_73);
                {
                  ATerm r_73 = NULL;
                  t = v_88(t);
                  {
                    k_73 = t;
                    {
                      ATerm s_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(i_73), not_null(k_73)), not_null(g_73));
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
ATerm Op_2 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm))
{
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL;
  b_75 = t;
  a_75 :
  if(match_cons(b_75, sym_Op_2))
    {
      c_75 = ATgetArgument(b_75, 0);
      d_75 = ATgetArgument(b_75, 1);
      {
        ATerm h_75 = NULL,j_75 = NULL;
        ATerm i_75 = NULL;
        t = SSLgetAnnotations(not_null(b_75));
        {
          i_75 = t;
          if(((h_75 != NULL) && (h_75 != i_75)))
            _fail(i_75);
          else
            h_75 = i_75;
        }
        {
          t = not_null(c_75);
          {
            ATerm l_75 = NULL;
            t = s_90(t);
            {
              j_75 = t;
              {
                t = not_null(d_75);
                {
                  ATerm n_75 = NULL;
                  t = t_90(t);
                  {
                    l_75 = t;
                    {
                      ATerm o_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_75), not_null(l_75)), not_null(h_75));
                      {
                        o_75 = t;
                        if(((n_75 != NULL) && (n_75 != o_75)))
                          _fail(o_75);
                        else
                          n_75 = o_75;
                      }
                      t = not_null(n_75);
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
  ATerm c_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_122(t);
      LocalPopChoice(e_16);
    }
  else
    {
      t = c_16;
      {
        ATerm f_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm e_3 (ATerm t)
              {
                t = pat_td_1(t, h_122);
                return(t);
              }
              t = fetch_1(t, e_3);
              return(t);
            }
            t = Op_2(t, _id, d_3);
            LocalPopChoice(h_16);
          }
        else
          {
            t = f_16;
            {
              ATerm p_16 = t;
              int q_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = pat_td_1(t, h_122);
                    return(t);
                  }
                  t = Explode_2(t, _id, f_3);
                  LocalPopChoice(q_16);
                }
              else
                {
                  t = p_16;
                  {
                    ATerm r_16 = t;
                    int v_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_3 (ATerm t)
                        {
                          t = pat_td_1(t, h_122);
                          return(t);
                        }
                        t = Explode_2(t, g_3, _id);
                        LocalPopChoice(v_16);
                      }
                    else
                      {
                        t = r_16;
                        {
                          ATerm b_17 = t;
                          int h_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_3 (ATerm t)
                              {
                                ATerm i_3 (ATerm t)
                                {
                                  t = pat_td_1(t, h_122);
                                  return(t);
                                }
                                t = fetch_1(t, i_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, h_3);
                              LocalPopChoice(h_17);
                            }
                          else
                            {
                              t = b_17;
                              {
                                ATerm j_3 (ATerm t)
                                {
                                  t = pat_td_1(t, h_122);
                                  return(t);
                                }
                                t = As_2(t, _id, j_3);
                              }
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
  ATerm k_76 = NULL,l_76 = NULL;
  k_76 = t;
  j_76 :
  if(match_cons(k_76, sym_Match_1))
    {
      l_76 = ATgetArgument(k_76, 0);
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
            ATerm r_76 = NULL;
            ATerm v_76 = NULL;
            t = new_0(t);
            {
              r_76 = t;
              {
                if(((p_76 != NULL) && (p_76 != r_76)))
                  _fail(r_76);
                else
                  p_76 = r_76;
                {
                  t = not_null(l_76);
                  {
                    ATerm k_3 (ATerm t)
                    {
                      ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
                      s_76 = t;
                      z_75 :
                      if(match_cons(s_76, sym_Anno_2))
                        {
                          t_76 = ATgetArgument(s_76, 0);
                          u_76 = ATgetArgument(s_76, 1);
                          {
                            if(((n_76 != NULL) && (n_76 != t_76)))
                              _fail(t_76);
                            else
                              n_76 = t_76;
                            {
                              if(((o_76 != NULL) && (o_76 != u_76)))
                                _fail(u_76);
                              else
                                o_76 = u_76;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_76)), not_null(n_76));
                            }
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
                      v_76 = t;
                      if(((q_76 != NULL) && (q_76 != v_76)))
                        _fail(v_76);
                      else
                        q_76 = v_76;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_76)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_76)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_76))))));
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm l_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
                  ATerm a_77 = NULL;
                  ATerm d_77 = NULL;
                  t = new_0(t);
                  {
                    a_77 = t;
                    {
                      if(((y_76 != NULL) && (y_76 != a_77)))
                        _fail(a_77);
                      else
                        y_76 = a_77;
                      {
                        t = not_null(l_76);
                        {
                          ATerm l_3 (ATerm t)
                          {
                            ATerm b_77 = NULL,c_77 = NULL;
                            b_77 = t;
                            d_76 :
                            if(match_cons(b_77, sym_RootApp_1))
                              {
                                c_77 = ATgetArgument(b_77, 0);
                                {
                                  if(((x_76 != NULL) && (x_76 != c_77)))
                                    _fail(c_77);
                                  else
                                    x_76 = c_77;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_76));
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
                            d_77 = t;
                            if(((z_76 != NULL) && (z_76 != d_77)))
                              _fail(d_77);
                            else
                              z_76 = d_77;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_76))), not_null(x_76))));
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = l_17;
                  {
                    ATerm f_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
                    ATerm n_77 = NULL;
                    ATerm f_78 = NULL;
                    t = new_0(t);
                    {
                      n_77 = t;
                      {
                        if(((l_77 != NULL) && (l_77 != n_77)))
                          _fail(n_77);
                        else
                          l_77 = n_77;
                        {
                          t = not_null(l_76);
                          {
                            ATerm m_3 (ATerm t)
                            {
                              ATerm o_77 = NULL,d_78 = NULL,e_78 = NULL;
                              o_77 = t;
                              h_76 :
                              if(match_cons(o_77, sym_App_2))
                                {
                                  d_78 = ATgetArgument(o_77, 0);
                                  e_78 = ATgetArgument(o_77, 1);
                                  {
                                    if(((k_77 != NULL) && (k_77 != d_78)))
                                      _fail(d_78);
                                    else
                                      k_77 = d_78;
                                    {
                                      if(((f_77 != NULL) && (f_77 != e_78)))
                                        _fail(e_78);
                                      else
                                        f_77 = e_78;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_77));
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
                              f_78 = t;
                              if(((m_77 != NULL) && (m_77 != f_78)))
                                _fail(f_78);
                              else
                                m_77 = f_78;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_77))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_77)), not_null(k_77)))));
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
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  v_80 :
  if(match_cons(w_80, sym_Cong_2))
    {
      x_80 = ATgetArgument(w_80, 0);
      y_80 = ATgetArgument(w_80, 1);
      {
        ATerm b_81 = NULL;
        ATerm f_81 = NULL;
        t = not_null(y_80);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm c_81 = NULL,d_81 = NULL;
            d_81 = t;
            t_80 :
            if(match_cons(d_81, sym_Match_1))
              {
                c_81 = ATgetArgument(d_81, 0);
                t = not_null(c_81);
              }
            else
              {
                if(match_cons(d_81, sym_Id_0))
                  {
                    t = term_m_12;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, n_3);
          {
            f_81 = t;
            if(((b_81 != NULL) && (b_81 != f_81)))
              _fail(f_81);
            else
              b_81 = f_81;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_80), not_null(b_81)));
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
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
  n_81 = t;
  l_81 :
  if(match_cons(n_81, sym_Scope_2))
    {
      o_81 = ATgetArgument(n_81, 0);
      p_81 = ATgetArgument(n_81, 1);
      m_81 :
      if(((ATermList) o_81 == ATempty))
        {
          t = not_null(p_81);
        }
      else
        {
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
  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  n_82 = t;
  a_82 :
  if(match_cons(n_82, sym_Where_1))
    {
      o_82 = ATgetArgument(n_82, 0);
      b_82 :
      if(match_cons(o_82, sym_Seq_2))
        {
          m_82 = ATgetArgument(o_82, 0);
          i_82 = ATgetArgument(o_82, 1);
          c_82 :
          if(match_cons(m_82, sym_Where_1))
            {
              h_82 = ATgetArgument(m_82, 0);
              d_82 :
              if(match_cons(i_82, sym_Seq_2))
                {
                  j_82 = ATgetArgument(i_82, 0);
                  l_82 = ATgetArgument(i_82, 1);
                  e_82 :
                  if(match_cons(j_82, sym_Build_1))
                    {
                      k_82 = ATgetArgument(j_82, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_82), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_82)), not_null(l_82))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(o_82, sym_Where_1))
            {
              m_82 = ATgetArgument(o_82, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(m_82));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(n_82, sym_Test_1))
        {
          o_82 = ATgetArgument(n_82, 0);
          f_82 :
          if(match_cons(o_82, sym_Test_1))
            {
              m_82 = ATgetArgument(o_82, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_82));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(n_82, sym_Not_1))
            {
              o_82 = ATgetArgument(n_82, 0);
              g_82 :
              if(match_cons(o_82, sym_Not_1))
                {
                  m_82 = ATgetArgument(o_82, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_82));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(n_82, sym_LChoice_2))
                {
                  o_82 = ATgetArgument(n_82, 0);
                  p_82 = ATgetArgument(n_82, 1);
                  {
                    if(((o_82 != NULL) && (o_82 != p_82)))
                      _fail(p_82);
                    else
                      o_82 = p_82;
                    t = not_null(o_82);
                  }
                }
              else
                {
                  if(match_cons(n_82, sym_Choice_2))
                    {
                      o_82 = ATgetArgument(n_82, 0);
                      p_82 = ATgetArgument(n_82, 1);
                      {
                        if(((o_82 != NULL) && (o_82 != p_82)))
                          _fail(p_82);
                        else
                          o_82 = p_82;
                        t = not_null(o_82);
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
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
  l_83 = t;
  h_83 :
  if(match_cons(l_83, sym_LChoice_2))
    {
      m_83 = ATgetArgument(l_83, 0);
      p_83 = ATgetArgument(l_83, 1);
      i_83 :
      if(match_cons(m_83, sym_LChoice_2))
        {
          n_83 = ATgetArgument(m_83, 0);
          o_83 = ATgetArgument(m_83, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_83), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_83), not_null(p_83)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(l_83, sym_Seq_2))
        {
          m_83 = ATgetArgument(l_83, 0);
          p_83 = ATgetArgument(l_83, 1);
          j_83 :
          if(match_cons(m_83, sym_Seq_2))
            {
              n_83 = ATgetArgument(m_83, 0);
              o_83 = ATgetArgument(m_83, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_83), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_83), not_null(p_83)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(l_83, sym_Choice_2))
            {
              m_83 = ATgetArgument(l_83, 0);
              p_83 = ATgetArgument(l_83, 1);
              k_83 :
              if(match_cons(m_83, sym_Choice_2))
                {
                  n_83 = ATgetArgument(m_83, 0);
                  o_83 = ATgetArgument(m_83, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_83), (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_83), not_null(p_83)));
                }
              else
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
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL;
  w_84 = t;
  o_84 :
  if(match_cons(w_84, sym_InfixApp_3))
    {
      x_84 = ATgetArgument(w_84, 0);
      t_84 = ATgetArgument(w_84, 1);
      s_84 = ATgetArgument(w_84, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_84), (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_84)), not_null(x_84))));
    }
  else
    {
      if(match_cons(w_84, sym_BAM_3))
        {
          x_84 = ATgetArgument(w_84, 0);
          t_84 = ATgetArgument(w_84, 1);
          s_84 = ATgetArgument(w_84, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(s_84))), not_null(x_84)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_84))));
        }
      else
        {
          if(match_cons(w_84, sym_AM_2))
            {
              x_84 = ATgetArgument(w_84, 0);
              t_84 = ATgetArgument(w_84, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_84), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_84)));
            }
          else
            {
              if(match_cons(w_84, sym_MA_2))
                {
                  x_84 = ATgetArgument(w_84, 0);
                  t_84 = ATgetArgument(w_84, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_84)), not_null(t_84));
                }
              else
                {
                  if(match_cons(w_84, sym_BA_2))
                    {
                      x_84 = ATgetArgument(w_84, 0);
                      t_84 = ATgetArgument(w_84, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_84)), not_null(x_84));
                    }
                  else
                    {
                      if(match_cons(w_84, sym_Lets_2))
                        {
                          x_84 = ATgetArgument(w_84, 0);
                          t_84 = ATgetArgument(w_84, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_84), not_null(t_84));
                        }
                      else
                        {
                          if(match_cons(w_84, sym_LChoices_1))
                            {
                              x_84 = ATgetArgument(w_84, 0);
                              p_84 :
                              if(((ATgetType(x_84) == AT_LIST) && ((ATermList) x_84 != ATempty)))
                                {
                                  u_84 = ATgetFirst((ATermList) x_84);
                                  v_84 = (ATerm) ATgetNext((ATermList) x_84);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_84), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(v_84)));
                                }
                              else
                                {
                                  if(((ATermList) x_84 == ATempty))
                                    {
                                      t = term_v_17;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(w_84, sym_Choices_1))
                                {
                                  x_84 = ATgetArgument(w_84, 0);
                                  q_84 :
                                  if(((ATgetType(x_84) == AT_LIST) && ((ATermList) x_84 != ATempty)))
                                    {
                                      u_84 = ATgetFirst((ATermList) x_84);
                                      v_84 = (ATerm) ATgetNext((ATermList) x_84);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_84), (ATerm) ATmakeAppl(sym_Choices_1, not_null(v_84)));
                                    }
                                  else
                                    {
                                      if(((ATermList) x_84 == ATempty))
                                        {
                                          t = term_v_17;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(w_84, sym_Seqs_1))
                                    {
                                      x_84 = ATgetArgument(w_84, 0);
                                      r_84 :
                                      if(((ATgetType(x_84) == AT_LIST) && ((ATermList) x_84 != ATempty)))
                                        {
                                          u_84 = ATgetFirst((ATermList) x_84);
                                          v_84 = (ATerm) ATgetNext((ATermList) x_84);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_84), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_84)));
                                        }
                                      else
                                        {
                                          if(((ATermList) x_84 == ATempty))
                                            {
                                              t = term_x_17;
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
  ATerm h_86 = NULL,i_86 = NULL;
  h_86 = t;
  f_86 :
  if(match_cons(h_86, sym_Where_1))
    {
      i_86 = ATgetArgument(h_86, 0);
      g_86 :
      if(match_cons(i_86, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
  n_86 = t;
  l_86 :
  if(match_cons(n_86, sym_LChoice_2))
    {
      o_86 = ATgetArgument(n_86, 0);
      p_86 = ATgetArgument(n_86, 1);
      m_86 :
      if(match_cons(p_86, sym_Fail_0))
        {
          t = not_null(o_86);
        }
      else
        {
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
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL;
  v_86 = t;
  t_86 :
  if(match_cons(v_86, sym_LChoice_2))
    {
      w_86 = ATgetArgument(v_86, 0);
      x_86 = ATgetArgument(v_86, 1);
      u_86 :
      if(match_cons(w_86, sym_Fail_0))
        {
          t = not_null(x_86);
        }
      else
        {
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
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
  d_87 = t;
  b_87 :
  if(match_cons(d_87, sym_Choice_2))
    {
      e_87 = ATgetArgument(d_87, 0);
      f_87 = ATgetArgument(d_87, 1);
      c_87 :
      if(match_cons(f_87, sym_Fail_0))
        {
          t = not_null(e_87);
        }
      else
        {
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
  ATerm l_87 = NULL,m_87 = NULL,q_87 = NULL;
  l_87 = t;
  j_87 :
  if(match_cons(l_87, sym_Choice_2))
    {
      m_87 = ATgetArgument(l_87, 0);
      q_87 = ATgetArgument(l_87, 1);
      k_87 :
      if(match_cons(m_87, sym_Fail_0))
        {
          t = not_null(q_87);
        }
      else
        {
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
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  x_87 = t;
  w_87 :
  if(match_cons(x_87, sym_Cong_2))
    {
      y_87 = ATgetArgument(x_87, 0);
      z_87 = ATgetArgument(x_87, 1);
      {
        t = not_null(z_87);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm c_88 = NULL;
            c_88 = t;
            v_87 :
            if(!(match_cons(c_88, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_3);
        }
        t = term_v_17;
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
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
  h_88 = t;
  f_88 :
  if(match_cons(h_88, sym_Path_2))
    {
      i_88 = ATgetArgument(h_88, 0);
      j_88 = ATgetArgument(h_88, 1);
      g_88 :
      if(match_cons(j_88, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm p_88 = NULL,q_88 = NULL;
  p_88 = t;
  n_88 :
  if(match_cons(p_88, sym_One_1))
    {
      q_88 = ATgetArgument(p_88, 0);
      o_88 :
      if(match_cons(q_88, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm x_88 = NULL,a_89 = NULL;
  x_88 = t;
  t_88 :
  if(match_cons(x_88, sym_Some_1))
    {
      a_89 = ATgetArgument(x_88, 0);
      w_88 :
      if(match_cons(a_89, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  d_89 :
  if(match_cons(f_89, sym_Rec_2))
    {
      g_89 = ATgetArgument(f_89, 0);
      h_89 = ATgetArgument(f_89, 1);
      e_89 :
      if(match_cons(h_89, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
  n_89 = t;
  l_89 :
  if(match_cons(n_89, sym_Scope_2))
    {
      o_89 = ATgetArgument(n_89, 0);
      p_89 = ATgetArgument(n_89, 1);
      m_89 :
      if(match_cons(p_89, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  u_89 :
  if(match_cons(w_89, sym_Seq_2))
    {
      x_89 = ATgetArgument(w_89, 0);
      y_89 = ATgetArgument(w_89, 1);
      v_89 :
      if(match_cons(x_89, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm g_90 = NULL,h_90 = NULL;
  g_90 = t;
  d_90 :
  if(match_cons(g_90, sym_Not_1))
    {
      h_90 = ATgetArgument(g_90, 0);
      f_90 :
      if(match_cons(h_90, sym_Fail_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm m_90 = NULL,n_90 = NULL;
  m_90 = t;
  k_90 :
  if(match_cons(m_90, sym_Test_1))
    {
      n_90 = ATgetArgument(m_90, 0);
      l_90 :
      if(match_cons(n_90, sym_Fail_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm z_17 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = z_17;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            {
              ATerm i_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(k_18);
                }
              else
                {
                  t = i_18;
                  {
                    ATerm l_18 = t;
                    int m_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(m_18);
                      }
                    else
                      {
                        t = l_18;
                        {
                          ATerm q_18 = t;
                          int r_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(r_18);
                            }
                          else
                            {
                              t = q_18;
                              {
                                ATerm s_18 = t;
                                int b_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(b_19);
                                  }
                                else
                                  {
                                    t = s_18;
                                    {
                                      ATerm c_19 = t;
                                      int d_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(d_19);
                                        }
                                      else
                                        {
                                          t = c_19;
                                          {
                                            ATerm e_19 = t;
                                            int f_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(f_19);
                                              }
                                            else
                                              {
                                                t = e_19;
                                                {
                                                  ATerm g_19 = t;
                                                  int h_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
                                                            LocalPopChoice(j_19);
                                                          }
                                                        else
                                                          {
                                                            t = i_19;
                                                            {
                                                              ATerm k_19 = t;
                                                              int q_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(q_19);
                                                                }
                                                              else
                                                                {
                                                                  t = k_19;
                                                                  {
                                                                    ATerm r_19 = t;
                                                                    int s_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(s_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_19;
                                                                        {
                                                                          ATerm u_19 = t;
                                                                          int w_19 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(w_19);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_19;
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
  ATerm u_90 = NULL,v_90 = NULL;
  u_90 = t;
  q_90 :
  if(match_cons(u_90, sym_Match_1))
    {
      v_90 = ATgetArgument(u_90, 0);
      r_90 :
      if(match_cons(v_90, sym_Wld_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm a_91 = NULL,b_91 = NULL;
  a_91 = t;
  y_90 :
  if(match_cons(a_91, sym_Where_1))
    {
      b_91 = ATgetArgument(a_91, 0);
      z_90 :
      if(match_cons(b_91, sym_Id_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm g_91 = NULL,h_91 = NULL;
  g_91 = t;
  e_91 :
  if(match_cons(g_91, sym_All_1))
    {
      h_91 = ATgetArgument(g_91, 0);
      f_91 :
      if(match_cons(h_91, sym_Id_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL;
  u_91 = t;
  s_91 :
  if(match_cons(u_91, sym_Rec_2))
    {
      v_91 = ATgetArgument(u_91, 0);
      w_91 = ATgetArgument(u_91, 1);
      t_91 :
      if(match_cons(w_91, sym_Id_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
  e_92 = t;
  c_92 :
  if(match_cons(e_92, sym_Scope_2))
    {
      f_92 = ATgetArgument(e_92, 0);
      g_92 = ATgetArgument(e_92, 1);
      d_92 :
      if(match_cons(g_92, sym_Id_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm n_92 = NULL,o_92 = NULL,r_92 = NULL;
  n_92 = t;
  k_92 :
  if(match_cons(n_92, sym_LChoice_2))
    {
      o_92 = ATgetArgument(n_92, 0);
      r_92 = ATgetArgument(n_92, 1);
      l_92 :
      if(match_cons(o_92, sym_Id_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL;
  e_93 = t;
  z_92 :
  if(match_cons(e_93, sym_Seq_2))
    {
      f_93 = ATgetArgument(e_93, 0);
      g_93 = ATgetArgument(e_93, 1);
      d_93 :
      if(match_cons(g_93, sym_Id_0))
        {
          t = not_null(f_93);
        }
      else
        {
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
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
  m_93 = t;
  k_93 :
  if(match_cons(m_93, sym_Seq_2))
    {
      n_93 = ATgetArgument(m_93, 0);
      o_93 = ATgetArgument(m_93, 1);
      l_93 :
      if(match_cons(n_93, sym_Id_0))
        {
          t = not_null(o_93);
        }
      else
        {
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
  ATerm u_93 = NULL,v_93 = NULL;
  u_93 = t;
  s_93 :
  if(match_cons(u_93, sym_Not_1))
    {
      v_93 = ATgetArgument(u_93, 0);
      t_93 :
      if(match_cons(v_93, sym_Id_0))
        {
          t = term_v_17;
        }
      else
        {
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
  ATerm a_94 = NULL,b_94 = NULL;
  a_94 = t;
  y_93 :
  if(match_cons(a_94, sym_Test_1))
    {
      b_94 = ATgetArgument(a_94, 0);
      z_93 :
      if(match_cons(b_94, sym_Id_0))
        {
          t = term_x_17;
        }
      else
        {
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
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm b_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
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
                        t = I4_0(t);
                        LocalPopChoice(e_20);
                      }
                    else
                      {
                        t = d_20;
                        {
                          ATerm f_20 = t;
                          int k_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(k_20);
                            }
                          else
                            {
                              t = f_20;
                              {
                                ATerm l_20 = t;
                                int w_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(w_20);
                                  }
                                else
                                  {
                                    t = l_20;
                                    {
                                      ATerm x_20 = t;
                                      int y_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(y_20);
                                        }
                                      else
                                        {
                                          t = x_20;
                                          {
                                            ATerm z_20 = t;
                                            int a_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(a_21);
                                              }
                                            else
                                              {
                                                t = z_20;
                                                {
                                                  ATerm b_21 = t;
                                                  int c_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(c_21);
                                                    }
                                                  else
                                                    {
                                                      t = b_21;
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
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            {
              ATerm y_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = y_21;
                  {
                    ATerm b_22 = t;
                    int c_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(c_22);
                      }
                    else
                      {
                        t = b_22;
                        {
                          ATerm h_22 = t;
                          int i_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(i_22);
                            }
                          else
                            {
                              t = h_22;
                              {
                                ATerm j_22 = t;
                                int k_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(k_22);
                                  }
                                else
                                  {
                                    t = j_22;
                                    {
                                      ATerm l_22 = t;
                                      int q_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(q_22);
                                        }
                                      else
                                        {
                                          t = l_22;
                                          {
                                            ATerm r_22 = t;
                                            int t_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(t_22);
                                              }
                                            else
                                              {
                                                t = r_22;
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
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,g_96 = NULL,h_96 = NULL;
  y_95 = t;
  g_95 :
  if(match_cons(y_95, sym_LChoice_2))
    {
      z_95 = ATgetArgument(y_95, 0);
      h_96 = ATgetArgument(y_95, 1);
      h_95 :
      if(match_cons(z_95, sym_Matrix_2))
        {
          a_96 = ATgetArgument(z_95, 0);
          b_96 = ATgetArgument(z_95, 1);
          i_95 :
          if(match_cons(h_96, sym_Choice_2))
            {
              w_95 = ATgetArgument(h_96, 0);
              x_95 = ATgetArgument(h_96, 1);
              j_95 :
              if(match_cons(w_95, sym_Matrix_2))
                {
                  u_95 = ATgetArgument(w_95, 0);
                  v_95 = ATgetArgument(w_95, 1);
                  {
                    ATerm n_96 = NULL,p_96 = NULL;
                    ATerm u_22;
                    u_22 = t;
                    {
                      ATerm o_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                      {
                        t = union_0(t);
                        {
                          o_96 = t;
                          if(((n_96 != NULL) && (n_96 != o_96)))
                            _fail(o_96);
                          else
                            n_96 = o_96;
                        }
                      }
                    }
                    t = u_22;
                    {
                      ATerm q_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_96), not_null(v_95));
                      {
                        t = conc_0(t);
                        {
                          q_96 = t;
                          if(((p_96 != NULL) && (p_96 != q_96)))
                            _fail(q_96);
                          else
                            p_96 = q_96;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(n_96), not_null(p_96)), not_null(x_95));
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
              if(match_cons(h_96, sym_LChoice_2))
                {
                  w_95 = ATgetArgument(h_96, 0);
                  x_95 = ATgetArgument(h_96, 1);
                  k_95 :
                  if(match_cons(w_95, sym_Matrix_2))
                    {
                      u_95 = ATgetArgument(w_95, 0);
                      v_95 = ATgetArgument(w_95, 1);
                      {
                        ATerm y_96 = NULL,a_97 = NULL;
                        ATerm v_22;
                        v_22 = t;
                        {
                          ATerm z_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                          {
                            t = union_0(t);
                            {
                              z_96 = t;
                              if(((y_96 != NULL) && (y_96 != z_96)))
                                _fail(z_96);
                              else
                                y_96 = z_96;
                            }
                          }
                        }
                        t = v_22;
                        {
                          ATerm b_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_96), not_null(v_95));
                          {
                            t = conc_0(t);
                            {
                              b_97 = t;
                              if(((a_97 != NULL) && (a_97 != b_97)))
                                _fail(b_97);
                              else
                                a_97 = b_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(y_96), not_null(a_97)), not_null(x_95));
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
                  if(match_cons(h_96, sym_Matrix_2))
                    {
                      w_95 = ATgetArgument(h_96, 0);
                      x_95 = ATgetArgument(h_96, 1);
                      {
                        ATerm g_97 = NULL,i_97 = NULL;
                        ATerm x_22;
                        x_22 = t;
                        {
                          ATerm h_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(w_95));
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
                        t = x_22;
                        {
                          ATerm j_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_96), not_null(x_95));
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
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(g_97), not_null(i_97));
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
      if(match_cons(y_95, sym_Choice_2))
        {
          z_95 = ATgetArgument(y_95, 0);
          h_96 = ATgetArgument(y_95, 1);
          l_95 :
          if(match_cons(z_95, sym_Matrix_2))
            {
              a_96 = ATgetArgument(z_95, 0);
              b_96 = ATgetArgument(z_95, 1);
              m_95 :
              if(match_cons(h_96, sym_LChoice_2))
                {
                  w_95 = ATgetArgument(h_96, 0);
                  x_95 = ATgetArgument(h_96, 1);
                  n_95 :
                  if(match_cons(w_95, sym_Matrix_2))
                    {
                      u_95 = ATgetArgument(w_95, 0);
                      v_95 = ATgetArgument(w_95, 1);
                      {
                        ATerm p_97 = NULL,r_97 = NULL;
                        ATerm z_22;
                        z_22 = t;
                        {
                          ATerm q_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                          {
                            t = union_0(t);
                            {
                              q_97 = t;
                              if(((p_97 != NULL) && (p_97 != q_97)))
                                _fail(q_97);
                              else
                                p_97 = q_97;
                            }
                          }
                        }
                        t = z_22;
                        {
                          ATerm s_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_96), not_null(v_95));
                          {
                            t = conc_0(t);
                            {
                              s_97 = t;
                              if(((r_97 != NULL) && (r_97 != s_97)))
                                _fail(s_97);
                              else
                                r_97 = s_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(p_97), not_null(r_97)), not_null(x_95));
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
                  if(match_cons(h_96, sym_Choice_2))
                    {
                      w_95 = ATgetArgument(h_96, 0);
                      x_95 = ATgetArgument(h_96, 1);
                      o_95 :
                      if(match_cons(w_95, sym_Matrix_2))
                        {
                          u_95 = ATgetArgument(w_95, 0);
                          v_95 = ATgetArgument(w_95, 1);
                          {
                            ATerm c_98 = NULL,f_98 = NULL;
                            ATerm a_23;
                            a_23 = t;
                            {
                              ATerm e_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                              {
                                t = union_0(t);
                                {
                                  e_98 = t;
                                  if(((c_98 != NULL) && (c_98 != e_98)))
                                    _fail(e_98);
                                  else
                                    c_98 = e_98;
                                }
                              }
                            }
                            t = a_23;
                            {
                              ATerm l_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_96), not_null(v_95));
                              {
                                t = conc_0(t);
                                {
                                  l_98 = t;
                                  if(((f_98 != NULL) && (f_98 != l_98)))
                                    _fail(l_98);
                                  else
                                    f_98 = l_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(c_98), not_null(f_98)), not_null(x_95));
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
                      if(match_cons(h_96, sym_Matrix_2))
                        {
                          w_95 = ATgetArgument(h_96, 0);
                          x_95 = ATgetArgument(h_96, 1);
                          {
                            ATerm u_98 = NULL,w_98 = NULL;
                            ATerm e_23;
                            e_23 = t;
                            {
                              ATerm v_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(w_95));
                              {
                                t = union_0(t);
                                {
                                  v_98 = t;
                                  if(((u_98 != NULL) && (u_98 != v_98)))
                                    _fail(v_98);
                                  else
                                    u_98 = v_98;
                                }
                              }
                            }
                            t = e_23;
                            {
                              ATerm x_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_96), not_null(x_95));
                              {
                                t = conc_0(t);
                                {
                                  x_98 = t;
                                  if(((w_98 != NULL) && (w_98 != x_98)))
                                    _fail(x_98);
                                  else
                                    w_98 = x_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(u_98), not_null(w_98));
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
          if(match_cons(y_95, sym_Scope_2))
            {
              z_95 = ATgetArgument(y_95, 0);
              h_96 = ATgetArgument(y_95, 1);
              p_95 :
              if(match_cons(h_96, sym_Matrix_2))
                {
                  w_95 = ATgetArgument(h_96, 0);
                  x_95 = ATgetArgument(h_96, 1);
                  {
                    ATerm d_99 = NULL;
                    ATerm j_99 = NULL;
                    t = not_null(x_95);
                    {
                      ATerm p_3 (ATerm t)
                      {
                        ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
                        e_99 = t;
                        y_94 :
                        if(match_cons(e_99, sym_Row_2))
                          {
                            f_99 = ATgetArgument(e_99, 0);
                            g_99 = ATgetArgument(e_99, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(f_99), (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_95), not_null(g_99)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, p_3);
                      {
                        j_99 = t;
                        if(((d_99 != NULL) && (d_99 != j_99)))
                          _fail(j_99);
                        else
                          d_99 = j_99;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(w_95), not_null(d_99));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(y_95, sym_Seq_2))
                {
                  z_95 = ATgetArgument(y_95, 0);
                  h_96 = ATgetArgument(y_95, 1);
                  q_95 :
                  if(match_cons(z_95, sym_Matrix_2))
                    {
                      a_96 = ATgetArgument(z_95, 0);
                      b_96 = ATgetArgument(z_95, 1);
                      r_95 :
                      if(((ATgetType(b_96) == AT_LIST) && ((ATermList) b_96 != ATempty)))
                        {
                          c_96 = ATgetFirst((ATermList) b_96);
                          g_96 = (ATerm) ATgetNext((ATermList) b_96);
                          s_95 :
                          if(match_cons(c_96, sym_Row_2))
                            {
                              d_96 = ATgetArgument(c_96, 0);
                              e_96 = ATgetArgument(c_96, 1);
                              t_95 :
                              if(((ATermList) g_96 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(a_96), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(d_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_96), not_null(h_96)))));
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
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
ATerm foldr_3 (ATerm t, ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm))
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_109(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
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
              ATerm h_23;
              h_23 = t;
              {
                ATerm b_101 = NULL;
                t = not_null(w_100);
                {
                  t = f_109(t);
                  {
                    b_101 = t;
                    if(((a_101 != NULL) && (a_101 != b_101)))
                      _fail(b_101);
                    else
                      a_101 = b_101;
                  }
                }
              }
              t = h_23;
              {
                ATerm d_101 = NULL;
                t = not_null(x_100);
                {
                  t = foldr_3(t, d_109, e_109, f_109);
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
      t = foldr_3(t, v_110, w_110, x_110);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm m_111 (ATerm))
{
  ATerm z_101 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_101 = NULL;
        ATerm y_101 = NULL;
        t = m_111(t);
        {
          y_101 = t;
          if(((x_101 != NULL) && (x_101 != y_101)))
            _fail(y_101);
          else
            x_101 = y_101;
        }
        t = (ATerm) ATinsert(ATempty, not_null(x_101));
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm q_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, q_3, union_0, z_101);
        }
      }
    return(t);
  }
  t = z_101(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm o_111 (ATerm))
{
  t = collect_om_1(t, o_111);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
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
  t = collect_1(t, r_3);
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
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL;
  l_103 = t;
  e_103 :
  if(match_cons(l_103, sym_As_2))
    {
      m_103 = ATgetArgument(l_103, 0);
      o_103 = ATgetArgument(l_103, 1);
      f_103 :
      if(match_cons(m_103, sym_Var_1))
        {
          n_103 = ATgetArgument(m_103, 0);
          g_103 :
          if(match_cons(o_103, sym_As_2))
            {
              p_103 = ATgetArgument(o_103, 0);
              k_103 = ATgetArgument(o_103, 1);
              h_103 :
              if(match_cons(p_103, sym_Off_1))
                {
                  j_103 = ATgetArgument(p_103, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_103)), not_null(k_103));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_103, sym_Off_1))
            {
              n_103 = ATgetArgument(m_103, 0);
              i_103 :
              if(match_cons(o_103, sym_Var_1))
                {
                  p_103 = ATgetArgument(o_103, 0);
                  {
                    t = not_null(n_103);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_103)), term_m_12);
                  }
                }
              else
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
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL;
  d_104 = t;
  c_104 :
  if(match_cons(d_104, sym__2))
    {
      e_104 = ATgetArgument(d_104, 0);
      f_104 = ATgetArgument(d_104, 1);
      if(((e_104 != NULL) && (e_104 != f_104)))
        _fail(f_104);
      else
        e_104 = f_104;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm))
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
  r_104 = t;
  q_104 :
  if(((ATgetType(r_104) == AT_LIST) && ((ATermList) r_104 != ATempty)))
    {
      s_104 = ATgetFirst((ATermList) r_104);
      t_104 = (ATerm) ATgetNext((ATermList) r_104);
      {
        t = j_110(t);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm w_104 = NULL;
            w_104 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_104), not_null(w_104));
              t = i_110(t);
            }
            return(t);
          }
          t = fetch_1(t, s_3);
        }
        t = not_null(t_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm k_110 (ATerm))
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
  c_105 = t;
  b_105 :
  if(match_cons(c_105, sym__2))
    {
      d_105 = ATgetArgument(c_105, 0);
      e_105 = ATgetArgument(c_105, 1);
      {
        t = not_null(d_105);
        {
          ATerm j_105 (ATerm t)
          {
            ATerm q_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_105);
                LocalPopChoice(t_23);
              }
            else
              {
                t = q_23;
                {
                  ATerm u_23 = t;
                  int v_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_3 (ATerm t)
                      {
                        t = not_null(e_105);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_110, t_3);
                      t = j_105(t);
                      LocalPopChoice(v_23);
                    }
                  else
                    {
                      t = u_23;
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
ATerm unions_1 (ATerm t, ATerm m_110 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = union_1(t, m_110);
    return(t);
  }
  t = foldr_2(t, u_3, v_3);
  return(t);
}
ATerm unions_0 (ATerm t)
{
  t = unions_1(t, eq_0);
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
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
  g_106 = t;
  f_106 :
  if(((ATgetType(g_106) == AT_LIST) && ((ATermList) g_106 != ATempty)))
    {
      h_106 = ATgetFirst((ATermList) g_106);
      i_106 = (ATerm) ATgetNext((ATermList) g_106);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_106), not_null(i_106));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm o_106 = NULL;
  o_106 = t;
  n_106 :
  if(((ATermList) o_106 == ATempty))
    {
      t = term_w_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm a_115 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, a_115);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm g_112 (ATerm), ATerm h_112 (ATerm))
{
  ATerm h_107 = NULL;
  ATerm k_107 = NULL,l_107 = NULL,s_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,u_108 = NULL;
  h_107 = t;
  {
    ATerm x_23;
    x_23 = t;
    {
      ATerm m_107 = NULL;
      ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL;
      t = not_null(h_107);
      {
        m_107 = t;
        {
          t = SSL_explode_term(not_null(m_107));
          {
            p_107 = t;
            u_106 :
            if(match_cons(p_107, sym__2))
              {
                q_107 = ATgetArgument(p_107, 0);
                r_107 = ATgetArgument(p_107, 1);
                {
                  if(((k_107 != NULL) && (k_107 != q_107)))
                    _fail(q_107);
                  else
                    k_107 = q_107;
                  if(((l_107 != NULL) && (l_107 != r_107)))
                    _fail(r_107);
                  else
                    l_107 = r_107;
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
    t = x_23;
    {
      ATerm y_23;
      y_23 = t;
      {
        ATerm t_107 = NULL;
        t = SSLgetAnnotations(not_null(h_107));
        {
          t_107 = t;
          if(((s_107 != NULL) && (s_107 != t_107)))
            _fail(t_107);
          else
            s_107 = t_107;
        }
      }
      t = y_23;
      {
        ATerm z_23;
        z_23 = t;
        {
          ATerm i_108 = NULL,j_108 = NULL,k_108 = NULL;
          t = not_null(l_107);
          {
            t = unzip_1(t, g_112);
            {
              i_108 = t;
              e_107 :
              if(match_cons(i_108, sym__2))
                {
                  j_108 = ATgetArgument(i_108, 0);
                  k_108 = ATgetArgument(i_108, 1);
                  {
                    ATerm l_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL;
                    if(((x_107 != NULL) && (x_107 != j_108)))
                      _fail(j_108);
                    else
                      x_107 = j_108;
                    {
                      if(((w_107 != NULL) && (w_107 != k_108)))
                        _fail(k_108);
                      else
                        w_107 = k_108;
                      {
                        ATerm m_108 = NULL,q_108 = NULL;
                        ATerm a_24;
                        a_24 = t;
                        {
                          ATerm n_108 = NULL;
                          ATerm p_108 = NULL;
                          t = SSL_mkterm(not_null(k_107), not_null(x_107));
                          {
                            n_108 = t;
                            {
                              p_108 = t;
                              if(((m_108 != NULL) && (m_108 != p_108)))
                                _fail(p_108);
                              else
                                m_108 = p_108;
                            }
                          }
                        }
                        t = a_24;
                        {
                          t = SSLsetAnnotations(not_null(m_108), not_null(s_107));
                          {
                            q_108 = t;
                            if(((l_108 != NULL) && (l_108 != q_108)))
                              _fail(q_108);
                            else
                              l_108 = q_108;
                          }
                        }
                        {
                          t = not_null(l_108);
                          {
                            t = h_112(t);
                            {
                              r_108 = t;
                              d_107 :
                              if(match_cons(r_108, sym__2))
                                {
                                  s_108 = ATgetArgument(r_108, 0);
                                  t_108 = ATgetArgument(r_108, 1);
                                  {
                                    if(((y_107 != NULL) && (y_107 != s_108)))
                                      _fail(s_108);
                                    else
                                      y_107 = s_108;
                                    if(((z_107 != NULL) && (z_107 != t_108)))
                                      _fail(t_108);
                                    else
                                      z_107 = t_108;
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
        t = z_23;
        {
          ATerm v_108 = NULL,x_108 = NULL;
          ATerm w_108 = NULL;
          t = not_null(w_107);
          {
            t = unions_0(t);
            {
              w_108 = t;
              if(((v_108 != NULL) && (v_108 != w_108)))
                _fail(w_108);
              else
                v_108 = w_108;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_107), not_null(v_108));
            {
              t = union_0(t);
              {
                x_108 = t;
                if(((u_108 != NULL) && (u_108 != x_108)))
                  _fail(x_108);
                else
                  u_108 = x_108;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_107), not_null(u_108));
        }
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm d_112 (ATerm), ATerm e_112 (ATerm))
{
  ATerm u_109 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm q_109 = NULL,s_109 = NULL;
      ATerm b_24;
      b_24 = t;
      {
        ATerm r_109 = NULL;
        t = try_1(t, d_112);
        {
          r_109 = t;
          if(((q_109 != NULL) && (q_109 != r_109)))
            _fail(r_109);
          else
            q_109 = r_109;
        }
      }
      t = b_24;
      {
        ATerm t_109 = NULL;
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_112(t);
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = (ATerm) ATempty;
          }
        {
          t_109 = t;
          if(((s_109 != NULL) && (s_109 != t_109)))
            _fail(t_109);
          else
            s_109 = t_109;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_109), not_null(s_109));
      }
      return(t);
    }
    t = CollectSplit_2(t, u_109, w_3);
    return(t);
  }
  t = u_109(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm j_122 (ATerm))
{
  ATerm a_110 = NULL,b_110 = NULL,d_110 = NULL;
  a_110 = t;
  z_109 :
  if(match_cons(a_110, sym__2))
    {
      b_110 = ATgetArgument(a_110, 0);
      d_110 = ATgetArgument(a_110, 1);
      {
        ATerm g_110 = NULL;
        ATerm h_110 = NULL;
        t = j_122(t);
        {
          h_110 = t;
          if(((g_110 != NULL) && (g_110 != h_110)))
            _fail(h_110);
          else
            g_110 = h_110;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(g_110)), not_null(b_110))), not_null(d_110));
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
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL;
  y_110 = t;
  s_110 :
  if(match_cons(y_110, sym__2))
    {
      z_110 = ATgetArgument(y_110, 0);
      a_111 = ATgetArgument(y_110, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_111)), not_null(z_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,p_111 = NULL;
  i_111 = t;
  g_111 :
  if(match_cons(i_111, sym__2))
    {
      j_111 = ATgetArgument(i_111, 0);
      k_111 = ATgetArgument(i_111, 1);
      h_111 :
      if(((ATgetType(k_111) == AT_LIST) && ((ATermList) k_111 != ATempty)))
        {
          l_111 = ATgetFirst((ATermList) k_111);
          p_111 = (ATerm) ATgetNext((ATermList) k_111);
          {
            ATerm t_111 = NULL;
            ATerm u_111 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_111), term_r_12);
            {
              t = add_0(t);
              {
                u_111 = t;
                if(((t_111 != NULL) && (t_111 != u_111)))
                  _fail(u_111);
                else
                  t_111 = u_111;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_111), not_null(l_111)), (ATerm) ATmakeAppl(sym__2, not_null(t_111), not_null(p_111)));
          }
        }
      else
        {
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
  ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL;
  a_112 = t;
  y_111 :
  if(match_cons(a_112, sym__2))
    {
      b_112 = ATgetArgument(a_112, 0);
      c_112 = ATgetArgument(a_112, 1);
      z_111 :
      if(((ATermList) c_112 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm))
{
  ATerm k_112 (ATerm t)
  {
    ATerm i_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_114(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = i_24;
        {
          t = r_114(t);
          {
            t = _2(t, t_114, k_112);
            t = s_114(t);
          }
        }
      }
    return(t);
  }
  t = k_112(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm m_112 = NULL;
  m_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(m_112));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm b_115 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, b_115);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL;
  ATerm b_114 (ATerm t)
  {
    ATerm p_113 = NULL;
    ATerm q_113 = NULL;
    t = not_null(k_113);
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          t = not_null(j_113);
          return(t);
        }
        t = Annotate_1(t, y_3);
        return(t);
      }
      t = nzip0_1(t, x_3);
      {
        q_113 = t;
        if(((p_113 != NULL) && (p_113 != q_113)))
          _fail(q_113);
        else
          p_113 = q_113;
      }
    }
    t = not_null(p_113);
    return(t);
  }
  ATerm c_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_113)), term_m_12);
    return(t);
  }
  ATerm d_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_113)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_113)), not_null(m_113)));
    return(t);
  }
  ATerm e_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_113)), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_113), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_113)), not_null(m_113))));
    return(t);
  }
  f_113 = t;
  y_112 :
  if(match_cons(f_113, sym_As_2))
    {
      i_113 = ATgetArgument(f_113, 0);
      k_113 = ATgetArgument(f_113, 1);
      z_112 :
      if(match_cons(i_113, sym_Off_1))
        {
          j_113 = ATgetArgument(i_113, 0);
          c_113 :
          if(match_cons(k_113, sym_BuildDefault_1))
            {
              l_113 = ATgetArgument(k_113, 0);
              {
                ATerm o_24 = t;
                int r_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_114(t);
                    LocalPopChoice(r_24);
                  }
                else
                  {
                    t = o_24;
                    t = c_114(t);
                  }
              }
            }
          else
            {
              if(match_cons(k_113, sym_As_2))
                {
                  l_113 = ATgetArgument(k_113, 0);
                  m_113 = ATgetArgument(k_113, 1);
                  d_113 :
                  if(match_cons(l_113, sym_Var_1))
                    {
                      e_113 = ATgetArgument(l_113, 0);
                      {
                        ATerm s_24 = t;
                        int t_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = b_114(t);
                            LocalPopChoice(t_24);
                          }
                        else
                          {
                            t = s_24;
                            t = d_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = b_114(t);
                    }
                }
              else
                {
                  if(match_cons(k_113, sym_Op_2))
                    {
                      l_113 = ATgetArgument(k_113, 0);
                      m_113 = ATgetArgument(k_113, 1);
                      {
                        ATerm u_24 = t;
                        int v_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = b_114(t);
                            LocalPopChoice(v_24);
                          }
                        else
                          {
                            t = u_24;
                            t = e_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = b_114(t);
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
ATerm topdown_1 (ATerm t, ATerm l_117 (ATerm))
{
  t = l_117(t);
  {
    ATerm z_3 (ATerm t)
    {
      t = topdown_1(t, l_117);
      return(t);
    }
    t = _all(t, z_3);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm l_114 = NULL;
  ATerm n_114 = NULL,o_114 = NULL,p_114 = NULL;
  l_114 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_w_24, (ATerm) ATinsert(ATempty, not_null(l_114)));
    {
      ATerm a_4 (ATerm t)
      {
        t = try_1(t, Propagate_0);
        return(t);
      }
      t = topdown_1(t, a_4);
      {
        t = collect_substitutions_0(t);
        {
          n_114 = t;
          k_114 :
          if(match_cons(n_114, sym__2))
            {
              o_114 = ATgetArgument(n_114, 0);
              p_114 = ATgetArgument(n_114, 1);
              {
                ATerm y_114 = NULL;
                ATerm z_114 = NULL;
                t = not_null(o_114);
                {
                  t = collect_offsets_0(t);
                  {
                    z_114 = t;
                    if(((y_114 != NULL) && (y_114 != z_114)))
                      _fail(z_114);
                    else
                      y_114 = z_114;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(y_114), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(o_114), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_114)))));
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
  ATerm i_115 = NULL,j_115 = NULL;
  i_115 = t;
  h_115 :
  if(match_cons(i_115, sym_Match_1))
    {
      j_115 = ATgetArgument(i_115, 0);
      {
        t = not_null(j_115);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm t_103 (ATerm), ATerm u_103 (ATerm))
{
  ATerm m_115 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_103(t);
        t = m_115(t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        t = u_103(t);
      }
    return(t);
  }
  t = m_115(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_103 (ATerm))
{
  t = repeat_2(t, w_103, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm n_117 (ATerm))
{
  ATerm n_115 (ATerm t)
  {
    t = n_117(t);
    {
      t = _all(t, n_115);
      t = n_117(t);
    }
    return(t);
  }
  t = n_115(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
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
                t = MatrixMerge_0(t);
                LocalPopChoice(c_25);
              }
            else
              {
                t = b_25;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, c_4);
    return(t);
  }
  t = downup_1(t, b_4);
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
ATerm SDef_3 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL;
  v_115 = t;
  u_115 :
  if(match_cons(v_115, sym_SDef_3))
    {
      w_115 = ATgetArgument(v_115, 0);
      x_115 = ATgetArgument(v_115, 1);
      y_115 = ATgetArgument(v_115, 2);
      {
        ATerm d_116 = NULL,h_116 = NULL;
        ATerm g_116 = NULL;
        t = SSLgetAnnotations(not_null(v_115));
        {
          g_116 = t;
          if(((d_116 != NULL) && (d_116 != g_116)))
            _fail(g_116);
          else
            d_116 = g_116;
        }
        {
          t = not_null(w_115);
          {
            ATerm j_116 = NULL;
            t = p_91(t);
            {
              h_116 = t;
              {
                t = not_null(x_115);
                {
                  ATerm l_116 = NULL;
                  t = q_91(t);
                  {
                    j_116 = t;
                    {
                      t = not_null(y_115);
                      {
                        ATerm n_116 = NULL;
                        t = r_91(t);
                        {
                          l_116 = t;
                          {
                            ATerm o_116 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(h_116), not_null(j_116), not_null(l_116)), not_null(d_116));
                            {
                              o_116 = t;
                              if(((n_116 != NULL) && (n_116 != o_116)))
                                _fail(o_116);
                              else
                                n_116 = o_116;
                            }
                            t = not_null(n_116);
                          }
                        }
                      }
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
  ATerm b_117 = NULL,c_117 = NULL;
  b_117 = t;
  a_117 :
  if(match_cons(b_117, sym_Strategies_1))
    {
      c_117 = ATgetArgument(b_117, 0);
      {
        ATerm f_117 = NULL,h_117 = NULL;
        ATerm g_117 = NULL;
        t = SSLgetAnnotations(not_null(b_117));
        {
          g_117 = t;
          if(((f_117 != NULL) && (f_117 != g_117)))
            _fail(g_117);
          else
            f_117 = g_117;
        }
        {
          t = not_null(c_117);
          {
            ATerm m_117 = NULL;
            t = c_90(t);
            {
              h_117 = t;
              {
                ATerm p_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(h_117)), not_null(f_117));
                {
                  p_117 = t;
                  if(((m_117 != NULL) && (m_117 != p_117)))
                    _fail(p_117);
                  else
                    m_117 = p_117;
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
ATerm Specification_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm z_117 = NULL,a_118 = NULL;
  z_117 = t;
  y_117 :
  if(match_cons(z_117, sym_Specification_1))
    {
      a_118 = ATgetArgument(z_117, 0);
      {
        ATerm d_118 = NULL,f_118 = NULL;
        ATerm e_118 = NULL;
        t = SSLgetAnnotations(not_null(z_117));
        {
          e_118 = t;
          if(((d_118 != NULL) && (d_118 != e_118)))
            _fail(e_118);
          else
            d_118 = e_118;
        }
        {
          t = not_null(a_118);
          {
            ATerm h_118 = NULL;
            t = e_90(t);
            {
              f_118 = t;
              {
                ATerm i_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(f_118)), not_null(d_118));
                {
                  i_118 = t;
                  if(((h_118 != NULL) && (h_118 != i_118)))
                    _fail(i_118);
                  else
                    h_118 = i_118;
                }
                t = not_null(h_118);
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
  ATerm d_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        ATerm j_4 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, k_122);
            return(t);
          }
          t = map_1(t, k_4);
          return(t);
        }
        t = Strategies_1(t, j_4);
        return(t);
      }
      t = Cons_2(t, i_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, e_4);
    return(t);
  }
  t = Specification_1(t, d_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL;
  t_118 = t;
  s_118 :
  if(match_cons(t_118, sym__2))
    {
      u_118 = ATgetArgument(t_118, 0);
      v_118 = ATgetArgument(t_118, 1);
      {
        ATerm z_118 = NULL,b_119 = NULL;
        ATerm a_119 = NULL;
        t = SSLgetAnnotations(not_null(t_118));
        {
          a_119 = t;
          if(((z_118 != NULL) && (z_118 != a_119)))
            _fail(a_119);
          else
            z_118 = a_119;
        }
        {
          t = not_null(u_118);
          {
            ATerm d_119 = NULL;
            t = j_80(t);
            {
              b_119 = t;
              {
                t = not_null(v_118);
                {
                  ATerm f_119 = NULL;
                  t = k_80(t);
                  {
                    d_119 = t;
                    {
                      ATerm g_119 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_119), not_null(d_119)), not_null(z_118));
                      {
                        g_119 = t;
                        if(((f_119 != NULL) && (f_119 != g_119)))
                          _fail(g_119);
                        else
                          f_119 = g_119;
                      }
                      t = not_null(f_119);
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
  ATerm o_119 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm p_119 = NULL,q_119 = NULL;
      p_119 = t;
      n_119 :
      if(match_cons(p_119, sym_Program_1))
        {
          q_119 = ATgetArgument(p_119, 0);
          if(((o_119 != NULL) && (o_119 != q_119)))
            _fail(q_119);
          else
            o_119 = q_119;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_25), not_null(o_119)), term_i_25));
      {
        t = printnl_0(t);
        {
          t = term_r_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_119 = NULL,v_119 = NULL,w_119 = NULL;
  u_119 = t;
  t_119 :
  if(match_cons(u_119, sym__2))
    {
      v_119 = ATgetArgument(u_119, 0);
      w_119 = ATgetArgument(u_119, 1);
      {
        ATerm p_25;
        p_25 = t;
        t = SSL_printnl(not_null(v_119), not_null(w_119));
        t = p_25;
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
  ATerm b_120 = NULL;
  b_120 = t;
  t = SSL_implode_string(not_null(b_120));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = q_25;
      {
        ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL;
        g_120 = t;
        f_120 :
        if(((ATgetType(g_120) == AT_LIST) && ((ATermList) g_120 != ATempty)))
          {
            h_120 = ATgetFirst((ATermList) g_120);
            i_120 = (ATerm) ATgetNext((ATermList) g_120);
            {
              t = not_null(h_120);
              {
                ATerm n_4 (ATerm t)
                {
                  t = not_null(i_120);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_4);
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
  ATerm s_120 = NULL;
  ATerm u_120 = NULL;
  s_120 = t;
  {
    ATerm v_120 = NULL;
    ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL;
    t = not_null(s_120);
    {
      v_120 = t;
      {
        t = SSL_explode_term(not_null(v_120));
        {
          x_120 = t;
          q_120 :
          if(match_cons(x_120, sym__2))
            {
              y_120 = ATgetArgument(x_120, 0);
              z_120 = ATgetArgument(x_120, 1);
              r_120 :
              if(match_string(y_120, ""))
                {
                  if(((u_120 != NULL) && (u_120 != z_120)))
                    _fail(z_120);
                  else
                    u_120 = z_120;
                }
              else
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
      t = not_null(u_120);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_113 (ATerm))
{
  ATerm d_121 (ATerm t)
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_121);
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        {
          t = Nil_0(t);
          t = g_113(t);
        }
      }
    return(t);
  }
  t = d_121(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_121 = NULL,p_121 = NULL,q_121 = NULL;
  g_121 = t;
  f_121 :
  if(match_cons(g_121, sym__2))
    {
      p_121 = ATgetArgument(g_121, 0);
      q_121 = ATgetArgument(g_121, 1);
      {
        t = not_null(p_121);
        {
          ATerm o_4 (ATerm t)
          {
            t = not_null(q_121);
            return(t);
          }
          t = at_end_1(t, o_4);
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
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_121 = NULL;
  v_121 = t;
  t = SSL_explode_string(not_null(v_121));
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
  ATerm b_26;
  b_26 = t;
  {
    ATerm a_122 = NULL,c_122 = NULL;
    ATerm c_26;
    c_26 = t;
    {
      ATerm b_122 = NULL;
      t = s_99(t);
      {
        b_122 = t;
        if(((a_122 != NULL) && (a_122 != b_122)))
          _fail(b_122);
        else
          a_122 = b_122;
      }
    }
    t = c_26;
    {
      ATerm d_122 = NULL;
      d_122 = t;
      if(((c_122 != NULL) && (c_122 != d_122)))
        _fail(d_122);
      else
        c_122 = d_122;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_122)), not_null(a_122)));
        t = printnl_0(t);
      }
    }
  }
  t = b_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_122 = NULL;
  i_122 = t;
  t = SSL_is_string(not_null(i_122));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_4);
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            {
              ATerm t_122 = NULL,u_122 = NULL,v_122 = NULL;
              t_122 = t;
              s_122 :
              if(match_cons(t_122, sym_Path_1))
                {
                  u_122 = ATgetArgument(t_122, 0);
                  t = not_null(u_122);
                }
              else
                {
                  if(match_cons(t_122, sym_Var_1))
                    {
                      u_122 = ATgetArgument(t_122, 0);
                      {
                        t = not_null(u_122);
                        {
                          ATerm h_26 = t;
                          int i_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(i_26);
                            }
                          else
                            {
                              t = h_26;
                              {
                                ATerm q_4 (ATerm t)
                                {
                                  t = term_j_26;
                                  return(t);
                                }
                                t = debug_1(t, q_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_122, sym_Prefix_2))
                        {
                          u_122 = ATgetArgument(t_122, 0);
                          v_122 = ATgetArgument(t_122, 1);
                          {
                            ATerm a_123 = NULL,c_123 = NULL;
                            ATerm k_26;
                            k_26 = t;
                            {
                              ATerm b_123 = NULL;
                              t = not_null(u_122);
                              {
                                t = eval_config_0(t);
                                {
                                  b_123 = t;
                                  if(((a_123 != NULL) && (a_123 != b_123)))
                                    _fail(b_123);
                                  else
                                    a_123 = b_123;
                                }
                              }
                            }
                            t = k_26;
                            {
                              ATerm d_123 = NULL;
                              t = not_null(v_122);
                              {
                                t = eval_config_0(t);
                                {
                                  d_123 = t;
                                  if(((c_123 != NULL) && (c_123 != d_123)))
                                    _fail(d_123);
                                  else
                                    c_123 = d_123;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_123), not_null(c_123));
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
  ATerm l_123 = NULL;
  l_123 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_26, not_null(l_123));
    {
      t = table_get_0(t);
      {
        ATerm r_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_26;
            m_26 = t;
            {
              ATerm n_123 = NULL;
              ATerm o_123 = NULL;
              o_123 = t;
              if(((n_123 != NULL) && (n_123 != o_123)))
                _fail(o_123);
              else
                n_123 = o_123;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_26, not_null(l_123), not_null(n_123));
                t = table_put_0(t);
              }
            }
            t = m_26;
          }
          return(t);
        }
        t = try_1(t, r_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm q_26;
    q_26 = t;
    {
      ATerm s_123 = NULL;
      ATerm t_123 = NULL;
      t = term_r_26;
      {
        t = get_config_0(t);
        {
          t_123 = t;
          if(((s_123 != NULL) && (s_123 != t_123)))
            _fail(t_123);
          else
            s_123 = t_123;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_123), term_v_26);
        t = geq_0(t);
      }
    }
    t = q_26;
    t = w_96(t);
    return(t);
  }
  t = try_1(t, s_4);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL;
  x_123 = t;
  w_123 :
  if(match_cons(x_123, sym__2))
    {
      y_123 = ATgetArgument(x_123, 0);
      z_123 = ATgetArgument(x_123, 1);
      t = SSL_WriteToTextFile(not_null(y_123), not_null(z_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL;
  f_124 = t;
  e_124 :
  if(match_cons(f_124, sym__2))
    {
      g_124 = ATgetArgument(f_124, 0);
      h_124 = ATgetArgument(f_124, 1);
      t = SSL_WriteToBinaryFile(not_null(g_124), not_null(h_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_124 = NULL;
  ATerm y_26;
  y_26 = t;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm z_26 = t;
      int d_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 (ATerm t)
          {
            ATerm q_124 = NULL,r_124 = NULL;
            q_124 = t;
            m_124 :
            if(match_cons(q_124, sym_Output_1))
              {
                r_124 = ATgetArgument(q_124, 0);
                if(((p_124 != NULL) && (p_124 != r_124)))
                  _fail(r_124);
                else
                  p_124 = r_124;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_4);
          LocalPopChoice(d_27);
        }
      else
        {
          t = z_26;
          {
            ATerm s_124 = NULL;
            t = term_g_27;
            {
              s_124 = t;
              if(((p_124 != NULL) && (p_124 != s_124)))
                _fail(s_124);
              else
                p_124 = s_124;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_4, _id);
  }
  t = y_26;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm w_4 (ATerm t)
      {
        t = not_null(p_124);
        return(t);
      }
      t = split_2(t, w_4, _id);
      return(t);
    }
    t = _2(t, _id, v_4);
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_4 (ATerm t)
          {
            ATerm y_4 (ATerm t)
            {
              ATerm t_124 = NULL;
              t_124 = t;
              o_124 :
              if(!(match_cons(t_124, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, y_4);
            return(t);
          }
          t = _2(t, x_4, WriteToBinaryFile_0);
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
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
  ATerm z_124 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL;
  ATerm j_27;
  j_27 = t;
  t = dtime_0(t);
  t = j_27;
  {
    t = c_99(t);
    {
      ATerm k_27;
      k_27 = t;
      {
        ATerm a_125 = NULL;
        t = dtime_0(t);
        {
          a_125 = t;
          if(((z_124 != NULL) && (z_124 != a_125)))
            _fail(a_125);
          else
            z_124 = a_125;
        }
      }
      t = k_27;
      {
        b_125 = t;
        y_124 :
        if(match_cons(b_125, sym__2))
          {
            c_125 = ATgetArgument(b_125, 0);
            d_125 = ATgetArgument(b_125, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_125)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_124))), not_null(d_125));
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
  ATerm j_125 = NULL;
  j_125 = t;
  t = SSL_ReadFromFile(not_null(j_125));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_116 (ATerm), ATerm f_116 (ATerm))
{
  ATerm o_125 = NULL,q_125 = NULL;
  ATerm l_27;
  l_27 = t;
  {
    ATerm p_125 = NULL;
    t = e_116(t);
    {
      p_125 = t;
      if(((o_125 != NULL) && (o_125 != p_125)))
        _fail(p_125);
      else
        o_125 = p_125;
    }
  }
  t = l_27;
  {
    ATerm r_125 = NULL;
    t = f_116(t);
    {
      r_125 = t;
      if(((q_125 != NULL) && (q_125 != r_125)))
        _fail(r_125);
      else
        q_125 = r_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_125), not_null(q_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_125 = NULL;
  ATerm m_27;
  m_27 = t;
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 (ATerm t)
        {
          ATerm y_125 = NULL,z_125 = NULL;
          y_125 = t;
          v_125 :
          if(match_cons(y_125, sym_Input_1))
            {
              z_125 = ATgetArgument(y_125, 0);
              if(((x_125 != NULL) && (x_125 != z_125)))
                _fail(z_125);
              else
                x_125 = z_125;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_4);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        {
          ATerm a_126 = NULL;
          t = term_p_27;
          {
            a_126 = t;
            if(((x_125 != NULL) && (x_125 != a_126)))
              _fail(a_126);
            else
              x_125 = a_126;
          }
        }
      }
  }
  t = m_27;
  {
    ATerm a_5 (ATerm t)
    {
      t = not_null(x_125);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_5);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_126 = NULL;
  e_126 = t;
  t = SSL_string_to_int(not_null(e_126));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL;
  m_126 = t;
  k_126 :
  if(match_string(m_126, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_126) == AT_LIST) && ((ATermList) m_126 != ATempty)))
        {
          n_126 = ATgetFirst((ATermList) m_126);
          o_126 = (ATerm) ATgetNext((ATermList) m_126);
          l_126 :
          if(((ATgetType(o_126) == AT_LIST) && ((ATermList) o_126 != ATempty)))
            {
              p_126 = ATgetFirst((ATermList) o_126);
              q_126 = (ATerm) ATgetNext((ATermList) o_126);
              {
                ATerm u_126 = NULL;
                ATerm q_27;
                q_27 = t;
                {
                  t = not_null(n_126);
                  t = j_0(t);
                }
                t = q_27;
                {
                  ATerm v_126 = NULL;
                  t = not_null(p_126);
                  {
                    t = k_0(t);
                    {
                      v_126 = t;
                      if(((u_126 != NULL) && (u_126 != v_126)))
                        _fail(v_126);
                      else
                        u_126 = v_126;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_126)), not_null(u_126));
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
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_5 (ATerm t)
      {
        ATerm o_127 = NULL;
        o_127 = t;
        z_126 :
        if(!(match_string(o_127, "-i")))
          {
            if(!(match_string(o_127, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm r_127 = NULL;
        ATerm t_27;
        t_27 = t;
        {
          ATerm p_127 = NULL;
          ATerm q_127 = NULL;
          q_127 = t;
          if(((p_127 != NULL) && (p_127 != q_127)))
            _fail(q_127);
          else
            p_127 = q_127;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_u_27, not_null(p_127));
            t = set_config_0(t);
          }
        }
        t = t_27;
        {
          ATerm s_127 = NULL;
          s_127 = t;
          if(((r_127 != NULL) && (r_127 != s_127)))
            _fail(s_127);
          else
            r_127 = s_127;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_127));
        }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_v_27;
        return(t);
      }
      t = ArgOption_3(t, b_5, c_5, d_5);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 (ATerm t)
            {
              ATerm t_127 = NULL;
              t_127 = t;
              c_127 :
              if(!(match_string(t_127, "-o")))
                {
                  if(!(match_string(t_127, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_5 (ATerm t)
            {
              ATerm w_127 = NULL;
              ATerm e_28;
              e_28 = t;
              {
                ATerm u_127 = NULL;
                ATerm v_127 = NULL;
                v_127 = t;
                if(((u_127 != NULL) && (u_127 != v_127)))
                  _fail(v_127);
                else
                  u_127 = v_127;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_28, not_null(u_127));
                  t = set_config_0(t);
                }
              }
              t = e_28;
              {
                ATerm x_127 = NULL;
                x_127 = t;
                if(((w_127 != NULL) && (w_127 != x_127)))
                  _fail(x_127);
                else
                  w_127 = x_127;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_127));
              }
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              t = term_i_28;
              return(t);
            }
            t = ArgOption_3(t, e_5, f_5, g_5);
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            {
              ATerm m_28 = t;
              int p_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm y_127 = NULL;
                    y_127 = t;
                    f_127 :
                    if(!(match_string(y_127, "-S")))
                      {
                        if(!(match_string(y_127, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_5 (ATerm t)
                  {
                    t = term_q_28;
                    t = set_config_0(t);
                    t = term_r_28;
                    return(t);
                  }
                  ATerm j_5 (ATerm t)
                  {
                    t = term_s_28;
                    return(t);
                  }
                  t = Option_3(t, h_5, i_5, j_5);
                  LocalPopChoice(p_28);
                }
              else
                {
                  t = m_28;
                  {
                    ATerm t_28 = t;
                    int u_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_5 (ATerm t)
                        {
                          ATerm z_127 = NULL;
                          z_127 = t;
                          g_127 :
                          if(!(match_string(z_127, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_5 (ATerm t)
                        {
                          ATerm c_128 = NULL;
                          ATerm v_28;
                          v_28 = t;
                          {
                            ATerm a_128 = NULL;
                            ATerm b_128 = NULL;
                            t = string_to_int_0(t);
                            {
                              b_128 = t;
                              if(((a_128 != NULL) && (a_128 != b_128)))
                                _fail(b_128);
                              else
                                a_128 = b_128;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_26, not_null(a_128));
                              t = set_config_0(t);
                            }
                          }
                          t = v_28;
                          {
                            ATerm d_128 = NULL;
                            d_128 = t;
                            if(((c_128 != NULL) && (c_128 != d_128)))
                              _fail(d_128);
                            else
                              c_128 = d_128;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_128));
                          }
                          return(t);
                        }
                        ATerm m_5 (ATerm t)
                        {
                          t = term_w_28;
                          return(t);
                        }
                        t = ArgOption_3(t, k_5, l_5, m_5);
                        LocalPopChoice(u_28);
                      }
                    else
                      {
                        t = t_28;
                        {
                          ATerm x_28 = t;
                          int y_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_5 (ATerm t)
                              {
                                ATerm e_128 = NULL;
                                e_128 = t;
                                j_127 :
                                if(!(match_string(e_128, "-k")))
                                  {
                                    if(!(match_string(e_128, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_5 (ATerm t)
                              {
                                ATerm z_28;
                                z_28 = t;
                                {
                                  ATerm f_128 = NULL;
                                  ATerm g_128 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    g_128 = t;
                                    if(((f_128 != NULL) && (f_128 != g_128)))
                                      _fail(g_128);
                                    else
                                      f_128 = g_128;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_29, not_null(f_128));
                                    t = set_config_0(t);
                                  }
                                }
                                t = z_28;
                                return(t);
                              }
                              ATerm p_5 (ATerm t)
                              {
                                t = term_b_29;
                                return(t);
                              }
                              t = ArgOption_3(t, n_5, o_5, p_5);
                              LocalPopChoice(y_28);
                            }
                          else
                            {
                              t = x_28;
                              {
                                ATerm c_29 = t;
                                int d_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_5 (ATerm t)
                                    {
                                      ATerm h_128 = NULL;
                                      h_128 = t;
                                      l_127 :
                                      if(!(match_string(h_128, "-v")))
                                        {
                                          if(!(match_string(h_128, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_5 (ATerm t)
                                    {
                                      t = term_j_29;
                                      t = set_config_0(t);
                                      t = term_n_29;
                                      return(t);
                                    }
                                    ATerm s_5 (ATerm t)
                                    {
                                      t = term_q_29;
                                      return(t);
                                    }
                                    t = Option_3(t, q_5, r_5, s_5);
                                    LocalPopChoice(d_29);
                                  }
                                else
                                  {
                                    t = c_29;
                                    {
                                      ATerm r_29 = t;
                                      int v_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_5 (ATerm t)
                                          {
                                            ATerm i_128 = NULL;
                                            i_128 = t;
                                            m_127 :
                                            if(!(match_string(i_128, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_5 (ATerm t)
                                          {
                                            t = term_z_29;
                                            t = set_config_0(t);
                                            t = term_a_30;
                                            return(t);
                                          }
                                          ATerm v_5 (ATerm t)
                                          {
                                            t = term_b_30;
                                            return(t);
                                          }
                                          t = Option_3(t, t_5, u_5, v_5);
                                          LocalPopChoice(v_29);
                                        }
                                      else
                                        {
                                          t = r_29;
                                          {
                                            ATerm w_5 (ATerm t)
                                            {
                                              ATerm j_128 = NULL;
                                              j_128 = t;
                                              n_127 :
                                              if(!(match_string(j_128, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_5 (ATerm t)
                                            {
                                              t = term_d_30;
                                              t = set_config_0(t);
                                              t = term_e_30;
                                              return(t);
                                            }
                                            ATerm y_5 (ATerm t)
                                            {
                                              t = term_f_30;
                                              return(t);
                                            }
                                            t = Option_3(t, w_5, x_5, y_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, term_h_30));
  {
    t = printnl_0(t);
    {
      t = term_r_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_128 = NULL;
  s_128 = t;
  t = SSL_TicksToSeconds(not_null(s_128));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_128 = NULL,y_128 = NULL,z_128 = NULL;
  x_128 = t;
  w_128 :
  if(match_cons(x_128, sym__2))
    {
      y_128 = ATgetArgument(x_128, 0);
      z_128 = ATgetArgument(x_128, 1);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_128), not_null(z_128));
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            t = SSL_addr(not_null(y_128), not_null(z_128));
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
  ATerm k_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_109(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = k_30;
      {
        ATerm g_129 = NULL,h_129 = NULL,i_129 = NULL;
        g_129 = t;
        f_129 :
        if(((ATgetType(g_129) == AT_LIST) && ((ATermList) g_129 != ATempty)))
          {
            h_129 = ATgetFirst((ATermList) g_129);
            i_129 = (ATerm) ATgetNext((ATermList) g_129);
            {
              ATerm l_129 = NULL;
              ATerm m_129 = NULL;
              t = not_null(i_129);
              {
                t = foldr_2(t, b_109, c_109);
                {
                  m_129 = t;
                  if(((l_129 != NULL) && (l_129 != m_129)))
                    _fail(m_129);
                  else
                    l_129 = m_129;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_129), not_null(l_129));
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
  ATerm t_129 = NULL;
  ATerm v_129 = NULL;
  t_129 = t;
  {
    ATerm w_129 = NULL;
    ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL;
    t = not_null(t_129);
    {
      w_129 = t;
      {
        t = SSL_explode_term(not_null(w_129));
        {
          y_129 = t;
          s_129 :
          if(match_cons(y_129, sym__2))
            {
              z_129 = ATgetArgument(y_129, 0);
              a_130 = ATgetArgument(y_129, 1);
              if(((v_129 != NULL) && (v_129 != a_130)))
                _fail(a_130);
              else
                v_129 = a_130;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_129);
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
    ATerm z_5 (ATerm t)
    {
      t = term_y_11;
      return(t);
    }
    t = crush_2(t, z_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL;
  g_130 = t;
  f_130 :
  if(match_cons(g_130, sym__2))
    {
      h_130 = ATgetArgument(g_130, 0);
      i_130 = ATgetArgument(g_130, 1);
      {
        ATerm p_30;
        p_30 = t;
        {
          ATerm t_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_130), not_null(i_130));
              LocalPopChoice(w_30);
            }
          else
            {
              t = t_30;
              t = SSL_gtr(not_null(h_130), not_null(i_130));
            }
        }
        t = p_30;
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
  ATerm o_130 = NULL;
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
      p_130 = t;
      n_130 :
      if(match_cons(p_130, sym__2))
        {
          q_130 = ATgetArgument(p_130, 0);
          r_130 = ATgetArgument(p_130, 1);
          {
            if(((o_130 != NULL) && (o_130 != q_130)))
              _fail(q_130);
            else
              o_130 = q_130;
            if(((o_130 != NULL) && (o_130 != r_130)))
              _fail(r_130);
            else
              o_130 = r_130;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm z_30;
    z_30 = t;
    {
      ATerm u_130 = NULL;
      ATerm v_130 = NULL;
      t = term_r_26;
      {
        t = get_config_0(t);
        {
          v_130 = t;
          if(((u_130 != NULL) && (u_130 != v_130)))
            _fail(v_130);
          else
            u_130 = v_130;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_130), term_r_12);
        t = geq_0(t);
      }
    }
    t = z_30;
    t = v_96(t);
    return(t);
  }
  t = try_1(t, a_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm z_130 = NULL,b_131 = NULL;
    ATerm a_31;
    a_31 = t;
    {
      ATerm a_131 = NULL;
      t = run_time_0(t);
      {
        a_131 = t;
        if(((z_130 != NULL) && (z_130 != a_131)))
          _fail(a_131);
        else
          z_130 = a_131;
      }
    }
    t = a_31;
    {
      ATerm c_131 = NULL;
      t = term_b_31;
      {
        t = get_config_0(t);
        {
          c_131 = t;
          if(((b_131 != NULL) && (b_131 != c_131)))
            _fail(c_131);
          else
            b_131 = c_131;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_31), not_null(z_130)), term_c_31), not_null(b_131)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_6);
  {
    t = term_y_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_131 = NULL;
  j_131 = t;
  i_131 :
  if(match_cons(j_131, sym_Version_0))
    {
      ATerm l_131 = NULL,n_131 = NULL;
      ATerm i_31;
      i_31 = t;
      {
        ATerm m_131 = NULL;
        t = SSLgetAnnotations(not_null(j_131));
        {
          m_131 = t;
          if(((l_131 != NULL) && (l_131 != m_131)))
            _fail(m_131);
          else
            l_131 = m_131;
        }
      }
      t = i_31;
      {
        ATerm o_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_131));
        {
          o_131 = t;
          if(((n_131 != NULL) && (n_131 != o_131)))
            _fail(o_131);
          else
            n_131 = o_131;
        }
        t = not_null(n_131);
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
  ATerm c_6 (ATerm t)
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_6);
  t = a_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_131 = NULL;
  t_131 = t;
  t = SSL_table_create(not_null(t_131));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_131 = NULL;
  x_131 = t;
  {
    ATerm n_31;
    n_31 = t;
    {
      t = term_o_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_31, term_p_31, not_null(x_131));
          t = table_put_0(t);
        }
      }
    }
    t = n_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_132 = NULL;
  b_132 = t;
  t = SSL_table_destroy(not_null(b_132));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_132 = NULL;
  f_132 = t;
  t = SSL_exit(not_null(f_132));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_132 = NULL,k_132 = NULL,l_132 = NULL;
  j_132 = t;
  i_132 :
  if(((ATermList) j_132 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_132) == AT_LIST) && ((ATermList) j_132 != ATempty)))
        {
          k_132 = ATgetFirst((ATermList) j_132);
          l_132 = (ATerm) ATgetNext((ATermList) j_132);
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
  ATerm q_31;
  q_31 = t;
  {
    ATerm o_132 = NULL;
    ATerm r_132 = NULL;
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        {
          ATerm p_132 = NULL;
          ATerm q_132 = NULL;
          q_132 = t;
          if(((p_132 != NULL) && (p_132 != q_132)))
            _fail(q_132);
          else
            p_132 = q_132;
          t = (ATerm) ATinsert(ATempty, not_null(p_132));
        }
      }
    {
      r_132 = t;
      if(((o_132 != NULL) && (o_132 != r_132)))
        _fail(r_132);
      else
        o_132 = r_132;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_27, not_null(o_132));
      t = printnl_0(t);
    }
  }
  t = q_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_112 (ATerm))
{
  ATerm u_132 (ATerm t)
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = Cons_2(t, r_112, u_132);
      }
    return(t);
  }
  t = u_132(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL;
  d_133 = t;
  a_133 :
  if(((ATgetType(d_133) == AT_LIST) && ((ATermList) d_133 != ATempty)))
    {
      b_133 = ATgetFirst((ATermList) d_133);
      c_133 = (ATerm) ATgetNext((ATermList) d_133);
      {
        ATerm g_133 = NULL;
        t = not_null(c_133);
        {
          ATerm v_31;
          v_31 = t;
          {
            ATerm h_133 = NULL,k_133 = NULL,m_133 = NULL;
            ATerm w_31;
            w_31 = t;
            {
              ATerm j_133 = NULL;
              t = i_0(t);
              {
                j_133 = t;
                if(((h_133 != NULL) && (h_133 != j_133)))
                  _fail(j_133);
                else
                  h_133 = j_133;
              }
            }
            t = w_31;
            {
              ATerm l_133 = NULL;
              t = not_null(b_133);
              {
                t = h_0(t);
                {
                  l_133 = t;
                  if(((k_133 != NULL) && (k_133 != l_133)))
                    _fail(l_133);
                  else
                    k_133 = l_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_133)), not_null(k_133));
                {
                  m_133 = t;
                  if(((g_133 != NULL) && (g_133 != m_133)))
                    _fail(m_133);
                  else
                    g_133 = m_133;
                }
              }
            }
          }
          t = v_31;
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(g_133);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_6);
          }
        }
      }
    }
  else
    {
      if(((ATermList) d_133 == ATempty))
        {
          {
            t = term_i_29;
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
  ATerm e_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm y_133 = NULL,z_133 = NULL;
  y_133 = t;
  x_133 :
  if(match_cons(y_133, sym_Program_1))
    {
      z_133 = ATgetArgument(y_133, 0);
      {
        ATerm c_134 = NULL,e_134 = NULL;
        ATerm d_134 = NULL;
        t = SSLgetAnnotations(not_null(y_133));
        {
          d_134 = t;
          if(((c_134 != NULL) && (c_134 != d_134)))
            _fail(d_134);
          else
            c_134 = d_134;
        }
        {
          t = not_null(z_133);
          {
            ATerm g_134 = NULL;
            t = x_81(t);
            {
              e_134 = t;
              {
                ATerm h_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_134)), not_null(c_134));
                {
                  h_134 = t;
                  if(((g_134 != NULL) && (g_134 != h_134)))
                    _fail(h_134);
                  else
                    g_134 = h_134;
                }
                t = not_null(g_134);
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
  ATerm q_134 = NULL;
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_134 = NULL;
      t = term_b_31;
      {
        t = get_config_0(t);
        {
          r_134 = t;
          if(((q_134 != NULL) && (q_134 != r_134)))
            _fail(r_134);
          else
            q_134 = r_134;
        }
      }
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm s_134 = NULL;
            s_134 = t;
            if(((q_134 != NULL) && (q_134 != s_134)))
              _fail(s_134);
            else
              q_134 = s_134;
            return(t);
          }
          t = Program_1(t, g_6);
          return(t);
        }
        t = option_defined_1(t, f_6);
      }
    }
  {
    ATerm h_6 (ATerm t)
    {
      ATerm i_6 (ATerm t)
      {
        t = not_null(q_134);
        return(t);
      }
      t = short_description_1(t, i_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, h_6);
    {
      t = term_z_31;
      {
        t = echo_0(t);
        {
          t = term_c_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm t_134 = NULL;
                  ATerm u_134 = NULL;
                  u_134 = t;
                  if(((t_134 != NULL) && (t_134 != u_134)))
                    _fail(u_134);
                  else
                    t_134 = u_134;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_134)), term_d_32);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_6);
                {
                  ATerm k_6 (ATerm t)
                  {
                    ATerm v_134 = NULL;
                    ATerm w_134 = NULL;
                    ATerm l_6 (ATerm t)
                    {
                      t = not_null(q_134);
                      return(t);
                    }
                    t = long_description_1(t, l_6);
                    {
                      w_134 = t;
                      if(((v_134 != NULL) && (v_134 != w_134)))
                        _fail(w_134);
                      else
                        v_134 = w_134;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_134)), term_e_32);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_6);
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
  ATerm f_32;
  f_32 = t;
  {
    ATerm c_135 = NULL;
    ATerm d_135 = NULL;
    d_135 = t;
    if(((c_135 != NULL) && (c_135 != d_135)))
      _fail(d_135);
    else
      c_135 = d_135;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, not_null(c_135)));
      t = printnl_0(t);
    }
  }
  t = f_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm g_32;
  g_32 = t;
  {
    t = t_99(t);
    t = debug_0(t);
  }
  t = g_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm k_135 = NULL,l_135 = NULL;
  k_135 = t;
  j_135 :
  if(match_cons(k_135, sym_Undefined_1))
    {
      l_135 = ATgetArgument(k_135, 0);
      {
        ATerm o_135 = NULL,q_135 = NULL;
        ATerm p_135 = NULL;
        t = SSLgetAnnotations(not_null(k_135));
        {
          p_135 = t;
          if(((o_135 != NULL) && (o_135 != p_135)))
            _fail(p_135);
          else
            o_135 = p_135;
        }
        {
          t = not_null(l_135);
          {
            ATerm s_135 = NULL;
            t = y_81(t);
            {
              q_135 = t;
              {
                ATerm t_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_135)), not_null(o_135));
                {
                  t_135 = t;
                  if(((s_135 != NULL) && (s_135 != t_135)))
                    _fail(t_135);
                  else
                    s_135 = t_135;
                }
                t = not_null(s_135);
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
  ATerm y_135 (ATerm t)
  {
    ATerm h_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_113, _id);
        LocalPopChoice(k_32);
      }
    else
      {
        t = h_32;
        t = Cons_2(t, _id, y_135);
      }
    return(t);
  }
  t = y_135(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_96 (ATerm))
{
  t = fetch_1(t, f_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_136 = NULL;
  d_136 = t;
  c_136 :
  if(match_cons(d_136, sym_Help_0))
    {
      ATerm f_136 = NULL,h_136 = NULL;
      ATerm l_32;
      l_32 = t;
      {
        ATerm g_136 = NULL;
        t = SSLgetAnnotations(not_null(d_136));
        {
          g_136 = t;
          if(((f_136 != NULL) && (f_136 != g_136)))
            _fail(g_136);
          else
            f_136 = g_136;
        }
      }
      t = l_32;
      {
        ATerm i_136 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_136));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_116 (ATerm))
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_116(t);
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_136 = NULL,p_136 = NULL,q_136 = NULL;
  o_136 = t;
  n_136 :
  if(match_cons(o_136, sym__2))
    {
      p_136 = ATgetArgument(o_136, 0);
      q_136 = ATgetArgument(o_136, 1);
      t = SSL_table_get(not_null(p_136), not_null(q_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_136 = NULL,y_136 = NULL,a_137 = NULL,b_137 = NULL;
  x_136 = t;
  w_136 :
  if(match_cons(x_136, sym__3))
    {
      y_136 = ATgetArgument(x_136, 0);
      a_137 = ATgetArgument(x_136, 1);
      b_137 = ATgetArgument(x_136, 2);
      {
        ATerm o_32;
        o_32 = t;
        {
          ATerm f_137 = NULL;
          ATerm g_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_136), not_null(a_137));
          {
            ATerm p_32 = t;
            int q_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_32);
              }
            else
              {
                t = p_32;
                t = (ATerm) ATempty;
              }
            {
              g_137 = t;
              if(((f_137 != NULL) && (f_137 != g_137)))
                _fail(g_137);
              else
                f_137 = g_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_136), not_null(a_137), (ATerm) ATinsert(CheckATermList(not_null(f_137)), not_null(b_137)));
            t = table_put_0(t);
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
ATerm register_usage_1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm k_137 = NULL;
  ATerm l_137 = NULL;
  t = term_i_29;
  {
    t = f_95(t);
    {
      l_137 = t;
      if(((k_137 != NULL) && (k_137 != l_137)))
        _fail(l_137);
      else
        k_137 = l_137;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, not_null(k_137));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_137 = NULL,s_137 = NULL,t_137 = NULL;
  r_137 = t;
  q_137 :
  if(match_string(r_137, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_137) == AT_LIST) && ((ATermList) r_137 != ATempty)))
        {
          s_137 = ATgetFirst((ATermList) r_137);
          t_137 = (ATerm) ATgetNext((ATermList) r_137);
          {
            ATerm w_137 = NULL;
            ATerm r_32;
            r_32 = t;
            {
              t = not_null(s_137);
              t = a_0(t);
            }
            t = r_32;
            {
              ATerm x_137 = NULL;
              t = term_i_29;
              {
                t = b_0(t);
                {
                  x_137 = t;
                  if(((w_137 != NULL) && (w_137 != x_137)))
                    _fail(x_137);
                  else
                    w_137 = x_137;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_137)), not_null(w_137));
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
  ATerm m_6 (ATerm t)
  {
    ATerm d_138 = NULL;
    d_138 = t;
    c_138 :
    if(!(match_string(d_138, "--help")))
      {
        if(!(match_string(d_138, "-h")))
          {
            if(!(match_string(d_138, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_t_32;
    {
      t = set_config_0(t);
      t = term_u_32;
    }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_v_32;
    return(t);
  }
  t = Option_3(t, m_6, n_6, o_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_138 = NULL,h_138 = NULL,i_138 = NULL;
  g_138 = t;
  f_138 :
  if(((ATgetType(g_138) == AT_LIST) && ((ATermList) g_138 != ATempty)))
    {
      h_138 = ATgetFirst((ATermList) g_138);
      i_138 = (ATerm) ATgetNext((ATermList) g_138);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_138)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_138)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm))
{
  ATerm s_138 = NULL,t_138 = NULL,u_138 = NULL;
  s_138 = t;
  r_138 :
  if(((ATgetType(s_138) == AT_LIST) && ((ATermList) s_138 != ATempty)))
    {
      t_138 = ATgetFirst((ATermList) s_138);
      u_138 = (ATerm) ATgetNext((ATermList) s_138);
      {
        ATerm y_138 = NULL,a_139 = NULL;
        ATerm z_138 = NULL;
        t = SSLgetAnnotations(not_null(s_138));
        {
          z_138 = t;
          if(((y_138 != NULL) && (y_138 != z_138)))
            _fail(z_138);
          else
            y_138 = z_138;
        }
        {
          t = not_null(t_138);
          {
            ATerm c_139 = NULL;
            t = u_92(t);
            {
              a_139 = t;
              {
                t = not_null(u_138);
                {
                  ATerm e_139 = NULL;
                  t = v_92(t);
                  {
                    c_139 = t;
                    {
                      ATerm f_139 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_139)), not_null(a_139)), not_null(y_138));
                      {
                        f_139 = t;
                        if(((e_139 != NULL) && (e_139 != f_139)))
                          _fail(f_139);
                        else
                          e_139 = f_139;
                      }
                      t = not_null(e_139);
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
  ATerm p_139 = NULL;
  p_139 = t;
  o_139 :
  if(((ATermList) p_139 == ATempty))
    {
      {
        ATerm r_139 = NULL,t_139 = NULL;
        ATerm w_32;
        w_32 = t;
        {
          ATerm s_139 = NULL;
          t = SSLgetAnnotations(not_null(p_139));
          {
            s_139 = t;
            if(((r_139 != NULL) && (r_139 != s_139)))
              _fail(s_139);
            else
              r_139 = s_139;
          }
        }
        t = w_32;
        {
          ATerm u_139 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_139));
          {
            u_139 = t;
            if(((t_139 != NULL) && (t_139 != u_139)))
              _fail(u_139);
            else
              t_139 = u_139;
          }
          t = not_null(t_139);
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
  ATerm a_140 = NULL,b_140 = NULL,c_140 = NULL;
  a_140 = t;
  z_139 :
  if(match_cons(a_140, sym__2))
    {
      b_140 = ATgetArgument(a_140, 0);
      c_140 = ATgetArgument(a_140, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_26, not_null(b_140), not_null(c_140));
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
  ATerm x_32;
  x_32 = t;
  {
    ATerm p_6 (ATerm t)
    {
      t = term_y_32;
      t = d_95(t);
      return(t);
    }
    t = try_1(t, p_6);
  }
  t = x_32;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm k_140 = NULL;
      ATerm z_32;
      z_32 = t;
      {
        ATerm i_140 = NULL;
        ATerm j_140 = NULL;
        j_140 = t;
        if(((i_140 != NULL) && (i_140 != j_140)))
          _fail(j_140);
        else
          i_140 = j_140;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_31, not_null(i_140));
          t = set_config_0(t);
        }
      }
      t = z_32;
      {
        ATerm l_140 = NULL;
        l_140 = t;
        if(((k_140 != NULL) && (k_140 != l_140)))
          _fail(l_140);
        else
          k_140 = l_140;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_140));
      }
      return(t);
    }
    ATerm r_6 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              {
                t = d_95(t);
                t = Cons_2(t, _id, r_6);
              }
            }
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_6, r_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_140 = NULL,s_140 = NULL,t_140 = NULL;
  ATerm e_33;
  e_33 = t;
  {
    ATerm u_140 = NULL,v_140 = NULL,w_140 = NULL,x_140 = NULL;
    u_140 = t;
    q_140 :
    if(match_cons(u_140, sym__3))
      {
        v_140 = ATgetArgument(u_140, 0);
        w_140 = ATgetArgument(u_140, 1);
        x_140 = ATgetArgument(u_140, 2);
        {
          if(((r_140 != NULL) && (r_140 != v_140)))
            _fail(v_140);
          else
            r_140 = v_140;
          {
            if(((s_140 != NULL) && (s_140 != w_140)))
              _fail(w_140);
            else
              s_140 = w_140;
            {
              if(((t_140 != NULL) && (t_140 != x_140)))
                _fail(x_140);
              else
                t_140 = x_140;
              t = SSL_table_put(not_null(r_140), not_null(s_140), not_null(t_140));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm a_141 = NULL;
  ATerm f_33;
  f_33 = t;
  {
    t = term_g_33;
    t = table_put_0(t);
  }
  t = f_33;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_95(t);
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_6);
    {
      ATerm t_6 (ATerm t)
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_33;
            l_33 = t;
            {
              ATerm m_33 = t;
              int n_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_32;
                  t = get_config_0(t);
                  LocalPopChoice(n_33);
                }
              else
                {
                  t = m_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = l_33;
            {
              t = system_usage_0(t);
              {
                t = term_y_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm u_6 (ATerm t)
              {
                ATerm v_6 (ATerm t)
                {
                  ATerm b_141 = NULL;
                  b_141 = t;
                  if(((a_141 != NULL) && (a_141 != b_141)))
                    _fail(b_141);
                  else
                    a_141 = b_141;
                  return(t);
                }
                t = Undefined_1(t, v_6);
                return(t);
              }
              t = option_defined_1(t, u_6);
              {
                ATerm w_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_141)), term_o_33);
                  return(t);
                }
                t = say_1(t, w_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_12;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_6);
      {
        ATerm p_33;
        p_33 = t;
        {
          t = term_a_32;
          t = table_destroy_0(t);
        }
        t = p_33;
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
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_97);
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            {
              ATerm s_33 = t;
              int v_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_98(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_33);
                }
              else
                {
                  t = s_33;
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
  ATerm x_6 (ATerm t)
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_98(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_6, q_98, r_98, y_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    ATerm a_7 (ATerm t)
    {
      ATerm c_34;
      c_34 = t;
      {
        ATerm e_141 = NULL;
        ATerm f_141 = NULL;
        t = term_b_31;
        {
          t = get_config_0(t);
          {
            f_141 = t;
            if(((e_141 != NULL) && (e_141 != f_141)))
              _fail(f_141);
            else
              e_141 = f_141;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, not_null(e_141)));
          t = printnl_0(t);
        }
      }
      t = c_34;
      return(t);
    }
    t = if_verbose2_1(t, a_7);
    return(t);
  }
  t = iowrap_4(t, i_98, j_98, k_98, z_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_98 (ATerm), ATerm h_98 (ATerm))
{
  t = iowrap_3(t, g_98, h_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_98 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    t = _2(t, _id, d_98);
    return(t);
  }
  t = iowrap_2(t, b_7, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, c_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
