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
Symbol sym_Mark_0;
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
  sym_Mark_0 = ATmakeSymbol("Mark", 0, ATfalse);
  ATprotectSymbol(sym_Mark_0);
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
ATerm term_a_39;
ATerm term_h_38;
ATerm term_x_37;
ATerm term_q_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_b_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_f_31;
ATerm term_b_30;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_d_17;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_k_15;
ATerm term_c_15;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_l_10;
ATerm term_c_10;
ATerm term_f_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_i_8;
void init_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Op_2, term_l_12, (ATerm) ATempty);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Call_2, term_k_15, (ATerm) ATempty);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Match_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Where_1, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Build_1, term_v_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_15, term_y_15);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_15, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_15, term_v_15);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Choice_2, term_v_15, term_v_15);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_u_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_x_26);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_x_26);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_x_26);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_t_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_i_36, term_x_26);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, (ATerm) ATempty);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_111 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm w_120 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm y_84 (ATerm), ATerm z_84 (ATerm));
ATerm Prim_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm Explode_2 (ATerm, ATerm u_84 (ATerm), ATerm v_84 (ATerm));
ATerm Op_2 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm));
ATerm pat_td_1 (ATerm, ATerm n_119 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm k_99 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_105 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm o_84 (ATerm), ATerm p_84 (ATerm));
ATerm Con_3 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm z_93 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_92 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_110 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_96 (ATerm), ATerm b_96 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_110 (ATerm));
ATerm scope_2 (ATerm, ATerm r_110 (ATerm), ATerm s_110 (ATerm));
ATerm replace_application_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0 (ATerm);
ATerm BottomupOverConstructor_0 (ATerm);
ATerm IntroduceApp_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm SeqOverScopeR_0 (ATerm);
ATerm SeqOverLChoiceR_0 (ATerm);
ATerm SeqOverChoiceR_0 (ATerm);
ATerm fuse_with_bottomup_0 (ATerm);
ATerm SeqOverScopeL_0 (ATerm);
ATerm SeqOverLChoiceL_0 (ATerm);
ATerm SeqOverChoiceL_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm k_92 (ATerm));
ATerm innermost_1 (ATerm, ATerm q_107 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm a_81 (ATerm));
ATerm Seq_2 (ATerm, ATerm q_81 (ATerm), ATerm r_81 (ATerm));
ATerm Match_1 (ATerm, ATerm z_80 (ATerm));
ATerm LChoice_2 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm));
ATerm Choice_2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm n_94 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm l_117 (ATerm), ATerm m_117 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm w_116 (ATerm), ATerm x_116 (ATerm));
ATerm substitute_1 (ATerm, ATerm y_116 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm k_120 (ATerm));
ATerm Rec_2 (ATerm, ATerm f_82 (ATerm), ATerm g_82 (ATerm));
ATerm SDef_3 (ATerm, ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm Let_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
ATerm sboundin_3 (ATerm, ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm e_82 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm g_120 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm j_84 (ATerm));
ATerm Scope_2 (ATerm, ATerm d_81 (ATerm), ATerm e_81 (ATerm));
ATerm tboundin_3 (ATerm, ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm w_102 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm));
ATerm crush_3 (ATerm, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_103 (ATerm), ATerm b_103 (ATerm));
ATerm diff_1 (ATerm, ATerm s_102 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm t_105 (ATerm), ATerm u_105 (ATerm));
ATerm for_3 (ATerm, ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm y_117 (ATerm), ATerm z_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm));
ATerm zip_1 (ATerm, ATerm f_99 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm s_117 (ATerm), ATerm t_117 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm d_118 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm r_108 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm b_108 (ATerm));
ATerm rename_4 (ATerm, ATerm n_117 (ATerm, ATerm (ATerm)), ATerm o_117 (ATerm), ATerm p_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_117 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm v_110 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_110 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_83 (ATerm));
ATerm Signature_1 (ATerm, ATerm k_83 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_83 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm k_79 (ATerm), ATerm l_79 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_97 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm a_111 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_112 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_96 (ATerm), ATerm d_96 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_103 (ATerm), ATerm o_103 (ATerm));
ATerm crush_2 (ATerm, ATerm l_102 (ATerm), ATerm m_102 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_120 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_112 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_115 (ATerm));
ATerm map_1 (ATerm, ATerm z_96 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_115 (ATerm));
ATerm Program_1 (ATerm, ATerm h_91 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_91 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_97 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_114 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_95 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_115 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_115 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_115 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm v_112 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_112 (ATerm), ATerm s_112 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_112 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm h_8;
  h_8 = t;
  {
    ATerm w_1 = NULL;
    ATerm q_6 = NULL;
    q_6 = t;
    if(((w_1 != NULL) && (w_1 != q_6)))
      _fail(q_6);
    else
      w_1 = q_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATempty, not_null(w_1)));
      t = printnl_0(t);
    }
  }
  t = h_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_111 (ATerm))
{
  ATerm k_8;
  k_8 = t;
  {
    t = b_111(t);
    t = debug_0(t);
  }
  t = k_8;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_120 (ATerm))
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8;
      n_8 = t;
      {
        ATerm g_7 = NULL;
        ATerm h_7 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            h_7 = t;
            if(((g_7 != NULL) && (g_7 != h_7)))
              _fail(h_7);
            else
              g_7 = h_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), term_q_8);
          t = geq_0(t);
        }
      }
      t = n_8;
      t = w_120(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
      }
    }
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  t_8 = t;
  r_8 :
  if(match_cons(t_8, sym_ExplodeCong_2))
    {
      u_8 = ATgetArgument(t_8, 0);
      s_8 = ATgetArgument(t_8, 1);
      {
        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
        ATerm b_9 = NULL;
        ATerm c_9 = NULL;
        t = new_0(t);
        {
          b_9 = t;
          {
            if(((x_8 != NULL) && (x_8 != b_9)))
              _fail(b_9);
            else
              x_8 = b_9;
            {
              ATerm d_9 = NULL;
              t = new_0(t);
              {
                c_9 = t;
                {
                  if(((y_8 != NULL) && (y_8 != c_9)))
                    _fail(c_9);
                  else
                    y_8 = c_9;
                  {
                    ATerm e_9 = NULL;
                    t = new_0(t);
                    {
                      d_9 = t;
                      {
                        if(((z_8 != NULL) && (z_8 != d_9)))
                          _fail(d_9);
                        else
                          z_8 = d_9;
                        {
                          t = new_0(t);
                          {
                            e_9 = t;
                            if(((a_9 != NULL) && (a_9 != e_9)))
                              _fail(e_9);
                            else
                              a_9 = e_9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_9)), not_null(z_8)), not_null(y_8)), not_null(x_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_8)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_8))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_8)))))));
      }
    }
  else
    {
      if(match_cons(t_8, sym_Build_1))
        {
          u_8 = ATgetArgument(t_8, 0);
          {
            ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
            ATerm k_9 = NULL;
            ATerm o_9 = NULL;
            t = new_0(t);
            {
              k_9 = t;
              {
                if(((i_9 != NULL) && (i_9 != k_9)))
                  _fail(k_9);
                else
                  i_9 = k_9;
                {
                  t = not_null(u_8);
                  {
                    ATerm c_0 (ATerm t)
                    {
                      ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
                      l_9 = t;
                      j_8 :
                      if(match_cons(l_9, sym_Explode_2))
                        {
                          m_9 = ATgetArgument(l_9, 0);
                          n_9 = ATgetArgument(l_9, 1);
                          {
                            if(((g_9 != NULL) && (g_9 != m_9)))
                              _fail(m_9);
                            else
                              g_9 = m_9;
                            {
                              if(((h_9 != NULL) && (h_9 != n_9)))
                                _fail(n_9);
                              else
                                h_9 = n_9;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, c_0);
                    {
                      o_9 = t;
                      if(((j_9 != NULL) && (j_9 != o_9)))
                        _fail(o_9);
                      else
                        j_9 = o_9;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_9)), not_null(g_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_9)))));
          }
        }
      else
        {
          if(match_cons(t_8, sym_Match_1))
            {
              u_8 = ATgetArgument(t_8, 0);
              {
                ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
                ATerm v_9 = NULL;
                ATerm w_9 = NULL;
                t = new_0(t);
                {
                  v_9 = t;
                  {
                    if(((s_9 != NULL) && (s_9 != v_9)))
                      _fail(v_9);
                    else
                      s_9 = v_9;
                    {
                      ATerm a_10 = NULL;
                      t = new_0(t);
                      {
                        w_9 = t;
                        {
                          if(((t_9 != NULL) && (t_9 != w_9)))
                            _fail(w_9);
                          else
                            t_9 = w_9;
                          {
                            t = not_null(u_8);
                            {
                              ATerm e_0 (ATerm t)
                              {
                                ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
                                x_9 = t;
                                p_8 :
                                if(match_cons(x_9, sym_Explode_2))
                                  {
                                    y_9 = ATgetArgument(x_9, 0);
                                    z_9 = ATgetArgument(x_9, 1);
                                    {
                                      if(((q_9 != NULL) && (q_9 != y_9)))
                                        _fail(y_9);
                                      else
                                        q_9 = y_9;
                                      {
                                        if(((r_9 != NULL) && (r_9 != z_9)))
                                          _fail(z_9);
                                        else
                                          r_9 = z_9;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_9));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, e_0);
                              {
                                a_10 = t;
                                if(((u_9 != NULL) && (u_9 != a_10)))
                                  _fail(a_10);
                                else
                                  u_9 = a_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_9)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_9))), (ATerm) ATmakeAppl(sym_Prim_2, term_w_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_9)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_9)), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_9)), not_null(q_9)))))));
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_Match_1))
    {
      g_11 = ATgetArgument(f_11, 0);
      {
        ATerm p_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
            ATerm m_11 = NULL;
            ATerm q_11 = NULL;
            t = new_0(t);
            {
              m_11 = t;
              {
                if(((k_11 != NULL) && (k_11 != m_11)))
                  _fail(m_11);
                else
                  k_11 = m_11;
                {
                  t = not_null(g_11);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
                      n_11 = t;
                      u_10 :
                      if(match_cons(n_11, sym_Anno_2))
                        {
                          o_11 = ATgetArgument(n_11, 0);
                          p_11 = ATgetArgument(n_11, 1);
                          {
                            if(((i_11 != NULL) && (i_11 != o_11)))
                              _fail(o_11);
                            else
                              i_11 = o_11;
                            {
                              if(((j_11 != NULL) && (j_11 != p_11)))
                                _fail(p_11);
                              else
                                j_11 = p_11;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_11)), not_null(i_11));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, r_0);
                    {
                      q_11 = t;
                      if(((l_11 != NULL) && (l_11 != q_11)))
                        _fail(q_11);
                      else
                        l_11 = q_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_11))))));
            LocalPopChoice(b_10);
          }
        else
          {
            t = p_9;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
                  ATerm v_11 = NULL;
                  ATerm y_11 = NULL;
                  t = new_0(t);
                  {
                    v_11 = t;
                    {
                      if(((t_11 != NULL) && (t_11 != v_11)))
                        _fail(v_11);
                      else
                        t_11 = v_11;
                      {
                        t = not_null(g_11);
                        {
                          ATerm t_0 (ATerm t)
                          {
                            ATerm w_11 = NULL,x_11 = NULL;
                            w_11 = t;
                            y_10 :
                            if(match_cons(w_11, sym_RootApp_1))
                              {
                                x_11 = ATgetArgument(w_11, 0);
                                {
                                  if(((s_11 != NULL) && (s_11 != x_11)))
                                    _fail(x_11);
                                  else
                                    s_11 = x_11;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_11));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, t_0);
                          {
                            y_11 = t;
                            if(((u_11 != NULL) && (u_11 != y_11)))
                              _fail(y_11);
                            else
                              u_11 = y_11;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_11))), not_null(s_11))));
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  {
                    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
                    ATerm e_12 = NULL;
                    ATerm i_12 = NULL;
                    t = new_0(t);
                    {
                      e_12 = t;
                      {
                        if(((c_12 != NULL) && (c_12 != e_12)))
                          _fail(e_12);
                        else
                          c_12 = e_12;
                        {
                          t = not_null(g_11);
                          {
                            ATerm u_0 (ATerm t)
                            {
                              ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
                              f_12 = t;
                              c_11 :
                              if(match_cons(f_12, sym_App_2))
                                {
                                  g_12 = ATgetArgument(f_12, 0);
                                  h_12 = ATgetArgument(f_12, 1);
                                  {
                                    if(((b_12 != NULL) && (b_12 != g_12)))
                                      _fail(g_12);
                                    else
                                      b_12 = g_12;
                                    {
                                      if(((a_12 != NULL) && (a_12 != h_12)))
                                        _fail(h_12);
                                      else
                                        a_12 = h_12;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_12));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, u_0);
                            {
                              i_12 = t;
                              if(((d_12 != NULL) && (d_12 != i_12)))
                                _fail(i_12);
                              else
                                d_12 = i_12;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_12)), not_null(b_12)))));
                  }
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  z_12 = t;
  x_12 :
  if(match_cons(z_12, sym_Match_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      y_12 :
      if(match_cons(a_13, sym_RootApp_1))
        {
          b_13 = ATgetArgument(a_13, 0);
          t = not_null(b_13);
        }
      else
        {
          if(match_cons(a_13, sym_App_2))
            {
              b_13 = ATgetArgument(a_13, 0);
              c_13 = ATgetArgument(a_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(b_13), not_null(c_13));
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
ATerm Mapp0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_Match_1))
    {
      p_13 = ATgetArgument(o_13, 0);
      {
        ATerm r_13 = NULL,s_13 = NULL;
        ATerm w_13 = NULL;
        t = not_null(p_13);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
            t_13 = t;
            k_13 :
            if(match_cons(t_13, sym_RootApp_1))
              {
                u_13 = ATgetArgument(t_13, 0);
                l_13 :
                if(match_cons(u_13, sym_Match_1))
                  {
                    v_13 = ATgetArgument(u_13, 0);
                    {
                      if(((r_13 != NULL) && (r_13 != v_13)))
                        _fail(v_13);
                      else
                        r_13 = v_13;
                      t = not_null(r_13);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1(t, w_0);
          {
            w_13 = t;
            if(((s_13 != NULL) && (s_13 != w_13)))
              _fail(w_13);
            else
              s_13 = w_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_13));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
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
            t = Mapp1_0(t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Build_1))
    {
      r_14 = ATgetArgument(q_14, 0);
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
            ATerm x_14 = NULL;
            ATerm b_15 = NULL;
            t = new_0(t);
            {
              x_14 = t;
              {
                if(((v_14 != NULL) && (v_14 != x_14)))
                  _fail(x_14);
                else
                  v_14 = x_14;
                {
                  t = not_null(r_14);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
                      y_14 = t;
                      f_14 :
                      if(match_cons(y_14, sym_Anno_2))
                        {
                          z_14 = ATgetArgument(y_14, 0);
                          a_15 = ATgetArgument(y_14, 1);
                          {
                            if(((t_14 != NULL) && (t_14 != z_14)))
                              _fail(z_14);
                            else
                              t_14 = z_14;
                            {
                              if(((u_14 != NULL) && (u_14 != a_15)))
                                _fail(a_15);
                              else
                                u_14 = a_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_14));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, x_0);
                    {
                      b_15 = t;
                      if(((w_14 != NULL) && (w_14 != b_15)))
                        _fail(b_15);
                      else
                        w_14 = b_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(t_14))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_14))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_14))));
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
                  ATerm g_15 = NULL;
                  ATerm j_15 = NULL;
                  t = new_0(t);
                  {
                    g_15 = t;
                    {
                      if(((e_15 != NULL) && (e_15 != g_15)))
                        _fail(g_15);
                      else
                        e_15 = g_15;
                      {
                        t = not_null(r_14);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm h_15 = NULL,i_15 = NULL;
                            h_15 = t;
                            j_14 :
                            if(match_cons(h_15, sym_RootApp_1))
                              {
                                i_15 = ATgetArgument(h_15, 0);
                                {
                                  if(((d_15 != NULL) && (d_15 != i_15)))
                                    _fail(i_15);
                                  else
                                    d_15 = i_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_15));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, y_0);
                          {
                            j_15 = t;
                            if(((f_15 != NULL) && (f_15 != j_15)))
                              _fail(j_15);
                            else
                              f_15 = j_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_15))));
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
                    ATerm p_15 = NULL;
                    ATerm t_15 = NULL;
                    t = new_0(t);
                    {
                      p_15 = t;
                      {
                        if(((n_15 != NULL) && (n_15 != p_15)))
                          _fail(p_15);
                        else
                          n_15 = p_15;
                        {
                          t = not_null(r_14);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
                              q_15 = t;
                              n_14 :
                              if(match_cons(q_15, sym_App_2))
                                {
                                  r_15 = ATgetArgument(q_15, 0);
                                  s_15 = ATgetArgument(q_15, 1);
                                  {
                                    if(((l_15 != NULL) && (l_15 != r_15)))
                                      _fail(r_15);
                                    else
                                      l_15 = r_15;
                                    {
                                      if(((m_15 != NULL) && (m_15 != s_15)))
                                        _fail(s_15);
                                      else
                                        m_15 = s_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, z_0);
                            {
                              t_15 = t;
                              if(((o_15 != NULL) && (o_15 != t_15)))
                                _fail(t_15);
                              else
                                o_15 = t_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_15), not_null(m_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_15))));
                  }
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  k_16 = t;
  i_16 :
  if(match_cons(k_16, sym_Build_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      j_16 :
      if(match_cons(l_16, sym_RootApp_1))
        {
          m_16 = ATgetArgument(l_16, 0);
          t = not_null(m_16);
        }
      else
        {
          if(match_cons(l_16, sym_App_2))
            {
              m_16 = ATgetArgument(l_16, 0);
              n_16 = ATgetArgument(l_16, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_16)), not_null(m_16));
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
ATerm As_2 (ATerm t, ATerm y_84 (ATerm), ATerm z_84 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_As_2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        ATerm f_17 = NULL,h_17 = NULL;
        ATerm g_17 = NULL;
        t = SSLgetAnnotations(not_null(z_16));
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
        {
          t = not_null(a_17);
          {
            ATerm j_17 = NULL;
            t = y_84(t);
            {
              h_17 = t;
              {
                t = not_null(b_17);
                {
                  ATerm l_17 = NULL;
                  t = z_84(t);
                  {
                    j_17 = t;
                    {
                      ATerm m_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(h_17), not_null(j_17)), not_null(f_17));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_Prim_2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      {
        ATerm e_18 = NULL,g_18 = NULL;
        ATerm f_18 = NULL;
        t = SSLgetAnnotations(not_null(y_17));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        {
          t = not_null(z_17);
          {
            ATerm i_18 = NULL;
            t = v_80(t);
            {
              g_18 = t;
              {
                t = not_null(a_18);
                {
                  ATerm k_18 = NULL;
                  t = w_80(t);
                  {
                    i_18 = t;
                    {
                      ATerm l_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(g_18), not_null(i_18)), not_null(e_18));
                      {
                        l_18 = t;
                        if(((k_18 != NULL) && (k_18 != l_18)))
                          _fail(l_18);
                        else
                          k_18 = l_18;
                      }
                      t = not_null(k_18);
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
ATerm Explode_2 (ATerm t, ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Explode_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm d_19 = NULL,f_19 = NULL;
        ATerm e_19 = NULL;
        t = SSLgetAnnotations(not_null(x_18));
        {
          e_19 = t;
          if(((d_19 != NULL) && (d_19 != e_19)))
            _fail(e_19);
          else
            d_19 = e_19;
        }
        {
          t = not_null(y_18);
          {
            ATerm h_19 = NULL;
            t = u_84(t);
            {
              f_19 = t;
              {
                t = not_null(z_18);
                {
                  ATerm j_19 = NULL;
                  t = v_84(t);
                  {
                    h_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(f_19), not_null(h_19)), not_null(d_19));
                      {
                        k_19 = t;
                        if(((j_19 != NULL) && (j_19 != k_19)))
                          _fail(k_19);
                        else
                          j_19 = k_19;
                      }
                      t = not_null(j_19);
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
ATerm Op_2 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Op_2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm c_20 = NULL,e_20 = NULL;
        ATerm d_20 = NULL;
        t = SSLgetAnnotations(not_null(w_19));
        {
          d_20 = t;
          if(((c_20 != NULL) && (c_20 != d_20)))
            _fail(d_20);
          else
            c_20 = d_20;
        }
        {
          t = not_null(x_19);
          {
            ATerm g_20 = NULL;
            t = z_82(t);
            {
              e_20 = t;
              {
                t = not_null(y_19);
                {
                  ATerm i_20 = NULL;
                  t = a_83(t);
                  {
                    g_20 = t;
                    {
                      ATerm j_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_20), not_null(g_20)), not_null(c_20));
                      {
                        j_20 = t;
                        if(((i_20 != NULL) && (i_20 != j_20)))
                          _fail(j_20);
                        else
                          i_20 = j_20;
                      }
                      t = not_null(i_20);
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
ATerm pat_td_1 (ATerm t, ATerm n_119 (ATerm))
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_119(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                t = pat_td_1(t, n_119);
                return(t);
              }
              t = fetch_1(t, b_1);
              return(t);
            }
            t = Op_2(t, _id, a_1);
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            {
              ATerm s_10 = t;
              int t_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = pat_td_1(t, n_119);
                    return(t);
                  }
                  t = Explode_2(t, _id, c_1);
                  LocalPopChoice(t_10);
                }
              else
                {
                  t = s_10;
                  {
                    ATerm v_10 = t;
                    int w_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_1 (ATerm t)
                        {
                          t = pat_td_1(t, n_119);
                          return(t);
                        }
                        t = Explode_2(t, d_1, _id);
                        LocalPopChoice(w_10);
                      }
                    else
                      {
                        t = v_10;
                        {
                          ATerm x_10 = t;
                          int z_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_1 (ATerm t)
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_119);
                                  return(t);
                                }
                                t = fetch_1(t, f_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, e_1);
                              LocalPopChoice(z_10);
                            }
                          else
                            {
                              t = x_10;
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_119);
                                  return(t);
                                }
                                t = As_2(t, _id, g_1);
                              }
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_Build_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL,e_21 = NULL;
            ATerm i_21 = NULL;
            t = not_null(b_21);
            {
              ATerm h_1 (ATerm t)
              {
                ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
                f_21 = t;
                s_20 :
                if(match_cons(f_21, sym_RootApp_1))
                  {
                    g_21 = ATgetArgument(f_21, 0);
                    t_20 :
                    if(match_cons(g_21, sym_Build_1))
                      {
                        h_21 = ATgetArgument(g_21, 0);
                        {
                          if(((d_21 != NULL) && (d_21 != h_21)))
                            _fail(h_21);
                          else
                            d_21 = h_21;
                          t = not_null(d_21);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = pat_td_1(t, h_1);
              {
                i_21 = t;
                if(((e_21 != NULL) && (e_21 != i_21)))
                  _fail(i_21);
                else
                  e_21 = i_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_21));
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
              ATerm r_21 = NULL;
              t = not_null(b_21);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
                  n_21 = t;
                  w_20 :
                  if(match_cons(n_21, sym_App_2))
                    {
                      o_21 = ATgetArgument(n_21, 0);
                      q_21 = ATgetArgument(n_21, 1);
                      x_20 :
                      if(match_cons(o_21, sym_Build_1))
                        {
                          p_21 = ATgetArgument(o_21, 0);
                          {
                            if(((l_21 != NULL) && (l_21 != p_21)))
                              _fail(p_21);
                            else
                              l_21 = p_21;
                            {
                              if(((k_21 != NULL) && (k_21 != q_21)))
                                _fail(q_21);
                              else
                                k_21 = q_21;
                              t = not_null(l_21);
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
                t = pat_td_1(t, i_1);
                {
                  r_21 = t;
                  if(((m_21 != NULL) && (m_21 != r_21)))
                    _fail(r_21);
                  else
                    m_21 = r_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_21));
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
ATerm Bapp_0 (ATerm t)
{
  ATerm d_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = d_11;
      {
        ATerm r_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(z_11);
          }
        else
          {
            t = r_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  l_22 :
  if(match_cons(s_22, sym_Lets_2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_22), not_null(u_22));
    }
  else
    {
      if(match_cons(s_22, sym_LChoices_1))
        {
          t_22 = ATgetArgument(s_22, 0);
          m_22 :
          if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
            {
              p_22 = ATgetFirst((ATermList) t_22);
              q_22 = (ATerm) ATgetNext((ATermList) t_22);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_22), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_22)));
            }
          else
            {
              if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                {
                  t = term_j_12;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(s_22, sym_Choices_1))
            {
              t_22 = ATgetArgument(s_22, 0);
              n_22 :
              if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
                {
                  p_22 = ATgetFirst((ATermList) t_22);
                  q_22 = (ATerm) ATgetNext((ATermList) t_22);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_22)));
                }
              else
                {
                  if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                    {
                      t = term_j_12;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(s_22, sym_Seqs_1))
                {
                  t_22 = ATgetArgument(s_22, 0);
                  o_22 :
                  if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
                    {
                      p_22 = ATgetFirst((ATermList) t_22);
                      q_22 = (ATerm) ATgetNext((ATermList) t_22);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_22)));
                    }
                  else
                    {
                      if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                        {
                          t = term_k_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(s_22, sym_DefaultVarDec_1))
                    {
                      t_22 = ATgetArgument(s_22, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_22), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_12), term_n_12));
                    }
                  else
                    {
                      if(match_cons(s_22, sym_InfixApp_3))
                        {
                          t_22 = ATgetArgument(s_22, 0);
                          u_22 = ATgetArgument(s_22, 1);
                          r_22 = ATgetArgument(s_22, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), not_null(t_22))));
                        }
                      else
                        {
                          if(match_cons(s_22, sym_BAM_3))
                            {
                              t_22 = ATgetArgument(s_22, 0);
                              u_22 = ATgetArgument(s_22, 1);
                              r_22 = ATgetArgument(s_22, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(r_22))), not_null(t_22)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_22))));
                            }
                          else
                            {
                              if(match_cons(s_22, sym_AM_2))
                                {
                                  t_22 = ATgetArgument(s_22, 0);
                                  u_22 = ATgetArgument(s_22, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_22), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_22)));
                                }
                              else
                                {
                                  if(match_cons(s_22, sym_MA_2))
                                    {
                                      t_22 = ATgetArgument(s_22, 0);
                                      u_22 = ATgetArgument(s_22, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_22)), not_null(u_22));
                                    }
                                  else
                                    {
                                      if(match_cons(s_22, sym_BA_2))
                                        {
                                          t_22 = ATgetArgument(s_22, 0);
                                          u_22 = ATgetArgument(s_22, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_22)), not_null(t_22));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  h_24 = t;
  e_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      l_24 = ATgetArgument(h_24, 1);
      f_24 :
      if(match_cons(i_24, sym__2))
        {
          j_24 = ATgetArgument(i_24, 0);
          k_24 = ATgetArgument(i_24, 1);
          g_24 :
          if(match_cons(l_24, sym__2))
            {
              m_24 = ATgetArgument(l_24, 0);
              n_24 = ATgetArgument(l_24, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_24)), not_null(j_24)), (ATerm) ATinsert(CheckATermList(not_null(n_24)), not_null(k_24)));
            }
          else
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
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  u_24 :
  if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
    {
      w_24 = ATgetFirst((ATermList) v_24);
      x_24 = (ATerm) ATgetNext((ATermList) v_24);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_24), not_null(x_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  c_25 :
  if(((ATgetType(d_25) == AT_LIST) && ATisEmpty(d_25)))
    {
      t = term_o_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm k_99 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, k_99);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  ATerm p_25 (ATerm t)
  {
    ATerm m_25 = NULL;
    ATerm n_25 = NULL;
    t = not_null(j_25);
    {
      ATerm p_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_12;
        }
      {
        t = new_0(t);
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(m_25)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))));
    return(t);
  }
  ATerm q_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))));
    return(t);
  }
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_Var_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_25(t);
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = q_25(t);
          }
      }
    }
  else
    {
      t = p_25(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_Prim_2))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      {
        ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
        ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
        t = not_null(z_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm s_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_12;
              }
            return(t);
          }
          t = fetch_1(t, j_1);
          {
            t = not_null(z_25);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm k_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, k_1);
                {
                  f_26 = t;
                  u_25 :
                  if(match_cons(f_26, sym__2))
                    {
                      g_26 = ATgetArgument(f_26, 0);
                      h_26 = ATgetArgument(f_26, 1);
                      v_25 :
                      if(match_cons(h_26, sym__2))
                        {
                          i_26 = ATgetArgument(h_26, 0);
                          j_26 = ATgetArgument(h_26, 1);
                          {
                            if(((c_26 != NULL) && (c_26 != g_26)))
                              _fail(g_26);
                            else
                              c_26 = g_26;
                            {
                              if(((d_26 != NULL) && (d_26 != i_26)))
                                _fail(i_26);
                              else
                                d_26 = i_26;
                              if(((e_26 != NULL) && (e_26 != j_26)))
                                _fail(j_26);
                              else
                                e_26 = j_26;
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
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(y_25), not_null(e_26))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm))
{
  ATerm m_26 (ATerm t)
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        t = m_26(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = d_105(t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm f_105 (ATerm))
{
  t = repeat_2(t, f_105, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_Wld_0))
    {
      ATerm t_26 = NULL,v_26 = NULL;
      ATerm v_12;
      v_12 = t;
      {
        ATerm u_26 = NULL;
        t = SSLgetAnnotations(not_null(r_26));
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
      }
      t = v_12;
      {
        ATerm w_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(t_26));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, l_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm o_84 (ATerm), ATerm p_84 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_App_2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(h_27);
          {
            ATerm q_27 = NULL;
            t = o_84(t);
            {
              o_27 = t;
              {
                t = not_null(i_27);
                {
                  ATerm s_27 = NULL;
                  t = p_84(t);
                  {
                    q_27 = t;
                    {
                      ATerm t_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(o_27), not_null(q_27)), not_null(m_27));
                      {
                        t_27 = t;
                        if(((s_27 != NULL) && (s_27 != t_27)))
                          _fail(t_27);
                        else
                          s_27 = t_27;
                      }
                      t = not_null(s_27);
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
ATerm Con_3 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Con_3))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      j_28 = ATgetArgument(g_28, 2);
      {
        ATerm o_28 = NULL,q_28 = NULL;
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
        {
          t = not_null(h_28);
          {
            ATerm s_28 = NULL;
            t = l_84(t);
            {
              q_28 = t;
              {
                t = not_null(i_28);
                {
                  ATerm u_28 = NULL;
                  t = m_84(t);
                  {
                    s_28 = t;
                    {
                      t = not_null(j_28);
                      {
                        ATerm w_28 = NULL;
                        t = n_84(t);
                        {
                          u_28 = t;
                          {
                            ATerm x_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(q_28), not_null(s_28), not_null(u_28)), not_null(o_28));
                            {
                              x_28 = t;
                              if(((w_28 != NULL) && (w_28 != x_28)))
                                _fail(x_28);
                              else
                                w_28 = x_28;
                            }
                            t = not_null(w_28);
                          }
                        }
                      }
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
ATerm pureterm_0 (ATerm t)
{
  ATerm f_13 = t;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, m_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  i_29 = t;
  g_29 :
  if(match_cons(i_29, sym_SRule_1))
    {
      j_29 = ATgetArgument(i_29, 0);
      h_29 :
      if(match_cons(j_29, sym_StratRule_3))
        {
          k_29 = ATgetArgument(j_29, 0);
          l_29 = ATgetArgument(j_29, 1);
          m_29 = ATgetArgument(j_29, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_29)), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_29))), not_null(k_29)));
        }
      else
        {
          if(match_cons(j_29, sym_Rule_3))
            {
              k_29 = ATgetArgument(j_29, 0);
              l_29 = ATgetArgument(j_29, 1);
              m_29 = ATgetArgument(j_29, 2);
              {
                t = not_null(k_29);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(l_29);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(l_29))), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_29))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_29))));
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
ATerm oncetd_1 (ATerm t, ATerm z_93 (ATerm))
{
  ATerm v_29 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_93(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = _one(t, v_29);
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  k_30 = t;
  i_30 :
  if(match_cons(k_30, sym_SRule_1))
    {
      l_30 = ATgetArgument(k_30, 0);
      j_30 :
      if(match_cons(l_30, sym_Rule_3))
        {
          m_30 = ATgetArgument(l_30, 0);
          n_30 = ATgetArgument(l_30, 1);
          o_30 = ATgetArgument(l_30, 2);
          {
            ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
            ATerm a_31 = NULL;
            ATerm z_33 = NULL;
            t = new_0(t);
            {
              a_31 = t;
              {
                if(((x_30 != NULL) && (x_30 != a_31)))
                  _fail(a_31);
                else
                  x_30 = a_31;
                {
                  t = not_null(m_30);
                  {
                    ATerm h_34 = NULL;
                    ATerm n_1 (ATerm t)
                    {
                      ATerm b_31 = NULL,t_31 = NULL,n_33 = NULL,o_33 = NULL,y_33 = NULL;
                      b_31 = t;
                      z_29 :
                      if(match_cons(b_31, sym_Con_3))
                        {
                          t_31 = ATgetArgument(b_31, 0);
                          o_33 = ATgetArgument(b_31, 1);
                          y_33 = ATgetArgument(b_31, 2);
                          a_30 :
                          if(match_cons(t_31, sym_Var_1))
                            {
                              n_33 = ATgetArgument(t_31, 0);
                              {
                                if(((w_30 != NULL) && (w_30 != n_33)))
                                  _fail(n_33);
                                else
                                  w_30 = n_33;
                                {
                                  if(((u_30 != NULL) && (u_30 != o_33)))
                                    _fail(o_33);
                                  else
                                    u_30 = o_33;
                                  {
                                    if(((s_30 != NULL) && (s_30 != y_33)))
                                      _fail(y_33);
                                    else
                                      s_30 = y_33;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_30));
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
                    t = oncetd_1(t, n_1);
                    {
                      z_33 = t;
                      {
                        if(((y_30 != NULL) && (y_30 != z_33)))
                          _fail(z_33);
                        else
                          y_30 = z_33;
                        {
                          t = not_null(n_30);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
                              a_34 = t;
                              d_30 :
                              if(match_cons(a_34, sym_Con_3))
                                {
                                  b_34 = ATgetArgument(a_34, 0);
                                  d_34 = ATgetArgument(a_34, 1);
                                  e_34 = ATgetArgument(a_34, 2);
                                  e_30 :
                                  if(match_cons(b_34, sym_Var_1))
                                    {
                                      c_34 = ATgetArgument(b_34, 0);
                                      f_30 :
                                      if(match_cons(e_34, sym_Call_2))
                                        {
                                          f_34 = ATgetArgument(e_34, 0);
                                          g_34 = ATgetArgument(e_34, 1);
                                          g_30 :
                                          if(((ATgetType(g_34) == AT_LIST) && ATisEmpty(g_34)))
                                            {
                                              {
                                                if(((w_30 != NULL) && (w_30 != c_34)))
                                                  _fail(c_34);
                                                else
                                                  w_30 = c_34;
                                                {
                                                  if(((v_30 != NULL) && (v_30 != d_34)))
                                                    _fail(d_34);
                                                  else
                                                    v_30 = d_34;
                                                  {
                                                    if(((t_30 != NULL) && (t_30 != f_34)))
                                                      _fail(f_34);
                                                    else
                                                      t_30 = f_34;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30));
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
                              return(t);
                            }
                            t = oncetd_1(t, o_1);
                            {
                              h_34 = t;
                              if(((z_30 != NULL) && (z_30 != h_34)))
                                _fail(h_34);
                              else
                                z_30 = h_34;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_30)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_30), not_null(z_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_30), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(t_30), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_30), not_null(v_30), term_k_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30)))))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm m_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
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
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(q_13);
    }
  else
    {
      t = m_13;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm j_92 (ATerm))
{
  t = j_92(t);
  {
    ATerm p_1 (ATerm t)
    {
      t = topdown_1(t, j_92);
      return(t);
    }
    t = _all(t, p_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
        }
      }
    {
      ATerm r_1 (ATerm t)
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
            {
              ATerm g_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = g_14;
                  {
                    ATerm i_14 = t;
                    int k_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(k_14);
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm l_14 = t;
                          int m_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(m_14);
                            }
                          else
                            {
                              t = l_14;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_2(t, r_1, _id);
    }
    return(t);
  }
  t = topdown_1(t, q_1);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  v_35 = t;
  g_35 :
  if(match_cons(v_35, sym_Seq_2))
    {
      w_35 = ATgetArgument(v_35, 0);
      a_36 = ATgetArgument(v_35, 1);
      h_35 :
      if(match_cons(w_35, sym_Call_2))
        {
          x_35 = ATgetArgument(w_35, 0);
          z_35 = ATgetArgument(w_35, 1);
          i_35 :
          if(match_cons(x_35, sym_SVar_1))
            {
              y_35 = ATgetArgument(x_35, 0);
              j_35 :
              if(match_string(y_35, "mark"))
                {
                  k_35 :
                  if(((ATgetType(z_35) == AT_LIST) && ATisEmpty(z_35)))
                    {
                      l_35 :
                      if(match_cons(a_36, sym_Seq_2))
                        {
                          b_36 = ATgetArgument(a_36, 0);
                          d_36 = ATgetArgument(a_36, 1);
                          m_35 :
                          if(match_cons(b_36, sym_Match_1))
                            {
                              c_36 = ATgetArgument(b_36, 0);
                              n_35 :
                              if(match_cons(d_36, sym_Seq_2))
                                {
                                  e_36 = ATgetArgument(d_36, 0);
                                  g_36 = ATgetArgument(d_36, 1);
                                  o_35 :
                                  if(match_cons(e_36, sym_Where_1))
                                    {
                                      f_36 = ATgetArgument(e_36, 0);
                                      p_35 :
                                      if(match_cons(g_36, sym_Build_1))
                                        {
                                          h_36 = ATgetArgument(g_36, 0);
                                          {
                                            ATerm o_14 = t;
                                            int s_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
                                                ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
                                                t = term_b_16;
                                                {
                                                  ATerm s_1 (ATerm t)
                                                  {
                                                    t = term_c_16;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, s_1);
                                                  {
                                                    w_36 = t;
                                                    v_34 :
                                                    if(match_cons(w_36, sym_Defined_2))
                                                      {
                                                        x_36 = ATgetArgument(w_36, 0);
                                                        y_36 = ATgetArgument(w_36, 1);
                                                        w_34 :
                                                        if(match_string(x_36, "s_0"))
                                                          {
                                                            ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
                                                            if(((t_36 != NULL) && (t_36 != y_36)))
                                                              _fail(y_36);
                                                            else
                                                              t_36 = y_36;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(t_36), not_null(c_36), (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(h_36)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  z_36 = t;
                                                                  u_34 :
                                                                  if(match_cons(z_36, sym__2))
                                                                    {
                                                                      a_37 = ATgetArgument(z_36, 0);
                                                                      b_37 = ATgetArgument(z_36, 1);
                                                                      {
                                                                        if(((u_36 != NULL) && (u_36 != a_37)))
                                                                          _fail(a_37);
                                                                        else
                                                                          u_36 = a_37;
                                                                        if(((v_36 != NULL) && (v_36 != b_37)))
                                                                          _fail(b_37);
                                                                        else
                                                                          v_36 = b_37;
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
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(u_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_36))));
                                                LocalPopChoice(s_14);
                                              }
                                            else
                                              {
                                                t = o_14;
                                                {
                                                  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
                                                  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
                                                  t = term_b_16;
                                                  {
                                                    ATerm t_1 (ATerm t)
                                                    {
                                                      t = term_c_16;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, t_1);
                                                    {
                                                      l_37 = t;
                                                      e_35 :
                                                      if(match_cons(l_37, sym_Defined_2))
                                                        {
                                                          m_37 = ATgetArgument(l_37, 0);
                                                          n_37 = ATgetArgument(l_37, 1);
                                                          f_35 :
                                                          if(match_string(m_37, "h_0"))
                                                            {
                                                              ATerm o_37 = NULL;
                                                              if(((g_37 != NULL) && (g_37 != n_37)))
                                                                _fail(n_37);
                                                              else
                                                                g_37 = n_37;
                                                              {
                                                                ATerm p_37 = NULL;
                                                                t = not_null(g_37);
                                                                {
                                                                  o_37 = t;
                                                                  {
                                                                    if(((i_37 != NULL) && (i_37 != o_37)))
                                                                      _fail(o_37);
                                                                    else
                                                                      i_37 = o_37;
                                                                    {
                                                                      t = not_null(c_36);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          p_37 = t;
                                                                          {
                                                                            if(((h_37 != NULL) && (h_37 != p_37)))
                                                                              _fail(p_37);
                                                                            else
                                                                              h_37 = p_37;
                                                                            {
                                                                              ATerm u_1 (ATerm t)
                                                                              {
                                                                                t = term_d_16;
                                                                                return(t);
                                                                              }
                                                                              ATerm y_1 (ATerm t)
                                                                              {
                                                                                ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                                                                                ATerm z_1 (ATerm t)
                                                                                {
                                                                                  ATerm q_37 = NULL,s_37 = NULL;
                                                                                  ATerm r_37 = NULL;
                                                                                  r_37 = t;
                                                                                  if(((q_37 != NULL) && (q_37 != r_37)))
                                                                                    _fail(r_37);
                                                                                  else
                                                                                    q_37 = r_37;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_37));
                                                                                    {
                                                                                      s_37 = t;
                                                                                      {
                                                                                        ATerm e_16;
                                                                                        e_16 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(i_37), not_null(s_37)), term_g_16);
                                                                                          {
                                                                                            ATerm a_2 (ATerm t)
                                                                                            {
                                                                                              t = term_d_16;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, a_2);
                                                                                          }
                                                                                        }
                                                                                        t = e_16;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, z_1);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(h_36));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      u_37 = t;
                                                                                      d_35 :
                                                                                      if(match_cons(u_37, sym__2))
                                                                                        {
                                                                                          v_37 = ATgetArgument(u_37, 0);
                                                                                          w_37 = ATgetArgument(u_37, 1);
                                                                                          {
                                                                                            if(((j_37 != NULL) && (j_37 != v_37)))
                                                                                              _fail(v_37);
                                                                                            else
                                                                                              j_37 = v_37;
                                                                                            if(((k_37 != NULL) && (k_37 != w_37)))
                                                                                              _fail(w_37);
                                                                                            else
                                                                                              k_37 = w_37;
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
                                                                              t = scope_2(t, u_1, y_1);
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
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(j_37)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_36))));
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
            }
          else
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
ATerm Replace_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  ATerm y_39 (ATerm t)
  {
    ATerm q_39 = NULL,r_39 = NULL;
    t = not_null(f_39);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        q_39 = t;
        q_38 :
        if(match_cons(q_39, sym_Defined_1))
          {
            r_39 = ATgetArgument(q_39, 0);
            r_38 :
            if(!(match_string(r_39, "m_0")))
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
    t = not_null(h_39);
    return(t);
  }
  ATerm z_39 (ATerm t)
  {
    ATerm v_39 = NULL,w_39 = NULL;
    t = not_null(f_39);
    {
      ATerm c_2 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        v_39 = t;
        s_38 :
        if(match_cons(v_39, sym_Defined_1))
          {
            w_39 = ATgetArgument(v_39, 0);
            t_38 :
            if(!(match_string(w_39, "j_0")))
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
    t = not_null(h_39);
    return(t);
  }
  f_39 = t;
  u_38 :
  if(match_cons(f_39, sym_App_2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      v_38 :
      if(match_cons(h_39, sym_Var_1))
        {
          e_39 = ATgetArgument(h_39, 0);
          {
            ATerm h_16 = t;
            int o_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_39 = NULL,m_39 = NULL;
                t = not_null(f_39);
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_d_16;
                    return(t);
                  }
                  t = rewrite_1(t, d_2);
                  {
                    l_39 = t;
                    k_38 :
                    if(match_cons(l_39, sym_Defined_1))
                      {
                        m_39 = ATgetArgument(l_39, 0);
                        l_38 :
                        if(!(match_string(m_39, "v_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_39));
                LocalPopChoice(o_16);
              }
            else
              {
                t = h_16;
                {
                  ATerm p_16 = t;
                  int q_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_39(t);
                      LocalPopChoice(q_16);
                    }
                  else
                    {
                      t = p_16;
                      t = z_39(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_39(t);
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              t = z_39(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  b_40 :
  if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
    {
      d_40 = ATgetFirst((ATermList) c_40);
      e_40 = (ATerm) ATgetNext((ATermList) c_40);
      t = not_null(e_40);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym__2))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      {
        ATerm t_16;
        t_16 = t;
        {
          ATerm q_40 = NULL;
          ATerm r_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_40), not_null(n_40));
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                t = (ATerm) ATempty;
              }
            {
              r_40 = t;
              if(((q_40 != NULL) && (q_40 != r_40)))
                _fail(r_40);
              else
                q_40 = r_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_40), not_null(n_40), not_null(q_40));
            t = table_put_0(t);
          }
        }
        t = t_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_110 (ATerm))
{
  ATerm y_40 = NULL,b_41 = NULL,c_41 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm h_41 = NULL;
    ATerm i_41 = NULL,m_41 = NULL,n_41 = NULL;
    t = q_110(t);
    {
      h_41 = t;
      {
        if(((c_41 != NULL) && (c_41 != h_41)))
          _fail(h_41);
        else
          c_41 = h_41;
        {
          ATerm x_16 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), term_d_17);
              t = table_get_0(t);
              LocalPopChoice(c_17);
            }
          else
            {
              t = x_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_41 = t;
            x_40 :
            if(((ATgetType(i_41) == AT_LIST) && !(ATisEmpty(i_41))))
              {
                m_41 = ATgetFirst((ATermList) i_41);
                n_41 = (ATerm) ATgetNext((ATermList) i_41);
                {
                  if(((b_41 != NULL) && (b_41 != m_41)))
                    _fail(m_41);
                  else
                    b_41 = m_41;
                  {
                    if(((y_40 != NULL) && (y_40 != n_41)))
                      _fail(n_41);
                    else
                      y_40 = n_41;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_41), term_d_17, not_null(y_40));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_41);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm o_41 = NULL;
                              o_41 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(o_41));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, e_2);
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
  t = w_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_96 (ATerm), ATerm b_96 (ATerm))
{
  ATerm e_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_96(t);
      t = b_96(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = e_17;
      {
        t = b_96(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_110 (ATerm))
{
  ATerm z_41 = NULL;
  ATerm k_17;
  k_17 = t;
  {
    ATerm a_42 = NULL;
    ATerm f_42 = NULL;
    t = p_110(t);
    {
      a_42 = t;
      {
        if(((z_41 != NULL) && (z_41 != a_42)))
          _fail(a_42);
        else
          z_41 = a_42;
        {
          ATerm g_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_41), term_d_17);
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = (ATerm) ATempty;
              }
            {
              g_42 = t;
              if(((f_42 != NULL) && (f_42 != g_42)))
                _fail(g_42);
              else
                f_42 = g_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_41), term_d_17, (ATerm) ATinsert(CheckATermList(not_null(f_42)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_17;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_110 (ATerm), ATerm s_110 (ATerm))
{
  t = begin_scope_1(t, r_110);
  {
    ATerm f_2 (ATerm t)
    {
      t = end_scope_1(t, r_110);
      return(t);
    }
    t = restore_always_2(t, s_110, f_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym__3))
    {
      o_42 = ATgetArgument(n_42, 0);
      p_42 = ATgetArgument(n_42, 1);
      q_42 = ATgetArgument(n_42, 2);
      {
        ATerm u_42 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_d_16;
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          ATerm x_42 = NULL;
          t = not_null(p_42);
          {
            t = tvars_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm v_42 = NULL;
                v_42 = t;
                {
                  ATerm p_17;
                  p_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(o_42), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_42))), term_r_17);
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = term_d_16;
                        return(t);
                      }
                      t = assert_1(t, j_2);
                    }
                  }
                  t = p_17;
                }
                return(t);
              }
              t = map_1(t, i_2);
              {
                t = not_null(q_42);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    x_42 = t;
                    if(((u_42 != NULL) && (u_42 != x_42)))
                      _fail(x_42);
                    else
                      u_42 = x_42;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, g_2, h_2);
        t = not_null(u_42);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  x_43 = t;
  p_43 :
  if(match_cons(x_43, sym_Seq_2))
    {
      y_43 = ATgetArgument(x_43, 0);
      c_44 = ATgetArgument(x_43, 1);
      q_43 :
      if(match_cons(y_43, sym_Call_2))
        {
          z_43 = ATgetArgument(y_43, 0);
          b_44 = ATgetArgument(y_43, 1);
          r_43 :
          if(match_cons(z_43, sym_SVar_1))
            {
              a_44 = ATgetArgument(z_43, 0);
              s_43 :
              if(match_string(a_44, "mark"))
                {
                  t_43 :
                  if(((ATgetType(b_44) == AT_LIST) && ATisEmpty(b_44)))
                    {
                      u_43 :
                      if(match_cons(c_44, sym_Seq_2))
                        {
                          d_44 = ATgetArgument(c_44, 0);
                          f_44 = ATgetArgument(c_44, 1);
                          v_43 :
                          if(match_cons(d_44, sym_Match_1))
                            {
                              e_44 = ATgetArgument(d_44, 0);
                              w_43 :
                              if(match_cons(f_44, sym_Build_1))
                                {
                                  g_44 = ATgetArgument(f_44, 0);
                                  {
                                    ATerm s_17 = t;
                                    int t_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm k_44 = NULL,l_44 = NULL;
                                        ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
                                        t = term_v_17;
                                        {
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_w_17;
                                            return(t);
                                          }
                                          t = rewrite_1(t, k_2);
                                          {
                                            m_44 = t;
                                            f_43 :
                                            if(match_cons(m_44, sym_Defined_2))
                                              {
                                                n_44 = ATgetArgument(m_44, 0);
                                                o_44 = ATgetArgument(m_44, 1);
                                                g_43 :
                                                if(match_string(n_44, "p_0"))
                                                  {
                                                    ATerm p_44 = NULL;
                                                    if(((k_44 != NULL) && (k_44 != o_44)))
                                                      _fail(o_44);
                                                    else
                                                      k_44 = o_44;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_44), not_null(e_44), not_null(g_44));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          p_44 = t;
                                                          if(((l_44 != NULL) && (l_44 != p_44)))
                                                            _fail(p_44);
                                                          else
                                                            l_44 = p_44;
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
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_44)), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_44)));
                                        LocalPopChoice(t_17);
                                      }
                                    else
                                      {
                                        t = s_17;
                                        {
                                          ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
                                          ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
                                          t = term_v_17;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              t = term_w_17;
                                              return(t);
                                            }
                                            t = rewrite_1(t, l_2);
                                            {
                                              x_44 = t;
                                              n_43 :
                                              if(match_cons(x_44, sym_Defined_2))
                                                {
                                                  y_44 = ATgetArgument(x_44, 0);
                                                  z_44 = ATgetArgument(x_44, 1);
                                                  o_43 :
                                                  if(match_string(y_44, "f_0"))
                                                    {
                                                      ATerm a_45 = NULL;
                                                      if(((t_44 != NULL) && (t_44 != z_44)))
                                                        _fail(z_44);
                                                      else
                                                        t_44 = z_44;
                                                      {
                                                        ATerm b_45 = NULL;
                                                        t = not_null(t_44);
                                                        {
                                                          a_45 = t;
                                                          {
                                                            if(((v_44 != NULL) && (v_44 != a_45)))
                                                              _fail(a_45);
                                                            else
                                                              v_44 = a_45;
                                                            {
                                                              t = not_null(e_44);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  b_45 = t;
                                                                  {
                                                                    if(((u_44 != NULL) && (u_44 != b_45)))
                                                                      _fail(b_45);
                                                                    else
                                                                      u_44 = b_45;
                                                                    {
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        t = term_d_16;
                                                                        return(t);
                                                                      }
                                                                      ATerm n_2 (ATerm t)
                                                                      {
                                                                        ATerm g_45 = NULL;
                                                                        ATerm o_2 (ATerm t)
                                                                        {
                                                                          ATerm c_45 = NULL,e_45 = NULL;
                                                                          ATerm d_45 = NULL;
                                                                          d_45 = t;
                                                                          if(((c_45 != NULL) && (c_45 != d_45)))
                                                                            _fail(d_45);
                                                                          else
                                                                            c_45 = d_45;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_45));
                                                                            {
                                                                              e_45 = t;
                                                                              {
                                                                                ATerm b_18;
                                                                                b_18 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(v_44), not_null(e_45)), term_d_18);
                                                                                  {
                                                                                    ATerm p_2 (ATerm t)
                                                                                    {
                                                                                      t = term_d_16;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, p_2);
                                                                                  }
                                                                                }
                                                                                t = b_18;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, o_2);
                                                                        {
                                                                          t = not_null(g_44);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              g_45 = t;
                                                                              if(((w_44 != NULL) && (w_44 != g_45)))
                                                                                _fail(g_45);
                                                                              else
                                                                                w_44 = g_45;
                                                                            }
                                                                          }
                                                                        }
                                                                        return(t);
                                                                      }
                                                                      t = scope_2(t, m_2, n_2);
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
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_44)), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_44)));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupOverConstructor_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  b_46 = t;
  u_45 :
  if(match_cons(b_46, sym_App_2))
    {
      c_46 = ATgetArgument(b_46, 0);
      i_46 = ATgetArgument(b_46, 1);
      v_45 :
      if(match_cons(c_46, sym_Call_2))
        {
          d_46 = ATgetArgument(c_46, 0);
          f_46 = ATgetArgument(c_46, 1);
          w_45 :
          if(match_cons(d_46, sym_SVar_1))
            {
              e_46 = ATgetArgument(d_46, 0);
              x_45 :
              if(match_string(e_46, "bottomup_1"))
                {
                  y_45 :
                  if(((ATgetType(f_46) == AT_LIST) && !(ATisEmpty(f_46))))
                    {
                      g_46 = ATgetFirst((ATermList) f_46);
                      h_46 = (ATerm) ATgetNext((ATermList) f_46);
                      z_45 :
                      if(((ATgetType(h_46) == AT_LIST) && ATisEmpty(h_46)))
                        {
                          a_46 :
                          if(match_cons(i_46, sym_Op_2))
                            {
                              j_46 = ATgetArgument(i_46, 0);
                              k_46 = ATgetArgument(i_46, 1);
                              {
                                ATerm o_46 = NULL;
                                ATerm r_46 = NULL;
                                t = not_null(k_46);
                                {
                                  ATerm q_2 (ATerm t)
                                  {
                                    ATerm p_46 = NULL;
                                    p_46 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, not_null(g_46))), not_null(p_46));
                                    return(t);
                                  }
                                  t = map_1(t, q_2);
                                  {
                                    r_46 = t;
                                    if(((o_46 != NULL) && (o_46 != r_46)))
                                      _fail(r_46);
                                    else
                                      o_46 = r_46;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_46), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_46), not_null(o_46)));
                              }
                            }
                          else
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
ATerm IntroduceApp_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
  y_46 = t;
  w_46 :
  if(match_cons(y_46, sym_Seq_2))
    {
      z_46 = ATgetArgument(y_46, 0);
      b_47 = ATgetArgument(y_46, 1);
      x_46 :
      if(match_cons(z_46, sym_Build_1))
        {
          a_47 = ATgetArgument(z_46, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(b_47), not_null(a_47)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  m_47 = t;
  i_47 :
  if(match_cons(m_47, sym_LChoice_2))
    {
      n_47 = ATgetArgument(m_47, 0);
      q_47 = ATgetArgument(m_47, 1);
      j_47 :
      if(match_cons(n_47, sym_LChoice_2))
        {
          o_47 = ATgetArgument(n_47, 0);
          p_47 = ATgetArgument(n_47, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_47), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_47), not_null(q_47)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(m_47, sym_Seq_2))
        {
          n_47 = ATgetArgument(m_47, 0);
          q_47 = ATgetArgument(m_47, 1);
          k_47 :
          if(match_cons(n_47, sym_Seq_2))
            {
              o_47 = ATgetArgument(n_47, 0);
              p_47 = ATgetArgument(n_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_47), not_null(q_47)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_47, sym_Choice_2))
            {
              n_47 = ATgetArgument(m_47, 0);
              q_47 = ATgetArgument(m_47, 1);
              l_47 :
              if(match_cons(n_47, sym_Choice_2))
                {
                  o_47 = ATgetArgument(n_47, 0);
                  p_47 = ATgetArgument(n_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_47), (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_47), not_null(q_47)));
                }
              else
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
ATerm SeqOverScopeR_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  g_48 = t;
  e_48 :
  if(match_cons(g_48, sym_Seq_2))
    {
      h_48 = ATgetArgument(g_48, 0);
      k_48 = ATgetArgument(g_48, 1);
      f_48 :
      if(match_cons(h_48, sym_Scope_2))
        {
          i_48 = ATgetArgument(h_48, 0);
          j_48 = ATgetArgument(h_48, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_48), not_null(k_48)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverLChoiceR_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  u_48 = t;
  s_48 :
  if(match_cons(u_48, sym_Seq_2))
    {
      v_48 = ATgetArgument(u_48, 0);
      y_48 = ATgetArgument(u_48, 1);
      t_48 :
      if(match_cons(v_48, sym_LChoice_2))
        {
          w_48 = ATgetArgument(v_48, 0);
          x_48 = ATgetArgument(v_48, 1);
          {
            ATerm d_49 = NULL,e_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_18, not_null(y_48));
            {
              ATerm r_2 (ATerm t)
              {
                t = term_n_18;
                return(t);
              }
              t = rewrite_1(t, r_2);
              {
                d_49 = t;
                q_48 :
                if(match_cons(d_49, sym_Defined_1))
                  {
                    e_49 = ATgetArgument(d_49, 0);
                    r_48 :
                    if(!(match_string(e_49, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(w_48), not_null(y_48)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_48), not_null(y_48)));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverChoiceR_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  l_49 = t;
  j_49 :
  if(match_cons(l_49, sym_Seq_2))
    {
      m_49 = ATgetArgument(l_49, 0);
      p_49 = ATgetArgument(l_49, 1);
      k_49 :
      if(match_cons(m_49, sym_Choice_2))
        {
          n_49 = ATgetArgument(m_49, 0);
          o_49 = ATgetArgument(m_49, 1);
          {
            ATerm u_49 = NULL,v_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_18, not_null(p_49));
            {
              ATerm s_2 (ATerm t)
              {
                t = term_p_18;
                return(t);
              }
              t = rewrite_1(t, s_2);
              {
                u_49 = t;
                h_49 :
                if(match_cons(u_49, sym_Defined_1))
                  {
                    v_49 = ATgetArgument(u_49, 0);
                    i_49 :
                    if(!(match_string(v_49, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(n_49), not_null(p_49)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_49), not_null(p_49)));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fuse_with_bottomup_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0(t);
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm u_18 = t;
                int v_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0(t);
                    LocalPopChoice(v_18);
                  }
                else
                  {
                    t = u_18;
                    {
                      ATerm a_19 = t;
                      int b_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0(t);
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
                                t = IntroduceApp_0(t);
                                LocalPopChoice(g_19);
                              }
                            else
                              {
                                t = c_19;
                                t = BottomupOverConstructor_0(t);
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
  t = innermost_1(t, t_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  a_50 = t;
  y_49 :
  if(match_cons(a_50, sym_Seq_2))
    {
      b_50 = ATgetArgument(a_50, 0);
      c_50 = ATgetArgument(a_50, 1);
      z_49 :
      if(match_cons(c_50, sym_Scope_2))
        {
          d_50 = ATgetArgument(c_50, 0);
          e_50 = ATgetArgument(c_50, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_50), not_null(e_50)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverLChoiceL_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  m_50 = t;
  k_50 :
  if(match_cons(m_50, sym_Seq_2))
    {
      n_50 = ATgetArgument(m_50, 0);
      r_50 = ATgetArgument(m_50, 1);
      l_50 :
      if(match_cons(r_50, sym_LChoice_2))
        {
          s_50 = ATgetArgument(r_50, 0);
          t_50 = ATgetArgument(r_50, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(n_50), not_null(s_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_50), not_null(t_50)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverChoiceL_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL;
  b_51 = t;
  z_50 :
  if(match_cons(b_51, sym_Seq_2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      a_51 :
      if(match_cons(d_51, sym_Choice_2))
        {
          e_51 = ATgetArgument(d_51, 0);
          f_51 = ATgetArgument(d_51, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(c_51), not_null(e_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_51), not_null(f_51)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    t = bottomup_1(t, k_92);
    return(t);
  }
  t = _all(t, u_2);
  t = k_92(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm i_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_107(t);
        t = bottomup_1(t, v_2);
        LocalPopChoice(l_19);
      }
    else
      {
        t = i_19;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, v_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0(t);
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
              t = SeqOverLChoiceL_0(t);
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              t = SeqOverScopeL_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1(t, w_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm q_51 = NULL,r_51 = NULL;
  q_51 = t;
  p_51 :
  if(match_cons(q_51, sym_Build_1))
    {
      r_51 = ATgetArgument(q_51, 0);
      {
        ATerm u_51 = NULL,w_51 = NULL;
        ATerm v_51 = NULL;
        t = SSLgetAnnotations(not_null(q_51));
        {
          v_51 = t;
          if(((u_51 != NULL) && (u_51 != v_51)))
            _fail(v_51);
          else
            u_51 = v_51;
        }
        {
          t = not_null(r_51);
          {
            ATerm y_51 = NULL;
            t = a_81(t);
            {
              w_51 = t;
              {
                ATerm z_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(w_51)), not_null(u_51));
                {
                  z_51 = t;
                  if(((y_51 != NULL) && (y_51 != z_51)))
                    _fail(z_51);
                  else
                    y_51 = z_51;
                }
                t = not_null(y_51);
              }
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
ATerm Seq_2 (ATerm t, ATerm q_81 (ATerm), ATerm r_81 (ATerm))
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym_Seq_2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      {
        ATerm q_52 = NULL,s_52 = NULL;
        ATerm r_52 = NULL;
        t = SSLgetAnnotations(not_null(k_52));
        {
          r_52 = t;
          if(((q_52 != NULL) && (q_52 != r_52)))
            _fail(r_52);
          else
            q_52 = r_52;
        }
        {
          t = not_null(l_52);
          {
            ATerm u_52 = NULL;
            t = q_81(t);
            {
              s_52 = t;
              {
                t = not_null(m_52);
                {
                  ATerm w_52 = NULL;
                  t = r_81(t);
                  {
                    u_52 = t;
                    {
                      ATerm x_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(s_52), not_null(u_52)), not_null(q_52));
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
ATerm Match_1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm i_53 = NULL,j_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym_Match_1))
    {
      j_53 = ATgetArgument(i_53, 0);
      {
        ATerm m_53 = NULL,o_53 = NULL;
        ATerm n_53 = NULL;
        t = SSLgetAnnotations(not_null(i_53));
        {
          n_53 = t;
          if(((m_53 != NULL) && (m_53 != n_53)))
            _fail(n_53);
          else
            m_53 = n_53;
        }
        {
          t = not_null(j_53);
          {
            ATerm q_53 = NULL;
            t = z_80(t);
            {
              o_53 = t;
              {
                ATerm r_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(o_53)), not_null(m_53));
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
ATerm LChoice_2 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm))
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym_LChoice_2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      {
        ATerm i_54 = NULL,k_54 = NULL;
        ATerm j_54 = NULL;
        t = SSLgetAnnotations(not_null(c_54));
        {
          j_54 = t;
          if(((i_54 != NULL) && (i_54 != j_54)))
            _fail(j_54);
          else
            i_54 = j_54;
        }
        {
          t = not_null(d_54);
          {
            ATerm m_54 = NULL;
            t = u_81(t);
            {
              k_54 = t;
              {
                t = not_null(e_54);
                {
                  ATerm o_54 = NULL;
                  t = v_81(t);
                  {
                    m_54 = t;
                    {
                      ATerm p_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(k_54), not_null(m_54)), not_null(i_54));
                      {
                        p_54 = t;
                        if(((o_54 != NULL) && (o_54 != p_54)))
                          _fail(p_54);
                        else
                          o_54 = p_54;
                      }
                      t = not_null(o_54);
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
ATerm Choice_2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_Choice_2))
    {
      f_55 = ATgetArgument(e_55, 0);
      g_55 = ATgetArgument(e_55, 1);
      {
        ATerm k_55 = NULL,m_55 = NULL;
        ATerm l_55 = NULL;
        t = SSLgetAnnotations(not_null(e_55));
        {
          l_55 = t;
          if(((k_55 != NULL) && (k_55 != l_55)))
            _fail(l_55);
          else
            k_55 = l_55;
        }
        {
          t = not_null(f_55);
          {
            ATerm o_55 = NULL;
            t = s_81(t);
            {
              m_55 = t;
              {
                t = not_null(g_55);
                {
                  ATerm q_55 = NULL;
                  t = t_81(t);
                  {
                    o_55 = t;
                    {
                      ATerm r_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(m_55), not_null(o_55)), not_null(k_55));
                      {
                        r_55 = t;
                        if(((q_55 != NULL) && (q_55 != r_55)))
                          _fail(r_55);
                        else
                          q_55 = r_55;
                      }
                      t = not_null(q_55);
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
ATerm inline_rules_0 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = t;
      int t_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2(t, inline_rules_0, inline_rules_0);
          LocalPopChoice(t_19);
        }
      else
        {
          t = s_19;
          {
            ATerm u_19 = t;
            int z_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = LChoice_2(t, inline_rules_0, inline_rules_0);
                LocalPopChoice(z_19);
              }
            else
              {
                t = u_19;
                {
                  ATerm a_20 = t;
                  int b_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        ATerm y_2 (ATerm t)
                        {
                          t = Match_1(t, _id);
                          return(t);
                        }
                        ATerm z_2 (ATerm t)
                        {
                          t = Build_1(t, _id);
                          return(t);
                        }
                        t = Seq_2(t, y_2, z_2);
                        return(t);
                      }
                      t = Scope_2(t, _id, x_2);
                      LocalPopChoice(b_20);
                    }
                  else
                    {
                      t = a_20;
                      {
                        ATerm f_20 = t;
                        int h_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_3 (ATerm t)
                            {
                              ATerm b_3 (ATerm t)
                              {
                                t = Match_1(t, _id);
                                return(t);
                              }
                              ATerm c_3 (ATerm t)
                              {
                                ATerm d_3 (ATerm t)
                                {
                                  t = Build_1(t, _id);
                                  return(t);
                                }
                                t = Seq_2(t, _id, d_3);
                                return(t);
                              }
                              t = Seq_2(t, b_3, c_3);
                              return(t);
                            }
                            t = Scope_2(t, _id, a_3);
                            LocalPopChoice(h_20);
                          }
                        else
                          {
                            t = f_20;
                            {
                              t = InlineStrat_0(t);
                              t = inline_rules_0(t);
                            }
                          }
                      }
                    }
                }
              }
          }
        }
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
      }
    }
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm z_55 = NULL;
  z_55 = t;
  {
    ATerm k_20;
    k_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_17, (ATerm) ATmakeAppl(sym_Defined_2, term_l_20, not_null(z_55)));
      {
        ATerm e_3 (ATerm t)
        {
          t = term_w_17;
          return(t);
        }
        t = assert_1(t, e_3);
      }
    }
    t = k_20;
    {
      ATerm m_20;
      m_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATmakeAppl(sym_Defined_2, term_n_20, not_null(z_55)));
        {
          ATerm f_3 (ATerm t)
          {
            t = term_c_16;
            return(t);
          }
          t = assert_1(t, f_3);
        }
      }
      t = m_20;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm d_56 = NULL;
  d_56 = t;
  {
    ATerm o_20;
    o_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_18, not_null(d_56)), term_q_20);
      {
        ATerm g_3 (ATerm t)
        {
          t = term_p_18;
          return(t);
        }
        t = assert_1(t, g_3);
      }
    }
    t = o_20;
    {
      ATerm r_20;
      r_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_18, not_null(d_56)), term_v_20);
        {
          ATerm h_3 (ATerm t)
          {
            t = term_n_18;
            return(t);
          }
          t = assert_1(t, h_3);
        }
      }
      t = r_20;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm p_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
  p_56 = t;
  j_56 :
  if(match_cons(p_56, sym_Call_2))
    {
      s_56 = ATgetArgument(p_56, 0);
      u_56 = ATgetArgument(p_56, 1);
      k_56 :
      if(match_cons(s_56, sym_SVar_1))
        {
          t_56 = ATgetArgument(s_56, 0);
          m_56 :
          if(match_string(t_56, "innermost_1"))
            {
              n_56 :
              if(((ATgetType(u_56) == AT_LIST) && !(ATisEmpty(u_56))))
                {
                  v_56 = ATgetFirst((ATermList) u_56);
                  w_56 = (ATerm) ATgetNext((ATermList) u_56);
                  o_56 :
                  if(((ATgetType(w_56) == AT_LIST) && ATisEmpty(w_56)))
                    {
                      {
                        ATerm y_56 = NULL,a_57 = NULL;
                        ATerm i_3 (ATerm t)
                        {
                          ATerm j_3 (ATerm t)
                          {
                            t = term_y_20;
                            return(t);
                          }
                          t = say_1(t, j_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, i_3);
                        {
                          ATerm c_21;
                          c_21 = t;
                          {
                            ATerm z_56 = NULL;
                            t = new_0(t);
                            {
                              z_56 = t;
                              if(((y_56 != NULL) && (y_56 != z_56)))
                                _fail(z_56);
                              else
                                y_56 = z_56;
                            }
                          }
                          t = c_21;
                          {
                            ATerm j_21;
                            j_21 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_56)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = j_21;
                            {
                              ATerm s_21;
                              s_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_56)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = s_21;
                              {
                                ATerm b_57 = NULL;
                                t = not_null(v_56);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    b_57 = t;
                                    if(((a_57 != NULL) && (a_57 != b_57)))
                                      _fail(b_57);
                                    else
                                      a_57 = b_57;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(y_56), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_u_15, not_null(a_57)), (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_56)), (ATerm) ATempty)))), term_k_12))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm k_3 (ATerm t)
                                        {
                                          ATerm t_21 = t;
                                          int u_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(u_21);
                                            }
                                          else
                                            {
                                              t = t_21;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, k_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm l_3 (ATerm t)
                                            {
                                              ATerm m_3 (ATerm t)
                                              {
                                                t = term_v_21;
                                                return(t);
                                              }
                                              t = say_1(t, m_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, l_3);
                                          }
                                        }
                                      }
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
              else
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
ATerm alltd_1 (ATerm t, ATerm n_94 (ATerm))
{
  ATerm f_57 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_94(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = _all(t, f_57);
      }
    return(t);
  }
  t = f_57(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm i_58 = NULL;
  ATerm y_21;
  y_21 = t;
  {
    ATerm j_58 = NULL;
    t = new_0(t);
    {
      j_58 = t;
      {
        if(((i_58 != NULL) && (i_58 != j_58)))
          _fail(j_58);
        else
          i_58 = j_58;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_58)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm o_3 (ATerm t)
                  {
                    t = term_b_22;
                    return(t);
                  }
                  t = say_1(t, o_3);
                  return(t);
                }
                t = if_verbose2_1(t, n_3);
                _fail(t);
              }
            }
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL;
                l_58 = t;
                i_57 :
                if(match_cons(l_58, sym_Seq_2))
                  {
                    m_58 = ATgetArgument(l_58, 0);
                    w_58 = ATgetArgument(l_58, 1);
                    j_57 :
                    if(match_cons(m_58, sym_All_1))
                      {
                        n_58 = ATgetArgument(m_58, 0);
                        k_57 :
                        if(match_cons(n_58, sym_Call_2))
                          {
                            o_58 = ATgetArgument(n_58, 0);
                            q_58 = ATgetArgument(n_58, 1);
                            l_57 :
                            if(match_cons(o_58, sym_SVar_1))
                              {
                                p_58 = ATgetArgument(o_58, 0);
                                m_57 :
                                if(match_string(p_58, "bottomup_1"))
                                  {
                                    n_57 :
                                    if(((ATgetType(q_58) == AT_LIST) && !(ATisEmpty(q_58))))
                                      {
                                        r_58 = ATgetFirst((ATermList) q_58);
                                        v_58 = (ATerm) ATgetNext((ATermList) q_58);
                                        o_57 :
                                        if(match_cons(r_58, sym_Call_2))
                                          {
                                            s_58 = ATgetArgument(r_58, 0);
                                            u_58 = ATgetArgument(r_58, 1);
                                            p_57 :
                                            if(match_cons(s_58, sym_SVar_1))
                                              {
                                                t_58 = ATgetArgument(s_58, 0);
                                                s_57 :
                                                if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
                                                  {
                                                    t_57 :
                                                    if(((ATgetType(v_58) == AT_LIST) && ATisEmpty(v_58)))
                                                      {
                                                        u_57 :
                                                        if(match_cons(w_58, sym_Call_2))
                                                          {
                                                            x_58 = ATgetArgument(w_58, 0);
                                                            z_58 = ATgetArgument(w_58, 1);
                                                            v_57 :
                                                            if(match_cons(x_58, sym_SVar_1))
                                                              {
                                                                y_58 = ATgetArgument(x_58, 0);
                                                                h_58 :
                                                                if(((ATgetType(z_58) == AT_LIST) && ATisEmpty(z_58)))
                                                                  {
                                                                    {
                                                                      if(((i_58 != NULL) && (i_58 != t_58)))
                                                                        _fail(t_58);
                                                                      else
                                                                        i_58 = t_58;
                                                                      if(((i_58 != NULL) && (i_58 != y_58)))
                                                                        _fail(y_58);
                                                                      else
                                                                        i_58 = y_58;
                                                                    }
                                                                  }
                                                                else
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
                                      }
                                    else
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
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm q_3 (ATerm t)
                    {
                      t = term_e_22;
                      return(t);
                    }
                    t = debug_1(t, q_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, p_3);
                  _fail(t);
                }
              }
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  t = term_f_22;
                  return(t);
                }
                t = say_1(t, s_3);
                return(t);
              }
              t = if_verbose2_1(t, r_3);
            }
          }
        }
      }
    }
  }
  t = y_21;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  ATerm g_22;
  g_22 = t;
  {
    ATerm l_60 = NULL;
    t = new_0(t);
    {
      l_60 = t;
      {
        if(((j_60 != NULL) && (j_60 != l_60)))
          _fail(l_60);
        else
          j_60 = l_60;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_60)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm u_3 (ATerm t)
                  {
                    t = term_v_22;
                    return(t);
                  }
                  t = say_1(t, u_3);
                  return(t);
                }
                t = if_verbose2_1(t, t_3);
                _fail(t);
              }
            }
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
                m_60 = t;
                g_59 :
                if(match_cons(m_60, sym_Call_2))
                  {
                    n_60 = ATgetArgument(m_60, 0);
                    p_60 = ATgetArgument(m_60, 1);
                    h_59 :
                    if(match_cons(n_60, sym_SVar_1))
                      {
                        o_60 = ATgetArgument(n_60, 0);
                        n_59 :
                        if(match_string(o_60, "bottomup_1"))
                          {
                            p_59 :
                            if(((ATgetType(p_60) == AT_LIST) && !(ATisEmpty(p_60))))
                              {
                                q_60 = ATgetFirst((ATermList) p_60);
                                l_61 = (ATerm) ATgetNext((ATermList) p_60);
                                q_59 :
                                if(match_cons(q_60, sym_Rec_2))
                                  {
                                    r_60 = ATgetArgument(q_60, 0);
                                    s_60 = ATgetArgument(q_60, 1);
                                    r_59 :
                                    if(match_cons(s_60, sym_Call_2))
                                      {
                                        t_60 = ATgetArgument(s_60, 0);
                                        v_60 = ATgetArgument(s_60, 1);
                                        s_59 :
                                        if(match_cons(t_60, sym_SVar_1))
                                          {
                                            u_60 = ATgetArgument(t_60, 0);
                                            t_59 :
                                            if(match_string(u_60, "try_1"))
                                              {
                                                u_59 :
                                                if(((ATgetType(v_60) == AT_LIST) && !(ATisEmpty(v_60))))
                                                  {
                                                    w_60 = ATgetFirst((ATermList) v_60);
                                                    k_61 = (ATerm) ATgetNext((ATermList) v_60);
                                                    v_59 :
                                                    if(match_cons(w_60, sym_Seq_2))
                                                      {
                                                        x_60 = ATgetArgument(w_60, 0);
                                                        b_61 = ATgetArgument(w_60, 1);
                                                        w_59 :
                                                        if(match_cons(x_60, sym_Call_2))
                                                          {
                                                            y_60 = ATgetArgument(x_60, 0);
                                                            a_61 = ATgetArgument(x_60, 1);
                                                            x_59 :
                                                            if(match_cons(y_60, sym_SVar_1))
                                                              {
                                                                z_60 = ATgetArgument(y_60, 0);
                                                                y_59 :
                                                                if(((ATgetType(a_61) == AT_LIST) && ATisEmpty(a_61)))
                                                                  {
                                                                    z_59 :
                                                                    if(match_cons(b_61, sym_Call_2))
                                                                      {
                                                                        c_61 = ATgetArgument(b_61, 0);
                                                                        e_61 = ATgetArgument(b_61, 1);
                                                                        a_60 :
                                                                        if(match_cons(c_61, sym_SVar_1))
                                                                          {
                                                                            d_61 = ATgetArgument(c_61, 0);
                                                                            b_60 :
                                                                            if(match_string(d_61, "bottomup_1"))
                                                                              {
                                                                                c_60 :
                                                                                if(((ATgetType(e_61) == AT_LIST) && !(ATisEmpty(e_61))))
                                                                                  {
                                                                                    f_61 = ATgetFirst((ATermList) e_61);
                                                                                    j_61 = (ATerm) ATgetNext((ATermList) e_61);
                                                                                    d_60 :
                                                                                    if(match_cons(f_61, sym_Call_2))
                                                                                      {
                                                                                        g_61 = ATgetArgument(f_61, 0);
                                                                                        i_61 = ATgetArgument(f_61, 1);
                                                                                        e_60 :
                                                                                        if(match_cons(g_61, sym_SVar_1))
                                                                                          {
                                                                                            h_61 = ATgetArgument(g_61, 0);
                                                                                            f_60 :
                                                                                            if(((ATgetType(i_61) == AT_LIST) && ATisEmpty(i_61)))
                                                                                              {
                                                                                                g_60 :
                                                                                                if(((ATgetType(j_61) == AT_LIST) && ATisEmpty(j_61)))
                                                                                                  {
                                                                                                    h_60 :
                                                                                                    if(((ATgetType(k_61) == AT_LIST) && ATisEmpty(k_61)))
                                                                                                      {
                                                                                                        i_60 :
                                                                                                        if(((ATgetType(l_61) == AT_LIST) && ATisEmpty(l_61)))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((k_60 != NULL) && (k_60 != r_60)))
                                                                                                                _fail(r_60);
                                                                                                              else
                                                                                                                k_60 = r_60;
                                                                                                              {
                                                                                                                if(((j_60 != NULL) && (j_60 != z_60)))
                                                                                                                  _fail(z_60);
                                                                                                                else
                                                                                                                  j_60 = z_60;
                                                                                                                if(((k_60 != NULL) && (k_60 != h_61)))
                                                                                                                  _fail(h_61);
                                                                                                                else
                                                                                                                  k_60 = h_61;
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
                                                                              }
                                                                            else
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
                                                  }
                                                else
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
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                {
                  ATerm v_3 (ATerm t)
                  {
                    ATerm w_3 (ATerm t)
                    {
                      t = term_y_22;
                      return(t);
                    }
                    t = debug_1(t, w_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, v_3);
                  _fail(t);
                }
              }
            {
              ATerm x_3 (ATerm t)
              {
                ATerm y_3 (ATerm t)
                {
                  t = term_z_22;
                  return(t);
                }
                t = say_1(t, y_3);
                return(t);
              }
              t = if_verbose2_1(t, x_3);
            }
          }
        }
      }
    }
  }
  t = g_22;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm z_61 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  z_61 = t;
  w_61 :
  if(match_cons(z_61, sym_Call_2))
    {
      c_62 = ATgetArgument(z_61, 0);
      e_62 = ATgetArgument(z_61, 1);
      x_61 :
      if(match_cons(c_62, sym_SVar_1))
        {
          d_62 = ATgetArgument(c_62, 0);
          y_61 :
          if(((ATgetType(e_62) == AT_LIST) && ATisEmpty(e_62)))
            {
              t = not_null(d_62);
            }
          else
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
ATerm SubsVar_2 (ATerm t, ATerm l_117 (ATerm), ATerm m_117 (ATerm))
{
  ATerm p_62 = NULL;
  ATerm r_62 = NULL,s_62 = NULL;
  p_62 = t;
  {
    ATerm t_62 = NULL;
    t = not_null(p_62);
    {
      ATerm u_62 = NULL;
      t = l_117(t);
      {
        t_62 = t;
        {
          if(((r_62 != NULL) && (r_62 != t_62)))
            _fail(t_62);
          else
            r_62 = t_62;
          {
            t = m_117(t);
            {
              u_62 = t;
              if(((s_62 != NULL) && (s_62 != u_62)))
                _fail(u_62);
              else
                s_62 = u_62;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_62), not_null(s_62));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm c_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
  c_63 = t;
  b_63 :
  if(match_cons(c_63, sym__2))
    {
      i_63 = ATgetArgument(c_63, 0);
      j_63 = ATgetArgument(c_63, 1);
      {
        ATerm m_63 = NULL;
        if(((m_63 != NULL) && (m_63 != j_63)))
          _fail(j_63);
        else
          m_63 = j_63;
      }
    }
  else
    {
      if(match_cons(c_63, sym__3))
        {
          i_63 = ATgetArgument(c_63, 0);
          j_63 = ATgetArgument(c_63, 1);
          k_63 = ATgetArgument(c_63, 2);
          {
            ATerm w_63 = NULL;
            ATerm x_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_63), not_null(j_63));
            {
              t = zip_1(t, _id);
              {
                x_63 = t;
                if(((w_63 != NULL) && (w_63 != x_63)))
                  _fail(x_63);
                else
                  w_63 = x_63;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_63), not_null(k_63));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm w_116 (ATerm), ATerm x_116 (ATerm))
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
  t = subs_args_0(t);
  {
    d_64 = t;
    c_64 :
    if(match_cons(d_64, sym__2))
      {
        e_64 = ATgetArgument(d_64, 0);
        f_64 = ATgetArgument(d_64, 1);
        {
          t = not_null(f_64);
          {
            ATerm z_3 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                t = not_null(e_64);
                return(t);
              }
              t = SubsVar_2(t, w_116, a_4);
              t = x_116(t);
              return(t);
            }
            t = alltd_1(t, z_3);
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
ATerm substitute_1 (ATerm t, ATerm y_116 (ATerm))
{
  t = substitute_2(t, y_116, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm k_120 (ATerm))
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        t = split_2(t, _id, k_120);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
            q_64 = t;
            k_64 :
            if(match_cons(q_64, sym__2))
              {
                r_64 = ATgetArgument(q_64, 0);
                v_64 = ATgetArgument(q_64, 1);
                m_64 :
                if(match_cons(r_64, sym_SDef_3))
                  {
                    s_64 = ATgetArgument(r_64, 0);
                    t_64 = ATgetArgument(r_64, 1);
                    u_64 = ATgetArgument(r_64, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_64), not_null(t_64), not_null(u_64));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, c_4);
        }
        return(t);
      }
      t = Let_2(t, b_4, _id);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              t = split_2(t, _id, k_120);
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL;
                  z_64 = t;
                  o_64 :
                  if(match_cons(z_64, sym__2))
                    {
                      a_65 = ATgetArgument(z_64, 0);
                      d_65 = ATgetArgument(z_64, 1);
                      p_64 :
                      if(match_cons(a_65, sym_VarDec_2))
                        {
                          b_65 = ATgetArgument(a_65, 0);
                          c_65 = ATgetArgument(a_65, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_65), not_null(c_65));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, e_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, d_4, _id);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm f_4 (ATerm t)
              {
                t = k_120(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, f_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm f_82 (ATerm), ATerm g_82 (ATerm))
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
  w_65 = t;
  v_65 :
  if(match_cons(w_65, sym_Rec_2))
    {
      x_65 = ATgetArgument(w_65, 0);
      y_65 = ATgetArgument(w_65, 1);
      {
        ATerm c_66 = NULL,e_66 = NULL;
        ATerm d_66 = NULL;
        t = SSLgetAnnotations(not_null(w_65));
        {
          d_66 = t;
          if(((c_66 != NULL) && (c_66 != d_66)))
            _fail(d_66);
          else
            c_66 = d_66;
        }
        {
          t = not_null(x_65);
          {
            ATerm g_66 = NULL;
            t = f_82(t);
            {
              e_66 = t;
              {
                t = not_null(y_65);
                {
                  ATerm i_66 = NULL;
                  t = g_82(t);
                  {
                    g_66 = t;
                    {
                      ATerm j_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(e_66), not_null(g_66)), not_null(c_66));
                      {
                        j_66 = t;
                        if(((i_66 != NULL) && (i_66 != j_66)))
                          _fail(j_66);
                        else
                          i_66 = j_66;
                      }
                      t = not_null(i_66);
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
ATerm SDef_3 (ATerm t, ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  ATerm f_67 = NULL,g_67 = NULL,v_67 = NULL,b_68 = NULL;
  f_67 = t;
  c_67 :
  if(match_cons(f_67, sym_SDef_3))
    {
      g_67 = ATgetArgument(f_67, 0);
      v_67 = ATgetArgument(f_67, 1);
      b_68 = ATgetArgument(f_67, 2);
      {
        ATerm i_68 = NULL,k_68 = NULL;
        ATerm j_68 = NULL;
        t = SSLgetAnnotations(not_null(f_67));
        {
          j_68 = t;
          if(((i_68 != NULL) && (i_68 != j_68)))
            _fail(j_68);
          else
            i_68 = j_68;
        }
        {
          t = not_null(g_67);
          {
            ATerm m_68 = NULL;
            t = j_82(t);
            {
              k_68 = t;
              {
                t = not_null(v_67);
                {
                  ATerm o_68 = NULL;
                  t = k_82(t);
                  {
                    m_68 = t;
                    {
                      t = not_null(b_68);
                      {
                        ATerm q_68 = NULL;
                        t = l_82(t);
                        {
                          o_68 = t;
                          {
                            ATerm r_68 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(k_68), not_null(m_68), not_null(o_68)), not_null(i_68));
                            {
                              r_68 = t;
                              if(((q_68 != NULL) && (q_68 != r_68)))
                                _fail(r_68);
                              else
                                q_68 = r_68;
                            }
                            t = not_null(q_68);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym_Let_2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      {
        ATerm v_69 = NULL,i_70 = NULL;
        ATerm h_70 = NULL;
        t = SSLgetAnnotations(not_null(e_69));
        {
          h_70 = t;
          if(((v_69 != NULL) && (v_69 != h_70)))
            _fail(h_70);
          else
            v_69 = h_70;
        }
        {
          t = not_null(f_69);
          {
            ATerm k_70 = NULL;
            t = h_82(t);
            {
              i_70 = t;
              {
                t = not_null(g_69);
                {
                  ATerm m_70 = NULL;
                  t = i_82(t);
                  {
                    k_70 = t;
                    {
                      ATerm n_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(i_70), not_null(k_70)), not_null(v_69));
                      {
                        n_70 = t;
                        if(((m_70 != NULL) && (m_70 != n_70)))
                          _fail(n_70);
                        else
                          m_70 = n_70;
                      }
                      t = not_null(m_70);
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
ATerm sboundin_3 (ATerm t, ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm))
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, l_120, l_120);
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, n_120, n_120, l_120);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = Rec_2(t, n_120, l_120);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym_Rec_2))
    {
      w_70 = ATgetArgument(v_70, 0);
      x_70 = ATgetArgument(v_70, 1);
      t = (ATerm) ATinsert(ATempty, not_null(w_70));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,a_75 = NULL;
  c_72 = t;
  b_72 :
  if(match_cons(c_72, sym_SDef_3))
    {
      d_72 = ATgetArgument(c_72, 0);
      e_72 = ATgetArgument(c_72, 1);
      a_75 = ATgetArgument(c_72, 2);
      {
        t = not_null(e_72);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm e_75 = NULL,d_76 = NULL,e_76 = NULL;
            e_75 = t;
            a_72 :
            if(match_cons(e_75, sym_VarDec_2))
              {
                d_76 = ATgetArgument(e_75, 0);
                e_76 = ATgetArgument(e_75, 1);
                t = not_null(d_76);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_4);
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
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
  n_76 = t;
  m_76 :
  if(match_cons(n_76, sym_Let_2))
    {
      o_76 = ATgetArgument(n_76, 0);
      p_76 = ATgetArgument(n_76, 1);
      {
        t = not_null(o_76);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
            s_76 = t;
            l_76 :
            if(match_cons(s_76, sym_SDef_3))
              {
                t_76 = ATgetArgument(s_76, 0);
                u_76 = ATgetArgument(s_76, 1);
                v_76 = ATgetArgument(s_76, 2);
                t = not_null(t_76);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm g_77 = NULL,h_77 = NULL;
  g_77 = t;
  f_77 :
  if(match_cons(g_77, sym_SVar_1))
    {
      h_77 = ATgetArgument(g_77, 0);
      {
        ATerm k_77 = NULL,m_77 = NULL;
        ATerm l_77 = NULL;
        t = SSLgetAnnotations(not_null(g_77));
        {
          l_77 = t;
          if(((k_77 != NULL) && (k_77 != l_77)))
            _fail(l_77);
          else
            k_77 = l_77;
        }
        {
          t = not_null(h_77);
          {
            ATerm o_77 = NULL;
            t = e_82(t);
            {
              m_77 = t;
              {
                ATerm p_77 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(m_77)), not_null(k_77));
                {
                  p_77 = t;
                  if(((o_77 != NULL) && (o_77 != p_77)))
                    _fail(p_77);
                  else
                    o_77 = p_77;
                }
                t = not_null(o_77);
              }
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
  ATerm i_4 (ATerm t)
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, i_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm g_120 (ATerm))
{
  t = Scope_2(t, g_120, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm z_77 = NULL,c_78 = NULL;
  z_77 = t;
  y_77 :
  if(match_cons(z_77, sym_DynamicRules_1))
    {
      c_78 = ATgetArgument(z_77, 0);
      {
        ATerm f_78 = NULL,h_78 = NULL;
        ATerm g_78 = NULL;
        t = SSLgetAnnotations(not_null(z_77));
        {
          g_78 = t;
          if(((f_78 != NULL) && (f_78 != g_78)))
            _fail(g_78);
          else
            f_78 = g_78;
        }
        {
          t = not_null(c_78);
          {
            ATerm j_79 = NULL;
            t = j_84(t);
            {
              h_78 = t;
              {
                ATerm m_79 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(h_78)), not_null(f_78));
                {
                  m_79 = t;
                  if(((j_79 != NULL) && (j_79 != m_79)))
                    _fail(m_79);
                  else
                    j_79 = m_79;
                }
                t = not_null(j_79);
              }
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
ATerm Scope_2 (ATerm t, ATerm d_81 (ATerm), ATerm e_81 (ATerm))
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  w_79 :
  if(match_cons(x_79, sym_Scope_2))
    {
      y_79 = ATgetArgument(x_79, 0);
      z_79 = ATgetArgument(x_79, 1);
      {
        ATerm d_80 = NULL,f_80 = NULL;
        ATerm e_80 = NULL;
        t = SSLgetAnnotations(not_null(x_79));
        {
          e_80 = t;
          if(((d_80 != NULL) && (d_80 != e_80)))
            _fail(e_80);
          else
            d_80 = e_80;
        }
        {
          t = not_null(y_79);
          {
            ATerm h_80 = NULL;
            t = d_81(t);
            {
              f_80 = t;
              {
                t = not_null(z_79);
                {
                  ATerm j_80 = NULL;
                  t = e_81(t);
                  {
                    h_80 = t;
                    {
                      ATerm k_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(f_80), not_null(h_80)), not_null(d_80));
                      {
                        k_80 = t;
                        if(((j_80 != NULL) && (j_80 != k_80)))
                          _fail(k_80);
                        else
                          j_80 = k_80;
                      }
                      t = not_null(j_80);
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
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, j_120, h_120);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = DynamicRules_1(t, h_120);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm s_80 = NULL,x_80 = NULL;
  s_80 = t;
  r_80 :
  if(match_cons(s_80, sym_DynamicRules_1))
    {
      x_80 = ATgetArgument(s_80, 0);
      {
        t = not_null(x_80);
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
  ATerm g_81 = NULL,h_81 = NULL;
  g_81 = t;
  f_81 :
  if(match_cons(g_81, sym_Var_1))
    {
      h_81 = ATgetArgument(g_81, 0);
      t = (ATerm) ATinsert(ATempty, not_null(h_81));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_102 (ATerm))
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym__2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      {
        t = not_null(n_81);
        {
          ATerm y_81 (ATerm t)
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_81);
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                {
                  ATerm q_23 = t;
                  int r_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_4 (ATerm t)
                      {
                        t = not_null(o_81);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_102, j_4);
                      t = y_81(t);
                      LocalPopChoice(r_23);
                    }
                  else
                    {
                      t = q_23;
                      t = Cons_2(t, _id, y_81);
                    }
                }
              }
            return(t);
          }
          t = y_81(t);
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
ATerm foldr_3 (ATerm t, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm))
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_103(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm d_82 = NULL,m_82 = NULL,n_82 = NULL;
        d_82 = t;
        c_82 :
        if(((ATgetType(d_82) == AT_LIST) && !(ATisEmpty(d_82))))
          {
            m_82 = ATgetFirst((ATermList) d_82);
            n_82 = (ATerm) ATgetNext((ATermList) d_82);
            {
              ATerm q_82 = NULL,s_82 = NULL;
              ATerm u_23;
              u_23 = t;
              {
                ATerm r_82 = NULL;
                t = not_null(m_82);
                {
                  t = r_103(t);
                  {
                    r_82 = t;
                    if(((q_82 != NULL) && (q_82 != r_82)))
                      _fail(r_82);
                    else
                      q_82 = r_82;
                  }
                }
              }
              t = u_23;
              {
                ATerm t_82 = NULL;
                t = not_null(n_82);
                {
                  t = foldr_3(t, p_103, q_103, r_103);
                  {
                    t_82 = t;
                    if(((s_82 != NULL) && (s_82 != t_82)))
                      _fail(t_82);
                    else
                      s_82 = t_82;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_82), not_null(s_82));
                  t = q_103(t);
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
ATerm crush_3 (ATerm t, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm))
{
  ATerm d_83 = NULL;
  ATerm f_83 = NULL;
  d_83 = t;
  {
    ATerm g_83 = NULL;
    ATerm i_83 = NULL,j_83 = NULL,l_83 = NULL;
    t = not_null(d_83);
    {
      g_83 = t;
      {
        t = SSL_explode_term(not_null(g_83));
        {
          i_83 = t;
          c_83 :
          if(match_cons(i_83, sym__2))
            {
              j_83 = ATgetArgument(i_83, 0);
              l_83 = ATgetArgument(i_83, 1);
              if(((f_83 != NULL) && (f_83 != l_83)))
                _fail(l_83);
              else
                f_83 = l_83;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_83);
      t = foldr_3(t, n_102, o_102, p_102);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL;
  t_83 = t;
  s_83 :
  if(match_cons(t_83, sym__2))
    {
      u_83 = ATgetArgument(t_83, 0);
      v_83 = ATgetArgument(t_83, 1);
      if(((u_83 != NULL) && (u_83 != v_83)))
        _fail(v_83);
      else
        u_83 = v_83;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_103 (ATerm), ATerm b_103 (ATerm))
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL;
  b_84 = t;
  a_84 :
  if(((ATgetType(b_84) == AT_LIST) && !(ATisEmpty(b_84))))
    {
      c_84 = ATgetFirst((ATermList) b_84);
      d_84 = (ATerm) ATgetNext((ATermList) b_84);
      {
        t = b_103(t);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm g_84 = NULL;
            g_84 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_84), not_null(g_84));
              t = a_103(t);
            }
            return(t);
          }
          t = fetch_1(t, k_4);
        }
        t = not_null(d_84);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm s_102 (ATerm))
{
  ATerm s_84 = NULL,t_84 = NULL,w_84 = NULL;
  s_84 = t;
  r_84 :
  if(match_cons(s_84, sym__2))
    {
      t_84 = ATgetArgument(s_84, 0);
      w_84 = ATgetArgument(s_84, 1);
      {
        t = not_null(t_84);
        {
          ATerm c_85 (ATerm t)
          {
            ATerm v_23 = t;
            int w_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(w_23);
              }
            else
              {
                t = v_23;
                {
                  ATerm x_23 = t;
                  int y_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_4 (ATerm t)
                      {
                        t = not_null(w_84);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_102, l_4);
                      t = c_85(t);
                      LocalPopChoice(y_23);
                    }
                  else
                    {
                      t = x_23;
                      t = Cons_2(t, _id, c_85);
                    }
                }
              }
            return(t);
          }
          t = c_85(t);
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
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
  g_85 = t;
  e_85 :
  if(match_cons(g_85, sym__2))
    {
      h_85 = ATgetArgument(g_85, 0);
      i_85 = ATgetArgument(g_85, 1);
      f_85 :
      if(((ATgetType(i_85) == AT_LIST) && !(ATisEmpty(i_85))))
        {
          j_85 = ATgetFirst((ATermList) i_85);
          k_85 = (ATerm) ATgetNext((ATermList) i_85);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_85)), not_null(j_85)), not_null(k_85));
        }
      else
        {
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
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL;
  z_85 = t;
  x_85 :
  if(((ATgetType(z_85) == AT_LIST) && !(ATisEmpty(z_85))))
    {
      a_86 = ATgetFirst((ATermList) z_85);
      d_86 = (ATerm) ATgetNext((ATermList) z_85);
      y_85 :
      if(match_cons(a_86, sym__2))
        {
          b_86 = ATgetArgument(a_86, 0);
          c_86 = ATgetArgument(a_86, 1);
          {
            ATerm h_86 = NULL,i_86 = NULL,o_86 = NULL,u_86 = NULL;
            ATerm z_23;
            z_23 = t;
            {
              ATerm j_86 = NULL;
              ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
              t = not_null(c_86);
              {
                j_86 = t;
                {
                  t = SSL_explode_term(not_null(j_86));
                  {
                    l_86 = t;
                    s_85 :
                    if(match_cons(l_86, sym__2))
                      {
                        m_86 = ATgetArgument(l_86, 0);
                        n_86 = ATgetArgument(l_86, 1);
                        {
                          if(((h_86 != NULL) && (h_86 != m_86)))
                            _fail(m_86);
                          else
                            h_86 = m_86;
                          if(((i_86 != NULL) && (i_86 != n_86)))
                            _fail(n_86);
                          else
                            i_86 = n_86;
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
            t = z_23;
            {
              ATerm a_24;
              a_24 = t;
              {
                ATerm p_86 = NULL;
                ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL;
                t = not_null(b_86);
                {
                  p_86 = t;
                  {
                    t = SSL_explode_term(not_null(p_86));
                    {
                      r_86 = t;
                      v_85 :
                      if(match_cons(r_86, sym__2))
                        {
                          s_86 = ATgetArgument(r_86, 0);
                          t_86 = ATgetArgument(r_86, 1);
                          {
                            if(((h_86 != NULL) && (h_86 != s_86)))
                              _fail(s_86);
                            else
                              h_86 = s_86;
                            if(((o_86 != NULL) && (o_86 != t_86)))
                              _fail(t_86);
                            else
                              o_86 = t_86;
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
              t = a_24;
              {
                ATerm v_86 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_86), not_null(i_86));
                {
                  t = zip_1(t, _id);
                  {
                    v_86 = t;
                    if(((u_86 != NULL) && (u_86 != v_86)))
                      _fail(v_86);
                    else
                      u_86 = v_86;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_86), not_null(d_86));
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
                  }
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
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  f_87 = t;
  d_87 :
  if(((ATgetType(f_87) == AT_LIST) && !(ATisEmpty(f_87))))
    {
      g_87 = ATgetFirst((ATermList) f_87);
      j_87 = (ATerm) ATgetNext((ATermList) f_87);
      e_87 :
      if(match_cons(g_87, sym__2))
        {
          h_87 = ATgetArgument(g_87, 0);
          i_87 = ATgetArgument(g_87, 1);
          {
            ATerm l_87 = NULL;
            if(((h_87 != NULL) && (h_87 != i_87)))
              _fail(i_87);
            else
              h_87 = i_87;
            {
              if(((l_87 != NULL) && (l_87 != j_87)))
                _fail(j_87);
              else
                l_87 = j_87;
              t = not_null(l_87);
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
ATerm while_not_2 (ATerm t, ATerm t_105 (ATerm), ATerm u_105 (ATerm))
{
  ATerm n_87 (ATerm t)
  {
    ATerm d_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_105(t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = d_24;
        {
          t = u_105(t);
          t = n_87(t);
        }
      }
    return(t);
  }
  t = n_87(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm))
{
  t = w_105(t);
  t = while_not_2(t, x_105, y_105);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm p_87 = NULL;
        p_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_87));
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              ATerm t_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = t_24;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, p_4);
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, m_4, n_4, o_4);
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm v_87 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_119(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm b_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_87 = NULL;
              ATerm f_25;
              f_25 = t;
              {
                ATerm u_87 = NULL;
                t = e_119(t);
                {
                  u_87 = t;
                  if(((t_87 != NULL) && (t_87 != u_87)))
                    _fail(u_87);
                  else
                    t_87 = u_87;
                }
              }
              t = f_25;
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    t = not_null(t_87);
                    return(t);
                  }
                  t = split_2(t, v_87, s_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm r_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = f_119(t, q_4, v_87, r_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, t_4, u_4, _id);
                }
              }
              LocalPopChoice(e_25);
            }
          else
            {
              t = b_25;
              {
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm w_4 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, v_4, w_4, v_87);
              }
            }
        }
      }
    return(t);
  }
  t = v_87(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, x_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  e_88 = t;
  z_87 :
  if(match_cons(e_88, sym_LRule_1))
    {
      f_88 = ATgetArgument(e_88, 0);
      a_88 :
      if(match_cons(f_88, sym_Rule_3))
        {
          b_88 = ATgetArgument(f_88, 0);
          c_88 = ATgetArgument(f_88, 1);
          d_88 = ATgetArgument(f_88, 2);
          {
            t = not_null(b_88);
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
      if(match_cons(e_88, sym_Scope_2))
        {
          f_88 = ATgetArgument(e_88, 0);
          g_88 = ATgetArgument(e_88, 1);
          t = not_null(f_88);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm x_88 = NULL,y_88 = NULL;
  x_88 = t;
  w_88 :
  if(match_cons(x_88, sym_Var_1))
    {
      y_88 = ATgetArgument(x_88, 0);
      {
        ATerm l_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_89 = NULL,d_89 = NULL;
            ATerm c_89 = NULL;
            t = SSLgetAnnotations(not_null(x_88));
            {
              c_89 = t;
              if(((b_89 != NULL) && (b_89 != c_89)))
                _fail(c_89);
              else
                b_89 = c_89;
            }
            {
              t = not_null(y_88);
              {
                ATerm f_89 = NULL;
                t = q_0(t);
                {
                  d_89 = t;
                  {
                    ATerm g_89 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_89)), not_null(b_89));
                    {
                      g_89 = t;
                      if(((f_89 != NULL) && (f_89 != g_89)))
                        _fail(g_89);
                      else
                        f_89 = g_89;
                    }
                    t = not_null(f_89);
                  }
                }
              }
            }
            LocalPopChoice(o_25);
          }
        else
          {
            t = l_25;
            {
              ATerm j_89 = NULL,l_89 = NULL;
              ATerm k_89 = NULL;
              t = SSLgetAnnotations(not_null(x_88));
              {
                k_89 = t;
                if(((j_89 != NULL) && (j_89 != k_89)))
                  _fail(k_89);
                else
                  j_89 = k_89;
              }
              {
                t = not_null(y_88);
                {
                  ATerm n_89 = NULL;
                  t = q_0(t);
                  {
                    l_89 = t;
                    {
                      ATerm o_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_89)), not_null(j_89));
                      {
                        o_89 = t;
                        if(((n_89 != NULL) && (n_89 != o_89)))
                          _fail(o_89);
                        else
                          n_89 = o_89;
                      }
                      t = not_null(n_89);
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
ATerm DistBinding_2 (ATerm t, ATerm y_117 (ATerm), ATerm z_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL;
  b_90 = t;
  a_90 :
  if(match_cons(b_90, sym__3))
    {
      c_90 = ATgetArgument(b_90, 0);
      d_90 = ATgetArgument(b_90, 1);
      e_90 = ATgetArgument(b_90, 2);
      {
        t = not_null(c_90);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm i_90 = NULL;
            i_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_90), not_null(e_90));
              t = y_117(t);
            }
            return(t);
          }
          ATerm z_4 (ATerm t)
          {
            ATerm k_90 = NULL;
            k_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_90), not_null(d_90));
              t = y_117(t);
            }
            return(t);
          }
          t = z_117(t, y_4, z_4, _id);
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
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
  r_90 = t;
  q_90 :
  if(match_cons(r_90, sym__2))
    {
      s_90 = ATgetArgument(r_90, 0);
      t_90 = ATgetArgument(r_90, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_90)), not_null(s_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,j_91 = NULL;
  b_91 = t;
  y_90 :
  if(match_cons(b_91, sym__2))
    {
      c_91 = ATgetArgument(b_91, 0);
      f_91 = ATgetArgument(b_91, 1);
      z_90 :
      if(((ATgetType(c_91) == AT_LIST) && !(ATisEmpty(c_91))))
        {
          d_91 = ATgetFirst((ATermList) c_91);
          e_91 = (ATerm) ATgetNext((ATermList) c_91);
          a_91 :
          if(((ATgetType(f_91) == AT_LIST) && !(ATisEmpty(f_91))))
            {
              g_91 = ATgetFirst((ATermList) f_91);
              j_91 = (ATerm) ATgetNext((ATermList) f_91);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_91), not_null(g_91)), (ATerm) ATmakeAppl(sym__2, not_null(e_91), not_null(j_91)));
            }
          else
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
  ATerm t_91 = NULL,u_91 = NULL,v_91 = NULL;
  t_91 = t;
  q_91 :
  if(match_cons(t_91, sym__2))
    {
      u_91 = ATgetArgument(t_91, 0);
      v_91 = ATgetArgument(t_91, 1);
      r_91 :
      if(((ATgetType(u_91) == AT_LIST) && ATisEmpty(u_91)))
        {
          s_91 :
          if(((ATgetType(v_91) == AT_LIST) && ATisEmpty(v_91)))
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
ATerm genzip_4 (ATerm t, ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm))
{
  ATerm x_91 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          t = b_99(t);
          {
            t = _2(t, d_99, x_91);
            t = c_99(t);
          }
        }
      }
    return(t);
  }
  t = x_91(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_99 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_99);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm s_117 (ATerm), ATerm t_117 (ATerm, ATerm (ATerm)))
{
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  e_92 :
  if(match_cons(f_92, sym__2))
    {
      g_92 = ATgetArgument(f_92, 0);
      h_92 = ATgetArgument(f_92, 1);
      {
        ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,v_92 = NULL;
        ATerm t_25;
        t_25 = t;
        {
          ATerm q_92 = NULL;
          t = not_null(g_92);
          {
            ATerm r_92 = NULL;
            t = s_117(t);
            {
              q_92 = t;
              {
                if(((n_92 != NULL) && (n_92 != q_92)))
                  _fail(q_92);
                else
                  n_92 = q_92;
                {
                  ATerm s_92 = NULL,u_92 = NULL;
                  t = map_1(t, new_0);
                  {
                    r_92 = t;
                    {
                      if(((o_92 != NULL) && (o_92 != r_92)))
                        _fail(r_92);
                      else
                        o_92 = r_92;
                      {
                        ATerm t_92 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_92), not_null(o_92));
                        {
                          t = zip_1(t, _id);
                          {
                            t_92 = t;
                            if(((s_92 != NULL) && (s_92 != t_92)))
                              _fail(t_92);
                            else
                              s_92 = t_92;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_92), not_null(h_92));
                          {
                            ATerm a_26 = t;
                            int b_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(b_26);
                              }
                            else
                              {
                                t = a_26;
                                t = conc_more_lists_0(t);
                              }
                            {
                              u_92 = t;
                              if(((p_92 != NULL) && (p_92 != u_92)))
                                _fail(u_92);
                              else
                                p_92 = u_92;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_25;
        {
          ATerm w_92 = NULL;
          t = not_null(g_92);
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(o_92);
              return(t);
            }
            t = t_117(t, a_5);
            {
              w_92 = t;
              if(((v_92 != NULL) && (v_92 != w_92)))
                _fail(w_92);
              else
                v_92 = w_92;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(v_92), not_null(h_92), not_null(p_92));
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
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
  g_93 = t;
  e_93 :
  if(match_cons(g_93, sym__2))
    {
      h_93 = ATgetArgument(g_93, 0);
      i_93 = ATgetArgument(g_93, 1);
      f_93 :
      if(((ATgetType(i_93) == AT_LIST) && !(ATisEmpty(i_93))))
        {
          j_93 = ATgetFirst((ATermList) i_93);
          k_93 = (ATerm) ATgetNext((ATermList) i_93);
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_93), not_null(k_93));
        }
      else
        {
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
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL;
  s_93 = t;
  p_93 :
  if(match_cons(s_93, sym__2))
    {
      t_93 = ATgetArgument(s_93, 0);
      u_93 = ATgetArgument(s_93, 1);
      q_93 :
      if(((ATgetType(u_93) == AT_LIST) && !(ATisEmpty(u_93))))
        {
          v_93 = ATgetFirst((ATermList) u_93);
          y_93 = (ATerm) ATgetNext((ATermList) u_93);
          r_93 :
          if(match_cons(v_93, sym__2))
            {
              w_93 = ATgetArgument(v_93, 0);
              x_93 = ATgetArgument(v_93, 1);
              {
                ATerm c_94 = NULL;
                if(((t_93 != NULL) && (t_93 != w_93)))
                  _fail(w_93);
                else
                  t_93 = w_93;
                {
                  if(((c_94 != NULL) && (c_94 != x_93)))
                    _fail(x_93);
                  else
                    c_94 = x_93;
                  t = not_null(c_94);
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
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm d_118 (ATerm, ATerm (ATerm)))
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL;
  h_94 = t;
  g_94 :
  if(match_cons(h_94, sym__2))
    {
      i_94 = ATgetArgument(h_94, 0);
      j_94 = ATgetArgument(h_94, 1);
      {
        t = not_null(i_94);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(j_94);
              return(t);
            }
            t = split_2(t, _id, c_5);
            t = lookup_0(t);
            return(t);
          }
          t = d_118(t, b_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm r_108 (ATerm))
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
  s_94 = t;
  r_94 :
  if(match_cons(s_94, sym__2))
    {
      t_94 = ATgetArgument(s_94, 0);
      u_94 = ATgetArgument(s_94, 1);
      {
        t = not_null(t_94);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm x_94 = NULL;
            x_94 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_94), not_null(u_94));
              t = r_108(t);
            }
            return(t);
          }
          t = _all(t, d_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm b_108 (ATerm))
{
  ATerm b_95 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_108(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = all_dist_1(t, b_95);
      }
    return(t);
  }
  t = b_95(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm n_117 (ATerm, ATerm (ATerm)), ATerm o_117 (ATerm), ATerm p_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_117 (ATerm, ATerm (ATerm)))
{
  ATerm d_95 = NULL;
  d_95 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_95), (ATerm) ATempty);
    {
      ATerm g_95 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm p_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, n_117);
              LocalPopChoice(s_26);
            }
          else
            {
              t = p_26;
              {
                t = RnBinding_2(t, o_117, q_117);
                t = DistBinding_2(t, g_95, p_117);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_5);
        return(t);
      }
      t = g_95(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm h_95 (ATerm t, ATerm i_95 (ATerm))
  {
    t = Scope_2(t, i_95, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, h_95);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,o_95 = NULL;
  l_95 = t;
  k_95 :
  if(((ATgetType(l_95) == AT_LIST) && !(ATisEmpty(l_95))))
    {
      m_95 = ATgetFirst((ATermList) l_95);
      o_95 = (ATerm) ATgetNext((ATermList) l_95);
      t = not_null(m_95);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  u_95 = t;
  t_95 :
  if(match_cons(u_95, sym__2))
    {
      v_95 = ATgetArgument(u_95, 0);
      w_95 = ATgetArgument(u_95, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_95), not_null(w_95));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm v_110 (ATerm))
{
  ATerm g_96 = NULL;
  ATerm i_96 = NULL;
  g_96 = t;
  {
    ATerm j_96 = NULL;
    t = term_x_26;
    {
      t = v_110(t);
      {
        j_96 = t;
        if(((i_96 != NULL) && (i_96 != j_96)))
          _fail(j_96);
        else
          i_96 = j_96;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_96), not_null(g_96));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm y_96 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL;
  y_96 = t;
  v_96 :
  if(match_cons(y_96, sym_Call_2))
    {
      b_97 = ATgetArgument(y_96, 0);
      d_97 = ATgetArgument(y_96, 1);
      w_96 :
      if(match_cons(b_97, sym_SVar_1))
        {
          c_97 = ATgetArgument(b_97, 0);
          {
            ATerm h_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,x_97 = NULL;
            ATerm y_26;
            y_26 = t;
            {
              ATerm n_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_97)), (ATerm) ATinsert(ATempty, term_v_15));
              {
                ATerm f_5 (ATerm t)
                {
                  t = term_z_26;
                  return(t);
                }
                t = rewrite_1(t, f_5);
                {
                  n_97 = t;
                  q_96 :
                  if(match_cons(n_97, sym_Defined_3))
                    {
                      q_97 = ATgetArgument(n_97, 0);
                      r_97 = ATgetArgument(n_97, 1);
                      s_97 = ATgetArgument(n_97, 2);
                      r_96 :
                      if(match_string(q_97, "b_0"))
                        {
                          ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
                          if(((h_97 != NULL) && (h_97 != r_97)))
                            _fail(r_97);
                          else
                            h_97 = r_97;
                          {
                            if(((k_97 != NULL) && (k_97 != s_97)))
                              _fail(s_97);
                            else
                              k_97 = s_97;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_97), not_null(h_97), not_null(k_97));
                              {
                                t = strename_0(t);
                                {
                                  t_97 = t;
                                  p_96 :
                                  if(match_cons(t_97, sym_SDef_3))
                                    {
                                      u_97 = ATgetArgument(t_97, 0);
                                      v_97 = ATgetArgument(t_97, 1);
                                      w_97 = ATgetArgument(t_97, 2);
                                      {
                                        if(((c_97 != NULL) && (c_97 != u_97)))
                                          _fail(u_97);
                                        else
                                          c_97 = u_97;
                                        {
                                          if(((l_97 != NULL) && (l_97 != v_97)))
                                            _fail(v_97);
                                          else
                                            l_97 = v_97;
                                          if(((m_97 != NULL) && (m_97 != w_97)))
                                            _fail(w_97);
                                          else
                                            m_97 = w_97;
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
                      else
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
            t = y_26;
            {
              ATerm c_98 = NULL;
              t = not_null(h_97);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL;
                  y_97 = t;
                  t_96 :
                  if(match_cons(y_97, sym_VarDec_2))
                    {
                      z_97 = ATgetArgument(y_97, 0);
                      a_98 = ATgetArgument(y_97, 1);
                      t = not_null(z_97);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  c_98 = t;
                  if(((x_97 != NULL) && (x_97 != c_98)))
                    _fail(c_98);
                  else
                    x_97 = c_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_97), not_null(d_97), not_null(m_97));
                t = substitute_2(t, IsSVar_0, _id);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm check_that_try_is_try_0 (ATerm t)
{
  ATerm p_98 = NULL;
  ATerm a_27;
  a_27 = t;
  {
    ATerm q_98 = NULL;
    t = new_0(t);
    {
      q_98 = t;
      {
        if(((p_98 != NULL) && (p_98 != q_98)))
          _fail(q_98);
        else
          p_98 = q_98;
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_e_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_98)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = term_j_27;
                    return(t);
                  }
                  t = say_1(t, i_5);
                  return(t);
                }
                t = if_verbose2_1(t, h_5);
                _fail(t);
              }
            }
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL;
                r_98 = t;
                k_98 :
                if(match_cons(r_98, sym_LChoice_2))
                  {
                    s_98 = ATgetArgument(r_98, 0);
                    w_98 = ATgetArgument(r_98, 1);
                    l_98 :
                    if(match_cons(s_98, sym_Call_2))
                      {
                        t_98 = ATgetArgument(s_98, 0);
                        v_98 = ATgetArgument(s_98, 1);
                        m_98 :
                        if(match_cons(t_98, sym_SVar_1))
                          {
                            u_98 = ATgetArgument(t_98, 0);
                            n_98 :
                            if(((ATgetType(v_98) == AT_LIST) && ATisEmpty(v_98)))
                              {
                                o_98 :
                                if(match_cons(w_98, sym_Id_0))
                                  {
                                    if(((p_98 != NULL) && (p_98 != u_98)))
                                      _fail(u_98);
                                    else
                                      p_98 = u_98;
                                  }
                                else
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
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm k_5 (ATerm t)
                    {
                      t = term_p_27;
                      return(t);
                    }
                    t = debug_1(t, k_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, j_5);
                  _fail(t);
                }
              }
            {
              ATerm l_5 (ATerm t)
              {
                ATerm m_5 (ATerm t)
                {
                  t = term_r_27;
                  return(t);
                }
                t = say_1(t, m_5);
                return(t);
              }
              t = if_verbose2_1(t, l_5);
            }
          }
        }
      }
    }
  }
  t = a_27;
  return(t);
}
ATerm check_library_definitions_0 (ATerm t)
{
  t = check_that_try_is_try_0(t);
  {
    t = check_that_innermost_is_innermost_0(t);
    t = check_that_bottomup_is_bottomup_0(t);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_110 (ATerm))
{
  ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
  l_99 = t;
  j_99 :
  if(match_cons(l_99, sym__2))
    {
      m_99 = ATgetArgument(l_99, 0);
      n_99 = ATgetArgument(l_99, 1);
      {
        ATerm q_99 = NULL,r_99 = NULL,s_99 = NULL;
        ATerm u_27;
        u_27 = t;
        {
          ATerm t_99 = NULL;
          ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL;
          t = t_110(t);
          {
            t_99 = t;
            {
              if(((q_99 != NULL) && (q_99 != t_99)))
                _fail(t_99);
              else
                q_99 = t_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_99), not_null(m_99), not_null(n_99));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_27 = t;
                    int w_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_99), term_d_17);
                        t = table_get_0(t);
                        LocalPopChoice(w_27);
                      }
                    else
                      {
                        t = v_27;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_99 = t;
                      i_99 :
                      if(((ATgetType(u_99) == AT_LIST) && !(ATisEmpty(u_99))))
                        {
                          v_99 = ATgetFirst((ATermList) u_99);
                          w_99 = (ATerm) ATgetNext((ATermList) u_99);
                          {
                            if(((r_99 != NULL) && (r_99 != v_99)))
                              _fail(v_99);
                            else
                              r_99 = v_99;
                            {
                              if(((s_99 != NULL) && (s_99 != w_99)))
                                _fail(w_99);
                              else
                                s_99 = w_99;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_99), term_d_17, (ATerm) ATinsert(CheckATermList(not_null(s_99)), (ATerm) ATinsert(CheckATermList(not_null(r_99)), not_null(m_99))));
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
        t = u_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declare_inline_rule_0 (ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL;
  c_100 = t;
  b_100 :
  if(match_cons(c_100, sym_SDef_3))
    {
      d_100 = ATgetArgument(c_100, 0);
      e_100 = ATgetArgument(c_100, 1);
      f_100 = ATgetArgument(c_100, 2);
      {
        ATerm x_27;
        x_27 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_100)), (ATerm) ATinsert(ATempty, term_v_15)), (ATerm) ATmakeAppl(sym_Defined_3, term_y_27, not_null(e_100), not_null(f_100)));
          {
            ATerm n_5 (ATerm t)
            {
              t = term_z_26;
              return(t);
            }
            t = assert_1(t, n_5);
          }
        }
        t = x_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm p_100 = NULL,q_100 = NULL;
  p_100 = t;
  o_100 :
  if(match_cons(p_100, sym_Strategies_1))
    {
      q_100 = ATgetArgument(p_100, 0);
      {
        ATerm t_100 = NULL,v_100 = NULL;
        ATerm u_100 = NULL;
        t = SSLgetAnnotations(not_null(p_100));
        {
          u_100 = t;
          if(((t_100 != NULL) && (t_100 != u_100)))
            _fail(u_100);
          else
            t_100 = u_100;
        }
        {
          t = not_null(q_100);
          {
            ATerm x_100 = NULL;
            t = n_83(t);
            {
              v_100 = t;
              {
                ATerm y_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_100)), not_null(t_100));
                {
                  y_100 = t;
                  if(((x_100 != NULL) && (x_100 != y_100)))
                    _fail(y_100);
                  else
                    x_100 = y_100;
                }
                t = not_null(x_100);
              }
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
ATerm Signature_1 (ATerm t, ATerm k_83 (ATerm))
{
  ATerm i_101 = NULL,j_101 = NULL;
  i_101 = t;
  h_101 :
  if(match_cons(i_101, sym_Signature_1))
    {
      j_101 = ATgetArgument(i_101, 0);
      {
        ATerm m_101 = NULL,o_101 = NULL;
        ATerm n_101 = NULL;
        t = SSLgetAnnotations(not_null(i_101));
        {
          n_101 = t;
          if(((m_101 != NULL) && (m_101 != n_101)))
            _fail(n_101);
          else
            m_101 = n_101;
        }
        {
          t = not_null(j_101);
          {
            ATerm q_101 = NULL;
            t = k_83(t);
            {
              o_101 = t;
              {
                ATerm r_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(o_101)), not_null(m_101));
                {
                  r_101 = t;
                  if(((q_101 != NULL) && (q_101 != r_101)))
                    _fail(r_101);
                  else
                    q_101 = r_101;
                }
                t = not_null(q_101);
              }
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
ATerm Specification_1 (ATerm t, ATerm p_83 (ATerm))
{
  ATerm b_102 = NULL,c_102 = NULL;
  b_102 = t;
  a_102 :
  if(match_cons(b_102, sym_Specification_1))
    {
      c_102 = ATgetArgument(b_102, 0);
      {
        ATerm f_102 = NULL,h_102 = NULL;
        ATerm g_102 = NULL;
        t = SSLgetAnnotations(not_null(b_102));
        {
          g_102 = t;
          if(((f_102 != NULL) && (f_102 != g_102)))
            _fail(g_102);
          else
            f_102 = g_102;
        }
        {
          t = not_null(c_102);
          {
            ATerm j_102 = NULL;
            t = p_83(t);
            {
              h_102 = t;
              {
                ATerm k_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(h_102)), not_null(f_102));
                {
                  k_102 = t;
                  if(((j_102 != NULL) && (j_102 != k_102)))
                    _fail(k_102);
                  else
                    j_102 = k_102;
                }
                t = not_null(j_102);
              }
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
ATerm declare_inline_rules_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm p_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        ATerm s_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, s_5);
        return(t);
      }
      t = Cons_2(t, r_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, p_5, q_5);
    return(t);
  }
  t = Specification_1(t, o_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm k_79 (ATerm), ATerm l_79 (ATerm))
{
  ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL;
  h_103 = t;
  g_103 :
  if(match_cons(h_103, sym__2))
    {
      i_103 = ATgetArgument(h_103, 0);
      j_103 = ATgetArgument(h_103, 1);
      {
        ATerm s_103 = NULL,u_103 = NULL;
        ATerm t_103 = NULL;
        t = SSLgetAnnotations(not_null(h_103));
        {
          t_103 = t;
          if(((s_103 != NULL) && (s_103 != t_103)))
            _fail(t_103);
          else
            s_103 = t_103;
        }
        {
          t = not_null(i_103);
          {
            ATerm w_103 = NULL;
            t = k_79(t);
            {
              u_103 = t;
              {
                t = not_null(j_103);
                {
                  ATerm y_103 = NULL;
                  t = l_79(t);
                  {
                    w_103 = t;
                    {
                      ATerm z_103 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_103), not_null(w_103)), not_null(s_103));
                      {
                        z_103 = t;
                        if(((y_103 != NULL) && (y_103 != z_103)))
                          _fail(z_103);
                        else
                          y_103 = z_103;
                      }
                      t = not_null(y_103);
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
  ATerm h_104 = NULL;
  ATerm z_27;
  z_27 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm i_104 = NULL,j_104 = NULL;
      i_104 = t;
      g_104 :
      if(match_cons(i_104, sym_Program_1))
        {
          j_104 = ATgetArgument(i_104, 0);
          if(((h_104 != NULL) && (h_104 != j_104)))
            _fail(j_104);
          else
            h_104 = j_104;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, t_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_28), not_null(h_104)), term_a_28));
      {
        t = printnl_0(t);
        {
          t = term_c_28;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_27;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_cons(n_104, sym__2))
    {
      o_104 = ATgetArgument(n_104, 0);
      p_104 = ATgetArgument(n_104, 1);
      {
        ATerm d_28;
        d_28 = t;
        t = SSL_printnl(not_null(o_104), not_null(p_104));
        t = d_28;
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
  ATerm u_104 = NULL;
  u_104 = t;
  t = SSL_implode_string(not_null(u_104));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = e_28;
      {
        ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL;
        z_104 = t;
        y_104 :
        if(((ATgetType(z_104) == AT_LIST) && !(ATisEmpty(z_104))))
          {
            a_105 = ATgetFirst((ATermList) z_104);
            b_105 = (ATerm) ATgetNext((ATermList) z_104);
            {
              t = not_null(a_105);
              {
                ATerm u_5 (ATerm t)
                {
                  t = not_null(b_105);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_5);
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
  ATerm p_105 = NULL;
  ATerm r_105 = NULL;
  p_105 = t;
  {
    ATerm s_105 = NULL;
    ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL;
    t = not_null(p_105);
    {
      s_105 = t;
      {
        t = SSL_explode_term(not_null(s_105));
        {
          a_106 = t;
          n_105 :
          if(match_cons(a_106, sym__2))
            {
              b_106 = ATgetArgument(a_106, 0);
              c_106 = ATgetArgument(a_106, 1);
              o_105 :
              if(match_string(b_106, ""))
                {
                  if(((r_105 != NULL) && (r_105 != c_106)))
                    _fail(c_106);
                  else
                    r_105 = c_106;
                }
              else
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
      t = not_null(r_105);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm g_106 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_106);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          t = Nil_0(t);
          t = o_97(t);
        }
      }
    return(t);
  }
  t = g_106(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL;
  j_106 = t;
  i_106 :
  if(match_cons(j_106, sym__2))
    {
      k_106 = ATgetArgument(j_106, 0);
      l_106 = ATgetArgument(j_106, 1);
      {
        t = not_null(k_106);
        {
          ATerm v_5 (ATerm t)
          {
            t = not_null(l_106);
            return(t);
          }
          t = at_end_1(t, v_5);
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
  ATerm n_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = n_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_106 = NULL;
  q_106 = t;
  t = SSL_explode_string(not_null(q_106));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm t_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = t_28;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_111 (ATerm))
{
  ATerm y_28;
  y_28 = t;
  {
    ATerm v_106 = NULL,x_106 = NULL;
    ATerm z_28;
    z_28 = t;
    {
      ATerm w_106 = NULL;
      t = a_111(t);
      {
        w_106 = t;
        if(((v_106 != NULL) && (v_106 != w_106)))
          _fail(w_106);
        else
          v_106 = w_106;
      }
    }
    t = z_28;
    {
      ATerm y_106 = NULL;
      y_106 = t;
      if(((x_106 != NULL) && (x_106 != y_106)))
        _fail(y_106);
      else
        x_106 = y_106;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_106)), not_null(v_106)));
        t = printnl_0(t);
      }
    }
  }
  t = y_28;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_107 = NULL;
  c_107 = t;
  t = SSL_is_string(not_null(c_107));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              ATerm e_29 = t;
              int f_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(f_29);
                }
              else
                {
                  t = e_29;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, w_5);
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL;
              l_107 = t;
              k_107 :
              if(match_cons(l_107, sym_Path_1))
                {
                  m_107 = ATgetArgument(l_107, 0);
                  t = not_null(m_107);
                }
              else
                {
                  if(match_cons(l_107, sym_Var_1))
                    {
                      m_107 = ATgetArgument(l_107, 0);
                      {
                        t = not_null(m_107);
                        {
                          ATerm n_29 = t;
                          int o_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(o_29);
                            }
                          else
                            {
                              t = n_29;
                              {
                                ATerm x_5 (ATerm t)
                                {
                                  t = term_p_29;
                                  return(t);
                                }
                                t = debug_1(t, x_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_107, sym_Prefix_2))
                        {
                          m_107 = ATgetArgument(l_107, 0);
                          n_107 = ATgetArgument(l_107, 1);
                          {
                            ATerm u_107 = NULL,w_107 = NULL;
                            ATerm q_29;
                            q_29 = t;
                            {
                              ATerm v_107 = NULL;
                              t = not_null(m_107);
                              {
                                t = eval_config_0(t);
                                {
                                  v_107 = t;
                                  if(((u_107 != NULL) && (u_107 != v_107)))
                                    _fail(v_107);
                                  else
                                    u_107 = v_107;
                                }
                              }
                            }
                            t = q_29;
                            {
                              ATerm x_107 = NULL;
                              t = not_null(n_107);
                              {
                                t = eval_config_0(t);
                                {
                                  x_107 = t;
                                  if(((w_107 != NULL) && (w_107 != x_107)))
                                    _fail(x_107);
                                  else
                                    w_107 = x_107;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_107), not_null(w_107));
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
  ATerm h_108 = NULL;
  h_108 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_29, not_null(h_108));
    {
      t = table_get_0(t);
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm u_29;
              u_29 = t;
              {
                ATerm j_108 = NULL;
                ATerm k_108 = NULL;
                k_108 = t;
                if(((j_108 != NULL) && (j_108 != k_108)))
                  _fail(k_108);
                else
                  j_108 = k_108;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_r_29, not_null(h_108), not_null(j_108));
                  t = table_put_0(t);
                }
              }
              t = u_29;
            }
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL,s_108 = NULL;
  p_108 = t;
  o_108 :
  if(match_cons(p_108, sym__2))
    {
      q_108 = ATgetArgument(p_108, 0);
      s_108 = ATgetArgument(p_108, 1);
      t = SSL_WriteToTextFile(not_null(q_108), not_null(s_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
  y_108 = t;
  x_108 :
  if(match_cons(y_108, sym__2))
    {
      z_108 = ATgetArgument(y_108, 0);
      a_109 = ATgetArgument(y_108, 1);
      t = SSL_WriteToBinaryFile(not_null(z_108), not_null(a_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_109 = NULL;
  ATerm w_29;
  w_29 = t;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm x_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_5 (ATerm t)
          {
            ATerm j_109 = NULL,k_109 = NULL;
            j_109 = t;
            f_109 :
            if(match_cons(j_109, sym_Output_1))
              {
                k_109 = ATgetArgument(j_109, 0);
                if(((i_109 != NULL) && (i_109 != k_109)))
                  _fail(k_109);
                else
                  i_109 = k_109;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, z_5);
          LocalPopChoice(y_29);
        }
      else
        {
          t = x_29;
          {
            ATerm l_109 = NULL;
            t = term_b_30;
            {
              l_109 = t;
              if(((i_109 != NULL) && (i_109 != l_109)))
                _fail(l_109);
              else
                i_109 = l_109;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_5, _id);
  }
  t = w_29;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        t = not_null(i_109);
        return(t);
      }
      t = split_2(t, b_6, _id);
      return(t);
    }
    t = _2(t, _id, a_6);
    {
      ATerm c_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            ATerm d_6 (ATerm t)
            {
              ATerm m_109 = NULL;
              m_109 = t;
              h_109 :
              if(!(match_cons(m_109, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_6);
            return(t);
          }
          t = _2(t, c_6, WriteToBinaryFile_0);
          LocalPopChoice(h_30);
        }
      else
        {
          t = c_30;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_112 (ATerm))
{
  ATerm s_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL;
  ATerm p_30;
  p_30 = t;
  t = dtime_0(t);
  t = p_30;
  {
    t = e_112(t);
    {
      ATerm q_30;
      q_30 = t;
      {
        ATerm t_109 = NULL;
        t = dtime_0(t);
        {
          t_109 = t;
          if(((s_109 != NULL) && (s_109 != t_109)))
            _fail(t_109);
          else
            s_109 = t_109;
        }
      }
      t = q_30;
      {
        u_109 = t;
        r_109 :
        if(match_cons(u_109, sym__2))
          {
            v_109 = ATgetArgument(u_109, 0);
            w_109 = ATgetArgument(u_109, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_109)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(s_109))), not_null(w_109));
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
  ATerm c_110 = NULL;
  c_110 = t;
  t = SSL_ReadFromFile(not_null(c_110));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_96 (ATerm), ATerm d_96 (ATerm))
{
  ATerm h_110 = NULL,j_110 = NULL;
  ATerm r_30;
  r_30 = t;
  {
    ATerm i_110 = NULL;
    t = c_96(t);
    {
      i_110 = t;
      if(((h_110 != NULL) && (h_110 != i_110)))
        _fail(i_110);
      else
        h_110 = i_110;
    }
  }
  t = r_30;
  {
    ATerm k_110 = NULL;
    t = d_96(t);
    {
      k_110 = t;
      if(((j_110 != NULL) && (j_110 != k_110)))
        _fail(k_110);
      else
        j_110 = k_110;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_110), not_null(j_110));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_110 = NULL;
  ATerm c_31;
  c_31 = t;
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 (ATerm t)
        {
          ATerm x_110 = NULL,y_110 = NULL;
          x_110 = t;
          o_110 :
          if(match_cons(x_110, sym_Input_1))
            {
              y_110 = ATgetArgument(x_110, 0);
              if(((w_110 != NULL) && (w_110 != y_110)))
                _fail(y_110);
              else
                w_110 = y_110;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, e_6);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        {
          ATerm z_110 = NULL;
          t = term_f_31;
          {
            z_110 = t;
            if(((w_110 != NULL) && (w_110 != z_110)))
              _fail(z_110);
            else
              w_110 = z_110;
          }
        }
      }
  }
  t = c_31;
  {
    ATerm f_6 (ATerm t)
    {
      t = not_null(w_110);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_6);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_111 = NULL;
  f_111 = t;
  t = SSL_string_to_int(not_null(f_111));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL;
  n_111 = t;
  l_111 :
  if(match_string(n_111, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(n_111) == AT_LIST) && !(ATisEmpty(n_111))))
        {
          o_111 = ATgetFirst((ATermList) n_111);
          p_111 = (ATerm) ATgetNext((ATermList) n_111);
          m_111 :
          if(((ATgetType(p_111) == AT_LIST) && !(ATisEmpty(p_111))))
            {
              q_111 = ATgetFirst((ATermList) p_111);
              r_111 = (ATerm) ATgetNext((ATermList) p_111);
              {
                ATerm v_111 = NULL;
                ATerm g_31;
                g_31 = t;
                {
                  t = not_null(o_111);
                  t = l_0(t);
                }
                t = g_31;
                {
                  ATerm w_111 = NULL;
                  t = not_null(q_111);
                  {
                    t = n_0(t);
                    {
                      w_111 = t;
                      if(((v_111 != NULL) && (v_111 != w_111)))
                        _fail(w_111);
                      else
                        v_111 = w_111;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_111)), not_null(v_111));
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
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_6 (ATerm t)
      {
        ATerm f_113 = NULL;
        f_113 = t;
        a_112 :
        if(!(match_string(f_113, "-i")))
          {
            if(!(match_string(f_113, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        ATerm i_113 = NULL;
        ATerm j_31;
        j_31 = t;
        {
          ATerm g_113 = NULL;
          ATerm h_113 = NULL;
          h_113 = t;
          if(((g_113 != NULL) && (g_113 != h_113)))
            _fail(h_113);
          else
            g_113 = h_113;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_31, not_null(g_113));
            t = set_config_0(t);
          }
        }
        t = j_31;
        {
          ATerm j_113 = NULL;
          j_113 = t;
          if(((i_113 != NULL) && (i_113 != j_113)))
            _fail(j_113);
          else
            i_113 = j_113;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_113));
        }
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = term_l_31;
        return(t);
      }
      t = ArgOption_3(t, g_6, h_6, i_6);
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              ATerm k_113 = NULL;
              k_113 = t;
              f_112 :
              if(!(match_string(k_113, "-o")))
                {
                  if(!(match_string(k_113, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm k_6 (ATerm t)
            {
              ATerm n_113 = NULL;
              ATerm o_31;
              o_31 = t;
              {
                ATerm l_113 = NULL;
                ATerm m_113 = NULL;
                m_113 = t;
                if(((l_113 != NULL) && (l_113 != m_113)))
                  _fail(m_113);
                else
                  l_113 = m_113;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_31, not_null(l_113));
                  t = set_config_0(t);
                }
              }
              t = o_31;
              {
                ATerm o_113 = NULL;
                o_113 = t;
                if(((n_113 != NULL) && (n_113 != o_113)))
                  _fail(o_113);
                else
                  n_113 = o_113;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_113));
              }
              return(t);
            }
            ATerm l_6 (ATerm t)
            {
              t = term_q_31;
              return(t);
            }
            t = ArgOption_3(t, j_6, k_6, l_6);
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            {
              ATerm r_31 = t;
              int s_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_6 (ATerm t)
                  {
                    ATerm p_113 = NULL;
                    p_113 = t;
                    m_112 :
                    if(!(match_string(p_113, "-S")))
                      {
                        if(!(match_string(p_113, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm n_6 (ATerm t)
                  {
                    t = term_v_31;
                    t = set_config_0(t);
                    t = term_w_31;
                    return(t);
                  }
                  ATerm o_6 (ATerm t)
                  {
                    t = term_x_31;
                    return(t);
                  }
                  t = Option_3(t, m_6, n_6, o_6);
                  LocalPopChoice(s_31);
                }
              else
                {
                  t = r_31;
                  {
                    ATerm y_31 = t;
                    int z_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_6 (ATerm t)
                        {
                          ATerm q_113 = NULL;
                          q_113 = t;
                          n_112 :
                          if(!(match_string(q_113, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm r_6 (ATerm t)
                        {
                          ATerm t_113 = NULL;
                          ATerm a_32;
                          a_32 = t;
                          {
                            ATerm r_113 = NULL;
                            ATerm s_113 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_113 = t;
                              if(((r_113 != NULL) && (r_113 != s_113)))
                                _fail(s_113);
                              else
                                r_113 = s_113;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(r_113));
                              t = set_config_0(t);
                            }
                          }
                          t = a_32;
                          {
                            ATerm u_113 = NULL;
                            u_113 = t;
                            if(((t_113 != NULL) && (t_113 != u_113)))
                              _fail(u_113);
                            else
                              t_113 = u_113;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_113));
                          }
                          return(t);
                        }
                        ATerm s_6 (ATerm t)
                        {
                          t = term_b_32;
                          return(t);
                        }
                        t = ArgOption_3(t, p_6, r_6, s_6);
                        LocalPopChoice(z_31);
                      }
                    else
                      {
                        t = y_31;
                        {
                          ATerm c_32 = t;
                          int d_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_6 (ATerm t)
                              {
                                ATerm v_113 = NULL;
                                v_113 = t;
                                w_112 :
                                if(!(match_string(v_113, "-k")))
                                  {
                                    if(!(match_string(v_113, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm u_6 (ATerm t)
                              {
                                ATerm e_32;
                                e_32 = t;
                                {
                                  ATerm w_113 = NULL;
                                  ATerm x_113 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    x_113 = t;
                                    if(((w_113 != NULL) && (w_113 != x_113)))
                                      _fail(x_113);
                                    else
                                      w_113 = x_113;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(w_113));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_32;
                                return(t);
                              }
                              ATerm v_6 (ATerm t)
                              {
                                t = term_g_32;
                                return(t);
                              }
                              t = ArgOption_3(t, t_6, u_6, v_6);
                              LocalPopChoice(d_32);
                            }
                          else
                            {
                              t = c_32;
                              {
                                ATerm h_32 = t;
                                int i_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_6 (ATerm t)
                                    {
                                      ATerm y_113 = NULL;
                                      y_113 = t;
                                      y_112 :
                                      if(!(match_string(y_113, "-v")))
                                        {
                                          if(!(match_string(y_113, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm x_6 (ATerm t)
                                    {
                                      t = term_k_32;
                                      t = set_config_0(t);
                                      t = term_l_32;
                                      return(t);
                                    }
                                    ATerm y_6 (ATerm t)
                                    {
                                      t = term_m_32;
                                      return(t);
                                    }
                                    t = Option_3(t, w_6, x_6, y_6);
                                    LocalPopChoice(i_32);
                                  }
                                else
                                  {
                                    t = h_32;
                                    {
                                      ATerm n_32 = t;
                                      int o_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_6 (ATerm t)
                                          {
                                            ATerm z_113 = NULL;
                                            z_113 = t;
                                            d_113 :
                                            if(!(match_string(z_113, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm a_7 (ATerm t)
                                          {
                                            t = term_q_32;
                                            t = set_config_0(t);
                                            t = term_r_32;
                                            return(t);
                                          }
                                          ATerm b_7 (ATerm t)
                                          {
                                            t = term_s_32;
                                            return(t);
                                          }
                                          t = Option_3(t, z_6, a_7, b_7);
                                          LocalPopChoice(o_32);
                                        }
                                      else
                                        {
                                          t = n_32;
                                          {
                                            ATerm c_7 (ATerm t)
                                            {
                                              ATerm a_114 = NULL;
                                              a_114 = t;
                                              e_113 :
                                              if(!(match_string(a_114, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm d_7 (ATerm t)
                                            {
                                              t = term_u_32;
                                              t = set_config_0(t);
                                              t = term_v_32;
                                              return(t);
                                            }
                                            ATerm e_7 (ATerm t)
                                            {
                                              t = term_w_32;
                                              return(t);
                                            }
                                            t = Option_3(t, c_7, d_7, e_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATempty, term_x_32));
  {
    t = printnl_0(t);
    {
      t = term_c_28;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_114 = NULL;
  j_114 = t;
  t = SSL_TicksToSeconds(not_null(j_114));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL;
  p_114 = t;
  o_114 :
  if(match_cons(p_114, sym__2))
    {
      q_114 = ATgetArgument(p_114, 0);
      r_114 = ATgetArgument(p_114, 1);
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_114), not_null(r_114));
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            t = SSL_addr(not_null(q_114), not_null(r_114));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_103 (ATerm), ATerm o_103 (ATerm))
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_103(t);
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      {
        ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL;
        y_114 = t;
        x_114 :
        if(((ATgetType(y_114) == AT_LIST) && !(ATisEmpty(y_114))))
          {
            z_114 = ATgetFirst((ATermList) y_114);
            a_115 = (ATerm) ATgetNext((ATermList) y_114);
            {
              ATerm d_115 = NULL;
              ATerm e_115 = NULL;
              t = not_null(a_115);
              {
                t = foldr_2(t, n_103, o_103);
                {
                  e_115 = t;
                  if(((d_115 != NULL) && (d_115 != e_115)))
                    _fail(e_115);
                  else
                    d_115 = e_115;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_114), not_null(d_115));
                t = o_103(t);
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
ATerm crush_2 (ATerm t, ATerm l_102 (ATerm), ATerm m_102 (ATerm))
{
  ATerm r_115 = NULL;
  ATerm t_115 = NULL;
  r_115 = t;
  {
    ATerm u_115 = NULL;
    ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL;
    t = not_null(r_115);
    {
      u_115 = t;
      {
        t = SSL_explode_term(not_null(u_115));
        {
          w_115 = t;
          k_115 :
          if(match_cons(w_115, sym__2))
            {
              x_115 = ATgetArgument(w_115, 0);
              y_115 = ATgetArgument(w_115, 1);
              if(((t_115 != NULL) && (t_115 != y_115)))
                _fail(y_115);
              else
                t_115 = y_115;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_115);
      t = foldr_2(t, l_102, m_102);
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
    ATerm f_7 (ATerm t)
    {
      t = term_u_31;
      return(t);
    }
    t = crush_2(t, f_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL;
  e_116 = t;
  d_116 :
  if(match_cons(e_116, sym__2))
    {
      f_116 = ATgetArgument(e_116, 0);
      g_116 = ATgetArgument(e_116, 1);
      {
        ATerm c_33;
        c_33 = t;
        {
          ATerm d_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_116), not_null(g_116));
              LocalPopChoice(e_33);
            }
          else
            {
              t = d_33;
              t = SSL_gtr(not_null(f_116), not_null(g_116));
            }
        }
        t = c_33;
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
  ATerm m_116 = NULL;
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
      n_116 = t;
      l_116 :
      if(match_cons(n_116, sym__2))
        {
          o_116 = ATgetArgument(n_116, 0);
          p_116 = ATgetArgument(n_116, 1);
          {
            if(((m_116 != NULL) && (m_116 != o_116)))
              _fail(o_116);
            else
              m_116 = o_116;
            if(((m_116 != NULL) && (m_116 != p_116)))
              _fail(p_116);
            else
              m_116 = p_116;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_120 (ATerm))
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_33;
      j_33 = t;
      {
        ATerm s_116 = NULL;
        ATerm t_116 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            t_116 = t;
            if(((s_116 != NULL) && (s_116 != t_116)))
              _fail(t_116);
            else
              s_116 = t_116;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_116), term_c_28);
          t = geq_0(t);
        }
      }
      t = j_33;
      t = v_120(t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm a_117 = NULL,c_117 = NULL;
    ATerm k_33;
    k_33 = t;
    {
      ATerm b_117 = NULL;
      t = run_time_0(t);
      {
        b_117 = t;
        if(((a_117 != NULL) && (a_117 != b_117)))
          _fail(b_117);
        else
          a_117 = b_117;
      }
    }
    t = k_33;
    {
      ATerm d_117 = NULL;
      t = term_l_33;
      {
        t = get_config_0(t);
        {
          d_117 = t;
          if(((c_117 != NULL) && (c_117 != d_117)))
            _fail(d_117);
          else
            c_117 = d_117;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_33), not_null(a_117)), term_m_33), not_null(c_117)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_7);
  {
    t = term_u_31;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_117 = NULL;
  k_117 = t;
  j_117 :
  if(match_cons(k_117, sym_Version_0))
    {
      ATerm v_117 = NULL,x_117 = NULL;
      ATerm q_33;
      q_33 = t;
      {
        ATerm w_117 = NULL;
        t = SSLgetAnnotations(not_null(k_117));
        {
          w_117 = t;
          if(((v_117 != NULL) && (v_117 != w_117)))
            _fail(w_117);
          else
            v_117 = w_117;
        }
      }
      t = q_33;
      {
        ATerm a_118 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_117));
        {
          a_118 = t;
          if(((x_117 != NULL) && (x_117 != a_118)))
            _fail(a_118);
          else
            x_117 = a_118;
        }
        t = not_null(x_117);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_112 (ATerm))
{
  ATerm j_7 (ATerm t)
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_7);
  t = c_112(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_118 = NULL;
  g_118 = t;
  t = SSL_table_create(not_null(g_118));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_118 = NULL;
  k_118 = t;
  {
    ATerm v_33;
    v_33 = t;
    {
      t = term_w_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_33, term_x_33, not_null(k_118));
          t = table_put_0(t);
        }
      }
    }
    t = v_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_118 = NULL;
  o_118 = t;
  t = SSL_table_destroy(not_null(o_118));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_118 = NULL;
  s_118 = t;
  t = SSL_exit(not_null(s_118));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL;
  w_118 = t;
  v_118 :
  if(((ATgetType(w_118) == AT_LIST) && ATisEmpty(w_118)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_118) == AT_LIST) && !(ATisEmpty(w_118))))
        {
          x_118 = ATgetFirst((ATermList) w_118);
          y_118 = (ATerm) ATgetNext((ATermList) w_118);
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
  ATerm i_34;
  i_34 = t;
  {
    ATerm b_119 = NULL;
    ATerm i_119 = NULL;
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm c_119 = NULL;
          ATerm h_119 = NULL;
          h_119 = t;
          if(((c_119 != NULL) && (c_119 != h_119)))
            _fail(h_119);
          else
            c_119 = h_119;
          t = (ATerm) ATinsert(ATempty, not_null(c_119));
        }
      }
    {
      i_119 = t;
      if(((b_119 != NULL) && (b_119 != i_119)))
        _fail(i_119);
      else
        b_119 = i_119;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_30, not_null(b_119));
      t = printnl_0(t);
    }
  }
  t = i_34;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_115 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_96 (ATerm))
{
  ATerm l_119 (ATerm t)
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = Cons_2(t, z_96, l_119);
      }
    return(t);
  }
  t = l_119(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm u_119 = NULL,v_119 = NULL,w_119 = NULL;
  w_119 = t;
  t_119 :
  if(((ATgetType(w_119) == AT_LIST) && !(ATisEmpty(w_119))))
    {
      u_119 = ATgetFirst((ATermList) w_119);
      v_119 = (ATerm) ATgetNext((ATermList) w_119);
      {
        ATerm z_119 = NULL;
        t = not_null(v_119);
        {
          ATerm n_34;
          n_34 = t;
          {
            ATerm a_120 = NULL,c_120 = NULL,e_120 = NULL;
            ATerm o_34;
            o_34 = t;
            {
              ATerm b_120 = NULL;
              t = k_0(t);
              {
                b_120 = t;
                if(((a_120 != NULL) && (a_120 != b_120)))
                  _fail(b_120);
                else
                  a_120 = b_120;
              }
            }
            t = o_34;
            {
              ATerm d_120 = NULL;
              t = not_null(u_119);
              {
                t = i_0(t);
                {
                  d_120 = t;
                  if(((c_120 != NULL) && (c_120 != d_120)))
                    _fail(d_120);
                  else
                    c_120 = d_120;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_120)), not_null(c_120));
                {
                  e_120 = t;
                  if(((z_119 != NULL) && (z_119 != e_120)))
                    _fail(e_120);
                  else
                    z_119 = e_120;
                }
              }
            }
          }
          t = n_34;
          {
            ATerm k_7 (ATerm t)
            {
              t = not_null(z_119);
              return(t);
            }
            t = reverse_acc_2(t, i_0, k_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_119) == AT_LIST) && ATisEmpty(w_119)))
        {
          {
            t = term_x_26;
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
  ATerm l_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_115 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_91 (ATerm))
{
  ATerm z_120 = NULL,a_121 = NULL;
  z_120 = t;
  y_120 :
  if(match_cons(z_120, sym_Program_1))
    {
      a_121 = ATgetArgument(z_120, 0);
      {
        ATerm d_121 = NULL,f_121 = NULL;
        ATerm e_121 = NULL;
        t = SSLgetAnnotations(not_null(z_120));
        {
          e_121 = t;
          if(((d_121 != NULL) && (d_121 != e_121)))
            _fail(e_121);
          else
            d_121 = e_121;
        }
        {
          t = not_null(a_121);
          {
            ATerm h_121 = NULL;
            t = h_91(t);
            {
              f_121 = t;
              {
                ATerm i_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_121)), not_null(d_121));
                {
                  i_121 = t;
                  if(((h_121 != NULL) && (h_121 != i_121)))
                    _fail(i_121);
                  else
                    h_121 = i_121;
                }
                t = not_null(h_121);
              }
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
  ATerm q_121 = NULL;
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_121 = NULL;
      t = term_l_33;
      {
        t = get_config_0(t);
        {
          r_121 = t;
          if(((q_121 != NULL) && (q_121 != r_121)))
            _fail(r_121);
          else
            q_121 = r_121;
        }
      }
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm m_7 (ATerm t)
        {
          ATerm n_7 (ATerm t)
          {
            ATerm s_121 = NULL;
            s_121 = t;
            if(((q_121 != NULL) && (q_121 != s_121)))
              _fail(s_121);
            else
              q_121 = s_121;
            return(t);
          }
          t = Program_1(t, n_7);
          return(t);
        }
        t = fetch_1(t, m_7);
      }
    }
  {
    t = term_r_34;
    {
      t = echo_0(t);
      {
        t = term_x_34;
        {
          t = table_get_0(t);
          {
            ATerm o_7 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, o_7);
            {
              ATerm p_7 (ATerm t)
              {
                ATerm t_121 = NULL;
                ATerm u_121 = NULL;
                u_121 = t;
                if(((t_121 != NULL) && (t_121 != u_121)))
                  _fail(u_121);
                else
                  t_121 = u_121;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_121)), term_y_34);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, p_7);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm d_122 = NULL,e_122 = NULL;
  d_122 = t;
  c_122 :
  if(match_cons(d_122, sym_Undefined_1))
    {
      e_122 = ATgetArgument(d_122, 0);
      {
        ATerm h_122 = NULL,j_122 = NULL;
        ATerm i_122 = NULL;
        t = SSLgetAnnotations(not_null(d_122));
        {
          i_122 = t;
          if(((h_122 != NULL) && (h_122 != i_122)))
            _fail(i_122);
          else
            h_122 = i_122;
        }
        {
          t = not_null(e_122);
          {
            ATerm l_122 = NULL;
            t = i_91(t);
            {
              j_122 = t;
              {
                ATerm m_122 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_122)), not_null(h_122));
                {
                  m_122 = t;
                  if(((l_122 != NULL) && (l_122 != m_122)))
                    _fail(m_122);
                  else
                    l_122 = m_122;
                }
                t = not_null(l_122);
              }
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
ATerm fetch_1 (ATerm t, ATerm i_97 (ATerm))
{
  ATerm r_122 (ATerm t)
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_97, _id);
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = Cons_2(t, _id, r_122);
      }
    return(t);
  }
  t = r_122(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_114 (ATerm))
{
  t = fetch_1(t, l_114);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_122 = NULL;
  w_122 = t;
  v_122 :
  if(match_cons(w_122, sym_Help_0))
    {
      ATerm y_122 = NULL,a_123 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm z_122 = NULL;
        t = SSLgetAnnotations(not_null(w_122));
        {
          z_122 = t;
          if(((y_122 != NULL) && (y_122 != z_122)))
            _fail(z_122);
          else
            y_122 = z_122;
        }
      }
      t = b_35;
      {
        ATerm b_123 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_122));
        {
          b_123 = t;
          if(((a_123 != NULL) && (a_123 != b_123)))
            _fail(b_123);
          else
            a_123 = b_123;
        }
        t = not_null(a_123);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm c_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_95(t);
      LocalPopChoice(q_35);
    }
  else
    {
      t = c_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL;
  h_123 = t;
  g_123 :
  if(match_cons(h_123, sym__2))
    {
      i_123 = ATgetArgument(h_123, 0);
      j_123 = ATgetArgument(h_123, 1);
      t = SSL_table_get(not_null(i_123), not_null(j_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL;
  q_123 = t;
  p_123 :
  if(match_cons(q_123, sym__3))
    {
      r_123 = ATgetArgument(q_123, 0);
      s_123 = ATgetArgument(q_123, 1);
      t_123 = ATgetArgument(q_123, 2);
      {
        ATerm r_35;
        r_35 = t;
        {
          ATerm x_123 = NULL;
          ATerm y_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_123), not_null(s_123));
          {
            ATerm s_35 = t;
            int t_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_35);
              }
            else
              {
                t = s_35;
                t = (ATerm) ATempty;
              }
            {
              y_123 = t;
              if(((x_123 != NULL) && (x_123 != y_123)))
                _fail(y_123);
              else
                x_123 = y_123;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_123), not_null(s_123), (ATerm) ATinsert(CheckATermList(not_null(x_123)), not_null(t_123)));
            t = table_put_0(t);
          }
        }
        t = r_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_115 (ATerm))
{
  ATerm c_124 = NULL;
  ATerm d_124 = NULL;
  t = term_x_26;
  {
    t = q_115(t);
    {
      d_124 = t;
      if(((c_124 != NULL) && (c_124 != d_124)))
        _fail(d_124);
      else
        c_124 = d_124;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, not_null(c_124));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL;
  j_124 = t;
  i_124 :
  if(match_string(j_124, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_124) == AT_LIST) && !(ATisEmpty(j_124))))
        {
          k_124 = ATgetFirst((ATermList) j_124);
          l_124 = (ATerm) ATgetNext((ATermList) j_124);
          {
            ATerm o_124 = NULL;
            ATerm u_35;
            u_35 = t;
            {
              t = not_null(k_124);
              t = a_0(t);
            }
            t = u_35;
            {
              ATerm p_124 = NULL;
              t = term_x_26;
              {
                t = d_0(t);
                {
                  p_124 = t;
                  if(((o_124 != NULL) && (o_124 != p_124)))
                    _fail(p_124);
                  else
                    o_124 = p_124;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_124)), not_null(o_124));
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
  ATerm q_7 (ATerm t)
  {
    ATerm u_124 = NULL;
    u_124 = t;
    t_124 :
    if(!(match_string(u_124, "--help")))
      {
        if(!(match_string(u_124, "-h")))
          {
            if(!(match_string(u_124, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = term_j_36;
    {
      t = set_config_0(t);
      t = term_k_36;
    }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_l_36;
    return(t);
  }
  t = Option_3(t, q_7, r_7, s_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_124 = NULL,y_124 = NULL,z_124 = NULL;
  x_124 = t;
  w_124 :
  if(((ATgetType(x_124) == AT_LIST) && !(ATisEmpty(x_124))))
    {
      y_124 = ATgetFirst((ATermList) x_124);
      z_124 = (ATerm) ATgetNext((ATermList) x_124);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_124)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_124)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm l_125 = NULL,m_125 = NULL,n_125 = NULL;
  l_125 = t;
  k_125 :
  if(((ATgetType(l_125) == AT_LIST) && !(ATisEmpty(l_125))))
    {
      m_125 = ATgetFirst((ATermList) l_125);
      n_125 = (ATerm) ATgetNext((ATermList) l_125);
      {
        ATerm r_125 = NULL,t_125 = NULL;
        ATerm s_125 = NULL;
        t = SSLgetAnnotations(not_null(l_125));
        {
          s_125 = t;
          if(((r_125 != NULL) && (r_125 != s_125)))
            _fail(s_125);
          else
            r_125 = s_125;
        }
        {
          t = not_null(m_125);
          {
            ATerm v_125 = NULL;
            t = t_80(t);
            {
              t_125 = t;
              {
                t = not_null(n_125);
                {
                  ATerm x_125 = NULL;
                  t = u_80(t);
                  {
                    v_125 = t;
                    {
                      ATerm y_125 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_125)), not_null(t_125)), not_null(r_125));
                      {
                        y_125 = t;
                        if(((x_125 != NULL) && (x_125 != y_125)))
                          _fail(y_125);
                        else
                          x_125 = y_125;
                      }
                      t = not_null(x_125);
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
  ATerm i_126 = NULL;
  i_126 = t;
  h_126 :
  if(((ATgetType(i_126) == AT_LIST) && ATisEmpty(i_126)))
    {
      {
        ATerm k_126 = NULL,m_126 = NULL;
        ATerm m_36;
        m_36 = t;
        {
          ATerm l_126 = NULL;
          t = SSLgetAnnotations(not_null(i_126));
          {
            l_126 = t;
            if(((k_126 != NULL) && (k_126 != l_126)))
              _fail(l_126);
            else
              k_126 = l_126;
          }
        }
        t = m_36;
        {
          ATerm n_126 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_126));
          {
            n_126 = t;
            if(((m_126 != NULL) && (m_126 != n_126)))
              _fail(n_126);
            else
              m_126 = n_126;
          }
          t = not_null(m_126);
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
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL;
  t_126 = t;
  s_126 :
  if(match_cons(t_126, sym__2))
    {
      u_126 = ATgetArgument(t_126, 0);
      v_126 = ATgetArgument(t_126, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_29, not_null(u_126), not_null(v_126));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_115 (ATerm))
{
  ATerm n_36;
  n_36 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_36;
        t = o_115(t);
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        {
        }
      }
  }
  t = n_36;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm d_127 = NULL;
      ATerm r_36;
      r_36 = t;
      {
        ATerm b_127 = NULL;
        ATerm c_127 = NULL;
        c_127 = t;
        if(((b_127 != NULL) && (b_127 != c_127)))
          _fail(c_127);
        else
          b_127 = c_127;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_33, not_null(b_127));
          t = set_config_0(t);
        }
      }
      t = r_36;
      {
        ATerm e_127 = NULL;
        e_127 = t;
        if(((d_127 != NULL) && (d_127 != e_127)))
          _fail(e_127);
        else
          d_127 = e_127;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_127));
      }
      return(t);
    }
    ATerm u_7 (ATerm t)
    {
      ATerm s_36 = t;
      int c_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_37 = t;
          int e_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_37);
            }
          else
            {
              t = d_37;
              {
                t = o_115(t);
                t = Cons_2(t, _id, u_7);
              }
            }
          LocalPopChoice(c_37);
        }
      else
        {
          t = s_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_7, u_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_127 = NULL,l_127 = NULL,m_127 = NULL;
  ATerm f_37;
  f_37 = t;
  {
    ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL;
    n_127 = t;
    j_127 :
    if(match_cons(n_127, sym__3))
      {
        o_127 = ATgetArgument(n_127, 0);
        p_127 = ATgetArgument(n_127, 1);
        q_127 = ATgetArgument(n_127, 2);
        {
          if(((k_127 != NULL) && (k_127 != o_127)))
            _fail(o_127);
          else
            k_127 = o_127;
          {
            if(((l_127 != NULL) && (l_127 != p_127)))
              _fail(p_127);
            else
              l_127 = p_127;
            {
              if(((m_127 != NULL) && (m_127 != q_127)))
                _fail(q_127);
              else
                m_127 = q_127;
              t = SSL_table_put(not_null(k_127), not_null(l_127), not_null(m_127));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_115 (ATerm))
{
  ATerm t_127 = NULL;
  ATerm t_37;
  t_37 = t;
  {
    t = term_x_37;
    t = table_put_0(t);
  }
  t = t_37;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm y_37 = t;
      int z_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_115(t);
          LocalPopChoice(z_37);
        }
      else
        {
          t = y_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_7);
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_38;
          c_38 = t;
          {
            ATerm d_38 = t;
            int e_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_36;
                t = get_config_0(t);
                LocalPopChoice(e_38);
              }
            else
              {
                t = d_38;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_38;
          {
            t = system_usage_0(t);
            {
              t = term_u_31;
              t = exit_0(t);
            }
          }
          LocalPopChoice(b_38);
        }
      else
        {
          t = a_38;
          {
            ATerm f_38 = t;
            int g_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_7 (ATerm t)
                {
                  ATerm x_7 (ATerm t)
                  {
                    ATerm u_127 = NULL;
                    u_127 = t;
                    if(((t_127 != NULL) && (t_127 != u_127)))
                      _fail(u_127);
                    else
                      t_127 = u_127;
                    return(t);
                  }
                  t = Undefined_1(t, x_7);
                  return(t);
                }
                t = fetch_1(t, w_7);
                {
                  ATerm y_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_127)), term_h_38);
                    return(t);
                  }
                  t = say_1(t, y_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_28;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
                {
                }
              }
          }
        }
      {
        ATerm i_38;
        i_38 = t;
        {
          t = term_s_34;
          t = table_destroy_0(t);
        }
        t = i_38;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm))
{
  t = parse_options_1(t, i_112);
  {
    t = store_options_0(t);
    {
      t = k_112(t);
      {
        ATerm j_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_112);
            LocalPopChoice(m_38);
          }
        else
          {
            t = j_38;
            {
              ATerm n_38 = t;
              int o_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_112(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_38);
                }
              else
                {
                  t = n_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm))
{
  ATerm z_7 (ATerm t)
  {
    ATerm p_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_113(t);
        LocalPopChoice(w_38);
      }
    else
      {
        t = p_38;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_112);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_7, b_113, c_113, a_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm v_112 (ATerm))
{
  ATerm b_8 (ATerm t)
  {
    ATerm c_8 (ATerm t)
    {
      ATerm x_38;
      x_38 = t;
      {
        ATerm x_127 = NULL;
        ATerm y_127 = NULL;
        t = term_l_33;
        {
          t = get_config_0(t);
          {
            y_127 = t;
            if(((x_127 != NULL) && (x_127 != y_127)))
              _fail(y_127);
            else
              x_127 = y_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATempty, not_null(x_127)));
          t = printnl_0(t);
        }
      }
      t = x_38;
      return(t);
    }
    t = if_verbose2_1(t, c_8);
    return(t);
  }
  t = iowrap_4(t, t_112, u_112, v_112, b_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_112 (ATerm), ATerm s_112 (ATerm))
{
  t = iowrap_3(t, r_112, s_112, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_112 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    t = _2(t, _id, o_112);
    return(t);
  }
  t = iowrap_2(t, d_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        {
          ATerm f_8 (ATerm t)
          {
            ATerm g_8 (ATerm t)
            {
              t = term_a_39;
              return(t);
            }
            t = say_1(t, g_8);
            return(t);
          }
          t = if_verbose2_1(t, f_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, e_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
