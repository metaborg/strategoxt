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
Symbol sym_Mark_0;
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
  sym_Mark_0 = ATmakeSymbol("Mark", 0, ATfalse);
  ATprotectSymbol(sym_Mark_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_d_36;
ATerm term_s_35;
ATerm term_m_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_w_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_i_30;
ATerm term_c_29;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_a_28;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_z_19;
ATerm term_s_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_h_16;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_o_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
void init_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("x*", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_19);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Call_2, term_z_19, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_a_28);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_28);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_f_25);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_f_25);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_f_25);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, (ATerm) ATempty);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_99 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm k_90 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm j_89 (ATerm), ATerm k_89 (ATerm));
ATerm Explode_2 (ATerm, ATerm o_85 (ATerm), ATerm p_85 (ATerm));
ATerm Op_2 (ATerm, ATerm j_87 (ATerm), ATerm k_87 (ATerm));
ATerm pat_td_1 (ATerm, ATerm b_92 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm m_110 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_104 (ATerm), ATerm k_104 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_104 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm Con_3 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm i_116 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm s_114 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm u_99 (ATerm));
ATerm restore_always_2 (ATerm, ATerm q_114 (ATerm), ATerm r_114 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_99 (ATerm));
ATerm scope_2 (ATerm, ATerm v_99 (ATerm), ATerm w_99 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm t_114 (ATerm));
ATerm innermost_1 (ATerm, ATerm l_102 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm d_89 (ATerm));
ATerm Seq_2 (ATerm, ATerm n_87 (ATerm), ATerm o_87 (ATerm));
ATerm Match_1 (ATerm, ATerm c_89 (ATerm));
ATerm LChoice_2 (ATerm, ATerm r_87 (ATerm), ATerm s_87 (ATerm));
ATerm Choice_2 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm w_116 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm c_94 (ATerm), ATerm d_94 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm e_94 (ATerm), ATerm f_94 (ATerm));
ATerm substitute_1 (ATerm, ATerm g_94 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm f_91 (ATerm));
ATerm Rec_2 (ATerm, ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm SDef_3 (ATerm, ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm Let_2 (ATerm, ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm sboundin_3 (ATerm, ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm b_88 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm b_91 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm j_86 (ATerm));
ATerm Scope_2 (ATerm, ATerm g_89 (ATerm), ATerm h_89 (ATerm));
ATerm tboundin_3 (ATerm, ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm j_107 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm));
ATerm crush_3 (ATerm, ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_105 (ATerm), ATerm b_105 (ATerm));
ATerm for_3 (ATerm, ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm));
ATerm diff_1 (ATerm, ATerm m_107 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm w_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm));
ATerm zip_1 (ATerm, ATerm h_110 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm v_93 (ATerm), ATerm w_93 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm j_93 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm m_101 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm r_101 (ATerm));
ATerm rename_4 (ATerm, ATerm x_93 (ATerm, ATerm (ATerm)), ATerm y_93 (ATerm), ATerm z_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_94 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_99 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_99 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm t_86 (ATerm));
ATerm Signature_1 (ATerm, ATerm q_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_86 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_99 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_106 (ATerm), ATerm b_106 (ATerm));
ATerm crush_2 (ATerm, ATerm s_107 (ATerm), ATerm t_107 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_90 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_98 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_113 (ATerm), ATerm m_113 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_112 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_95 (ATerm));
ATerm map_1 (ATerm, ATerm p_111 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_95 (ATerm));
ATerm Program_1 (ATerm, ATerm a_79 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_111 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_114 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_96 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm q_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_89 (ATerm), ATerm m_89 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_96 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_95 (ATerm));
ATerm iowrap_4 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_97 (ATerm), ATerm q_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_97 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm s_9;
  s_9 = t;
  {
    ATerm j_6 = NULL;
    ATerm k_6 = NULL;
    k_6 = t;
    if(((j_6 != NULL) && (j_6 != k_6)))
      _fail(k_6);
    else
      j_6 = k_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(j_6)));
      t = printnl_0(t);
    }
  }
  t = s_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_99 (ATerm))
{
  ATerm u_9;
  u_9 = t;
  {
    t = c_99(t);
    t = debug_0(t);
  }
  t = u_9;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm v_9;
    v_9 = t;
    {
      ATerm a_7 = NULL;
      ATerm b_7 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          b_7 = t;
          if(((a_7 != NULL) && (a_7 != b_7)))
            _fail(b_7);
          else
            a_7 = b_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), term_x_9);
        t = geq_0(t);
      }
    }
    t = v_9;
    t = k_90(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  i_8 = t;
  g_8 :
  if(match_cons(i_8, sym_ExplodeCong_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      h_8 = ATgetArgument(i_8, 1);
      {
        ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
        ATerm q_8 = NULL;
        ATerm r_8 = NULL;
        t = new_0(t);
        {
          q_8 = t;
          {
            if(((m_8 != NULL) && (m_8 != q_8)))
              _fail(q_8);
            else
              m_8 = q_8;
            {
              ATerm s_8 = NULL;
              t = new_0(t);
              {
                r_8 = t;
                {
                  if(((n_8 != NULL) && (n_8 != r_8)))
                    _fail(r_8);
                  else
                    n_8 = r_8;
                  {
                    ATerm t_8 = NULL;
                    t = new_0(t);
                    {
                      s_8 = t;
                      {
                        if(((o_8 != NULL) && (o_8 != s_8)))
                          _fail(s_8);
                        else
                          o_8 = s_8;
                        {
                          t = new_0(t);
                          {
                            t_8 = t;
                            if(((p_8 != NULL) && (p_8 != t_8)))
                              _fail(t_8);
                            else
                              p_8 = t_8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_8)), not_null(o_8)), not_null(n_8)), not_null(m_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_8)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(j_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_8))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_8))))), (ATerm) ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_8))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_8)))))));
      }
    }
  else
    {
      if(match_cons(i_8, sym_Build_1))
        {
          j_8 = ATgetArgument(i_8, 0);
          {
            ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
            ATerm z_8 = NULL;
            ATerm d_9 = NULL;
            t = new_0(t);
            {
              z_8 = t;
              {
                if(((x_8 != NULL) && (x_8 != z_8)))
                  _fail(z_8);
                else
                  x_8 = z_8;
                {
                  t = not_null(j_8);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
                      a_9 = t;
                      z_7 :
                      if(match_cons(a_9, sym_Explode_2))
                        {
                          b_9 = ATgetArgument(a_9, 0);
                          c_9 = ATgetArgument(a_9, 1);
                          {
                            if(((v_8 != NULL) && (v_8 != b_9)))
                              _fail(b_9);
                            else
                              v_8 = b_9;
                            {
                              if(((w_8 != NULL) && (w_8 != c_9)))
                                _fail(c_9);
                              else
                                w_8 = c_9;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_8));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, f_0);
                    {
                      d_9 = t;
                      if(((y_8 != NULL) && (y_8 != d_9)))
                        _fail(d_9);
                      else
                        y_8 = d_9;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_8)), not_null(v_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_8))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_8)))));
          }
        }
      else
        {
          if(match_cons(i_8, sym_Match_1))
            {
              j_8 = ATgetArgument(i_8, 0);
              {
                ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
                ATerm k_9 = NULL;
                ATerm l_9 = NULL;
                t = new_0(t);
                {
                  k_9 = t;
                  {
                    if(((h_9 != NULL) && (h_9 != k_9)))
                      _fail(k_9);
                    else
                      h_9 = k_9;
                    {
                      ATerm p_9 = NULL;
                      t = new_0(t);
                      {
                        l_9 = t;
                        {
                          if(((i_9 != NULL) && (i_9 != l_9)))
                            _fail(l_9);
                          else
                            i_9 = l_9;
                          {
                            t = not_null(j_8);
                            {
                              ATerm g_0 (ATerm t)
                              {
                                ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
                                m_9 = t;
                                e_8 :
                                if(match_cons(m_9, sym_Explode_2))
                                  {
                                    n_9 = ATgetArgument(m_9, 0);
                                    o_9 = ATgetArgument(m_9, 1);
                                    {
                                      if(((f_9 != NULL) && (f_9 != n_9)))
                                        _fail(n_9);
                                      else
                                        f_9 = n_9;
                                      {
                                        if(((g_9 != NULL) && (g_9 != o_9)))
                                          _fail(o_9);
                                        else
                                          g_9 = o_9;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_9));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, g_0);
                              {
                                p_9 = t;
                                if(((j_9 != NULL) && (j_9 != p_9)))
                                  _fail(p_9);
                                else
                                  j_9 = p_9;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_9)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9))), (ATerm) ATmakeAppl(sym_Prim_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_9)), (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_9)), not_null(f_9)))))));
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
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_Match_1))
    {
      v_10 = ATgetArgument(u_10, 0);
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
            ATerm b_11 = NULL;
            ATerm f_11 = NULL;
            t = new_0(t);
            {
              b_11 = t;
              {
                if(((z_10 != NULL) && (z_10 != b_11)))
                  _fail(b_11);
                else
                  z_10 = b_11;
                {
                  t = not_null(v_10);
                  {
                    ATerm h_0 (ATerm t)
                    {
                      ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
                      c_11 = t;
                      j_10 :
                      if(match_cons(c_11, sym_Anno_2))
                        {
                          d_11 = ATgetArgument(c_11, 0);
                          e_11 = ATgetArgument(c_11, 1);
                          {
                            if(((x_10 != NULL) && (x_10 != d_11)))
                              _fail(d_11);
                            else
                              x_10 = d_11;
                            {
                              if(((y_10 != NULL) && (y_10 != e_11)))
                                _fail(e_11);
                              else
                                y_10 = e_11;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_10)), not_null(x_10));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, h_0);
                    {
                      f_11 = t;
                      if(((a_11 != NULL) && (a_11 != f_11)))
                        _fail(f_11);
                      else
                        a_11 = f_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_10))))));
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
                  ATerm k_11 = NULL;
                  ATerm n_11 = NULL;
                  t = new_0(t);
                  {
                    k_11 = t;
                    {
                      if(((i_11 != NULL) && (i_11 != k_11)))
                        _fail(k_11);
                      else
                        i_11 = k_11;
                      {
                        t = not_null(v_10);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm l_11 = NULL,m_11 = NULL;
                            l_11 = t;
                            n_10 :
                            if(match_cons(l_11, sym_RootApp_1))
                              {
                                m_11 = ATgetArgument(l_11, 0);
                                {
                                  if(((h_11 != NULL) && (h_11 != m_11)))
                                    _fail(m_11);
                                  else
                                    h_11 = m_11;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_11));
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
                            n_11 = t;
                            if(((j_11 != NULL) && (j_11 != n_11)))
                              _fail(n_11);
                            else
                              j_11 = n_11;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_11))), not_null(h_11))));
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  {
                    ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
                    ATerm t_11 = NULL;
                    ATerm x_11 = NULL;
                    t = new_0(t);
                    {
                      t_11 = t;
                      {
                        if(((r_11 != NULL) && (r_11 != t_11)))
                          _fail(t_11);
                        else
                          r_11 = t_11;
                        {
                          t = not_null(v_10);
                          {
                            ATerm y_0 (ATerm t)
                            {
                              ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
                              u_11 = t;
                              r_10 :
                              if(match_cons(u_11, sym_App_2))
                                {
                                  v_11 = ATgetArgument(u_11, 0);
                                  w_11 = ATgetArgument(u_11, 1);
                                  {
                                    if(((q_11 != NULL) && (q_11 != v_11)))
                                      _fail(v_11);
                                    else
                                      q_11 = v_11;
                                    {
                                      if(((p_11 != NULL) && (p_11 != w_11)))
                                        _fail(w_11);
                                      else
                                        p_11 = w_11;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_11));
                                    }
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
                              x_11 = t;
                              if(((s_11 != NULL) && (s_11 != x_11)))
                                _fail(x_11);
                              else
                                s_11 = x_11;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_11)), not_null(q_11)))));
                  }
                }
            }
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
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  o_12 = t;
  m_12 :
  if(match_cons(o_12, sym_Match_1))
    {
      p_12 = ATgetArgument(o_12, 0);
      n_12 :
      if(match_cons(p_12, sym_RootApp_1))
        {
          q_12 = ATgetArgument(p_12, 0);
          t = not_null(q_12);
        }
      else
        {
          if(match_cons(p_12, sym_App_2))
            {
              q_12 = ATgetArgument(p_12, 0);
              r_12 = ATgetArgument(p_12, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(q_12), not_null(r_12));
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
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_Match_1))
    {
      e_13 = ATgetArgument(d_13, 0);
      {
        ATerm g_13 = NULL,h_13 = NULL;
        ATerm l_13 = NULL;
        t = not_null(e_13);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
            i_13 = t;
            z_12 :
            if(match_cons(i_13, sym_RootApp_1))
              {
                j_13 = ATgetArgument(i_13, 0);
                a_13 :
                if(match_cons(j_13, sym_Match_1))
                  {
                    k_13 = ATgetArgument(j_13, 0);
                    {
                      if(((g_13 != NULL) && (g_13 != k_13)))
                        _fail(k_13);
                      else
                        g_13 = k_13;
                      t = not_null(g_13);
                    }
                  }
                else
                  {
                    _fail(t);
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
            l_13 = t;
            if(((h_13 != NULL) && (h_13 != l_13)))
              _fail(l_13);
            else
              h_13 = l_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(h_13));
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
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm i_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(k_10);
          }
        else
          {
            t = i_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Build_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
            ATerm m_14 = NULL;
            ATerm q_14 = NULL;
            t = new_0(t);
            {
              m_14 = t;
              {
                if(((k_14 != NULL) && (k_14 != m_14)))
                  _fail(m_14);
                else
                  k_14 = m_14;
                {
                  t = not_null(g_14);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
                      n_14 = t;
                      u_13 :
                      if(match_cons(n_14, sym_Anno_2))
                        {
                          o_14 = ATgetArgument(n_14, 0);
                          p_14 = ATgetArgument(n_14, 1);
                          {
                            if(((i_14 != NULL) && (i_14 != o_14)))
                              _fail(o_14);
                            else
                              i_14 = o_14;
                            {
                              if(((j_14 != NULL) && (j_14 != p_14)))
                                _fail(p_14);
                              else
                                j_14 = p_14;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_14));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, a_1);
                    {
                      q_14 = t;
                      if(((l_14 != NULL) && (l_14 != q_14)))
                        _fail(q_14);
                      else
                        l_14 = q_14;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_14)), not_null(i_14))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_14))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_14))));
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            {
              ATerm p_10 = t;
              int q_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
                  ATerm v_14 = NULL;
                  ATerm y_14 = NULL;
                  t = new_0(t);
                  {
                    v_14 = t;
                    {
                      if(((t_14 != NULL) && (t_14 != v_14)))
                        _fail(v_14);
                      else
                        t_14 = v_14;
                      {
                        t = not_null(g_14);
                        {
                          ATerm b_1 (ATerm t)
                          {
                            ATerm w_14 = NULL,x_14 = NULL;
                            w_14 = t;
                            y_13 :
                            if(match_cons(w_14, sym_RootApp_1))
                              {
                                x_14 = ATgetArgument(w_14, 0);
                                {
                                  if(((s_14 != NULL) && (s_14 != x_14)))
                                    _fail(x_14);
                                  else
                                    s_14 = x_14;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_14));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, b_1);
                          {
                            y_14 = t;
                            if(((u_14 != NULL) && (u_14 != y_14)))
                              _fail(y_14);
                            else
                              u_14 = y_14;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_14), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_14))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_14))));
                  LocalPopChoice(q_10);
                }
              else
                {
                  t = p_10;
                  {
                    ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
                    ATerm e_15 = NULL;
                    ATerm i_15 = NULL;
                    t = new_0(t);
                    {
                      e_15 = t;
                      {
                        if(((c_15 != NULL) && (c_15 != e_15)))
                          _fail(e_15);
                        else
                          c_15 = e_15;
                        {
                          t = not_null(g_14);
                          {
                            ATerm c_1 (ATerm t)
                            {
                              ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
                              f_15 = t;
                              c_14 :
                              if(match_cons(f_15, sym_App_2))
                                {
                                  g_15 = ATgetArgument(f_15, 0);
                                  h_15 = ATgetArgument(f_15, 1);
                                  {
                                    if(((a_15 != NULL) && (a_15 != g_15)))
                                      _fail(g_15);
                                    else
                                      a_15 = g_15;
                                    {
                                      if(((b_15 != NULL) && (b_15 != h_15)))
                                        _fail(h_15);
                                      else
                                        b_15 = h_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_15));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, c_1);
                            {
                              i_15 = t;
                              if(((d_15 != NULL) && (d_15 != i_15)))
                                _fail(i_15);
                              else
                                d_15 = i_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_15), not_null(b_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_15)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_15))));
                  }
                }
            }
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
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  z_15 = t;
  x_15 :
  if(match_cons(z_15, sym_Build_1))
    {
      a_16 = ATgetArgument(z_15, 0);
      y_15 :
      if(match_cons(a_16, sym_RootApp_1))
        {
          b_16 = ATgetArgument(a_16, 0);
          t = not_null(b_16);
        }
      else
        {
          if(match_cons(a_16, sym_App_2))
            {
              b_16 = ATgetArgument(a_16, 0);
              c_16 = ATgetArgument(a_16, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_16)), not_null(b_16));
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
ATerm Prim_2 (ATerm t, ATerm j_89 (ATerm), ATerm k_89 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Prim_2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
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
            t = j_89(t);
            {
              w_16 = t;
              {
                t = not_null(q_16);
                {
                  ATerm a_17 = NULL;
                  t = k_89(t);
                  {
                    y_16 = t;
                    {
                      ATerm b_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_16), not_null(y_16)), not_null(u_16));
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
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm o_85 (ATerm), ATerm p_85 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Explode_2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      {
        ATerm t_17 = NULL,v_17 = NULL;
        ATerm u_17 = NULL;
        t = SSLgetAnnotations(not_null(n_17));
        {
          u_17 = t;
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
        }
        {
          t = not_null(o_17);
          {
            ATerm x_17 = NULL;
            t = o_85(t);
            {
              v_17 = t;
              {
                t = not_null(p_17);
                {
                  ATerm z_17 = NULL;
                  t = p_85(t);
                  {
                    x_17 = t;
                    {
                      ATerm a_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(v_17), not_null(x_17)), not_null(t_17));
                      {
                        a_18 = t;
                        if(((z_17 != NULL) && (z_17 != a_18)))
                          _fail(a_18);
                        else
                          z_17 = a_18;
                      }
                      t = not_null(z_17);
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
ATerm Op_2 (ATerm t, ATerm j_87 (ATerm), ATerm k_87 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Op_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      {
        ATerm s_18 = NULL,u_18 = NULL;
        ATerm t_18 = NULL;
        t = SSLgetAnnotations(not_null(m_18));
        {
          t_18 = t;
          if(((s_18 != NULL) && (s_18 != t_18)))
            _fail(t_18);
          else
            s_18 = t_18;
        }
        {
          t = not_null(n_18);
          {
            ATerm w_18 = NULL;
            t = j_87(t);
            {
              u_18 = t;
              {
                t = not_null(o_18);
                {
                  ATerm y_18 = NULL;
                  t = k_87(t);
                  {
                    w_18 = t;
                    {
                      ATerm z_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_18), not_null(w_18)), not_null(s_18));
                      {
                        z_18 = t;
                        if(((y_18 != NULL) && (y_18 != z_18)))
                          _fail(z_18);
                        else
                          y_18 = z_18;
                      }
                      t = not_null(y_18);
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
ATerm pat_td_1 (ATerm t, ATerm b_92 (ATerm))
{
  ATerm s_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_92(t);
      LocalPopChoice(w_10);
    }
  else
    {
      t = s_10;
      {
        ATerm g_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = pat_td_1(t, b_92);
                return(t);
              }
              t = fetch_1(t, e_1);
              return(t);
            }
            t = Op_2(t, _id, d_1);
            LocalPopChoice(o_11);
          }
        else
          {
            t = g_11;
            {
              ATerm y_11 = t;
              int z_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = pat_td_1(t, b_92);
                    return(t);
                  }
                  t = Explode_2(t, _id, f_1);
                  LocalPopChoice(z_11);
                }
              else
                {
                  t = y_11;
                  {
                    ATerm a_12 = t;
                    int b_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_1 (ATerm t)
                        {
                          t = pat_td_1(t, b_92);
                          return(t);
                        }
                        t = Explode_2(t, g_1, _id);
                        LocalPopChoice(b_12);
                      }
                    else
                      {
                        t = a_12;
                        {
                          ATerm h_1 (ATerm t)
                          {
                            ATerm i_1 (ATerm t)
                            {
                              t = pat_td_1(t, b_92);
                              return(t);
                            }
                            t = fetch_1(t, i_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, h_1);
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
  ATerm q_19 = NULL,r_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym_Build_1))
    {
      r_19 = ATgetArgument(q_19, 0);
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_19 = NULL,u_19 = NULL;
            ATerm y_19 = NULL;
            t = not_null(r_19);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
                v_19 = t;
                i_19 :
                if(match_cons(v_19, sym_RootApp_1))
                  {
                    w_19 = ATgetArgument(v_19, 0);
                    j_19 :
                    if(match_cons(w_19, sym_Build_1))
                      {
                        x_19 = ATgetArgument(w_19, 0);
                        {
                          if(((t_19 != NULL) && (t_19 != x_19)))
                            _fail(x_19);
                          else
                            t_19 = x_19;
                          t = not_null(t_19);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = pat_td_1(t, j_1);
              {
                y_19 = t;
                if(((u_19 != NULL) && (u_19 != y_19)))
                  _fail(y_19);
                else
                  u_19 = y_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_19));
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
              ATerm h_20 = NULL;
              t = not_null(r_19);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
                  d_20 = t;
                  m_19 :
                  if(match_cons(d_20, sym_App_2))
                    {
                      e_20 = ATgetArgument(d_20, 0);
                      g_20 = ATgetArgument(d_20, 1);
                      n_19 :
                      if(match_cons(e_20, sym_Build_1))
                        {
                          f_20 = ATgetArgument(e_20, 0);
                          {
                            if(((b_20 != NULL) && (b_20 != f_20)))
                              _fail(f_20);
                            else
                              b_20 = f_20;
                            {
                              if(((a_20 != NULL) && (a_20 != g_20)))
                                _fail(g_20);
                              else
                                a_20 = g_20;
                              t = not_null(b_20);
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
                t = pat_td_1(t, k_1);
                {
                  h_20 = t;
                  if(((c_20 != NULL) && (c_20 != h_20)))
                    _fail(h_20);
                  else
                    c_20 = h_20;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_20));
            }
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
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
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
            t = Bapp1_0(t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  i_21 = t;
  a_21 :
  if(match_cons(i_21, sym_InfixApp_3))
    {
      j_21 = ATgetArgument(i_21, 0);
      f_21 = ATgetArgument(i_21, 1);
      e_21 = ATgetArgument(i_21, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(f_21), (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_21)), not_null(j_21))));
    }
  else
    {
      if(match_cons(i_21, sym_BAM_3))
        {
          j_21 = ATgetArgument(i_21, 0);
          f_21 = ATgetArgument(i_21, 1);
          e_21 = ATgetArgument(i_21, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(e_21))), not_null(j_21)), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_21))));
        }
      else
        {
          if(match_cons(i_21, sym_AM_2))
            {
              j_21 = ATgetArgument(i_21, 0);
              f_21 = ATgetArgument(i_21, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_21), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_21)));
            }
          else
            {
              if(match_cons(i_21, sym_MA_2))
                {
                  j_21 = ATgetArgument(i_21, 0);
                  f_21 = ATgetArgument(i_21, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_21)), not_null(f_21));
                }
              else
                {
                  if(match_cons(i_21, sym_BA_2))
                    {
                      j_21 = ATgetArgument(i_21, 0);
                      f_21 = ATgetArgument(i_21, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_21)), not_null(j_21));
                    }
                  else
                    {
                      if(match_cons(i_21, sym_Lets_2))
                        {
                          j_21 = ATgetArgument(i_21, 0);
                          f_21 = ATgetArgument(i_21, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_21), not_null(f_21));
                        }
                      else
                        {
                          if(match_cons(i_21, sym_LChoices_1))
                            {
                              j_21 = ATgetArgument(i_21, 0);
                              b_21 :
                              if(((ATgetType(j_21) == AT_LIST) && ((ATermList) j_21 != ATempty)))
                                {
                                  g_21 = ATgetFirst((ATermList) j_21);
                                  h_21 = (ATerm) ATgetNext((ATermList) j_21);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_21), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_21)));
                                }
                              else
                                {
                                  if(((ATermList) j_21 == ATempty))
                                    {
                                      t = term_i_12;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(i_21, sym_Choices_1))
                                {
                                  j_21 = ATgetArgument(i_21, 0);
                                  c_21 :
                                  if(((ATgetType(j_21) == AT_LIST) && ((ATermList) j_21 != ATempty)))
                                    {
                                      g_21 = ATgetFirst((ATermList) j_21);
                                      h_21 = (ATerm) ATgetNext((ATermList) j_21);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_21), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_21)));
                                    }
                                  else
                                    {
                                      if(((ATermList) j_21 == ATempty))
                                        {
                                          t = term_i_12;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(i_21, sym_Seqs_1))
                                    {
                                      j_21 = ATgetArgument(i_21, 0);
                                      d_21 :
                                      if(((ATgetType(j_21) == AT_LIST) && ((ATermList) j_21 != ATempty)))
                                        {
                                          g_21 = ATgetFirst((ATermList) j_21);
                                          h_21 = (ATerm) ATgetNext((ATermList) j_21);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_21), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_21)));
                                        }
                                      else
                                        {
                                          if(((ATermList) j_21 == ATempty))
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  u_22 = t;
  r_22 :
  if(match_cons(u_22, sym__2))
    {
      v_22 = ATgetArgument(u_22, 0);
      y_22 = ATgetArgument(u_22, 1);
      s_22 :
      if(match_cons(v_22, sym__2))
        {
          w_22 = ATgetArgument(v_22, 0);
          x_22 = ATgetArgument(v_22, 1);
          t_22 :
          if(match_cons(y_22, sym__2))
            {
              z_22 = ATgetArgument(y_22, 0);
              a_23 = ATgetArgument(y_22, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_22)), not_null(w_22)), (ATerm) ATinsert(CheckATermList(not_null(a_23)), not_null(x_22)));
            }
          else
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
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  h_23 :
  if(((ATgetType(i_23) == AT_LIST) && ((ATermList) i_23 != ATempty)))
    {
      j_23 = ATgetFirst((ATermList) i_23);
      k_23 = (ATerm) ATgetNext((ATermList) i_23);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(k_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  p_23 :
  if(((ATermList) q_23 == ATempty))
    {
      t = term_k_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm m_110 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, m_110);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  ATerm c_24 (ATerm t)
  {
    ATerm z_23 = NULL;
    ATerm a_24 = NULL;
    t = not_null(w_23);
    {
      ATerm l_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = l_12;
        }
      {
        t = new_0(t);
        {
          a_24 = t;
          if(((z_23 != NULL) && (z_23 != a_24)))
            _fail(a_24);
          else
            z_23 = a_24;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(z_23)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_23)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_23))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_23))));
    return(t);
  }
  ATerm d_24 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_23))));
    return(t);
  }
  w_23 = t;
  v_23 :
  if(match_cons(w_23, sym_Var_1))
    {
      x_23 = ATgetArgument(w_23, 0);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_24(t);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = d_24(t);
          }
      }
    }
  else
    {
      t = c_24(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym_Prim_2))
    {
      l_24 = ATgetArgument(k_24, 0);
      m_24 = ATgetArgument(k_24, 1);
      {
        ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
        ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
        t = not_null(m_24);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm u_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_12;
              }
            return(t);
          }
          t = fetch_1(t, l_1);
          {
            t = not_null(m_24);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm m_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, m_1);
                {
                  s_24 = t;
                  h_24 :
                  if(match_cons(s_24, sym__2))
                    {
                      t_24 = ATgetArgument(s_24, 0);
                      u_24 = ATgetArgument(s_24, 1);
                      i_24 :
                      if(match_cons(u_24, sym__2))
                        {
                          v_24 = ATgetArgument(u_24, 0);
                          w_24 = ATgetArgument(u_24, 1);
                          {
                            if(((p_24 != NULL) && (p_24 != t_24)))
                              _fail(t_24);
                            else
                              p_24 = t_24;
                            {
                              if(((q_24 != NULL) && (q_24 != v_24)))
                                _fail(v_24);
                              else
                                q_24 = v_24;
                              if(((r_24 != NULL) && (r_24 != w_24)))
                                _fail(w_24);
                              else
                                r_24 = w_24;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_24)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_24), not_null(r_24))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm j_104 (ATerm), ATerm k_104 (ATerm))
{
  ATerm z_24 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_104(t);
        t = z_24(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = k_104(t);
      }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_104 (ATerm))
{
  t = repeat_2(t, m_104, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Wld_0))
    {
      ATerm g_25 = NULL,i_25 = NULL;
      ATerm x_12;
      x_12 = t;
      {
        ATerm h_25 = NULL;
        t = SSLgetAnnotations(not_null(e_25));
        {
          h_25 = t;
          if(((g_25 != NULL) && (g_25 != h_25)))
            _fail(h_25);
          else
            g_25 = h_25;
        }
      }
      t = x_12;
      {
        ATerm j_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(g_25));
        {
          j_25 = t;
          if(((i_25 != NULL) && (i_25 != j_25)))
            _fail(j_25);
          else
            i_25 = j_25;
        }
        t = not_null(i_25);
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
  ATerm y_12 = t;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm b_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(f_13);
          }
        else
          {
            t = b_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, n_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym_App_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      {
        ATerm z_25 = NULL,b_26 = NULL;
        ATerm a_26 = NULL;
        t = SSLgetAnnotations(not_null(t_25));
        {
          a_26 = t;
          if(((z_25 != NULL) && (z_25 != a_26)))
            _fail(a_26);
          else
            z_25 = a_26;
        }
        {
          t = not_null(u_25);
          {
            ATerm d_26 = NULL;
            t = i_85(t);
            {
              b_26 = t;
              {
                t = not_null(v_25);
                {
                  ATerm f_26 = NULL;
                  t = j_85(t);
                  {
                    d_26 = t;
                    {
                      ATerm g_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(b_26), not_null(d_26)), not_null(z_25));
                      {
                        g_26 = t;
                        if(((f_26 != NULL) && (f_26 != g_26)))
                          _fail(g_26);
                        else
                          f_26 = g_26;
                      }
                      t = not_null(f_26);
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
ATerm Con_3 (ATerm t, ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym_Con_3))
    {
      u_26 = ATgetArgument(t_26, 0);
      v_26 = ATgetArgument(t_26, 1);
      w_26 = ATgetArgument(t_26, 2);
      {
        ATerm b_27 = NULL,d_27 = NULL;
        ATerm c_27 = NULL;
        t = SSLgetAnnotations(not_null(t_26));
        {
          c_27 = t;
          if(((b_27 != NULL) && (b_27 != c_27)))
            _fail(c_27);
          else
            b_27 = c_27;
        }
        {
          t = not_null(u_26);
          {
            ATerm f_27 = NULL;
            t = f_85(t);
            {
              d_27 = t;
              {
                t = not_null(v_26);
                {
                  ATerm h_27 = NULL;
                  t = g_85(t);
                  {
                    f_27 = t;
                    {
                      t = not_null(w_26);
                      {
                        ATerm j_27 = NULL;
                        t = h_85(t);
                        {
                          h_27 = t;
                          {
                            ATerm k_27 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(d_27), not_null(f_27), not_null(h_27)), not_null(b_27));
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
          }
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
  ATerm m_13 = t;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, o_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  v_27 = t;
  t_27 :
  if(match_cons(v_27, sym_SRule_1))
    {
      w_27 = ATgetArgument(v_27, 0);
      u_27 :
      if(match_cons(w_27, sym_StratRule_3))
        {
          x_27 = ATgetArgument(w_27, 0);
          y_27 = ATgetArgument(w_27, 1);
          z_27 = ATgetArgument(w_27, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_27)), (ATerm) ATmakeAppl(sym_Where_1, not_null(z_27))), not_null(x_27)));
        }
      else
        {
          if(match_cons(w_27, sym_Rule_3))
            {
              x_27 = ATgetArgument(w_27, 0);
              y_27 = ATgetArgument(w_27, 1);
              z_27 = ATgetArgument(w_27, 2);
              {
                t = not_null(x_27);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(y_27);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(y_27))), (ATerm) ATmakeAppl(sym_Where_1, not_null(z_27))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_27))));
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
ATerm oncetd_1 (ATerm t, ATerm i_116 (ATerm))
{
  ATerm i_28 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_116(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = _one(t, i_28);
      }
    return(t);
  }
  t = i_28(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  x_28 = t;
  v_28 :
  if(match_cons(x_28, sym_SRule_1))
    {
      y_28 = ATgetArgument(x_28, 0);
      w_28 :
      if(match_cons(y_28, sym_Rule_3))
        {
          z_28 = ATgetArgument(y_28, 0);
          a_29 = ATgetArgument(y_28, 1);
          b_29 = ATgetArgument(y_28, 2);
          {
            ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
            ATerm n_29 = NULL;
            ATerm t_29 = NULL;
            t = new_0(t);
            {
              n_29 = t;
              {
                if(((k_29 != NULL) && (k_29 != n_29)))
                  _fail(n_29);
                else
                  k_29 = n_29;
                {
                  t = not_null(z_28);
                  {
                    ATerm b_30 = NULL;
                    ATerm p_1 (ATerm t)
                    {
                      ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
                      o_29 = t;
                      m_28 :
                      if(match_cons(o_29, sym_Con_3))
                        {
                          p_29 = ATgetArgument(o_29, 0);
                          r_29 = ATgetArgument(o_29, 1);
                          s_29 = ATgetArgument(o_29, 2);
                          n_28 :
                          if(match_cons(p_29, sym_Var_1))
                            {
                              q_29 = ATgetArgument(p_29, 0);
                              {
                                if(((j_29 != NULL) && (j_29 != q_29)))
                                  _fail(q_29);
                                else
                                  j_29 = q_29;
                                {
                                  if(((h_29 != NULL) && (h_29 != r_29)))
                                    _fail(r_29);
                                  else
                                    h_29 = r_29;
                                  {
                                    if(((f_29 != NULL) && (f_29 != s_29)))
                                      _fail(s_29);
                                    else
                                      f_29 = s_29;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_29));
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
                    t = oncetd_1(t, p_1);
                    {
                      t_29 = t;
                      {
                        if(((l_29 != NULL) && (l_29 != t_29)))
                          _fail(t_29);
                        else
                          l_29 = t_29;
                        {
                          t = not_null(a_29);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
                              u_29 = t;
                              q_28 :
                              if(match_cons(u_29, sym_Con_3))
                                {
                                  v_29 = ATgetArgument(u_29, 0);
                                  x_29 = ATgetArgument(u_29, 1);
                                  y_29 = ATgetArgument(u_29, 2);
                                  r_28 :
                                  if(match_cons(v_29, sym_Var_1))
                                    {
                                      w_29 = ATgetArgument(v_29, 0);
                                      s_28 :
                                      if(match_cons(y_29, sym_Call_2))
                                        {
                                          z_29 = ATgetArgument(y_29, 0);
                                          a_30 = ATgetArgument(y_29, 1);
                                          t_28 :
                                          if(((ATermList) a_30 == ATempty))
                                            {
                                              {
                                                if(((j_29 != NULL) && (j_29 != w_29)))
                                                  _fail(w_29);
                                                else
                                                  j_29 = w_29;
                                                {
                                                  if(((i_29 != NULL) && (i_29 != x_29)))
                                                    _fail(x_29);
                                                  else
                                                    i_29 = x_29;
                                                  {
                                                    if(((g_29 != NULL) && (g_29 != z_29)))
                                                      _fail(z_29);
                                                    else
                                                      g_29 = z_29;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_29));
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
                            t = oncetd_1(t, q_1);
                            {
                              b_30 = t;
                              if(((m_29 != NULL) && (m_29 != b_30)))
                                _fail(b_30);
                              else
                                m_29 = b_30;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_29)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_29), not_null(m_29), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_29), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_29), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_29), not_null(i_29), term_j_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_29)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_29)))))));
          }
        }
      else
        {
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
  ATerm r_1 (ATerm t)
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        {
          ATerm t_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(v_13);
            }
          else
            {
              t = t_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm s_114 (ATerm))
{
  t = s_114(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = topdown_1(t, s_114);
      return(t);
    }
    t = _all(t, s_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm u_1 (ATerm t)
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm z_13 = t;
              int a_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(a_14);
                }
              else
                {
                  t = z_13;
                  {
                    ATerm b_14 = t;
                    int d_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(d_14);
                      }
                    else
                      {
                        t = b_14;
                        {
                          ATerm h_14 = t;
                          int r_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(r_14);
                            }
                          else
                            {
                              t = h_14;
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
      t = repeat_1(t, u_1);
    }
    return(t);
  }
  t = topdown_1(t, t_1);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  h_32 = t;
  x_31 :
  if(match_cons(h_32, sym_Seq_2))
    {
      i_32 = ATgetArgument(h_32, 0);
      m_32 = ATgetArgument(h_32, 1);
      y_31 :
      if(match_cons(i_32, sym_Call_2))
        {
          j_32 = ATgetArgument(i_32, 0);
          l_32 = ATgetArgument(i_32, 1);
          z_31 :
          if(match_cons(j_32, sym_SVar_1))
            {
              k_32 = ATgetArgument(j_32, 0);
              a_32 :
              if(match_string(k_32, "mark"))
                {
                  b_32 :
                  if(((ATermList) l_32 == ATempty))
                    {
                      c_32 :
                      if(match_cons(m_32, sym_Seq_2))
                        {
                          n_32 = ATgetArgument(m_32, 0);
                          p_32 = ATgetArgument(m_32, 1);
                          d_32 :
                          if(match_cons(n_32, sym_Match_1))
                            {
                              o_32 = ATgetArgument(n_32, 0);
                              e_32 :
                              if(match_cons(p_32, sym_Seq_2))
                                {
                                  q_32 = ATgetArgument(p_32, 0);
                                  s_32 = ATgetArgument(p_32, 1);
                                  f_32 :
                                  if(match_cons(q_32, sym_Where_1))
                                    {
                                      r_32 = ATgetArgument(q_32, 0);
                                      g_32 :
                                      if(match_cons(s_32, sym_Build_1))
                                        {
                                          t_32 = ATgetArgument(s_32, 0);
                                          {
                                            ATerm z_14 = t;
                                            int j_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
                                                ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
                                                t = term_k_15;
                                                {
                                                  ATerm v_1 (ATerm t)
                                                  {
                                                    t = term_l_15;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, v_1);
                                                  {
                                                    a_33 = t;
                                                    m_31 :
                                                    if(match_cons(a_33, sym_Defined_2))
                                                      {
                                                        b_33 = ATgetArgument(a_33, 0);
                                                        c_33 = ATgetArgument(a_33, 1);
                                                        n_31 :
                                                        if(match_string(b_33, "o_0"))
                                                          {
                                                            ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
                                                            if(((x_32 != NULL) && (x_32 != c_33)))
                                                              _fail(c_33);
                                                            else
                                                              x_32 = c_33;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(x_32), not_null(o_32), (ATerm) ATmakeAppl(sym__2, not_null(r_32), not_null(t_32)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  d_33 = t;
                                                                  l_31 :
                                                                  if(match_cons(d_33, sym__2))
                                                                    {
                                                                      e_33 = ATgetArgument(d_33, 0);
                                                                      f_33 = ATgetArgument(d_33, 1);
                                                                      {
                                                                        if(((y_32 != NULL) && (y_32 != e_33)))
                                                                          _fail(e_33);
                                                                        else
                                                                          y_32 = e_33;
                                                                        if(((z_32 != NULL) && (z_32 != f_33)))
                                                                          _fail(f_33);
                                                                        else
                                                                          z_32 = f_33;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(y_32)), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_32))));
                                                LocalPopChoice(j_15);
                                              }
                                            else
                                              {
                                                t = z_14;
                                                {
                                                  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
                                                  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
                                                  t = term_k_15;
                                                  {
                                                    ATerm w_1 (ATerm t)
                                                    {
                                                      t = term_l_15;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, w_1);
                                                    {
                                                      o_33 = t;
                                                      v_31 :
                                                      if(match_cons(o_33, sym_Defined_2))
                                                        {
                                                          p_33 = ATgetArgument(o_33, 0);
                                                          q_33 = ATgetArgument(o_33, 1);
                                                          w_31 :
                                                          if(match_string(p_33, "k_0"))
                                                            {
                                                              ATerm r_33 = NULL;
                                                              if(((j_33 != NULL) && (j_33 != q_33)))
                                                                _fail(q_33);
                                                              else
                                                                j_33 = q_33;
                                                              {
                                                                ATerm s_33 = NULL;
                                                                t = not_null(j_33);
                                                                {
                                                                  r_33 = t;
                                                                  {
                                                                    if(((l_33 != NULL) && (l_33 != r_33)))
                                                                      _fail(r_33);
                                                                    else
                                                                      l_33 = r_33;
                                                                    {
                                                                      t = not_null(o_32);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          s_33 = t;
                                                                          {
                                                                            if(((k_33 != NULL) && (k_33 != s_33)))
                                                                              _fail(s_33);
                                                                            else
                                                                              k_33 = s_33;
                                                                            {
                                                                              ATerm x_1 (ATerm t)
                                                                              {
                                                                                t = term_m_15;
                                                                                return(t);
                                                                              }
                                                                              ATerm y_1 (ATerm t)
                                                                              {
                                                                                ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
                                                                                ATerm z_1 (ATerm t)
                                                                                {
                                                                                  ATerm t_33 = NULL,v_33 = NULL;
                                                                                  ATerm u_33 = NULL;
                                                                                  u_33 = t;
                                                                                  if(((t_33 != NULL) && (t_33 != u_33)))
                                                                                    _fail(u_33);
                                                                                  else
                                                                                    t_33 = u_33;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_33));
                                                                                    {
                                                                                      v_33 = t;
                                                                                      {
                                                                                        ATerm n_15;
                                                                                        n_15 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(v_33), not_null(l_33)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_15, not_null(v_33)));
                                                                                          {
                                                                                            ATerm a_2 (ATerm t)
                                                                                            {
                                                                                              t = term_m_15;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, a_2);
                                                                                          }
                                                                                        }
                                                                                        t = n_15;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, z_1);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_32), not_null(t_32));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      x_33 = t;
                                                                                      u_31 :
                                                                                      if(match_cons(x_33, sym__2))
                                                                                        {
                                                                                          y_33 = ATgetArgument(x_33, 0);
                                                                                          z_33 = ATgetArgument(x_33, 1);
                                                                                          {
                                                                                            if(((m_33 != NULL) && (m_33 != y_33)))
                                                                                              _fail(y_33);
                                                                                            else
                                                                                              m_33 = y_33;
                                                                                            if(((n_33 != NULL) && (n_33 != z_33)))
                                                                                              _fail(z_33);
                                                                                            else
                                                                                              n_33 = z_33;
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
                                                                              t = scope_2(t, x_1, y_1);
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(m_33)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_32))));
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
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  ATerm e_41 (ATerm t)
  {
    ATerm k_40 = NULL,l_40 = NULL,n_40 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(c_40), not_null(b_40));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_m_15;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        k_40 = t;
        k_38 :
        if(match_cons(k_40, sym_Defined_2))
          {
            l_40 = ATgetArgument(k_40, 0);
            n_40 = ATgetArgument(k_40, 1);
            l_38 :
            if(match_string(l_40, "m_0"))
              {
                if(((c_40 != NULL) && (c_40 != n_40)))
                  _fail(n_40);
                else
                  c_40 = n_40;
              }
            else
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
    t = not_null(c_40);
    return(t);
  }
  ATerm f_41 (ATerm t)
  {
    ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(c_40), not_null(b_40));
    {
      ATerm c_2 (ATerm t)
      {
        t = term_m_15;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        a_41 = t;
        v_39 :
        if(match_cons(a_41, sym_Defined_2))
          {
            b_41 = ATgetArgument(a_41, 0);
            c_41 = ATgetArgument(a_41, 1);
            w_39 :
            if(match_string(b_41, "l_0"))
              {
                if(((c_40 != NULL) && (c_40 != c_41)))
                  _fail(c_41);
                else
                  c_40 = c_41;
              }
            else
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
    t = not_null(c_40);
    return(t);
  }
  a_40 = t;
  x_39 :
  if(match_cons(a_40, sym_App_2))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      y_39 :
      if(match_cons(c_40, sym_Var_1))
        {
          z_39 = ATgetArgument(c_40, 0);
          {
            ATerm p_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(z_39), not_null(b_40));
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_m_15;
                    return(t);
                  }
                  t = rewrite_1(t, d_2);
                  {
                    f_40 = t;
                    h_38 :
                    if(match_cons(f_40, sym_Defined_2))
                      {
                        g_40 = ATgetArgument(f_40, 0);
                        h_40 = ATgetArgument(f_40, 1);
                        i_38 :
                        if(match_string(g_40, "p_0"))
                          {
                            if(((z_39 != NULL) && (z_39 != h_40)))
                              _fail(h_40);
                            else
                              z_39 = h_40;
                          }
                        else
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_39));
                LocalPopChoice(q_15);
              }
            else
              {
                t = p_15;
                {
                  ATerm r_15 = t;
                  int s_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_41(t);
                      LocalPopChoice(s_15);
                    }
                  else
                    {
                      t = r_15;
                      t = f_41(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_41(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              t = f_41(t);
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
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(((ATgetType(l_41) == AT_LIST) && ((ATermList) l_41 != ATempty)))
    {
      m_41 = ATgetFirst((ATermList) l_41);
      n_41 = (ATerm) ATgetNext((ATermList) l_41);
      t = not_null(n_41);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm u_41 = NULL,x_41 = NULL,y_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_cons(u_41, sym__2))
    {
      x_41 = ATgetArgument(u_41, 0);
      y_41 = ATgetArgument(u_41, 1);
      {
        ATerm v_15;
        v_15 = t;
        {
          ATerm b_42 = NULL;
          ATerm c_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_41), not_null(y_41));
          {
            ATerm w_15 = t;
            int d_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(d_16);
              }
            else
              {
                t = w_15;
                t = (ATerm) ATempty;
              }
            {
              c_42 = t;
              if(((b_42 != NULL) && (b_42 != c_42)))
                _fail(c_42);
              else
                b_42 = c_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_41), not_null(y_41), not_null(b_42));
            t = table_put_0(t);
          }
        }
        t = v_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_99 (ATerm))
{
  ATerm e_43 = NULL,m_43 = NULL,n_43 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm o_43 = NULL;
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
    t = u_99(t);
    {
      o_43 = t;
      {
        if(((m_43 != NULL) && (m_43 != o_43)))
          _fail(o_43);
        else
          m_43 = o_43;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_43), term_h_16);
              t = table_get_0(t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            p_43 = t;
            d_43 :
            if(((ATgetType(p_43) == AT_LIST) && ((ATermList) p_43 != ATempty)))
              {
                q_43 = ATgetFirst((ATermList) p_43);
                r_43 = (ATerm) ATgetNext((ATermList) p_43);
                {
                  if(((n_43 != NULL) && (n_43 != q_43)))
                    _fail(q_43);
                  else
                    n_43 = q_43;
                  {
                    if(((e_43 != NULL) && (e_43 != r_43)))
                      _fail(r_43);
                    else
                      e_43 = r_43;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_43), term_h_16, not_null(e_43));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_43);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm s_43 = NULL;
                              s_43 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_43), not_null(s_43));
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
  t = e_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm q_114 (ATerm), ATerm r_114 (ATerm))
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_114(t);
      t = r_114(t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        t = r_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm e_44 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm f_44 = NULL;
    ATerm g_44 = NULL;
    t = t_99(t);
    {
      f_44 = t;
      {
        if(((e_44 != NULL) && (e_44 != f_44)))
          _fail(f_44);
        else
          e_44 = f_44;
        {
          ATerm h_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_44), term_h_16);
          {
            ATerm l_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_16);
              }
            else
              {
                t = l_16;
                t = (ATerm) ATempty;
              }
            {
              h_44 = t;
              if(((g_44 != NULL) && (g_44 != h_44)))
                _fail(h_44);
              else
                g_44 = h_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_44), term_h_16, (ATerm) ATinsert(CheckATermList(not_null(g_44)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_99 (ATerm), ATerm w_99 (ATerm))
{
  t = begin_scope_1(t, v_99);
  {
    ATerm f_2 (ATerm t)
    {
      t = end_scope_1(t, v_99);
      return(t);
    }
    t = restore_always_2(t, w_99, f_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym__3))
    {
      r_44 = ATgetArgument(q_44, 0);
      s_44 = ATgetArgument(q_44, 1);
      t_44 = ATgetArgument(q_44, 2);
      {
        ATerm y_44 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_m_15;
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          ATerm b_45 = NULL;
          t = not_null(s_44);
          {
            t = tvars_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm z_44 = NULL;
                z_44 = t;
                {
                  ATerm r_16;
                  r_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(z_44), not_null(r_44)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_16, not_null(z_44)));
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = term_m_15;
                        return(t);
                      }
                      t = assert_1(t, j_2);
                    }
                  }
                  t = r_16;
                }
                return(t);
              }
              t = map_1(t, i_2);
              {
                t = not_null(t_44);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    b_45 = t;
                    if(((y_44 != NULL) && (y_44 != b_45)))
                      _fail(b_45);
                    else
                      y_44 = b_45;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, g_2, h_2);
        t = not_null(y_44);
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
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  b_46 = t;
  t_45 :
  if(match_cons(b_46, sym_Seq_2))
    {
      c_46 = ATgetArgument(b_46, 0);
      g_46 = ATgetArgument(b_46, 1);
      u_45 :
      if(match_cons(c_46, sym_Call_2))
        {
          d_46 = ATgetArgument(c_46, 0);
          f_46 = ATgetArgument(c_46, 1);
          v_45 :
          if(match_cons(d_46, sym_SVar_1))
            {
              e_46 = ATgetArgument(d_46, 0);
              w_45 :
              if(match_string(e_46, "mark"))
                {
                  x_45 :
                  if(((ATermList) f_46 == ATempty))
                    {
                      y_45 :
                      if(match_cons(g_46, sym_Seq_2))
                        {
                          p_46 = ATgetArgument(g_46, 0);
                          r_46 = ATgetArgument(g_46, 1);
                          z_45 :
                          if(match_cons(p_46, sym_Match_1))
                            {
                              q_46 = ATgetArgument(p_46, 0);
                              a_46 :
                              if(match_cons(r_46, sym_Build_1))
                                {
                                  s_46 = ATgetArgument(r_46, 0);
                                  {
                                    ATerm t_16 = t;
                                    int x_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm x_46 = NULL,y_46 = NULL;
                                        ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
                                        t = term_k_15;
                                        {
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_z_16;
                                            return(t);
                                          }
                                          t = rewrite_1(t, k_2);
                                          {
                                            z_46 = t;
                                            j_45 :
                                            if(match_cons(z_46, sym_Defined_2))
                                              {
                                                a_47 = ATgetArgument(z_46, 0);
                                                b_47 = ATgetArgument(z_46, 1);
                                                k_45 :
                                                if(match_string(a_47, "n_0"))
                                                  {
                                                    ATerm c_47 = NULL;
                                                    if(((x_46 != NULL) && (x_46 != b_47)))
                                                      _fail(b_47);
                                                    else
                                                      x_46 = b_47;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_46), not_null(q_46), not_null(s_46));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          c_47 = t;
                                                          if(((y_46 != NULL) && (y_46 != c_47)))
                                                            _fail(c_47);
                                                          else
                                                            y_46 = c_47;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_46)));
                                        LocalPopChoice(x_16);
                                      }
                                    else
                                      {
                                        t = t_16;
                                        {
                                          ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                                          ATerm l_47 = NULL,s_47 = NULL,t_47 = NULL;
                                          t = term_k_15;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              t = term_z_16;
                                              return(t);
                                            }
                                            t = rewrite_1(t, l_2);
                                            {
                                              l_47 = t;
                                              r_45 :
                                              if(match_cons(l_47, sym_Defined_2))
                                                {
                                                  s_47 = ATgetArgument(l_47, 0);
                                                  t_47 = ATgetArgument(l_47, 1);
                                                  s_45 :
                                                  if(match_string(s_47, "j_0"))
                                                    {
                                                      ATerm a_48 = NULL;
                                                      if(((h_47 != NULL) && (h_47 != t_47)))
                                                        _fail(t_47);
                                                      else
                                                        h_47 = t_47;
                                                      {
                                                        ATerm b_48 = NULL;
                                                        t = not_null(h_47);
                                                        {
                                                          a_48 = t;
                                                          {
                                                            if(((j_47 != NULL) && (j_47 != a_48)))
                                                              _fail(a_48);
                                                            else
                                                              j_47 = a_48;
                                                            {
                                                              t = not_null(q_46);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  b_48 = t;
                                                                  {
                                                                    if(((i_47 != NULL) && (i_47 != b_48)))
                                                                      _fail(b_48);
                                                                    else
                                                                      i_47 = b_48;
                                                                    {
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        t = term_m_15;
                                                                        return(t);
                                                                      }
                                                                      ATerm n_2 (ATerm t)
                                                                      {
                                                                        ATerm g_48 = NULL;
                                                                        ATerm o_2 (ATerm t)
                                                                        {
                                                                          ATerm c_48 = NULL,e_48 = NULL;
                                                                          ATerm d_48 = NULL;
                                                                          d_48 = t;
                                                                          if(((c_48 != NULL) && (c_48 != d_48)))
                                                                            _fail(d_48);
                                                                          else
                                                                            c_48 = d_48;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_48));
                                                                            {
                                                                              e_48 = t;
                                                                              {
                                                                                ATerm c_17;
                                                                                c_17 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(e_48), not_null(j_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_17, not_null(e_48)));
                                                                                  {
                                                                                    ATerm p_2 (ATerm t)
                                                                                    {
                                                                                      t = term_m_15;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, p_2);
                                                                                  }
                                                                                }
                                                                                t = c_17;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, o_2);
                                                                        {
                                                                          t = not_null(s_46);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              g_48 = t;
                                                                              if(((k_47 != NULL) && (k_47 != g_48)))
                                                                                _fail(g_48);
                                                                              else
                                                                                k_47 = g_48;
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_47)));
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
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
  c_49 = t;
  v_48 :
  if(match_cons(c_49, sym_App_2))
    {
      d_49 = ATgetArgument(c_49, 0);
      j_49 = ATgetArgument(c_49, 1);
      w_48 :
      if(match_cons(d_49, sym_Call_2))
        {
          e_49 = ATgetArgument(d_49, 0);
          g_49 = ATgetArgument(d_49, 1);
          x_48 :
          if(match_cons(e_49, sym_SVar_1))
            {
              f_49 = ATgetArgument(e_49, 0);
              y_48 :
              if(match_string(f_49, "bottomup_1"))
                {
                  z_48 :
                  if(((ATgetType(g_49) == AT_LIST) && ((ATermList) g_49 != ATempty)))
                    {
                      h_49 = ATgetFirst((ATermList) g_49);
                      i_49 = (ATerm) ATgetNext((ATermList) g_49);
                      a_49 :
                      if(((ATermList) i_49 == ATempty))
                        {
                          b_49 :
                          if(match_cons(j_49, sym_Op_2))
                            {
                              k_49 = ATgetArgument(j_49, 0);
                              l_49 = ATgetArgument(j_49, 1);
                              {
                                ATerm p_49 = NULL;
                                ATerm s_49 = NULL;
                                t = not_null(l_49);
                                {
                                  ATerm q_2 (ATerm t)
                                  {
                                    ATerm q_49 = NULL;
                                    q_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, not_null(h_49))), not_null(q_49));
                                    return(t);
                                  }
                                  t = map_1(t, q_2);
                                  {
                                    s_49 = t;
                                    if(((p_49 != NULL) && (p_49 != s_49)))
                                      _fail(s_49);
                                    else
                                      p_49 = s_49;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_49), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_49), not_null(p_49)));
                              }
                            }
                          else
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
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  z_49 = t;
  x_49 :
  if(match_cons(z_49, sym_Seq_2))
    {
      a_50 = ATgetArgument(z_49, 0);
      c_50 = ATgetArgument(z_49, 1);
      y_49 :
      if(match_cons(a_50, sym_Build_1))
        {
          b_50 = ATgetArgument(a_50, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(c_50), not_null(b_50)));
        }
      else
        {
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
  ATerm p_50 = NULL,q_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  p_50 = t;
  j_50 :
  if(match_cons(p_50, sym_LChoice_2))
    {
      q_50 = ATgetArgument(p_50, 0);
      y_50 = ATgetArgument(p_50, 1);
      k_50 :
      if(match_cons(q_50, sym_LChoice_2))
        {
          w_50 = ATgetArgument(q_50, 0);
          x_50 = ATgetArgument(q_50, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_50), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_50), not_null(y_50)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(p_50, sym_Seq_2))
        {
          q_50 = ATgetArgument(p_50, 0);
          y_50 = ATgetArgument(p_50, 1);
          n_50 :
          if(match_cons(q_50, sym_Seq_2))
            {
              w_50 = ATgetArgument(q_50, 0);
              x_50 = ATgetArgument(q_50, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_50), not_null(y_50)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(p_50, sym_Choice_2))
            {
              q_50 = ATgetArgument(p_50, 0);
              y_50 = ATgetArgument(p_50, 1);
              o_50 :
              if(match_cons(q_50, sym_Choice_2))
                {
                  w_50 = ATgetArgument(q_50, 0);
                  x_50 = ATgetArgument(q_50, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_50), (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_50), not_null(y_50)));
                }
              else
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
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  e_52 = t;
  z_51 :
  if(match_cons(e_52, sym_Seq_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      k_52 = ATgetArgument(e_52, 1);
      a_52 :
      if(match_cons(f_52, sym_Scope_2))
        {
          g_52 = ATgetArgument(f_52, 0);
          j_52 = ATgetArgument(f_52, 1);
          b_52 :
          if(((ATgetType(g_52) == AT_LIST) && ((ATermList) g_52 != ATempty)))
            {
              h_52 = ATgetFirst((ATermList) g_52);
              i_52 = (ATerm) ATgetNext((ATermList) g_52);
              c_52 :
              if(match_string(h_52, "x*"))
                {
                  d_52 :
                  if(((ATermList) i_52 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_g_17), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_52), not_null(k_52)));
                    }
                  else
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
ATerm SeqOverLChoiceR_0 (ATerm t)
{
  ATerm u_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
  u_52 = t;
  s_52 :
  if(match_cons(u_52, sym_Seq_2))
    {
      x_52 = ATgetArgument(u_52, 0);
      a_53 = ATgetArgument(u_52, 1);
      t_52 :
      if(match_cons(x_52, sym_LChoice_2))
        {
          y_52 = ATgetArgument(x_52, 0);
          z_52 = ATgetArgument(x_52, 1);
          {
            ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(a_53));
            {
              ATerm r_2 (ATerm t)
              {
                t = term_h_17;
                return(t);
              }
              t = rewrite_1(t, r_2);
              {
                g_53 = t;
                q_52 :
                if(match_cons(g_53, sym_Defined_2))
                  {
                    h_53 = ATgetArgument(g_53, 0);
                    i_53 = ATgetArgument(g_53, 1);
                    r_52 :
                    if(match_string(h_53, "d_0"))
                      {
                        if(((a_53 != NULL) && (a_53 != i_53)))
                          _fail(i_53);
                        else
                          a_53 = i_53;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(y_52), not_null(a_53)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_52), not_null(a_53)));
          }
        }
      else
        {
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
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
  r_53 = t;
  p_53 :
  if(match_cons(r_53, sym_Seq_2))
    {
      s_53 = ATgetArgument(r_53, 0);
      v_53 = ATgetArgument(r_53, 1);
      q_53 :
      if(match_cons(s_53, sym_Choice_2))
        {
          t_53 = ATgetArgument(s_53, 0);
          u_53 = ATgetArgument(s_53, 1);
          {
            ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_53));
            {
              ATerm s_2 (ATerm t)
              {
                t = term_i_17;
                return(t);
              }
              t = rewrite_1(t, s_2);
              {
                z_53 = t;
                n_53 :
                if(match_cons(z_53, sym_Defined_2))
                  {
                    a_54 = ATgetArgument(z_53, 0);
                    b_54 = ATgetArgument(z_53, 1);
                    o_53 :
                    if(match_string(a_54, "c_0"))
                      {
                        if(((v_53 != NULL) && (v_53 != b_54)))
                          _fail(b_54);
                        else
                          v_53 = b_54;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(t_53), not_null(v_53)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_53), not_null(v_53)));
          }
        }
      else
        {
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
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm l_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0(t);
              LocalPopChoice(q_17);
            }
          else
            {
              t = l_17;
              {
                ATerm r_17 = t;
                int s_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0(t);
                    LocalPopChoice(s_17);
                  }
                else
                  {
                    t = r_17;
                    {
                      ATerm w_17 = t;
                      int y_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0(t);
                          LocalPopChoice(y_17);
                        }
                      else
                        {
                          t = w_17;
                          {
                            ATerm b_18 = t;
                            int c_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = IntroduceApp_0(t);
                                LocalPopChoice(c_18);
                              }
                            else
                              {
                                t = b_18;
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
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  n_54 = t;
  f_54 :
  if(match_cons(n_54, sym_Seq_2))
    {
      o_54 = ATgetArgument(n_54, 0);
      p_54 = ATgetArgument(n_54, 1);
      g_54 :
      if(match_cons(p_54, sym_Scope_2))
        {
          q_54 = ATgetArgument(p_54, 0);
          t_54 = ATgetArgument(p_54, 1);
          h_54 :
          if(((ATgetType(q_54) == AT_LIST) && ((ATermList) q_54 != ATempty)))
            {
              r_54 = ATgetFirst((ATermList) q_54);
              s_54 = (ATerm) ATgetNext((ATermList) q_54);
              i_54 :
              if(match_string(r_54, "x*"))
                {
                  m_54 :
                  if(((ATermList) s_54 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_g_17), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_54), not_null(t_54)));
                    }
                  else
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
ATerm SeqOverLChoiceL_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  a_55 = t;
  y_54 :
  if(match_cons(a_55, sym_Seq_2))
    {
      b_55 = ATgetArgument(a_55, 0);
      c_55 = ATgetArgument(a_55, 1);
      z_54 :
      if(match_cons(c_55, sym_LChoice_2))
        {
          d_55 = ATgetArgument(c_55, 0);
          e_55 = ATgetArgument(c_55, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(b_55), not_null(d_55)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_55), not_null(e_55)));
        }
      else
        {
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
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  m_55 = t;
  k_55 :
  if(match_cons(m_55, sym_Seq_2))
    {
      n_55 = ATgetArgument(m_55, 0);
      o_55 = ATgetArgument(m_55, 1);
      l_55 :
      if(match_cons(o_55, sym_Choice_2))
        {
          p_55 = ATgetArgument(o_55, 0);
          q_55 = ATgetArgument(o_55, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(n_55), not_null(p_55)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_55), not_null(q_55)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm t_114 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    t = bottomup_1(t, t_114);
    return(t);
  }
  t = _all(t, u_2);
  t = t_114(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm l_102 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      t = l_102(t);
      t = bottomup_1(t, v_2);
      return(t);
    }
    t = try_1(t, w_2);
    return(t);
  }
  t = bottomup_1(t, v_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceL_0(t);
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              t = SeqOverScopeL_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1(t, x_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm b_56 = NULL,c_56 = NULL;
  b_56 = t;
  a_56 :
  if(match_cons(b_56, sym_Build_1))
    {
      c_56 = ATgetArgument(b_56, 0);
      {
        ATerm f_56 = NULL,h_56 = NULL;
        ATerm g_56 = NULL;
        t = SSLgetAnnotations(not_null(b_56));
        {
          g_56 = t;
          if(((f_56 != NULL) && (f_56 != g_56)))
            _fail(g_56);
          else
            f_56 = g_56;
        }
        {
          t = not_null(c_56);
          {
            ATerm j_56 = NULL;
            t = d_89(t);
            {
              h_56 = t;
              {
                ATerm k_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(h_56)), not_null(f_56));
                {
                  k_56 = t;
                  if(((j_56 != NULL) && (j_56 != k_56)))
                    _fail(k_56);
                  else
                    j_56 = k_56;
                }
                t = not_null(j_56);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm n_87 (ATerm), ATerm o_87 (ATerm))
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
  v_56 = t;
  u_56 :
  if(match_cons(v_56, sym_Seq_2))
    {
      w_56 = ATgetArgument(v_56, 0);
      x_56 = ATgetArgument(v_56, 1);
      {
        ATerm b_57 = NULL,d_57 = NULL;
        ATerm c_57 = NULL;
        t = SSLgetAnnotations(not_null(v_56));
        {
          c_57 = t;
          if(((b_57 != NULL) && (b_57 != c_57)))
            _fail(c_57);
          else
            b_57 = c_57;
        }
        {
          t = not_null(w_56);
          {
            ATerm f_57 = NULL;
            t = n_87(t);
            {
              d_57 = t;
              {
                t = not_null(x_56);
                {
                  ATerm h_57 = NULL;
                  t = o_87(t);
                  {
                    f_57 = t;
                    {
                      ATerm i_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(d_57), not_null(f_57)), not_null(b_57));
                      {
                        i_57 = t;
                        if(((h_57 != NULL) && (h_57 != i_57)))
                          _fail(i_57);
                        else
                          h_57 = i_57;
                      }
                      t = not_null(h_57);
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
ATerm Match_1 (ATerm t, ATerm c_89 (ATerm))
{
  ATerm t_57 = NULL,u_57 = NULL;
  t_57 = t;
  s_57 :
  if(match_cons(t_57, sym_Match_1))
    {
      u_57 = ATgetArgument(t_57, 0);
      {
        ATerm x_57 = NULL,z_57 = NULL;
        ATerm y_57 = NULL;
        t = SSLgetAnnotations(not_null(t_57));
        {
          y_57 = t;
          if(((x_57 != NULL) && (x_57 != y_57)))
            _fail(y_57);
          else
            x_57 = y_57;
        }
        {
          t = not_null(u_57);
          {
            ATerm e_58 = NULL;
            t = c_89(t);
            {
              z_57 = t;
              {
                ATerm f_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(z_57)), not_null(x_57));
                {
                  f_58 = t;
                  if(((e_58 != NULL) && (e_58 != f_58)))
                    _fail(f_58);
                  else
                    e_58 = f_58;
                }
                t = not_null(e_58);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm r_87 (ATerm), ATerm s_87 (ATerm))
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym_LChoice_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        ATerm w_58 = NULL,y_58 = NULL;
        ATerm x_58 = NULL;
        t = SSLgetAnnotations(not_null(q_58));
        {
          x_58 = t;
          if(((w_58 != NULL) && (w_58 != x_58)))
            _fail(x_58);
          else
            w_58 = x_58;
        }
        {
          t = not_null(r_58);
          {
            ATerm a_59 = NULL;
            t = r_87(t);
            {
              y_58 = t;
              {
                t = not_null(s_58);
                {
                  ATerm c_59 = NULL;
                  t = s_87(t);
                  {
                    a_59 = t;
                    {
                      ATerm d_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(y_58), not_null(a_59)), not_null(w_58));
                      {
                        d_59 = t;
                        if(((c_59 != NULL) && (c_59 != d_59)))
                          _fail(d_59);
                        else
                          c_59 = d_59;
                      }
                      t = not_null(c_59);
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
ATerm Choice_2 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
  p_59 = t;
  o_59 :
  if(match_cons(p_59, sym_Choice_2))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      {
        ATerm v_59 = NULL,x_59 = NULL;
        ATerm w_59 = NULL;
        t = SSLgetAnnotations(not_null(p_59));
        {
          w_59 = t;
          if(((v_59 != NULL) && (v_59 != w_59)))
            _fail(w_59);
          else
            v_59 = w_59;
        }
        {
          t = not_null(q_59);
          {
            ATerm z_59 = NULL;
            t = p_87(t);
            {
              x_59 = t;
              {
                t = not_null(r_59);
                {
                  ATerm b_60 = NULL;
                  t = q_87(t);
                  {
                    z_59 = t;
                    {
                      ATerm c_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(x_59), not_null(z_59)), not_null(v_59));
                      {
                        c_60 = t;
                        if(((b_60 != NULL) && (b_60 != c_60)))
                          _fail(c_60);
                        else
                          b_60 = c_60;
                      }
                      t = not_null(b_60);
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
  ATerm y_2 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm j_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              LocalPopChoice(k_18);
            }
          else
            {
              t = j_18;
              {
                ATerm p_18 = t;
                int q_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_2 (ATerm t)
                    {
                      ATerm a_3 (ATerm t)
                      {
                        t = Match_1(t, _id);
                        return(t);
                      }
                      ATerm b_3 (ATerm t)
                      {
                        t = Build_1(t, _id);
                        return(t);
                      }
                      t = Seq_2(t, a_3, b_3);
                      return(t);
                    }
                    t = Scope_2(t, _id, z_2);
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
                          ATerm c_3 (ATerm t)
                          {
                            ATerm d_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm e_3 (ATerm t)
                            {
                              ATerm f_3 (ATerm t)
                              {
                                t = Build_1(t, _id);
                                return(t);
                              }
                              t = Seq_2(t, _id, f_3);
                              return(t);
                            }
                            t = Seq_2(t, d_3, e_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, c_3);
                          LocalPopChoice(v_18);
                        }
                      else
                        {
                          t = r_18;
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
    return(t);
  }
  t = try_1(t, y_2);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm k_60 = NULL;
  k_60 = t;
  {
    ATerm x_18;
    x_18 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATmakeAppl(sym_Defined_2, term_a_19, not_null(k_60)));
      {
        ATerm g_3 (ATerm t)
        {
          t = term_z_16;
          return(t);
        }
        t = assert_1(t, g_3);
      }
    }
    t = x_18;
    {
      ATerm b_19;
      b_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATmakeAppl(sym_Defined_2, term_c_19, not_null(k_60)));
        {
          ATerm h_3 (ATerm t)
          {
            t = term_l_15;
            return(t);
          }
          t = assert_1(t, h_3);
        }
      }
      t = b_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm o_60 = NULL;
  o_60 = t;
  {
    ATerm d_19;
    d_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_60)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_19, not_null(o_60)));
      {
        ATerm i_3 (ATerm t)
        {
          t = term_i_17;
          return(t);
        }
        t = assert_1(t, i_3);
      }
    }
    t = d_19;
    {
      ATerm f_19;
      f_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_60)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_19, not_null(o_60)));
        {
          ATerm j_3 (ATerm t)
          {
            t = term_h_17;
            return(t);
          }
          t = assert_1(t, j_3);
        }
      }
      t = f_19;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  z_60 = t;
  u_60 :
  if(match_cons(z_60, sym_Call_2))
    {
      a_61 = ATgetArgument(z_60, 0);
      c_61 = ATgetArgument(z_60, 1);
      v_60 :
      if(match_cons(a_61, sym_SVar_1))
        {
          b_61 = ATgetArgument(a_61, 0);
          w_60 :
          if(match_string(b_61, "innermost_1"))
            {
              x_60 :
              if(((ATgetType(c_61) == AT_LIST) && ((ATermList) c_61 != ATempty)))
                {
                  d_61 = ATgetFirst((ATermList) c_61);
                  e_61 = (ATerm) ATgetNext((ATermList) c_61);
                  y_60 :
                  if(((ATermList) e_61 == ATempty))
                    {
                      {
                        ATerm g_61 = NULL,i_61 = NULL;
                        ATerm k_3 (ATerm t)
                        {
                          ATerm l_3 (ATerm t)
                          {
                            t = term_h_19;
                            return(t);
                          }
                          t = say_1(t, l_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, k_3);
                        {
                          ATerm k_19;
                          k_19 = t;
                          {
                            ATerm h_61 = NULL;
                            t = new_0(t);
                            {
                              h_61 = t;
                              if(((g_61 != NULL) && (g_61 != h_61)))
                                _fail(h_61);
                              else
                                g_61 = h_61;
                            }
                          }
                          t = k_19;
                          {
                            ATerm l_19;
                            l_19 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_61)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = l_19;
                            {
                              ATerm o_19;
                              o_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_61)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = o_19;
                              {
                                ATerm j_61 = NULL;
                                t = not_null(d_61);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    j_61 = t;
                                    if(((i_61 != NULL) && (i_61 != j_61)))
                                      _fail(j_61);
                                    else
                                      i_61 = j_61;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_61), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_i_20, not_null(i_61)), (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_61)), (ATerm) ATempty)))), term_j_12))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm m_3 (ATerm t)
                                        {
                                          ATerm j_20 = t;
                                          int k_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(k_20);
                                            }
                                          else
                                            {
                                              t = j_20;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, m_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm n_3 (ATerm t)
                                            {
                                              ATerm o_3 (ATerm t)
                                              {
                                                t = term_l_20;
                                                return(t);
                                              }
                                              t = say_1(t, o_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, n_3);
                                          }
                                        }
                                      }
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
ATerm alltd_1 (ATerm t, ATerm w_116 (ATerm))
{
  ATerm n_61 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_116(t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = _all(t, n_61);
      }
    return(t);
  }
  t = n_61(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm d_62 = NULL;
  ATerm o_20;
  o_20 = t;
  {
    ATerm e_62 = NULL;
    t = new_0(t);
    {
      e_62 = t;
      {
        if(((d_62 != NULL) && (d_62 != e_62)))
          _fail(e_62);
        else
          d_62 = e_62;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_62)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm q_3 (ATerm t)
                  {
                    t = term_r_20;
                    return(t);
                  }
                  t = say_1(t, q_3);
                  return(t);
                }
                t = if_verbose2_1(t, p_3);
                _fail(t);
              }
            }
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
                f_62 = t;
                q_61 :
                if(match_cons(f_62, sym_Seq_2))
                  {
                    g_62 = ATgetArgument(f_62, 0);
                    q_62 = ATgetArgument(f_62, 1);
                    r_61 :
                    if(match_cons(g_62, sym_All_1))
                      {
                        h_62 = ATgetArgument(g_62, 0);
                        s_61 :
                        if(match_cons(h_62, sym_Call_2))
                          {
                            i_62 = ATgetArgument(h_62, 0);
                            k_62 = ATgetArgument(h_62, 1);
                            t_61 :
                            if(match_cons(i_62, sym_SVar_1))
                              {
                                j_62 = ATgetArgument(i_62, 0);
                                u_61 :
                                if(match_string(j_62, "bottomup_1"))
                                  {
                                    v_61 :
                                    if(((ATgetType(k_62) == AT_LIST) && ((ATermList) k_62 != ATempty)))
                                      {
                                        l_62 = ATgetFirst((ATermList) k_62);
                                        p_62 = (ATerm) ATgetNext((ATermList) k_62);
                                        w_61 :
                                        if(match_cons(l_62, sym_Call_2))
                                          {
                                            m_62 = ATgetArgument(l_62, 0);
                                            o_62 = ATgetArgument(l_62, 1);
                                            x_61 :
                                            if(match_cons(m_62, sym_SVar_1))
                                              {
                                                n_62 = ATgetArgument(m_62, 0);
                                                y_61 :
                                                if(((ATermList) o_62 == ATempty))
                                                  {
                                                    z_61 :
                                                    if(((ATermList) p_62 == ATempty))
                                                      {
                                                        a_62 :
                                                        if(match_cons(q_62, sym_Call_2))
                                                          {
                                                            r_62 = ATgetArgument(q_62, 0);
                                                            t_62 = ATgetArgument(q_62, 1);
                                                            b_62 :
                                                            if(match_cons(r_62, sym_SVar_1))
                                                              {
                                                                s_62 = ATgetArgument(r_62, 0);
                                                                c_62 :
                                                                if(((ATermList) t_62 == ATempty))
                                                                  {
                                                                    {
                                                                      if(((d_62 != NULL) && (d_62 != n_62)))
                                                                        _fail(n_62);
                                                                      else
                                                                        d_62 = n_62;
                                                                      if(((d_62 != NULL) && (d_62 != s_62)))
                                                                        _fail(s_62);
                                                                      else
                                                                        d_62 = s_62;
                                                                    }
                                                                  }
                                                                else
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
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
                {
                  ATerm r_3 (ATerm t)
                  {
                    ATerm s_3 (ATerm t)
                    {
                      t = term_u_20;
                      return(t);
                    }
                    t = debug_1(t, s_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, r_3);
                  _fail(t);
                }
              }
            {
              ATerm t_3 (ATerm t)
              {
                ATerm u_3 (ATerm t)
                {
                  t = term_v_20;
                  return(t);
                }
                t = say_1(t, u_3);
                return(t);
              }
              t = if_verbose2_1(t, t_3);
            }
          }
        }
      }
    }
  }
  t = o_20;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  ATerm w_20;
  w_20 = t;
  {
    ATerm x_63 = NULL;
    t = new_0(t);
    {
      x_63 = t;
      {
        if(((v_63 != NULL) && (v_63 != x_63)))
          _fail(x_63);
        else
          v_63 = x_63;
        {
          ATerm x_20 = t;
          int y_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_63)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(y_20);
            }
          else
            {
              t = x_20;
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = term_l_21;
                    return(t);
                  }
                  t = say_1(t, w_3);
                  return(t);
                }
                t = if_verbose2_1(t, v_3);
                _fail(t);
              }
            }
          {
            ATerm m_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
                y_63 = t;
                y_62 :
                if(match_cons(y_63, sym_Call_2))
                  {
                    z_63 = ATgetArgument(y_63, 0);
                    b_64 = ATgetArgument(y_63, 1);
                    z_62 :
                    if(match_cons(z_63, sym_SVar_1))
                      {
                        a_64 = ATgetArgument(z_63, 0);
                        a_63 :
                        if(match_string(a_64, "bottomup_1"))
                          {
                            b_63 :
                            if(((ATgetType(b_64) == AT_LIST) && ((ATermList) b_64 != ATempty)))
                              {
                                c_64 = ATgetFirst((ATermList) b_64);
                                x_64 = (ATerm) ATgetNext((ATermList) b_64);
                                c_63 :
                                if(match_cons(c_64, sym_Rec_2))
                                  {
                                    d_64 = ATgetArgument(c_64, 0);
                                    e_64 = ATgetArgument(c_64, 1);
                                    d_63 :
                                    if(match_cons(e_64, sym_Call_2))
                                      {
                                        f_64 = ATgetArgument(e_64, 0);
                                        h_64 = ATgetArgument(e_64, 1);
                                        e_63 :
                                        if(match_cons(f_64, sym_SVar_1))
                                          {
                                            g_64 = ATgetArgument(f_64, 0);
                                            f_63 :
                                            if(match_string(g_64, "try_1"))
                                              {
                                                g_63 :
                                                if(((ATgetType(h_64) == AT_LIST) && ((ATermList) h_64 != ATempty)))
                                                  {
                                                    i_64 = ATgetFirst((ATermList) h_64);
                                                    w_64 = (ATerm) ATgetNext((ATermList) h_64);
                                                    h_63 :
                                                    if(match_cons(i_64, sym_Seq_2))
                                                      {
                                                        j_64 = ATgetArgument(i_64, 0);
                                                        n_64 = ATgetArgument(i_64, 1);
                                                        i_63 :
                                                        if(match_cons(j_64, sym_Call_2))
                                                          {
                                                            k_64 = ATgetArgument(j_64, 0);
                                                            m_64 = ATgetArgument(j_64, 1);
                                                            j_63 :
                                                            if(match_cons(k_64, sym_SVar_1))
                                                              {
                                                                l_64 = ATgetArgument(k_64, 0);
                                                                k_63 :
                                                                if(((ATermList) m_64 == ATempty))
                                                                  {
                                                                    l_63 :
                                                                    if(match_cons(n_64, sym_Call_2))
                                                                      {
                                                                        o_64 = ATgetArgument(n_64, 0);
                                                                        q_64 = ATgetArgument(n_64, 1);
                                                                        m_63 :
                                                                        if(match_cons(o_64, sym_SVar_1))
                                                                          {
                                                                            p_64 = ATgetArgument(o_64, 0);
                                                                            n_63 :
                                                                            if(match_string(p_64, "bottomup_1"))
                                                                              {
                                                                                o_63 :
                                                                                if(((ATgetType(q_64) == AT_LIST) && ((ATermList) q_64 != ATempty)))
                                                                                  {
                                                                                    r_64 = ATgetFirst((ATermList) q_64);
                                                                                    v_64 = (ATerm) ATgetNext((ATermList) q_64);
                                                                                    p_63 :
                                                                                    if(match_cons(r_64, sym_Call_2))
                                                                                      {
                                                                                        s_64 = ATgetArgument(r_64, 0);
                                                                                        u_64 = ATgetArgument(r_64, 1);
                                                                                        q_63 :
                                                                                        if(match_cons(s_64, sym_SVar_1))
                                                                                          {
                                                                                            t_64 = ATgetArgument(s_64, 0);
                                                                                            r_63 :
                                                                                            if(((ATermList) u_64 == ATempty))
                                                                                              {
                                                                                                s_63 :
                                                                                                if(((ATermList) v_64 == ATempty))
                                                                                                  {
                                                                                                    t_63 :
                                                                                                    if(((ATermList) w_64 == ATempty))
                                                                                                      {
                                                                                                        u_63 :
                                                                                                        if(((ATermList) x_64 == ATempty))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((w_63 != NULL) && (w_63 != d_64)))
                                                                                                                _fail(d_64);
                                                                                                              else
                                                                                                                w_63 = d_64;
                                                                                                              {
                                                                                                                if(((v_63 != NULL) && (v_63 != l_64)))
                                                                                                                  _fail(l_64);
                                                                                                                else
                                                                                                                  v_63 = l_64;
                                                                                                                if(((w_63 != NULL) && (w_63 != t_64)))
                                                                                                                  _fail(t_64);
                                                                                                                else
                                                                                                                  w_63 = t_64;
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
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm y_3 (ATerm t)
                    {
                      t = term_o_21;
                      return(t);
                    }
                    t = debug_1(t, y_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, x_3);
                  _fail(t);
                }
              }
            {
              ATerm z_3 (ATerm t)
              {
                ATerm a_4 (ATerm t)
                {
                  t = term_p_21;
                  return(t);
                }
                t = say_1(t, a_4);
                return(t);
              }
              t = if_verbose2_1(t, z_3);
            }
          }
        }
      }
    }
  }
  t = w_20;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  e_65 = t;
  b_65 :
  if(match_cons(e_65, sym_Call_2))
    {
      f_65 = ATgetArgument(e_65, 0);
      h_65 = ATgetArgument(e_65, 1);
      c_65 :
      if(match_cons(f_65, sym_SVar_1))
        {
          g_65 = ATgetArgument(f_65, 0);
          d_65 :
          if(((ATermList) h_65 == ATempty))
            {
              t = not_null(g_65);
            }
          else
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
ATerm SubsVar_2 (ATerm t, ATerm c_94 (ATerm), ATerm d_94 (ATerm))
{
  ATerm n_65 = NULL;
  ATerm p_65 = NULL,q_65 = NULL;
  n_65 = t;
  {
    ATerm r_65 = NULL;
    t = not_null(n_65);
    {
      ATerm s_65 = NULL;
      t = c_94(t);
      {
        r_65 = t;
        {
          if(((p_65 != NULL) && (p_65 != r_65)))
            _fail(r_65);
          else
            p_65 = r_65;
          {
            t = d_94(t);
            {
              s_65 = t;
              if(((q_65 != NULL) && (q_65 != s_65)))
                _fail(s_65);
              else
                q_65 = s_65;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_65), not_null(q_65));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,h_66 = NULL;
  a_66 = t;
  z_65 :
  if(match_cons(a_66, sym__2))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      {
        ATerm j_66 = NULL;
        if(((j_66 != NULL) && (j_66 != c_66)))
          _fail(c_66);
        else
          j_66 = c_66;
      }
    }
  else
    {
      if(match_cons(a_66, sym__3))
        {
          b_66 = ATgetArgument(a_66, 0);
          c_66 = ATgetArgument(a_66, 1);
          h_66 = ATgetArgument(a_66, 2);
          {
            ATerm p_66 = NULL;
            ATerm q_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_66), not_null(c_66));
            {
              t = zip_1(t, _id);
              {
                q_66 = t;
                if(((p_66 != NULL) && (p_66 != q_66)))
                  _fail(q_66);
                else
                  p_66 = q_66;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_66), not_null(h_66));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm e_94 (ATerm), ATerm f_94 (ATerm))
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  t = subs_args_0(t);
  {
    w_66 = t;
    v_66 :
    if(match_cons(w_66, sym__2))
      {
        x_66 = ATgetArgument(w_66, 0);
        y_66 = ATgetArgument(w_66, 1);
        {
          t = not_null(y_66);
          {
            ATerm b_4 (ATerm t)
            {
              ATerm c_4 (ATerm t)
              {
                t = not_null(x_66);
                return(t);
              }
              t = SubsVar_2(t, e_94, c_4);
              t = f_94(t);
              return(t);
            }
            t = alltd_1(t, b_4);
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
ATerm substitute_1 (ATerm t, ATerm g_94 (ATerm))
{
  t = substitute_2(t, g_94, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        t = split_2(t, _id, f_91);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
            m_67 = t;
            h_67 :
            if(match_cons(m_67, sym__2))
              {
                n_67 = ATgetArgument(m_67, 0);
                r_67 = ATgetArgument(m_67, 1);
                i_67 :
                if(match_cons(n_67, sym_SDef_3))
                  {
                    o_67 = ATgetArgument(n_67, 0);
                    p_67 = ATgetArgument(n_67, 1);
                    q_67 = ATgetArgument(n_67, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_67), not_null(p_67), not_null(q_67));
                  }
                else
                  {
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
      t = Let_2(t, d_4, _id);
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
            ATerm f_4 (ATerm t)
            {
              t = split_2(t, _id, f_91);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
                  e_68 = t;
                  k_67 :
                  if(match_cons(e_68, sym__2))
                    {
                      f_68 = ATgetArgument(e_68, 0);
                      i_68 = ATgetArgument(e_68, 1);
                      l_67 :
                      if(match_cons(f_68, sym_VarDec_2))
                        {
                          g_68 = ATgetArgument(f_68, 0);
                          h_68 = ATgetArgument(f_68, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_68), not_null(h_68));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, g_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, f_4, _id);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm h_4 (ATerm t)
              {
                t = f_91(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, h_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
  u_68 = t;
  t_68 :
  if(match_cons(u_68, sym_Rec_2))
    {
      v_68 = ATgetArgument(u_68, 0);
      w_68 = ATgetArgument(u_68, 1);
      {
        ATerm a_69 = NULL,c_69 = NULL;
        ATerm b_69 = NULL;
        t = SSLgetAnnotations(not_null(u_68));
        {
          b_69 = t;
          if(((a_69 != NULL) && (a_69 != b_69)))
            _fail(b_69);
          else
            a_69 = b_69;
        }
        {
          t = not_null(v_68);
          {
            ATerm e_69 = NULL;
            t = c_88(t);
            {
              c_69 = t;
              {
                t = not_null(w_68);
                {
                  ATerm k_69 = NULL;
                  t = d_88(t);
                  {
                    e_69 = t;
                    {
                      ATerm l_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(c_69), not_null(e_69)), not_null(a_69));
                      {
                        l_69 = t;
                        if(((k_69 != NULL) && (k_69 != l_69)))
                          _fail(l_69);
                        else
                          k_69 = l_69;
                      }
                      t = not_null(k_69);
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
ATerm SDef_3 (ATerm t, ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL;
  g_70 = t;
  f_70 :
  if(match_cons(g_70, sym_SDef_3))
    {
      h_70 = ATgetArgument(g_70, 0);
      i_70 = ATgetArgument(g_70, 1);
      j_70 = ATgetArgument(g_70, 2);
      {
        ATerm o_70 = NULL,q_70 = NULL;
        ATerm p_70 = NULL;
        t = SSLgetAnnotations(not_null(g_70));
        {
          p_70 = t;
          if(((o_70 != NULL) && (o_70 != p_70)))
            _fail(p_70);
          else
            o_70 = p_70;
        }
        {
          t = not_null(h_70);
          {
            ATerm s_70 = NULL;
            t = g_88(t);
            {
              q_70 = t;
              {
                t = not_null(i_70);
                {
                  ATerm u_70 = NULL;
                  t = h_88(t);
                  {
                    s_70 = t;
                    {
                      t = not_null(j_70);
                      {
                        ATerm w_70 = NULL;
                        t = i_88(t);
                        {
                          u_70 = t;
                          {
                            ATerm x_70 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(q_70), not_null(s_70), not_null(u_70)), not_null(o_70));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
  k_71 = t;
  j_71 :
  if(match_cons(k_71, sym_Let_2))
    {
      l_71 = ATgetArgument(k_71, 0);
      m_71 = ATgetArgument(k_71, 1);
      {
        ATerm q_71 = NULL,s_71 = NULL;
        ATerm r_71 = NULL;
        t = SSLgetAnnotations(not_null(k_71));
        {
          r_71 = t;
          if(((q_71 != NULL) && (q_71 != r_71)))
            _fail(r_71);
          else
            q_71 = r_71;
        }
        {
          t = not_null(l_71);
          {
            ATerm u_71 = NULL;
            t = e_88(t);
            {
              s_71 = t;
              {
                t = not_null(m_71);
                {
                  ATerm w_71 = NULL;
                  t = f_88(t);
                  {
                    u_71 = t;
                    {
                      ATerm x_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_71), not_null(u_71)), not_null(q_71));
                      {
                        x_71 = t;
                        if(((w_71 != NULL) && (w_71 != x_71)))
                          _fail(x_71);
                        else
                          w_71 = x_71;
                      }
                      t = not_null(w_71);
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
ATerm sboundin_3 (ATerm t, ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm))
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, g_91, g_91);
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
            t = SDef_3(t, i_91, i_91, g_91);
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            t = Rec_2(t, i_91, g_91);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
  j_72 = t;
  e_72 :
  if(match_cons(j_72, sym_Rec_2))
    {
      k_72 = ATgetArgument(j_72, 0);
      l_72 = ATgetArgument(j_72, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,y_72 = NULL,z_72 = NULL;
  t_72 = t;
  s_72 :
  if(match_cons(t_72, sym_SDef_3))
    {
      u_72 = ATgetArgument(t_72, 0);
      y_72 = ATgetArgument(t_72, 1);
      z_72 = ATgetArgument(t_72, 2);
      {
        t = not_null(y_72);
        {
          ATerm i_4 (ATerm t)
          {
            ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
            h_73 = t;
            r_72 :
            if(match_cons(h_73, sym_VarDec_2))
              {
                i_73 = ATgetArgument(h_73, 0);
                j_73 = ATgetArgument(h_73, 1);
                t = not_null(i_73);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_4);
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
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym_Let_2))
    {
      s_73 = ATgetArgument(r_73, 0);
      t_73 = ATgetArgument(r_73, 1);
      {
        t = not_null(s_73);
        {
          ATerm j_4 (ATerm t)
          {
            ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL;
            w_73 = t;
            p_73 :
            if(match_cons(w_73, sym_SDef_3))
              {
                x_73 = ATgetArgument(w_73, 0);
                y_73 = ATgetArgument(w_73, 1);
                z_73 = ATgetArgument(w_73, 2);
                t = not_null(x_73);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm k_74 = NULL,m_74 = NULL;
  k_74 = t;
  j_74 :
  if(match_cons(k_74, sym_SVar_1))
    {
      m_74 = ATgetArgument(k_74, 0);
      {
        ATerm y_74 = NULL,a_75 = NULL;
        ATerm z_74 = NULL;
        t = SSLgetAnnotations(not_null(k_74));
        {
          z_74 = t;
          if(((y_74 != NULL) && (y_74 != z_74)))
            _fail(z_74);
          else
            y_74 = z_74;
        }
        {
          t = not_null(m_74);
          {
            ATerm c_75 = NULL;
            t = b_88(t);
            {
              a_75 = t;
              {
                ATerm d_75 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(a_75)), not_null(y_74));
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
ATerm srename_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
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
              t = Bind2_0(t);
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, k_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = Scope_2(t, b_91, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm r_77 = NULL,s_77 = NULL;
  r_77 = t;
  q_77 :
  if(match_cons(r_77, sym_DynamicRules_1))
    {
      s_77 = ATgetArgument(r_77, 0);
      {
        ATerm v_77 = NULL,x_77 = NULL;
        ATerm w_77 = NULL;
        t = SSLgetAnnotations(not_null(r_77));
        {
          w_77 = t;
          if(((v_77 != NULL) && (v_77 != w_77)))
            _fail(w_77);
          else
            v_77 = w_77;
        }
        {
          t = not_null(s_77);
          {
            ATerm z_77 = NULL;
            t = j_86(t);
            {
              x_77 = t;
              {
                ATerm a_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(x_77)), not_null(v_77));
                {
                  a_78 = t;
                  if(((z_77 != NULL) && (z_77 != a_78)))
                    _fail(a_78);
                  else
                    z_77 = a_78;
                }
                t = not_null(z_77);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm g_89 (ATerm), ATerm h_89 (ATerm))
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
  l_78 = t;
  k_78 :
  if(match_cons(l_78, sym_Scope_2))
    {
      m_78 = ATgetArgument(l_78, 0);
      n_78 = ATgetArgument(l_78, 1);
      {
        ATerm r_78 = NULL,t_78 = NULL;
        ATerm s_78 = NULL;
        t = SSLgetAnnotations(not_null(l_78));
        {
          s_78 = t;
          if(((r_78 != NULL) && (r_78 != s_78)))
            _fail(s_78);
          else
            r_78 = s_78;
        }
        {
          t = not_null(m_78);
          {
            ATerm v_78 = NULL;
            t = g_89(t);
            {
              t_78 = t;
              {
                t = not_null(n_78);
                {
                  ATerm x_78 = NULL;
                  t = h_89(t);
                  {
                    v_78 = t;
                    {
                      ATerm y_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(t_78), not_null(v_78)), not_null(r_78));
                      {
                        y_78 = t;
                        if(((x_78 != NULL) && (x_78 != y_78)))
                          _fail(y_78);
                        else
                          x_78 = y_78;
                      }
                      t = not_null(x_78);
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
ATerm tboundin_3 (ATerm t, ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm))
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, e_91, c_91);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      t = DynamicRules_1(t, c_91);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL;
  i_79 = t;
  h_79 :
  if(match_cons(i_79, sym_DynamicRules_1))
    {
      j_79 = ATgetArgument(i_79, 0);
      {
        t = not_null(j_79);
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
  ATerm o_79 = NULL,p_79 = NULL;
  o_79 = t;
  n_79 :
  if(match_cons(o_79, sym_Var_1))
    {
      p_79 = ATgetArgument(o_79, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  u_79 = t;
  t_79 :
  if(match_cons(u_79, sym__2))
    {
      v_79 = ATgetArgument(u_79, 0);
      w_79 = ATgetArgument(u_79, 1);
      {
        t = not_null(v_79);
        {
          ATerm a_80 (ATerm t)
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_79);
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                {
                  ATerm g_22 = t;
                  int h_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_4 (ATerm t)
                      {
                        t = not_null(w_79);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_107, l_4);
                      t = a_80(t);
                      LocalPopChoice(h_22);
                    }
                  else
                    {
                      t = g_22;
                      t = Cons_2(t, _id, a_80);
                    }
                }
              }
            return(t);
          }
          t = a_80(t);
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
ATerm foldr_3 (ATerm t, ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm))
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_106(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
        f_80 = t;
        e_80 :
        if(((ATgetType(f_80) == AT_LIST) && ((ATermList) f_80 != ATempty)))
          {
            g_80 = ATgetFirst((ATermList) f_80);
            h_80 = (ATerm) ATgetNext((ATermList) f_80);
            {
              ATerm k_80 = NULL,m_80 = NULL;
              ATerm k_22;
              k_22 = t;
              {
                ATerm l_80 = NULL;
                t = not_null(g_80);
                {
                  t = e_106(t);
                  {
                    l_80 = t;
                    if(((k_80 != NULL) && (k_80 != l_80)))
                      _fail(l_80);
                    else
                      k_80 = l_80;
                  }
                }
              }
              t = k_22;
              {
                ATerm n_80 = NULL;
                t = not_null(h_80);
                {
                  t = foldr_3(t, c_106, d_106, e_106);
                  {
                    n_80 = t;
                    if(((m_80 != NULL) && (m_80 != n_80)))
                      _fail(n_80);
                    else
                      m_80 = n_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_80), not_null(m_80));
                  t = d_106(t);
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
ATerm crush_3 (ATerm t, ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm))
{
  ATerm v_80 = NULL;
  ATerm x_80 = NULL;
  v_80 = t;
  {
    ATerm y_80 = NULL;
    ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
    t = not_null(v_80);
    {
      y_80 = t;
      {
        t = SSL_explode_term(not_null(y_80));
        {
          a_81 = t;
          u_80 :
          if(match_cons(a_81, sym__2))
            {
              b_81 = ATgetArgument(a_81, 0);
              c_81 = ATgetArgument(a_81, 1);
              if(((x_80 != NULL) && (x_80 != c_81)))
                _fail(c_81);
              else
                x_80 = c_81;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_80);
      t = foldr_3(t, u_107, v_107, w_107);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL;
  j_81 = t;
  h_81 :
  if(match_cons(j_81, sym__2))
    {
      k_81 = ATgetArgument(j_81, 0);
      l_81 = ATgetArgument(j_81, 1);
      i_81 :
      if(((ATgetType(l_81) == AT_LIST) && ((ATermList) l_81 != ATempty)))
        {
          m_81 = ATgetFirst((ATermList) l_81);
          n_81 = (ATerm) ATgetNext((ATermList) l_81);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_81)), not_null(m_81)), not_null(n_81));
        }
      else
        {
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
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL;
  c_82 = t;
  a_82 :
  if(((ATgetType(c_82) == AT_LIST) && ((ATermList) c_82 != ATempty)))
    {
      d_82 = ATgetFirst((ATermList) c_82);
      g_82 = (ATerm) ATgetNext((ATermList) c_82);
      b_82 :
      if(match_cons(d_82, sym__2))
        {
          e_82 = ATgetArgument(d_82, 0);
          f_82 = ATgetArgument(d_82, 1);
          {
            ATerm k_82 = NULL,l_82 = NULL,r_82 = NULL,x_82 = NULL;
            ATerm l_22;
            l_22 = t;
            {
              ATerm m_82 = NULL;
              ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL;
              t = not_null(f_82);
              {
                m_82 = t;
                {
                  t = SSL_explode_term(not_null(m_82));
                  {
                    o_82 = t;
                    v_81 :
                    if(match_cons(o_82, sym__2))
                      {
                        p_82 = ATgetArgument(o_82, 0);
                        q_82 = ATgetArgument(o_82, 1);
                        {
                          if(((k_82 != NULL) && (k_82 != p_82)))
                            _fail(p_82);
                          else
                            k_82 = p_82;
                          if(((l_82 != NULL) && (l_82 != q_82)))
                            _fail(q_82);
                          else
                            l_82 = q_82;
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
            t = l_22;
            {
              ATerm m_22;
              m_22 = t;
              {
                ATerm s_82 = NULL;
                ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
                t = not_null(e_82);
                {
                  s_82 = t;
                  {
                    t = SSL_explode_term(not_null(s_82));
                    {
                      u_82 = t;
                      y_81 :
                      if(match_cons(u_82, sym__2))
                        {
                          v_82 = ATgetArgument(u_82, 0);
                          w_82 = ATgetArgument(u_82, 1);
                          {
                            if(((k_82 != NULL) && (k_82 != v_82)))
                              _fail(v_82);
                            else
                              k_82 = v_82;
                            if(((r_82 != NULL) && (r_82 != w_82)))
                              _fail(w_82);
                            else
                              r_82 = w_82;
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
              t = m_22;
              {
                ATerm y_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(l_82));
                {
                  t = zip_1(t, _id);
                  {
                    y_82 = t;
                    if(((x_82 != NULL) && (x_82 != y_82)))
                      _fail(y_82);
                    else
                      x_82 = y_82;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_82), not_null(g_82));
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
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  i_83 = t;
  g_83 :
  if(((ATgetType(i_83) == AT_LIST) && ((ATermList) i_83 != ATempty)))
    {
      j_83 = ATgetFirst((ATermList) i_83);
      m_83 = (ATerm) ATgetNext((ATermList) i_83);
      h_83 :
      if(match_cons(j_83, sym__2))
        {
          k_83 = ATgetArgument(j_83, 0);
          l_83 = ATgetArgument(j_83, 1);
          {
            ATerm o_83 = NULL;
            if(((k_83 != NULL) && (k_83 != l_83)))
              _fail(l_83);
            else
              k_83 = l_83;
            {
              if(((o_83 != NULL) && (o_83 != m_83)))
                _fail(m_83);
              else
                o_83 = m_83;
              t = not_null(o_83);
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
ATerm while_not_2 (ATerm t, ATerm a_105 (ATerm), ATerm b_105 (ATerm))
{
  ATerm q_83 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_105(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        {
          t = b_105(t);
          t = q_83(t);
        }
      }
    return(t);
  }
  t = q_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm))
{
  t = d_105(t);
  t = while_not_2(t, e_105, f_105);
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
ATerm HdMember_p__2 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm))
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL;
  b_84 = t;
  a_84 :
  if(((ATgetType(b_84) == AT_LIST) && ((ATermList) b_84 != ATempty)))
    {
      c_84 = ATgetFirst((ATermList) b_84);
      d_84 = (ATerm) ATgetNext((ATermList) b_84);
      {
        t = i_107(t);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm g_84 = NULL;
            g_84 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_84), not_null(g_84));
              t = h_107(t);
            }
            return(t);
          }
          t = fetch_1(t, m_4);
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
ATerm diff_1 (ATerm t, ATerm m_107 (ATerm))
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
  m_84 = t;
  l_84 :
  if(match_cons(m_84, sym__2))
    {
      n_84 = ATgetArgument(m_84, 0);
      o_84 = ATgetArgument(m_84, 1);
      {
        t = not_null(n_84);
        {
          ATerm s_84 (ATerm t)
          {
            ATerm p_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(q_22);
              }
            else
              {
                t = p_22;
                {
                  ATerm b_23 = t;
                  int c_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_4 (ATerm t)
                      {
                        t = not_null(o_84);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_107, n_4);
                      t = s_84(t);
                      LocalPopChoice(c_23);
                    }
                  else
                    {
                      t = b_23;
                      t = Cons_2(t, _id, s_84);
                    }
                }
              }
            return(t);
          }
          t = s_84(t);
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
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm u_84 = NULL;
          u_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_84));
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_4 (ATerm t)
              {
                ATerm l_23 = t;
                int m_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(m_23);
                  }
                else
                  {
                    t = l_23;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, r_4);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, o_4, p_4, q_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_85 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_92(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_84 = NULL;
              ATerm t_23;
              t_23 = t;
              {
                ATerm z_84 = NULL;
                t = h_92(t);
                {
                  z_84 = t;
                  if(((y_84 != NULL) && (y_84 != z_84)))
                    _fail(z_84);
                  else
                    y_84 = z_84;
                }
              }
              t = t_23;
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    t = not_null(y_84);
                    return(t);
                  }
                  t = split_2(t, a_85, u_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm t_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_92(t, s_4, a_85, t_4);
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, v_4, union_0, _id);
                }
              }
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              {
                ATerm w_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, w_4, union_0, a_85);
              }
            }
        }
      }
    return(t);
  }
  t = a_85(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm u_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = u_23;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, x_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  q_85 = t;
  e_85 :
  if(match_cons(q_85, sym_LRule_1))
    {
      r_85 = ATgetArgument(q_85, 0);
      k_85 :
      if(match_cons(r_85, sym_Rule_3))
        {
          l_85 = ATgetArgument(r_85, 0);
          m_85 = ATgetArgument(r_85, 1);
          n_85 = ATgetArgument(r_85, 2);
          {
            t = not_null(l_85);
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
      if(match_cons(q_85, sym_Scope_2))
        {
          r_85 = ATgetArgument(q_85, 0);
          s_85 = ATgetArgument(q_85, 1);
          t = not_null(r_85);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm k_86 = NULL,l_86 = NULL;
  k_86 = t;
  i_86 :
  if(match_cons(k_86, sym_Var_1))
    {
      l_86 = ATgetArgument(k_86, 0);
      {
        ATerm b_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_86 = NULL,r_86 = NULL;
            ATerm p_86 = NULL;
            t = SSLgetAnnotations(not_null(k_86));
            {
              p_86 = t;
              if(((o_86 != NULL) && (o_86 != p_86)))
                _fail(p_86);
              else
                o_86 = p_86;
            }
            {
              t = not_null(l_86);
              {
                ATerm u_86 = NULL;
                t = w_0(t);
                {
                  r_86 = t;
                  {
                    ATerm w_86 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_86)), not_null(o_86));
                    {
                      w_86 = t;
                      if(((u_86 != NULL) && (u_86 != w_86)))
                        _fail(w_86);
                      else
                        u_86 = w_86;
                    }
                    t = not_null(u_86);
                  }
                }
              }
            }
            LocalPopChoice(e_24);
          }
        else
          {
            t = b_24;
            {
              ATerm z_86 = NULL,b_87 = NULL;
              ATerm a_87 = NULL;
              t = SSLgetAnnotations(not_null(k_86));
              {
                a_87 = t;
                if(((z_86 != NULL) && (z_86 != a_87)))
                  _fail(a_87);
                else
                  z_86 = a_87;
              }
              {
                t = not_null(l_86);
                {
                  ATerm d_87 = NULL;
                  t = w_0(t);
                  {
                    b_87 = t;
                    {
                      ATerm e_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_87)), not_null(z_86));
                      {
                        e_87 = t;
                        if(((d_87 != NULL) && (d_87 != e_87)))
                          _fail(e_87);
                        else
                          d_87 = e_87;
                      }
                      t = not_null(d_87);
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
ATerm DistBinding_2 (ATerm t, ATerm p_93 (ATerm), ATerm q_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_87 = NULL,a_88 = NULL,j_88 = NULL,k_88 = NULL;
  z_87 = t;
  y_87 :
  if(match_cons(z_87, sym__3))
    {
      a_88 = ATgetArgument(z_87, 0);
      j_88 = ATgetArgument(z_87, 1);
      k_88 = ATgetArgument(z_87, 2);
      {
        t = not_null(a_88);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm o_88 = NULL;
            o_88 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), not_null(k_88));
              t = p_93(t);
            }
            return(t);
          }
          ATerm z_4 (ATerm t)
          {
            ATerm q_88 = NULL;
            q_88 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_88), not_null(j_88));
              t = p_93(t);
            }
            return(t);
          }
          t = q_93(t, y_4, z_4, _id);
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
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL;
  x_88 = t;
  w_88 :
  if(match_cons(x_88, sym__2))
    {
      y_88 = ATgetArgument(x_88, 0);
      z_88 = ATgetArgument(x_88, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_88)), not_null(y_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL;
  p_89 = t;
  i_89 :
  if(match_cons(p_89, sym__2))
    {
      q_89 = ATgetArgument(p_89, 0);
      t_89 = ATgetArgument(p_89, 1);
      n_89 :
      if(((ATgetType(q_89) == AT_LIST) && ((ATermList) q_89 != ATempty)))
        {
          r_89 = ATgetFirst((ATermList) q_89);
          s_89 = (ATerm) ATgetNext((ATermList) q_89);
          o_89 :
          if(((ATgetType(t_89) == AT_LIST) && ((ATermList) t_89 != ATempty)))
            {
              u_89 = ATgetFirst((ATermList) t_89);
              v_89 = (ATerm) ATgetNext((ATermList) t_89);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_89), not_null(u_89)), (ATerm) ATmakeAppl(sym__2, not_null(s_89), not_null(v_89)));
            }
          else
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
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL;
  f_90 = t;
  c_90 :
  if(match_cons(f_90, sym__2))
    {
      g_90 = ATgetArgument(f_90, 0);
      h_90 = ATgetArgument(f_90, 1);
      d_90 :
      if(((ATermList) g_90 == ATempty))
        {
          e_90 :
          if(((ATermList) h_90 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm))
{
  ATerm l_90 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          t = d_110(t);
          {
            t = _2(t, f_110, l_90);
            t = e_110(t);
          }
        }
      }
    return(t);
  }
  t = l_90(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_110 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_110);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm v_93 (ATerm), ATerm w_93 (ATerm, ATerm (ATerm)))
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  s_90 :
  if(match_cons(t_90, sym__2))
    {
      u_90 = ATgetArgument(t_90, 0);
      v_90 = ATgetArgument(t_90, 1);
      {
        ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL,o_91 = NULL;
        ATerm n_24;
        n_24 = t;
        {
          ATerm j_91 = NULL;
          t = not_null(u_90);
          {
            ATerm k_91 = NULL;
            t = v_93(t);
            {
              j_91 = t;
              {
                if(((y_90 != NULL) && (y_90 != j_91)))
                  _fail(j_91);
                else
                  y_90 = j_91;
                {
                  ATerm l_91 = NULL,n_91 = NULL;
                  t = map_1(t, new_0);
                  {
                    k_91 = t;
                    {
                      if(((z_90 != NULL) && (z_90 != k_91)))
                        _fail(k_91);
                      else
                        z_90 = k_91;
                      {
                        ATerm m_91 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_90), not_null(z_90));
                        {
                          t = zip_1(t, _id);
                          {
                            m_91 = t;
                            if(((l_91 != NULL) && (l_91 != m_91)))
                              _fail(m_91);
                            else
                              l_91 = m_91;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_91), not_null(v_90));
                          {
                            t = conc_0(t);
                            {
                              n_91 = t;
                              if(((a_91 != NULL) && (a_91 != n_91)))
                                _fail(n_91);
                              else
                                a_91 = n_91;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = n_24;
        {
          ATerm p_91 = NULL;
          t = not_null(u_90);
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(z_90);
              return(t);
            }
            t = w_93(t, a_5);
            {
              p_91 = t;
              if(((o_91 != NULL) && (o_91 != p_91)))
                _fail(p_91);
              else
                o_91 = p_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(o_91), not_null(v_90), not_null(a_91));
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
  ATerm z_91 = NULL,a_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  z_91 = t;
  x_91 :
  if(match_cons(z_91, sym__2))
    {
      a_92 = ATgetArgument(z_91, 0);
      d_92 = ATgetArgument(z_91, 1);
      y_91 :
      if(((ATgetType(d_92) == AT_LIST) && ((ATermList) d_92 != ATempty)))
        {
          e_92 = ATgetFirst((ATermList) d_92);
          f_92 = (ATerm) ATgetNext((ATermList) d_92);
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_92), not_null(f_92));
        }
      else
        {
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
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL;
  r_92 = t;
  o_92 :
  if(match_cons(r_92, sym__2))
    {
      s_92 = ATgetArgument(r_92, 0);
      t_92 = ATgetArgument(r_92, 1);
      p_92 :
      if(((ATgetType(t_92) == AT_LIST) && ((ATermList) t_92 != ATempty)))
        {
          u_92 = ATgetFirst((ATermList) t_92);
          x_92 = (ATerm) ATgetNext((ATermList) t_92);
          q_92 :
          if(match_cons(u_92, sym__2))
            {
              v_92 = ATgetArgument(u_92, 0);
              w_92 = ATgetArgument(u_92, 1);
              {
                ATerm z_92 = NULL;
                if(((s_92 != NULL) && (s_92 != v_92)))
                  _fail(v_92);
                else
                  s_92 = v_92;
                {
                  if(((z_92 != NULL) && (z_92 != w_92)))
                    _fail(w_92);
                  else
                    z_92 = w_92;
                  t = not_null(z_92);
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
  ATerm o_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = o_24;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm j_93 (ATerm, ATerm (ATerm)))
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL;
  e_93 = t;
  d_93 :
  if(match_cons(e_93, sym__2))
    {
      f_93 = ATgetArgument(e_93, 0);
      g_93 = ATgetArgument(e_93, 1);
      {
        t = not_null(f_93);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(g_93);
              return(t);
            }
            t = split_2(t, _id, c_5);
            t = lookup_0(t);
            return(t);
          }
          t = j_93(t, b_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm m_101 (ATerm))
{
  ATerm o_93 = NULL,r_93 = NULL,s_93 = NULL;
  o_93 = t;
  n_93 :
  if(match_cons(o_93, sym__2))
    {
      r_93 = ATgetArgument(o_93, 0);
      s_93 = ATgetArgument(o_93, 1);
      {
        t = not_null(r_93);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm h_94 = NULL;
            h_94 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_94), not_null(s_93));
              t = m_101(t);
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
ATerm env_alltd_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm l_94 (ATerm t)
  {
    ATerm y_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_101(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = y_24;
        t = all_dist_1(t, l_94);
      }
    return(t);
  }
  t = l_94(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm x_93 (ATerm, ATerm (ATerm)), ATerm y_93 (ATerm), ATerm z_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_94 (ATerm, ATerm (ATerm)))
{
  ATerm n_94 = NULL;
  n_94 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_94), (ATerm) ATempty);
    {
      ATerm q_94 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, x_93);
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              {
                t = RnBinding_2(t, y_93, a_94);
                t = DistBinding_2(t, q_94, z_93);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_5);
        return(t);
      }
      t = q_94(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm r_94 (ATerm t, ATerm s_94 (ATerm))
  {
    t = Scope_2(t, s_94, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, r_94);
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
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
  v_94 = t;
  u_94 :
  if(((ATgetType(v_94) == AT_LIST) && ((ATermList) v_94 != ATempty)))
    {
      w_94 = ATgetFirst((ATermList) v_94);
      x_94 = (ATerm) ATgetNext((ATermList) v_94);
      t = not_null(w_94);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL;
  d_95 = t;
  c_95 :
  if(match_cons(d_95, sym__2))
    {
      e_95 = ATgetArgument(d_95, 0);
      f_95 = ATgetArgument(d_95, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_95), not_null(f_95));
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
ATerm rewrite_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm l_95 = NULL;
  ATerm n_95 = NULL;
  l_95 = t;
  {
    ATerm o_95 = NULL;
    t = term_f_25;
    {
      t = z_99(t);
      {
        o_95 = t;
        if(((n_95 != NULL) && (n_95 != o_95)))
          _fail(o_95);
        else
          n_95 = o_95;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_95), not_null(l_95));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL;
  i_96 = t;
  g_96 :
  if(match_cons(i_96, sym_Call_2))
    {
      j_96 = ATgetArgument(i_96, 0);
      l_96 = ATgetArgument(i_96, 1);
      h_96 :
      if(match_cons(j_96, sym_SVar_1))
        {
          k_96 = ATgetArgument(j_96, 0);
          {
            ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,c_97 = NULL;
            ATerm k_25;
            k_25 = t;
            {
              ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,x_96 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(k_96));
              {
                ATerm f_5 (ATerm t)
                {
                  t = term_l_25;
                  return(t);
                }
                t = rewrite_1(t, f_5);
                {
                  s_96 = t;
                  v_95 :
                  if(match_cons(s_96, sym_Defined_4))
                    {
                      t_96 = ATgetArgument(s_96, 0);
                      u_96 = ATgetArgument(s_96, 1);
                      v_96 = ATgetArgument(s_96, 2);
                      x_96 = ATgetArgument(s_96, 3);
                      w_95 :
                      if(match_string(t_96, "i_0"))
                        {
                          ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL;
                          if(((k_96 != NULL) && (k_96 != u_96)))
                            _fail(u_96);
                          else
                            k_96 = u_96;
                          {
                            if(((o_96 != NULL) && (o_96 != v_96)))
                              _fail(v_96);
                            else
                              o_96 = v_96;
                            {
                              if(((p_96 != NULL) && (p_96 != x_96)))
                                _fail(x_96);
                              else
                                p_96 = x_96;
                              {
                                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_96), not_null(o_96), not_null(p_96));
                                {
                                  t = strename_0(t);
                                  {
                                    y_96 = t;
                                    u_95 :
                                    if(match_cons(y_96, sym_SDef_3))
                                      {
                                        z_96 = ATgetArgument(y_96, 0);
                                        a_97 = ATgetArgument(y_96, 1);
                                        b_97 = ATgetArgument(y_96, 2);
                                        {
                                          if(((k_96 != NULL) && (k_96 != z_96)))
                                            _fail(z_96);
                                          else
                                            k_96 = z_96;
                                          {
                                            if(((q_96 != NULL) && (q_96 != a_97)))
                                              _fail(a_97);
                                            else
                                              q_96 = a_97;
                                            if(((r_96 != NULL) && (r_96 != b_97)))
                                              _fail(b_97);
                                            else
                                              r_96 = b_97;
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
                      else
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
            t = k_25;
            {
              ATerm h_97 = NULL;
              t = not_null(o_96);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL;
                  d_97 = t;
                  e_96 :
                  if(match_cons(d_97, sym_VarDec_2))
                    {
                      e_97 = ATgetArgument(d_97, 0);
                      f_97 = ATgetArgument(d_97, 1);
                      t = not_null(e_97);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  h_97 = t;
                  if(((c_97 != NULL) && (c_97 != h_97)))
                    _fail(h_97);
                  else
                    c_97 = h_97;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_97), not_null(l_96), not_null(r_96));
                t = ssubs_0(t);
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
  ATerm e_98 = NULL;
  ATerm m_25;
  m_25 = t;
  {
    ATerm f_98 = NULL;
    t = new_0(t);
    {
      f_98 = t;
      {
        if(((e_98 != NULL) && (e_98 != f_98)))
          _fail(f_98);
        else
          e_98 = f_98;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_q_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_98)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = term_r_25;
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
            ATerm w_25 = t;
            int x_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL,k_98 = NULL,m_98 = NULL,n_98 = NULL;
                g_98 = t;
                v_97 :
                if(match_cons(g_98, sym_LChoice_2))
                  {
                    h_98 = ATgetArgument(g_98, 0);
                    n_98 = ATgetArgument(g_98, 1);
                    w_97 :
                    if(match_cons(h_98, sym_Call_2))
                      {
                        i_98 = ATgetArgument(h_98, 0);
                        m_98 = ATgetArgument(h_98, 1);
                        b_98 :
                        if(match_cons(i_98, sym_SVar_1))
                          {
                            k_98 = ATgetArgument(i_98, 0);
                            c_98 :
                            if(((ATermList) m_98 == ATempty))
                              {
                                d_98 :
                                if(match_cons(n_98, sym_Id_0))
                                  {
                                    if(((e_98 != NULL) && (e_98 != k_98)))
                                      _fail(k_98);
                                    else
                                      e_98 = k_98;
                                  }
                                else
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
                LocalPopChoice(x_25);
              }
            else
              {
                t = w_25;
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm k_5 (ATerm t)
                    {
                      t = term_y_25;
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
                  t = term_c_26;
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
  t = m_25;
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
ATerm assert_1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL;
  v_98 = t;
  u_98 :
  if(match_cons(v_98, sym__2))
    {
      w_98 = ATgetArgument(v_98, 0);
      x_98 = ATgetArgument(v_98, 1);
      {
        ATerm a_99 = NULL,d_99 = NULL,e_99 = NULL;
        ATerm e_26;
        e_26 = t;
        {
          ATerm f_99 = NULL;
          ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
          t = x_99(t);
          {
            f_99 = t;
            {
              if(((a_99 != NULL) && (a_99 != f_99)))
                _fail(f_99);
              else
                a_99 = f_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_99), not_null(w_98), not_null(x_98));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_26 = t;
                    int i_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_99), term_h_16);
                        t = table_get_0(t);
                        LocalPopChoice(i_26);
                      }
                    else
                      {
                        t = h_26;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_99 = t;
                      t_98 :
                      if(((ATgetType(g_99) == AT_LIST) && ((ATermList) g_99 != ATempty)))
                        {
                          h_99 = ATgetFirst((ATermList) g_99);
                          i_99 = (ATerm) ATgetNext((ATermList) g_99);
                          {
                            if(((d_99 != NULL) && (d_99 != h_99)))
                              _fail(h_99);
                            else
                              d_99 = h_99;
                            {
                              if(((e_99 != NULL) && (e_99 != i_99)))
                                _fail(i_99);
                              else
                                e_99 = i_99;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_99), term_h_16, (ATerm) ATinsert(CheckATermList(not_null(e_99)), (ATerm) ATinsert(CheckATermList(not_null(d_99)), not_null(w_98))));
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
        t = e_26;
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
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
  o_99 = t;
  n_99 :
  if(match_cons(o_99, sym_SDef_3))
    {
      p_99 = ATgetArgument(o_99, 0);
      q_99 = ATgetArgument(o_99, 1);
      r_99 = ATgetArgument(o_99, 2);
      {
        ATerm j_26;
        j_26 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_99)), (ATerm) ATmakeAppl(sym_Defined_4, term_k_26, not_null(p_99), not_null(q_99), not_null(r_99)));
          {
            ATerm n_5 (ATerm t)
            {
              t = term_l_25;
              return(t);
            }
            t = assert_1(t, n_5);
          }
        }
        t = j_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm h_100 = NULL,i_100 = NULL;
  h_100 = t;
  g_100 :
  if(match_cons(h_100, sym_Strategies_1))
    {
      i_100 = ATgetArgument(h_100, 0);
      {
        ATerm l_100 = NULL,n_100 = NULL;
        ATerm m_100 = NULL;
        t = SSLgetAnnotations(not_null(h_100));
        {
          m_100 = t;
          if(((l_100 != NULL) && (l_100 != m_100)))
            _fail(m_100);
          else
            l_100 = m_100;
        }
        {
          t = not_null(i_100);
          {
            ATerm p_100 = NULL;
            t = t_86(t);
            {
              n_100 = t;
              {
                ATerm q_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(n_100)), not_null(l_100));
                {
                  q_100 = t;
                  if(((p_100 != NULL) && (p_100 != q_100)))
                    _fail(q_100);
                  else
                    p_100 = q_100;
                }
                t = not_null(p_100);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm a_101 = NULL,b_101 = NULL;
  a_101 = t;
  z_100 :
  if(match_cons(a_101, sym_Signature_1))
    {
      b_101 = ATgetArgument(a_101, 0);
      {
        ATerm e_101 = NULL,g_101 = NULL;
        ATerm f_101 = NULL;
        t = SSLgetAnnotations(not_null(a_101));
        {
          f_101 = t;
          if(((e_101 != NULL) && (e_101 != f_101)))
            _fail(f_101);
          else
            e_101 = f_101;
        }
        {
          t = not_null(b_101);
          {
            ATerm i_101 = NULL;
            t = q_86(t);
            {
              g_101 = t;
              {
                ATerm j_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(g_101)), not_null(e_101));
                {
                  j_101 = t;
                  if(((i_101 != NULL) && (i_101 != j_101)))
                    _fail(j_101);
                  else
                    i_101 = j_101;
                }
                t = not_null(i_101);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm w_101 = NULL,x_101 = NULL;
  w_101 = t;
  v_101 :
  if(match_cons(w_101, sym_Specification_1))
    {
      x_101 = ATgetArgument(w_101, 0);
      {
        ATerm a_102 = NULL,c_102 = NULL;
        ATerm b_102 = NULL;
        t = SSLgetAnnotations(not_null(w_101));
        {
          b_102 = t;
          if(((a_102 != NULL) && (a_102 != b_102)))
            _fail(b_102);
          else
            a_102 = b_102;
        }
        {
          t = not_null(x_101);
          {
            ATerm e_102 = NULL;
            t = v_86(t);
            {
              c_102 = t;
              {
                ATerm f_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(c_102)), not_null(a_102));
                {
                  f_102 = t;
                  if(((e_102 != NULL) && (e_102 != f_102)))
                    _fail(f_102);
                  else
                    e_102 = f_102;
                }
                t = not_null(e_102);
              }
            }
          }
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
ATerm _2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL;
  s_102 = t;
  r_102 :
  if(match_cons(s_102, sym__2))
    {
      t_102 = ATgetArgument(s_102, 0);
      u_102 = ATgetArgument(s_102, 1);
      {
        ATerm y_102 = NULL,a_103 = NULL;
        ATerm z_102 = NULL;
        t = SSLgetAnnotations(not_null(s_102));
        {
          z_102 = t;
          if(((y_102 != NULL) && (y_102 != z_102)))
            _fail(z_102);
          else
            y_102 = z_102;
        }
        {
          t = not_null(t_102);
          {
            ATerm c_103 = NULL;
            t = m_77(t);
            {
              a_103 = t;
              {
                t = not_null(u_102);
                {
                  ATerm e_103 = NULL;
                  t = n_77(t);
                  {
                    c_103 = t;
                    {
                      ATerm f_103 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_103), not_null(c_103)), not_null(y_102));
                      {
                        f_103 = t;
                        if(((e_103 != NULL) && (e_103 != f_103)))
                          _fail(f_103);
                        else
                          e_103 = f_103;
                      }
                      t = not_null(e_103);
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
  ATerm n_103 = NULL;
  ATerm l_26;
  l_26 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm o_103 = NULL,p_103 = NULL;
      o_103 = t;
      m_103 :
      if(match_cons(o_103, sym_Program_1))
        {
          p_103 = ATgetArgument(o_103, 0);
          if(((n_103 != NULL) && (n_103 != p_103)))
            _fail(p_103);
          else
            n_103 = p_103;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_26), not_null(n_103)), term_m_26));
      {
        t = printnl_0(t);
        {
          t = term_o_26;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_26;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL,v_103 = NULL;
  t_103 = t;
  s_103 :
  if(match_cons(t_103, sym__2))
    {
      u_103 = ATgetArgument(t_103, 0);
      v_103 = ATgetArgument(t_103, 1);
      {
        ATerm p_26;
        p_26 = t;
        t = SSL_printnl(not_null(u_103), not_null(v_103));
        t = p_26;
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
  ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL;
  b_104 = t;
  a_104 :
  if(match_cons(b_104, sym__2))
    {
      c_104 = ATgetArgument(b_104, 0);
      d_104 = ATgetArgument(b_104, 1);
      {
        t = not_null(c_104);
        {
          ATerm u_5 (ATerm t)
          {
            t = not_null(d_104);
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
ATerm debug_1 (ATerm t, ATerm b_99 (ATerm))
{
  ATerm q_26;
  q_26 = t;
  {
    ATerm n_104 = NULL,p_104 = NULL;
    ATerm r_26;
    r_26 = t;
    {
      ATerm o_104 = NULL;
      t = b_99(t);
      {
        o_104 = t;
        if(((n_104 != NULL) && (n_104 != o_104)))
          _fail(o_104);
        else
          n_104 = o_104;
      }
    }
    t = r_26;
    {
      ATerm q_104 = NULL;
      q_104 = t;
      if(((p_104 != NULL) && (p_104 != q_104)))
        _fail(q_104);
      else
        p_104 = q_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_104)), not_null(n_104)));
        t = printnl_0(t);
      }
    }
  }
  t = q_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_104 = NULL;
  u_104 = t;
  t = SSL_is_string(not_null(u_104));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_5);
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL;
              j_105 = t;
              i_105 :
              if(match_cons(j_105, sym_Path_1))
                {
                  k_105 = ATgetArgument(j_105, 0);
                  t = not_null(k_105);
                }
              else
                {
                  if(match_cons(j_105, sym_Var_1))
                    {
                      k_105 = ATgetArgument(j_105, 0);
                      {
                        t = not_null(k_105);
                        {
                          ATerm e_27 = t;
                          int g_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_27);
                            }
                          else
                            {
                              t = e_27;
                              {
                                ATerm w_5 (ATerm t)
                                {
                                  t = term_i_27;
                                  return(t);
                                }
                                t = debug_1(t, w_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_105, sym_Prefix_2))
                        {
                          k_105 = ATgetArgument(j_105, 0);
                          l_105 = ATgetArgument(j_105, 1);
                          {
                            ATerm q_105 = NULL,s_105 = NULL;
                            ATerm l_27;
                            l_27 = t;
                            {
                              ATerm r_105 = NULL;
                              t = not_null(k_105);
                              {
                                t = eval_config_0(t);
                                {
                                  r_105 = t;
                                  if(((q_105 != NULL) && (q_105 != r_105)))
                                    _fail(r_105);
                                  else
                                    q_105 = r_105;
                                }
                              }
                            }
                            t = l_27;
                            {
                              ATerm t_105 = NULL;
                              t = not_null(l_105);
                              {
                                t = eval_config_0(t);
                                {
                                  t_105 = t;
                                  if(((s_105 != NULL) && (s_105 != t_105)))
                                    _fail(t_105);
                                  else
                                    s_105 = t_105;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_105), not_null(s_105));
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
  ATerm g_106 = NULL;
  g_106 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_27, not_null(g_106));
    {
      t = table_get_0(t);
      {
        ATerm x_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm n_27;
            n_27 = t;
            {
              ATerm i_106 = NULL;
              ATerm j_106 = NULL;
              j_106 = t;
              if(((i_106 != NULL) && (i_106 != j_106)))
                _fail(j_106);
              else
                i_106 = j_106;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_27, not_null(g_106), not_null(i_106));
                t = table_put_0(t);
              }
            }
            t = n_27;
          }
          return(t);
        }
        t = try_1(t, x_5);
      }
    }
  }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, term_o_27));
  {
    t = printnl_0(t);
    {
      t = term_o_26;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_106 = NULL;
  n_106 = t;
  t = SSL_TicksToSeconds(not_null(n_106));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  s_106 = t;
  r_106 :
  if(match_cons(s_106, sym__2))
    {
      t_106 = ATgetArgument(s_106, 0);
      u_106 = ATgetArgument(s_106, 1);
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_106), not_null(u_106));
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            t = SSL_addr(not_null(t_106), not_null(u_106));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_106 (ATerm), ATerm b_106 (ATerm))
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_106(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL;
        c_107 = t;
        a_107 :
        if(((ATgetType(c_107) == AT_LIST) && ((ATermList) c_107 != ATempty)))
          {
            d_107 = ATgetFirst((ATermList) c_107);
            e_107 = (ATerm) ATgetNext((ATermList) c_107);
            {
              ATerm l_107 = NULL;
              ATerm o_107 = NULL;
              t = not_null(e_107);
              {
                t = foldr_2(t, a_106, b_106);
                {
                  o_107 = t;
                  if(((l_107 != NULL) && (l_107 != o_107)))
                    _fail(o_107);
                  else
                    l_107 = o_107;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_107), not_null(l_107));
                t = b_106(t);
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
ATerm crush_2 (ATerm t, ATerm s_107 (ATerm), ATerm t_107 (ATerm))
{
  ATerm a_108 = NULL;
  ATerm c_108 = NULL;
  a_108 = t;
  {
    ATerm d_108 = NULL;
    ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL;
    t = not_null(a_108);
    {
      d_108 = t;
      {
        t = SSL_explode_term(not_null(d_108));
        {
          f_108 = t;
          z_107 :
          if(match_cons(f_108, sym__2))
            {
              g_108 = ATgetArgument(f_108, 0);
              h_108 = ATgetArgument(f_108, 1);
              if(((c_108 != NULL) && (c_108 != h_108)))
                _fail(h_108);
              else
                c_108 = h_108;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_108);
      t = foldr_2(t, s_107, t_107);
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
    ATerm y_5 (ATerm t)
    {
      t = term_a_28;
      return(t);
    }
    t = crush_2(t, y_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_108 = NULL,o_108 = NULL,p_108 = NULL;
  n_108 = t;
  m_108 :
  if(match_cons(n_108, sym__2))
    {
      o_108 = ATgetArgument(n_108, 0);
      p_108 = ATgetArgument(n_108, 1);
      {
        ATerm b_28;
        b_28 = t;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_108), not_null(p_108));
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              t = SSL_gtr(not_null(o_108), not_null(p_108));
            }
        }
        t = b_28;
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
  ATerm v_108 = NULL;
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_108 = NULL,x_108 = NULL,y_108 = NULL;
      w_108 = t;
      u_108 :
      if(match_cons(w_108, sym__2))
        {
          x_108 = ATgetArgument(w_108, 0);
          y_108 = ATgetArgument(w_108, 1);
          {
            if(((v_108 != NULL) && (v_108 != x_108)))
              _fail(x_108);
            else
              v_108 = x_108;
            if(((v_108 != NULL) && (v_108 != y_108)))
              _fail(y_108);
            else
              v_108 = y_108;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm g_28;
    g_28 = t;
    {
      ATerm b_109 = NULL;
      ATerm c_109 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          c_109 = t;
          if(((b_109 != NULL) && (b_109 != c_109)))
            _fail(c_109);
          else
            b_109 = c_109;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), term_o_26);
        t = geq_0(t);
      }
    }
    t = g_28;
    t = j_90(t);
    return(t);
  }
  t = try_1(t, z_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm g_109 = NULL,i_109 = NULL;
    ATerm h_28;
    h_28 = t;
    {
      ATerm h_109 = NULL;
      t = run_time_0(t);
      {
        h_109 = t;
        if(((g_109 != NULL) && (g_109 != h_109)))
          _fail(h_109);
        else
          g_109 = h_109;
      }
    }
    t = h_28;
    {
      ATerm j_109 = NULL;
      t = term_j_28;
      {
        t = get_config_0(t);
        {
          j_109 = t;
          if(((i_109 != NULL) && (i_109 != j_109)))
            _fail(j_109);
          else
            i_109 = j_109;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_28), not_null(g_109)), term_k_28), not_null(i_109)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_6);
  {
    t = term_a_28;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL,q_109 = NULL;
  o_109 = t;
  n_109 :
  if(match_cons(o_109, sym__2))
    {
      p_109 = ATgetArgument(o_109, 0);
      q_109 = ATgetArgument(o_109, 1);
      t = SSL_WriteToTextFile(not_null(p_109), not_null(q_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL;
  w_109 = t;
  v_109 :
  if(match_cons(w_109, sym__2))
    {
      x_109 = ATgetArgument(w_109, 0);
      y_109 = ATgetArgument(w_109, 1);
      t = SSL_WriteToBinaryFile(not_null(x_109), not_null(y_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_110 = NULL;
  ATerm o_28;
  o_28 = t;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm p_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            ATerm o_110 = NULL,p_110 = NULL;
            o_110 = t;
            j_110 :
            if(match_cons(o_110, sym_Output_1))
              {
                p_110 = ATgetArgument(o_110, 0);
                if(((n_110 != NULL) && (n_110 != p_110)))
                  _fail(p_110);
                else
                  n_110 = p_110;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, c_6);
          LocalPopChoice(u_28);
        }
      else
        {
          t = p_28;
          {
            ATerm q_110 = NULL;
            t = term_c_29;
            {
              q_110 = t;
              if(((n_110 != NULL) && (n_110 != q_110)))
                _fail(q_110);
              else
                n_110 = q_110;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_6, _id);
  }
  t = o_28;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        t = not_null(n_110);
        return(t);
      }
      t = split_2(t, e_6, _id);
      return(t);
    }
    t = _2(t, _id, d_6);
    {
      ATerm d_29 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
          {
            ATerm g_6 (ATerm t)
            {
              ATerm r_110 = NULL;
              r_110 = t;
              l_110 :
              if(!(match_cons(r_110, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, g_6);
            return(t);
          }
          t = _2(t, f_6, WriteToBinaryFile_0);
          LocalPopChoice(e_29);
        }
      else
        {
          t = d_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm l_98 (ATerm))
{
  ATerm x_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL;
  ATerm c_30;
  c_30 = t;
  t = dtime_0(t);
  t = c_30;
  {
    t = l_98(t);
    {
      ATerm d_30;
      d_30 = t;
      {
        ATerm y_110 = NULL;
        t = dtime_0(t);
        {
          y_110 = t;
          if(((x_110 != NULL) && (x_110 != y_110)))
            _fail(y_110);
          else
            x_110 = y_110;
        }
      }
      t = d_30;
      {
        z_110 = t;
        w_110 :
        if(match_cons(z_110, sym__2))
          {
            a_111 = ATgetArgument(z_110, 0);
            b_111 = ATgetArgument(z_110, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_111)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_110))), not_null(b_111));
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
  ATerm h_111 = NULL;
  h_111 = t;
  t = SSL_ReadFromFile(not_null(h_111));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_113 (ATerm), ATerm m_113 (ATerm))
{
  ATerm m_111 = NULL,o_111 = NULL;
  ATerm e_30;
  e_30 = t;
  {
    ATerm n_111 = NULL;
    t = l_113(t);
    {
      n_111 = t;
      if(((m_111 != NULL) && (m_111 != n_111)))
        _fail(n_111);
      else
        m_111 = n_111;
    }
  }
  t = e_30;
  {
    ATerm r_111 = NULL;
    t = m_113(t);
    {
      r_111 = t;
      if(((o_111 != NULL) && (o_111 != r_111)))
        _fail(r_111);
      else
        o_111 = r_111;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_111), not_null(o_111));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_111 = NULL;
  ATerm f_30;
  f_30 = t;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 (ATerm t)
        {
          ATerm a_112 = NULL,b_112 = NULL;
          a_112 = t;
          v_111 :
          if(match_cons(a_112, sym_Input_1))
            {
              b_112 = ATgetArgument(a_112, 0);
              if(((x_111 != NULL) && (x_111 != b_112)))
                _fail(b_112);
              else
                x_111 = b_112;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_6);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm c_112 = NULL;
          t = term_i_30;
          {
            c_112 = t;
            if(((x_111 != NULL) && (x_111 != c_112)))
              _fail(c_112);
            else
              x_111 = c_112;
          }
        }
      }
  }
  t = f_30;
  {
    ATerm i_6 (ATerm t)
    {
      t = not_null(x_111);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_112 = NULL;
  l_112 = t;
  k_112 :
  if(match_cons(l_112, sym_Version_0))
    {
      ATerm n_112 = NULL,p_112 = NULL;
      ATerm j_30;
      j_30 = t;
      {
        ATerm o_112 = NULL;
        t = SSLgetAnnotations(not_null(l_112));
        {
          o_112 = t;
          if(((n_112 != NULL) && (n_112 != o_112)))
            _fail(o_112);
          else
            n_112 = o_112;
        }
      }
      t = j_30;
      {
        ATerm q_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_112));
        {
          q_112 = t;
          if(((p_112 != NULL) && (p_112 != q_112)))
            _fail(q_112);
          else
            p_112 = q_112;
        }
        t = not_null(p_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          ATerm m_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_30);
            }
          else
            {
              t = m_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_6);
  t = j_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_112 = NULL;
  v_112 = t;
  t = SSL_table_create(not_null(v_112));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_112 = NULL;
  z_112 = t;
  {
    ATerm o_30;
    o_30 = t;
    {
      t = term_p_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, not_null(z_112));
          t = table_put_0(t);
        }
      }
    }
    t = o_30;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_113 = NULL;
  d_113 = t;
  t = SSL_string_to_int(not_null(d_113));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL;
  o_113 = t;
  k_113 :
  if(match_string(o_113, "register-usage-info"))
    {
      t = register_usage_1(t, v_0);
    }
  else
    {
      if(((ATgetType(o_113) == AT_LIST) && ((ATermList) o_113 != ATempty)))
        {
          p_113 = ATgetFirst((ATermList) o_113);
          q_113 = (ATerm) ATgetNext((ATermList) o_113);
          n_113 :
          if(((ATgetType(q_113) == AT_LIST) && ((ATermList) q_113 != ATempty)))
            {
              r_113 = ATgetFirst((ATermList) q_113);
              s_113 = (ATerm) ATgetNext((ATermList) q_113);
              {
                ATerm w_113 = NULL;
                ATerm r_30;
                r_30 = t;
                {
                  t = not_null(p_113);
                  t = t_0(t);
                }
                t = r_30;
                {
                  ATerm x_113 = NULL;
                  t = not_null(r_113);
                  {
                    t = u_0(t);
                    {
                      x_113 = t;
                      if(((w_113 != NULL) && (w_113 != x_113)))
                        _fail(x_113);
                      else
                        w_113 = x_113;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_113)), not_null(w_113));
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
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 (ATerm t)
      {
        ATerm p_114 = NULL;
        p_114 = t;
        b_114 :
        if(!(match_string(p_114, "-i")))
          {
            if(!(match_string(p_114, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        ATerm w_114 = NULL;
        ATerm u_30;
        u_30 = t;
        {
          ATerm u_114 = NULL;
          ATerm v_114 = NULL;
          v_114 = t;
          if(((u_114 != NULL) && (u_114 != v_114)))
            _fail(v_114);
          else
            u_114 = v_114;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_30, not_null(u_114));
            t = set_config_0(t);
          }
        }
        t = u_30;
        {
          ATerm x_114 = NULL;
          x_114 = t;
          if(((w_114 != NULL) && (w_114 != x_114)))
            _fail(x_114);
          else
            w_114 = x_114;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_114));
        }
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        t = term_w_30;
        return(t);
      }
      t = ArgOption_3(t, m_6, n_6, o_6);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              ATerm y_114 = NULL;
              y_114 = t;
              f_114 :
              if(!(match_string(y_114, "-o")))
                {
                  if(!(match_string(y_114, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_6 (ATerm t)
            {
              ATerm b_115 = NULL;
              ATerm z_30;
              z_30 = t;
              {
                ATerm z_114 = NULL;
                ATerm a_115 = NULL;
                a_115 = t;
                if(((z_114 != NULL) && (z_114 != a_115)))
                  _fail(a_115);
                else
                  z_114 = a_115;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_31, not_null(z_114));
                  t = set_config_0(t);
                }
              }
              t = z_30;
              {
                ATerm c_115 = NULL;
                c_115 = t;
                if(((b_115 != NULL) && (b_115 != c_115)))
                  _fail(c_115);
                else
                  b_115 = c_115;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_115));
              }
              return(t);
            }
            ATerm r_6 (ATerm t)
            {
              t = term_b_31;
              return(t);
            }
            t = ArgOption_3(t, p_6, q_6, r_6);
            LocalPopChoice(y_30);
          }
        else
          {
            t = x_30;
            {
              ATerm c_31 = t;
              int d_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_6 (ATerm t)
                  {
                    ATerm d_115 = NULL;
                    d_115 = t;
                    i_114 :
                    if(!(match_string(d_115, "-S")))
                      {
                        if(!(match_string(d_115, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_6 (ATerm t)
                  {
                    t = term_e_31;
                    t = set_config_0(t);
                    t = term_f_31;
                    return(t);
                  }
                  ATerm u_6 (ATerm t)
                  {
                    t = term_g_31;
                    return(t);
                  }
                  t = Option_3(t, s_6, t_6, u_6);
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
                        ATerm v_6 (ATerm t)
                        {
                          ATerm e_115 = NULL;
                          e_115 = t;
                          j_114 :
                          if(!(match_string(e_115, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_6 (ATerm t)
                        {
                          ATerm h_115 = NULL;
                          ATerm j_31;
                          j_31 = t;
                          {
                            ATerm f_115 = NULL;
                            ATerm g_115 = NULL;
                            t = string_to_int_0(t);
                            {
                              g_115 = t;
                              if(((f_115 != NULL) && (f_115 != g_115)))
                                _fail(g_115);
                              else
                                f_115 = g_115;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(f_115));
                              t = set_config_0(t);
                            }
                          }
                          t = j_31;
                          {
                            ATerm i_115 = NULL;
                            i_115 = t;
                            if(((h_115 != NULL) && (h_115 != i_115)))
                              _fail(i_115);
                            else
                              h_115 = i_115;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_115));
                          }
                          return(t);
                        }
                        ATerm x_6 (ATerm t)
                        {
                          t = term_k_31;
                          return(t);
                        }
                        t = ArgOption_3(t, v_6, w_6, x_6);
                        LocalPopChoice(i_31);
                      }
                    else
                      {
                        t = h_31;
                        {
                          ATerm o_31 = t;
                          int p_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_6 (ATerm t)
                              {
                                ATerm j_115 = NULL;
                                j_115 = t;
                                m_114 :
                                if(!(match_string(j_115, "-v")))
                                  {
                                    if(!(match_string(j_115, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm z_6 (ATerm t)
                              {
                                t = term_r_31;
                                t = set_config_0(t);
                                t = term_s_31;
                                return(t);
                              }
                              ATerm c_7 (ATerm t)
                              {
                                t = term_t_31;
                                return(t);
                              }
                              t = Option_3(t, y_6, z_6, c_7);
                              LocalPopChoice(p_31);
                            }
                          else
                            {
                              t = o_31;
                              {
                                ATerm u_32 = t;
                                int v_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_7 (ATerm t)
                                    {
                                      ATerm k_115 = NULL;
                                      k_115 = t;
                                      n_114 :
                                      if(!(match_string(k_115, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm e_7 (ATerm t)
                                    {
                                      t = term_g_33;
                                      t = set_config_0(t);
                                      t = term_h_33;
                                      return(t);
                                    }
                                    ATerm f_7 (ATerm t)
                                    {
                                      t = term_i_33;
                                      return(t);
                                    }
                                    t = Option_3(t, d_7, e_7, f_7);
                                    LocalPopChoice(v_32);
                                  }
                                else
                                  {
                                    t = u_32;
                                    {
                                      ATerm g_7 (ATerm t)
                                      {
                                        ATerm l_115 = NULL;
                                        l_115 = t;
                                        o_114 :
                                        if(!(match_string(l_115, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm h_7 (ATerm t)
                                      {
                                        t = term_a_34;
                                        t = set_config_0(t);
                                        t = term_b_34;
                                        return(t);
                                      }
                                      ATerm i_7 (ATerm t)
                                      {
                                        t = term_c_34;
                                        return(t);
                                      }
                                      t = Option_3(t, g_7, h_7, i_7);
                                    }
                                  }
                              }
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_115 = NULL;
  t_115 = t;
  t = SSL_table_destroy(not_null(t_115));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_115 = NULL;
  x_115 = t;
  t = SSL_exit(not_null(x_115));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_116 = NULL;
  b_116 = t;
  t = SSL_implode_string(not_null(b_116));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_112 (ATerm))
{
  ATerm e_116 (ATerm t)
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_116);
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        {
          t = Nil_0(t);
          t = e_112(t);
        }
      }
    return(t);
  }
  t = e_116(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm h_116 = NULL,k_116 = NULL,l_116 = NULL;
        h_116 = t;
        g_116 :
        if(((ATgetType(h_116) == AT_LIST) && ((ATermList) h_116 != ATempty)))
          {
            k_116 = ATgetFirst((ATermList) h_116);
            l_116 = (ATerm) ATgetNext((ATermList) h_116);
            {
              t = not_null(k_116);
              {
                ATerm j_7 (ATerm t)
                {
                  t = not_null(l_116);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_7);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm r_116 = NULL;
  r_116 = t;
  t = SSL_explode_string(not_null(r_116));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_111 (ATerm))
{
  ATerm u_116 (ATerm t)
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = Cons_2(t, p_111, u_116);
      }
    return(t);
  }
  t = u_116(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm d_117 = NULL,e_117 = NULL,f_117 = NULL;
  f_117 = t;
  c_117 :
  if(((ATgetType(f_117) == AT_LIST) && ((ATermList) f_117 != ATempty)))
    {
      d_117 = ATgetFirst((ATermList) f_117);
      e_117 = (ATerm) ATgetNext((ATermList) f_117);
      {
        ATerm i_117 = NULL;
        t = not_null(e_117);
        {
          ATerm j_34;
          j_34 = t;
          {
            ATerm j_117 = NULL,l_117 = NULL,n_117 = NULL;
            ATerm k_34;
            k_34 = t;
            {
              ATerm k_117 = NULL;
              t = s_0(t);
              {
                k_117 = t;
                if(((j_117 != NULL) && (j_117 != k_117)))
                  _fail(k_117);
                else
                  j_117 = k_117;
              }
            }
            t = k_34;
            {
              ATerm m_117 = NULL;
              t = not_null(d_117);
              {
                t = r_0(t);
                {
                  m_117 = t;
                  if(((l_117 != NULL) && (l_117 != m_117)))
                    _fail(m_117);
                  else
                    l_117 = m_117;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_117)), not_null(l_117));
                {
                  n_117 = t;
                  if(((i_117 != NULL) && (i_117 != n_117)))
                    _fail(n_117);
                  else
                    i_117 = n_117;
                }
              }
            }
          }
          t = j_34;
          {
            ATerm k_7 (ATerm t)
            {
              t = not_null(i_117);
              return(t);
            }
            t = reverse_acc_2(t, r_0, k_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) f_117 == ATempty))
        {
          {
            t = term_f_25;
            t = s_0(t);
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
ATerm short_description_1 (ATerm t, ATerm x_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm z_117 = NULL,a_118 = NULL;
  z_117 = t;
  y_117 :
  if(match_cons(z_117, sym_Program_1))
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
            t = a_79(t);
            {
              f_118 = t;
              {
                ATerm i_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_118)), not_null(d_118));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm r_118 = NULL;
  ATerm m_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm s_118 = NULL;
      s_118 = t;
      if(((r_118 != NULL) && (r_118 != s_118)))
        _fail(s_118);
      else
        r_118 = s_118;
      return(t);
    }
    t = Program_1(t, n_7);
    return(t);
  }
  t = option_defined_1(t, m_7);
  {
    ATerm o_7 (ATerm t)
    {
      ATerm t_118 = NULL;
      ATerm u_118 = NULL;
      t = term_f_25;
      {
        ATerm p_7 (ATerm t)
        {
          t = not_null(r_118);
          return(t);
        }
        t = short_description_1(t, p_7);
        {
          t = concat_strings_0(t);
          {
            u_118 = t;
            if(((t_118 != NULL) && (t_118 != u_118)))
              _fail(u_118);
            else
              t_118 = u_118;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(t_118)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, o_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, term_l_34));
      {
        t = printnl_0(t);
        {
          t = term_o_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_7 (ATerm t)
                {
                  ATerm v_118 = NULL;
                  v_118 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_118)), term_p_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_7);
                {
                  ATerm r_7 (ATerm t)
                  {
                    ATerm x_118 = NULL;
                    ATerm y_118 = NULL;
                    t = term_f_25;
                    {
                      ATerm s_7 (ATerm t)
                      {
                        t = not_null(r_118);
                        return(t);
                      }
                      t = long_description_1(t, s_7);
                      {
                        t = concat_strings_0(t);
                        {
                          y_118 = t;
                          if(((x_118 != NULL) && (x_118 != y_118)))
                            _fail(y_118);
                          else
                            x_118 = y_118;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_118)), term_q_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, r_7);
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
ATerm Undefined_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm i_119 = NULL,j_119 = NULL;
  i_119 = t;
  h_119 :
  if(match_cons(i_119, sym_Undefined_1))
    {
      j_119 = ATgetArgument(i_119, 0);
      {
        ATerm m_119 = NULL,o_119 = NULL;
        ATerm n_119 = NULL;
        t = SSLgetAnnotations(not_null(i_119));
        {
          n_119 = t;
          if(((m_119 != NULL) && (m_119 != n_119)))
            _fail(n_119);
          else
            m_119 = n_119;
        }
        {
          t = not_null(j_119);
          {
            ATerm q_119 = NULL;
            t = b_79(t);
            {
              o_119 = t;
              {
                ATerm r_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_119)), not_null(m_119));
                {
                  r_119 = t;
                  if(((q_119 != NULL) && (q_119 != r_119)))
                    _fail(r_119);
                  else
                    q_119 = r_119;
                }
                t = not_null(q_119);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm y_111 (ATerm))
{
  ATerm w_119 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_111, _id);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = Cons_2(t, _id, w_119);
      }
    return(t);
  }
  t = w_119(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_96 (ATerm))
{
  t = fetch_1(t, w_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_120 = NULL;
  b_120 = t;
  a_120 :
  if(match_cons(b_120, sym_Help_0))
    {
      ATerm d_120 = NULL,f_120 = NULL;
      ATerm t_34;
      t_34 = t;
      {
        ATerm e_120 = NULL;
        t = SSLgetAnnotations(not_null(b_120));
        {
          e_120 = t;
          if(((d_120 != NULL) && (d_120 != e_120)))
            _fail(e_120);
          else
            d_120 = e_120;
        }
      }
      t = t_34;
      {
        ATerm g_120 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_120));
        {
          g_120 = t;
          if(((f_120 != NULL) && (f_120 != g_120)))
            _fail(g_120);
          else
            f_120 = g_120;
        }
        t = not_null(f_120);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_114 (ATerm))
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_114(t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL;
  m_120 = t;
  l_120 :
  if(match_cons(m_120, sym__2))
    {
      n_120 = ATgetArgument(m_120, 0);
      o_120 = ATgetArgument(m_120, 1);
      t = SSL_table_get(not_null(n_120), not_null(o_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL;
  w_120 = t;
  v_120 :
  if(match_cons(w_120, sym__3))
    {
      x_120 = ATgetArgument(w_120, 0);
      y_120 = ATgetArgument(w_120, 1);
      z_120 = ATgetArgument(w_120, 2);
      {
        ATerm w_34;
        w_34 = t;
        {
          ATerm d_121 = NULL;
          ATerm e_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_120), not_null(y_120));
          {
            ATerm x_34 = t;
            int y_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_34);
              }
            else
              {
                t = x_34;
                t = (ATerm) ATempty;
              }
            {
              e_121 = t;
              if(((d_121 != NULL) && (d_121 != e_121)))
                _fail(e_121);
              else
                d_121 = e_121;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_120), not_null(y_120), (ATerm) ATinsert(CheckATermList(not_null(d_121)), not_null(z_120)));
            t = table_put_0(t);
          }
        }
        t = w_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_96 (ATerm))
{
  ATerm j_121 = NULL;
  ATerm k_121 = NULL;
  t = term_f_25;
  {
    t = c_96(t);
    {
      k_121 = t;
      if(((j_121 != NULL) && (j_121 != k_121)))
        _fail(k_121);
      else
        j_121 = k_121;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, not_null(j_121));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL;
  q_121 = t;
  p_121 :
  if(match_string(q_121, "register-usage-info"))
    {
      t = register_usage_1(t, q_0);
    }
  else
    {
      if(((ATgetType(q_121) == AT_LIST) && ((ATermList) q_121 != ATempty)))
        {
          r_121 = ATgetFirst((ATermList) q_121);
          s_121 = (ATerm) ATgetNext((ATermList) q_121);
          {
            ATerm v_121 = NULL;
            ATerm z_34;
            z_34 = t;
            {
              t = not_null(r_121);
              t = a_0(t);
            }
            t = z_34;
            {
              ATerm w_121 = NULL;
              t = term_f_25;
              {
                t = b_0(t);
                {
                  w_121 = t;
                  if(((v_121 != NULL) && (v_121 != w_121)))
                    _fail(w_121);
                  else
                    v_121 = w_121;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_121)), not_null(v_121));
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
  ATerm t_7 (ATerm t)
  {
    ATerm b_122 = NULL;
    b_122 = t;
    a_122 :
    if(!(match_string(b_122, "--help")))
      {
        if(!(match_string(b_122, "-h")))
          {
            if(!(match_string(b_122, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = term_a_35;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    t = term_b_35;
    return(t);
  }
  t = Option_3(t, t_7, u_7, v_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL;
  e_122 = t;
  d_122 :
  if(((ATgetType(e_122) == AT_LIST) && ((ATermList) e_122 != ATempty)))
    {
      f_122 = ATgetFirst((ATermList) e_122);
      g_122 = (ATerm) ATgetNext((ATermList) e_122);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_122)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_122)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_89 (ATerm), ATerm m_89 (ATerm))
{
  ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL;
  q_122 = t;
  p_122 :
  if(((ATgetType(q_122) == AT_LIST) && ((ATermList) q_122 != ATempty)))
    {
      r_122 = ATgetFirst((ATermList) q_122);
      s_122 = (ATerm) ATgetNext((ATermList) q_122);
      {
        ATerm w_122 = NULL,y_122 = NULL;
        ATerm x_122 = NULL;
        t = SSLgetAnnotations(not_null(q_122));
        {
          x_122 = t;
          if(((w_122 != NULL) && (w_122 != x_122)))
            _fail(x_122);
          else
            w_122 = x_122;
        }
        {
          t = not_null(r_122);
          {
            ATerm a_123 = NULL;
            t = l_89(t);
            {
              y_122 = t;
              {
                t = not_null(s_122);
                {
                  ATerm c_123 = NULL;
                  t = m_89(t);
                  {
                    a_123 = t;
                    {
                      ATerm d_123 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_123)), not_null(y_122)), not_null(w_122));
                      {
                        d_123 = t;
                        if(((c_123 != NULL) && (c_123 != d_123)))
                          _fail(d_123);
                        else
                          c_123 = d_123;
                      }
                      t = not_null(c_123);
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
  ATerm n_123 = NULL;
  n_123 = t;
  m_123 :
  if(((ATermList) n_123 == ATempty))
    {
      {
        ATerm p_123 = NULL,r_123 = NULL;
        ATerm c_35;
        c_35 = t;
        {
          ATerm q_123 = NULL;
          t = SSLgetAnnotations(not_null(n_123));
          {
            q_123 = t;
            if(((p_123 != NULL) && (p_123 != q_123)))
              _fail(q_123);
            else
              p_123 = q_123;
          }
        }
        t = c_35;
        {
          ATerm s_123 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_123));
          {
            s_123 = t;
            if(((r_123 != NULL) && (r_123 != s_123)))
              _fail(s_123);
            else
              r_123 = s_123;
          }
          t = not_null(r_123);
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
  ATerm y_123 = NULL,z_123 = NULL,a_124 = NULL;
  y_123 = t;
  x_123 :
  if(match_cons(y_123, sym__2))
    {
      z_123 = ATgetArgument(y_123, 0);
      a_124 = ATgetArgument(y_123, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_27, not_null(z_123), not_null(a_124));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_96 (ATerm))
{
  ATerm d_35;
  d_35 = t;
  {
    ATerm w_7 (ATerm t)
    {
      t = term_e_35;
      t = a_96(t);
      return(t);
    }
    t = try_1(t, w_7);
  }
  t = d_35;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm i_124 = NULL;
      ATerm f_35;
      f_35 = t;
      {
        ATerm g_124 = NULL;
        ATerm h_124 = NULL;
        h_124 = t;
        if(((g_124 != NULL) && (g_124 != h_124)))
          _fail(h_124);
        else
          g_124 = h_124;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_28, not_null(g_124));
          t = set_config_0(t);
        }
      }
      t = f_35;
      {
        ATerm j_124 = NULL;
        j_124 = t;
        if(((i_124 != NULL) && (i_124 != j_124)))
          _fail(j_124);
        else
          i_124 = j_124;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_124));
      }
      return(t);
    }
    ATerm y_7 (ATerm t)
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_35);
            }
          else
            {
              t = i_35;
              {
                t = a_96(t);
                t = Cons_2(t, _id, y_7);
              }
            }
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_7, y_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_124 = NULL,q_124 = NULL,r_124 = NULL;
  ATerm k_35;
  k_35 = t;
  {
    ATerm s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL;
    s_124 = t;
    o_124 :
    if(match_cons(s_124, sym__3))
      {
        t_124 = ATgetArgument(s_124, 0);
        u_124 = ATgetArgument(s_124, 1);
        v_124 = ATgetArgument(s_124, 2);
        {
          if(((p_124 != NULL) && (p_124 != t_124)))
            _fail(t_124);
          else
            p_124 = t_124;
          {
            if(((q_124 != NULL) && (q_124 != u_124)))
              _fail(u_124);
            else
              q_124 = u_124;
            {
              if(((r_124 != NULL) && (r_124 != v_124)))
                _fail(v_124);
              else
                r_124 = v_124;
              t = SSL_table_put(not_null(p_124), not_null(q_124), not_null(r_124));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm y_124 = NULL;
  ATerm l_35;
  l_35 = t;
  {
    t = term_m_35;
    t = table_put_0(t);
  }
  t = l_35;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm n_35 = t;
      int o_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_95(t);
          LocalPopChoice(o_35);
        }
      else
        {
          t = n_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_8);
    {
      ATerm b_8 (ATerm t)
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_28;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            {
              ATerm c_8 (ATerm t)
              {
                ATerm d_8 (ATerm t)
                {
                  ATerm z_124 = NULL;
                  z_124 = t;
                  if(((y_124 != NULL) && (y_124 != z_124)))
                    _fail(z_124);
                  else
                    y_124 = z_124;
                  return(t);
                }
                t = Undefined_1(t, d_8);
                return(t);
              }
              t = option_defined_1(t, c_8);
              {
                ATerm r_35;
                r_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_124)), term_s_35));
                  t = printnl_0(t);
                }
                t = r_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_26;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, b_8);
      {
        ATerm t_35;
        t_35 = t;
        {
          t = term_m_34;
          t = table_destroy_0(t);
        }
        t = t_35;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_97(t);
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_8);
  {
    t = store_options_0(t);
    {
      t = a_98(t);
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_97);
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm y_35 = t;
              int z_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, x_97);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(z_35);
                }
              else
                {
                  t = y_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm l_8 (ATerm t)
    {
      ATerm a_36;
      a_36 = t;
      {
        ATerm c_125 = NULL;
        ATerm d_125 = NULL;
        t = term_j_28;
        {
          t = get_config_0(t);
          {
            d_125 = t;
            if(((c_125 != NULL) && (c_125 != d_125)))
              _fail(d_125);
            else
              c_125 = d_125;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(c_125)));
          t = printnl_0(t);
        }
      }
      t = a_36;
      return(t);
    }
    t = if_verbose2_1(t, l_8);
    return(t);
  }
  t = iowrap_4(t, r_97, s_97, t_97, k_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_97 (ATerm), ATerm q_97 (ATerm))
{
  t = iowrap_3(t, p_97, q_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    t = _2(t, _id, m_97);
    return(t);
  }
  t = iowrap_2(t, u_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        {
          ATerm q_9 (ATerm t)
          {
            ATerm r_9 (ATerm t)
            {
              t = term_d_36;
              return(t);
            }
            t = say_1(t, r_9);
            return(t);
          }
          t = if_verbose2_1(t, q_9);
        }
      }
    return(t);
  }
  t = iowrap_1(t, e_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
