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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  init_constant_terms();
}
ATerm term_s_36;
ATerm term_z_35;
ATerm term_m_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_b_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_b_30;
ATerm term_z_28;
ATerm term_g_28;
ATerm term_x_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_k_25;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_y_19;
ATerm term_z_17;
ATerm term_y_16;
ATerm term_b_15;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_j_13;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
void init_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATempty);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_u_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_p_6);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_p_6);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_p_6);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_p_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_p_6);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__3, term_k_33, term_p_33, (ATerm) ATempty);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_111 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_91 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm s_90 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_80 (ATerm), ATerm h_80 (ATerm));
ATerm Let_2 (ATerm, ATerm i_80 (ATerm), ATerm j_80 (ATerm));
ATerm sboundin_3 (ATerm, ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm o_90 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm b_82 (ATerm));
ATerm tboundin_3 (ATerm, ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm b_102 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_102 (ATerm), ATerm g_102 (ATerm));
ATerm diff_1 (ATerm, ATerm x_101 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_108 (ATerm), ATerm r_108 (ATerm));
ATerm for_3 (ATerm, ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm s_104 (ATerm), ATerm t_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm m_104 (ATerm), ATerm n_104 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm x_104 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm q_105 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm a_105 (ATerm));
ATerm rename_4 (ATerm, ATerm h_104 (ATerm, ATerm (ATerm)), ATerm i_104 (ATerm), ATerm j_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_104 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_111 (ATerm));
ATerm restore_always_2 (ATerm, ATerm f_95 (ATerm), ATerm g_95 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_111 (ATerm));
ATerm scope_2 (ATerm, ATerm n_111 (ATerm), ATerm o_111 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_111 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm));
ATerm crush_3 (ATerm, ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm Choice_2 (ATerm, ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm Cong_2 (ATerm, ATerm j_79 (ATerm), ATerm k_79 (ATerm));
ATerm Match_1 (ATerm, ATerm a_79 (ATerm));
ATerm Seq_2 (ATerm, ATerm r_79 (ATerm), ATerm s_79 (ATerm));
ATerm Scope_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm Build_1 (ATerm, ATerm b_79 (ATerm));
ATerm SVar_1 (ATerm, ATerm f_80 (ATerm));
ATerm Call_2 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_93 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm));
ATerm zip_1 (ATerm, ATerm m_96 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm Prim_2 (ATerm, ATerm w_78 (ATerm), ATerm x_78 (ATerm));
ATerm Explode_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm Op_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm pat_td_1 (ATerm, ATerm v_117 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm z_107 (ATerm), ATerm a_108 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_108 (ATerm));
ATerm downup_1 (ATerm, ATerm q_91 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_81 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_81 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_98 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_118 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_113 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_112 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_95 (ATerm), ATerm i_95 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_102 (ATerm), ATerm t_102 (ATerm));
ATerm crush_2 (ATerm, ATerm q_101 (ATerm), ATerm r_101 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_113 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_112 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_116 (ATerm));
ATerm map_1 (ATerm, ATerm v_97 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_116 (ATerm));
ATerm Program_1 (ATerm, ATerm o_88 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_118 (ATerm));
ATerm Undefined_1 (ATerm, ATerm p_88 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_98 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_115 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_94 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_116 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_116 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_116 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm j_112 (ATerm));
ATerm iowrap_4 (ATerm, ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_112 (ATerm), ATerm q_112 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_112 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,j_6 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      j_6 = ATgetArgument(c_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(j_6));
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
ATerm rewrite_1 (ATerm t, ATerm r_111 (ATerm))
{
  ATerm o_7 = NULL;
  ATerm u_7 = NULL;
  o_7 = t;
  {
    ATerm v_7 = NULL;
    t = term_p_6;
    {
      t = r_111(t);
      {
        v_7 = t;
        if(((u_7 != NULL) && (u_7 != v_7)))
          _fail(v_7);
        else
          u_7 = v_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), not_null(o_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  f_8 = t;
  d_8 :
  if(match_cons(f_8, sym_Call_2))
    {
      g_8 = ATgetArgument(f_8, 0);
      i_8 = ATgetArgument(f_8, 1);
      e_8 :
      if(match_cons(g_8, sym_SVar_1))
        {
          h_8 = ATgetArgument(g_8, 0);
          {
            ATerm m_8 = NULL;
            ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_8)), term_q_6);
            {
              ATerm c_0 (ATerm t)
              {
                t = term_r_6;
                return(t);
              }
              t = rewrite_1(t, c_0);
              {
                n_8 = t;
                b_8 :
                if(match_cons(n_8, sym_Defined_2))
                  {
                    o_8 = ATgetArgument(n_8, 0);
                    p_8 = ATgetArgument(n_8, 1);
                    c_8 :
                    if(match_string(o_8, "n_0"))
                      {
                        if(((m_8 != NULL) && (m_8 != p_8)))
                          _fail(p_8);
                        else
                          m_8 = p_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_8)), not_null(i_8));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  w_8 :
  if(match_cons(z_8, sym_Call_2))
    {
      a_9 = ATgetArgument(z_8, 0);
      c_9 = ATgetArgument(z_8, 1);
      x_8 :
      if(match_cons(a_9, sym_SVar_1))
        {
          b_9 = ATgetArgument(a_9, 0);
          y_8 :
          if(((ATgetType(c_9) == AT_LIST) && ATisEmpty(c_9)))
            {
              {
                ATerm f_9 = NULL;
                ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
                t = not_null(z_8);
                {
                  ATerm e_0 (ATerm t)
                  {
                    t = term_s_6;
                    return(t);
                  }
                  t = rewrite_1(t, e_0);
                  {
                    g_9 = t;
                    u_8 :
                    if(match_cons(g_9, sym_Defined_2))
                      {
                        h_9 = ATgetArgument(g_9, 0);
                        i_9 = ATgetArgument(g_9, 1);
                        v_8 :
                        if(match_string(h_9, "k_0"))
                          {
                            if(((f_9 != NULL) && (f_9 != i_9)))
                              _fail(i_9);
                            else
                              f_9 = i_9;
                          }
                        else
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
                {
                  t = not_null(f_9);
                  t = strename_0(t);
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
ATerm topdown_1 (ATerm t, ATerm o_91 (ATerm))
{
  t = o_91(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1(t, o_91);
      return(t);
    }
    t = _all(t, p_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  a_10 = t;
  n_9 :
  if(match_cons(a_10, sym__2))
    {
      b_10 = ATgetArgument(a_10, 0);
      i_10 = ATgetArgument(a_10, 1);
      o_9 :
      if(match_cons(b_10, sym_VarDec_2))
        {
          c_10 = ATgetArgument(b_10, 0);
          d_10 = ATgetArgument(b_10, 1);
          p_9 :
          if(match_cons(d_10, sym_FunType_2))
            {
              e_10 = ATgetArgument(d_10, 0);
              h_10 = ATgetArgument(d_10, 1);
              q_9 :
              if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
                {
                  f_10 = ATgetFirst((ATermList) e_10);
                  g_10 = (ATerm) ATgetNext((ATermList) e_10);
                  r_9 :
                  if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
                    {
                      v_9 = ATgetFirst((ATermList) g_10);
                      w_9 = (ATerm) ATgetNext((ATermList) g_10);
                      s_9 :
                      if(match_cons(i_10, sym_Call_2))
                        {
                          x_9 = ATgetArgument(i_10, 0);
                          z_9 = ATgetArgument(i_10, 1);
                          t_9 :
                          if(match_cons(x_9, sym_SVar_1))
                            {
                              y_9 = ATgetArgument(x_9, 0);
                              u_9 :
                              if(((ATgetType(z_9) == AT_LIST) && ATisEmpty(z_9)))
                                {
                                  {
                                    ATerm t_6;
                                    t_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_10)), term_q_6), (ATerm) ATmakeAppl(sym_Defined_2, term_u_6, not_null(y_9)));
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          t = term_r_6;
                                          return(t);
                                        }
                                        t = assert_1(t, q_0);
                                      }
                                    }
                                    t = t_6;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(g_10) == AT_LIST) && ATisEmpty(g_10)))
                        {
                          {
                            ATerm v_6;
                            v_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_10)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_6, not_null(i_10)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_s_6;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = v_6;
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
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm substitute_args_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  ATerm s_0 (ATerm t)
  {
    t = term_s_6;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_r_6;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
      u_10 = t;
      q_10 :
      if(match_cons(u_10, sym__3))
        {
          v_10 = ATgetArgument(u_10, 0);
          w_10 = ATgetArgument(u_10, 1);
          x_10 = ATgetArgument(u_10, 2);
          {
            if(((r_10 != NULL) && (r_10 != v_10)))
              _fail(v_10);
            else
              r_10 = v_10;
            {
              if(((s_10 != NULL) && (s_10 != w_10)))
                _fail(w_10);
              else
                s_10 = w_10;
              {
                if(((t_10 != NULL) && (t_10 != x_10)))
                  _fail(x_10);
                else
                  t_10 = x_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), not_null(s_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(t_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm x_6 = t;
                          int y_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_6 = t;
                              int a_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SubsArgCall1_0(t);
                                  LocalPopChoice(a_7);
                                }
                              else
                                {
                                  t = z_6;
                                  t = SubsArgCall2_0(t);
                                }
                              LocalPopChoice(y_6);
                            }
                          else
                            {
                              t = x_6;
                              {
                              }
                            }
                          return(t);
                        }
                        t = topdown_1(t, w_0);
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
    t = scope_2(t, u_0, v_0);
    return(t);
  }
  t = scope_2(t, s_0, t_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  a_11 :
  if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
    {
      c_11 = ATgetFirst((ATermList) b_11);
      d_11 = (ATerm) ATgetNext((ATermList) b_11);
      t = not_null(c_11);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm s_90 (ATerm))
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        t = split_2(t, _id, s_90);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
            n_11 = t;
            i_11 :
            if(match_cons(n_11, sym__2))
              {
                o_11 = ATgetArgument(n_11, 0);
                s_11 = ATgetArgument(n_11, 1);
                j_11 :
                if(match_cons(o_11, sym_SDef_3))
                  {
                    p_11 = ATgetArgument(o_11, 0);
                    q_11 = ATgetArgument(o_11, 1);
                    r_11 = ATgetArgument(o_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_11), not_null(q_11), not_null(r_11));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, y_0);
        }
        return(t);
      }
      t = Let_2(t, x_0, _id);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm d_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = split_2(t, _id, s_90);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
                  w_11 = t;
                  l_11 :
                  if(match_cons(w_11, sym__2))
                    {
                      x_11 = ATgetArgument(w_11, 0);
                      a_12 = ATgetArgument(w_11, 1);
                      m_11 :
                      if(match_cons(x_11, sym_VarDec_2))
                        {
                          y_11 = ATgetArgument(x_11, 0);
                          z_11 = ATgetArgument(x_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_12), not_null(z_11));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, a_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, z_0, _id);
            LocalPopChoice(e_7);
          }
        else
          {
            t = d_7;
            {
              ATerm b_1 (ATerm t)
              {
                t = s_90(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, b_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm g_80 (ATerm), ATerm h_80 (ATerm))
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym_Rec_2))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      {
        ATerm s_12 = NULL,u_12 = NULL;
        ATerm t_12 = NULL;
        t = SSLgetAnnotations(not_null(m_12));
        {
          t_12 = t;
          if(((s_12 != NULL) && (s_12 != t_12)))
            _fail(t_12);
          else
            s_12 = t_12;
        }
        {
          t = not_null(n_12);
          {
            ATerm w_12 = NULL;
            t = g_80(t);
            {
              u_12 = t;
              {
                t = not_null(o_12);
                {
                  ATerm y_12 = NULL;
                  t = h_80(t);
                  {
                    w_12 = t;
                    {
                      ATerm z_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_12), not_null(w_12)), not_null(s_12));
                      {
                        z_12 = t;
                        if(((y_12 != NULL) && (y_12 != z_12)))
                          _fail(z_12);
                        else
                          y_12 = z_12;
                      }
                      t = not_null(y_12);
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
ATerm Let_2 (ATerm t, ATerm i_80 (ATerm), ATerm j_80 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_Let_2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      {
        ATerm r_13 = NULL,t_13 = NULL;
        ATerm s_13 = NULL;
        t = SSLgetAnnotations(not_null(l_13));
        {
          s_13 = t;
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
        }
        {
          t = not_null(m_13);
          {
            ATerm v_13 = NULL;
            t = i_80(t);
            {
              t_13 = t;
              {
                t = not_null(n_13);
                {
                  ATerm x_13 = NULL;
                  t = j_80(t);
                  {
                    v_13 = t;
                    {
                      ATerm y_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_13), not_null(v_13)), not_null(r_13));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm))
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, t_90, t_90);
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, v_90, v_90, t_90);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = Rec_2(t, v_90, t_90);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_Rec_2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(h_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_SDef_3))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      t_14 = ATgetArgument(q_14, 2);
      {
        t = not_null(s_14);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
            x_14 = t;
            o_14 :
            if(match_cons(x_14, sym_VarDec_2))
              {
                y_14 = ATgetArgument(x_14, 0);
                z_14 = ATgetArgument(x_14, 1);
                t = not_null(y_14);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_1);
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym_Let_2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      {
        t = not_null(i_15);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
            m_15 = t;
            f_15 :
            if(match_cons(m_15, sym_SDef_3))
              {
                n_15 = ATgetArgument(m_15, 0);
                o_15 = ATgetArgument(m_15, 1);
                p_15 = ATgetArgument(m_15, 2);
                t = not_null(n_15);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, d_1);
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
  ATerm e_1 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        {
          ATerm l_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(m_7);
            }
          else
            {
              t = l_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, e_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm o_90 (ATerm))
{
  t = Scope_2(t, o_90, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_DynamicRules_1))
    {
      b_16 = ATgetArgument(a_16, 0);
      {
        ATerm e_16 = NULL,g_16 = NULL;
        ATerm f_16 = NULL;
        t = SSLgetAnnotations(not_null(a_16));
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
        {
          t = not_null(b_16);
          {
            ATerm i_16 = NULL;
            t = b_82(t);
            {
              g_16 = t;
              {
                ATerm j_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(g_16)), not_null(e_16));
                {
                  j_16 = t;
                  if(((i_16 != NULL) && (i_16 != j_16)))
                    _fail(j_16);
                  else
                    i_16 = j_16;
                }
                t = not_null(i_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm))
{
  ATerm n_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, r_90, p_90);
      LocalPopChoice(p_7);
    }
  else
    {
      t = n_7;
      t = DynamicRules_1(t, p_90);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym_DynamicRules_1))
    {
      r_16 = ATgetArgument(q_16, 0);
      {
        t = not_null(r_16);
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
  ATerm w_16 = NULL,x_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym_Var_1))
    {
      x_16 = ATgetArgument(w_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(x_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_102 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        t = not_null(d_17);
        {
          ATerm i_17 (ATerm t)
          {
            ATerm q_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_17);
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
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(e_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_102, f_1);
                      t = i_17(t);
                      LocalPopChoice(t_7);
                    }
                  else
                    {
                      t = s_7;
                      t = Cons_2(t, _id, i_17);
                    }
                }
              }
            return(t);
          }
          t = i_17(t);
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
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      if(((m_17 != NULL) && (m_17 != n_17)))
        _fail(n_17);
      else
        m_17 = n_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_102 (ATerm), ATerm g_102 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
    {
      u_17 = ATgetFirst((ATermList) t_17);
      v_17 = (ATerm) ATgetNext((ATermList) t_17);
      {
        t = g_102(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm y_17 = NULL;
            y_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(y_17));
              t = f_102(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
        }
        t = not_null(v_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm x_101 (ATerm))
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        t = not_null(f_18);
        {
          ATerm k_18 (ATerm t)
          {
            ATerm w_7 = t;
            int x_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(g_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_101, h_1);
                      t = k_18(t);
                      LocalPopChoice(z_7);
                    }
                  else
                    {
                      t = y_7;
                      t = Cons_2(t, _id, k_18);
                    }
                }
              }
            return(t);
          }
          t = k_18(t);
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
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  o_18 = t;
  m_18 :
  if(match_cons(o_18, sym__2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      n_18 :
      if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
        {
          r_18 = ATgetFirst((ATermList) q_18);
          s_18 = (ATerm) ATgetNext((ATermList) q_18);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_18)), not_null(r_18)), not_null(s_18));
        }
      else
        {
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
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  h_19 = t;
  f_19 :
  if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
    {
      i_19 = ATgetFirst((ATermList) h_19);
      l_19 = (ATerm) ATgetNext((ATermList) h_19);
      g_19 :
      if(match_cons(i_19, sym__2))
        {
          j_19 = ATgetArgument(i_19, 0);
          k_19 = ATgetArgument(i_19, 1);
          {
            ATerm p_19 = NULL,q_19 = NULL,w_19 = NULL,c_20 = NULL;
            ATerm a_8;
            a_8 = t;
            {
              ATerm r_19 = NULL;
              ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
              t = not_null(k_19);
              {
                r_19 = t;
                {
                  t = SSL_explode_term(not_null(r_19));
                  {
                    t_19 = t;
                    a_19 :
                    if(match_cons(t_19, sym__2))
                      {
                        u_19 = ATgetArgument(t_19, 0);
                        v_19 = ATgetArgument(t_19, 1);
                        {
                          if(((p_19 != NULL) && (p_19 != u_19)))
                            _fail(u_19);
                          else
                            p_19 = u_19;
                          if(((q_19 != NULL) && (q_19 != v_19)))
                            _fail(v_19);
                          else
                            q_19 = v_19;
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
            t = a_8;
            {
              ATerm j_8;
              j_8 = t;
              {
                ATerm x_19 = NULL;
                ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
                t = not_null(j_19);
                {
                  x_19 = t;
                  {
                    t = SSL_explode_term(not_null(x_19));
                    {
                      z_19 = t;
                      d_19 :
                      if(match_cons(z_19, sym__2))
                        {
                          a_20 = ATgetArgument(z_19, 0);
                          b_20 = ATgetArgument(z_19, 1);
                          {
                            if(((p_19 != NULL) && (p_19 != a_20)))
                              _fail(a_20);
                            else
                              p_19 = a_20;
                            if(((w_19 != NULL) && (w_19 != b_20)))
                              _fail(b_20);
                            else
                              w_19 = b_20;
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
              t = j_8;
              {
                ATerm d_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(q_19));
                {
                  t = zip_1(t, _id);
                  {
                    d_20 = t;
                    if(((c_20 != NULL) && (c_20 != d_20)))
                      _fail(d_20);
                    else
                      c_20 = d_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), not_null(l_19));
                  {
                    ATerm k_8 = t;
                    int l_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(l_8);
                      }
                    else
                      {
                        t = k_8;
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
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  n_20 = t;
  l_20 :
  if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
    {
      o_20 = ATgetFirst((ATermList) n_20);
      r_20 = (ATerm) ATgetNext((ATermList) n_20);
      m_20 :
      if(match_cons(o_20, sym__2))
        {
          p_20 = ATgetArgument(o_20, 0);
          q_20 = ATgetArgument(o_20, 1);
          {
            ATerm t_20 = NULL;
            if(((p_20 != NULL) && (p_20 != q_20)))
              _fail(q_20);
            else
              p_20 = q_20;
            {
              if(((t_20 != NULL) && (t_20 != r_20)))
                _fail(r_20);
              else
                t_20 = r_20;
              t = not_null(t_20);
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
ATerm while_not_2 (ATerm t, ATerm q_108 (ATerm), ATerm r_108 (ATerm))
{
  ATerm v_20 (ATerm t)
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_108(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          t = r_108(t);
          t = v_20(t);
        }
      }
    return(t);
  }
  t = v_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm))
{
  t = t_108(t);
  t = while_not_2(t, u_108, v_108);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm x_20 = NULL;
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_20));
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, l_1);
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, i_1, j_1, k_1);
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_21 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_106(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_21 = NULL;
              ATerm l_10;
              l_10 = t;
              {
                ATerm c_21 = NULL;
                t = l_106(t);
                {
                  c_21 = t;
                  if(((b_21 != NULL) && (b_21 != c_21)))
                    _fail(c_21);
                  else
                    b_21 = c_21;
                }
              }
              t = l_10;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm o_1 (ATerm t)
                  {
                    t = not_null(b_21);
                    return(t);
                  }
                  t = split_2(t, d_21, o_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm n_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = m_106(t, m_1, d_21, n_1);
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm q_1 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, p_1, q_1, _id);
                }
              }
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm s_1 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, r_1, s_1, d_21);
              }
            }
        }
      }
    return(t);
  }
  t = d_21(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, t_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  h_21 :
  if(match_cons(m_21, sym_LRule_1))
    {
      n_21 = ATgetArgument(m_21, 0);
      i_21 :
      if(match_cons(n_21, sym_Rule_3))
        {
          j_21 = ATgetArgument(n_21, 0);
          k_21 = ATgetArgument(n_21, 1);
          l_21 = ATgetArgument(n_21, 2);
          {
            t = not_null(j_21);
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
      if(match_cons(m_21, sym_Scope_2))
        {
          n_21 = ATgetArgument(m_21, 0);
          o_21 = ATgetArgument(m_21, 1);
          t = not_null(n_21);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_Var_1))
    {
      g_22 = ATgetArgument(f_22, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22 = NULL,l_22 = NULL;
            ATerm k_22 = NULL;
            t = SSLgetAnnotations(not_null(f_22));
            {
              k_22 = t;
              if(((j_22 != NULL) && (j_22 != k_22)))
                _fail(k_22);
              else
                j_22 = k_22;
            }
            {
              t = not_null(g_22);
              {
                ATerm n_22 = NULL;
                t = o_0(t);
                {
                  l_22 = t;
                  {
                    ATerm o_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_22)), not_null(j_22));
                    {
                      o_22 = t;
                      if(((n_22 != NULL) && (n_22 != o_22)))
                        _fail(o_22);
                      else
                        n_22 = o_22;
                    }
                    t = not_null(n_22);
                  }
                }
              }
            }
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm r_22 = NULL,t_22 = NULL;
              ATerm s_22 = NULL;
              t = SSLgetAnnotations(not_null(f_22));
              {
                s_22 = t;
                if(((r_22 != NULL) && (r_22 != s_22)))
                  _fail(s_22);
                else
                  r_22 = s_22;
              }
              {
                t = not_null(g_22);
                {
                  ATerm v_22 = NULL;
                  t = o_0(t);
                  {
                    t_22 = t;
                    {
                      ATerm w_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_22)), not_null(r_22));
                      {
                        w_22 = t;
                        if(((v_22 != NULL) && (v_22 != w_22)))
                          _fail(w_22);
                        else
                          v_22 = w_22;
                      }
                      t = not_null(v_22);
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
ATerm DistBinding_2 (ATerm t, ATerm s_104 (ATerm), ATerm t_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym__3))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      m_23 = ATgetArgument(j_23, 2);
      {
        t = not_null(k_23);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm q_23 = NULL;
            q_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(m_23));
              t = s_104(t);
            }
            return(t);
          }
          ATerm v_1 (ATerm t)
          {
            ATerm s_23 = NULL;
            s_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(l_23));
              t = s_104(t);
            }
            return(t);
          }
          t = t_104(t, u_1, v_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm m_104 (ATerm), ATerm n_104 (ATerm, ATerm (ATerm)))
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      {
        ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,r_24 = NULL;
        ATerm y_10;
        y_10 = t;
        {
          ATerm m_24 = NULL;
          t = not_null(f_24);
          {
            ATerm n_24 = NULL;
            t = m_104(t);
            {
              m_24 = t;
              {
                if(((j_24 != NULL) && (j_24 != m_24)))
                  _fail(m_24);
                else
                  j_24 = m_24;
                {
                  ATerm o_24 = NULL,q_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    n_24 = t;
                    {
                      if(((k_24 != NULL) && (k_24 != n_24)))
                        _fail(n_24);
                      else
                        k_24 = n_24;
                      {
                        ATerm p_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(k_24));
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
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_24), not_null(g_24));
                          {
                            ATerm z_10 = t;
                            int e_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(e_11);
                              }
                            else
                              {
                                t = z_10;
                                t = conc_more_lists_0(t);
                              }
                            {
                              q_24 = t;
                              if(((l_24 != NULL) && (l_24 != q_24)))
                                _fail(q_24);
                              else
                                l_24 = q_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = y_10;
        {
          ATerm s_24 = NULL;
          t = not_null(f_24);
          {
            ATerm w_1 (ATerm t)
            {
              t = not_null(k_24);
              return(t);
            }
            t = n_104(t, w_1);
            {
              s_24 = t;
              if(((r_24 != NULL) && (r_24 != s_24)))
                _fail(s_24);
              else
                r_24 = s_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(r_24), not_null(g_24), not_null(l_24));
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
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  c_25 = t;
  a_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      b_25 :
      if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
        {
          f_25 = ATgetFirst((ATermList) e_25);
          g_25 = (ATerm) ATgetNext((ATermList) e_25);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), not_null(g_25));
        }
      else
        {
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
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  o_25 = t;
  l_25 :
  if(match_cons(o_25, sym__2))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      m_25 :
      if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
        {
          r_25 = ATgetFirst((ATermList) q_25);
          u_25 = (ATerm) ATgetNext((ATermList) q_25);
          n_25 :
          if(match_cons(r_25, sym__2))
            {
              s_25 = ATgetArgument(r_25, 0);
              t_25 = ATgetArgument(r_25, 1);
              {
                ATerm w_25 = NULL;
                if(((p_25 != NULL) && (p_25 != s_25)))
                  _fail(s_25);
                else
                  p_25 = s_25;
                {
                  if(((w_25 != NULL) && (w_25 != t_25)))
                    _fail(t_25);
                  else
                    w_25 = t_25;
                  t = not_null(w_25);
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
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm x_104 (ATerm, ATerm (ATerm)))
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym__2))
    {
      c_26 = ATgetArgument(b_26, 0);
      d_26 = ATgetArgument(b_26, 1);
      {
        t = not_null(c_26);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm y_1 (ATerm t)
            {
              t = not_null(d_26);
              return(t);
            }
            t = split_2(t, _id, y_1);
            t = lookup_0(t);
            return(t);
          }
          t = x_104(t, x_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm q_105 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym__2))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      {
        t = not_null(l_26);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm p_26 = NULL;
            p_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(m_26));
              t = q_105(t);
            }
            return(t);
          }
          t = _all(t, z_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm a_105 (ATerm))
{
  ATerm t_26 (ATerm t)
  {
    ATerm h_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_105(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = h_11;
        t = all_dist_1(t, t_26);
      }
    return(t);
  }
  t = t_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_104 (ATerm, ATerm (ATerm)), ATerm i_104 (ATerm), ATerm j_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_104 (ATerm, ATerm (ATerm)))
{
  ATerm v_26 = NULL;
  v_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), (ATerm) ATempty);
    {
      ATerm y_26 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, h_104);
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              {
                t = RnBinding_2(t, i_104, k_104);
                t = DistBinding_2(t, y_26, j_104);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, a_2);
        return(t);
      }
      t = y_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm z_26 (ATerm t, ATerm a_27 (ATerm))
  {
    t = Scope_2(t, a_27, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, z_26);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  ATerm v_29 (ATerm t)
  {
    ATerm i_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_28)), term_q_6);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        i_28 = t;
        h_27 :
        if(match_cons(i_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_b_12;
    return(t);
  }
  ATerm w_29 (ATerm t)
  {
    ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
    ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
    t = not_null(c_28);
    {
      ATerm c_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        p_28 = t;
        n_27 :
        if(match_cons(p_28, sym_Defined_2))
          {
            q_28 = ATgetArgument(p_28, 0);
            r_28 = ATgetArgument(p_28, 1);
            o_27 :
            if(match_string(q_28, "g_0"))
              {
                ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
                if(((l_28 != NULL) && (l_28 != r_28)))
                  _fail(r_28);
                else
                  l_28 = r_28;
                {
                  t = not_null(l_28);
                  {
                    t = strename_0(t);
                    {
                      s_28 = t;
                      l_27 :
                      if(match_cons(s_28, sym_SDef_3))
                        {
                          t_28 = ATgetArgument(s_28, 0);
                          u_28 = ATgetArgument(s_28, 1);
                          x_28 = ATgetArgument(s_28, 2);
                          m_27 :
                          if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
                            {
                              v_28 = ATgetFirst((ATermList) u_28);
                              w_28 = (ATerm) ATgetNext((ATermList) u_28);
                              {
                                ATerm y_28 = NULL;
                                if(((e_28 != NULL) && (e_28 != t_28)))
                                  _fail(t_28);
                                else
                                  e_28 = t_28;
                                {
                                  if(((m_28 != NULL) && (m_28 != u_28)))
                                    _fail(u_28);
                                  else
                                    m_28 = u_28;
                                  {
                                    if(((n_28 != NULL) && (n_28 != x_28)))
                                      _fail(x_28);
                                    else
                                      n_28 = x_28;
                                    {
                                      t = new_0(t);
                                      {
                                        y_28 = t;
                                        {
                                          if(((o_28 != NULL) && (o_28 != y_28)))
                                            _fail(y_28);
                                          else
                                            o_28 = y_28;
                                          {
                                            ATerm c_12;
                                            c_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_28)), term_q_6), term_b_12);
                                              {
                                                ATerm d_2 (ATerm t)
                                                {
                                                  t = term_v_11;
                                                  return(t);
                                                }
                                                t = assert_1(t, d_2);
                                              }
                                            }
                                            t = c_12;
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
                }
              }
            else
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_28), not_null(m_28), not_null(n_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_28)), (ATerm) ATempty));
    return(t);
  }
  ATerm x_29 (ATerm t)
  {
    ATerm b_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_28)), term_q_6);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        b_29 = t;
        q_27 :
        if(match_cons(b_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_b_12;
    return(t);
  }
  ATerm y_29 (ATerm t)
  {
    ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_28)), term_q_6);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, f_2);
      {
        j_29 = t;
        v_27 :
        if(match_cons(j_29, sym_Defined_2))
          {
            k_29 = ATgetArgument(j_29, 0);
            l_29 = ATgetArgument(j_29, 1);
            w_27 :
            if(match_string(k_29, "d_0"))
              {
                ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
                if(((f_29 != NULL) && (f_29 != l_29)))
                  _fail(l_29);
                else
                  f_29 = l_29;
                {
                  t = not_null(f_29);
                  {
                    t = strename_0(t);
                    {
                      m_29 = t;
                      u_27 :
                      if(match_cons(m_29, sym_SDef_3))
                        {
                          n_29 = ATgetArgument(m_29, 0);
                          o_29 = ATgetArgument(m_29, 1);
                          p_29 = ATgetArgument(m_29, 2);
                          {
                            ATerm q_29 = NULL;
                            if(((e_28 != NULL) && (e_28 != n_29)))
                              _fail(n_29);
                            else
                              e_28 = n_29;
                            {
                              if(((g_29 != NULL) && (g_29 != o_29)))
                                _fail(o_29);
                              else
                                g_29 = o_29;
                              {
                                if(((h_29 != NULL) && (h_29 != p_29)))
                                  _fail(p_29);
                                else
                                  h_29 = p_29;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_29), not_null(f_28), not_null(h_29));
                                  {
                                    t = substitute_args_0(t);
                                    {
                                      q_29 = t;
                                      {
                                        if(((i_29 != NULL) && (i_29 != q_29)))
                                          _fail(q_29);
                                        else
                                          i_29 = q_29;
                                        {
                                          ATerm d_12;
                                          d_12 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_28)), term_q_6), term_b_12);
                                            {
                                              ATerm g_2 (ATerm t)
                                              {
                                                t = term_v_11;
                                                return(t);
                                              }
                                              t = assert_1(t, g_2);
                                            }
                                          }
                                          t = d_12;
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
            else
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
    t = not_null(i_29);
    return(t);
  }
  ATerm z_29 (ATerm t)
  {
    ATerm u_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_28)), term_q_6);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, h_2);
      {
        u_29 = t;
        y_27 :
        if(match_cons(u_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_b_12;
    return(t);
  }
  c_28 = t;
  z_27 :
  if(match_cons(c_28, sym_Call_2))
    {
      d_28 = ATgetArgument(c_28, 0);
      f_28 = ATgetArgument(c_28, 1);
      a_28 :
      if(match_cons(d_28, sym_SVar_1))
        {
          e_28 = ATgetArgument(d_28, 0);
          b_28 :
          if(((ATgetType(f_28) == AT_LIST) && ATisEmpty(f_28)))
            {
              {
                ATerm e_12 = t;
                int f_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_29(t);
                    LocalPopChoice(f_12);
                  }
                else
                  {
                    t = e_12;
                    {
                      ATerm g_12 = t;
                      int h_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_29(t);
                          LocalPopChoice(h_12);
                        }
                      else
                        {
                          t = g_12;
                          {
                            ATerm i_12 = t;
                            int j_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_29(t);
                                LocalPopChoice(j_12);
                              }
                            else
                              {
                                t = i_12;
                                {
                                  ATerm k_12 = t;
                                  int p_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_29(t);
                                      LocalPopChoice(p_12);
                                    }
                                  else
                                    {
                                      t = k_12;
                                      t = z_29(t);
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
              ATerm q_12 = t;
              int r_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_29(t);
                  LocalPopChoice(r_12);
                }
              else
                {
                  t = q_12;
                  {
                    ATerm v_12 = t;
                    int x_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = x_29(t);
                        LocalPopChoice(x_12);
                      }
                    else
                      {
                        t = v_12;
                        {
                          ATerm a_13 = t;
                          int b_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_29(t);
                              LocalPopChoice(b_13);
                            }
                          else
                            {
                              t = a_13;
                              t = z_29(t);
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
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym_SDef_3))
    {
      m_30 = ATgetArgument(l_30, 0);
      n_30 = ATgetArgument(l_30, 1);
      o_30 = ATgetArgument(l_30, 2);
      {
        ATerm c_13;
        c_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_30)), term_q_6), term_b_12);
          {
            ATerm i_2 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = assert_1(t, i_2);
          }
        }
        t = c_13;
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
  ATerm f_32 = NULL,e_33 = NULL,f_33 = NULL;
  f_32 = t;
  e_32 :
  if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
    {
      e_33 = ATgetFirst((ATermList) f_32);
      f_33 = (ATerm) ATgetNext((ATermList) f_32);
      t = not_null(f_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  l_33 :
  if(match_cons(m_33, sym__2))
    {
      n_33 = ATgetArgument(m_33, 0);
      o_33 = ATgetArgument(m_33, 1);
      {
        ATerm d_13;
        d_13 = t;
        {
          ATerm r_33 = NULL;
          ATerm s_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_33), not_null(o_33));
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                t = (ATerm) ATempty;
              }
            {
              s_33 = t;
              if(((r_33 != NULL) && (r_33 != s_33)))
                _fail(s_33);
              else
                r_33 = s_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_33), not_null(o_33), not_null(r_33));
            t = table_put_0(t);
          }
        }
        t = d_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_111 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  ATerm g_13;
  g_13 = t;
  {
    ATerm d_34 = NULL;
    ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
    t = m_111(t);
    {
      d_34 = t;
      {
        if(((c_34 != NULL) && (c_34 != d_34)))
          _fail(d_34);
        else
          c_34 = d_34;
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), term_j_13);
              t = table_get_0(t);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_34 = t;
            z_33 :
            if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
              {
                f_34 = ATgetFirst((ATermList) e_34);
                g_34 = (ATerm) ATgetNext((ATermList) e_34);
                {
                  if(((b_34 != NULL) && (b_34 != f_34)))
                    _fail(f_34);
                  else
                    b_34 = f_34;
                  {
                    if(((a_34 != NULL) && (a_34 != g_34)))
                      _fail(g_34);
                    else
                      a_34 = g_34;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_34), term_j_13, not_null(a_34));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_34);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm h_34 = NULL;
                              h_34 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), not_null(h_34));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_2);
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
  t = g_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm f_95 (ATerm), ATerm g_95 (ATerm))
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_95(t);
      t = g_95(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        t = g_95(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_111 (ATerm))
{
  ATerm o_34 = NULL;
  ATerm q_13;
  q_13 = t;
  {
    ATerm p_34 = NULL;
    ATerm q_34 = NULL;
    t = l_111(t);
    {
      p_34 = t;
      {
        if(((o_34 != NULL) && (o_34 != p_34)))
          _fail(p_34);
        else
          o_34 = p_34;
        {
          ATerm r_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_34), term_j_13);
          {
            ATerm u_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_13);
              }
            else
              {
                t = u_13;
                t = (ATerm) ATempty;
              }
            {
              r_34 = t;
              if(((q_34 != NULL) && (q_34 != r_34)))
                _fail(r_34);
              else
                q_34 = r_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_34), term_j_13, (ATerm) ATinsert(CheckATermList(not_null(q_34)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm n_111 (ATerm), ATerm o_111 (ATerm))
{
  t = begin_scope_1(t, n_111);
  {
    ATerm k_2 (ATerm t)
    {
      t = end_scope_1(t, n_111);
      return(t);
    }
    t = restore_always_2(t, o_111, k_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = repeat_2(t, InlineCall_0, _id);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, l_2, m_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_111 (ATerm))
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
        ATerm b_14;
        b_14 = t;
        {
          ATerm i_35 = NULL;
          ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
          t = p_111(t);
          {
            i_35 = t;
            {
              if(((f_35 != NULL) && (f_35 != i_35)))
                _fail(i_35);
              else
                f_35 = i_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_35), not_null(b_35), not_null(c_35));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_14 = t;
                    int d_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), term_j_13);
                        t = table_get_0(t);
                        LocalPopChoice(d_14);
                      }
                    else
                      {
                        t = c_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_35 = t;
                      y_34 :
                      if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
                        {
                          k_35 = ATgetFirst((ATermList) j_35);
                          l_35 = (ATerm) ATgetNext((ATermList) j_35);
                          {
                            if(((g_35 != NULL) && (g_35 != k_35)))
                              _fail(k_35);
                            else
                              g_35 = k_35;
                            {
                              if(((h_35 != NULL) && (h_35 != l_35)))
                                _fail(l_35);
                              else
                                h_35 = l_35;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_35), term_j_13, (ATerm) ATinsert(CheckATermList(not_null(h_35)), (ATerm) ATinsert(CheckATermList(not_null(g_35)), not_null(b_35))));
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
        t = b_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym_SDef_3))
    {
      s_35 = ATgetArgument(r_35, 0);
      t_35 = ATgetArgument(r_35, 1);
      u_35 = ATgetArgument(r_35, 2);
      {
        ATerm e_14;
        e_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_35)), term_q_6), (ATerm) ATmakeAppl(sym_Defined_2, term_j_14, not_null(r_35)));
          {
            ATerm n_2 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = assert_1(t, n_2);
          }
        }
        t = e_14;
        {
          ATerm k_14;
          k_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_l_14, not_null(r_35)));
            {
              ATerm o_2 (ATerm t)
              {
                t = term_v_11;
                return(t);
              }
              t = assert_1(t, o_2);
            }
          }
          t = k_14;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm m_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm))
{
  ATerm n_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_102(t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = n_14;
      {
        ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
        c_36 = t;
        b_36 :
        if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
          {
            d_36 = ATgetFirst((ATermList) c_36);
            e_36 = (ATerm) ATgetNext((ATermList) c_36);
            {
              ATerm h_36 = NULL,j_36 = NULL;
              ATerm v_14;
              v_14 = t;
              {
                ATerm i_36 = NULL;
                t = not_null(d_36);
                {
                  t = w_102(t);
                  {
                    i_36 = t;
                    if(((h_36 != NULL) && (h_36 != i_36)))
                      _fail(i_36);
                    else
                      h_36 = i_36;
                  }
                }
              }
              t = v_14;
              {
                ATerm k_36 = NULL;
                t = not_null(e_36);
                {
                  t = foldr_3(t, u_102, v_102, w_102);
                  {
                    k_36 = t;
                    if(((j_36 != NULL) && (j_36 != k_36)))
                      _fail(k_36);
                    else
                      j_36 = k_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_36), not_null(j_36));
                  t = v_102(t);
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
ATerm crush_3 (ATerm t, ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm))
{
  ATerm w_36 = NULL;
  ATerm y_36 = NULL;
  w_36 = t;
  {
    ATerm z_36 = NULL;
    ATerm b_37 = NULL,e_37 = NULL,f_37 = NULL;
    t = not_null(w_36);
    {
      z_36 = t;
      {
        t = SSL_explode_term(not_null(z_36));
        {
          b_37 = t;
          r_36 :
          if(match_cons(b_37, sym__2))
            {
              e_37 = ATgetArgument(b_37, 0);
              f_37 = ATgetArgument(b_37, 1);
              if(((y_36 != NULL) && (y_36 != f_37)))
                _fail(f_37);
              else
                y_36 = f_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_36);
      t = foldr_3(t, s_101, t_101, u_101);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm w_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        t = term_b_15;
        return(t);
      }
      t = crush_3(t, p_2, add_0, term_size_0);
      LocalPopChoice(a_15);
    }
  else
    {
      t = w_14;
      {
        ATerm j_37 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            t = term_b_15;
            return(t);
          }
          t = crush_3(t, q_2, add_0, j_37);
          return(t);
        }
        t = j_37(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym_LChoice_2))
    {
      r_37 = ATgetArgument(q_37, 0);
      s_37 = ATgetArgument(q_37, 1);
      {
        ATerm w_37 = NULL,y_37 = NULL;
        ATerm x_37 = NULL;
        t = SSLgetAnnotations(not_null(q_37));
        {
          x_37 = t;
          if(((w_37 != NULL) && (w_37 != x_37)))
            _fail(x_37);
          else
            w_37 = x_37;
        }
        {
          t = not_null(r_37);
          {
            ATerm a_38 = NULL;
            t = v_79(t);
            {
              y_37 = t;
              {
                t = not_null(s_37);
                {
                  ATerm c_38 = NULL;
                  t = w_79(t);
                  {
                    a_38 = t;
                    {
                      ATerm d_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(y_37), not_null(a_38)), not_null(w_37));
                      {
                        d_38 = t;
                        if(((c_38 != NULL) && (c_38 != d_38)))
                          _fail(d_38);
                        else
                          c_38 = d_38;
                      }
                      t = not_null(c_38);
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
ATerm Choice_2 (ATerm t, ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym_Choice_2))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      {
        ATerm h_39 = NULL,j_39 = NULL;
        ATerm i_39 = NULL;
        t = SSLgetAnnotations(not_null(u_38));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
        {
          t = not_null(v_38);
          {
            ATerm l_39 = NULL;
            t = t_79(t);
            {
              j_39 = t;
              {
                t = not_null(w_38);
                {
                  ATerm n_39 = NULL;
                  t = u_79(t);
                  {
                    l_39 = t;
                    {
                      ATerm o_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(j_39), not_null(l_39)), not_null(h_39));
                      {
                        o_39 = t;
                        if(((n_39 != NULL) && (n_39 != o_39)))
                          _fail(o_39);
                        else
                          n_39 = o_39;
                      }
                      t = not_null(n_39);
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
ATerm Cong_2 (ATerm t, ATerm j_79 (ATerm), ATerm k_79 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Cong_2))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      {
        ATerm g_40 = NULL,i_40 = NULL;
        ATerm h_40 = NULL;
        t = SSLgetAnnotations(not_null(a_40));
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
        {
          t = not_null(b_40);
          {
            ATerm k_40 = NULL;
            t = j_79(t);
            {
              i_40 = t;
              {
                t = not_null(c_40);
                {
                  ATerm o_40 = NULL;
                  t = k_79(t);
                  {
                    k_40 = t;
                    {
                      ATerm p_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(i_40), not_null(k_40)), not_null(g_40));
                      {
                        p_40 = t;
                        if(((o_40 != NULL) && (o_40 != p_40)))
                          _fail(p_40);
                        else
                          o_40 = p_40;
                      }
                      t = not_null(o_40);
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
ATerm Match_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm h_41 = NULL,m_41 = NULL;
  h_41 = t;
  g_41 :
  if(match_cons(h_41, sym_Match_1))
    {
      m_41 = ATgetArgument(h_41, 0);
      {
        ATerm t_41 = NULL,v_41 = NULL;
        ATerm u_41 = NULL;
        t = SSLgetAnnotations(not_null(h_41));
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
        {
          t = not_null(m_41);
          {
            ATerm x_41 = NULL;
            t = a_79(t);
            {
              v_41 = t;
              {
                ATerm y_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(v_41)), not_null(t_41));
                {
                  y_41 = t;
                  if(((x_41 != NULL) && (x_41 != y_41)))
                    _fail(y_41);
                  else
                    x_41 = y_41;
                }
                t = not_null(x_41);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm r_79 (ATerm), ATerm s_79 (ATerm))
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym_Seq_2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      {
        ATerm p_42 = NULL,r_42 = NULL;
        ATerm q_42 = NULL;
        t = SSLgetAnnotations(not_null(j_42));
        {
          q_42 = t;
          if(((p_42 != NULL) && (p_42 != q_42)))
            _fail(q_42);
          else
            p_42 = q_42;
        }
        {
          t = not_null(k_42);
          {
            ATerm t_42 = NULL;
            t = r_79(t);
            {
              r_42 = t;
              {
                t = not_null(l_42);
                {
                  ATerm v_42 = NULL;
                  t = s_79(t);
                  {
                    t_42 = t;
                    {
                      ATerm w_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(r_42), not_null(t_42)), not_null(p_42));
                      {
                        w_42 = t;
                        if(((v_42 != NULL) && (v_42 != w_42)))
                          _fail(w_42);
                        else
                          v_42 = w_42;
                      }
                      t = not_null(v_42);
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
ATerm Scope_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym_Scope_2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      {
        ATerm e_44 = NULL,g_44 = NULL;
        ATerm f_44 = NULL;
        t = SSLgetAnnotations(not_null(v_43));
        {
          f_44 = t;
          if(((e_44 != NULL) && (e_44 != f_44)))
            _fail(f_44);
          else
            e_44 = f_44;
        }
        {
          t = not_null(w_43);
          {
            ATerm i_44 = NULL;
            t = e_79(t);
            {
              g_44 = t;
              {
                t = not_null(x_43);
                {
                  ATerm k_44 = NULL;
                  t = f_79(t);
                  {
                    i_44 = t;
                    {
                      ATerm l_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(g_44), not_null(i_44)), not_null(e_44));
                      {
                        l_44 = t;
                        if(((k_44 != NULL) && (k_44 != l_44)))
                          _fail(l_44);
                        else
                          k_44 = l_44;
                      }
                      t = not_null(k_44);
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
ATerm Build_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm x_44 = NULL,y_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym_Build_1))
    {
      y_44 = ATgetArgument(x_44, 0);
      {
        ATerm b_45 = NULL,d_45 = NULL;
        ATerm c_45 = NULL;
        t = SSLgetAnnotations(not_null(x_44));
        {
          c_45 = t;
          if(((b_45 != NULL) && (b_45 != c_45)))
            _fail(c_45);
          else
            b_45 = c_45;
        }
        {
          t = not_null(y_44);
          {
            ATerm f_45 = NULL;
            t = b_79(t);
            {
              d_45 = t;
              {
                ATerm g_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(d_45)), not_null(b_45));
                {
                  g_45 = t;
                  if(((f_45 != NULL) && (f_45 != g_45)))
                    _fail(g_45);
                  else
                    f_45 = g_45;
                }
                t = not_null(f_45);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm q_45 = NULL,r_45 = NULL;
  q_45 = t;
  p_45 :
  if(match_cons(q_45, sym_SVar_1))
    {
      r_45 = ATgetArgument(q_45, 0);
      {
        ATerm u_45 = NULL,w_45 = NULL;
        ATerm v_45 = NULL;
        t = SSLgetAnnotations(not_null(q_45));
        {
          v_45 = t;
          if(((u_45 != NULL) && (u_45 != v_45)))
            _fail(v_45);
          else
            u_45 = v_45;
        }
        {
          t = not_null(r_45);
          {
            ATerm y_45 = NULL;
            t = f_80(t);
            {
              w_45 = t;
              {
                ATerm z_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(w_45)), not_null(u_45));
                {
                  z_45 = t;
                  if(((y_45 != NULL) && (y_45 != z_45)))
                    _fail(z_45);
                  else
                    y_45 = z_45;
                }
                t = not_null(y_45);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm))
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym_Call_2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      {
        ATerm q_46 = NULL,s_46 = NULL;
        ATerm r_46 = NULL;
        t = SSLgetAnnotations(not_null(k_46));
        {
          r_46 = t;
          if(((q_46 != NULL) && (q_46 != r_46)))
            _fail(r_46);
          else
            q_46 = r_46;
        }
        {
          t = not_null(l_46);
          {
            ATerm u_46 = NULL;
            t = u_80(t);
            {
              s_46 = t;
              {
                t = not_null(m_46);
                {
                  ATerm w_46 = NULL;
                  t = v_80(t);
                  {
                    u_46 = t;
                    {
                      ATerm x_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(s_46), not_null(u_46)), not_null(q_46));
                      {
                        x_46 = t;
                        if(((w_46 != NULL) && (w_46 != x_46)))
                          _fail(x_46);
                        else
                          w_46 = x_46;
                      }
                      t = not_null(w_46);
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
ATerm Fail_0 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  g_47 :
  if(match_cons(h_47, sym_Fail_0))
    {
      ATerm j_47 = NULL,l_47 = NULL;
      ATerm c_15;
      c_15 = t;
      {
        ATerm k_47 = NULL;
        t = SSLgetAnnotations(not_null(h_47));
        {
          k_47 = t;
          if(((j_47 != NULL) && (j_47 != k_47)))
            _fail(k_47);
          else
            j_47 = k_47;
        }
      }
      t = c_15;
      {
        ATerm m_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(j_47));
        {
          m_47 = t;
          if(((l_47 != NULL) && (l_47 != m_47)))
            _fail(m_47);
          else
            l_47 = m_47;
        }
        t = not_null(l_47);
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
  ATerm u_47 = NULL;
  u_47 = t;
  t_47 :
  if(match_cons(u_47, sym_Id_0))
    {
      ATerm w_47 = NULL,y_47 = NULL;
      ATerm d_15;
      d_15 = t;
      {
        ATerm x_47 = NULL;
        t = SSLgetAnnotations(not_null(u_47));
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
      }
      t = d_15;
      {
        ATerm z_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(w_47));
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
        t = not_null(y_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm d_48 (ATerm t)
  {
    ATerm e_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = e_15;
        {
          ATerm l_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(q_15);
            }
          else
            {
              t = l_15;
              {
                ATerm r_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, r_2, _id);
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = r_15;
                    {
                      ATerm t_15 = t;
                      int u_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(u_15);
                        }
                      else
                        {
                          t = t_15;
                          {
                            ATerm v_15 = t;
                            int w_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
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
                                      ATerm s_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, s_2, _id);
                                      LocalPopChoice(y_15);
                                    }
                                  else
                                    {
                                      t = x_15;
                                      {
                                        ATerm c_16 = t;
                                        int d_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, t_2);
                                            LocalPopChoice(d_16);
                                          }
                                        else
                                          {
                                            t = c_16;
                                            {
                                              ATerm h_16 = t;
                                              int k_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_2 (ATerm t)
                                                  {
                                                    ATerm v_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, v_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, u_2);
                                                  LocalPopChoice(k_16);
                                                }
                                              else
                                                {
                                                  t = h_16;
                                                  {
                                                    ATerm l_16 = t;
                                                    int m_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm w_2 (ATerm t)
                                                        {
                                                          ATerm x_2 (ATerm t)
                                                          {
                                                            ATerm y_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, y_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, x_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, w_2, _id);
                                                        LocalPopChoice(m_16);
                                                      }
                                                    else
                                                      {
                                                        t = l_16;
                                                        {
                                                          ATerm n_16 = t;
                                                          int o_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(o_16);
                                                            }
                                                          else
                                                            {
                                                              t = n_16;
                                                              {
                                                                ATerm s_16 = t;
                                                                int t_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, d_48, d_48);
                                                                    LocalPopChoice(t_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_16;
                                                                    t = LChoice_2(t, d_48, d_48);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = d_48(t);
  {
    ATerm u_16;
    u_16 = t;
    {
      ATerm z_2 (ATerm t)
      {
        t = term_y_16;
        return(t);
      }
      t = split_2(t, term_size_0, z_2);
      t = leq_0(t);
    }
    t = u_16;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm e_48 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_93(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = _one(t, e_48);
      }
    return(t);
  }
  t = e_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm))
{
  ATerm m_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  m_48 = t;
  l_48 :
  if(match_cons(m_48, sym_SDef_3))
    {
      q_48 = ATgetArgument(m_48, 0);
      r_48 = ATgetArgument(m_48, 1);
      s_48 = ATgetArgument(m_48, 2);
      {
        ATerm x_48 = NULL,z_48 = NULL;
        ATerm y_48 = NULL;
        t = SSLgetAnnotations(not_null(m_48));
        {
          y_48 = t;
          if(((x_48 != NULL) && (x_48 != y_48)))
            _fail(y_48);
          else
            x_48 = y_48;
        }
        {
          t = not_null(q_48);
          {
            ATerm b_49 = NULL;
            t = k_80(t);
            {
              z_48 = t;
              {
                t = not_null(r_48);
                {
                  ATerm d_49 = NULL;
                  t = l_80(t);
                  {
                    b_49 = t;
                    {
                      t = not_null(s_48);
                      {
                        ATerm f_49 = NULL;
                        t = m_80(t);
                        {
                          d_49 = t;
                          {
                            ATerm g_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_48), not_null(b_49), not_null(d_49)), not_null(x_48));
                            {
                              g_49 = t;
                              if(((f_49 != NULL) && (f_49 != g_49)))
                                _fail(g_49);
                              else
                                f_49 = g_49;
                            }
                            t = not_null(f_49);
                          }
                        }
                      }
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
ATerm inlineable_0 (ATerm t)
{
  ATerm t_49 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm v_49 = NULL;
    ATerm f_17 = t;
    if((PushChoice() == 0))
      {
        ATerm u_49 = NULL;
        u_49 = t;
        n_49 :
        if(!(match_string(u_49, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_17;
      }
    {
      v_49 = t;
      if(((t_49 != NULL) && (t_49 != v_49)))
        _fail(v_49);
      else
        t_49 = v_49;
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    {
      ATerm h_17 = t;
      if((PushChoice() == 0))
        {
          ATerm c_3 (ATerm t)
          {
            ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
            w_49 = t;
            q_49 :
            if(match_cons(w_49, sym_Call_2))
              {
                x_49 = ATgetArgument(w_49, 0);
                z_49 = ATgetArgument(w_49, 1);
                r_49 :
                if(match_cons(x_49, sym_SVar_1))
                  {
                    y_49 = ATgetArgument(x_49, 0);
                    s_49 :
                    if(((ATgetType(z_49) == AT_LIST) && ATisEmpty(z_49)))
                      {
                        if(((t_49 != NULL) && (t_49 != y_49)))
                          _fail(y_49);
                        else
                          t_49 = y_49;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, c_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_17;
        }
    }
    t = g_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, a_3, _id, b_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym_Cong_2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      {
        ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,p_52 = NULL,y_52 = NULL,a_53 = NULL;
        ATerm j_17;
        j_17 = t;
        {
          ATerm j_51 = NULL;
          t = not_null(y_50);
          {
            ATerm m_51 = NULL;
            t = map_1(t, new_0);
            {
              j_51 = t;
              {
                if(((e_51 != NULL) && (e_51 != j_51)))
                  _fail(j_51);
                else
                  e_51 = j_51;
                {
                  t = not_null(e_51);
                  {
                    ATerm y_51 = NULL;
                    ATerm d_3 (ATerm t)
                    {
                      ATerm k_51 = NULL;
                      ATerm l_51 = NULL;
                      l_51 = t;
                      if(((k_51 != NULL) && (k_51 != l_51)))
                        _fail(l_51);
                      else
                        k_51 = l_51;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_51));
                      return(t);
                    }
                    t = map_1(t, d_3);
                    {
                      m_51 = t;
                      {
                        if(((b_51 != NULL) && (b_51 != m_51)))
                          _fail(m_51);
                        else
                          b_51 = m_51;
                        {
                          ATerm z_51 = NULL;
                          t = new_0(t);
                          {
                            y_51 = t;
                            {
                              if(((c_51 != NULL) && (c_51 != y_51)))
                                _fail(y_51);
                              else
                                c_51 = y_51;
                              {
                                t = not_null(y_50);
                                {
                                  ATerm d_52 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    z_51 = t;
                                    {
                                      if(((f_51 != NULL) && (f_51 != z_51)))
                                        _fail(z_51);
                                      else
                                        f_51 = z_51;
                                      {
                                        t = not_null(f_51);
                                        {
                                          ATerm e_52 = NULL,o_52 = NULL;
                                          ATerm e_3 (ATerm t)
                                          {
                                            ATerm a_52 = NULL;
                                            ATerm c_52 = NULL;
                                            c_52 = t;
                                            if(((a_52 != NULL) && (a_52 != c_52)))
                                              _fail(c_52);
                                            else
                                              a_52 = c_52;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_52));
                                            return(t);
                                          }
                                          t = map_1(t, e_3);
                                          {
                                            d_52 = t;
                                            {
                                              if(((d_51 != NULL) && (d_51 != d_52)))
                                                _fail(d_52);
                                              else
                                                d_51 = d_52;
                                              {
                                                ATerm f_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_51), not_null(f_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    f_52 = t;
                                                    if(((e_52 != NULL) && (e_52 != f_52)))
                                                      _fail(f_52);
                                                    else
                                                      e_52 = f_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_52), not_null(y_50));
                                                  {
                                                    ATerm f_3 (ATerm t)
                                                    {
                                                      ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
                                                      g_52 = t;
                                                      p_50 :
                                                      if(match_cons(g_52, sym__2))
                                                        {
                                                          h_52 = ATgetArgument(g_52, 0);
                                                          k_52 = ATgetArgument(g_52, 1);
                                                          q_50 :
                                                          if(match_cons(h_52, sym__2))
                                                            {
                                                              i_52 = ATgetArgument(h_52, 0);
                                                              j_52 = ATgetArgument(h_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_52)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, f_3);
                                                    {
                                                      o_52 = t;
                                                      if(((g_51 != NULL) && (g_51 != o_52)))
                                                        _fail(o_52);
                                                      else
                                                        g_51 = o_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = j_17;
        {
          ATerm o_17;
          o_17 = t;
          {
            ATerm q_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_51), not_null(f_51));
            {
              ATerm p_17 = t;
              int q_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(q_17);
                }
              else
                {
                  t = p_17;
                  t = conc_more_lists_0(t);
                }
              {
                q_52 = t;
                if(((p_52 != NULL) && (p_52 != q_52)))
                  _fail(q_52);
                else
                  p_52 = q_52;
              }
            }
          }
          t = o_17;
          {
            ATerm r_17;
            r_17 = t;
            {
              ATerm z_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_50), not_null(b_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_51))));
              {
                t = Mapp2_0(t);
                {
                  z_52 = t;
                  if(((y_52 != NULL) && (y_52 != z_52)))
                    _fail(z_52);
                  else
                    y_52 = z_52;
                }
              }
            }
            t = r_17;
            {
              ATerm b_53 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_50), not_null(d_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_51))));
              {
                t = Bapp2_0(t);
                {
                  b_53 = t;
                  if(((a_53 != NULL) && (a_53 != b_53)))
                    _fail(b_53);
                  else
                    a_53 = b_53;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(p_52)), not_null(c_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(g_51)), not_null(a_53))));
            }
          }
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
  ATerm o_54 = NULL,p_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym_Build_1))
    {
      p_54 = ATgetArgument(o_54, 0);
      {
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
            ATerm v_54 = NULL;
            ATerm z_54 = NULL;
            t = new_0(t);
            {
              v_54 = t;
              {
                if(((t_54 != NULL) && (t_54 != v_54)))
                  _fail(v_54);
                else
                  t_54 = v_54;
                {
                  t = not_null(p_54);
                  {
                    ATerm g_3 (ATerm t)
                    {
                      ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
                      w_54 = t;
                      c_54 :
                      if(match_cons(w_54, sym_Anno_2))
                        {
                          x_54 = ATgetArgument(w_54, 0);
                          y_54 = ATgetArgument(w_54, 1);
                          {
                            if(((r_54 != NULL) && (r_54 != x_54)))
                              _fail(x_54);
                            else
                              r_54 = x_54;
                            {
                              if(((s_54 != NULL) && (s_54 != y_54)))
                                _fail(y_54);
                              else
                                s_54 = y_54;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_54));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, g_3);
                    {
                      z_54 = t;
                      if(((u_54 != NULL) && (u_54 != z_54)))
                        _fail(z_54);
                      else
                        u_54 = z_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_54)), not_null(r_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_54))));
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            {
              ATerm a_18 = t;
              int b_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
                  ATerm e_55 = NULL;
                  ATerm h_55 = NULL;
                  t = new_0(t);
                  {
                    e_55 = t;
                    {
                      if(((c_55 != NULL) && (c_55 != e_55)))
                        _fail(e_55);
                      else
                        c_55 = e_55;
                      {
                        t = not_null(p_54);
                        {
                          ATerm h_3 (ATerm t)
                          {
                            ATerm f_55 = NULL,g_55 = NULL;
                            f_55 = t;
                            h_54 :
                            if(match_cons(f_55, sym_RootApp_1))
                              {
                                g_55 = ATgetArgument(f_55, 0);
                                {
                                  if(((b_55 != NULL) && (b_55 != g_55)))
                                    _fail(g_55);
                                  else
                                    b_55 = g_55;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_55));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, h_3);
                          {
                            h_55 = t;
                            if(((d_55 != NULL) && (d_55 != h_55)))
                              _fail(h_55);
                            else
                              d_55 = h_55;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_55), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_55))));
                  LocalPopChoice(b_18);
                }
              else
                {
                  t = a_18;
                  {
                    ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
                    ATerm n_55 = NULL;
                    ATerm r_55 = NULL;
                    t = new_0(t);
                    {
                      n_55 = t;
                      {
                        if(((l_55 != NULL) && (l_55 != n_55)))
                          _fail(n_55);
                        else
                          l_55 = n_55;
                        {
                          t = not_null(p_54);
                          {
                            ATerm i_3 (ATerm t)
                            {
                              ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
                              o_55 = t;
                              l_54 :
                              if(match_cons(o_55, sym_App_2))
                                {
                                  p_55 = ATgetArgument(o_55, 0);
                                  q_55 = ATgetArgument(o_55, 1);
                                  {
                                    if(((j_55 != NULL) && (j_55 != p_55)))
                                      _fail(p_55);
                                    else
                                      j_55 = p_55;
                                    {
                                      if(((k_55 != NULL) && (k_55 != q_55)))
                                        _fail(q_55);
                                      else
                                        k_55 = q_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_55));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, i_3);
                            {
                              r_55 = t;
                              if(((m_55 != NULL) && (m_55 != r_55)))
                                _fail(r_55);
                              else
                                m_55 = r_55;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_55), not_null(k_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_55)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_55))));
                  }
                }
            }
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
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym__2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_56)), not_null(m_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  z_56 = t;
  w_56 :
  if(match_cons(z_56, sym__2))
    {
      a_57 = ATgetArgument(z_56, 0);
      d_57 = ATgetArgument(z_56, 1);
      x_56 :
      if(((ATgetType(a_57) == AT_LIST) && !(ATisEmpty(a_57))))
        {
          b_57 = ATgetFirst((ATermList) a_57);
          c_57 = (ATerm) ATgetNext((ATermList) a_57);
          y_56 :
          if(((ATgetType(d_57) == AT_LIST) && !(ATisEmpty(d_57))))
            {
              e_57 = ATgetFirst((ATermList) d_57);
              f_57 = (ATerm) ATgetNext((ATermList) d_57);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_57), not_null(e_57)), (ATerm) ATmakeAppl(sym__2, not_null(c_57), not_null(f_57)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
  q_57 = t;
  n_57 :
  if(match_cons(q_57, sym__2))
    {
      r_57 = ATgetArgument(q_57, 0);
      s_57 = ATgetArgument(q_57, 1);
      o_57 :
      if(((ATgetType(r_57) == AT_LIST) && ATisEmpty(r_57)))
        {
          p_57 :
          if(((ATgetType(s_57) == AT_LIST) && ATisEmpty(s_57)))
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
ATerm genzip_4 (ATerm t, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm))
{
  ATerm u_57 (ATerm t)
  {
    ATerm c_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_96(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = c_18;
        {
          t = i_96(t);
          {
            t = _2(t, k_96, u_57);
            t = j_96(t);
          }
        }
      }
    return(t);
  }
  t = u_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_96 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_96);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
  a_59 = t;
  t_58 :
  if(match_cons(a_59, sym_Call_2))
    {
      b_59 = ATgetArgument(a_59, 0);
      d_59 = ATgetArgument(a_59, 1);
      u_58 :
      if(match_cons(b_59, sym_SVar_1))
        {
          c_59 = ATgetArgument(b_59, 0);
          v_58 :
          if(match_string(c_59, "Anno_Cong__"))
            {
              w_58 :
              if(((ATgetType(d_59) == AT_LIST) && !(ATisEmpty(d_59))))
                {
                  e_59 = ATgetFirst((ATermList) d_59);
                  h_59 = (ATerm) ATgetNext((ATermList) d_59);
                  x_58 :
                  if(match_cons(e_59, sym_Cong_2))
                    {
                      f_59 = ATgetArgument(e_59, 0);
                      g_59 = ATgetArgument(e_59, 1);
                      y_58 :
                      if(((ATgetType(h_59) == AT_LIST) && !(ATisEmpty(h_59))))
                        {
                          i_59 = ATgetFirst((ATermList) h_59);
                          j_59 = (ATerm) ATgetNext((ATermList) h_59);
                          z_58 :
                          if(((ATgetType(j_59) == AT_LIST) && ATisEmpty(j_59)))
                            {
                              {
                                ATerm n_59 = NULL,o_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,r_61 = NULL,t_61 = NULL,d_62 = NULL;
                                ATerm i_18;
                                i_18 = t;
                                {
                                  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(g_59)), not_null(i_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      b_60 = t;
                                      n_58 :
                                      if(((ATgetType(b_60) == AT_LIST) && !(ATisEmpty(b_60))))
                                        {
                                          c_60 = ATgetFirst((ATermList) b_60);
                                          d_60 = (ATerm) ATgetNext((ATermList) b_60);
                                          {
                                            ATerm g_60 = NULL;
                                            if(((n_59 != NULL) && (n_59 != c_60)))
                                              _fail(c_60);
                                            else
                                              n_59 = c_60;
                                            {
                                              if(((y_59 != NULL) && (y_59 != d_60)))
                                                _fail(d_60);
                                              else
                                                y_59 = d_60;
                                              {
                                                ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
                                                ATerm j_3 (ATerm t)
                                                {
                                                  ATerm e_60 = NULL;
                                                  ATerm f_60 = NULL;
                                                  f_60 = t;
                                                  if(((e_60 != NULL) && (e_60 != f_60)))
                                                    _fail(f_60);
                                                  else
                                                    e_60 = f_60;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_60));
                                                  return(t);
                                                }
                                                t = map_1(t, j_3);
                                                {
                                                  g_60 = t;
                                                  {
                                                    if(((o_59 != NULL) && (o_59 != g_60)))
                                                      _fail(g_60);
                                                    else
                                                      o_59 = g_60;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(g_59)), not_null(i_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          h_60 = t;
                                                          m_58 :
                                                          if(((ATgetType(h_60) == AT_LIST) && !(ATisEmpty(h_60))))
                                                            {
                                                              i_60 = ATgetFirst((ATermList) h_60);
                                                              j_60 = (ATerm) ATgetNext((ATermList) h_60);
                                                              {
                                                                ATerm m_60 = NULL;
                                                                if(((w_59 != NULL) && (w_59 != i_60)))
                                                                  _fail(i_60);
                                                                else
                                                                  w_59 = i_60;
                                                                {
                                                                  if(((z_59 != NULL) && (z_59 != j_60)))
                                                                    _fail(j_60);
                                                                  else
                                                                    z_59 = j_60;
                                                                  {
                                                                    ATerm n_60 = NULL,h_61 = NULL;
                                                                    ATerm k_3 (ATerm t)
                                                                    {
                                                                      ATerm k_60 = NULL;
                                                                      ATerm l_60 = NULL;
                                                                      l_60 = t;
                                                                      if(((k_60 != NULL) && (k_60 != l_60)))
                                                                        _fail(l_60);
                                                                      else
                                                                        k_60 = l_60;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_60));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, k_3);
                                                                    {
                                                                      m_60 = t;
                                                                      {
                                                                        if(((x_59 != NULL) && (x_59 != m_60)))
                                                                          _fail(m_60);
                                                                        else
                                                                          x_59 = m_60;
                                                                        {
                                                                          ATerm o_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_59), not_null(z_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              o_60 = t;
                                                                              if(((n_60 != NULL) && (n_60 != o_60)))
                                                                                _fail(o_60);
                                                                              else
                                                                                n_60 = o_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_60), (ATerm) ATinsert(CheckATermList(not_null(g_59)), not_null(i_59)));
                                                                            {
                                                                              ATerm l_3 (ATerm t)
                                                                              {
                                                                                ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
                                                                                p_60 = t;
                                                                                e_58 :
                                                                                if(match_cons(p_60, sym__2))
                                                                                  {
                                                                                    q_60 = ATgetArgument(p_60, 0);
                                                                                    t_60 = ATgetArgument(p_60, 1);
                                                                                    k_58 :
                                                                                    if(match_cons(q_60, sym__2))
                                                                                      {
                                                                                        r_60 = ATgetArgument(q_60, 0);
                                                                                        s_60 = ATgetArgument(q_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_60)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, l_3);
                                                                              {
                                                                                h_61 = t;
                                                                                if(((a_60 != NULL) && (a_60 != h_61)))
                                                                                  _fail(h_61);
                                                                                else
                                                                                  a_60 = h_61;
                                                                              }
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
                                t = i_18;
                                {
                                  ATerm j_18;
                                  j_18 = t;
                                  {
                                    ATerm s_61 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_59), not_null(z_59));
                                    {
                                      ATerm l_18 = t;
                                      int t_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(t_18);
                                        }
                                      else
                                        {
                                          t = l_18;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        s_61 = t;
                                        if(((r_61 != NULL) && (r_61 != s_61)))
                                          _fail(s_61);
                                        else
                                          r_61 = s_61;
                                      }
                                    }
                                  }
                                  t = j_18;
                                  {
                                    ATerm u_18;
                                    u_18 = t;
                                    {
                                      ATerm c_62 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), not_null(o_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          c_62 = t;
                                          if(((t_61 != NULL) && (t_61 != c_62)))
                                            _fail(c_62);
                                          else
                                            t_61 = c_62;
                                        }
                                      }
                                    }
                                    t = u_18;
                                    {
                                      ATerm e_62 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_59), not_null(x_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          e_62 = t;
                                          if(((d_62 != NULL) && (d_62 != e_62)))
                                            _fail(e_62);
                                          else
                                            d_62 = e_62;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(r_61)), not_null(w_59)), not_null(n_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_60)), not_null(d_62))));
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
ATerm As_2 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  y_62 = t;
  x_62 :
  if(match_cons(y_62, sym_As_2))
    {
      z_62 = ATgetArgument(y_62, 0);
      a_63 = ATgetArgument(y_62, 1);
      {
        ATerm e_63 = NULL,g_63 = NULL;
        ATerm f_63 = NULL;
        t = SSLgetAnnotations(not_null(y_62));
        {
          f_63 = t;
          if(((e_63 != NULL) && (e_63 != f_63)))
            _fail(f_63);
          else
            e_63 = f_63;
        }
        {
          t = not_null(z_62);
          {
            ATerm i_63 = NULL;
            t = q_82(t);
            {
              g_63 = t;
              {
                t = not_null(a_63);
                {
                  ATerm k_63 = NULL;
                  t = r_82(t);
                  {
                    i_63 = t;
                    {
                      ATerm l_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(g_63), not_null(i_63)), not_null(e_63));
                      {
                        l_63 = t;
                        if(((k_63 != NULL) && (k_63 != l_63)))
                          _fail(l_63);
                        else
                          k_63 = l_63;
                      }
                      t = not_null(k_63);
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
ATerm Prim_2 (ATerm t, ATerm w_78 (ATerm), ATerm x_78 (ATerm))
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL;
  x_63 = t;
  w_63 :
  if(match_cons(x_63, sym_Prim_2))
    {
      y_63 = ATgetArgument(x_63, 0);
      z_63 = ATgetArgument(x_63, 1);
      {
        ATerm d_64 = NULL,f_64 = NULL;
        ATerm e_64 = NULL;
        t = SSLgetAnnotations(not_null(x_63));
        {
          e_64 = t;
          if(((d_64 != NULL) && (d_64 != e_64)))
            _fail(e_64);
          else
            d_64 = e_64;
        }
        {
          t = not_null(y_63);
          {
            ATerm h_64 = NULL;
            t = w_78(t);
            {
              f_64 = t;
              {
                t = not_null(z_63);
                {
                  ATerm j_64 = NULL;
                  t = x_78(t);
                  {
                    h_64 = t;
                    {
                      ATerm k_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(f_64), not_null(h_64)), not_null(d_64));
                      {
                        k_64 = t;
                        if(((j_64 != NULL) && (j_64 != k_64)))
                          _fail(k_64);
                        else
                          j_64 = k_64;
                      }
                      t = not_null(j_64);
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
ATerm Explode_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  ATerm k_65 = NULL,q_65 = NULL,r_65 = NULL;
  k_65 = t;
  j_65 :
  if(match_cons(k_65, sym_Explode_2))
    {
      q_65 = ATgetArgument(k_65, 0);
      r_65 = ATgetArgument(k_65, 1);
      {
        ATerm e_66 = NULL,g_66 = NULL;
        ATerm f_66 = NULL;
        t = SSLgetAnnotations(not_null(k_65));
        {
          f_66 = t;
          if(((e_66 != NULL) && (e_66 != f_66)))
            _fail(f_66);
          else
            e_66 = f_66;
        }
        {
          t = not_null(q_65);
          {
            ATerm i_66 = NULL;
            t = m_82(t);
            {
              g_66 = t;
              {
                t = not_null(r_65);
                {
                  ATerm k_66 = NULL;
                  t = n_82(t);
                  {
                    i_66 = t;
                    {
                      ATerm g_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(g_66), not_null(i_66)), not_null(e_66));
                      {
                        g_67 = t;
                        if(((k_66 != NULL) && (k_66 != g_67)))
                          _fail(g_67);
                        else
                          k_66 = g_67;
                      }
                      t = not_null(k_66);
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
ATerm Op_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_cons(s_67, sym_Op_2))
    {
      t_67 = ATgetArgument(s_67, 0);
      u_67 = ATgetArgument(s_67, 1);
      {
        ATerm y_67 = NULL,a_68 = NULL;
        ATerm z_67 = NULL;
        t = SSLgetAnnotations(not_null(s_67));
        {
          z_67 = t;
          if(((y_67 != NULL) && (y_67 != z_67)))
            _fail(z_67);
          else
            y_67 = z_67;
        }
        {
          t = not_null(t_67);
          {
            ATerm c_68 = NULL;
            t = a_81(t);
            {
              a_68 = t;
              {
                t = not_null(u_67);
                {
                  ATerm e_68 = NULL;
                  t = b_81(t);
                  {
                    c_68 = t;
                    {
                      ATerm f_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(a_68), not_null(c_68)), not_null(y_67));
                      {
                        f_68 = t;
                        if(((e_68 != NULL) && (e_68 != f_68)))
                          _fail(f_68);
                        else
                          e_68 = f_68;
                      }
                      t = not_null(e_68);
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
ATerm pat_td_1 (ATerm t, ATerm v_117 (ATerm))
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_117(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              ATerm n_3 (ATerm t)
              {
                t = pat_td_1(t, v_117);
                return(t);
              }
              t = fetch_1(t, n_3);
              return(t);
            }
            t = Op_2(t, _id, m_3);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm z_18 = t;
              int b_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_3 (ATerm t)
                  {
                    t = pat_td_1(t, v_117);
                    return(t);
                  }
                  t = Explode_2(t, _id, o_3);
                  LocalPopChoice(b_19);
                }
              else
                {
                  t = z_18;
                  {
                    ATerm c_19 = t;
                    int e_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_3 (ATerm t)
                        {
                          t = pat_td_1(t, v_117);
                          return(t);
                        }
                        t = Explode_2(t, p_3, _id);
                        LocalPopChoice(e_19);
                      }
                    else
                      {
                        t = c_19;
                        {
                          ATerm m_19 = t;
                          int n_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_3 (ATerm t)
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, v_117);
                                  return(t);
                                }
                                t = fetch_1(t, r_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, q_3);
                              LocalPopChoice(n_19);
                            }
                          else
                            {
                              t = m_19;
                              {
                                ATerm s_3 (ATerm t)
                                {
                                  t = pat_td_1(t, v_117);
                                  return(t);
                                }
                                t = As_2(t, _id, s_3);
                              }
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
  ATerm c_69 = NULL,d_69 = NULL;
  c_69 = t;
  b_69 :
  if(match_cons(c_69, sym_Match_1))
    {
      d_69 = ATgetArgument(c_69, 0);
      {
        ATerm o_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
            ATerm j_69 = NULL;
            ATerm n_69 = NULL;
            t = new_0(t);
            {
              j_69 = t;
              {
                if(((h_69 != NULL) && (h_69 != j_69)))
                  _fail(j_69);
                else
                  h_69 = j_69;
                {
                  t = not_null(d_69);
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
                      k_69 = t;
                      q_68 :
                      if(match_cons(k_69, sym_Anno_2))
                        {
                          l_69 = ATgetArgument(k_69, 0);
                          m_69 = ATgetArgument(k_69, 1);
                          {
                            if(((f_69 != NULL) && (f_69 != l_69)))
                              _fail(l_69);
                            else
                              f_69 = l_69;
                            {
                              if(((g_69 != NULL) && (g_69 != m_69)))
                                _fail(m_69);
                              else
                                g_69 = m_69;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_69)), not_null(f_69));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, t_3);
                    {
                      n_69 = t;
                      if(((i_69 != NULL) && (i_69 != n_69)))
                        _fail(n_69);
                      else
                        i_69 = n_69;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_69)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_69)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_69))))));
            LocalPopChoice(s_19);
          }
        else
          {
            t = o_19;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
                  ATerm s_69 = NULL;
                  ATerm v_69 = NULL;
                  t = new_0(t);
                  {
                    s_69 = t;
                    {
                      if(((q_69 != NULL) && (q_69 != s_69)))
                        _fail(s_69);
                      else
                        q_69 = s_69;
                      {
                        t = not_null(d_69);
                        {
                          ATerm u_3 (ATerm t)
                          {
                            ATerm t_69 = NULL,u_69 = NULL;
                            t_69 = t;
                            u_68 :
                            if(match_cons(t_69, sym_RootApp_1))
                              {
                                u_69 = ATgetArgument(t_69, 0);
                                {
                                  if(((p_69 != NULL) && (p_69 != u_69)))
                                    _fail(u_69);
                                  else
                                    p_69 = u_69;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, u_3);
                          {
                            v_69 = t;
                            if(((r_69 != NULL) && (r_69 != v_69)))
                              _fail(v_69);
                            else
                              r_69 = v_69;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69))), not_null(p_69))));
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  {
                    ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
                    ATerm b_70 = NULL;
                    ATerm f_70 = NULL;
                    t = new_0(t);
                    {
                      b_70 = t;
                      {
                        if(((z_69 != NULL) && (z_69 != b_70)))
                          _fail(b_70);
                        else
                          z_69 = b_70;
                        {
                          t = not_null(d_69);
                          {
                            ATerm v_3 (ATerm t)
                            {
                              ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
                              c_70 = t;
                              y_68 :
                              if(match_cons(c_70, sym_App_2))
                                {
                                  d_70 = ATgetArgument(c_70, 0);
                                  e_70 = ATgetArgument(c_70, 1);
                                  {
                                    if(((y_69 != NULL) && (y_69 != d_70)))
                                      _fail(d_70);
                                    else
                                      y_69 = d_70;
                                    {
                                      if(((x_69 != NULL) && (x_69 != e_70)))
                                        _fail(e_70);
                                      else
                                        x_69 = e_70;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_69));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, v_3);
                            {
                              f_70 = t;
                              if(((a_70 != NULL) && (a_70 != f_70)))
                                _fail(f_70);
                              else
                                a_70 = f_70;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_70)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_69))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_69)), not_null(y_69)))));
                  }
                }
            }
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
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  x_70 :
  if(match_cons(y_70, sym_Cong_2))
    {
      z_70 = ATgetArgument(y_70, 0);
      a_71 = ATgetArgument(y_70, 1);
      {
        ATerm d_71 = NULL;
        ATerm h_71 = NULL;
        t = not_null(a_71);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm e_71 = NULL,f_71 = NULL;
            f_71 = t;
            v_70 :
            if(match_cons(f_71, sym_Match_1))
              {
                e_71 = ATgetArgument(f_71, 0);
                t = not_null(e_71);
              }
            else
              {
                if(match_cons(f_71, sym_Id_0))
                  {
                    t = term_g_20;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, w_3);
          {
            h_71 = t;
            if(((d_71 != NULL) && (d_71 != h_71)))
              _fail(h_71);
            else
              d_71 = h_71;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(z_70), not_null(d_71)));
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
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
  p_71 = t;
  n_71 :
  if(match_cons(p_71, sym_Scope_2))
    {
      q_71 = ATgetArgument(p_71, 0);
      r_71 = ATgetArgument(p_71, 1);
      o_71 :
      if(((ATgetType(q_71) == AT_LIST) && ATisEmpty(q_71)))
        {
          t = not_null(r_71);
        }
      else
        {
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
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  n_72 = t;
  a_72 :
  if(match_cons(n_72, sym_Where_1))
    {
      o_72 = ATgetArgument(n_72, 0);
      b_72 :
      if(match_cons(o_72, sym_Seq_2))
        {
          m_72 = ATgetArgument(o_72, 0);
          i_72 = ATgetArgument(o_72, 1);
          c_72 :
          if(match_cons(m_72, sym_Where_1))
            {
              h_72 = ATgetArgument(m_72, 0);
              d_72 :
              if(match_cons(i_72, sym_Seq_2))
                {
                  j_72 = ATgetArgument(i_72, 0);
                  l_72 = ATgetArgument(i_72, 1);
                  e_72 :
                  if(match_cons(j_72, sym_Build_1))
                    {
                      k_72 = ATgetArgument(j_72, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_72)), not_null(l_72))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(o_72, sym_Where_1))
            {
              m_72 = ATgetArgument(o_72, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(m_72));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(n_72, sym_Test_1))
        {
          o_72 = ATgetArgument(n_72, 0);
          f_72 :
          if(match_cons(o_72, sym_Test_1))
            {
              m_72 = ATgetArgument(o_72, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_72));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(n_72, sym_Not_1))
            {
              o_72 = ATgetArgument(n_72, 0);
              g_72 :
              if(match_cons(o_72, sym_Not_1))
                {
                  m_72 = ATgetArgument(o_72, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_72));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(n_72, sym_LChoice_2))
                {
                  o_72 = ATgetArgument(n_72, 0);
                  p_72 = ATgetArgument(n_72, 1);
                  {
                    if(((o_72 != NULL) && (o_72 != p_72)))
                      _fail(p_72);
                    else
                      o_72 = p_72;
                    t = not_null(o_72);
                  }
                }
              else
                {
                  if(match_cons(n_72, sym_Choice_2))
                    {
                      o_72 = ATgetArgument(n_72, 0);
                      p_72 = ATgetArgument(n_72, 1);
                      {
                        if(((o_72 != NULL) && (o_72 != p_72)))
                          _fail(p_72);
                        else
                          o_72 = p_72;
                        t = not_null(o_72);
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
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  c_75 = t;
  y_74 :
  if(match_cons(c_75, sym_LChoice_2))
    {
      d_75 = ATgetArgument(c_75, 0);
      g_75 = ATgetArgument(c_75, 1);
      z_74 :
      if(match_cons(d_75, sym_LChoice_2))
        {
          e_75 = ATgetArgument(d_75, 0);
          f_75 = ATgetArgument(d_75, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_75), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_75), not_null(g_75)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_75, sym_Seq_2))
        {
          d_75 = ATgetArgument(c_75, 0);
          g_75 = ATgetArgument(c_75, 1);
          a_75 :
          if(match_cons(d_75, sym_Seq_2))
            {
              e_75 = ATgetArgument(d_75, 0);
              f_75 = ATgetArgument(d_75, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_75), not_null(g_75)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_75, sym_Choice_2))
            {
              d_75 = ATgetArgument(c_75, 0);
              g_75 = ATgetArgument(c_75, 1);
              b_75 :
              if(match_cons(d_75, sym_Choice_2))
                {
                  e_75 = ATgetArgument(d_75, 0);
                  f_75 = ATgetArgument(d_75, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_75), not_null(g_75)));
                }
              else
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
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
  n_76 = t;
  g_76 :
  if(match_cons(n_76, sym_Lets_2))
    {
      o_76 = ATgetArgument(n_76, 0);
      p_76 = ATgetArgument(n_76, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_76), not_null(p_76));
    }
  else
    {
      if(match_cons(n_76, sym_LChoices_1))
        {
          o_76 = ATgetArgument(n_76, 0);
          h_76 :
          if(((ATgetType(o_76) == AT_LIST) && !(ATisEmpty(o_76))))
            {
              k_76 = ATgetFirst((ATermList) o_76);
              l_76 = (ATerm) ATgetNext((ATermList) o_76);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_76), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(l_76)));
            }
          else
            {
              if(((ATgetType(o_76) == AT_LIST) && ATisEmpty(o_76)))
                {
                  t = term_h_20;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(n_76, sym_Choices_1))
            {
              o_76 = ATgetArgument(n_76, 0);
              i_76 :
              if(((ATgetType(o_76) == AT_LIST) && !(ATisEmpty(o_76))))
                {
                  k_76 = ATgetFirst((ATermList) o_76);
                  l_76 = (ATerm) ATgetNext((ATermList) o_76);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_76), (ATerm) ATmakeAppl(sym_Choices_1, not_null(l_76)));
                }
              else
                {
                  if(((ATgetType(o_76) == AT_LIST) && ATisEmpty(o_76)))
                    {
                      t = term_h_20;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(n_76, sym_Seqs_1))
                {
                  o_76 = ATgetArgument(n_76, 0);
                  j_76 :
                  if(((ATgetType(o_76) == AT_LIST) && !(ATisEmpty(o_76))))
                    {
                      k_76 = ATgetFirst((ATermList) o_76);
                      l_76 = (ATerm) ATgetNext((ATermList) o_76);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_76), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_76)));
                    }
                  else
                    {
                      if(((ATgetType(o_76) == AT_LIST) && ATisEmpty(o_76)))
                        {
                          t = term_i_20;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(n_76, sym_DefaultVarDec_1))
                    {
                      o_76 = ATgetArgument(n_76, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_20), term_s_20));
                    }
                  else
                    {
                      if(match_cons(n_76, sym_InfixApp_3))
                        {
                          o_76 = ATgetArgument(n_76, 0);
                          p_76 = ATgetArgument(n_76, 1);
                          m_76 = ATgetArgument(n_76, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_76), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_76)), not_null(o_76))));
                        }
                      else
                        {
                          if(match_cons(n_76, sym_BAM_3))
                            {
                              o_76 = ATgetArgument(n_76, 0);
                              p_76 = ATgetArgument(n_76, 1);
                              m_76 = ATgetArgument(n_76, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(m_76))), not_null(o_76)), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_76))));
                            }
                          else
                            {
                              if(match_cons(n_76, sym_AM_2))
                                {
                                  o_76 = ATgetArgument(n_76, 0);
                                  p_76 = ATgetArgument(n_76, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_76), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_76)));
                                }
                              else
                                {
                                  if(match_cons(n_76, sym_MA_2))
                                    {
                                      o_76 = ATgetArgument(n_76, 0);
                                      p_76 = ATgetArgument(n_76, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_76)), not_null(p_76));
                                    }
                                  else
                                    {
                                      if(match_cons(n_76, sym_BA_2))
                                        {
                                          o_76 = ATgetArgument(n_76, 0);
                                          p_76 = ATgetArgument(n_76, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_76)), not_null(o_76));
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
  ATerm k_78 = NULL,l_78 = NULL;
  k_78 = t;
  i_78 :
  if(match_cons(k_78, sym_Where_1))
    {
      l_78 = ATgetArgument(k_78, 0);
      j_78 :
      if(match_cons(l_78, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  q_78 = t;
  o_78 :
  if(match_cons(q_78, sym_LChoice_2))
    {
      r_78 = ATgetArgument(q_78, 0);
      s_78 = ATgetArgument(q_78, 1);
      p_78 :
      if(match_cons(s_78, sym_Fail_0))
        {
          t = not_null(r_78);
        }
      else
        {
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
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
  g_79 = t;
  c_79 :
  if(match_cons(g_79, sym_LChoice_2))
    {
      h_79 = ATgetArgument(g_79, 0);
      i_79 = ATgetArgument(g_79, 1);
      d_79 :
      if(match_cons(h_79, sym_Fail_0))
        {
          t = not_null(i_79);
        }
      else
        {
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
  ATerm q_79 = NULL,x_79 = NULL,y_79 = NULL;
  q_79 = t;
  o_79 :
  if(match_cons(q_79, sym_Choice_2))
    {
      x_79 = ATgetArgument(q_79, 0);
      y_79 = ATgetArgument(q_79, 1);
      p_79 :
      if(match_cons(y_79, sym_Fail_0))
        {
          t = not_null(x_79);
        }
      else
        {
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
  ATerm e_80 = NULL,n_80 = NULL,o_80 = NULL;
  e_80 = t;
  c_80 :
  if(match_cons(e_80, sym_Choice_2))
    {
      n_80 = ATgetArgument(e_80, 0);
      o_80 = ATgetArgument(e_80, 1);
      d_80 :
      if(match_cons(n_80, sym_Fail_0))
        {
          t = not_null(o_80);
        }
      else
        {
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
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  t_80 :
  if(match_cons(w_80, sym_Cong_2))
    {
      x_80 = ATgetArgument(w_80, 0);
      y_80 = ATgetArgument(w_80, 1);
      {
        t = not_null(y_80);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm d_81 = NULL;
            d_81 = t;
            s_80 :
            if(!(match_cons(d_81, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, x_3);
        }
        t = term_h_20;
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
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
  k_81 = t;
  i_81 :
  if(match_cons(k_81, sym_Path_2))
    {
      l_81 = ATgetArgument(k_81, 0);
      m_81 = ATgetArgument(k_81, 1);
      j_81 :
      if(match_cons(m_81, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm s_81 = NULL,t_81 = NULL;
  s_81 = t;
  q_81 :
  if(match_cons(s_81, sym_One_1))
    {
      t_81 = ATgetArgument(s_81, 0);
      r_81 :
      if(match_cons(t_81, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm y_81 = NULL,z_81 = NULL;
  y_81 = t;
  w_81 :
  if(match_cons(y_81, sym_Some_1))
    {
      z_81 = ATgetArgument(y_81, 0);
      x_81 :
      if(match_cons(z_81, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
  f_82 = t;
  d_82 :
  if(match_cons(f_82, sym_Rec_2))
    {
      g_82 = ATgetArgument(f_82, 0);
      h_82 = ATgetArgument(f_82, 1);
      e_82 :
      if(match_cons(h_82, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm p_82 = NULL,s_82 = NULL,t_82 = NULL;
  p_82 = t;
  l_82 :
  if(match_cons(p_82, sym_Scope_2))
    {
      s_82 = ATgetArgument(p_82, 0);
      t_82 = ATgetArgument(p_82, 1);
      o_82 :
      if(match_cons(t_82, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL;
  z_82 = t;
  x_82 :
  if(match_cons(z_82, sym_Seq_2))
    {
      a_83 = ATgetArgument(z_82, 0);
      b_83 = ATgetArgument(z_82, 1);
      y_82 :
      if(match_cons(a_83, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm h_83 = NULL,i_83 = NULL;
  h_83 = t;
  f_83 :
  if(match_cons(h_83, sym_Not_1))
    {
      i_83 = ATgetArgument(h_83, 0);
      g_83 :
      if(match_cons(i_83, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm n_83 = NULL,o_83 = NULL;
  n_83 = t;
  l_83 :
  if(match_cons(n_83, sym_Test_1))
    {
      o_83 = ATgetArgument(n_83, 0);
      m_83 :
      if(match_cons(o_83, sym_Fail_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm w_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = w_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm e_21 = t;
              int f_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(f_21);
                }
              else
                {
                  t = e_21;
                  {
                    ATerm g_21 = t;
                    int p_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(p_21);
                      }
                    else
                      {
                        t = g_21;
                        {
                          ATerm q_21 = t;
                          int r_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(r_21);
                            }
                          else
                            {
                              t = q_21;
                              {
                                ATerm s_21 = t;
                                int t_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(t_21);
                                  }
                                else
                                  {
                                    t = s_21;
                                    {
                                      ATerm u_21 = t;
                                      int v_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(v_21);
                                        }
                                      else
                                        {
                                          t = u_21;
                                          {
                                            ATerm w_21 = t;
                                            int x_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(x_21);
                                              }
                                            else
                                              {
                                                t = w_21;
                                                {
                                                  ATerm y_21 = t;
                                                  int z_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(z_21);
                                                    }
                                                  else
                                                    {
                                                      t = y_21;
                                                      {
                                                        ATerm a_22 = t;
                                                        int b_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(b_22);
                                                          }
                                                        else
                                                          {
                                                            t = a_22;
                                                            {
                                                              ATerm c_22 = t;
                                                              int d_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(d_22);
                                                                }
                                                              else
                                                                {
                                                                  t = c_22;
                                                                  {
                                                                    ATerm h_22 = t;
                                                                    int i_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(i_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_22;
                                                                        {
                                                                          ATerm m_22 = t;
                                                                          int p_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(p_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_22;
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
  ATerm t_83 = NULL,u_83 = NULL;
  t_83 = t;
  r_83 :
  if(match_cons(t_83, sym_Match_1))
    {
      u_83 = ATgetArgument(t_83, 0);
      s_83 :
      if(match_cons(u_83, sym_Wld_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm z_83 = NULL,a_84 = NULL;
  z_83 = t;
  x_83 :
  if(match_cons(z_83, sym_Where_1))
    {
      a_84 = ATgetArgument(z_83, 0);
      y_83 :
      if(match_cons(a_84, sym_Id_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm f_84 = NULL,g_84 = NULL;
  f_84 = t;
  d_84 :
  if(match_cons(f_84, sym_All_1))
    {
      g_84 = ATgetArgument(f_84, 0);
      e_84 :
      if(match_cons(g_84, sym_Id_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
  l_84 = t;
  j_84 :
  if(match_cons(l_84, sym_Rec_2))
    {
      m_84 = ATgetArgument(l_84, 0);
      n_84 = ATgetArgument(l_84, 1);
      k_84 :
      if(match_cons(n_84, sym_Id_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t_84 = t;
  r_84 :
  if(match_cons(t_84, sym_Scope_2))
    {
      u_84 = ATgetArgument(t_84, 0);
      v_84 = ATgetArgument(t_84, 1);
      s_84 :
      if(match_cons(v_84, sym_Id_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
  b_85 = t;
  z_84 :
  if(match_cons(b_85, sym_LChoice_2))
    {
      c_85 = ATgetArgument(b_85, 0);
      d_85 = ATgetArgument(b_85, 1);
      a_85 :
      if(match_cons(c_85, sym_Id_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  h_85 :
  if(match_cons(j_85, sym_Seq_2))
    {
      k_85 = ATgetArgument(j_85, 0);
      l_85 = ATgetArgument(j_85, 1);
      i_85 :
      if(match_cons(l_85, sym_Id_0))
        {
          t = not_null(k_85);
        }
      else
        {
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
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
  r_85 = t;
  p_85 :
  if(match_cons(r_85, sym_Seq_2))
    {
      s_85 = ATgetArgument(r_85, 0);
      t_85 = ATgetArgument(r_85, 1);
      q_85 :
      if(match_cons(s_85, sym_Id_0))
        {
          t = not_null(t_85);
        }
      else
        {
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
  ATerm z_85 = NULL,a_86 = NULL;
  z_85 = t;
  x_85 :
  if(match_cons(z_85, sym_Not_1))
    {
      a_86 = ATgetArgument(z_85, 0);
      y_85 :
      if(match_cons(a_86, sym_Id_0))
        {
          t = term_h_20;
        }
      else
        {
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
  ATerm f_86 = NULL,g_86 = NULL;
  f_86 = t;
  d_86 :
  if(match_cons(f_86, sym_Test_1))
    {
      g_86 = ATgetArgument(f_86, 0);
      e_86 :
      if(match_cons(g_86, sym_Id_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm q_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = q_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm z_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = z_22;
                  {
                    ATerm b_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm d_23 = t;
                          int e_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(e_23);
                            }
                          else
                            {
                              t = d_23;
                              {
                                ATerm f_23 = t;
                                int g_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(g_23);
                                  }
                                else
                                  {
                                    t = f_23;
                                    {
                                      ATerm h_23 = t;
                                      int n_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(n_23);
                                        }
                                      else
                                        {
                                          t = h_23;
                                          {
                                            ATerm o_23 = t;
                                            int p_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(p_23);
                                              }
                                            else
                                              {
                                                t = o_23;
                                                {
                                                  ATerm r_23 = t;
                                                  int t_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(t_23);
                                                    }
                                                  else
                                                    {
                                                      t = r_23;
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
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm y_23 = t;
              int z_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(z_23);
                }
              else
                {
                  t = y_23;
                  {
                    ATerm a_24 = t;
                    int b_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(b_24);
                      }
                    else
                      {
                        t = a_24;
                        {
                          ATerm c_24 = t;
                          int h_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(h_24);
                            }
                          else
                            {
                              t = c_24;
                              {
                                ATerm i_24 = t;
                                int t_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(t_24);
                                  }
                                else
                                  {
                                    t = i_24;
                                    {
                                      ATerm u_24 = t;
                                      int v_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(v_24);
                                        }
                                      else
                                        {
                                          t = u_24;
                                          {
                                            ATerm w_24 = t;
                                            int x_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(x_24);
                                              }
                                            else
                                              {
                                                t = w_24;
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
ATerm repeat_2 (ATerm t, ATerm z_107 (ATerm), ATerm a_108 (ATerm))
{
  ATerm i_86 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_107(t);
        t = i_86(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = a_108(t);
      }
    return(t);
  }
  t = i_86(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_108 (ATerm))
{
  t = repeat_2(t, c_108, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm j_86 (ATerm t)
  {
    t = q_91(t);
    {
      t = _all(t, j_86);
      t = q_91(t);
    }
    return(t);
  }
  t = j_86(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = repeat_2(t, Simplify_0, _id);
    return(t);
  }
  t = downup_1(t, y_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm h_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = inlineable_0(t);
          t = AddSDef_0(t);
          LocalPopChoice(i_25);
        }
      else
        {
          t = h_25;
          {
          }
        }
    }
    return(t);
  }
  t = map_1(t, z_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm p_86 = NULL,q_86 = NULL;
  p_86 = t;
  o_86 :
  if(match_cons(p_86, sym_Strategies_1))
    {
      q_86 = ATgetArgument(p_86, 0);
      {
        ATerm t_86 = NULL,v_86 = NULL;
        ATerm u_86 = NULL;
        t = SSLgetAnnotations(not_null(p_86));
        {
          u_86 = t;
          if(((t_86 != NULL) && (t_86 != u_86)))
            _fail(u_86);
          else
            t_86 = u_86;
        }
        {
          t = not_null(q_86);
          {
            ATerm x_86 = NULL;
            t = f_81(t);
            {
              v_86 = t;
              {
                ATerm y_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_86)), not_null(t_86));
                {
                  y_86 = t;
                  if(((x_86 != NULL) && (x_86 != y_86)))
                    _fail(y_86);
                  else
                    x_86 = y_86;
                }
                t = not_null(x_86);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm i_87 = NULL,j_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym_Specification_1))
    {
      j_87 = ATgetArgument(i_87, 0);
      {
        ATerm m_87 = NULL,o_87 = NULL;
        ATerm n_87 = NULL;
        t = SSLgetAnnotations(not_null(i_87));
        {
          n_87 = t;
          if(((m_87 != NULL) && (m_87 != n_87)))
            _fail(n_87);
          else
            m_87 = n_87;
        }
        {
          t = not_null(j_87);
          {
            ATerm q_87 = NULL;
            t = h_81(t);
            {
              o_87 = t;
              {
                ATerm r_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(o_87)), not_null(m_87));
                {
                  r_87 = t;
                  if(((q_87 != NULL) && (q_87 != r_87)))
                    _fail(r_87);
                  else
                    q_87 = r_87;
                }
                t = not_null(q_87);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm f_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, f_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, e_4);
    return(t);
  }
  t = Specification_1(t, a_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
  c_88 = t;
  b_88 :
  if(match_cons(c_88, sym__2))
    {
      d_88 = ATgetArgument(c_88, 0);
      e_88 = ATgetArgument(c_88, 1);
      {
        ATerm i_88 = NULL,k_88 = NULL;
        ATerm j_88 = NULL;
        t = SSLgetAnnotations(not_null(c_88));
        {
          j_88 = t;
          if(((i_88 != NULL) && (i_88 != j_88)))
            _fail(j_88);
          else
            i_88 = j_88;
        }
        {
          t = not_null(d_88);
          {
            ATerm m_88 = NULL;
            t = l_77(t);
            {
              k_88 = t;
              {
                t = not_null(e_88);
                {
                  ATerm q_88 = NULL;
                  t = m_77(t);
                  {
                    m_88 = t;
                    {
                      ATerm r_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_88), not_null(m_88)), not_null(i_88));
                      {
                        r_88 = t;
                        if(((q_88 != NULL) && (q_88 != r_88)))
                          _fail(r_88);
                        else
                          q_88 = r_88;
                      }
                      t = not_null(q_88);
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
  ATerm z_88 = NULL;
  ATerm j_25;
  j_25 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm a_89 = NULL,b_89 = NULL;
      a_89 = t;
      y_88 :
      if(match_cons(a_89, sym_Program_1))
        {
          b_89 = ATgetArgument(a_89, 0);
          if(((z_88 != NULL) && (z_88 != b_89)))
            _fail(b_89);
          else
            z_88 = b_89;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_25), not_null(z_88)), term_v_25));
      {
        t = printnl_0(t);
        {
          t = term_b_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  e_89 :
  if(match_cons(f_89, sym__2))
    {
      g_89 = ATgetArgument(f_89, 0);
      h_89 = ATgetArgument(f_89, 1);
      {
        ATerm y_25;
        y_25 = t;
        t = SSL_printnl(not_null(g_89), not_null(h_89));
        t = y_25;
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
  ATerm m_89 = NULL;
  m_89 = t;
  t = SSL_implode_string(not_null(m_89));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_25 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = z_25;
      {
        ATerm r_89 = NULL,s_89 = NULL,w_89 = NULL;
        r_89 = t;
        q_89 :
        if(((ATgetType(r_89) == AT_LIST) && !(ATisEmpty(r_89))))
          {
            s_89 = ATgetFirst((ATermList) r_89);
            w_89 = (ATerm) ATgetNext((ATermList) r_89);
            {
              t = not_null(s_89);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(w_89);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_4);
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
  ATerm g_90 = NULL;
  ATerm i_90 = NULL;
  g_90 = t;
  {
    ATerm j_90 = NULL;
    ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
    t = not_null(g_90);
    {
      j_90 = t;
      {
        t = SSL_explode_term(not_null(j_90));
        {
          l_90 = t;
          e_90 :
          if(match_cons(l_90, sym__2))
            {
              m_90 = ATgetArgument(l_90, 0);
              n_90 = ATgetArgument(l_90, 1);
              f_90 :
              if(match_string(m_90, ""))
                {
                  if(((i_90 != NULL) && (i_90 != n_90)))
                    _fail(n_90);
                  else
                    i_90 = n_90;
                }
              else
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
      t = not_null(i_90);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm z_90 (ATerm t)
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_90);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          t = Nil_0(t);
          t = k_98(t);
        }
      }
    return(t);
  }
  t = z_90(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL;
  c_91 = t;
  b_91 :
  if(match_cons(c_91, sym__2))
    {
      d_91 = ATgetArgument(c_91, 0);
      e_91 = ATgetArgument(c_91, 1);
      {
        t = not_null(d_91);
        {
          ATerm i_4 (ATerm t)
          {
            t = not_null(e_91);
            return(t);
          }
          t = at_end_1(t, i_4);
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
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_91 = NULL;
  j_91 = t;
  t = SSL_explode_string(not_null(j_91));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_118 (ATerm))
{
  ATerm q_26;
  q_26 = t;
  {
    ATerm p_91 = NULL,t_91 = NULL;
    ATerm r_26;
    r_26 = t;
    {
      ATerm s_91 = NULL;
      t = g_118(t);
      {
        s_91 = t;
        if(((p_91 != NULL) && (p_91 != s_91)))
          _fail(s_91);
        else
          p_91 = s_91;
      }
    }
    t = r_26;
    {
      ATerm u_91 = NULL;
      u_91 = t;
      if(((t_91 != NULL) && (t_91 != u_91)))
        _fail(u_91);
      else
        t_91 = u_91;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_91)), not_null(p_91)));
        t = printnl_0(t);
      }
    }
  }
  t = q_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_91 = NULL;
  y_91 = t;
  t = SSL_is_string(not_null(y_91));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = s_26;
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm b_27 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(c_27);
                }
              else
                {
                  t = b_27;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, j_4);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            {
              ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
              h_92 = t;
              g_92 :
              if(match_cons(h_92, sym_Path_1))
                {
                  i_92 = ATgetArgument(h_92, 0);
                  t = not_null(i_92);
                }
              else
                {
                  if(match_cons(h_92, sym_Var_1))
                    {
                      i_92 = ATgetArgument(h_92, 0);
                      {
                        t = not_null(i_92);
                        {
                          ATerm d_27 = t;
                          int e_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_27);
                            }
                          else
                            {
                              t = d_27;
                              {
                                ATerm k_4 (ATerm t)
                                {
                                  t = term_f_27;
                                  return(t);
                                }
                                t = debug_1(t, k_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_92, sym_Prefix_2))
                        {
                          i_92 = ATgetArgument(h_92, 0);
                          j_92 = ATgetArgument(h_92, 1);
                          {
                            ATerm o_92 = NULL,q_92 = NULL;
                            ATerm g_27;
                            g_27 = t;
                            {
                              ATerm p_92 = NULL;
                              t = not_null(i_92);
                              {
                                t = eval_config_0(t);
                                {
                                  p_92 = t;
                                  if(((o_92 != NULL) && (o_92 != p_92)))
                                    _fail(p_92);
                                  else
                                    o_92 = p_92;
                                }
                              }
                            }
                            t = g_27;
                            {
                              ATerm r_92 = NULL;
                              t = not_null(j_92);
                              {
                                t = eval_config_0(t);
                                {
                                  r_92 = t;
                                  if(((q_92 != NULL) && (q_92 != r_92)))
                                    _fail(r_92);
                                  else
                                    q_92 = r_92;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_92), not_null(q_92));
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
  ATerm z_92 = NULL;
  z_92 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_27, not_null(z_92));
    {
      t = table_get_0(t);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_27;
              p_27 = t;
              {
                ATerm b_93 = NULL;
                ATerm c_93 = NULL;
                c_93 = t;
                if(((b_93 != NULL) && (b_93 != c_93)))
                  _fail(c_93);
                else
                  b_93 = c_93;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_27, not_null(z_92), not_null(b_93));
                  t = table_put_0(t);
                }
              }
              t = p_27;
            }
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_113 (ATerm))
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_27;
      t_27 = t;
      {
        ATerm i_93 = NULL;
        ATerm j_93 = NULL;
        t = term_x_27;
        {
          t = get_config_0(t);
          {
            j_93 = t;
            if(((i_93 != NULL) && (i_93 != j_93)))
              _fail(j_93);
            else
              i_93 = j_93;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_93), term_g_28);
          t = geq_0(t);
        }
      }
      t = t_27;
      t = z_113(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL;
  n_93 = t;
  m_93 :
  if(match_cons(n_93, sym__2))
    {
      o_93 = ATgetArgument(n_93, 0);
      p_93 = ATgetArgument(n_93, 1);
      t = SSL_WriteToTextFile(not_null(o_93), not_null(p_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  v_93 = t;
  u_93 :
  if(match_cons(v_93, sym__2))
    {
      w_93 = ATgetArgument(v_93, 0);
      x_93 = ATgetArgument(v_93, 1);
      t = SSL_WriteToBinaryFile(not_null(w_93), not_null(x_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_94 = NULL;
  ATerm h_28;
  h_28 = t;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm j_28 = t;
      int k_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_4 (ATerm t)
          {
            ATerm g_94 = NULL,h_94 = NULL;
            g_94 = t;
            c_94 :
            if(match_cons(g_94, sym_Output_1))
              {
                h_94 = ATgetArgument(g_94, 0);
                if(((f_94 != NULL) && (f_94 != h_94)))
                  _fail(h_94);
                else
                  f_94 = h_94;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, m_4);
          LocalPopChoice(k_28);
        }
      else
        {
          t = j_28;
          {
            ATerm i_94 = NULL;
            t = term_z_28;
            {
              i_94 = t;
              if(((f_94 != NULL) && (f_94 != i_94)))
                _fail(i_94);
              else
                f_94 = i_94;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_4, _id);
  }
  t = h_28;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        t = not_null(f_94);
        return(t);
      }
      t = split_2(t, o_4, _id);
      return(t);
    }
    t = _2(t, _id, n_4);
    {
      ATerm a_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_4 (ATerm t)
          {
            ATerm q_4 (ATerm t)
            {
              ATerm j_94 = NULL;
              j_94 = t;
              e_94 :
              if(!(match_cons(j_94, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, q_4);
            return(t);
          }
          t = _2(t, p_4, WriteToBinaryFile_0);
          LocalPopChoice(c_29);
        }
      else
        {
          t = a_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_112 (ATerm))
{
  ATerm p_94 = NULL,r_94 = NULL,t_94 = NULL,u_94 = NULL;
  ATerm d_29;
  d_29 = t;
  t = dtime_0(t);
  t = d_29;
  {
    t = c_112(t);
    {
      ATerm e_29;
      e_29 = t;
      {
        ATerm q_94 = NULL;
        t = dtime_0(t);
        {
          q_94 = t;
          if(((p_94 != NULL) && (p_94 != q_94)))
            _fail(q_94);
          else
            p_94 = q_94;
        }
      }
      t = e_29;
      {
        r_94 = t;
        o_94 :
        if(match_cons(r_94, sym__2))
          {
            t_94 = ATgetArgument(r_94, 0);
            u_94 = ATgetArgument(r_94, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_94))), not_null(u_94));
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
  ATerm a_95 = NULL;
  a_95 = t;
  t = SSL_ReadFromFile(not_null(a_95));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_95 (ATerm), ATerm i_95 (ATerm))
{
  ATerm j_95 = NULL,l_95 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    ATerm k_95 = NULL;
    t = h_95(t);
    {
      k_95 = t;
      if(((j_95 != NULL) && (j_95 != k_95)))
        _fail(k_95);
      else
        j_95 = k_95;
    }
  }
  t = r_29;
  {
    ATerm m_95 = NULL;
    t = i_95(t);
    {
      m_95 = t;
      if(((l_95 != NULL) && (l_95 != m_95)))
        _fail(m_95);
      else
        l_95 = m_95;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_95), not_null(l_95));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_95 = NULL;
  ATerm s_29;
  s_29 = t;
  {
    ATerm t_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 (ATerm t)
        {
          ATerm t_95 = NULL,u_95 = NULL;
          t_95 = t;
          q_95 :
          if(match_cons(t_95, sym_Input_1))
            {
              u_95 = ATgetArgument(t_95, 0);
              if(((s_95 != NULL) && (s_95 != u_95)))
                _fail(u_95);
              else
                s_95 = u_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, r_4);
        LocalPopChoice(a_30);
      }
    else
      {
        t = t_29;
        {
          ATerm v_95 = NULL;
          t = term_b_30;
          {
            v_95 = t;
            if(((s_95 != NULL) && (s_95 != v_95)))
              _fail(v_95);
            else
              s_95 = v_95;
          }
        }
      }
  }
  t = s_29;
  {
    ATerm s_4 (ATerm t)
    {
      t = not_null(s_95);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_4);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_95 = NULL;
  z_95 = t;
  t = SSL_string_to_int(not_null(z_95));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL;
  n_96 = t;
  f_96 :
  if(match_string(n_96, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(n_96) == AT_LIST) && !(ATisEmpty(n_96))))
        {
          o_96 = ATgetFirst((ATermList) n_96);
          p_96 = (ATerm) ATgetNext((ATermList) n_96);
          g_96 :
          if(((ATgetType(p_96) == AT_LIST) && !(ATisEmpty(p_96))))
            {
              q_96 = ATgetFirst((ATermList) p_96);
              r_96 = (ATerm) ATgetNext((ATermList) p_96);
              {
                ATerm v_96 = NULL;
                ATerm c_30;
                c_30 = t;
                {
                  t = not_null(o_96);
                  t = j_0(t);
                }
                t = c_30;
                {
                  ATerm w_96 = NULL;
                  t = not_null(q_96);
                  {
                    t = l_0(t);
                    {
                      w_96 = t;
                      if(((v_96 != NULL) && (v_96 != w_96)))
                        _fail(w_96);
                      else
                        v_96 = w_96;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_96)), not_null(v_96));
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
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_4 (ATerm t)
      {
        ATerm p_97 = NULL;
        p_97 = t;
        a_97 :
        if(!(match_string(p_97, "-i")))
          {
            if(!(match_string(p_97, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        ATerm s_97 = NULL;
        ATerm f_30;
        f_30 = t;
        {
          ATerm q_97 = NULL;
          ATerm r_97 = NULL;
          r_97 = t;
          if(((q_97 != NULL) && (q_97 != r_97)))
            _fail(r_97);
          else
            q_97 = r_97;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_g_30, not_null(q_97));
            t = set_config_0(t);
          }
        }
        t = f_30;
        {
          ATerm u_97 = NULL;
          u_97 = t;
          if(((s_97 != NULL) && (s_97 != u_97)))
            _fail(u_97);
          else
            s_97 = u_97;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_97));
        }
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        t = term_h_30;
        return(t);
      }
      t = ArgOption_3(t, t_4, u_4, v_4);
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              ATerm x_97 = NULL;
              x_97 = t;
              d_97 :
              if(!(match_string(x_97, "-o")))
                {
                  if(!(match_string(x_97, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              ATerm a_98 = NULL;
              ATerm p_30;
              p_30 = t;
              {
                ATerm y_97 = NULL;
                ATerm z_97 = NULL;
                z_97 = t;
                if(((y_97 != NULL) && (y_97 != z_97)))
                  _fail(z_97);
                else
                  y_97 = z_97;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_30, not_null(y_97));
                  t = set_config_0(t);
                }
              }
              t = p_30;
              {
                ATerm b_98 = NULL;
                b_98 = t;
                if(((a_98 != NULL) && (a_98 != b_98)))
                  _fail(b_98);
                else
                  a_98 = b_98;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_98));
              }
              return(t);
            }
            ATerm y_4 (ATerm t)
            {
              t = term_r_30;
              return(t);
            }
            t = ArgOption_3(t, w_4, x_4, y_4);
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm s_30 = t;
              int t_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_4 (ATerm t)
                  {
                    ATerm c_98 = NULL;
                    c_98 = t;
                    g_97 :
                    if(!(match_string(c_98, "-S")))
                      {
                        if(!(match_string(c_98, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm a_5 (ATerm t)
                  {
                    t = term_v_30;
                    t = set_config_0(t);
                    t = term_w_30;
                    return(t);
                  }
                  ATerm b_5 (ATerm t)
                  {
                    t = term_x_30;
                    return(t);
                  }
                  t = Option_3(t, z_4, a_5, b_5);
                  LocalPopChoice(t_30);
                }
              else
                {
                  t = s_30;
                  {
                    ATerm y_30 = t;
                    int z_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_5 (ATerm t)
                        {
                          ATerm d_98 = NULL;
                          d_98 = t;
                          h_97 :
                          if(!(match_string(d_98, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm d_5 (ATerm t)
                        {
                          ATerm i_98 = NULL;
                          ATerm a_31;
                          a_31 = t;
                          {
                            ATerm g_98 = NULL;
                            ATerm h_98 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_98 = t;
                              if(((g_98 != NULL) && (g_98 != h_98)))
                                _fail(h_98);
                              else
                                g_98 = h_98;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(g_98));
                              t = set_config_0(t);
                            }
                          }
                          t = a_31;
                          {
                            ATerm j_98 = NULL;
                            j_98 = t;
                            if(((i_98 != NULL) && (i_98 != j_98)))
                              _fail(j_98);
                            else
                              i_98 = j_98;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_98));
                          }
                          return(t);
                        }
                        ATerm e_5 (ATerm t)
                        {
                          t = term_b_31;
                          return(t);
                        }
                        t = ArgOption_3(t, c_5, d_5, e_5);
                        LocalPopChoice(z_30);
                      }
                    else
                      {
                        t = y_30;
                        {
                          ATerm c_31 = t;
                          int d_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_5 (ATerm t)
                              {
                                ATerm m_98 = NULL;
                                m_98 = t;
                                k_97 :
                                if(!(match_string(m_98, "-k")))
                                  {
                                    if(!(match_string(m_98, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm g_5 (ATerm t)
                              {
                                ATerm e_31;
                                e_31 = t;
                                {
                                  ATerm n_98 = NULL;
                                  ATerm o_98 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    o_98 = t;
                                    if(((n_98 != NULL) && (n_98 != o_98)))
                                      _fail(o_98);
                                    else
                                      n_98 = o_98;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_31, not_null(n_98));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_31;
                                return(t);
                              }
                              ATerm h_5 (ATerm t)
                              {
                                t = term_g_31;
                                return(t);
                              }
                              t = ArgOption_3(t, f_5, g_5, h_5);
                              LocalPopChoice(d_31);
                            }
                          else
                            {
                              t = c_31;
                              {
                                ATerm h_31 = t;
                                int i_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_5 (ATerm t)
                                    {
                                      ATerm p_98 = NULL;
                                      p_98 = t;
                                      m_97 :
                                      if(!(match_string(p_98, "-v")))
                                        {
                                          if(!(match_string(p_98, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm j_5 (ATerm t)
                                    {
                                      t = term_k_31;
                                      t = set_config_0(t);
                                      t = term_l_31;
                                      return(t);
                                    }
                                    ATerm k_5 (ATerm t)
                                    {
                                      t = term_m_31;
                                      return(t);
                                    }
                                    t = Option_3(t, i_5, j_5, k_5);
                                    LocalPopChoice(i_31);
                                  }
                                else
                                  {
                                    t = h_31;
                                    {
                                      ATerm n_31 = t;
                                      int o_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_5 (ATerm t)
                                          {
                                            ATerm q_98 = NULL;
                                            q_98 = t;
                                            n_97 :
                                            if(!(match_string(q_98, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm m_5 (ATerm t)
                                          {
                                            t = term_q_31;
                                            t = set_config_0(t);
                                            t = term_r_31;
                                            return(t);
                                          }
                                          ATerm n_5 (ATerm t)
                                          {
                                            t = term_s_31;
                                            return(t);
                                          }
                                          t = Option_3(t, l_5, m_5, n_5);
                                          LocalPopChoice(o_31);
                                        }
                                      else
                                        {
                                          t = n_31;
                                          {
                                            ATerm o_5 (ATerm t)
                                            {
                                              ATerm r_98 = NULL;
                                              r_98 = t;
                                              o_97 :
                                              if(!(match_string(r_98, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm p_5 (ATerm t)
                                            {
                                              t = term_u_31;
                                              t = set_config_0(t);
                                              t = term_v_31;
                                              return(t);
                                            }
                                            ATerm q_5 (ATerm t)
                                            {
                                              t = term_w_31;
                                              return(t);
                                            }
                                            t = Option_3(t, o_5, p_5, q_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATempty, term_x_31));
  {
    t = printnl_0(t);
    {
      t = term_b_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_99 = NULL;
  a_99 = t;
  t = SSL_TicksToSeconds(not_null(a_99));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
  f_99 = t;
  e_99 :
  if(match_cons(f_99, sym__2))
    {
      g_99 = ATgetArgument(f_99, 0);
      h_99 = ATgetArgument(f_99, 1);
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_99), not_null(h_99));
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = SSL_addr(not_null(g_99), not_null(h_99));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_102 (ATerm), ATerm t_102 (ATerm))
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_102(t);
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL;
        o_99 = t;
        n_99 :
        if(((ATgetType(o_99) == AT_LIST) && !(ATisEmpty(o_99))))
          {
            p_99 = ATgetFirst((ATermList) o_99);
            q_99 = (ATerm) ATgetNext((ATermList) o_99);
            {
              ATerm t_99 = NULL;
              ATerm u_99 = NULL;
              t = not_null(q_99);
              {
                t = foldr_2(t, s_102, t_102);
                {
                  u_99 = t;
                  if(((t_99 != NULL) && (t_99 != u_99)))
                    _fail(u_99);
                  else
                    t_99 = u_99;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_99), not_null(t_99));
                t = t_102(t);
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
ATerm crush_2 (ATerm t, ATerm q_101 (ATerm), ATerm r_101 (ATerm))
{
  ATerm b_100 = NULL;
  ATerm d_100 = NULL;
  b_100 = t;
  {
    ATerm e_100 = NULL;
    ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
    t = not_null(b_100);
    {
      e_100 = t;
      {
        t = SSL_explode_term(not_null(e_100));
        {
          g_100 = t;
          a_100 :
          if(match_cons(g_100, sym__2))
            {
              h_100 = ATgetArgument(g_100, 0);
              i_100 = ATgetArgument(g_100, 1);
              if(((d_100 != NULL) && (d_100 != i_100)))
                _fail(i_100);
              else
                d_100 = i_100;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_100);
      t = foldr_2(t, q_101, r_101);
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
    ATerm r_5 (ATerm t)
    {
      t = term_u_30;
      return(t);
    }
    t = crush_2(t, r_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
  o_100 = t;
  n_100 :
  if(match_cons(o_100, sym__2))
    {
      p_100 = ATgetArgument(o_100, 0);
      q_100 = ATgetArgument(o_100, 1);
      {
        ATerm c_32;
        c_32 = t;
        {
          ATerm d_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_100), not_null(q_100));
              LocalPopChoice(g_32);
            }
          else
            {
              t = d_32;
              t = SSL_gtr(not_null(p_100), not_null(q_100));
            }
        }
        t = c_32;
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
  ATerm w_100 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
      x_100 = t;
      v_100 :
      if(match_cons(x_100, sym__2))
        {
          y_100 = ATgetArgument(x_100, 0);
          z_100 = ATgetArgument(x_100, 1);
          {
            if(((w_100 != NULL) && (w_100 != y_100)))
              _fail(y_100);
            else
              w_100 = y_100;
            if(((w_100 != NULL) && (w_100 != z_100)))
              _fail(z_100);
            else
              w_100 = z_100;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_113 (ATerm))
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_32;
      l_32 = t;
      {
        ATerm c_101 = NULL;
        ATerm d_101 = NULL;
        t = term_x_27;
        {
          t = get_config_0(t);
          {
            d_101 = t;
            if(((c_101 != NULL) && (c_101 != d_101)))
              _fail(d_101);
            else
              c_101 = d_101;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_101), term_b_15);
          t = geq_0(t);
        }
      }
      t = l_32;
      t = y_113(t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm h_101 = NULL,j_101 = NULL;
    ATerm m_32;
    m_32 = t;
    {
      ATerm i_101 = NULL;
      t = run_time_0(t);
      {
        i_101 = t;
        if(((h_101 != NULL) && (h_101 != i_101)))
          _fail(i_101);
        else
          h_101 = i_101;
      }
    }
    t = m_32;
    {
      ATerm k_101 = NULL;
      t = term_n_32;
      {
        t = get_config_0(t);
        {
          k_101 = t;
          if(((j_101 != NULL) && (j_101 != k_101)))
            _fail(k_101);
          else
            j_101 = k_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_32), not_null(h_101)), term_o_32), not_null(j_101)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_5);
  {
    t = term_u_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_101 = NULL;
  w_101 = t;
  v_101 :
  if(match_cons(w_101, sym_Version_0))
    {
      ATerm a_102 = NULL,e_102 = NULL;
      ATerm q_32;
      q_32 = t;
      {
        ATerm d_102 = NULL;
        t = SSLgetAnnotations(not_null(w_101));
        {
          d_102 = t;
          if(((a_102 != NULL) && (a_102 != d_102)))
            _fail(d_102);
          else
            a_102 = d_102;
        }
      }
      t = q_32;
      {
        ATerm i_102 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_102));
        {
          i_102 = t;
          if(((e_102 != NULL) && (e_102 != i_102)))
            _fail(i_102);
          else
            e_102 = i_102;
        }
        t = not_null(e_102);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_112 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, t_5);
  t = a_112(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_102 = NULL;
  n_102 = t;
  t = SSL_table_create(not_null(n_102));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_102 = NULL;
  r_102 = t;
  {
    ATerm v_32;
    v_32 = t;
    {
      t = term_w_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_32, term_x_32, not_null(r_102));
          t = table_put_0(t);
        }
      }
    }
    t = v_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_103 = NULL;
  a_103 = t;
  t = SSL_table_destroy(not_null(a_103));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_103 = NULL;
  e_103 = t;
  t = SSL_exit(not_null(e_103));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL;
  i_103 = t;
  h_103 :
  if(((ATgetType(i_103) == AT_LIST) && ATisEmpty(i_103)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_103) == AT_LIST) && !(ATisEmpty(i_103))))
        {
          j_103 = ATgetFirst((ATermList) i_103);
          k_103 = (ATerm) ATgetNext((ATermList) i_103);
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
  ATerm y_32;
  y_32 = t;
  {
    ATerm n_103 = NULL;
    ATerm q_103 = NULL;
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        {
          ATerm o_103 = NULL;
          ATerm p_103 = NULL;
          p_103 = t;
          if(((o_103 != NULL) && (o_103 != p_103)))
            _fail(p_103);
          else
            o_103 = p_103;
          t = (ATerm) ATinsert(ATempty, not_null(o_103));
        }
      }
    {
      q_103 = t;
      if(((n_103 != NULL) && (n_103 != q_103)))
        _fail(q_103);
      else
        n_103 = q_103;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_28, not_null(n_103));
      t = printnl_0(t);
    }
  }
  t = y_32;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_97 (ATerm))
{
  ATerm t_103 (ATerm t)
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = Cons_2(t, v_97, t_103);
      }
    return(t);
  }
  t = t_103(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
  c_104 = t;
  z_103 :
  if(((ATgetType(c_104) == AT_LIST) && !(ATisEmpty(c_104))))
    {
      a_104 = ATgetFirst((ATermList) c_104);
      b_104 = (ATerm) ATgetNext((ATermList) c_104);
      {
        ATerm f_104 = NULL;
        t = not_null(b_104);
        {
          ATerm d_33;
          d_33 = t;
          {
            ATerm g_104 = NULL,p_104 = NULL,r_104 = NULL;
            ATerm g_33;
            g_33 = t;
            {
              ATerm o_104 = NULL;
              t = i_0(t);
              {
                o_104 = t;
                if(((g_104 != NULL) && (g_104 != o_104)))
                  _fail(o_104);
                else
                  g_104 = o_104;
              }
            }
            t = g_33;
            {
              ATerm q_104 = NULL;
              t = not_null(a_104);
              {
                t = h_0(t);
                {
                  q_104 = t;
                  if(((p_104 != NULL) && (p_104 != q_104)))
                    _fail(q_104);
                  else
                    p_104 = q_104;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_104)), not_null(p_104));
                {
                  r_104 = t;
                  if(((f_104 != NULL) && (f_104 != r_104)))
                    _fail(r_104);
                  else
                    f_104 = r_104;
                }
              }
            }
          }
          t = d_33;
          {
            ATerm u_5 (ATerm t)
            {
              t = not_null(f_104);
              return(t);
            }
            t = reverse_acc_2(t, h_0, u_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_104) == AT_LIST) && ATisEmpty(c_104)))
        {
          {
            t = term_p_6;
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
  ATerm v_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_88 (ATerm))
{
  ATerm h_105 = NULL,i_105 = NULL;
  h_105 = t;
  g_105 :
  if(match_cons(h_105, sym_Program_1))
    {
      i_105 = ATgetArgument(h_105, 0);
      {
        ATerm l_105 = NULL,n_105 = NULL;
        ATerm m_105 = NULL;
        t = SSLgetAnnotations(not_null(h_105));
        {
          m_105 = t;
          if(((l_105 != NULL) && (l_105 != m_105)))
            _fail(m_105);
          else
            l_105 = m_105;
        }
        {
          t = not_null(i_105);
          {
            ATerm p_105 = NULL;
            t = o_88(t);
            {
              n_105 = t;
              {
                ATerm r_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_105)), not_null(l_105));
                {
                  r_105 = t;
                  if(((p_105 != NULL) && (p_105 != r_105)))
                    _fail(r_105);
                  else
                    p_105 = r_105;
                }
                t = not_null(p_105);
              }
            }
          }
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
  ATerm z_105 = NULL;
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_106 = NULL;
      t = term_n_32;
      {
        t = get_config_0(t);
        {
          a_106 = t;
          if(((z_105 != NULL) && (z_105 != a_106)))
            _fail(a_106);
          else
            z_105 = a_106;
        }
      }
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm w_5 (ATerm t)
        {
          ATerm x_5 (ATerm t)
          {
            ATerm b_106 = NULL;
            b_106 = t;
            if(((z_105 != NULL) && (z_105 != b_106)))
              _fail(b_106);
            else
              z_105 = b_106;
            return(t);
          }
          t = Program_1(t, x_5);
          return(t);
        }
        t = fetch_1(t, w_5);
      }
    }
  {
    t = term_j_33;
    {
      t = echo_0(t);
      {
        t = term_q_33;
        {
          t = table_get_0(t);
          {
            ATerm y_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, y_5);
            {
              ATerm z_5 (ATerm t)
              {
                ATerm c_106 = NULL;
                ATerm d_106 = NULL;
                d_106 = t;
                if(((c_106 != NULL) && (c_106 != d_106)))
                  _fail(d_106);
                else
                  c_106 = d_106;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_106)), term_t_33);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, z_5);
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
  ATerm u_33;
  u_33 = t;
  {
    ATerm i_106 = NULL;
    ATerm j_106 = NULL;
    j_106 = t;
    if(((i_106 != NULL) && (i_106 != j_106)))
      _fail(j_106);
    else
      i_106 = j_106;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATempty, not_null(i_106)));
      t = printnl_0(t);
    }
  }
  t = u_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_118 (ATerm))
{
  ATerm v_33;
  v_33 = t;
  {
    t = h_118(t);
    t = debug_0(t);
  }
  t = v_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_88 (ATerm))
{
  ATerm u_106 = NULL,v_106 = NULL;
  u_106 = t;
  t_106 :
  if(match_cons(u_106, sym_Undefined_1))
    {
      v_106 = ATgetArgument(u_106, 0);
      {
        ATerm y_106 = NULL,a_107 = NULL;
        ATerm z_106 = NULL;
        t = SSLgetAnnotations(not_null(u_106));
        {
          z_106 = t;
          if(((y_106 != NULL) && (y_106 != z_106)))
            _fail(z_106);
          else
            y_106 = z_106;
        }
        {
          t = not_null(v_106);
          {
            ATerm c_107 = NULL;
            t = p_88(t);
            {
              a_107 = t;
              {
                ATerm d_107 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_107)), not_null(y_106));
                {
                  d_107 = t;
                  if(((c_107 != NULL) && (c_107 != d_107)))
                    _fail(d_107);
                  else
                    c_107 = d_107;
                }
                t = not_null(c_107);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm i_107 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_98, _id);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = Cons_2(t, _id, i_107);
      }
    return(t);
  }
  t = i_107(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_115 (ATerm))
{
  t = fetch_1(t, b_115);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  m_107 :
  if(match_cons(n_107, sym_Help_0))
    {
      ATerm p_107 = NULL,r_107 = NULL;
      ATerm y_33;
      y_33 = t;
      {
        ATerm q_107 = NULL;
        t = SSLgetAnnotations(not_null(n_107));
        {
          q_107 = t;
          if(((p_107 != NULL) && (p_107 != q_107)))
            _fail(q_107);
          else
            p_107 = q_107;
        }
      }
      t = y_33;
      {
        ATerm s_107 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_107));
        {
          s_107 = t;
          if(((r_107 != NULL) && (r_107 != s_107)))
            _fail(s_107);
          else
            r_107 = s_107;
        }
        t = not_null(r_107);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_94(t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_107 = NULL,d_108 = NULL,e_108 = NULL;
  y_107 = t;
  x_107 :
  if(match_cons(y_107, sym__2))
    {
      d_108 = ATgetArgument(y_107, 0);
      e_108 = ATgetArgument(y_107, 1);
      t = SSL_table_get(not_null(d_108), not_null(e_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  l_108 = t;
  k_108 :
  if(match_cons(l_108, sym__3))
    {
      m_108 = ATgetArgument(l_108, 0);
      n_108 = ATgetArgument(l_108, 1);
      o_108 = ATgetArgument(l_108, 2);
      {
        ATerm k_34;
        k_34 = t;
        {
          ATerm y_108 = NULL;
          ATerm z_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_108), not_null(n_108));
          {
            ATerm l_34 = t;
            int m_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_34);
              }
            else
              {
                t = l_34;
                t = (ATerm) ATempty;
              }
            {
              z_108 = t;
              if(((y_108 != NULL) && (y_108 != z_108)))
                _fail(z_108);
              else
                y_108 = z_108;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_108), not_null(n_108), (ATerm) ATinsert(CheckATermList(not_null(y_108)), not_null(o_108)));
            t = table_put_0(t);
          }
        }
        t = k_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_116 (ATerm))
{
  ATerm d_109 = NULL;
  ATerm e_109 = NULL;
  t = term_p_6;
  {
    t = g_116(t);
    {
      e_109 = t;
      if(((d_109 != NULL) && (d_109 != e_109)))
        _fail(e_109);
      else
        d_109 = e_109;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_33, term_p_33, not_null(d_109));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_string(k_109, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(k_109) == AT_LIST) && !(ATisEmpty(k_109))))
        {
          l_109 = ATgetFirst((ATermList) k_109);
          m_109 = (ATerm) ATgetNext((ATermList) k_109);
          {
            ATerm p_109 = NULL;
            ATerm n_34;
            n_34 = t;
            {
              t = not_null(l_109);
              t = a_0(t);
            }
            t = n_34;
            {
              ATerm q_109 = NULL;
              t = term_p_6;
              {
                t = b_0(t);
                {
                  q_109 = t;
                  if(((p_109 != NULL) && (p_109 != q_109)))
                    _fail(q_109);
                  else
                    p_109 = q_109;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_109)), not_null(p_109));
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
  ATerm a_6 (ATerm t)
  {
    ATerm v_109 = NULL;
    v_109 = t;
    u_109 :
    if(!(match_string(v_109, "--help")))
      {
        if(!(match_string(v_109, "-h")))
          {
            if(!(match_string(v_109, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_t_34;
    {
      t = set_config_0(t);
      t = term_u_34;
    }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  t = Option_3(t, a_6, b_6, c_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL;
  y_109 = t;
  x_109 :
  if(((ATgetType(y_109) == AT_LIST) && !(ATisEmpty(y_109))))
    {
      z_109 = ATgetFirst((ATermList) y_109);
      a_110 = (ATerm) ATgetNext((ATermList) y_109);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_110)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_109)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL;
  k_110 = t;
  j_110 :
  if(((ATgetType(k_110) == AT_LIST) && !(ATisEmpty(k_110))))
    {
      l_110 = ATgetFirst((ATermList) k_110);
      m_110 = (ATerm) ATgetNext((ATermList) k_110);
      {
        ATerm q_110 = NULL,s_110 = NULL;
        ATerm r_110 = NULL;
        t = SSLgetAnnotations(not_null(k_110));
        {
          r_110 = t;
          if(((q_110 != NULL) && (q_110 != r_110)))
            _fail(r_110);
          else
            q_110 = r_110;
        }
        {
          t = not_null(l_110);
          {
            ATerm u_110 = NULL;
            t = u_78(t);
            {
              s_110 = t;
              {
                t = not_null(m_110);
                {
                  ATerm w_110 = NULL;
                  t = v_78(t);
                  {
                    u_110 = t;
                    {
                      ATerm x_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_110)), not_null(s_110)), not_null(q_110));
                      {
                        x_110 = t;
                        if(((w_110 != NULL) && (w_110 != x_110)))
                          _fail(x_110);
                        else
                          w_110 = x_110;
                      }
                      t = not_null(w_110);
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
  ATerm h_111 = NULL;
  h_111 = t;
  g_111 :
  if(((ATgetType(h_111) == AT_LIST) && ATisEmpty(h_111)))
    {
      {
        ATerm j_111 = NULL,q_111 = NULL;
        ATerm w_34;
        w_34 = t;
        {
          ATerm k_111 = NULL;
          t = SSLgetAnnotations(not_null(h_111));
          {
            k_111 = t;
            if(((j_111 != NULL) && (j_111 != k_111)))
              _fail(k_111);
            else
              j_111 = k_111;
          }
        }
        t = w_34;
        {
          ATerm s_111 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_111));
          {
            s_111 = t;
            if(((q_111 != NULL) && (q_111 != s_111)))
              _fail(s_111);
            else
              q_111 = s_111;
          }
          t = not_null(q_111);
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
  ATerm y_111 = NULL,z_111 = NULL,b_112 = NULL;
  y_111 = t;
  x_111 :
  if(match_cons(y_111, sym__2))
    {
      z_111 = ATgetArgument(y_111, 0);
      b_112 = ATgetArgument(y_111, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_27, not_null(z_111), not_null(b_112));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_116 (ATerm))
{
  ATerm x_34;
  x_34 = t;
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_35;
        t = e_116(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        {
        }
      }
  }
  t = x_34;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm u_112 = NULL;
      ATerm n_35;
      n_35 = t;
      {
        ATerm n_112 = NULL;
        ATerm o_112 = NULL;
        o_112 = t;
        if(((n_112 != NULL) && (n_112 != o_112)))
          _fail(o_112);
        else
          n_112 = o_112;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_32, not_null(n_112));
          t = set_config_0(t);
        }
      }
      t = n_35;
      {
        ATerm v_112 = NULL;
        v_112 = t;
        if(((u_112 != NULL) && (u_112 != v_112)))
          _fail(v_112);
        else
          u_112 = v_112;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_112));
      }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              {
                t = e_116(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_6, e_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL;
  ATerm x_35;
  x_35 = t;
  {
    ATerm i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL;
    i_113 = t;
    e_113 :
    if(match_cons(i_113, sym__3))
      {
        j_113 = ATgetArgument(i_113, 0);
        k_113 = ATgetArgument(i_113, 1);
        l_113 = ATgetArgument(i_113, 2);
        {
          if(((f_113 != NULL) && (f_113 != j_113)))
            _fail(j_113);
          else
            f_113 = j_113;
          {
            if(((g_113 != NULL) && (g_113 != k_113)))
              _fail(k_113);
            else
              g_113 = k_113;
            {
              if(((h_113 != NULL) && (h_113 != l_113)))
                _fail(l_113);
              else
                h_113 = l_113;
              t = SSL_table_put(not_null(f_113), not_null(g_113), not_null(h_113));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_116 (ATerm))
{
  ATerm o_113 = NULL;
  ATerm y_35;
  y_35 = t;
  {
    t = term_z_35;
    t = table_put_0(t);
  }
  t = y_35;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm a_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_116(t);
          LocalPopChoice(f_36);
        }
      else
        {
          t = a_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_6);
    {
      ATerm g_36 = t;
      int l_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_36;
          m_36 = t;
          {
            ATerm n_36 = t;
            int o_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_34;
                t = get_config_0(t);
                LocalPopChoice(o_36);
              }
            else
              {
                t = n_36;
                t = fetch_1(t, Help_0);
              }
          }
          t = m_36;
          {
            t = system_usage_0(t);
            {
              t = term_u_30;
              t = exit_0(t);
            }
          }
          LocalPopChoice(l_36);
        }
      else
        {
          t = g_36;
          {
            ATerm p_36 = t;
            int q_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm p_113 = NULL;
                    p_113 = t;
                    if(((o_113 != NULL) && (o_113 != p_113)))
                      _fail(p_113);
                    else
                      o_113 = p_113;
                    return(t);
                  }
                  t = Undefined_1(t, h_6);
                  return(t);
                }
                t = fetch_1(t, g_6);
                {
                  ATerm i_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_113)), term_s_36);
                    return(t);
                  }
                  t = say_1(t, i_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_b_15;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(q_36);
              }
            else
              {
                t = p_36;
                {
                }
              }
          }
        }
      {
        ATerm t_36;
        t_36 = t;
        {
          t = term_k_33;
          t = table_destroy_0(t);
        }
        t = t_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm j_112 (ATerm))
{
  t = parse_options_1(t, g_112);
  {
    t = store_options_0(t);
    {
      t = i_112(t);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_112);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            {
              ATerm x_36 = t;
              int a_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_112(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_37);
                }
              else
                {
                  t = x_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, x_112);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, k_6, z_112, a_113, l_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      ATerm g_37;
      g_37 = t;
      {
        ATerm s_113 = NULL;
        ATerm t_113 = NULL;
        t = term_n_32;
        {
          t = get_config_0(t);
          {
            t_113 = t;
            if(((s_113 != NULL) && (s_113 != t_113)))
              _fail(t_113);
            else
              s_113 = t_113;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATempty, not_null(s_113)));
          t = printnl_0(t);
        }
      }
      t = g_37;
      return(t);
    }
    t = if_verbose2_1(t, n_6);
    return(t);
  }
  t = iowrap_4(t, r_112, s_112, t_112, m_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_112 (ATerm), ATerm q_112 (ATerm))
{
  t = iowrap_3(t, p_112, q_112, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_112 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    t = _2(t, _id, m_112);
    return(t);
  }
  t = iowrap_2(t, o_6, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
