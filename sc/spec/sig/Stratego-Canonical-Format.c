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
Symbol sym_MatchOp_2;
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
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
  init_constant_terms();
}
ATerm term_r_16;
ATerm term_d_16;
ATerm term_q_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
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
ATerm term_u_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_h_6;
ATerm term_j_5;
ATerm term_y_4;
void init_constant_terms (void)
{
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_stdin_0);
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
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_b_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
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
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_b_12);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, (ATerm) ATempty);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm z_61 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm c_62 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm d_62 (ATerm), ATerm e_62 (ATerm));
ATerm Alt_3 (ATerm, ATerm w_61 (ATerm), ATerm x_61 (ATerm), ATerm y_61 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm n_62 (ATerm));
ATerm Case_4 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm s_61 (ATerm));
ATerm Let_2 (ATerm, ATerm b_53 (ATerm), ATerm c_53 (ATerm));
ATerm Prim_2 (ATerm, ATerm p_51 (ATerm), ATerm q_51 (ATerm));
ATerm Where_1 (ATerm, ATerm z_51 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm Build_1 (ATerm, ATerm u_51 (ATerm));
ATerm Op_2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm As_2 (ATerm, ATerm s_55 (ATerm), ATerm t_55 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm u_55 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm t_51 (ATerm));
ATerm Thread_1 (ATerm, ATerm h_52 (ATerm));
ATerm All_1 (ATerm, ATerm g_52 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm e_52 (ATerm));
ATerm Cong_2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_52 (ATerm), ATerm a_53 (ATerm));
ATerm SVar_1 (ATerm, ATerm y_52 (ATerm));
ATerm Call_2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm v_52 (ATerm), ATerm w_52 (ATerm));
ATerm GChoice_2 (ATerm, ATerm t_52 (ATerm), ATerm u_52 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm q_52 (ATerm), ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm LChoice_2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm Choice_2 (ATerm, ATerm m_52 (ATerm), ATerm n_52 (ATerm));
ATerm Seq_2 (ATerm, ATerm k_52 (ATerm), ATerm l_52 (ATerm));
ATerm Test_1 (ATerm, ATerm i_52 (ATerm));
ATerm Not_1 (ATerm, ATerm j_52 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm g_53 (ATerm), ATerm h_53 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_53 (ATerm), ATerm e_53 (ATerm), ATerm f_53 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm k_70 (ATerm));
ATerm Strategies_1 (ATerm, ATerm h_54 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_54 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm c_50 (ATerm), ATerm d_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_70 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_81 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_84 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm));
ATerm crush_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_82 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_86 (ATerm));
ATerm map_1 (ATerm, ATerm i_70 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_86 (ATerm));
ATerm Program_1 (ATerm, ATerm h_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_81 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_70 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_51 (ATerm), ATerm m_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm a_83 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_82 (ATerm));
ATerm main_0 (ATerm);
ATerm Continue_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  z_10 :
  if(match_cons(a_11, sym_Continue_1))
    {
      b_11 = ATgetArgument(a_11, 0);
      {
        ATerm c_13 = NULL,e_13 = NULL;
        ATerm d_13 = NULL;
        t = SSLgetAnnotations(not_null(a_11));
        {
          d_13 = t;
          if(((c_13 != NULL) && (c_13 != d_13)))
            _fail(d_13);
          else
            c_13 = d_13;
        }
        {
          t = not_null(b_11);
          {
            ATerm r_13 = NULL;
            t = z_61(t);
            {
              e_13 = t;
              {
                ATerm v_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(e_13)), not_null(c_13));
                {
                  v_13 = t;
                  if(((r_13 != NULL) && (r_13 != v_13)))
                    _fail(v_13);
                  else
                    r_13 = v_13;
                }
                t = not_null(r_13);
              }
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
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_Var_1))
    {
      k_14 = ATgetArgument(j_14, 0);
      {
        ATerm g_4 = t;
        int h_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_14 = NULL,p_14 = NULL;
            ATerm o_14 = NULL;
            t = SSLgetAnnotations(not_null(j_14));
            {
              o_14 = t;
              if(((n_14 != NULL) && (n_14 != o_14)))
                _fail(o_14);
              else
                n_14 = o_14;
            }
            {
              t = not_null(k_14);
              {
                ATerm r_14 = NULL;
                t = s_0(t);
                {
                  p_14 = t;
                  {
                    ATerm s_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_14)), not_null(n_14));
                    {
                      s_14 = t;
                      if(((r_14 != NULL) && (r_14 != s_14)))
                        _fail(s_14);
                      else
                        r_14 = s_14;
                    }
                    t = not_null(r_14);
                  }
                }
              }
            }
            LocalPopChoice(h_4);
          }
        else
          {
            t = g_4;
            {
              ATerm v_14 = NULL,x_14 = NULL;
              ATerm w_14 = NULL;
              t = SSLgetAnnotations(not_null(j_14));
              {
                w_14 = t;
                if(((v_14 != NULL) && (v_14 != w_14)))
                  _fail(w_14);
                else
                  v_14 = w_14;
              }
              {
                t = not_null(k_14);
                {
                  ATerm z_14 = NULL;
                  t = s_0(t);
                  {
                    x_14 = t;
                    {
                      ATerm a_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_14)), not_null(v_14));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm c_62 (ATerm))
{
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_Assign_1))
    {
      p_15 = ATgetArgument(o_15, 0);
      {
        ATerm s_15 = NULL,u_15 = NULL;
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(o_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
        {
          t = not_null(p_15);
          {
            ATerm w_15 = NULL;
            t = c_62(t);
            {
              u_15 = t;
              {
                ATerm x_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(u_15)), not_null(s_15));
                {
                  x_15 = t;
                  if(((w_15 != NULL) && (w_15 != x_15)))
                    _fail(x_15);
                  else
                    w_15 = x_15;
                }
                t = not_null(w_15);
              }
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
  ATerm i_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(j_4);
    }
  else
    {
      t = i_4;
      {
        ATerm k_4 = t;
        int l_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(l_4);
          }
        else
          {
            t = k_4;
            {
              ATerm m_4 = t;
              int n_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(n_4);
                }
              else
                {
                  t = m_4;
                  {
                    ATerm o_4 = t;
                    int p_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(p_4);
                      }
                    else
                      {
                        t = o_4;
                        {
                          ATerm q_4 = t;
                          int r_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
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
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(x_4);
                                              }
                                            else
                                              {
                                                t = w_4;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = term_y_4;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, f_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Assign_2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 = NULL,w_16 = NULL;
            ATerm v_16 = NULL;
            t = SSLgetAnnotations(not_null(o_16));
            {
              v_16 = t;
              if(((u_16 != NULL) && (u_16 != v_16)))
                _fail(v_16);
              else
                u_16 = v_16;
            }
            {
              t = not_null(p_16);
              {
                ATerm y_16 = NULL;
                t = q_0(t);
                {
                  w_16 = t;
                  {
                    t = not_null(q_16);
                    {
                      ATerm a_17 = NULL;
                      t = r_0(t);
                      {
                        y_16 = t;
                        {
                          ATerm b_17 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(w_16), not_null(y_16)), not_null(u_16));
                          {
                            b_17 = t;
                            if(((a_17 != NULL) && (a_17 != b_17)))
                              _fail(b_17);
                            else
                              a_17 = b_17;
                          }
                          t = not_null(a_17);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            {
              ATerm f_17 = NULL,h_17 = NULL;
              ATerm g_17 = NULL;
              t = SSLgetAnnotations(not_null(o_16));
              {
                g_17 = t;
                if(((f_17 != NULL) && (f_17 != g_17)))
                  _fail(g_17);
                else
                  f_17 = g_17;
              }
              {
                t = not_null(p_16);
                {
                  ATerm j_17 = NULL;
                  t = q_0(t);
                  {
                    h_17 = t;
                    {
                      t = not_null(q_16);
                      {
                        ATerm l_17 = NULL;
                        t = r_0(t);
                        {
                          j_17 = t;
                          {
                            ATerm m_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(h_17), not_null(j_17)), not_null(f_17));
                            {
                              m_17 = t;
                              if(((l_17 != NULL) && (l_17 != m_17)))
                                _fail(m_17);
                              else
                                l_17 = m_17;
                            }
                            t = not_null(l_17);
                          }
                        }
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
ATerm Fun_2 (ATerm t, ATerm d_62 (ATerm), ATerm e_62 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_Fun_2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm j_18 = NULL,l_18 = NULL;
        ATerm k_18 = NULL;
        t = SSLgetAnnotations(not_null(d_18));
        {
          k_18 = t;
          if(((j_18 != NULL) && (j_18 != k_18)))
            _fail(k_18);
          else
            j_18 = k_18;
        }
        {
          t = not_null(e_18);
          {
            ATerm n_18 = NULL;
            t = d_62(t);
            {
              l_18 = t;
              {
                t = not_null(f_18);
                {
                  ATerm p_18 = NULL;
                  t = e_62(t);
                  {
                    n_18 = t;
                    {
                      ATerm q_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(l_18), not_null(n_18)), not_null(j_18));
                      {
                        q_18 = t;
                        if(((p_18 != NULL) && (p_18 != q_18)))
                          _fail(q_18);
                        else
                          p_18 = q_18;
                      }
                      t = not_null(p_18);
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
ATerm Alt_3 (ATerm t, ATerm w_61 (ATerm), ATerm x_61 (ATerm), ATerm y_61 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_Alt_3))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      g_19 = ATgetArgument(d_19, 2);
      {
        ATerm l_19 = NULL,n_19 = NULL;
        ATerm m_19 = NULL;
        t = SSLgetAnnotations(not_null(d_19));
        {
          m_19 = t;
          if(((l_19 != NULL) && (l_19 != m_19)))
            _fail(m_19);
          else
            l_19 = m_19;
        }
        {
          t = not_null(e_19);
          {
            ATerm p_19 = NULL;
            t = w_61(t);
            {
              n_19 = t;
              {
                t = not_null(f_19);
                {
                  ATerm r_19 = NULL;
                  t = x_61(t);
                  {
                    p_19 = t;
                    {
                      t = not_null(g_19);
                      {
                        ATerm t_19 = NULL;
                        t = y_61(t);
                        {
                          r_19 = t;
                          {
                            ATerm u_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(n_19), not_null(p_19), not_null(r_19)), not_null(l_19));
                            {
                              u_19 = t;
                              if(((t_19 != NULL) && (t_19 != u_19)))
                                _fail(u_19);
                              else
                                t_19 = u_19;
                            }
                            t = not_null(t_19);
                          }
                        }
                      }
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
ATerm case_alternative_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm b_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm d_5 = t;
        int e_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
            LocalPopChoice(e_5);
          }
        else
          {
            t = d_5;
            {
              ATerm f_5 = t;
              int g_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Str_1(t, is_string_0);
                  LocalPopChoice(g_5);
                }
              else
                {
                  t = f_5;
                  {
                    ATerm h_5 = t;
                    int i_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        LocalPopChoice(i_5);
                      }
                    else
                      {
                        t = h_5;
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
      t = Alt_3(t, h_0, t_0, n_62);
      LocalPopChoice(c_5);
    }
  else
    {
      t = b_5;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_j_5;
          return(t);
        }
        t = debug_1(t, v_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm s_61 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_Case_4))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      m_20 = ATgetArgument(j_20, 2);
      n_20 = ATgetArgument(j_20, 3);
      {
        ATerm t_20 = NULL,v_20 = NULL;
        ATerm u_20 = NULL;
        t = SSLgetAnnotations(not_null(j_20));
        {
          u_20 = t;
          if(((t_20 != NULL) && (t_20 != u_20)))
            _fail(u_20);
          else
            t_20 = u_20;
        }
        {
          t = not_null(k_20);
          {
            ATerm x_20 = NULL;
            t = p_61(t);
            {
              v_20 = t;
              {
                t = not_null(l_20);
                {
                  ATerm z_20 = NULL;
                  t = q_61(t);
                  {
                    x_20 = t;
                    {
                      t = not_null(m_20);
                      {
                        ATerm b_21 = NULL;
                        t = r_61(t);
                        {
                          z_20 = t;
                          {
                            t = not_null(n_20);
                            {
                              ATerm d_21 = NULL;
                              t = s_61(t);
                              {
                                b_21 = t;
                                {
                                  ATerm e_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(v_20), not_null(x_20), not_null(z_20), not_null(b_21)), not_null(t_20));
                                  {
                                    e_21 = t;
                                    if(((d_21 != NULL) && (d_21 != e_21)))
                                      _fail(e_21);
                                    else
                                      d_21 = e_21;
                                  }
                                  t = not_null(d_21);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm b_53 (ATerm), ATerm c_53 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_Let_2))
    {
      t_21 = ATgetArgument(s_21, 0);
      u_21 = ATgetArgument(s_21, 1);
      {
        ATerm y_21 = NULL,a_22 = NULL;
        ATerm z_21 = NULL;
        t = SSLgetAnnotations(not_null(s_21));
        {
          z_21 = t;
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
        }
        {
          t = not_null(t_21);
          {
            ATerm c_22 = NULL;
            t = b_53(t);
            {
              a_22 = t;
              {
                t = not_null(u_21);
                {
                  ATerm e_22 = NULL;
                  t = c_53(t);
                  {
                    c_22 = t;
                    {
                      ATerm f_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(a_22), not_null(c_22)), not_null(y_21));
                      {
                        f_22 = t;
                        if(((e_22 != NULL) && (e_22 != f_22)))
                          _fail(f_22);
                        else
                          e_22 = f_22;
                      }
                      t = not_null(e_22);
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
ATerm Prim_2 (ATerm t, ATerm p_51 (ATerm), ATerm q_51 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_Prim_2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        ATerm c_23 = NULL,e_23 = NULL;
        ATerm d_23 = NULL;
        t = SSLgetAnnotations(not_null(r_22));
        {
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
        }
        {
          t = not_null(s_22);
          {
            ATerm g_23 = NULL;
            t = p_51(t);
            {
              e_23 = t;
              {
                t = not_null(t_22);
                {
                  ATerm i_23 = NULL;
                  t = q_51(t);
                  {
                    g_23 = t;
                    {
                      ATerm j_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(e_23), not_null(g_23)), not_null(c_23));
                      {
                        j_23 = t;
                        if(((i_23 != NULL) && (i_23 != j_23)))
                          _fail(j_23);
                        else
                          i_23 = j_23;
                      }
                      t = not_null(i_23);
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
ATerm Where_1 (ATerm t, ATerm z_51 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_Where_1))
    {
      y_23 = ATgetArgument(x_23, 0);
      {
        ATerm b_24 = NULL,d_24 = NULL;
        ATerm c_24 = NULL;
        t = SSLgetAnnotations(not_null(x_23));
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
        {
          t = not_null(y_23);
          {
            ATerm f_24 = NULL;
            t = z_51(t);
            {
              d_24 = t;
              {
                ATerm g_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(d_24)), not_null(b_24));
                {
                  g_24 = t;
                  if(((f_24 != NULL) && (f_24 != g_24)))
                    _fail(g_24);
                  else
                    f_24 = g_24;
                }
                t = not_null(f_24);
              }
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
ATerm Scope_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Scope_2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm x_24 = NULL,z_24 = NULL;
        ATerm y_24 = NULL;
        t = SSLgetAnnotations(not_null(r_24));
        {
          y_24 = t;
          if(((x_24 != NULL) && (x_24 != y_24)))
            _fail(y_24);
          else
            x_24 = y_24;
        }
        {
          t = not_null(s_24);
          {
            ATerm b_25 = NULL;
            t = x_51(t);
            {
              z_24 = t;
              {
                t = not_null(t_24);
                {
                  ATerm d_25 = NULL;
                  t = y_51(t);
                  {
                    b_25 = t;
                    {
                      ATerm e_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_24), not_null(b_25)), not_null(x_24));
                      {
                        e_25 = t;
                        if(((d_25 != NULL) && (d_25 != e_25)))
                          _fail(e_25);
                        else
                          d_25 = e_25;
                      }
                      t = not_null(d_25);
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
ATerm Build_1 (ATerm t, ATerm u_51 (ATerm))
{
  ATerm p_25 = NULL,q_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_Build_1))
    {
      q_25 = ATgetArgument(p_25, 0);
      {
        ATerm t_25 = NULL,v_25 = NULL;
        ATerm u_25 = NULL;
        t = SSLgetAnnotations(not_null(p_25));
        {
          u_25 = t;
          if(((t_25 != NULL) && (t_25 != u_25)))
            _fail(u_25);
          else
            t_25 = u_25;
        }
        {
          t = not_null(q_25);
          {
            ATerm x_25 = NULL;
            t = u_51(t);
            {
              v_25 = t;
              {
                ATerm y_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(v_25)), not_null(t_25));
                {
                  y_25 = t;
                  if(((x_25 != NULL) && (x_25 != y_25)))
                    _fail(y_25);
                  else
                    x_25 = y_25;
                }
                t = not_null(x_25);
              }
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
ATerm Op_2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Op_2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        ATerm p_26 = NULL,r_26 = NULL;
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(j_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
        {
          t = not_null(k_26);
          {
            ATerm t_26 = NULL;
            t = t_53(t);
            {
              r_26 = t;
              {
                t = not_null(l_26);
                {
                  ATerm v_26 = NULL;
                  t = u_53(t);
                  {
                    t_26 = t;
                    {
                      ATerm w_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(r_26), not_null(t_26)), not_null(p_26));
                      {
                        w_26 = t;
                        if(((v_26 != NULL) && (v_26 != w_26)))
                          _fail(w_26);
                        else
                          v_26 = w_26;
                      }
                      t = not_null(v_26);
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
ATerm As_2 (ATerm t, ATerm s_55 (ATerm), ATerm t_55 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_As_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      {
        ATerm o_27 = NULL,q_27 = NULL;
        ATerm p_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
        {
          t = not_null(j_27);
          {
            ATerm s_27 = NULL;
            t = s_55(t);
            {
              q_27 = t;
              {
                t = not_null(k_27);
                {
                  ATerm u_27 = NULL;
                  t = t_55(t);
                  {
                    s_27 = t;
                    {
                      ATerm v_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(q_27), not_null(s_27)), not_null(o_27));
                      {
                        v_27 = t;
                        if(((u_27 != NULL) && (u_27 != v_27)))
                          _fail(v_27);
                        else
                          u_27 = v_27;
                      }
                      t = not_null(u_27);
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
ATerm BuildDefault_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_BuildDefault_1))
    {
      i_28 = ATgetArgument(h_28, 0);
      {
        ATerm l_28 = NULL,n_28 = NULL;
        ATerm m_28 = NULL;
        t = SSLgetAnnotations(not_null(h_28));
        {
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
        }
        {
          t = not_null(i_28);
          {
            ATerm p_28 = NULL;
            t = u_55(t);
            {
              n_28 = t;
              {
                ATerm q_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(n_28)), not_null(l_28));
                {
                  q_28 = t;
                  if(((p_28 != NULL) && (p_28 != q_28)))
                    _fail(q_28);
                  else
                    p_28 = q_28;
                }
                t = not_null(p_28);
              }
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
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Str_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        ATerm k_5 = t;
        int l_5 = stack_ptr;
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
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(m_29)), not_null(k_29));
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
            LocalPopChoice(l_5);
          }
        else
          {
            t = k_5;
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
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(u_29)), not_null(s_29));
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
ATerm is_real_0 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  t = SSL_is_real(not_null(h_30));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_Real_1))
    {
      u_30 = ATgetArgument(t_30, 0);
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_30 = NULL,z_30 = NULL;
            ATerm y_30 = NULL;
            t = SSLgetAnnotations(not_null(t_30));
            {
              y_30 = t;
              if(((x_30 != NULL) && (x_30 != y_30)))
                _fail(y_30);
              else
                x_30 = y_30;
            }
            {
              t = not_null(u_30);
              {
                ATerm b_31 = NULL;
                t = o_0(t);
                {
                  z_30 = t;
                  {
                    ATerm c_31 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(z_30)), not_null(x_30));
                    {
                      c_31 = t;
                      if(((b_31 != NULL) && (b_31 != c_31)))
                        _fail(c_31);
                      else
                        b_31 = c_31;
                    }
                    t = not_null(b_31);
                  }
                }
              }
            }
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm f_31 = NULL,h_31 = NULL;
              ATerm g_31 = NULL;
              t = SSLgetAnnotations(not_null(t_30));
              {
                g_31 = t;
                if(((f_31 != NULL) && (f_31 != g_31)))
                  _fail(g_31);
                else
                  f_31 = g_31;
              }
              {
                t = not_null(u_30);
                {
                  ATerm j_31 = NULL;
                  t = o_0(t);
                  {
                    h_31 = t;
                    {
                      ATerm k_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(h_31)), not_null(f_31));
                      {
                        k_31 = t;
                        if(((j_31 != NULL) && (j_31 != k_31)))
                          _fail(k_31);
                        else
                          j_31 = k_31;
                      }
                      t = not_null(j_31);
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm c_32 = NULL,d_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_Int_1))
    {
      d_32 = ATgetArgument(c_32, 0);
      {
        ATerm o_5 = t;
        int p_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_32 = NULL,i_32 = NULL;
            ATerm h_32 = NULL;
            t = SSLgetAnnotations(not_null(c_32));
            {
              h_32 = t;
              if(((g_32 != NULL) && (g_32 != h_32)))
                _fail(h_32);
              else
                g_32 = h_32;
            }
            {
              t = not_null(d_32);
              {
                ATerm k_32 = NULL;
                t = n_0(t);
                {
                  i_32 = t;
                  {
                    ATerm l_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(i_32)), not_null(g_32));
                    {
                      l_32 = t;
                      if(((k_32 != NULL) && (k_32 != l_32)))
                        _fail(l_32);
                      else
                        k_32 = l_32;
                    }
                    t = not_null(k_32);
                  }
                }
              }
            }
            LocalPopChoice(p_5);
          }
        else
          {
            t = o_5;
            {
              ATerm o_32 = NULL,q_32 = NULL;
              ATerm p_32 = NULL;
              t = SSLgetAnnotations(not_null(c_32));
              {
                p_32 = t;
                if(((o_32 != NULL) && (o_32 != p_32)))
                  _fail(p_32);
                else
                  o_32 = p_32;
              }
              {
                t = not_null(d_32);
                {
                  ATerm s_32 = NULL;
                  t = n_0(t);
                  {
                    q_32 = t;
                    {
                      ATerm t_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_32)), not_null(o_32));
                      {
                        t_32 = t;
                        if(((s_32 != NULL) && (s_32 != t_32)))
                          _fail(t_32);
                        else
                          s_32 = t_32;
                      }
                      t = not_null(s_32);
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
  ATerm g_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym_Wld_0))
    {
      ATerm i_33 = NULL,k_33 = NULL;
      ATerm q_5;
      q_5 = t;
      {
        ATerm j_33 = NULL;
        t = SSLgetAnnotations(not_null(g_33));
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
      }
      t = q_5;
      {
        ATerm l_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(i_33));
        {
          l_33 = t;
          if(((k_33 != NULL) && (k_33 != l_33)))
            _fail(l_33);
          else
            k_33 = l_33;
        }
        t = not_null(k_33);
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
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm v_5 = t;
              int w_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(w_5);
                }
              else
                {
                  t = v_5;
                  {
                    ATerm x_5 = t;
                    int y_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(y_5);
                      }
                    else
                      {
                        t = x_5;
                        {
                          ATerm z_5 = t;
                          int a_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, match_term_exp_0);
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
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, w_0, match_term_exp_0);
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
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, x_0);
                                                LocalPopChoice(g_6);
                                              }
                                            else
                                              {
                                                t = f_6;
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_h_6;
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
ATerm Match_1 (ATerm t, ATerm t_51 (ATerm))
{
  ATerm v_33 = NULL,w_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_cons(v_33, sym_Match_1))
    {
      w_33 = ATgetArgument(v_33, 0);
      {
        ATerm z_33 = NULL,b_34 = NULL;
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(v_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
        {
          t = not_null(w_33);
          {
            ATerm d_34 = NULL;
            t = t_51(t);
            {
              b_34 = t;
              {
                ATerm e_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(b_34)), not_null(z_33));
                {
                  e_34 = t;
                  if(((d_34 != NULL) && (d_34 != e_34)))
                    _fail(e_34);
                  else
                    d_34 = e_34;
                }
                t = not_null(d_34);
              }
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
ATerm Thread_1 (ATerm t, ATerm h_52 (ATerm))
{
  ATerm o_34 = NULL,p_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_Thread_1))
    {
      p_34 = ATgetArgument(o_34, 0);
      {
        ATerm s_34 = NULL,u_34 = NULL;
        ATerm t_34 = NULL;
        t = SSLgetAnnotations(not_null(o_34));
        {
          t_34 = t;
          if(((s_34 != NULL) && (s_34 != t_34)))
            _fail(t_34);
          else
            s_34 = t_34;
        }
        {
          t = not_null(p_34);
          {
            ATerm w_34 = NULL;
            t = h_52(t);
            {
              u_34 = t;
              {
                ATerm a_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(u_34)), not_null(s_34));
                {
                  a_35 = t;
                  if(((w_34 != NULL) && (w_34 != a_35)))
                    _fail(a_35);
                  else
                    w_34 = a_35;
                }
                t = not_null(w_34);
              }
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
ATerm All_1 (ATerm t, ATerm g_52 (ATerm))
{
  ATerm k_35 = NULL,l_35 = NULL;
  k_35 = t;
  j_35 :
  if(match_cons(k_35, sym_All_1))
    {
      l_35 = ATgetArgument(k_35, 0);
      {
        ATerm o_35 = NULL,q_35 = NULL;
        ATerm p_35 = NULL;
        t = SSLgetAnnotations(not_null(k_35));
        {
          p_35 = t;
          if(((o_35 != NULL) && (o_35 != p_35)))
            _fail(p_35);
          else
            o_35 = p_35;
        }
        {
          t = not_null(l_35);
          {
            ATerm s_35 = NULL;
            t = g_52(t);
            {
              q_35 = t;
              {
                ATerm t_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(q_35)), not_null(o_35));
                {
                  t_35 = t;
                  if(((s_35 != NULL) && (s_35 != t_35)))
                    _fail(t_35);
                  else
                    s_35 = t_35;
                }
                t = not_null(s_35);
              }
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm h_36 = NULL,i_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_Some_1))
    {
      i_36 = ATgetArgument(h_36, 0);
      {
        ATerm i_6 = t;
        int j_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_36 = NULL,n_36 = NULL;
            ATerm m_36 = NULL;
            t = SSLgetAnnotations(not_null(h_36));
            {
              m_36 = t;
              if(((l_36 != NULL) && (l_36 != m_36)))
                _fail(m_36);
              else
                l_36 = m_36;
            }
            {
              t = not_null(i_36);
              {
                ATerm p_36 = NULL;
                t = m_0(t);
                {
                  n_36 = t;
                  {
                    ATerm r_36 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(n_36)), not_null(l_36));
                    {
                      r_36 = t;
                      if(((p_36 != NULL) && (p_36 != r_36)))
                        _fail(r_36);
                      else
                        p_36 = r_36;
                    }
                    t = not_null(p_36);
                  }
                }
              }
            }
            LocalPopChoice(j_6);
          }
        else
          {
            t = i_6;
            {
              ATerm x_36 = NULL,z_36 = NULL;
              ATerm y_36 = NULL;
              t = SSLgetAnnotations(not_null(h_36));
              {
                y_36 = t;
                if(((x_36 != NULL) && (x_36 != y_36)))
                  _fail(y_36);
                else
                  x_36 = y_36;
              }
              {
                t = not_null(i_36);
                {
                  ATerm b_37 = NULL;
                  t = m_0(t);
                  {
                    z_36 = t;
                    {
                      ATerm c_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(z_36)), not_null(x_36));
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
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1 (ATerm t, ATerm e_52 (ATerm))
{
  ATerm q_37 = NULL,r_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym_One_1))
    {
      r_37 = ATgetArgument(q_37, 0);
      {
        ATerm u_37 = NULL,y_37 = NULL;
        ATerm x_37 = NULL;
        t = SSLgetAnnotations(not_null(q_37));
        {
          x_37 = t;
          if(((u_37 != NULL) && (u_37 != x_37)))
            _fail(x_37);
          else
            u_37 = x_37;
        }
        {
          t = not_null(r_37);
          {
            ATerm a_38 = NULL;
            t = e_52(t);
            {
              y_37 = t;
              {
                ATerm c_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(y_37)), not_null(u_37));
                {
                  c_38 = t;
                  if(((a_38 != NULL) && (a_38 != c_38)))
                    _fail(c_38);
                  else
                    a_38 = c_38;
                }
                t = not_null(a_38);
              }
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
ATerm Cong_2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Cong_2))
    {
      o_38 = ATgetArgument(n_38, 0);
      p_38 = ATgetArgument(n_38, 1);
      {
        ATerm u_38 = NULL,w_38 = NULL;
        ATerm v_38 = NULL;
        t = SSLgetAnnotations(not_null(n_38));
        {
          v_38 = t;
          if(((u_38 != NULL) && (u_38 != v_38)))
            _fail(v_38);
          else
            u_38 = v_38;
        }
        {
          t = not_null(o_38);
          {
            ATerm y_38 = NULL;
            t = c_52(t);
            {
              w_38 = t;
              {
                t = not_null(p_38);
                {
                  ATerm a_39 = NULL;
                  t = d_52(t);
                  {
                    y_38 = t;
                    {
                      ATerm b_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(w_38), not_null(y_38)), not_null(u_38));
                      {
                        b_39 = t;
                        if(((a_39 != NULL) && (a_39 != b_39)))
                          _fail(b_39);
                        else
                          a_39 = b_39;
                      }
                      t = not_null(a_39);
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
  ATerm k_39 = NULL;
  k_39 = t;
  t = SSL_is_int(not_null(k_39));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm a_52 (ATerm), ATerm b_52 (ATerm))
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym_Path_2))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      {
        ATerm f_40 = NULL,h_40 = NULL;
        ATerm g_40 = NULL;
        t = SSLgetAnnotations(not_null(z_39));
        {
          g_40 = t;
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
        }
        {
          t = not_null(a_40);
          {
            ATerm j_40 = NULL;
            t = a_52(t);
            {
              h_40 = t;
              {
                t = not_null(b_40);
                {
                  ATerm l_40 = NULL;
                  t = b_52(t);
                  {
                    j_40 = t;
                    {
                      ATerm m_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(h_40), not_null(j_40)), not_null(f_40));
                      {
                        m_40 = t;
                        if(((l_40 != NULL) && (l_40 != m_40)))
                          _fail(m_40);
                        else
                          l_40 = m_40;
                      }
                      t = not_null(l_40);
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
ATerm Rec_2 (ATerm t, ATerm z_52 (ATerm), ATerm a_53 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_Rec_2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      {
        ATerm e_41 = NULL,g_41 = NULL;
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(y_40));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        {
          t = not_null(z_40);
          {
            ATerm i_41 = NULL;
            t = z_52(t);
            {
              g_41 = t;
              {
                t = not_null(a_41);
                {
                  ATerm k_41 = NULL;
                  t = a_53(t);
                  {
                    i_41 = t;
                    {
                      ATerm l_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(g_41), not_null(i_41)), not_null(e_41));
                      {
                        l_41 = t;
                        if(((k_41 != NULL) && (k_41 != l_41)))
                          _fail(l_41);
                        else
                          k_41 = l_41;
                      }
                      t = not_null(k_41);
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
ATerm SVar_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm d_42 = NULL,e_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_cons(d_42, sym_SVar_1))
    {
      e_42 = ATgetArgument(d_42, 0);
      {
        ATerm j_42 = NULL,l_42 = NULL;
        ATerm k_42 = NULL;
        t = SSLgetAnnotations(not_null(d_42));
        {
          k_42 = t;
          if(((j_42 != NULL) && (j_42 != k_42)))
            _fail(k_42);
          else
            j_42 = k_42;
        }
        {
          t = not_null(e_42);
          {
            ATerm n_42 = NULL;
            t = y_52(t);
            {
              l_42 = t;
              {
                ATerm t_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(l_42)), not_null(j_42));
                {
                  t_42 = t;
                  if(((n_42 != NULL) && (n_42 != t_42)))
                    _fail(t_42);
                  else
                    n_42 = t_42;
                }
                t = not_null(n_42);
              }
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
ATerm Call_2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym_Call_2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      {
        ATerm p_43 = NULL,r_43 = NULL;
        ATerm q_43 = NULL;
        t = SSLgetAnnotations(not_null(e_43));
        {
          q_43 = t;
          if(((p_43 != NULL) && (p_43 != q_43)))
            _fail(q_43);
          else
            p_43 = q_43;
        }
        {
          t = not_null(f_43);
          {
            ATerm t_43 = NULL;
            t = n_53(t);
            {
              r_43 = t;
              {
                t = not_null(g_43);
                {
                  ATerm z_43 = NULL;
                  t = o_53(t);
                  {
                    t_43 = t;
                    {
                      ATerm a_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(r_43), not_null(t_43)), not_null(p_43));
                      {
                        a_44 = t;
                        if(((z_43 != NULL) && (z_43 != a_44)))
                          _fail(a_44);
                        else
                          z_43 = a_44;
                      }
                      t = not_null(z_43);
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
ATerm LGChoice_2 (ATerm t, ATerm v_52 (ATerm), ATerm w_52 (ATerm))
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_LGChoice_2))
    {
      n_44 = ATgetArgument(m_44, 0);
      o_44 = ATgetArgument(m_44, 1);
      {
        ATerm t_44 = NULL,v_44 = NULL;
        ATerm u_44 = NULL;
        t = SSLgetAnnotations(not_null(m_44));
        {
          u_44 = t;
          if(((t_44 != NULL) && (t_44 != u_44)))
            _fail(u_44);
          else
            t_44 = u_44;
        }
        {
          t = not_null(n_44);
          {
            ATerm x_44 = NULL;
            t = v_52(t);
            {
              v_44 = t;
              {
                t = not_null(o_44);
                {
                  ATerm z_44 = NULL;
                  t = w_52(t);
                  {
                    x_44 = t;
                    {
                      ATerm a_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(v_44), not_null(x_44)), not_null(t_44));
                      {
                        a_45 = t;
                        if(((z_44 != NULL) && (z_44 != a_45)))
                          _fail(a_45);
                        else
                          z_44 = a_45;
                      }
                      t = not_null(z_44);
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
ATerm GChoice_2 (ATerm t, ATerm t_52 (ATerm), ATerm u_52 (ATerm))
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  p_45 = t;
  l_45 :
  if(match_cons(p_45, sym_GChoice_2))
    {
      q_45 = ATgetArgument(p_45, 0);
      r_45 = ATgetArgument(p_45, 1);
      {
        ATerm v_45 = NULL,x_45 = NULL;
        ATerm w_45 = NULL;
        t = SSLgetAnnotations(not_null(p_45));
        {
          w_45 = t;
          if(((v_45 != NULL) && (v_45 != w_45)))
            _fail(w_45);
          else
            v_45 = w_45;
        }
        {
          t = not_null(q_45);
          {
            ATerm z_45 = NULL;
            t = t_52(t);
            {
              x_45 = t;
              {
                t = not_null(r_45);
                {
                  ATerm b_46 = NULL;
                  t = u_52(t);
                  {
                    z_45 = t;
                    {
                      ATerm c_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(x_45), not_null(z_45)), not_null(v_45));
                      {
                        c_46 = t;
                        if(((b_46 != NULL) && (b_46 != c_46)))
                          _fail(c_46);
                        else
                          b_46 = c_46;
                      }
                      t = not_null(b_46);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm q_52 (ATerm), ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym_GuardedLChoice_3))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      s_46 = ATgetArgument(p_46, 2);
      {
        ATerm e_47 = NULL,g_47 = NULL;
        ATerm f_47 = NULL;
        t = SSLgetAnnotations(not_null(p_46));
        {
          f_47 = t;
          if(((e_47 != NULL) && (e_47 != f_47)))
            _fail(f_47);
          else
            e_47 = f_47;
        }
        {
          t = not_null(q_46);
          {
            ATerm i_47 = NULL;
            t = q_52(t);
            {
              g_47 = t;
              {
                t = not_null(r_46);
                {
                  ATerm k_47 = NULL;
                  t = r_52(t);
                  {
                    i_47 = t;
                    {
                      t = not_null(s_46);
                      {
                        ATerm m_47 = NULL;
                        t = s_52(t);
                        {
                          k_47 = t;
                          {
                            ATerm n_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(g_47), not_null(i_47), not_null(k_47)), not_null(e_47));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  a_48 = t;
  z_47 :
  if(match_cons(a_48, sym_LChoice_2))
    {
      b_48 = ATgetArgument(a_48, 0);
      c_48 = ATgetArgument(a_48, 1);
      {
        ATerm g_48 = NULL,i_48 = NULL;
        ATerm h_48 = NULL;
        t = SSLgetAnnotations(not_null(a_48));
        {
          h_48 = t;
          if(((g_48 != NULL) && (g_48 != h_48)))
            _fail(h_48);
          else
            g_48 = h_48;
        }
        {
          t = not_null(b_48);
          {
            ATerm k_48 = NULL;
            t = o_52(t);
            {
              i_48 = t;
              {
                t = not_null(c_48);
                {
                  ATerm m_48 = NULL;
                  t = p_52(t);
                  {
                    k_48 = t;
                    {
                      ATerm n_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(i_48), not_null(k_48)), not_null(g_48));
                      {
                        n_48 = t;
                        if(((m_48 != NULL) && (m_48 != n_48)))
                          _fail(n_48);
                        else
                          m_48 = n_48;
                      }
                      t = not_null(m_48);
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
ATerm Choice_2 (ATerm t, ATerm m_52 (ATerm), ATerm n_52 (ATerm))
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  y_48 :
  if(match_cons(z_48, sym_Choice_2))
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
            t = m_52(t);
            {
              h_49 = t;
              {
                t = not_null(b_49);
                {
                  ATerm l_49 = NULL;
                  t = n_52(t);
                  {
                    j_49 = t;
                    {
                      ATerm m_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(h_49), not_null(j_49)), not_null(f_49));
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
ATerm Seq_2 (ATerm t, ATerm k_52 (ATerm), ATerm l_52 (ATerm))
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym_Seq_2))
    {
      z_49 = ATgetArgument(y_49, 0);
      a_50 = ATgetArgument(y_49, 1);
      {
        ATerm g_50 = NULL,i_50 = NULL;
        ATerm h_50 = NULL;
        t = SSLgetAnnotations(not_null(y_49));
        {
          h_50 = t;
          if(((g_50 != NULL) && (g_50 != h_50)))
            _fail(h_50);
          else
            g_50 = h_50;
        }
        {
          t = not_null(z_49);
          {
            ATerm k_50 = NULL;
            t = k_52(t);
            {
              i_50 = t;
              {
                t = not_null(a_50);
                {
                  ATerm m_50 = NULL;
                  t = l_52(t);
                  {
                    k_50 = t;
                    {
                      ATerm n_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(i_50), not_null(k_50)), not_null(g_50));
                      {
                        n_50 = t;
                        if(((m_50 != NULL) && (m_50 != n_50)))
                          _fail(n_50);
                        else
                          m_50 = n_50;
                      }
                      t = not_null(m_50);
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
ATerm Test_1 (ATerm t, ATerm i_52 (ATerm))
{
  ATerm y_50 = NULL,z_50 = NULL;
  y_50 = t;
  x_50 :
  if(match_cons(y_50, sym_Test_1))
    {
      z_50 = ATgetArgument(y_50, 0);
      {
        ATerm c_51 = NULL,e_51 = NULL;
        ATerm d_51 = NULL;
        t = SSLgetAnnotations(not_null(y_50));
        {
          d_51 = t;
          if(((c_51 != NULL) && (c_51 != d_51)))
            _fail(d_51);
          else
            c_51 = d_51;
        }
        {
          t = not_null(z_50);
          {
            ATerm g_51 = NULL;
            t = i_52(t);
            {
              e_51 = t;
              {
                ATerm h_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(e_51)), not_null(c_51));
                {
                  h_51 = t;
                  if(((g_51 != NULL) && (g_51 != h_51)))
                    _fail(h_51);
                  else
                    g_51 = h_51;
                }
                t = not_null(g_51);
              }
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
ATerm Not_1 (ATerm t, ATerm j_52 (ATerm))
{
  ATerm f_52 = NULL,x_52 = NULL;
  f_52 = t;
  w_51 :
  if(match_cons(f_52, sym_Not_1))
    {
      x_52 = ATgetArgument(f_52, 0);
      {
        ATerm k_53 = NULL,m_53 = NULL;
        ATerm l_53 = NULL;
        t = SSLgetAnnotations(not_null(f_52));
        {
          l_53 = t;
          if(((k_53 != NULL) && (k_53 != l_53)))
            _fail(l_53);
          else
            k_53 = l_53;
        }
        {
          t = not_null(x_52);
          {
            ATerm q_53 = NULL;
            t = j_52(t);
            {
              m_53 = t;
              {
                ATerm r_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(m_53)), not_null(k_53));
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
  ATerm c_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym_Fail_0))
    {
      ATerm e_54 = NULL,g_54 = NULL;
      ATerm k_6;
      k_6 = t;
      {
        ATerm f_54 = NULL;
        t = SSLgetAnnotations(not_null(c_54));
        {
          f_54 = t;
          if(((e_54 != NULL) && (e_54 != f_54)))
            _fail(f_54);
          else
            e_54 = f_54;
        }
      }
      t = k_6;
      {
        ATerm i_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(e_54));
        {
          i_54 = t;
          if(((g_54 != NULL) && (g_54 != i_54)))
            _fail(i_54);
          else
            g_54 = i_54;
        }
        t = not_null(g_54);
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
  ATerm r_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Id_0))
    {
      ATerm t_54 = NULL,v_54 = NULL;
      ATerm l_6;
      l_6 = t;
      {
        ATerm u_54 = NULL;
        t = SSLgetAnnotations(not_null(r_54));
        {
          u_54 = t;
          if(((t_54 != NULL) && (t_54 != u_54)))
            _fail(u_54);
          else
            t_54 = u_54;
        }
      }
      t = l_6;
      {
        ATerm w_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(t_54));
        {
          w_54 = t;
          if(((v_54 != NULL) && (v_54 != w_54)))
            _fail(w_54);
          else
            v_54 = w_54;
        }
        t = not_null(v_54);
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
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            {
              ATerm q_6 = t;
              int r_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(r_6);
                }
              else
                {
                  t = q_6;
                  {
                    ATerm s_6 = t;
                    int t_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(t_6);
                      }
                    else
                      {
                        t = s_6;
                        {
                          ATerm u_6 = t;
                          int v_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm d_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, d_1);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, match_term_exp_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
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
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, e_1, strategy_expression_0);
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
                                                                                                                                    t = Where_1(t, strategy_expression_0);
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
                                                                                                                                          ATerm f_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, f_1);
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
                                                                                                                                                            ATerm n_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, n_1, term_expression_0);
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
                                                                                                                                                                  ATerm o_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, o_1);
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
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        LocalPopChoice(p_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = o_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm p_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_q_8;
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
ATerm VarDec_2 (ATerm t, ATerm g_53 (ATerm), ATerm h_53 (ATerm))
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_cons(h_55, sym_VarDec_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      j_55 = ATgetArgument(h_55, 1);
      {
        ATerm n_55 = NULL,p_55 = NULL;
        ATerm o_55 = NULL;
        t = SSLgetAnnotations(not_null(h_55));
        {
          o_55 = t;
          if(((n_55 != NULL) && (n_55 != o_55)))
            _fail(o_55);
          else
            n_55 = o_55;
        }
        {
          t = not_null(i_55);
          {
            ATerm r_55 = NULL;
            t = g_53(t);
            {
              p_55 = t;
              {
                t = not_null(j_55);
                {
                  ATerm w_55 = NULL;
                  t = h_53(t);
                  {
                    r_55 = t;
                    {
                      ATerm x_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(p_55), not_null(r_55)), not_null(n_55));
                      {
                        x_55 = t;
                        if(((w_55 != NULL) && (w_55 != x_55)))
                          _fail(x_55);
                        else
                          w_55 = x_55;
                      }
                      t = not_null(w_55);
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
ATerm SDef_3 (ATerm t, ATerm d_53 (ATerm), ATerm e_53 (ATerm), ATerm f_53 (ATerm))
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  k_56 = t;
  j_56 :
  if(match_cons(k_56, sym_SDef_3))
    {
      l_56 = ATgetArgument(k_56, 0);
      m_56 = ATgetArgument(k_56, 1);
      n_56 = ATgetArgument(k_56, 2);
      {
        ATerm s_56 = NULL,u_56 = NULL;
        ATerm t_56 = NULL;
        t = SSLgetAnnotations(not_null(k_56));
        {
          t_56 = t;
          if(((s_56 != NULL) && (s_56 != t_56)))
            _fail(t_56);
          else
            s_56 = t_56;
        }
        {
          t = not_null(l_56);
          {
            ATerm w_56 = NULL;
            t = d_53(t);
            {
              u_56 = t;
              {
                t = not_null(m_56);
                {
                  ATerm y_56 = NULL;
                  t = e_53(t);
                  {
                    w_56 = t;
                    {
                      t = not_null(n_56);
                      {
                        ATerm a_57 = NULL;
                        t = f_53(t);
                        {
                          y_56 = t;
                          {
                            ATerm b_57 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_56), not_null(w_56), not_null(y_56)), not_null(s_56));
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
              }
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
  ATerm r_8 = t;
  int s_8 = stack_ptr;
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
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_t_8;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm i_57 (ATerm t)
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = Cons_2(t, k_70, i_57);
      }
    return(t);
  }
  t = i_57(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_54 (ATerm))
{
  ATerm o_57 = NULL,p_57 = NULL;
  o_57 = t;
  n_57 :
  if(match_cons(o_57, sym_Strategies_1))
    {
      p_57 = ATgetArgument(o_57, 0);
      {
        ATerm s_57 = NULL,u_57 = NULL;
        ATerm t_57 = NULL;
        t = SSLgetAnnotations(not_null(o_57));
        {
          t_57 = t;
          if(((s_57 != NULL) && (s_57 != t_57)))
            _fail(t_57);
          else
            s_57 = t_57;
        }
        {
          t = not_null(p_57);
          {
            ATerm w_57 = NULL;
            t = h_54(t);
            {
              u_57 = t;
              {
                ATerm x_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(u_57)), not_null(s_57));
                {
                  x_57 = t;
                  if(((w_57 != NULL) && (w_57 != x_57)))
                    _fail(x_57);
                  else
                    w_57 = x_57;
                }
                t = not_null(w_57);
              }
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
ATerm Specification_1 (ATerm t, ATerm j_54 (ATerm))
{
  ATerm h_58 = NULL,i_58 = NULL;
  h_58 = t;
  g_58 :
  if(match_cons(h_58, sym_Specification_1))
    {
      i_58 = ATgetArgument(h_58, 0);
      {
        ATerm l_58 = NULL,n_58 = NULL;
        ATerm m_58 = NULL;
        t = SSLgetAnnotations(not_null(h_58));
        {
          m_58 = t;
          if(((l_58 != NULL) && (l_58 != m_58)))
            _fail(m_58);
          else
            l_58 = m_58;
        }
        {
          t = not_null(i_58);
          {
            ATerm p_58 = NULL;
            t = j_54(t);
            {
              n_58 = t;
              {
                ATerm q_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(n_58)), not_null(l_58));
                {
                  q_58 = t;
                  if(((p_58 != NULL) && (p_58 != q_58)))
                    _fail(q_58);
                  else
                    p_58 = q_58;
                }
                t = not_null(p_58);
              }
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
  ATerm w_8 = t;
  int x_8 = stack_ptr;
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
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_y_8;
          return(t);
        }
        t = debug_1(t, x_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_50 (ATerm), ATerm d_50 (ATerm))
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  a_59 :
  if(match_cons(b_59, sym__2))
    {
      c_59 = ATgetArgument(b_59, 0);
      d_59 = ATgetArgument(b_59, 1);
      {
        ATerm h_59 = NULL,j_59 = NULL;
        ATerm i_59 = NULL;
        t = SSLgetAnnotations(not_null(b_59));
        {
          i_59 = t;
          if(((h_59 != NULL) && (h_59 != i_59)))
            _fail(i_59);
          else
            h_59 = i_59;
        }
        {
          t = not_null(c_59);
          {
            ATerm l_59 = NULL;
            t = c_50(t);
            {
              j_59 = t;
              {
                t = not_null(d_59);
                {
                  ATerm n_59 = NULL;
                  t = d_50(t);
                  {
                    l_59 = t;
                    {
                      ATerm o_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_59), not_null(l_59)), not_null(h_59));
                      {
                        o_59 = t;
                        if(((n_59 != NULL) && (n_59 != o_59)))
                          _fail(o_59);
                        else
                          n_59 = o_59;
                      }
                      t = not_null(n_59);
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
  ATerm w_59 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm x_59 = NULL,y_59 = NULL;
      x_59 = t;
      v_59 :
      if(match_cons(x_59, sym_Program_1))
        {
          y_59 = ATgetArgument(x_59, 0);
          if(((w_59 != NULL) && (w_59 != y_59)))
            _fail(y_59);
          else
            w_59 = y_59;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), not_null(w_59)), term_b_9));
      {
        t = printnl_0(t);
        {
          t = term_d_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  c_60 = t;
  b_60 :
  if(match_cons(c_60, sym__2))
    {
      d_60 = ATgetArgument(c_60, 0);
      e_60 = ATgetArgument(c_60, 1);
      {
        ATerm e_9;
        e_9 = t;
        t = SSL_printnl(not_null(d_60), not_null(e_60));
        t = e_9;
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
  ATerm j_60 = NULL;
  j_60 = t;
  t = SSL_implode_string(not_null(j_60));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
        o_60 = t;
        n_60 :
        if(((ATgetType(o_60) == AT_LIST) && !(ATisEmpty(o_60))))
          {
            p_60 = ATgetFirst((ATermList) o_60);
            q_60 = (ATerm) ATgetNext((ATermList) o_60);
            {
              t = not_null(p_60);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(q_60);
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
  ATerm a_61 = NULL;
  ATerm c_61 = NULL;
  a_61 = t;
  {
    ATerm d_61 = NULL;
    ATerm f_61 = NULL,g_61 = NULL,j_61 = NULL;
    t = not_null(a_61);
    {
      d_61 = t;
      {
        t = SSL_explode_term(not_null(d_61));
        {
          f_61 = t;
          y_60 :
          if(match_cons(f_61, sym__2))
            {
              g_61 = ATgetArgument(f_61, 0);
              j_61 = ATgetArgument(f_61, 1);
              z_60 :
              if(match_string(g_61, ""))
                {
                  if(((c_61 != NULL) && (c_61 != j_61)))
                    _fail(j_61);
                  else
                    c_61 = j_61;
                }
              else
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
ATerm at_end_1 (ATerm t, ATerm x_70 (ATerm))
{
  ATerm n_61 (ATerm t)
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_61);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          t = Nil_0(t);
          t = x_70(t);
        }
      }
    return(t);
  }
  t = n_61(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,a_62 = NULL;
  u_61 = t;
  t_61 :
  if(match_cons(u_61, sym__2))
    {
      v_61 = ATgetArgument(u_61, 0);
      a_62 = ATgetArgument(u_61, 1);
      {
        t = not_null(v_61);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(a_62);
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_62 = NULL;
  i_62 = t;
  t = SSL_explode_string(not_null(i_62));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm n_9;
  n_9 = t;
  {
    ATerm s_62 = NULL,u_62 = NULL;
    ATerm o_9;
    o_9 = t;
    {
      ATerm t_62 = NULL;
      t = f_81(t);
      {
        t_62 = t;
        if(((s_62 != NULL) && (s_62 != t_62)))
          _fail(t_62);
        else
          s_62 = t_62;
      }
    }
    t = o_9;
    {
      ATerm v_62 = NULL;
      v_62 = t;
      if(((u_62 != NULL) && (u_62 != v_62)))
        _fail(v_62);
      else
        u_62 = v_62;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_62)), not_null(s_62)));
        t = printnl_0(t);
      }
    }
  }
  t = n_9;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_62 = NULL;
  z_62 = t;
  t = SSL_is_string(not_null(z_62));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm t_9 = t;
              int u_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(u_9);
                }
              else
                {
                  t = t_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, b_2);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            {
              ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
              i_63 = t;
              h_63 :
              if(match_cons(i_63, sym_Path_1))
                {
                  j_63 = ATgetArgument(i_63, 0);
                  t = not_null(j_63);
                }
              else
                {
                  if(match_cons(i_63, sym_Var_1))
                    {
                      j_63 = ATgetArgument(i_63, 0);
                      {
                        t = not_null(j_63);
                        {
                          ATerm v_9 = t;
                          int w_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_9);
                            }
                          else
                            {
                              t = v_9;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_x_9;
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
                      if(match_cons(i_63, sym_Prefix_2))
                        {
                          j_63 = ATgetArgument(i_63, 0);
                          k_63 = ATgetArgument(i_63, 1);
                          {
                            ATerm p_63 = NULL,r_63 = NULL;
                            ATerm y_9;
                            y_9 = t;
                            {
                              ATerm q_63 = NULL;
                              t = not_null(j_63);
                              {
                                t = eval_config_0(t);
                                {
                                  q_63 = t;
                                  if(((p_63 != NULL) && (p_63 != q_63)))
                                    _fail(q_63);
                                  else
                                    p_63 = q_63;
                                }
                              }
                            }
                            t = y_9;
                            {
                              ATerm s_63 = NULL;
                              t = not_null(k_63);
                              {
                                t = eval_config_0(t);
                                {
                                  s_63 = t;
                                  if(((r_63 != NULL) && (r_63 != s_63)))
                                    _fail(s_63);
                                  else
                                    r_63 = s_63;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_63), not_null(r_63));
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
  ATerm a_64 = NULL;
  a_64 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(a_64));
    {
      t = table_get_0(t);
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm c_10;
              c_10 = t;
              {
                ATerm c_64 = NULL;
                ATerm d_64 = NULL;
                d_64 = t;
                if(((c_64 != NULL) && (c_64 != d_64)))
                  _fail(d_64);
                else
                  c_64 = d_64;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_z_9, not_null(a_64), not_null(c_64));
                  t = table_put_0(t);
                }
              }
              t = c_10;
            }
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_10;
      f_10 = t;
      {
        ATerm h_64 = NULL;
        ATerm i_64 = NULL;
        t = term_g_10;
        {
          t = get_config_0(t);
          {
            i_64 = t;
            if(((h_64 != NULL) && (h_64 != i_64)))
              _fail(i_64);
            else
              h_64 = i_64;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_64), term_h_10);
          t = geq_0(t);
        }
      }
      t = f_10;
      t = c_84(t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  l_64 :
  if(match_cons(m_64, sym__2))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      t = SSL_WriteToTextFile(not_null(n_64), not_null(o_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  t_64 :
  if(match_cons(u_64, sym__2))
    {
      v_64 = ATgetArgument(u_64, 0);
      w_64 = ATgetArgument(u_64, 1);
      t = SSL_WriteToBinaryFile(not_null(v_64), not_null(w_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm e_65 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm f_65 = NULL,g_65 = NULL;
            f_65 = t;
            b_65 :
            if(match_cons(f_65, sym_Output_1))
              {
                g_65 = ATgetArgument(f_65, 0);
                if(((e_65 != NULL) && (e_65 != g_65)))
                  _fail(g_65);
                else
                  e_65 = g_65;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, e_2);
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          {
            ATerm h_65 = NULL;
            t = term_l_10;
            {
              h_65 = t;
              if(((e_65 != NULL) && (e_65 != h_65)))
                _fail(h_65);
              else
                e_65 = h_65;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_2, _id);
  }
  t = i_10;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(e_65);
        return(t);
      }
      t = split_2(t, g_2, _id);
      return(t);
    }
    t = _2(t, _id, f_2);
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm i_65 = NULL;
              i_65 = t;
              d_65 :
              if(!(match_cons(i_65, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, i_2);
            return(t);
          }
          t = _2(t, h_2, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm o_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  ATerm o_10;
  o_10 = t;
  t = dtime_0(t);
  t = o_10;
  {
    t = j_82(t);
    {
      ATerm p_10;
      p_10 = t;
      {
        ATerm p_65 = NULL;
        t = dtime_0(t);
        {
          p_65 = t;
          if(((o_65 != NULL) && (o_65 != p_65)))
            _fail(p_65);
          else
            o_65 = p_65;
        }
      }
      t = p_10;
      {
        q_65 = t;
        n_65 :
        if(match_cons(q_65, sym__2))
          {
            r_65 = ATgetArgument(q_65, 0);
            s_65 = ATgetArgument(q_65, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_65)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_65))), not_null(s_65));
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
  ATerm y_65 = NULL;
  y_65 = t;
  t = SSL_ReadFromFile(not_null(y_65));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm d_66 = NULL,f_66 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm e_66 = NULL;
    t = j_78(t);
    {
      e_66 = t;
      if(((d_66 != NULL) && (d_66 != e_66)))
        _fail(e_66);
      else
        d_66 = e_66;
    }
  }
  t = q_10;
  {
    ATerm g_66 = NULL;
    t = k_78(t);
    {
      g_66 = t;
      if(((f_66 != NULL) && (f_66 != g_66)))
        _fail(g_66);
      else
        f_66 = g_66;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_66), not_null(f_66));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_66 = NULL;
  ATerm r_10;
  r_10 = t;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 (ATerm t)
        {
          ATerm n_66 = NULL,o_66 = NULL;
          n_66 = t;
          k_66 :
          if(match_cons(n_66, sym_Input_1))
            {
              o_66 = ATgetArgument(n_66, 0);
              if(((m_66 != NULL) && (m_66 != o_66)))
                _fail(o_66);
              else
                m_66 = o_66;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, j_2);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm p_66 = NULL;
          t = term_u_10;
          {
            p_66 = t;
            if(((m_66 != NULL) && (m_66 != p_66)))
              _fail(p_66);
            else
              m_66 = p_66;
          }
        }
      }
  }
  t = r_10;
  {
    ATerm k_2 (ATerm t)
    {
      t = not_null(m_66);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_2);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_66 = NULL;
  t_66 = t;
  t = SSL_string_to_int(not_null(t_66));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
  b_67 = t;
  z_66 :
  if(match_string(b_67, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(b_67) == AT_LIST) && !(ATisEmpty(b_67))))
        {
          c_67 = ATgetFirst((ATermList) b_67);
          d_67 = (ATerm) ATgetNext((ATermList) b_67);
          a_67 :
          if(((ATgetType(d_67) == AT_LIST) && !(ATisEmpty(d_67))))
            {
              e_67 = ATgetFirst((ATermList) d_67);
              f_67 = (ATerm) ATgetNext((ATermList) d_67);
              {
                ATerm j_67 = NULL;
                ATerm v_10;
                v_10 = t;
                {
                  t = not_null(c_67);
                  t = j_0(t);
                }
                t = v_10;
                {
                  ATerm k_67 = NULL;
                  t = not_null(e_67);
                  {
                    t = k_0(t);
                    {
                      k_67 = t;
                      if(((j_67 != NULL) && (j_67 != k_67)))
                        _fail(k_67);
                      else
                        j_67 = k_67;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_67)), not_null(j_67));
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
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
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
      ATerm m_2 (ATerm t)
      {
        ATerm g_68 = NULL;
        ATerm y_10;
        y_10 = t;
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
        t = y_10;
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
      ATerm n_2 (ATerm t)
      {
        t = term_d_11;
        return(t);
      }
      t = ArgOption_3(t, l_2, m_2, n_2);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
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
            ATerm p_2 (ATerm t)
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
                ATerm m_68 = NULL;
                m_68 = t;
                if(((l_68 != NULL) && (l_68 != m_68)))
                  _fail(m_68);
                else
                  l_68 = m_68;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_68));
              }
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              t = term_i_11;
              return(t);
            }
            t = ArgOption_3(t, o_2, p_2, q_2);
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
                  ATerm r_2 (ATerm t)
                  {
                    ATerm n_68 = NULL;
                    n_68 = t;
                    u_67 :
                    if(!(match_string(n_68, "-S")))
                      {
                        if(!(match_string(n_68, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_2 (ATerm t)
                  {
                    t = term_m_11;
                    t = set_config_0(t);
                    t = term_n_11;
                    return(t);
                  }
                  ATerm t_2 (ATerm t)
                  {
                    t = term_o_11;
                    return(t);
                  }
                  t = Option_3(t, r_2, s_2, t_2);
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
                        ATerm u_2 (ATerm t)
                        {
                          ATerm o_68 = NULL;
                          o_68 = t;
                          v_67 :
                          if(!(match_string(o_68, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm v_2 (ATerm t)
                        {
                          ATerm r_68 = NULL;
                          ATerm r_11;
                          r_11 = t;
                          {
                            ATerm p_68 = NULL;
                            ATerm q_68 = NULL;
                            t = string_to_int_0(t);
                            {
                              q_68 = t;
                              if(((p_68 != NULL) && (p_68 != q_68)))
                                _fail(q_68);
                              else
                                p_68 = q_68;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(p_68));
                              t = set_config_0(t);
                            }
                          }
                          t = r_11;
                          {
                            ATerm s_68 = NULL;
                            s_68 = t;
                            if(((r_68 != NULL) && (r_68 != s_68)))
                              _fail(s_68);
                            else
                              r_68 = s_68;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_68));
                          }
                          return(t);
                        }
                        ATerm w_2 (ATerm t)
                        {
                          t = term_s_11;
                          return(t);
                        }
                        t = ArgOption_3(t, u_2, v_2, w_2);
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
                              ATerm x_2 (ATerm t)
                              {
                                ATerm t_68 = NULL;
                                t_68 = t;
                                y_67 :
                                if(!(match_string(t_68, "-k")))
                                  {
                                    if(!(match_string(t_68, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm y_2 (ATerm t)
                              {
                                ATerm v_11;
                                v_11 = t;
                                {
                                  ATerm u_68 = NULL;
                                  ATerm v_68 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    v_68 = t;
                                    if(((u_68 != NULL) && (u_68 != v_68)))
                                      _fail(v_68);
                                    else
                                      u_68 = v_68;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(u_68));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_11;
                                return(t);
                              }
                              ATerm z_2 (ATerm t)
                              {
                                t = term_x_11;
                                return(t);
                              }
                              t = ArgOption_3(t, x_2, y_2, z_2);
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
                                    ATerm a_3 (ATerm t)
                                    {
                                      ATerm w_68 = NULL;
                                      w_68 = t;
                                      a_68 :
                                      if(!(match_string(w_68, "-v")))
                                        {
                                          if(!(match_string(w_68, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm b_3 (ATerm t)
                                    {
                                      t = term_c_12;
                                      t = set_config_0(t);
                                      t = term_d_12;
                                      return(t);
                                    }
                                    ATerm c_3 (ATerm t)
                                    {
                                      t = term_e_12;
                                      return(t);
                                    }
                                    t = Option_3(t, a_3, b_3, c_3);
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
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm x_68 = NULL;
                                            x_68 = t;
                                            b_68 :
                                            if(!(match_string(x_68, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm e_3 (ATerm t)
                                          {
                                            t = term_i_12;
                                            t = set_config_0(t);
                                            t = term_j_12;
                                            return(t);
                                          }
                                          ATerm f_3 (ATerm t)
                                          {
                                            t = term_k_12;
                                            return(t);
                                          }
                                          t = Option_3(t, d_3, e_3, f_3);
                                          LocalPopChoice(g_12);
                                        }
                                      else
                                        {
                                          t = f_12;
                                          {
                                            ATerm g_3 (ATerm t)
                                            {
                                              ATerm y_68 = NULL;
                                              y_68 = t;
                                              c_68 :
                                              if(!(match_string(y_68, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm h_3 (ATerm t)
                                            {
                                              t = term_m_12;
                                              t = set_config_0(t);
                                              t = term_n_12;
                                              return(t);
                                            }
                                            ATerm i_3 (ATerm t)
                                            {
                                              t = term_o_12;
                                              return(t);
                                            }
                                            t = Option_3(t, g_3, h_3, i_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, term_p_12));
  {
    t = printnl_0(t);
    {
      t = term_d_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_69 = NULL;
  h_69 = t;
  t = SSL_TicksToSeconds(not_null(h_69));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
  m_69 = t;
  l_69 :
  if(match_cons(m_69, sym__2))
    {
      n_69 = ATgetArgument(m_69, 0);
      o_69 = ATgetArgument(m_69, 1);
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_69), not_null(o_69));
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = SSL_addr(not_null(n_69), not_null(o_69));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm))
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_76(t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
        v_69 = t;
        u_69 :
        if(((ATgetType(v_69) == AT_LIST) && !(ATisEmpty(v_69))))
          {
            w_69 = ATgetFirst((ATermList) v_69);
            x_69 = (ATerm) ATgetNext((ATermList) v_69);
            {
              ATerm a_70 = NULL;
              ATerm b_70 = NULL;
              t = not_null(x_69);
              {
                t = foldr_2(t, u_76, v_76);
                {
                  b_70 = t;
                  if(((a_70 != NULL) && (a_70 != b_70)))
                    _fail(b_70);
                  else
                    a_70 = b_70;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_69), not_null(a_70));
                t = v_76(t);
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
ATerm crush_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm n_70 = NULL;
  ATerm p_70 = NULL;
  n_70 = t;
  {
    ATerm q_70 = NULL;
    ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
    t = not_null(n_70);
    {
      q_70 = t;
      {
        t = SSL_explode_term(not_null(q_70));
        {
          u_70 = t;
          m_70 :
          if(match_cons(u_70, sym__2))
            {
              v_70 = ATgetArgument(u_70, 0);
              w_70 = ATgetArgument(u_70, 1);
              if(((p_70 != NULL) && (p_70 != w_70)))
                _fail(w_70);
              else
                p_70 = w_70;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_70);
      t = foldr_2(t, s_75, t_75);
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
    ATerm j_3 (ATerm t)
    {
      t = term_l_11;
      return(t);
    }
    t = crush_2(t, j_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
  e_71 = t;
  d_71 :
  if(match_cons(e_71, sym__2))
    {
      f_71 = ATgetArgument(e_71, 0);
      g_71 = ATgetArgument(e_71, 1);
      {
        ATerm u_12;
        u_12 = t;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_71), not_null(g_71));
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
              t = SSL_gtr(not_null(f_71), not_null(g_71));
            }
        }
        t = u_12;
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
  ATerm m_71 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL;
      n_71 = t;
      l_71 :
      if(match_cons(n_71, sym__2))
        {
          o_71 = ATgetArgument(n_71, 0);
          p_71 = ATgetArgument(n_71, 1);
          {
            if(((m_71 != NULL) && (m_71 != o_71)))
              _fail(o_71);
            else
              m_71 = o_71;
            if(((m_71 != NULL) && (m_71 != p_71)))
              _fail(p_71);
            else
              m_71 = p_71;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_84 (ATerm))
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13;
      b_13 = t;
      {
        ATerm s_71 = NULL;
        ATerm t_71 = NULL;
        t = term_g_10;
        {
          t = get_config_0(t);
          {
            t_71 = t;
            if(((s_71 != NULL) && (s_71 != t_71)))
              _fail(t_71);
            else
              s_71 = t_71;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_71), term_d_9);
          t = geq_0(t);
        }
      }
      t = b_13;
      t = b_84(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm x_71 = NULL,z_71 = NULL;
    ATerm f_13;
    f_13 = t;
    {
      ATerm y_71 = NULL;
      t = run_time_0(t);
      {
        y_71 = t;
        if(((x_71 != NULL) && (x_71 != y_71)))
          _fail(y_71);
        else
          x_71 = y_71;
      }
    }
    t = f_13;
    {
      ATerm a_72 = NULL;
      t = term_g_13;
      {
        t = get_config_0(t);
        {
          a_72 = t;
          if(((z_71 != NULL) && (z_71 != a_72)))
            _fail(a_72);
          else
            z_71 = a_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_13), not_null(x_71)), term_h_13), not_null(z_71)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_3);
  {
    t = term_l_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_72 = NULL;
  h_72 = t;
  g_72 :
  if(match_cons(h_72, sym_Version_0))
    {
      ATerm j_72 = NULL,l_72 = NULL;
      ATerm j_13;
      j_13 = t;
      {
        ATerm k_72 = NULL;
        t = SSLgetAnnotations(not_null(h_72));
        {
          k_72 = t;
          if(((j_72 != NULL) && (j_72 != k_72)))
            _fail(k_72);
          else
            j_72 = k_72;
        }
      }
      t = j_13;
      {
        ATerm m_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_72));
        {
          m_72 = t;
          if(((l_72 != NULL) && (l_72 != m_72)))
            _fail(m_72);
          else
            l_72 = m_72;
        }
        t = not_null(l_72);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm l_3 (ATerm t)
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
  t = fetch_1(t, l_3);
  t = h_82(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_72 = NULL;
  r_72 = t;
  t = SSL_table_create(not_null(r_72));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_72 = NULL;
  v_72 = t;
  {
    ATerm o_13;
    o_13 = t;
    {
      t = term_p_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_13, term_q_13, not_null(v_72));
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
  ATerm z_72 = NULL;
  z_72 = t;
  t = SSL_table_destroy(not_null(z_72));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_73 = NULL;
  d_73 = t;
  t = SSL_exit(not_null(d_73));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  h_73 = t;
  g_73 :
  if(((ATgetType(h_73) == AT_LIST) && ATisEmpty(h_73)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_73) == AT_LIST) && !(ATisEmpty(h_73))))
        {
          i_73 = ATgetFirst((ATermList) h_73);
          j_73 = (ATerm) ATgetNext((ATermList) h_73);
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
  ATerm s_13;
  s_13 = t;
  {
    ATerm m_73 = NULL;
    ATerm p_73 = NULL;
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm n_73 = NULL;
          ATerm o_73 = NULL;
          o_73 = t;
          if(((n_73 != NULL) && (n_73 != o_73)))
            _fail(o_73);
          else
            n_73 = o_73;
          t = (ATerm) ATinsert(ATempty, not_null(n_73));
        }
      }
    {
      p_73 = t;
      if(((m_73 != NULL) && (m_73 != p_73)))
        _fail(p_73);
      else
        m_73 = p_73;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(m_73));
      t = printnl_0(t);
    }
  }
  t = s_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm s_73 (ATerm t)
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = Cons_2(t, i_70, s_73);
      }
    return(t);
  }
  t = s_73(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL;
  b_74 = t;
  y_73 :
  if(((ATgetType(b_74) == AT_LIST) && !(ATisEmpty(b_74))))
    {
      z_73 = ATgetFirst((ATermList) b_74);
      a_74 = (ATerm) ATgetNext((ATermList) b_74);
      {
        ATerm e_74 = NULL;
        t = not_null(a_74);
        {
          ATerm y_13;
          y_13 = t;
          {
            ATerm f_74 = NULL,h_74 = NULL,j_74 = NULL;
            ATerm z_13;
            z_13 = t;
            {
              ATerm g_74 = NULL;
              t = i_0(t);
              {
                g_74 = t;
                if(((f_74 != NULL) && (f_74 != g_74)))
                  _fail(g_74);
                else
                  f_74 = g_74;
              }
            }
            t = z_13;
            {
              ATerm i_74 = NULL;
              t = not_null(z_73);
              {
                t = g_0(t);
                {
                  i_74 = t;
                  if(((h_74 != NULL) && (h_74 != i_74)))
                    _fail(i_74);
                  else
                    h_74 = i_74;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_74)), not_null(h_74));
                {
                  j_74 = t;
                  if(((e_74 != NULL) && (e_74 != j_74)))
                    _fail(j_74);
                  else
                    e_74 = j_74;
                }
              }
            }
          }
          t = y_13;
          {
            ATerm m_3 (ATerm t)
            {
              t = not_null(e_74);
              return(t);
            }
            t = reverse_acc_2(t, g_0, m_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_74) == AT_LIST) && ATisEmpty(b_74)))
        {
          {
            t = term_b_12;
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
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm u_74 = NULL,v_74 = NULL;
  u_74 = t;
  t_74 :
  if(match_cons(u_74, sym_Program_1))
    {
      v_74 = ATgetArgument(u_74, 0);
      {
        ATerm y_74 = NULL,a_75 = NULL;
        ATerm z_74 = NULL;
        t = SSLgetAnnotations(not_null(u_74));
        {
          z_74 = t;
          if(((y_74 != NULL) && (y_74 != z_74)))
            _fail(z_74);
          else
            y_74 = z_74;
        }
        {
          t = not_null(v_74);
          {
            ATerm c_75 = NULL;
            t = h_61(t);
            {
              a_75 = t;
              {
                ATerm d_75 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_75)), not_null(y_74));
                {
                  d_75 = t;
                  if(((c_75 != NULL) && (c_75 != d_75)))
                    _fail(d_75);
                  else
                    c_75 = d_75;
                }
                t = not_null(c_75);
              }
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
  ATerm l_75 = NULL;
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_75 = NULL;
      t = term_g_13;
      {
        t = get_config_0(t);
        {
          m_75 = t;
          if(((l_75 != NULL) && (l_75 != m_75)))
            _fail(m_75);
          else
            l_75 = m_75;
        }
      }
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm n_75 = NULL;
            n_75 = t;
            if(((l_75 != NULL) && (l_75 != n_75)))
              _fail(n_75);
            else
              l_75 = n_75;
            return(t);
          }
          t = Program_1(t, p_3);
          return(t);
        }
        t = fetch_1(t, o_3);
      }
    }
  {
    t = term_c_14;
    {
      t = echo_0(t);
      {
        t = term_f_14;
        {
          t = table_get_0(t);
          {
            ATerm q_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, q_3);
            {
              ATerm r_3 (ATerm t)
              {
                ATerm o_75 = NULL;
                ATerm p_75 = NULL;
                p_75 = t;
                if(((o_75 != NULL) && (o_75 != p_75)))
                  _fail(p_75);
                else
                  o_75 = p_75;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_75)), term_g_14);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, r_3);
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
  ATerm h_14;
  h_14 = t;
  {
    ATerm w_75 = NULL;
    ATerm x_75 = NULL;
    x_75 = t;
    if(((w_75 != NULL) && (w_75 != x_75)))
      _fail(x_75);
    else
      w_75 = x_75;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, not_null(w_75)));
      t = printnl_0(t);
    }
  }
  t = h_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm l_14;
  l_14 = t;
  {
    t = g_81(t);
    t = debug_0(t);
  }
  t = l_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm e_76 = NULL,f_76 = NULL;
  e_76 = t;
  d_76 :
  if(match_cons(e_76, sym_Undefined_1))
    {
      f_76 = ATgetArgument(e_76, 0);
      {
        ATerm i_76 = NULL,k_76 = NULL;
        ATerm j_76 = NULL;
        t = SSLgetAnnotations(not_null(e_76));
        {
          j_76 = t;
          if(((i_76 != NULL) && (i_76 != j_76)))
            _fail(j_76);
          else
            i_76 = j_76;
        }
        {
          t = not_null(f_76);
          {
            ATerm m_76 = NULL;
            t = i_61(t);
            {
              k_76 = t;
              {
                ATerm n_76 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_76)), not_null(i_76));
                {
                  n_76 = t;
                  if(((m_76 != NULL) && (m_76 != n_76)))
                    _fail(n_76);
                  else
                    m_76 = n_76;
                }
                t = not_null(m_76);
              }
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
ATerm fetch_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm s_76 (ATerm t)
  {
    ATerm m_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_70, _id);
        LocalPopChoice(q_14);
      }
    else
      {
        t = m_14;
        t = Cons_2(t, _id, s_76);
      }
    return(t);
  }
  t = s_76(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_85 (ATerm))
{
  t = fetch_1(t, e_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  y_76 :
  if(match_cons(z_76, sym_Help_0))
    {
      ATerm b_77 = NULL,d_77 = NULL;
      ATerm t_14;
      t_14 = t;
      {
        ATerm c_77 = NULL;
        t = SSLgetAnnotations(not_null(z_76));
        {
          c_77 = t;
          if(((b_77 != NULL) && (b_77 != c_77)))
            _fail(c_77);
          else
            b_77 = c_77;
        }
      }
      t = t_14;
      {
        ATerm e_77 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_77));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm u_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_62(t);
      LocalPopChoice(y_14);
    }
  else
    {
      t = u_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
  k_77 = t;
  j_77 :
  if(match_cons(k_77, sym__2))
    {
      l_77 = ATgetArgument(k_77, 0);
      m_77 = ATgetArgument(k_77, 1);
      t = SSL_table_get(not_null(l_77), not_null(m_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  t_77 = t;
  s_77 :
  if(match_cons(t_77, sym__3))
    {
      u_77 = ATgetArgument(t_77, 0);
      v_77 = ATgetArgument(t_77, 1);
      w_77 = ATgetArgument(t_77, 2);
      {
        ATerm b_15;
        b_15 = t;
        {
          ATerm a_78 = NULL;
          ATerm b_78 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_77), not_null(v_77));
          {
            ATerm c_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_15);
              }
            else
              {
                t = c_15;
                t = (ATerm) ATempty;
              }
            {
              b_78 = t;
              if(((a_78 != NULL) && (a_78 != b_78)))
                _fail(b_78);
              else
                a_78 = b_78;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_77), not_null(v_77), (ATerm) ATinsert(CheckATermList(not_null(a_78)), not_null(w_77)));
            t = table_put_0(t);
          }
        }
        t = b_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm f_78 = NULL;
  ATerm g_78 = NULL;
  t = term_b_12;
  {
    t = j_86(t);
    {
      g_78 = t;
      if(((f_78 != NULL) && (f_78 != g_78)))
        _fail(g_78);
      else
        f_78 = g_78;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, not_null(f_78));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  n_78 :
  if(match_string(o_78, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(o_78) == AT_LIST) && !(ATisEmpty(o_78))))
        {
          p_78 = ATgetFirst((ATermList) o_78);
          q_78 = (ATerm) ATgetNext((ATermList) o_78);
          {
            ATerm t_78 = NULL;
            ATerm e_15;
            e_15 = t;
            {
              t = not_null(p_78);
              t = a_0(t);
            }
            t = e_15;
            {
              ATerm u_78 = NULL;
              t = term_b_12;
              {
                t = c_0(t);
                {
                  u_78 = t;
                  if(((t_78 != NULL) && (t_78 != u_78)))
                    _fail(u_78);
                  else
                    t_78 = u_78;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_78)), not_null(t_78));
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
  ATerm s_3 (ATerm t)
  {
    ATerm z_78 = NULL;
    z_78 = t;
    y_78 :
    if(!(match_string(z_78, "--help")))
      {
        if(!(match_string(z_78, "-h")))
          {
            if(!(match_string(z_78, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_g_15;
    {
      t = set_config_0(t);
      t = term_h_15;
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_i_15;
    return(t);
  }
  t = Option_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  b_79 :
  if(((ATgetType(c_79) == AT_LIST) && !(ATisEmpty(c_79))))
    {
      d_79 = ATgetFirst((ATermList) c_79);
      e_79 = (ATerm) ATgetNext((ATermList) c_79);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_79)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_79)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_51 (ATerm), ATerm m_51 (ATerm))
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  n_79 :
  if(((ATgetType(o_79) == AT_LIST) && !(ATisEmpty(o_79))))
    {
      p_79 = ATgetFirst((ATermList) o_79);
      q_79 = (ATerm) ATgetNext((ATermList) o_79);
      {
        ATerm u_79 = NULL,w_79 = NULL;
        ATerm v_79 = NULL;
        t = SSLgetAnnotations(not_null(o_79));
        {
          v_79 = t;
          if(((u_79 != NULL) && (u_79 != v_79)))
            _fail(v_79);
          else
            u_79 = v_79;
        }
        {
          t = not_null(p_79);
          {
            ATerm y_79 = NULL;
            t = l_51(t);
            {
              w_79 = t;
              {
                t = not_null(q_79);
                {
                  ATerm a_80 = NULL;
                  t = m_51(t);
                  {
                    y_79 = t;
                    {
                      ATerm b_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_79)), not_null(w_79)), not_null(u_79));
                      {
                        b_80 = t;
                        if(((a_80 != NULL) && (a_80 != b_80)))
                          _fail(b_80);
                        else
                          a_80 = b_80;
                      }
                      t = not_null(a_80);
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
  ATerm l_80 = NULL;
  l_80 = t;
  k_80 :
  if(((ATgetType(l_80) == AT_LIST) && ATisEmpty(l_80)))
    {
      {
        ATerm n_80 = NULL,p_80 = NULL;
        ATerm j_15;
        j_15 = t;
        {
          ATerm o_80 = NULL;
          t = SSLgetAnnotations(not_null(l_80));
          {
            o_80 = t;
            if(((n_80 != NULL) && (n_80 != o_80)))
              _fail(o_80);
            else
              n_80 = o_80;
          }
        }
        t = j_15;
        {
          ATerm q_80 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_80));
          {
            q_80 = t;
            if(((p_80 != NULL) && (p_80 != q_80)))
              _fail(q_80);
            else
              p_80 = q_80;
          }
          t = not_null(p_80);
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
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  v_80 :
  if(match_cons(w_80, sym__2))
    {
      x_80 = ATgetArgument(w_80, 0);
      y_80 = ATgetArgument(w_80, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_9, not_null(x_80), not_null(y_80));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm k_15;
  k_15 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_15;
        t = h_86(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        {
        }
      }
  }
  t = k_15;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm i_81 = NULL;
      ATerm r_15;
      r_15 = t;
      {
        ATerm e_81 = NULL;
        ATerm h_81 = NULL;
        h_81 = t;
        if(((e_81 != NULL) && (e_81 != h_81)))
          _fail(h_81);
        else
          e_81 = h_81;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_13, not_null(e_81));
          t = set_config_0(t);
        }
      }
      t = r_15;
      {
        ATerm j_81 = NULL;
        j_81 = t;
        if(((i_81 != NULL) && (i_81 != j_81)))
          _fail(j_81);
        else
          i_81 = j_81;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_81));
      }
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm v_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              {
                t = h_86(t);
                t = Cons_2(t, _id, w_3);
              }
            }
          LocalPopChoice(y_15);
        }
      else
        {
          t = v_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_3, w_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
  ATerm b_16;
  b_16 = t;
  {
    ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
    s_81 = t;
    o_81 :
    if(match_cons(s_81, sym__3))
      {
        t_81 = ATgetArgument(s_81, 0);
        u_81 = ATgetArgument(s_81, 1);
        v_81 = ATgetArgument(s_81, 2);
        {
          if(((p_81 != NULL) && (p_81 != t_81)))
            _fail(t_81);
          else
            p_81 = t_81;
          {
            if(((q_81 != NULL) && (q_81 != u_81)))
              _fail(u_81);
            else
              q_81 = u_81;
            {
              if(((r_81 != NULL) && (r_81 != v_81)))
                _fail(v_81);
              else
                r_81 = v_81;
              t = SSL_table_put(not_null(p_81), not_null(q_81), not_null(r_81));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm y_81 = NULL;
  ATerm c_16;
  c_16 = t;
  {
    t = term_d_16;
    t = table_put_0(t);
  }
  t = c_16;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm e_16 = t;
      int f_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_86(t);
          LocalPopChoice(f_16);
        }
      else
        {
          t = e_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_3);
    {
      ATerm g_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_16;
          i_16 = t;
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_f_15;
                t = get_config_0(t);
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_16;
          {
            t = system_usage_0(t);
            {
              t = term_l_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_16);
        }
      else
        {
          t = g_16;
          {
            ATerm l_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm z_3 (ATerm t)
                  {
                    ATerm z_81 = NULL;
                    z_81 = t;
                    if(((y_81 != NULL) && (y_81 != z_81)))
                      _fail(z_81);
                    else
                      y_81 = z_81;
                    return(t);
                  }
                  t = Undefined_1(t, z_3);
                  return(t);
                }
                t = fetch_1(t, y_3);
                {
                  ATerm a_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_81)), term_r_16);
                    return(t);
                  }
                  t = say_1(t, a_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_d_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(m_16);
              }
            else
              {
                t = l_16;
                {
                }
              }
          }
        }
      {
        ATerm s_16;
        s_16 = t;
        {
          t = term_d_14;
          t = table_destroy_0(t);
        }
        t = s_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm))
{
  t = parse_options_1(t, n_82);
  {
    t = store_options_0(t);
    {
      t = p_82(t);
      {
        ATerm t_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_82);
            LocalPopChoice(x_16);
          }
        else
          {
            t = t_16;
            {
              ATerm z_16 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_82(t);
                  t = report_success_0(t);
                  LocalPopChoice(c_17);
                }
              else
                {
                  t = z_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_83(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_83);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_4, g_83, h_83, c_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm i_17;
      i_17 = t;
      {
        ATerm c_82 = NULL;
        ATerm d_82 = NULL;
        t = term_g_13;
        {
          t = get_config_0(t);
          {
            d_82 = t;
            if(((c_82 != NULL) && (c_82 != d_82)))
              _fail(d_82);
            else
              c_82 = d_82;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, not_null(c_82)));
          t = printnl_0(t);
        }
      }
      t = i_17;
      return(t);
    }
    t = if_verbose2_1(t, e_4);
    return(t);
  }
  t = iowrap_4(t, y_82, z_82, a_83, d_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  t = iowrap_3(t, w_82, x_82, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_82 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    t = _2(t, _id, t_82);
    return(t);
  }
  t = iowrap_2(t, f_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
