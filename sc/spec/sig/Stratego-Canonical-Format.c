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
Symbol sym_MatchOp_2;
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_i_16;
ATerm term_a_16;
ATerm term_n_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_p_6;
ATerm term_r_5;
ATerm term_g_5;
void init_constant_terms (void)
{
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_b_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_b_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_c_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_b_12);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm e_51 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm h_51 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm Alt_3 (ATerm, ATerm b_51 (ATerm), ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm i_89 (ATerm));
ATerm Case_4 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm), ATerm w_50 (ATerm), ATerm x_50 (ATerm));
ATerm Let_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm Prim_2 (ATerm, ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm Where_1 (ATerm, ATerm j_61 (ATerm));
ATerm Scope_2 (ATerm, ATerm h_61 (ATerm), ATerm i_61 (ATerm));
ATerm Build_1 (ATerm, ATerm e_61 (ATerm));
ATerm Op_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm As_2 (ATerm, ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm s_57 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm l_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm d_61 (ATerm));
ATerm Thread_1 (ATerm, ATerm a_61 (ATerm));
ATerm All_1 (ATerm, ATerm z_60 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm x_60 (ATerm));
ATerm Cong_2 (ATerm, ATerm v_60 (ATerm), ATerm w_60 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm Rec_2 (ATerm, ATerm d_60 (ATerm), ATerm e_60 (ATerm));
ATerm SVar_1 (ATerm, ATerm c_60 (ATerm));
ATerm Call_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm GChoice_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm LChoice_2 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm Choice_2 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm));
ATerm Seq_2 (ATerm, ATerm o_59 (ATerm), ATerm p_59 (ATerm));
ATerm Test_1 (ATerm, ATerm m_59 (ATerm));
ATerm Not_1 (ATerm, ATerm n_59 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm k_60 (ATerm), ATerm l_60 (ATerm));
ATerm SDef_3 (ATerm, ATerm h_60 (ATerm), ATerm i_60 (ATerm), ATerm j_60 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_80 (ATerm));
ATerm Strategies_1 (ATerm, ATerm u_58 (ATerm));
ATerm Specification_1 (ATerm, ATerm w_58 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_70 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_67 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm crush_2 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_67 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_69 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_65 (ATerm));
ATerm map_1 (ATerm, ATerm y_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_65 (ATerm));
ATerm Program_1 (ATerm, ATerm s_51 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_51 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_88 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_65 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_61 (ATerm), ATerm p_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_65 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm z_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_68 (ATerm), ATerm w_68 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_68 (ATerm));
ATerm main_0 (ATerm);
ATerm Continue_1 (ATerm t, ATerm e_51 (ATerm))
{
  ATerm v_10 = NULL,z_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_Continue_1))
    {
      z_10 = ATgetArgument(v_10, 0);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(z_10);
          {
            ATerm d_13 = NULL;
            t = e_51(t);
            {
              o_12 = t;
              {
                ATerm e_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(o_12)), not_null(m_12));
                {
                  e_13 = t;
                  if(((d_13 != NULL) && (d_13 != e_13)))
                    _fail(e_13);
                  else
                    d_13 = e_13;
                }
                t = not_null(d_13);
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
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Var_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_14 = NULL,l_14 = NULL;
            ATerm k_14 = NULL;
            t = SSLgetAnnotations(not_null(f_14));
            {
              k_14 = t;
              if(((j_14 != NULL) && (j_14 != k_14)))
                _fail(k_14);
              else
                j_14 = k_14;
            }
            {
              t = not_null(g_14);
              {
                ATerm n_14 = NULL;
                t = s_0(t);
                {
                  l_14 = t;
                  {
                    ATerm o_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_14)), not_null(j_14));
                    {
                      o_14 = t;
                      if(((n_14 != NULL) && (n_14 != o_14)))
                        _fail(o_14);
                      else
                        n_14 = o_14;
                    }
                    t = not_null(n_14);
                  }
                }
              }
            }
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            {
              ATerm r_14 = NULL,t_14 = NULL;
              ATerm s_14 = NULL;
              t = SSLgetAnnotations(not_null(f_14));
              {
                s_14 = t;
                if(((r_14 != NULL) && (r_14 != s_14)))
                  _fail(s_14);
                else
                  r_14 = s_14;
              }
              {
                t = not_null(g_14);
                {
                  ATerm v_14 = NULL;
                  t = s_0(t);
                  {
                    t_14 = t;
                    {
                      ATerm w_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_14)), not_null(r_14));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm h_51 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Assign_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm s_15 = NULL;
            t = h_51(t);
            {
              q_15 = t;
              {
                ATerm t_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(q_15)), not_null(o_15));
                {
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                }
                t = not_null(s_15);
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
ATerm term_expression_0 (ATerm t)
{
  ATerm q_4 = t;
  int r_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(r_4);
    }
  else
    {
      t = q_4;
      {
        ATerm s_4 = t;
        int t_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(t_4);
          }
        else
          {
            t = s_4;
            {
              ATerm u_4 = t;
              int v_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(v_4);
                }
              else
                {
                  t = u_4;
                  {
                    ATerm w_4 = t;
                    int x_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(x_4);
                      }
                    else
                      {
                        t = w_4;
                        {
                          ATerm y_4 = t;
                          int z_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(z_4);
                            }
                          else
                            {
                              t = y_4;
                              {
                                ATerm a_5 = t;
                                int b_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(b_5);
                                  }
                                else
                                  {
                                    t = a_5;
                                    {
                                      ATerm c_5 = t;
                                      int d_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          LocalPopChoice(d_5);
                                        }
                                      else
                                        {
                                          t = c_5;
                                          {
                                            ATerm e_5 = t;
                                            int f_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(f_5);
                                              }
                                            else
                                              {
                                                t = e_5;
                                                {
                                                  ATerm m_0 (ATerm t)
                                                  {
                                                    t = term_g_5;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, m_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Assign_2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      {
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL,s_16 = NULL;
            ATerm r_16 = NULL;
            t = SSLgetAnnotations(not_null(k_16));
            {
              r_16 = t;
              if(((q_16 != NULL) && (q_16 != r_16)))
                _fail(r_16);
              else
                q_16 = r_16;
            }
            {
              t = not_null(l_16);
              {
                ATerm u_16 = NULL;
                t = q_0(t);
                {
                  s_16 = t;
                  {
                    t = not_null(m_16);
                    {
                      ATerm w_16 = NULL;
                      t = r_0(t);
                      {
                        u_16 = t;
                        {
                          ATerm x_16 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(s_16), not_null(u_16)), not_null(q_16));
                          {
                            x_16 = t;
                            if(((w_16 != NULL) && (w_16 != x_16)))
                              _fail(x_16);
                            else
                              w_16 = x_16;
                          }
                          t = not_null(w_16);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(i_5);
          }
        else
          {
            t = h_5;
            {
              ATerm b_17 = NULL,d_17 = NULL;
              ATerm c_17 = NULL;
              t = SSLgetAnnotations(not_null(k_16));
              {
                c_17 = t;
                if(((b_17 != NULL) && (b_17 != c_17)))
                  _fail(c_17);
                else
                  b_17 = c_17;
              }
              {
                t = not_null(l_16);
                {
                  ATerm f_17 = NULL;
                  t = q_0(t);
                  {
                    d_17 = t;
                    {
                      t = not_null(m_16);
                      {
                        ATerm h_17 = NULL;
                        t = r_0(t);
                        {
                          f_17 = t;
                          {
                            ATerm i_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(d_17), not_null(f_17)), not_null(b_17));
                            {
                              i_17 = t;
                              if(((h_17 != NULL) && (h_17 != i_17)))
                                _fail(i_17);
                              else
                                h_17 = i_17;
                            }
                            t = not_null(h_17);
                          }
                        }
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
ATerm Fun_2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Fun_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm f_18 = NULL,h_18 = NULL;
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        {
          t = not_null(a_18);
          {
            ATerm j_18 = NULL;
            t = i_51(t);
            {
              h_18 = t;
              {
                t = not_null(b_18);
                {
                  ATerm l_18 = NULL;
                  t = j_51(t);
                  {
                    j_18 = t;
                    {
                      ATerm m_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(h_18), not_null(j_18)), not_null(f_18));
                      {
                        m_18 = t;
                        if(((l_18 != NULL) && (l_18 != m_18)))
                          _fail(m_18);
                        else
                          l_18 = m_18;
                      }
                      t = not_null(l_18);
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
ATerm Alt_3 (ATerm t, ATerm b_51 (ATerm), ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Alt_3))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      c_19 = ATgetArgument(z_18, 2);
      {
        ATerm h_19 = NULL,j_19 = NULL;
        ATerm i_19 = NULL;
        t = SSLgetAnnotations(not_null(z_18));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        {
          t = not_null(a_19);
          {
            ATerm l_19 = NULL;
            t = b_51(t);
            {
              j_19 = t;
              {
                t = not_null(b_19);
                {
                  ATerm n_19 = NULL;
                  t = c_51(t);
                  {
                    l_19 = t;
                    {
                      t = not_null(c_19);
                      {
                        ATerm p_19 = NULL;
                        t = d_51(t);
                        {
                          n_19 = t;
                          {
                            ATerm q_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(j_19), not_null(l_19), not_null(n_19)), not_null(h_19));
                            {
                              q_19 = t;
                              if(((p_19 != NULL) && (p_19 != q_19)))
                                _fail(q_19);
                              else
                                p_19 = q_19;
                            }
                            t = not_null(p_19);
                          }
                        }
                      }
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
ATerm case_alternative_1 (ATerm t, ATerm i_89 (ATerm))
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_0 (ATerm t)
      {
        ATerm l_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
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
                  t = Str_1(t, is_string_0);
                  LocalPopChoice(o_5);
                }
              else
                {
                  t = n_5;
                  {
                    ATerm p_5 = t;
                    int q_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        LocalPopChoice(q_5);
                      }
                    else
                      {
                        t = p_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, u_0);
        return(t);
      }
      t = Alt_3(t, n_0, t_0, i_89);
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_r_5;
          return(t);
        }
        t = debug_1(t, v_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm), ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Case_4))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      i_20 = ATgetArgument(f_20, 2);
      j_20 = ATgetArgument(f_20, 3);
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm t_20 = NULL;
            t = u_50(t);
            {
              r_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm v_20 = NULL;
                  t = v_50(t);
                  {
                    t_20 = t;
                    {
                      t = not_null(i_20);
                      {
                        ATerm x_20 = NULL;
                        t = w_50(t);
                        {
                          v_20 = t;
                          {
                            t = not_null(j_20);
                            {
                              ATerm z_20 = NULL;
                              t = x_50(t);
                              {
                                x_20 = t;
                                {
                                  ATerm a_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(r_20), not_null(t_20), not_null(v_20), not_null(x_20)), not_null(p_20));
                                  {
                                    a_21 = t;
                                    if(((z_20 != NULL) && (z_20 != a_21)))
                                      _fail(a_21);
                                    else
                                      z_20 = a_21;
                                  }
                                  t = not_null(z_20);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Let_2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm u_21 = NULL,w_21 = NULL;
        ATerm v_21 = NULL;
        t = SSLgetAnnotations(not_null(o_21));
        {
          v_21 = t;
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
        }
        {
          t = not_null(p_21);
          {
            ATerm y_21 = NULL;
            t = f_60(t);
            {
              w_21 = t;
              {
                t = not_null(q_21);
                {
                  ATerm a_22 = NULL;
                  t = g_60(t);
                  {
                    y_21 = t;
                    {
                      ATerm b_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_21), not_null(y_21)), not_null(u_21));
                      {
                        b_22 = t;
                        if(((a_22 != NULL) && (a_22 != b_22)))
                          _fail(b_22);
                        else
                          a_22 = b_22;
                      }
                      t = not_null(a_22);
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
ATerm Prim_2 (ATerm t, ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Prim_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm t_22 = NULL,v_22 = NULL;
        ATerm u_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
        {
          t = not_null(o_22);
          {
            ATerm x_22 = NULL;
            t = k_61(t);
            {
              v_22 = t;
              {
                t = not_null(p_22);
                {
                  ATerm z_22 = NULL;
                  t = l_61(t);
                  {
                    x_22 = t;
                    {
                      ATerm a_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_22), not_null(x_22)), not_null(t_22));
                      {
                        a_23 = t;
                        if(((z_22 != NULL) && (z_22 != a_23)))
                          _fail(a_23);
                        else
                          z_22 = a_23;
                      }
                      t = not_null(z_22);
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
ATerm Where_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_Where_1))
    {
      m_23 = ATgetArgument(l_23, 0);
      {
        ATerm p_23 = NULL,r_23 = NULL;
        ATerm q_23 = NULL;
        t = SSLgetAnnotations(not_null(l_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
        {
          t = not_null(m_23);
          {
            ATerm t_23 = NULL;
            t = j_61(t);
            {
              r_23 = t;
              {
                ATerm u_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(r_23)), not_null(p_23));
                {
                  u_23 = t;
                  if(((t_23 != NULL) && (t_23 != u_23)))
                    _fail(u_23);
                  else
                    t_23 = u_23;
                }
                t = not_null(t_23);
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
ATerm Scope_2 (ATerm t, ATerm h_61 (ATerm), ATerm i_61 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_Scope_2))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      {
        ATerm s_24 = NULL,u_24 = NULL;
        ATerm t_24 = NULL;
        t = SSLgetAnnotations(not_null(m_24));
        {
          t_24 = t;
          if(((s_24 != NULL) && (s_24 != t_24)))
            _fail(t_24);
          else
            s_24 = t_24;
        }
        {
          t = not_null(n_24);
          {
            ATerm w_24 = NULL;
            t = h_61(t);
            {
              u_24 = t;
              {
                t = not_null(o_24);
                {
                  ATerm b_25 = NULL;
                  t = i_61(t);
                  {
                    w_24 = t;
                    {
                      ATerm c_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(u_24), not_null(w_24)), not_null(s_24));
                      {
                        c_25 = t;
                        if(((b_25 != NULL) && (b_25 != c_25)))
                          _fail(c_25);
                        else
                          b_25 = c_25;
                      }
                      t = not_null(b_25);
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
ATerm Build_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Build_1))
    {
      o_25 = ATgetArgument(n_25, 0);
      {
        ATerm r_25 = NULL,t_25 = NULL;
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(n_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        {
          t = not_null(o_25);
          {
            ATerm w_25 = NULL;
            t = e_61(t);
            {
              t_25 = t;
              {
                ATerm x_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_25)), not_null(r_25));
                {
                  x_25 = t;
                  if(((w_25 != NULL) && (w_25 != x_25)))
                    _fail(x_25);
                  else
                    w_25 = x_25;
                }
                t = not_null(w_25);
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
ATerm Op_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_Op_2))
    {
      j_26 = ATgetArgument(i_26, 0);
      k_26 = ATgetArgument(i_26, 1);
      {
        ATerm o_26 = NULL,q_26 = NULL;
        ATerm p_26 = NULL;
        t = SSLgetAnnotations(not_null(i_26));
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
        {
          t = not_null(j_26);
          {
            ATerm s_26 = NULL;
            t = k_59(t);
            {
              q_26 = t;
              {
                t = not_null(k_26);
                {
                  ATerm u_26 = NULL;
                  t = l_59(t);
                  {
                    s_26 = t;
                    {
                      ATerm v_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_26), not_null(s_26)), not_null(o_26));
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
ATerm As_2 (ATerm t, ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm h_27 = NULL,p_27 = NULL,q_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_As_2))
    {
      p_27 = ATgetArgument(h_27, 0);
      q_27 = ATgetArgument(h_27, 1);
      {
        ATerm u_27 = NULL,w_27 = NULL;
        ATerm v_27 = NULL;
        t = SSLgetAnnotations(not_null(h_27));
        {
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
        }
        {
          t = not_null(p_27);
          {
            ATerm a_28 = NULL;
            t = q_57(t);
            {
              w_27 = t;
              {
                t = not_null(q_27);
                {
                  ATerm c_28 = NULL;
                  t = r_57(t);
                  {
                    a_28 = t;
                    {
                      ATerm d_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(w_27), not_null(a_28)), not_null(u_27));
                      {
                        d_28 = t;
                        if(((c_28 != NULL) && (c_28 != d_28)))
                          _fail(d_28);
                        else
                          c_28 = d_28;
                      }
                      t = not_null(c_28);
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
ATerm BuildDefault_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  n_28 :
  if(match_cons(q_28, sym_BuildDefault_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm u_28 = NULL,w_28 = NULL;
        ATerm v_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
        {
          t = not_null(r_28);
          {
            ATerm e_29 = NULL;
            t = s_57(t);
            {
              w_28 = t;
              {
                ATerm l_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(w_28)), not_null(u_28));
                {
                  l_29 = t;
                  if(((e_29 != NULL) && (e_29 != l_29)))
                    _fail(l_29);
                  else
                    e_29 = l_29;
                }
                t = not_null(e_29);
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
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Str_1))
    {
      b_30 = ATgetArgument(a_30, 0);
      {
        ATerm s_5 = t;
        int t_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_30 = NULL,g_30 = NULL;
            ATerm f_30 = NULL;
            t = SSLgetAnnotations(not_null(a_30));
            {
              f_30 = t;
              if(((e_30 != NULL) && (e_30 != f_30)))
                _fail(f_30);
              else
                e_30 = f_30;
            }
            {
              t = not_null(b_30);
              {
                ATerm i_30 = NULL;
                t = p_0(t);
                {
                  g_30 = t;
                  {
                    ATerm j_30 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(g_30)), not_null(e_30));
                    {
                      j_30 = t;
                      if(((i_30 != NULL) && (i_30 != j_30)))
                        _fail(j_30);
                      else
                        i_30 = j_30;
                    }
                    t = not_null(i_30);
                  }
                }
              }
            }
            LocalPopChoice(t_5);
          }
        else
          {
            t = s_5;
            {
              ATerm m_30 = NULL,o_30 = NULL;
              ATerm n_30 = NULL;
              t = SSLgetAnnotations(not_null(a_30));
              {
                n_30 = t;
                if(((m_30 != NULL) && (m_30 != n_30)))
                  _fail(n_30);
                else
                  m_30 = n_30;
              }
              {
                t = not_null(b_30);
                {
                  ATerm q_30 = NULL;
                  t = p_0(t);
                  {
                    o_30 = t;
                    {
                      ATerm r_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(o_30)), not_null(m_30));
                      {
                        r_30 = t;
                        if(((q_30 != NULL) && (q_30 != r_30)))
                          _fail(r_30);
                        else
                          q_30 = r_30;
                      }
                      t = not_null(q_30);
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
ATerm is_real_0 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  t = SSL_is_real(not_null(b_31));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm n_31 = NULL,o_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym_Real_1))
    {
      o_31 = ATgetArgument(n_31, 0);
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_31 = NULL,v_31 = NULL;
            ATerm s_31 = NULL;
            t = SSLgetAnnotations(not_null(n_31));
            {
              s_31 = t;
              if(((r_31 != NULL) && (r_31 != s_31)))
                _fail(s_31);
              else
                r_31 = s_31;
            }
            {
              t = not_null(o_31);
              {
                ATerm x_31 = NULL;
                t = o_0(t);
                {
                  v_31 = t;
                  {
                    ATerm y_31 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(v_31)), not_null(r_31));
                    {
                      y_31 = t;
                      if(((x_31 != NULL) && (x_31 != y_31)))
                        _fail(y_31);
                      else
                        x_31 = y_31;
                    }
                    t = not_null(x_31);
                  }
                }
              }
            }
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            {
              ATerm h_32 = NULL,j_32 = NULL;
              ATerm i_32 = NULL;
              t = SSLgetAnnotations(not_null(n_31));
              {
                i_32 = t;
                if(((h_32 != NULL) && (h_32 != i_32)))
                  _fail(i_32);
                else
                  h_32 = i_32;
              }
              {
                t = not_null(o_31);
                {
                  ATerm l_32 = NULL;
                  t = o_0(t);
                  {
                    j_32 = t;
                    {
                      ATerm m_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(j_32)), not_null(h_32));
                      {
                        m_32 = t;
                        if(((l_32 != NULL) && (l_32 != m_32)))
                          _fail(m_32);
                        else
                          l_32 = m_32;
                      }
                      t = not_null(l_32);
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
ATerm Int_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym_Int_1))
    {
      i_33 = ATgetArgument(h_33, 0);
      {
        ATerm w_5 = t;
        int x_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_33 = NULL,n_33 = NULL;
            ATerm m_33 = NULL;
            t = SSLgetAnnotations(not_null(h_33));
            {
              m_33 = t;
              if(((l_33 != NULL) && (l_33 != m_33)))
                _fail(m_33);
              else
                l_33 = m_33;
            }
            {
              t = not_null(i_33);
              {
                ATerm p_33 = NULL;
                t = l_0(t);
                {
                  n_33 = t;
                  {
                    ATerm q_33 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(n_33)), not_null(l_33));
                    {
                      q_33 = t;
                      if(((p_33 != NULL) && (p_33 != q_33)))
                        _fail(q_33);
                      else
                        p_33 = q_33;
                    }
                    t = not_null(p_33);
                  }
                }
              }
            }
            LocalPopChoice(x_5);
          }
        else
          {
            t = w_5;
            {
              ATerm t_33 = NULL,v_33 = NULL;
              ATerm u_33 = NULL;
              t = SSLgetAnnotations(not_null(h_33));
              {
                u_33 = t;
                if(((t_33 != NULL) && (t_33 != u_33)))
                  _fail(u_33);
                else
                  t_33 = u_33;
              }
              {
                t = not_null(i_33);
                {
                  ATerm x_33 = NULL;
                  t = l_0(t);
                  {
                    v_33 = t;
                    {
                      ATerm y_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(v_33)), not_null(t_33));
                      {
                        y_33 = t;
                        if(((x_33 != NULL) && (x_33 != y_33)))
                          _fail(y_33);
                        else
                          x_33 = y_33;
                      }
                      t = not_null(x_33);
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
ATerm Wld_0 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_Wld_0))
    {
      ATerm r_34 = NULL,t_34 = NULL;
      ATerm y_5;
      y_5 = t;
      {
        ATerm s_34 = NULL;
        t = SSLgetAnnotations(not_null(o_34));
        {
          s_34 = t;
          if(((r_34 != NULL) && (r_34 != s_34)))
            _fail(s_34);
          else
            r_34 = s_34;
        }
      }
      t = y_5;
      {
        ATerm u_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(r_34));
        {
          u_34 = t;
          if(((t_34 != NULL) && (t_34 != u_34)))
            _fail(u_34);
          else
            t_34 = u_34;
        }
        t = not_null(t_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(c_6);
          }
        else
          {
            t = b_6;
            {
              ATerm d_6 = t;
              int e_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(e_6);
                }
              else
                {
                  t = d_6;
                  {
                    ATerm f_6 = t;
                    int g_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(g_6);
                      }
                    else
                      {
                        t = f_6;
                        {
                          ATerm h_6 = t;
                          int i_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(i_6);
                            }
                          else
                            {
                              t = h_6;
                              {
                                ATerm j_6 = t;
                                int k_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    LocalPopChoice(k_6);
                                  }
                                else
                                  {
                                    t = j_6;
                                    {
                                      ATerm l_6 = t;
                                      int m_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, w_0, match_term_exp_0);
                                          LocalPopChoice(m_6);
                                        }
                                      else
                                        {
                                          t = l_6;
                                          {
                                            ATerm n_6 = t;
                                            int o_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, x_0);
                                                LocalPopChoice(o_6);
                                              }
                                            else
                                              {
                                                t = n_6;
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_p_6;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, y_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Match_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm e_35 = NULL,f_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym_Match_1))
    {
      f_35 = ATgetArgument(e_35, 0);
      {
        ATerm i_35 = NULL,k_35 = NULL;
        ATerm j_35 = NULL;
        t = SSLgetAnnotations(not_null(e_35));
        {
          j_35 = t;
          if(((i_35 != NULL) && (i_35 != j_35)))
            _fail(j_35);
          else
            i_35 = j_35;
        }
        {
          t = not_null(f_35);
          {
            ATerm m_35 = NULL;
            t = d_61(t);
            {
              k_35 = t;
              {
                ATerm n_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(k_35)), not_null(i_35));
                {
                  n_35 = t;
                  if(((m_35 != NULL) && (m_35 != n_35)))
                    _fail(n_35);
                  else
                    m_35 = n_35;
                }
                t = not_null(m_35);
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
ATerm Thread_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Thread_1))
    {
      y_35 = ATgetArgument(x_35, 0);
      {
        ATerm b_36 = NULL,g_36 = NULL;
        ATerm c_36 = NULL;
        t = SSLgetAnnotations(not_null(x_35));
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
        {
          t = not_null(y_35);
          {
            ATerm i_36 = NULL;
            t = a_61(t);
            {
              g_36 = t;
              {
                ATerm j_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(g_36)), not_null(b_36));
                {
                  j_36 = t;
                  if(((i_36 != NULL) && (i_36 != j_36)))
                    _fail(j_36);
                  else
                    i_36 = j_36;
                }
                t = not_null(i_36);
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
ATerm All_1 (ATerm t, ATerm z_60 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_All_1))
    {
      u_36 = ATgetArgument(t_36, 0);
      {
        ATerm x_36 = NULL,z_36 = NULL;
        ATerm y_36 = NULL;
        t = SSLgetAnnotations(not_null(t_36));
        {
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
        }
        {
          t = not_null(u_36);
          {
            ATerm b_37 = NULL;
            t = z_60(t);
            {
              z_36 = t;
              {
                ATerm c_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(z_36)), not_null(x_36));
                {
                  c_37 = t;
                  if(((b_37 != NULL) && (b_37 != c_37)))
                    _fail(c_37);
                  else
                    b_37 = c_37;
                }
                t = not_null(b_37);
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
ATerm Some_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm q_37 = NULL,r_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym_Some_1))
    {
      r_37 = ATgetArgument(q_37, 0);
      {
        ATerm q_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_37 = NULL,w_37 = NULL;
            ATerm v_37 = NULL;
            t = SSLgetAnnotations(not_null(q_37));
            {
              v_37 = t;
              if(((u_37 != NULL) && (u_37 != v_37)))
                _fail(v_37);
              else
                u_37 = v_37;
            }
            {
              t = not_null(r_37);
              {
                ATerm y_37 = NULL;
                t = k_0(t);
                {
                  w_37 = t;
                  {
                    ATerm z_37 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(w_37)), not_null(u_37));
                    {
                      z_37 = t;
                      if(((y_37 != NULL) && (y_37 != z_37)))
                        _fail(z_37);
                      else
                        y_37 = z_37;
                    }
                    t = not_null(y_37);
                  }
                }
              }
            }
            LocalPopChoice(r_6);
          }
        else
          {
            t = q_6;
            {
              ATerm c_38 = NULL,e_38 = NULL;
              ATerm d_38 = NULL;
              t = SSLgetAnnotations(not_null(q_37));
              {
                d_38 = t;
                if(((c_38 != NULL) && (c_38 != d_38)))
                  _fail(d_38);
                else
                  c_38 = d_38;
              }
              {
                t = not_null(r_37);
                {
                  ATerm g_38 = NULL;
                  t = k_0(t);
                  {
                    e_38 = t;
                    {
                      ATerm h_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(e_38)), not_null(c_38));
                      {
                        h_38 = t;
                        if(((g_38 != NULL) && (g_38 != h_38)))
                          _fail(h_38);
                        else
                          g_38 = h_38;
                      }
                      t = not_null(g_38);
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
ATerm One_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm v_38 = NULL,w_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym_One_1))
    {
      w_38 = ATgetArgument(v_38, 0);
      {
        ATerm z_38 = NULL,b_39 = NULL;
        ATerm a_39 = NULL;
        t = SSLgetAnnotations(not_null(v_38));
        {
          a_39 = t;
          if(((z_38 != NULL) && (z_38 != a_39)))
            _fail(a_39);
          else
            z_38 = a_39;
        }
        {
          t = not_null(w_38);
          {
            ATerm d_39 = NULL;
            t = x_60(t);
            {
              b_39 = t;
              {
                ATerm e_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(b_39)), not_null(z_38));
                {
                  e_39 = t;
                  if(((d_39 != NULL) && (d_39 != e_39)))
                    _fail(e_39);
                  else
                    d_39 = e_39;
                }
                t = not_null(d_39);
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
ATerm Cong_2 (ATerm t, ATerm v_60 (ATerm), ATerm w_60 (ATerm))
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  p_39 = t;
  o_39 :
  if(match_cons(p_39, sym_Cong_2))
    {
      q_39 = ATgetArgument(p_39, 0);
      r_39 = ATgetArgument(p_39, 1);
      {
        ATerm v_39 = NULL,x_39 = NULL;
        ATerm w_39 = NULL;
        t = SSLgetAnnotations(not_null(p_39));
        {
          w_39 = t;
          if(((v_39 != NULL) && (v_39 != w_39)))
            _fail(w_39);
          else
            v_39 = w_39;
        }
        {
          t = not_null(q_39);
          {
            ATerm z_39 = NULL;
            t = v_60(t);
            {
              x_39 = t;
              {
                t = not_null(r_39);
                {
                  ATerm b_40 = NULL;
                  t = w_60(t);
                  {
                    z_39 = t;
                    {
                      ATerm c_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(x_39), not_null(z_39)), not_null(v_39));
                      {
                        c_40 = t;
                        if(((b_40 != NULL) && (b_40 != c_40)))
                          _fail(c_40);
                        else
                          b_40 = c_40;
                      }
                      t = not_null(b_40);
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
ATerm is_int_0 (ATerm t)
{
  ATerm j_40 = NULL;
  j_40 = t;
  t = SSL_is_int(not_null(j_40));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym_Path_2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      {
        ATerm y_40 = NULL,a_41 = NULL;
        ATerm z_40 = NULL;
        t = SSLgetAnnotations(not_null(s_40));
        {
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
        }
        {
          t = not_null(t_40);
          {
            ATerm e_41 = NULL;
            t = t_60(t);
            {
              a_41 = t;
              {
                t = not_null(u_40);
                {
                  ATerm g_41 = NULL;
                  t = u_60(t);
                  {
                    e_41 = t;
                    {
                      ATerm h_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(a_41), not_null(e_41)), not_null(y_40));
                      {
                        h_41 = t;
                        if(((g_41 != NULL) && (g_41 != h_41)))
                          _fail(h_41);
                        else
                          g_41 = h_41;
                      }
                      t = not_null(g_41);
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
ATerm Rec_2 (ATerm t, ATerm d_60 (ATerm), ATerm e_60 (ATerm))
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_41 = t;
  s_41 :
  if(match_cons(t_41, sym_Rec_2))
    {
      u_41 = ATgetArgument(t_41, 0);
      v_41 = ATgetArgument(t_41, 1);
      {
        ATerm z_41 = NULL,b_42 = NULL;
        ATerm a_42 = NULL;
        t = SSLgetAnnotations(not_null(t_41));
        {
          a_42 = t;
          if(((z_41 != NULL) && (z_41 != a_42)))
            _fail(a_42);
          else
            z_41 = a_42;
        }
        {
          t = not_null(u_41);
          {
            ATerm d_42 = NULL;
            t = d_60(t);
            {
              b_42 = t;
              {
                t = not_null(v_41);
                {
                  ATerm f_42 = NULL;
                  t = e_60(t);
                  {
                    d_42 = t;
                    {
                      ATerm g_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(b_42), not_null(d_42)), not_null(z_41));
                      {
                        g_42 = t;
                        if(((f_42 != NULL) && (f_42 != g_42)))
                          _fail(g_42);
                        else
                          f_42 = g_42;
                      }
                      t = not_null(f_42);
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
ATerm SVar_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm r_42 = NULL,s_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym_SVar_1))
    {
      s_42 = ATgetArgument(r_42, 0);
      {
        ATerm w_42 = NULL,y_42 = NULL;
        ATerm x_42 = NULL;
        t = SSLgetAnnotations(not_null(r_42));
        {
          x_42 = t;
          if(((w_42 != NULL) && (w_42 != x_42)))
            _fail(x_42);
          else
            w_42 = x_42;
        }
        {
          t = not_null(s_42);
          {
            ATerm a_43 = NULL;
            t = c_60(t);
            {
              y_42 = t;
              {
                ATerm b_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(y_42)), not_null(w_42));
                {
                  b_43 = t;
                  if(((a_43 != NULL) && (a_43 != b_43)))
                    _fail(b_43);
                  else
                    a_43 = b_43;
                }
                t = not_null(a_43);
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
ATerm Call_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  l_43 :
  if(match_cons(m_43, sym_Call_2))
    {
      n_43 = ATgetArgument(m_43, 0);
      o_43 = ATgetArgument(m_43, 1);
      {
        ATerm s_43 = NULL,u_43 = NULL;
        ATerm t_43 = NULL;
        t = SSLgetAnnotations(not_null(m_43));
        {
          t_43 = t;
          if(((s_43 != NULL) && (s_43 != t_43)))
            _fail(t_43);
          else
            s_43 = t_43;
        }
        {
          t = not_null(n_43);
          {
            ATerm w_43 = NULL;
            t = r_60(t);
            {
              u_43 = t;
              {
                t = not_null(o_43);
                {
                  ATerm y_43 = NULL;
                  t = s_60(t);
                  {
                    w_43 = t;
                    {
                      ATerm z_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(u_43), not_null(w_43)), not_null(s_43));
                      {
                        z_43 = t;
                        if(((y_43 != NULL) && (y_43 != z_43)))
                          _fail(z_43);
                        else
                          y_43 = z_43;
                      }
                      t = not_null(y_43);
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
ATerm LGChoice_2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym_LGChoice_2))
    {
      m_44 = ATgetArgument(l_44, 0);
      n_44 = ATgetArgument(l_44, 1);
      {
        ATerm r_44 = NULL,t_44 = NULL;
        ATerm s_44 = NULL;
        t = SSLgetAnnotations(not_null(l_44));
        {
          s_44 = t;
          if(((r_44 != NULL) && (r_44 != s_44)))
            _fail(s_44);
          else
            r_44 = s_44;
        }
        {
          t = not_null(m_44);
          {
            ATerm v_44 = NULL;
            t = z_59(t);
            {
              t_44 = t;
              {
                t = not_null(n_44);
                {
                  ATerm x_44 = NULL;
                  t = a_60(t);
                  {
                    v_44 = t;
                    {
                      ATerm y_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(t_44), not_null(v_44)), not_null(r_44));
                      {
                        y_44 = t;
                        if(((x_44 != NULL) && (x_44 != y_44)))
                          _fail(y_44);
                        else
                          x_44 = y_44;
                      }
                      t = not_null(x_44);
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
ATerm GChoice_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym_GChoice_2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      {
        ATerm q_45 = NULL,s_45 = NULL;
        ATerm r_45 = NULL;
        t = SSLgetAnnotations(not_null(k_45));
        {
          r_45 = t;
          if(((q_45 != NULL) && (q_45 != r_45)))
            _fail(r_45);
          else
            q_45 = r_45;
        }
        {
          t = not_null(l_45);
          {
            ATerm u_45 = NULL;
            t = x_59(t);
            {
              s_45 = t;
              {
                t = not_null(m_45);
                {
                  ATerm w_45 = NULL;
                  t = y_59(t);
                  {
                    u_45 = t;
                    {
                      ATerm x_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(s_45), not_null(u_45)), not_null(q_45));
                      {
                        x_45 = t;
                        if(((w_45 != NULL) && (w_45 != x_45)))
                          _fail(x_45);
                        else
                          w_45 = x_45;
                      }
                      t = not_null(w_45);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym_GuardedLChoice_3))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      n_46 = ATgetArgument(k_46, 2);
      {
        ATerm s_46 = NULL,u_46 = NULL;
        ATerm t_46 = NULL;
        t = SSLgetAnnotations(not_null(k_46));
        {
          t_46 = t;
          if(((s_46 != NULL) && (s_46 != t_46)))
            _fail(t_46);
          else
            s_46 = t_46;
        }
        {
          t = not_null(l_46);
          {
            ATerm w_46 = NULL;
            t = u_59(t);
            {
              u_46 = t;
              {
                t = not_null(m_46);
                {
                  ATerm y_46 = NULL;
                  t = v_59(t);
                  {
                    w_46 = t;
                    {
                      t = not_null(n_46);
                      {
                        ATerm a_47 = NULL;
                        t = w_59(t);
                        {
                          y_46 = t;
                          {
                            ATerm b_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(u_46), not_null(w_46), not_null(y_46)), not_null(s_46));
                            {
                              b_47 = t;
                              if(((a_47 != NULL) && (a_47 != b_47)))
                                _fail(b_47);
                              else
                                a_47 = b_47;
                            }
                            t = not_null(a_47);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
  o_47 = t;
  n_47 :
  if(match_cons(o_47, sym_LChoice_2))
    {
      p_47 = ATgetArgument(o_47, 0);
      q_47 = ATgetArgument(o_47, 1);
      {
        ATerm x_47 = NULL,e_48 = NULL;
        ATerm y_47 = NULL;
        t = SSLgetAnnotations(not_null(o_47));
        {
          y_47 = t;
          if(((x_47 != NULL) && (x_47 != y_47)))
            _fail(y_47);
          else
            x_47 = y_47;
        }
        {
          t = not_null(p_47);
          {
            ATerm g_48 = NULL;
            t = s_59(t);
            {
              e_48 = t;
              {
                t = not_null(q_47);
                {
                  ATerm i_48 = NULL;
                  t = t_59(t);
                  {
                    g_48 = t;
                    {
                      ATerm j_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(e_48), not_null(g_48)), not_null(x_47));
                      {
                        j_48 = t;
                        if(((i_48 != NULL) && (i_48 != j_48)))
                          _fail(j_48);
                        else
                          i_48 = j_48;
                      }
                      t = not_null(i_48);
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
ATerm Choice_2 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm))
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  u_48 :
  if(match_cons(v_48, sym_Choice_2))
    {
      w_48 = ATgetArgument(v_48, 0);
      x_48 = ATgetArgument(v_48, 1);
      {
        ATerm b_49 = NULL,d_49 = NULL;
        ATerm c_49 = NULL;
        t = SSLgetAnnotations(not_null(v_48));
        {
          c_49 = t;
          if(((b_49 != NULL) && (b_49 != c_49)))
            _fail(c_49);
          else
            b_49 = c_49;
        }
        {
          t = not_null(w_48);
          {
            ATerm f_49 = NULL;
            t = q_59(t);
            {
              d_49 = t;
              {
                t = not_null(x_48);
                {
                  ATerm h_49 = NULL;
                  t = r_59(t);
                  {
                    f_49 = t;
                    {
                      ATerm i_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(d_49), not_null(f_49)), not_null(b_49));
                      {
                        i_49 = t;
                        if(((h_49 != NULL) && (h_49 != i_49)))
                          _fail(i_49);
                        else
                          h_49 = i_49;
                      }
                      t = not_null(h_49);
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
ATerm Seq_2 (ATerm t, ATerm o_59 (ATerm), ATerm p_59 (ATerm))
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym_Seq_2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      {
        ATerm c_50 = NULL,e_50 = NULL;
        ATerm d_50 = NULL;
        t = SSLgetAnnotations(not_null(w_49));
        {
          d_50 = t;
          if(((c_50 != NULL) && (c_50 != d_50)))
            _fail(d_50);
          else
            c_50 = d_50;
        }
        {
          t = not_null(x_49);
          {
            ATerm g_50 = NULL;
            t = o_59(t);
            {
              e_50 = t;
              {
                t = not_null(y_49);
                {
                  ATerm i_50 = NULL;
                  t = p_59(t);
                  {
                    g_50 = t;
                    {
                      ATerm j_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(e_50), not_null(g_50)), not_null(c_50));
                      {
                        j_50 = t;
                        if(((i_50 != NULL) && (i_50 != j_50)))
                          _fail(j_50);
                        else
                          i_50 = j_50;
                      }
                      t = not_null(i_50);
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
ATerm Test_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm y_50 = NULL,z_50 = NULL;
  y_50 = t;
  t_50 :
  if(match_cons(y_50, sym_Test_1))
    {
      z_50 = ATgetArgument(y_50, 0);
      {
        ATerm g_51 = NULL,l_51 = NULL;
        ATerm k_51 = NULL;
        t = SSLgetAnnotations(not_null(y_50));
        {
          k_51 = t;
          if(((g_51 != NULL) && (g_51 != k_51)))
            _fail(k_51);
          else
            g_51 = k_51;
        }
        {
          t = not_null(z_50);
          {
            ATerm n_51 = NULL;
            t = m_59(t);
            {
              l_51 = t;
              {
                ATerm o_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(l_51)), not_null(g_51));
                {
                  o_51 = t;
                  if(((n_51 != NULL) && (n_51 != o_51)))
                    _fail(o_51);
                  else
                    n_51 = o_51;
                }
                t = not_null(n_51);
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
ATerm Not_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm a_52 = NULL,b_52 = NULL;
  a_52 = t;
  z_51 :
  if(match_cons(a_52, sym_Not_1))
    {
      b_52 = ATgetArgument(a_52, 0);
      {
        ATerm e_52 = NULL,g_52 = NULL;
        ATerm f_52 = NULL;
        t = SSLgetAnnotations(not_null(a_52));
        {
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
        }
        {
          t = not_null(b_52);
          {
            ATerm i_52 = NULL;
            t = n_59(t);
            {
              g_52 = t;
              {
                ATerm j_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(g_52)), not_null(e_52));
                {
                  j_52 = t;
                  if(((i_52 != NULL) && (i_52 != j_52)))
                    _fail(j_52);
                  else
                    i_52 = j_52;
                }
                t = not_null(i_52);
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
  ATerm s_52 = NULL;
  s_52 = t;
  r_52 :
  if(match_cons(s_52, sym_Fail_0))
    {
      ATerm u_52 = NULL,w_52 = NULL;
      ATerm s_6;
      s_6 = t;
      {
        ATerm v_52 = NULL;
        t = SSLgetAnnotations(not_null(s_52));
        {
          v_52 = t;
          if(((u_52 != NULL) && (u_52 != v_52)))
            _fail(v_52);
          else
            u_52 = v_52;
        }
      }
      t = s_6;
      {
        ATerm x_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(u_52));
        {
          x_52 = t;
          if(((w_52 != NULL) && (w_52 != x_52)))
            _fail(x_52);
          else
            w_52 = x_52;
        }
        t = not_null(w_52);
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
  ATerm f_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_Id_0))
    {
      ATerm h_53 = NULL,j_53 = NULL;
      ATerm t_6;
      t_6 = t;
      {
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(f_53));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
      }
      t = t_6;
      {
        ATerm k_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(h_53));
        {
          k_53 = t;
          if(((j_53 != NULL) && (j_53 != k_53)))
            _fail(k_53);
          else
            j_53 = k_53;
        }
        t = not_null(j_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm w_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(f_7);
                                  }
                                else
                                  {
                                    t = e_7;
                                    {
                                      ATerm g_7 = t;
                                      int h_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(l_7);
                                                    }
                                                  else
                                                    {
                                                      t = k_7;
                                                      {
                                                        ATerm m_7 = t;
                                                        int n_7 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                  ATerm z_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm a_1 (ATerm t)
                                                                  {
                                                                    ATerm b_1 (ATerm t)
                                                                    {
                                                                      ATerm c_1 (ATerm t)
                                                                      {
                                                                        t = SVar_1(t, is_string_0);
                                                                        return(t);
                                                                      }
                                                                      t = Call_2(t, c_1, Nil_0);
                                                                      return(t);
                                                                    }
                                                                    t = list_1(t, b_1);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, z_0, a_1);
                                                                  LocalPopChoice(p_7);
                                                                }
                                                              else
                                                                {
                                                                  t = o_7;
                                                                  {
                                                                    ATerm q_7 = t;
                                                                    int r_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(r_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_7;
                                                                        {
                                                                          ATerm s_7 = t;
                                                                          int t_7 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(t_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_7;
                                                                              {
                                                                                ATerm u_7 = t;
                                                                                int v_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, d_1);
                                                                                    LocalPopChoice(v_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_7;
                                                                                    {
                                                                                      ATerm w_7 = t;
                                                                                      int x_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(x_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_7;
                                                                                          {
                                                                                            ATerm y_7 = t;
                                                                                            int z_7 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(b_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_8;
                                                                                                      {
                                                                                                        ATerm c_8 = t;
                                                                                                        int d_8 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            LocalPopChoice(d_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_8;
                                                                                                            {
                                                                                                              ATerm e_8 = t;
                                                                                                              int f_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  LocalPopChoice(f_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_8;
                                                                                                                  {
                                                                                                                    ATerm g_8 = t;
                                                                                                                    int h_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(h_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = g_8;
                                                                                                                        {
                                                                                                                          ATerm i_8 = t;
                                                                                                                          int j_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, e_1, strategy_expression_0);
                                                                                                                              LocalPopChoice(j_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_8;
                                                                                                                              {
                                                                                                                                ATerm k_8 = t;
                                                                                                                                int l_8 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(l_8);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = k_8;
                                                                                                                                    {
                                                                                                                                      ATerm m_8 = t;
                                                                                                                                      int n_8 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm f_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, f_1);
                                                                                                                                          LocalPopChoice(n_8);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = m_8;
                                                                                                                                          {
                                                                                                                                            ATerm o_8 = t;
                                                                                                                                            int p_8 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm g_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm h_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm i_1 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = VarDec_2(t, is_string_0, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, j_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_3(t, is_string_0, i_1, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, h_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, g_1, strategy_expression_0);
                                                                                                                                                LocalPopChoice(p_8);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = o_8;
                                                                                                                                                {
                                                                                                                                                  ATerm q_8 = t;
                                                                                                                                                  int r_8 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm k_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      ATerm l_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm m_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = list_1(t, m_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Case_4(t, is_string_0, k_1, l_1, strategy_expression_0);
                                                                                                                                                      LocalPopChoice(r_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = q_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm s_8 = t;
                                                                                                                                                        int t_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm n_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, n_1, term_expression_0);
                                                                                                                                                            LocalPopChoice(t_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = s_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm u_8 = t;
                                                                                                                                                              int v_8 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm o_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, o_1);
                                                                                                                                                                  LocalPopChoice(v_8);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = u_8;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm w_8 = t;
                                                                                                                                                                    int x_8 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        LocalPopChoice(x_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = w_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm p_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_y_8;
                                                                                                                                                                            return(t);
                                                                                                                                                                          }
                                                                                                                                                                          t = debug_1(t, p_1);
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm VarDec_2 (ATerm t, ATerm k_60 (ATerm), ATerm l_60 (ATerm))
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_VarDec_2))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      {
        ATerm b_54 = NULL,d_54 = NULL;
        ATerm c_54 = NULL;
        t = SSLgetAnnotations(not_null(v_53));
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
        {
          t = not_null(w_53);
          {
            ATerm f_54 = NULL;
            t = k_60(t);
            {
              d_54 = t;
              {
                t = not_null(x_53);
                {
                  ATerm h_54 = NULL;
                  t = l_60(t);
                  {
                    f_54 = t;
                    {
                      ATerm i_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_54), not_null(f_54)), not_null(b_54));
                      {
                        i_54 = t;
                        if(((h_54 != NULL) && (h_54 != i_54)))
                          _fail(i_54);
                        else
                          h_54 = i_54;
                      }
                      t = not_null(h_54);
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
ATerm SDef_3 (ATerm t, ATerm h_60 (ATerm), ATerm i_60 (ATerm), ATerm j_60 (ATerm))
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  v_54 = t;
  u_54 :
  if(match_cons(v_54, sym_SDef_3))
    {
      w_54 = ATgetArgument(v_54, 0);
      x_54 = ATgetArgument(v_54, 1);
      y_54 = ATgetArgument(v_54, 2);
      {
        ATerm d_55 = NULL,f_55 = NULL;
        ATerm e_55 = NULL;
        t = SSLgetAnnotations(not_null(v_54));
        {
          e_55 = t;
          if(((d_55 != NULL) && (d_55 != e_55)))
            _fail(e_55);
          else
            d_55 = e_55;
        }
        {
          t = not_null(w_54);
          {
            ATerm h_55 = NULL;
            t = h_60(t);
            {
              f_55 = t;
              {
                t = not_null(x_54);
                {
                  ATerm j_55 = NULL;
                  t = i_60(t);
                  {
                    h_55 = t;
                    {
                      t = not_null(y_54);
                      {
                        ATerm l_55 = NULL;
                        t = j_60(t);
                        {
                          j_55 = t;
                          {
                            ATerm m_55 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_55), not_null(h_55), not_null(j_55)), not_null(d_55));
                            {
                              m_55 = t;
                              if(((l_55 != NULL) && (l_55 != m_55)))
                                _fail(m_55);
                              else
                                l_55 = m_55;
                            }
                            t = not_null(l_55);
                          }
                        }
                      }
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, r_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, q_1, strategy_expression_0);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_b_9;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm t_55 (ATerm t)
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = Cons_2(t, a_80, t_55);
      }
    return(t);
  }
  t = t_55(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm z_55 = NULL,a_56 = NULL;
  z_55 = t;
  y_55 :
  if(match_cons(z_55, sym_Strategies_1))
    {
      a_56 = ATgetArgument(z_55, 0);
      {
        ATerm d_56 = NULL,f_56 = NULL;
        ATerm e_56 = NULL;
        t = SSLgetAnnotations(not_null(z_55));
        {
          e_56 = t;
          if(((d_56 != NULL) && (d_56 != e_56)))
            _fail(e_56);
          else
            d_56 = e_56;
        }
        {
          t = not_null(a_56);
          {
            ATerm h_56 = NULL;
            t = u_58(t);
            {
              f_56 = t;
              {
                ATerm i_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(f_56)), not_null(d_56));
                {
                  i_56 = t;
                  if(((h_56 != NULL) && (h_56 != i_56)))
                    _fail(i_56);
                  else
                    h_56 = i_56;
                }
                t = not_null(h_56);
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
ATerm Specification_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm s_56 = NULL,t_56 = NULL;
  s_56 = t;
  r_56 :
  if(match_cons(s_56, sym_Specification_1))
    {
      t_56 = ATgetArgument(s_56, 0);
      {
        ATerm w_56 = NULL,y_56 = NULL;
        ATerm x_56 = NULL;
        t = SSLgetAnnotations(not_null(s_56));
        {
          x_56 = t;
          if(((w_56 != NULL) && (w_56 != x_56)))
            _fail(x_56);
          else
            w_56 = x_56;
        }
        {
          t = not_null(t_56);
          {
            ATerm a_57 = NULL;
            t = w_58(t);
            {
              y_56 = t;
              {
                ATerm b_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_56)), not_null(w_56));
                {
                  b_57 = t;
                  if(((a_57 != NULL) && (a_57 != b_57)))
                    _fail(b_57);
                  else
                    a_57 = b_57;
                }
                t = not_null(a_57);
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
ATerm stratego_specification_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, w_1);
            return(t);
          }
          t = Cons_2(t, v_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, u_1);
        return(t);
      }
      t = Specification_1(t, t_1);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = debug_1(t, x_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  l_57 :
  if(match_cons(m_57, sym__2))
    {
      n_57 = ATgetArgument(m_57, 0);
      o_57 = ATgetArgument(m_57, 1);
      {
        ATerm v_57 = NULL,x_57 = NULL;
        ATerm w_57 = NULL;
        t = SSLgetAnnotations(not_null(m_57));
        {
          w_57 = t;
          if(((v_57 != NULL) && (v_57 != w_57)))
            _fail(w_57);
          else
            v_57 = w_57;
        }
        {
          t = not_null(n_57);
          {
            ATerm z_57 = NULL;
            t = k_49(t);
            {
              x_57 = t;
              {
                t = not_null(o_57);
                {
                  ATerm b_58 = NULL;
                  t = l_49(t);
                  {
                    z_57 = t;
                    {
                      ATerm c_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_57), not_null(z_57)), not_null(v_57));
                      {
                        c_58 = t;
                        if(((b_58 != NULL) && (b_58 != c_58)))
                          _fail(c_58);
                        else
                          b_58 = c_58;
                      }
                      t = not_null(b_58);
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
  ATerm k_58 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm l_58 = NULL,m_58 = NULL;
      l_58 = t;
      j_58 :
      if(match_cons(l_58, sym_Program_1))
        {
          m_58 = ATgetArgument(l_58, 0);
          if(((k_58 != NULL) && (k_58 != m_58)))
            _fail(m_58);
          else
            k_58 = m_58;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), not_null(k_58)), term_j_9));
      {
        t = printnl_0(t);
        {
          t = term_l_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym__2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        ATerm m_9;
        m_9 = t;
        t = SSL_printnl(not_null(r_58), not_null(s_58));
        t = m_9;
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
  ATerm z_58 = NULL;
  z_58 = t;
  t = SSL_implode_string(not_null(z_58));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
        e_59 = t;
        d_59 :
        if(((ATgetType(e_59) == AT_LIST) && ((ATermList) e_59 != ATempty)))
          {
            f_59 = ATgetFirst((ATermList) e_59);
            g_59 = (ATerm) ATgetNext((ATermList) e_59);
            {
              t = not_null(f_59);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(g_59);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_1);
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
  ATerm y_60 = NULL;
  ATerm c_61 = NULL;
  y_60 = t;
  {
    ATerm f_61 = NULL;
    ATerm m_61 = NULL,n_61 = NULL,q_61 = NULL;
    t = not_null(y_60);
    {
      f_61 = t;
      {
        t = SSL_explode_term(not_null(f_61));
        {
          m_61 = t;
          p_60 :
          if(match_cons(m_61, sym__2))
            {
              n_61 = ATgetArgument(m_61, 0);
              q_61 = ATgetArgument(m_61, 1);
              q_60 :
              if(match_string(n_61, ""))
                {
                  if(((c_61 != NULL) && (c_61 != q_61)))
                    _fail(q_61);
                  else
                    c_61 = q_61;
                }
              else
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
      t = not_null(c_61);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm u_61 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_61);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        {
          t = Nil_0(t);
          t = n_80(t);
        }
      }
    return(t);
  }
  t = u_61(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  x_61 = t;
  w_61 :
  if(match_cons(x_61, sym__2))
    {
      y_61 = ATgetArgument(x_61, 0);
      z_61 = ATgetArgument(x_61, 1);
      {
        t = not_null(y_61);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(z_61);
            return(t);
          }
          t = at_end_1(t, a_2);
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
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_62 = NULL;
  e_62 = t;
  t = SSL_explode_string(not_null(e_62));
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
ATerm debug_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    ATerm j_62 = NULL,l_62 = NULL;
    ATerm u_9;
    u_9 = t;
    {
      ATerm k_62 = NULL;
      t = h_70(t);
      {
        k_62 = t;
        if(((j_62 != NULL) && (j_62 != k_62)))
          _fail(k_62);
        else
          j_62 = k_62;
      }
    }
    t = u_9;
    {
      ATerm m_62 = NULL;
      m_62 = t;
      if(((l_62 != NULL) && (l_62 != m_62)))
        _fail(m_62);
      else
        l_62 = m_62;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_62)), not_null(j_62)));
        t = printnl_0(t);
      }
    }
  }
  t = t_9;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_62 = NULL;
  q_62 = t;
  t = SSL_is_string(not_null(q_62));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_2);
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
              z_62 = t;
              y_62 :
              if(match_cons(z_62, sym_Path_1))
                {
                  a_63 = ATgetArgument(z_62, 0);
                  t = not_null(a_63);
                }
              else
                {
                  if(match_cons(z_62, sym_Var_1))
                    {
                      a_63 = ATgetArgument(z_62, 0);
                      {
                        t = not_null(a_63);
                        {
                          ATerm z_9 = t;
                          int a_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_10);
                            }
                          else
                            {
                              t = z_9;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_b_10;
                                  return(t);
                                }
                                t = debug_1(t, c_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_62, sym_Prefix_2))
                        {
                          a_63 = ATgetArgument(z_62, 0);
                          b_63 = ATgetArgument(z_62, 1);
                          {
                            ATerm g_63 = NULL,i_63 = NULL;
                            ATerm c_10;
                            c_10 = t;
                            {
                              ATerm h_63 = NULL;
                              t = not_null(a_63);
                              {
                                t = eval_config_0(t);
                                {
                                  h_63 = t;
                                  if(((g_63 != NULL) && (g_63 != h_63)))
                                    _fail(h_63);
                                  else
                                    g_63 = h_63;
                                }
                              }
                            }
                            t = c_10;
                            {
                              ATerm j_63 = NULL;
                              t = not_null(b_63);
                              {
                                t = eval_config_0(t);
                                {
                                  j_63 = t;
                                  if(((i_63 != NULL) && (i_63 != j_63)))
                                    _fail(j_63);
                                  else
                                    i_63 = j_63;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_63), not_null(i_63));
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
  ATerm r_63 = NULL;
  r_63 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(r_63));
    {
      t = table_get_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_10;
            e_10 = t;
            {
              ATerm t_63 = NULL;
              ATerm u_63 = NULL;
              u_63 = t;
              if(((t_63 != NULL) && (t_63 != u_63)))
                _fail(u_63);
              else
                t_63 = u_63;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(r_63), not_null(t_63));
                t = table_put_0(t);
              }
            }
            t = e_10;
          }
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm y_63 = NULL;
      ATerm z_63 = NULL;
      t = term_g_10;
      {
        t = get_config_0(t);
        {
          z_63 = t;
          if(((y_63 != NULL) && (y_63 != z_63)))
            _fail(z_63);
          else
            y_63 = z_63;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_63), term_h_10);
        t = geq_0(t);
      }
    }
    t = f_10;
    t = l_67(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
  d_64 = t;
  c_64 :
  if(match_cons(d_64, sym__2))
    {
      e_64 = ATgetArgument(d_64, 0);
      f_64 = ATgetArgument(d_64, 1);
      t = SSL_WriteToTextFile(not_null(e_64), not_null(f_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  l_64 = t;
  k_64 :
  if(match_cons(l_64, sym__2))
    {
      m_64 = ATgetArgument(l_64, 0);
      n_64 = ATgetArgument(l_64, 1);
      t = SSL_WriteToBinaryFile(not_null(m_64), not_null(n_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_64 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_2 (ATerm t)
          {
            ATerm w_64 = NULL,x_64 = NULL;
            w_64 = t;
            s_64 :
            if(match_cons(w_64, sym_Output_1))
              {
                x_64 = ATgetArgument(w_64, 0);
                if(((v_64 != NULL) && (v_64 != x_64)))
                  _fail(x_64);
                else
                  v_64 = x_64;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_2);
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          {
            ATerm y_64 = NULL;
            t = term_l_10;
            {
              y_64 = t;
              if(((v_64 != NULL) && (v_64 != y_64)))
                _fail(y_64);
              else
                v_64 = y_64;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_2, _id);
  }
  t = i_10;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_2 (ATerm t)
      {
        t = not_null(v_64);
        return(t);
      }
      t = split_2(t, i_2, _id);
      return(t);
    }
    t = _2(t, _id, h_2);
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              ATerm z_64 = NULL;
              z_64 = t;
              u_64 :
              if(!(match_cons(z_64, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_2);
            return(t);
          }
          t = _2(t, j_2, WriteToBinaryFile_0);
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm f_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
  ATerm o_10;
  o_10 = t;
  t = dtime_0(t);
  t = o_10;
  {
    t = r_69(t);
    {
      ATerm p_10;
      p_10 = t;
      {
        ATerm g_65 = NULL;
        t = dtime_0(t);
        {
          g_65 = t;
          if(((f_65 != NULL) && (f_65 != g_65)))
            _fail(g_65);
          else
            f_65 = g_65;
        }
      }
      t = p_10;
      {
        h_65 = t;
        e_65 :
        if(match_cons(h_65, sym__2))
          {
            i_65 = ATgetArgument(h_65, 0);
            j_65 = ATgetArgument(h_65, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_65)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_65))), not_null(j_65));
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
  ATerm v_65 = NULL;
  v_65 = t;
  t = SSL_ReadFromFile(not_null(v_65));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm a_66 = NULL,c_66 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm b_66 = NULL;
    t = w_72(t);
    {
      b_66 = t;
      if(((a_66 != NULL) && (a_66 != b_66)))
        _fail(b_66);
      else
        a_66 = b_66;
    }
  }
  t = q_10;
  {
    ATerm d_66 = NULL;
    t = x_72(t);
    {
      d_66 = t;
      if(((c_66 != NULL) && (c_66 != d_66)))
        _fail(d_66);
      else
        c_66 = d_66;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_66), not_null(c_66));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_66 = NULL;
  ATerm r_10;
  r_10 = t;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 (ATerm t)
        {
          ATerm k_66 = NULL,l_66 = NULL;
          k_66 = t;
          h_66 :
          if(match_cons(k_66, sym_Input_1))
            {
              l_66 = ATgetArgument(k_66, 0);
              if(((j_66 != NULL) && (j_66 != l_66)))
                _fail(l_66);
              else
                j_66 = l_66;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_2);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm m_66 = NULL;
          t = term_w_10;
          {
            m_66 = t;
            if(((j_66 != NULL) && (j_66 != m_66)))
              _fail(m_66);
            else
              j_66 = m_66;
          }
        }
      }
  }
  t = r_10;
  {
    ATerm m_2 (ATerm t)
    {
      t = not_null(j_66);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_2);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_66 = NULL;
  q_66 = t;
  t = SSL_string_to_int(not_null(q_66));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
  z_66 = t;
  x_66 :
  if(match_string(z_66, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(z_66) == AT_LIST) && ((ATermList) z_66 != ATempty)))
        {
          a_67 = ATgetFirst((ATermList) z_66);
          b_67 = (ATerm) ATgetNext((ATermList) z_66);
          y_66 :
          if(((ATgetType(b_67) == AT_LIST) && ((ATermList) b_67 != ATempty)))
            {
              c_67 = ATgetFirst((ATermList) b_67);
              d_67 = (ATerm) ATgetNext((ATermList) b_67);
              {
                ATerm h_67 = NULL;
                ATerm x_10;
                x_10 = t;
                {
                  t = not_null(a_67);
                  t = h_0(t);
                }
                t = x_10;
                {
                  ATerm i_67 = NULL;
                  t = not_null(c_67);
                  {
                    t = i_0(t);
                    {
                      i_67 = t;
                      if(((h_67 != NULL) && (h_67 != i_67)))
                        _fail(i_67);
                      else
                        h_67 = i_67;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_67)), not_null(h_67));
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
  ATerm y_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm d_68 = NULL;
        d_68 = t;
        o_67 :
        if(!(match_string(d_68, "-i")))
          {
            if(!(match_string(d_68, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        ATerm g_68 = NULL;
        ATerm b_11;
        b_11 = t;
        {
          ATerm e_68 = NULL;
          ATerm f_68 = NULL;
          f_68 = t;
          if(((e_68 != NULL) && (e_68 != f_68)))
            _fail(f_68);
          else
            e_68 = f_68;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(e_68));
            t = set_config_0(t);
          }
        }
        t = b_11;
        {
          ATerm h_68 = NULL;
          h_68 = t;
          if(((g_68 != NULL) && (g_68 != h_68)))
            _fail(h_68);
          else
            g_68 = h_68;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_68));
        }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_d_11;
        return(t);
      }
      t = ArgOption_3(t, n_2, o_2, p_2);
      LocalPopChoice(a_11);
    }
  else
    {
      t = y_10;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm i_68 = NULL;
              i_68 = t;
              r_67 :
              if(!(match_string(i_68, "-o")))
                {
                  if(!(match_string(i_68, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              ATerm l_68 = NULL;
              ATerm g_11;
              g_11 = t;
              {
                ATerm j_68 = NULL;
                ATerm k_68 = NULL;
                k_68 = t;
                if(((j_68 != NULL) && (j_68 != k_68)))
                  _fail(k_68);
                else
                  j_68 = k_68;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_11, not_null(j_68));
                  t = set_config_0(t);
                }
              }
              t = g_11;
              {
                ATerm q_68 = NULL;
                q_68 = t;
                if(((l_68 != NULL) && (l_68 != q_68)))
                  _fail(q_68);
                else
                  l_68 = q_68;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_68));
              }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_i_11;
              return(t);
            }
            t = ArgOption_3(t, q_2, r_2, s_2);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm j_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm r_68 = NULL;
                    r_68 = t;
                    u_67 :
                    if(!(match_string(r_68, "-S")))
                      {
                        if(!(match_string(r_68, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    t = term_m_11;
                    t = set_config_0(t);
                    t = term_n_11;
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    t = term_o_11;
                    return(t);
                  }
                  t = Option_3(t, t_2, u_2, v_2);
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = j_11;
                  {
                    ATerm p_11 = t;
                    int q_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_2 (ATerm t)
                        {
                          ATerm t_68 = NULL;
                          t_68 = t;
                          v_67 :
                          if(!(match_string(t_68, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_2 (ATerm t)
                        {
                          ATerm b_69 = NULL;
                          ATerm r_11;
                          r_11 = t;
                          {
                            ATerm u_68 = NULL;
                            ATerm a_69 = NULL;
                            t = string_to_int_0(t);
                            {
                              a_69 = t;
                              if(((u_68 != NULL) && (u_68 != a_69)))
                                _fail(a_69);
                              else
                                u_68 = a_69;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(u_68));
                              t = set_config_0(t);
                            }
                          }
                          t = r_11;
                          {
                            ATerm c_69 = NULL;
                            c_69 = t;
                            if(((b_69 != NULL) && (b_69 != c_69)))
                              _fail(c_69);
                            else
                              b_69 = c_69;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_69));
                          }
                          return(t);
                        }
                        ATerm y_2 (ATerm t)
                        {
                          t = term_s_11;
                          return(t);
                        }
                        t = ArgOption_3(t, w_2, x_2, y_2);
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
                              ATerm z_2 (ATerm t)
                              {
                                ATerm h_69 = NULL;
                                h_69 = t;
                                y_67 :
                                if(!(match_string(h_69, "-k")))
                                  {
                                    if(!(match_string(h_69, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                ATerm v_11;
                                v_11 = t;
                                {
                                  ATerm i_69 = NULL;
                                  ATerm j_69 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    j_69 = t;
                                    if(((i_69 != NULL) && (i_69 != j_69)))
                                      _fail(j_69);
                                    else
                                      i_69 = j_69;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(i_69));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_11;
                                return(t);
                              }
                              ATerm b_3 (ATerm t)
                              {
                                t = term_x_11;
                                return(t);
                              }
                              t = ArgOption_3(t, z_2, a_3, b_3);
                              LocalPopChoice(u_11);
                            }
                          else
                            {
                              t = t_11;
                              {
                                ATerm y_11 = t;
                                int z_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      ATerm k_69 = NULL;
                                      k_69 = t;
                                      a_68 :
                                      if(!(match_string(k_69, "-v")))
                                        {
                                          if(!(match_string(k_69, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm d_3 (ATerm t)
                                    {
                                      t = term_c_12;
                                      t = set_config_0(t);
                                      t = term_d_12;
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      t = term_e_12;
                                      return(t);
                                    }
                                    t = Option_3(t, c_3, d_3, e_3);
                                    LocalPopChoice(z_11);
                                  }
                                else
                                  {
                                    t = y_11;
                                    {
                                      ATerm f_12 = t;
                                      int g_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_3 (ATerm t)
                                          {
                                            ATerm l_69 = NULL;
                                            l_69 = t;
                                            b_68 :
                                            if(!(match_string(l_69, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm g_3 (ATerm t)
                                          {
                                            t = term_i_12;
                                            t = set_config_0(t);
                                            t = term_j_12;
                                            return(t);
                                          }
                                          ATerm h_3 (ATerm t)
                                          {
                                            t = term_k_12;
                                            return(t);
                                          }
                                          t = Option_3(t, f_3, g_3, h_3);
                                          LocalPopChoice(g_12);
                                        }
                                      else
                                        {
                                          t = f_12;
                                          {
                                            ATerm i_3 (ATerm t)
                                            {
                                              ATerm m_69 = NULL;
                                              m_69 = t;
                                              c_68 :
                                              if(!(match_string(m_69, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm j_3 (ATerm t)
                                            {
                                              t = term_p_12;
                                              t = set_config_0(t);
                                              t = term_q_12;
                                              return(t);
                                            }
                                            ATerm k_3 (ATerm t)
                                            {
                                              t = term_r_12;
                                              return(t);
                                            }
                                            t = Option_3(t, i_3, j_3, k_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATempty, term_s_12));
  {
    t = printnl_0(t);
    {
      t = term_l_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_69 = NULL;
  x_69 = t;
  t = SSL_TicksToSeconds(not_null(x_69));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym__2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_70), not_null(e_70));
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            t = SSL_addr(not_null(d_70), not_null(e_70));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_74(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
        n_70 = t;
        m_70 :
        if(((ATgetType(n_70) == AT_LIST) && ((ATermList) n_70 != ATempty)))
          {
            o_70 = ATgetFirst((ATermList) n_70);
            p_70 = (ATerm) ATgetNext((ATermList) n_70);
            {
              ATerm s_70 = NULL;
              ATerm t_70 = NULL;
              t = not_null(p_70);
              {
                t = foldr_2(t, i_74, j_74);
                {
                  t_70 = t;
                  if(((s_70 != NULL) && (s_70 != t_70)))
                    _fail(t_70);
                  else
                    s_70 = t_70;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_70), not_null(s_70));
                t = j_74(t);
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
ATerm crush_2 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm))
{
  ATerm a_71 = NULL;
  ATerm c_71 = NULL;
  a_71 = t;
  {
    ATerm d_71 = NULL;
    ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
    t = not_null(a_71);
    {
      d_71 = t;
      {
        t = SSL_explode_term(not_null(d_71));
        {
          f_71 = t;
          z_70 :
          if(match_cons(f_71, sym__2))
            {
              g_71 = ATgetArgument(f_71, 0);
              h_71 = ATgetArgument(f_71, 1);
              if(((c_71 != NULL) && (c_71 != h_71)))
                _fail(h_71);
              else
                c_71 = h_71;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_71);
      t = foldr_2(t, a_76, b_76);
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
    ATerm l_3 (ATerm t)
    {
      t = term_l_11;
      return(t);
    }
    t = crush_2(t, l_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL;
  n_71 = t;
  m_71 :
  if(match_cons(n_71, sym__2))
    {
      o_71 = ATgetArgument(n_71, 0);
      p_71 = ATgetArgument(n_71, 1);
      {
        ATerm x_12;
        x_12 = t;
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_71), not_null(p_71));
              LocalPopChoice(z_12);
            }
          else
            {
              t = y_12;
              t = SSL_gtr(not_null(o_71), not_null(p_71));
            }
        }
        t = x_12;
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
  ATerm v_71 = NULL;
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
      w_71 = t;
      u_71 :
      if(match_cons(w_71, sym__2))
        {
          x_71 = ATgetArgument(w_71, 0);
          y_71 = ATgetArgument(w_71, 1);
          {
            if(((v_71 != NULL) && (v_71 != x_71)))
              _fail(x_71);
            else
              v_71 = x_71;
            if(((v_71 != NULL) && (v_71 != y_71)))
              _fail(y_71);
            else
              v_71 = y_71;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm c_13;
    c_13 = t;
    {
      ATerm b_72 = NULL;
      ATerm c_72 = NULL;
      t = term_g_10;
      {
        t = get_config_0(t);
        {
          c_72 = t;
          if(((b_72 != NULL) && (b_72 != c_72)))
            _fail(c_72);
          else
            b_72 = c_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_72), term_l_9);
        t = geq_0(t);
      }
    }
    t = c_13;
    t = k_67(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm g_72 = NULL,i_72 = NULL;
    ATerm f_13;
    f_13 = t;
    {
      ATerm h_72 = NULL;
      t = run_time_0(t);
      {
        h_72 = t;
        if(((g_72 != NULL) && (g_72 != h_72)))
          _fail(h_72);
        else
          g_72 = h_72;
      }
    }
    t = f_13;
    {
      ATerm j_72 = NULL;
      t = term_g_13;
      {
        t = get_config_0(t);
        {
          j_72 = t;
          if(((i_72 != NULL) && (i_72 != j_72)))
            _fail(j_72);
          else
            i_72 = j_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_13), not_null(g_72)), term_h_13), not_null(i_72)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_3);
  {
    t = term_l_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_72 = NULL;
  q_72 = t;
  p_72 :
  if(match_cons(q_72, sym_Version_0))
    {
      ATerm s_72 = NULL,u_72 = NULL;
      ATerm j_13;
      j_13 = t;
      {
        ATerm t_72 = NULL;
        t = SSLgetAnnotations(not_null(q_72));
        {
          t_72 = t;
          if(((s_72 != NULL) && (s_72 != t_72)))
            _fail(t_72);
          else
            s_72 = t_72;
        }
      }
      t = j_13;
      {
        ATerm v_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_72));
        {
          v_72 = t;
          if(((u_72 != NULL) && (u_72 != v_72)))
            _fail(v_72);
          else
            u_72 = v_72;
        }
        t = not_null(u_72);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_3);
  t = p_69(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_73 = NULL;
  c_73 = t;
  t = SSL_table_create(not_null(c_73));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_73 = NULL;
  g_73 = t;
  {
    ATerm o_13;
    o_13 = t;
    {
      t = term_p_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_13, term_q_13, not_null(g_73));
          t = table_put_0(t);
        }
      }
    }
    t = o_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_73 = NULL;
  k_73 = t;
  t = SSL_table_destroy(not_null(k_73));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_73 = NULL;
  o_73 = t;
  t = SSL_exit(not_null(o_73));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  r_73 :
  if(((ATermList) s_73 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_73) == AT_LIST) && ((ATermList) s_73 != ATempty)))
        {
          t_73 = ATgetFirst((ATermList) s_73);
          u_73 = (ATerm) ATgetNext((ATermList) s_73);
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
  ATerm r_13;
  r_13 = t;
  {
    ATerm x_73 = NULL;
    ATerm a_74 = NULL;
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm y_73 = NULL;
          ATerm z_73 = NULL;
          z_73 = t;
          if(((y_73 != NULL) && (y_73 != z_73)))
            _fail(z_73);
          else
            y_73 = z_73;
          t = (ATerm) ATinsert(ATempty, not_null(y_73));
        }
      }
    {
      a_74 = t;
      if(((x_73 != NULL) && (x_73 != a_74)))
        _fail(a_74);
      else
        x_73 = a_74;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(x_73));
      t = printnl_0(t);
    }
  }
  t = r_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm d_74 (ATerm t)
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = Cons_2(t, y_79, d_74);
      }
    return(t);
  }
  t = d_74(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  o_74 = t;
  l_74 :
  if(((ATgetType(o_74) == AT_LIST) && ((ATermList) o_74 != ATempty)))
    {
      m_74 = ATgetFirst((ATermList) o_74);
      n_74 = (ATerm) ATgetNext((ATermList) o_74);
      {
        ATerm r_74 = NULL;
        t = not_null(n_74);
        {
          ATerm w_13;
          w_13 = t;
          {
            ATerm s_74 = NULL,u_74 = NULL,w_74 = NULL;
            ATerm x_13;
            x_13 = t;
            {
              ATerm t_74 = NULL;
              t = g_0(t);
              {
                t_74 = t;
                if(((s_74 != NULL) && (s_74 != t_74)))
                  _fail(t_74);
                else
                  s_74 = t_74;
              }
            }
            t = x_13;
            {
              ATerm v_74 = NULL;
              t = not_null(m_74);
              {
                t = f_0(t);
                {
                  v_74 = t;
                  if(((u_74 != NULL) && (u_74 != v_74)))
                    _fail(v_74);
                  else
                    u_74 = v_74;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_74)), not_null(u_74));
                {
                  w_74 = t;
                  if(((r_74 != NULL) && (r_74 != w_74)))
                    _fail(w_74);
                  else
                    r_74 = w_74;
                }
              }
            }
          }
          t = w_13;
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(r_74);
              return(t);
            }
            t = reverse_acc_2(t, f_0, p_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_74 == ATempty))
        {
          {
            t = term_b_12;
            t = g_0(t);
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
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_51 (ATerm))
{
  ATerm h_75 = NULL,i_75 = NULL;
  h_75 = t;
  g_75 :
  if(match_cons(h_75, sym_Program_1))
    {
      i_75 = ATgetArgument(h_75, 0);
      {
        ATerm l_75 = NULL,n_75 = NULL;
        ATerm m_75 = NULL;
        t = SSLgetAnnotations(not_null(h_75));
        {
          m_75 = t;
          if(((l_75 != NULL) && (l_75 != m_75)))
            _fail(m_75);
          else
            l_75 = m_75;
        }
        {
          t = not_null(i_75);
          {
            ATerm p_75 = NULL;
            t = s_51(t);
            {
              n_75 = t;
              {
                ATerm q_75 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_75)), not_null(l_75));
                {
                  q_75 = t;
                  if(((p_75 != NULL) && (p_75 != q_75)))
                    _fail(q_75);
                  else
                    p_75 = q_75;
                }
                t = not_null(p_75);
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
  ATerm z_75 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_76 = NULL;
      t = term_g_13;
      {
        t = get_config_0(t);
        {
          c_76 = t;
          if(((z_75 != NULL) && (z_75 != c_76)))
            _fail(c_76);
          else
            z_75 = c_76;
        }
      }
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm s_3 (ATerm t)
          {
            ATerm d_76 = NULL;
            d_76 = t;
            if(((z_75 != NULL) && (z_75 != d_76)))
              _fail(d_76);
            else
              z_75 = d_76;
            return(t);
          }
          t = Program_1(t, s_3);
          return(t);
        }
        t = option_defined_1(t, r_3);
      }
    }
  {
    ATerm t_3 (ATerm t)
    {
      ATerm u_3 (ATerm t)
      {
        t = not_null(z_75);
        return(t);
      }
      t = short_description_1(t, u_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_3);
    {
      t = term_a_14;
      {
        t = echo_0(t);
        {
          t = term_d_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm e_76 = NULL;
                  ATerm f_76 = NULL;
                  f_76 = t;
                  if(((e_76 != NULL) && (e_76 != f_76)))
                    _fail(f_76);
                  else
                    e_76 = f_76;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_76)), term_h_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_3);
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm g_76 = NULL;
                    ATerm h_76 = NULL;
                    ATerm x_3 (ATerm t)
                    {
                      t = not_null(z_75);
                      return(t);
                    }
                    t = long_description_1(t, x_3);
                    {
                      h_76 = t;
                      if(((g_76 != NULL) && (g_76 != h_76)))
                        _fail(h_76);
                      else
                        g_76 = h_76;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(g_76)), term_i_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_3);
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
  ATerm m_14;
  m_14 = t;
  {
    ATerm n_76 = NULL;
    ATerm o_76 = NULL;
    o_76 = t;
    if(((n_76 != NULL) && (n_76 != o_76)))
      _fail(o_76);
    else
      n_76 = o_76;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATempty, not_null(n_76)));
      t = printnl_0(t);
    }
  }
  t = m_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm p_14;
  p_14 = t;
  {
    t = i_70(t);
    t = debug_0(t);
  }
  t = p_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_51 (ATerm))
{
  ATerm v_76 = NULL,w_76 = NULL;
  v_76 = t;
  u_76 :
  if(match_cons(v_76, sym_Undefined_1))
    {
      w_76 = ATgetArgument(v_76, 0);
      {
        ATerm z_76 = NULL,b_77 = NULL;
        ATerm a_77 = NULL;
        t = SSLgetAnnotations(not_null(v_76));
        {
          a_77 = t;
          if(((z_76 != NULL) && (z_76 != a_77)))
            _fail(a_77);
          else
            z_76 = a_77;
        }
        {
          t = not_null(w_76);
          {
            ATerm d_77 = NULL;
            t = t_51(t);
            {
              b_77 = t;
              {
                ATerm e_77 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_77)), not_null(z_76));
                {
                  e_77 = t;
                  if(((d_77 != NULL) && (d_77 != e_77)))
                    _fail(e_77);
                  else
                    d_77 = e_77;
                }
                t = not_null(d_77);
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
ATerm fetch_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm j_77 (ATerm t)
  {
    ATerm q_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_80, _id);
        LocalPopChoice(u_14);
      }
    else
      {
        t = q_14;
        t = Cons_2(t, _id, j_77);
      }
    return(t);
  }
  t = j_77(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_66 (ATerm))
{
  t = fetch_1(t, u_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_77 = NULL;
  o_77 = t;
  n_77 :
  if(match_cons(o_77, sym_Help_0))
    {
      ATerm q_77 = NULL,s_77 = NULL;
      ATerm x_14;
      x_14 = t;
      {
        ATerm r_77 = NULL;
        t = SSLgetAnnotations(not_null(o_77));
        {
          r_77 = t;
          if(((q_77 != NULL) && (q_77 != r_77)))
            _fail(r_77);
          else
            q_77 = r_77;
        }
      }
      t = x_14;
      {
        ATerm t_77 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_77));
        {
          t_77 = t;
          if(((s_77 != NULL) && (s_77 != t_77)))
            _fail(t_77);
          else
            s_77 = t_77;
        }
        t = not_null(s_77);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_88(t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  y_77 :
  if(match_cons(z_77, sym__2))
    {
      a_78 = ATgetArgument(z_77, 0);
      b_78 = ATgetArgument(z_77, 1);
      t = SSL_table_get(not_null(a_78), not_null(b_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL;
  i_78 = t;
  h_78 :
  if(match_cons(i_78, sym__3))
    {
      j_78 = ATgetArgument(i_78, 0);
      k_78 = ATgetArgument(i_78, 1);
      l_78 = ATgetArgument(i_78, 2);
      {
        ATerm a_15;
        a_15 = t;
        {
          ATerm p_78 = NULL;
          ATerm q_78 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_78), not_null(k_78));
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
              q_78 = t;
              if(((p_78 != NULL) && (p_78 != q_78)))
                _fail(q_78);
              else
                p_78 = q_78;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_78), not_null(k_78), (ATerm) ATinsert(CheckATermList(not_null(p_78)), not_null(l_78)));
            t = table_put_0(t);
          }
        }
        t = a_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm u_78 = NULL;
  ATerm v_78 = NULL;
  t = term_b_12;
  {
    t = u_65(t);
    {
      v_78 = t;
      if(((u_78 != NULL) && (u_78 != v_78)))
        _fail(v_78);
      else
        u_78 = v_78;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, not_null(u_78));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  b_79 = t;
  a_79 :
  if(match_string(b_79, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(b_79) == AT_LIST) && ((ATermList) b_79 != ATempty)))
        {
          c_79 = ATgetFirst((ATermList) b_79);
          d_79 = (ATerm) ATgetNext((ATermList) b_79);
          {
            ATerm g_79 = NULL;
            ATerm d_15;
            d_15 = t;
            {
              t = not_null(c_79);
              t = a_0(t);
            }
            t = d_15;
            {
              ATerm h_79 = NULL;
              t = term_b_12;
              {
                t = b_0(t);
                {
                  h_79 = t;
                  if(((g_79 != NULL) && (g_79 != h_79)))
                    _fail(h_79);
                  else
                    g_79 = h_79;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_79)), not_null(g_79));
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
  ATerm y_3 (ATerm t)
  {
    ATerm m_79 = NULL;
    m_79 = t;
    l_79 :
    if(!(match_string(m_79, "--help")))
      {
        if(!(match_string(m_79, "-h")))
          {
            if(!(match_string(m_79, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_f_15;
    {
      t = set_config_0(t);
      t = term_g_15;
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_h_15;
    return(t);
  }
  t = Option_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL;
  p_79 = t;
  o_79 :
  if(((ATgetType(p_79) == AT_LIST) && ((ATermList) p_79 != ATempty)))
    {
      q_79 = ATgetFirst((ATermList) p_79);
      r_79 = (ATerm) ATgetNext((ATermList) p_79);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_79)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_79)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_61 (ATerm), ATerm p_61 (ATerm))
{
  ATerm f_80 = NULL,g_80 = NULL,j_80 = NULL;
  f_80 = t;
  e_80 :
  if(((ATgetType(f_80) == AT_LIST) && ((ATermList) f_80 != ATempty)))
    {
      g_80 = ATgetFirst((ATermList) f_80);
      j_80 = (ATerm) ATgetNext((ATermList) f_80);
      {
        ATerm p_80 = NULL,r_80 = NULL;
        ATerm q_80 = NULL;
        t = SSLgetAnnotations(not_null(f_80));
        {
          q_80 = t;
          if(((p_80 != NULL) && (p_80 != q_80)))
            _fail(q_80);
          else
            p_80 = q_80;
        }
        {
          t = not_null(g_80);
          {
            ATerm t_80 = NULL;
            t = o_61(t);
            {
              r_80 = t;
              {
                t = not_null(j_80);
                {
                  ATerm v_80 = NULL;
                  t = p_61(t);
                  {
                    t_80 = t;
                    {
                      ATerm w_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_80)), not_null(r_80)), not_null(p_80));
                      {
                        w_80 = t;
                        if(((v_80 != NULL) && (v_80 != w_80)))
                          _fail(w_80);
                        else
                          v_80 = w_80;
                      }
                      t = not_null(v_80);
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
  ATerm g_81 = NULL;
  g_81 = t;
  f_81 :
  if(((ATermList) g_81 == ATempty))
    {
      {
        ATerm i_81 = NULL,k_81 = NULL;
        ATerm i_15;
        i_15 = t;
        {
          ATerm j_81 = NULL;
          t = SSLgetAnnotations(not_null(g_81));
          {
            j_81 = t;
            if(((i_81 != NULL) && (i_81 != j_81)))
              _fail(j_81);
            else
              i_81 = j_81;
          }
        }
        t = i_15;
        {
          ATerm l_81 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_81));
          {
            l_81 = t;
            if(((k_81 != NULL) && (k_81 != l_81)))
              _fail(l_81);
            else
              k_81 = l_81;
          }
          t = not_null(k_81);
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
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
  s_81 = t;
  r_81 :
  if(match_cons(s_81, sym__2))
    {
      t_81 = ATgetArgument(s_81, 0);
      u_81 = ATgetArgument(s_81, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(t_81), not_null(u_81));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm m_15;
  m_15 = t;
  {
    ATerm b_4 (ATerm t)
    {
      t = term_n_15;
      t = s_65(t);
      return(t);
    }
    t = try_1(t, b_4);
  }
  t = m_15;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm c_82 = NULL;
      ATerm r_15;
      r_15 = t;
      {
        ATerm a_82 = NULL;
        ATerm b_82 = NULL;
        b_82 = t;
        if(((a_82 != NULL) && (a_82 != b_82)))
          _fail(b_82);
        else
          a_82 = b_82;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_13, not_null(a_82));
          t = set_config_0(t);
        }
      }
      t = r_15;
      {
        ATerm d_82 = NULL;
        d_82 = t;
        if(((c_82 != NULL) && (c_82 != d_82)))
          _fail(d_82);
        else
          c_82 = d_82;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_82));
      }
      return(t);
    }
    ATerm d_4 (ATerm t)
    {
      ATerm u_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              {
                t = s_65(t);
                t = Cons_2(t, _id, d_4);
              }
            }
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_4, d_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
  ATerm y_15;
  y_15 = t;
  {
    ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
    m_82 = t;
    i_82 :
    if(match_cons(m_82, sym__3))
      {
        n_82 = ATgetArgument(m_82, 0);
        o_82 = ATgetArgument(m_82, 1);
        p_82 = ATgetArgument(m_82, 2);
        {
          if(((j_82 != NULL) && (j_82 != n_82)))
            _fail(n_82);
          else
            j_82 = n_82;
          {
            if(((k_82 != NULL) && (k_82 != o_82)))
              _fail(o_82);
            else
              k_82 = o_82;
            {
              if(((l_82 != NULL) && (l_82 != p_82)))
                _fail(p_82);
              else
                l_82 = p_82;
              t = SSL_table_put(not_null(j_82), not_null(k_82), not_null(l_82));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm s_82 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    t = term_a_16;
    t = table_put_0(t);
  }
  t = z_15;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_65(t);
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_4);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_16;
            f_16 = t;
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_15;
                  t = get_config_0(t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_16;
            {
              t = system_usage_0(t);
              {
                t = term_l_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm g_4 (ATerm t)
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm t_82 = NULL;
                  t_82 = t;
                  if(((s_82 != NULL) && (s_82 != t_82)))
                    _fail(t_82);
                  else
                    s_82 = t_82;
                  return(t);
                }
                t = Undefined_1(t, h_4);
                return(t);
              }
              t = option_defined_1(t, g_4);
              {
                ATerm i_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_82)), term_i_16);
                  return(t);
                }
                t = say_1(t, i_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_4);
      {
        ATerm n_16;
        n_16 = t;
        {
          t = term_b_14;
          t = table_destroy_0(t);
        }
        t = n_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm))
{
  t = parse_options_1(t, m_68);
  {
    t = store_options_0(t);
    {
      t = o_68(t);
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_68);
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            {
              ATerm t_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_68(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = t_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_69(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_69);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_4, f_69, g_69, k_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm z_68 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm a_17;
      a_17 = t;
      {
        ATerm w_82 = NULL;
        ATerm x_82 = NULL;
        t = term_g_13;
        {
          t = get_config_0(t);
          {
            x_82 = t;
            if(((w_82 != NULL) && (w_82 != x_82)))
              _fail(x_82);
            else
              w_82 = x_82;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATempty, not_null(w_82)));
          t = printnl_0(t);
        }
      }
      t = a_17;
      return(t);
    }
    t = if_verbose2_1(t, m_4);
    return(t);
  }
  t = iowrap_4(t, x_68, y_68, z_68, l_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_68 (ATerm), ATerm w_68 (ATerm))
{
  t = iowrap_3(t, v_68, w_68, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = _2(t, _id, s_68);
    return(t);
  }
  t = iowrap_2(t, n_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
