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
ATerm term_z_33;
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
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
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
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_f_25);
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
ATerm say_1 (ATerm, ATerm e_99 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm m_90 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm l_89 (ATerm), ATerm m_89 (ATerm));
ATerm Explode_2 (ATerm, ATerm q_85 (ATerm), ATerm r_85 (ATerm));
ATerm Op_2 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm));
ATerm pat_td_1 (ATerm, ATerm d_92 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm l_110 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm));
ATerm repeat_1 (ATerm, ATerm o_104 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm Con_3 (ATerm, ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm g_116 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_114 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_99 (ATerm));
ATerm restore_always_2 (ATerm, ATerm o_114 (ATerm), ATerm p_114 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_99 (ATerm));
ATerm scope_2 (ATerm, ATerm x_99 (ATerm), ATerm y_99 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm r_114 (ATerm));
ATerm innermost_1 (ATerm, ATerm n_102 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm f_89 (ATerm));
ATerm Seq_2 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm Match_1 (ATerm, ATerm e_89 (ATerm));
ATerm LChoice_2 (ATerm, ATerm t_87 (ATerm), ATerm u_87 (ATerm));
ATerm Choice_2 (ATerm, ATerm r_87 (ATerm), ATerm s_87 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm u_116 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm e_94 (ATerm), ATerm f_94 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm g_94 (ATerm), ATerm h_94 (ATerm));
ATerm substitute_1 (ATerm, ATerm i_94 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm h_91 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm Let_2 (ATerm, ATerm g_88 (ATerm), ATerm h_88 (ATerm));
ATerm sboundin_3 (ATerm, ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm d_88 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm d_91 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm l_86 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_89 (ATerm), ATerm j_89 (ATerm));
ATerm tboundin_3 (ATerm, ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm));
ATerm crush_3 (ATerm, ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm));
ATerm for_3 (ATerm, ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm));
ATerm HdMember_1 (ATerm, ATerm i_107 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm w_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm r_93 (ATerm), ATerm s_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm));
ATerm zip_1 (ATerm, ATerm g_110 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm x_93 (ATerm), ATerm y_93 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm l_93 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm o_101 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm t_101 (ATerm));
ATerm rename_4 (ATerm, ATerm z_93 (ATerm, ATerm (ATerm)), ATerm a_94 (ATerm), ATerm b_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_94 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_100 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_99 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm v_86 (ATerm));
ATerm Signature_1 (ATerm, ATerm s_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_86 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm o_77 (ATerm), ATerm p_77 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_99 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_106 (ATerm), ATerm d_106 (ATerm));
ATerm crush_2 (ATerm, ATerm r_107 (ATerm), ATerm s_107 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_90 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_98 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_113 (ATerm), ATerm k_113 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_112 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_96 (ATerm));
ATerm map_1 (ATerm, ATerm o_111 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_95 (ATerm));
ATerm Program_1 (ATerm, ATerm c_79 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_111 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_114 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_96 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm q_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_89 (ATerm), ATerm o_89 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_96 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_96 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_97 (ATerm));
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
ATerm say_1 (ATerm t, ATerm e_99 (ATerm))
{
  ATerm u_9;
  u_9 = t;
  {
    t = e_99(t);
    t = debug_0(t);
  }
  t = u_9;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_90 (ATerm))
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
    t = m_90(t);
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
ATerm Prim_2 (ATerm t, ATerm l_89 (ATerm), ATerm m_89 (ATerm))
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
            t = l_89(t);
            {
              w_16 = t;
              {
                t = not_null(q_16);
                {
                  ATerm a_17 = NULL;
                  t = m_89(t);
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
ATerm Explode_2 (ATerm t, ATerm q_85 (ATerm), ATerm r_85 (ATerm))
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
            t = q_85(t);
            {
              v_17 = t;
              {
                t = not_null(p_17);
                {
                  ATerm z_17 = NULL;
                  t = r_85(t);
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
ATerm Op_2 (ATerm t, ATerm l_87 (ATerm), ATerm m_87 (ATerm))
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
            t = l_87(t);
            {
              u_18 = t;
              {
                t = not_null(o_18);
                {
                  ATerm y_18 = NULL;
                  t = m_87(t);
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
ATerm pat_td_1 (ATerm t, ATerm d_92 (ATerm))
{
  ATerm s_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_92(t);
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
                t = pat_td_1(t, d_92);
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
                    t = pat_td_1(t, d_92);
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
                          t = pat_td_1(t, d_92);
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
                              t = pat_td_1(t, d_92);
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
ATerm unzip_1 (ATerm t, ATerm l_110 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, l_110);
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
ATerm repeat_2 (ATerm t, ATerm l_104 (ATerm), ATerm m_104 (ATerm))
{
  ATerm z_24 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_104(t);
        t = z_24(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = m_104(t);
      }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm o_104 (ATerm))
{
  t = repeat_2(t, o_104, _id);
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
ATerm App_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
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
            t = k_85(t);
            {
              b_26 = t;
              {
                t = not_null(v_25);
                {
                  ATerm f_26 = NULL;
                  t = l_85(t);
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
ATerm Con_3 (ATerm t, ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm))
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
            t = h_85(t);
            {
              d_27 = t;
              {
                t = not_null(v_26);
                {
                  ATerm h_27 = NULL;
                  t = i_85(t);
                  {
                    f_27 = t;
                    {
                      t = not_null(w_26);
                      {
                        ATerm j_27 = NULL;
                        t = j_85(t);
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
ATerm oncetd_1 (ATerm t, ATerm g_116 (ATerm))
{
  ATerm i_28 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_116(t);
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
ATerm topdown_1 (ATerm t, ATerm q_114 (ATerm))
{
  t = q_114(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = topdown_1(t, q_114);
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
                                                                                ATerm x_33 = NULL,y_33 = NULL,a_34 = NULL;
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
                                                                                          a_34 = ATgetArgument(x_33, 1);
                                                                                          {
                                                                                            if(((m_33 != NULL) && (m_33 != y_33)))
                                                                                              _fail(y_33);
                                                                                            else
                                                                                              m_33 = y_33;
                                                                                            if(((n_33 != NULL) && (n_33 != a_34)))
                                                                                              _fail(a_34);
                                                                                            else
                                                                                              n_33 = a_34;
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
    ATerm k_40 = NULL,m_40 = NULL,n_40 = NULL;
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
            m_40 = ATgetArgument(k_40, 0);
            n_40 = ATgetArgument(k_40, 1);
            l_38 :
            if(match_string(m_40, "m_0"))
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
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  t_41 :
  if(match_cons(w_41, sym__2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
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
ATerm end_scope_1 (ATerm t, ATerm w_99 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm o_43 = NULL;
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
    t = w_99(t);
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
                    if(((l_43 != NULL) && (l_43 != r_43)))
                      _fail(r_43);
                    else
                      l_43 = r_43;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_43), term_h_16, not_null(l_43));
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
ATerm restore_always_2 (ATerm t, ATerm o_114 (ATerm), ATerm p_114 (ATerm))
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_114(t);
      t = p_114(t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        t = p_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm e_44 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm f_44 = NULL;
    ATerm g_44 = NULL;
    t = v_99(t);
    {
      f_44 = t;
      {
        if(((e_44 != NULL) && (e_44 != f_44)))
          _fail(f_44);
        else
          e_44 = f_44;
        {
          ATerm j_44 = NULL;
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
              j_44 = t;
              if(((g_44 != NULL) && (g_44 != j_44)))
                _fail(j_44);
              else
                g_44 = j_44;
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
ATerm scope_2 (ATerm t, ATerm x_99 (ATerm), ATerm y_99 (ATerm))
{
  t = begin_scope_1(t, x_99);
  {
    ATerm f_2 (ATerm t)
    {
      t = end_scope_1(t, x_99);
      return(t);
    }
    t = restore_always_2(t, y_99, f_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,u_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym__3))
    {
      r_44 = ATgetArgument(q_44, 0);
      s_44 = ATgetArgument(q_44, 1);
      u_44 = ATgetArgument(q_44, 2);
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
                t = not_null(u_44);
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
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,u_46 = NULL;
  b_46 = t;
  t_45 :
  if(match_cons(b_46, sym_Seq_2))
    {
      c_46 = ATgetArgument(b_46, 0);
      o_46 = ATgetArgument(b_46, 1);
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
                      if(match_cons(o_46, sym_Seq_2))
                        {
                          p_46 = ATgetArgument(o_46, 0);
                          r_46 = ATgetArgument(o_46, 1);
                          z_45 :
                          if(match_cons(p_46, sym_Match_1))
                            {
                              q_46 = ATgetArgument(p_46, 0);
                              a_46 :
                              if(match_cons(r_46, sym_Build_1))
                                {
                                  u_46 = ATgetArgument(r_46, 0);
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
                                                    ATerm e_47 = NULL;
                                                    if(((x_46 != NULL) && (x_46 != b_47)))
                                                      _fail(b_47);
                                                    else
                                                      x_46 = b_47;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_46), not_null(q_46), not_null(u_46));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          e_47 = t;
                                                          if(((y_46 != NULL) && (y_46 != e_47)))
                                                            _fail(e_47);
                                                          else
                                                            y_46 = e_47;
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
                                          ATerm r_47 = NULL,s_47 = NULL,z_47 = NULL;
                                          t = term_k_15;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              t = term_z_16;
                                              return(t);
                                            }
                                            t = rewrite_1(t, l_2);
                                            {
                                              r_47 = t;
                                              r_45 :
                                              if(match_cons(r_47, sym_Defined_2))
                                                {
                                                  s_47 = ATgetArgument(r_47, 0);
                                                  z_47 = ATgetArgument(r_47, 1);
                                                  s_45 :
                                                  if(match_string(s_47, "j_0"))
                                                    {
                                                      ATerm a_48 = NULL;
                                                      if(((h_47 != NULL) && (h_47 != z_47)))
                                                        _fail(z_47);
                                                      else
                                                        h_47 = z_47;
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
                                                                          t = not_null(u_46);
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
  ATerm p_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  p_50 = t;
  j_50 :
  if(match_cons(p_50, sym_LChoice_2))
    {
      v_50 = ATgetArgument(p_50, 0);
      y_50 = ATgetArgument(p_50, 1);
      m_50 :
      if(match_cons(v_50, sym_LChoice_2))
        {
          w_50 = ATgetArgument(v_50, 0);
          x_50 = ATgetArgument(v_50, 1);
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
          v_50 = ATgetArgument(p_50, 0);
          y_50 = ATgetArgument(p_50, 1);
          n_50 :
          if(match_cons(v_50, sym_Seq_2))
            {
              w_50 = ATgetArgument(v_50, 0);
              x_50 = ATgetArgument(v_50, 1);
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
              v_50 = ATgetArgument(p_50, 0);
              y_50 = ATgetArgument(p_50, 1);
              o_50 :
              if(match_cons(v_50, sym_Choice_2))
                {
                  w_50 = ATgetArgument(v_50, 0);
                  x_50 = ATgetArgument(v_50, 1);
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
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,b_53 = NULL;
  w_52 = t;
  s_52 :
  if(match_cons(w_52, sym_Seq_2))
    {
      x_52 = ATgetArgument(w_52, 0);
      b_53 = ATgetArgument(w_52, 1);
      t_52 :
      if(match_cons(x_52, sym_LChoice_2))
        {
          y_52 = ATgetArgument(x_52, 0);
          z_52 = ATgetArgument(x_52, 1);
          {
            ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(b_53));
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
                    if(match_string(h_53, "b_0"))
                      {
                        if(((b_53 != NULL) && (b_53 != i_53)))
                          _fail(i_53);
                        else
                          b_53 = i_53;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(y_52), not_null(b_53)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_52), not_null(b_53)));
          }
        }
      else
        {
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
                    if(match_string(a_54, "a_0"))
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
                  j_54 :
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
ATerm bottomup_1 (ATerm t, ATerm r_114 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    t = bottomup_1(t, r_114);
    return(t);
  }
  t = _all(t, u_2);
  t = r_114(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm n_102 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      t = n_102(t);
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
ATerm Build_1 (ATerm t, ATerm f_89 (ATerm))
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
            t = f_89(t);
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
ATerm Seq_2 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm))
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
            t = p_87(t);
            {
              d_57 = t;
              {
                t = not_null(x_56);
                {
                  ATerm h_57 = NULL;
                  t = q_87(t);
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
ATerm Match_1 (ATerm t, ATerm e_89 (ATerm))
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
            t = e_89(t);
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
ATerm LChoice_2 (ATerm t, ATerm t_87 (ATerm), ATerm u_87 (ATerm))
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
            t = t_87(t);
            {
              y_58 = t;
              {
                t = not_null(s_58);
                {
                  ATerm c_59 = NULL;
                  t = u_87(t);
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
ATerm Choice_2 (ATerm t, ATerm r_87 (ATerm), ATerm s_87 (ATerm))
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
            t = r_87(t);
            {
              x_59 = t;
              {
                t = not_null(r_59);
                {
                  ATerm b_60 = NULL;
                  t = s_87(t);
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
ATerm alltd_1 (ATerm t, ATerm u_116 (ATerm))
{
  ATerm n_61 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_116(t);
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
ATerm SubsVar_2 (ATerm t, ATerm e_94 (ATerm), ATerm f_94 (ATerm))
{
  ATerm n_65 = NULL;
  ATerm p_65 = NULL,q_65 = NULL;
  n_65 = t;
  {
    ATerm r_65 = NULL;
    t = not_null(n_65);
    {
      ATerm s_65 = NULL;
      t = e_94(t);
      {
        r_65 = t;
        {
          if(((p_65 != NULL) && (p_65 != r_65)))
            _fail(r_65);
          else
            p_65 = r_65;
          {
            t = f_94(t);
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
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
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
          d_66 = ATgetArgument(a_66, 2);
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
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_66), not_null(d_66));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm g_94 (ATerm), ATerm h_94 (ATerm))
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
              t = SubsVar_2(t, g_94, c_4);
              t = h_94(t);
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
ATerm substitute_1 (ATerm t, ATerm i_94 (ATerm))
{
  t = substitute_2(t, i_94, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm h_91 (ATerm))
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        t = split_2(t, _id, h_91);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,t_67 = NULL;
            m_67 = t;
            h_67 :
            if(match_cons(m_67, sym__2))
              {
                n_67 = ATgetArgument(m_67, 0);
                t_67 = ATgetArgument(m_67, 1);
                i_67 :
                if(match_cons(n_67, sym_SDef_3))
                  {
                    o_67 = ATgetArgument(n_67, 0);
                    p_67 = ATgetArgument(n_67, 1);
                    q_67 = ATgetArgument(n_67, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_67), not_null(p_67), not_null(q_67));
                  }
                else
                  {
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
              t = split_2(t, _id, h_91);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,g_68 = NULL,h_68 = NULL;
                  b_68 = t;
                  k_67 :
                  if(match_cons(b_68, sym__2))
                    {
                      c_68 = ATgetArgument(b_68, 0);
                      h_68 = ATgetArgument(b_68, 1);
                      l_67 :
                      if(match_cons(c_68, sym_VarDec_2))
                        {
                          d_68 = ATgetArgument(c_68, 0);
                          g_68 = ATgetArgument(c_68, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(h_68), not_null(g_68));
                        }
                      else
                        {
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
                t = h_91(t);
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
ATerm Rec_2 (ATerm t, ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  t_68 = t;
  s_68 :
  if(match_cons(t_68, sym_Rec_2))
    {
      u_68 = ATgetArgument(t_68, 0);
      v_68 = ATgetArgument(t_68, 1);
      {
        ATerm z_68 = NULL,b_69 = NULL;
        ATerm a_69 = NULL;
        t = SSLgetAnnotations(not_null(t_68));
        {
          a_69 = t;
          if(((z_68 != NULL) && (z_68 != a_69)))
            _fail(a_69);
          else
            z_68 = a_69;
        }
        {
          t = not_null(u_68);
          {
            ATerm d_69 = NULL;
            t = e_88(t);
            {
              b_69 = t;
              {
                t = not_null(v_68);
                {
                  ATerm f_69 = NULL;
                  t = f_88(t);
                  {
                    d_69 = t;
                    {
                      ATerm g_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(b_69), not_null(d_69)), not_null(z_68));
                      {
                        g_69 = t;
                        if(((f_69 != NULL) && (f_69 != g_69)))
                          _fail(g_69);
                        else
                          f_69 = g_69;
                      }
                      t = not_null(f_69);
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
ATerm SDef_3 (ATerm t, ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  f_70 = t;
  e_70 :
  if(match_cons(f_70, sym_SDef_3))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      i_70 = ATgetArgument(f_70, 2);
      {
        ATerm n_70 = NULL,p_70 = NULL;
        ATerm o_70 = NULL;
        t = SSLgetAnnotations(not_null(f_70));
        {
          o_70 = t;
          if(((n_70 != NULL) && (n_70 != o_70)))
            _fail(o_70);
          else
            n_70 = o_70;
        }
        {
          t = not_null(g_70);
          {
            ATerm r_70 = NULL;
            t = i_88(t);
            {
              p_70 = t;
              {
                t = not_null(h_70);
                {
                  ATerm t_70 = NULL;
                  t = j_88(t);
                  {
                    r_70 = t;
                    {
                      t = not_null(i_70);
                      {
                        ATerm v_70 = NULL;
                        t = k_88(t);
                        {
                          t_70 = t;
                          {
                            ATerm w_70 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(p_70), not_null(r_70), not_null(t_70)), not_null(n_70));
                            {
                              w_70 = t;
                              if(((v_70 != NULL) && (v_70 != w_70)))
                                _fail(w_70);
                              else
                                v_70 = w_70;
                            }
                            t = not_null(v_70);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm g_88 (ATerm), ATerm h_88 (ATerm))
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  i_71 :
  if(match_cons(j_71, sym_Let_2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      {
        ATerm p_71 = NULL,r_71 = NULL;
        ATerm q_71 = NULL;
        t = SSLgetAnnotations(not_null(j_71));
        {
          q_71 = t;
          if(((p_71 != NULL) && (p_71 != q_71)))
            _fail(q_71);
          else
            p_71 = q_71;
        }
        {
          t = not_null(k_71);
          {
            ATerm t_71 = NULL;
            t = g_88(t);
            {
              r_71 = t;
              {
                t = not_null(l_71);
                {
                  ATerm v_71 = NULL;
                  t = h_88(t);
                  {
                    t_71 = t;
                    {
                      ATerm w_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(r_71), not_null(t_71)), not_null(p_71));
                      {
                        w_71 = t;
                        if(((v_71 != NULL) && (v_71 != w_71)))
                          _fail(w_71);
                        else
                          v_71 = w_71;
                      }
                      t = not_null(v_71);
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
ATerm sboundin_3 (ATerm t, ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm))
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, i_91, i_91);
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
            t = SDef_3(t, k_91, k_91, i_91);
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            t = Rec_2(t, k_91, i_91);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL;
  e_72 = t;
  d_72 :
  if(match_cons(e_72, sym_Rec_2))
    {
      f_72 = ATgetArgument(e_72, 0);
      g_72 = ATgetArgument(e_72, 1);
      t = (ATerm) ATinsert(ATempty, not_null(f_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL;
  s_72 = t;
  r_72 :
  if(match_cons(s_72, sym_SDef_3))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
      v_72 = ATgetArgument(s_72, 2);
      {
        t = not_null(u_72);
        {
          ATerm i_4 (ATerm t)
          {
            ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
            c_73 = t;
            q_72 :
            if(match_cons(c_73, sym_VarDec_2))
              {
                d_73 = ATgetArgument(c_73, 0);
                e_73 = ATgetArgument(c_73, 1);
                t = not_null(d_73);
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
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  p_73 :
  if(match_cons(q_73, sym_Let_2))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      {
        t = not_null(r_73);
        {
          ATerm j_4 (ATerm t)
          {
            ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
            v_73 = t;
            o_73 :
            if(match_cons(v_73, sym_SDef_3))
              {
                w_73 = ATgetArgument(v_73, 0);
                x_73 = ATgetArgument(v_73, 1);
                y_73 = ATgetArgument(v_73, 2);
                t = not_null(w_73);
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
ATerm SVar_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm j_74 = NULL,k_74 = NULL;
  j_74 = t;
  i_74 :
  if(match_cons(j_74, sym_SVar_1))
    {
      k_74 = ATgetArgument(j_74, 0);
      {
        ATerm n_74 = NULL,p_74 = NULL;
        ATerm o_74 = NULL;
        t = SSLgetAnnotations(not_null(j_74));
        {
          o_74 = t;
          if(((n_74 != NULL) && (n_74 != o_74)))
            _fail(o_74);
          else
            n_74 = o_74;
        }
        {
          t = not_null(k_74);
          {
            ATerm a_75 = NULL;
            t = d_88(t);
            {
              p_74 = t;
              {
                ATerm b_75 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(p_74)), not_null(n_74));
                {
                  b_75 = t;
                  if(((a_75 != NULL) && (a_75 != b_75)))
                    _fail(b_75);
                  else
                    a_75 = b_75;
                }
                t = not_null(a_75);
              }
            }
          }
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
ATerm tpaste_1 (ATerm t, ATerm d_91 (ATerm))
{
  t = Scope_2(t, d_91, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm n_77 = NULL,q_77 = NULL;
  n_77 = t;
  a_76 :
  if(match_cons(n_77, sym_DynamicRules_1))
    {
      q_77 = ATgetArgument(n_77, 0);
      {
        ATerm t_77 = NULL,v_77 = NULL;
        ATerm u_77 = NULL;
        t = SSLgetAnnotations(not_null(n_77));
        {
          u_77 = t;
          if(((t_77 != NULL) && (t_77 != u_77)))
            _fail(u_77);
          else
            t_77 = u_77;
        }
        {
          t = not_null(q_77);
          {
            ATerm x_77 = NULL;
            t = l_86(t);
            {
              v_77 = t;
              {
                ATerm y_77 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(v_77)), not_null(t_77));
                {
                  y_77 = t;
                  if(((x_77 != NULL) && (x_77 != y_77)))
                    _fail(y_77);
                  else
                    x_77 = y_77;
                }
                t = not_null(x_77);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_89 (ATerm), ATerm j_89 (ATerm))
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
  j_78 = t;
  i_78 :
  if(match_cons(j_78, sym_Scope_2))
    {
      k_78 = ATgetArgument(j_78, 0);
      l_78 = ATgetArgument(j_78, 1);
      {
        ATerm p_78 = NULL,r_78 = NULL;
        ATerm q_78 = NULL;
        t = SSLgetAnnotations(not_null(j_78));
        {
          q_78 = t;
          if(((p_78 != NULL) && (p_78 != q_78)))
            _fail(q_78);
          else
            p_78 = q_78;
        }
        {
          t = not_null(k_78);
          {
            ATerm t_78 = NULL;
            t = i_89(t);
            {
              r_78 = t;
              {
                t = not_null(l_78);
                {
                  ATerm v_78 = NULL;
                  t = j_89(t);
                  {
                    t_78 = t;
                    {
                      ATerm w_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_78), not_null(t_78)), not_null(p_78));
                      {
                        w_78 = t;
                        if(((v_78 != NULL) && (v_78 != w_78)))
                          _fail(w_78);
                        else
                          v_78 = w_78;
                      }
                      t = not_null(v_78);
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
ATerm tboundin_3 (ATerm t, ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm))
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, g_91, e_91);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      t = DynamicRules_1(t, e_91);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL;
  g_79 = t;
  f_79 :
  if(match_cons(g_79, sym_DynamicRules_1))
    {
      h_79 = ATgetArgument(g_79, 0);
      {
        t = not_null(h_79);
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
  ATerm m_79 = NULL,n_79 = NULL;
  m_79 = t;
  l_79 :
  if(match_cons(m_79, sym_Var_1))
    {
      n_79 = ATgetArgument(m_79, 0);
      t = (ATerm) ATinsert(ATempty, not_null(n_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  s_79 = t;
  r_79 :
  if(match_cons(s_79, sym__2))
    {
      t_79 = ATgetArgument(s_79, 0);
      u_79 = ATgetArgument(s_79, 1);
      {
        t = not_null(t_79);
        {
          ATerm y_79 (ATerm t)
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_79);
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
                        t = not_null(u_79);
                        return(t);
                      }
                      t = HdMember_1(t, l_4);
                      t = y_79(t);
                      LocalPopChoice(h_22);
                    }
                  else
                    {
                      t = g_22;
                      t = Cons_2(t, _id, y_79);
                    }
                }
              }
            return(t);
          }
          t = y_79(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm))
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_106(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
        d_80 = t;
        c_80 :
        if(((ATgetType(d_80) == AT_LIST) && ((ATermList) d_80 != ATempty)))
          {
            e_80 = ATgetFirst((ATermList) d_80);
            f_80 = (ATerm) ATgetNext((ATermList) d_80);
            {
              ATerm i_80 = NULL,k_80 = NULL;
              ATerm k_22;
              k_22 = t;
              {
                ATerm j_80 = NULL;
                t = not_null(e_80);
                {
                  t = g_106(t);
                  {
                    j_80 = t;
                    if(((i_80 != NULL) && (i_80 != j_80)))
                      _fail(j_80);
                    else
                      i_80 = j_80;
                  }
                }
              }
              t = k_22;
              {
                ATerm l_80 = NULL;
                t = not_null(f_80);
                {
                  t = foldr_3(t, e_106, f_106, g_106);
                  {
                    l_80 = t;
                    if(((k_80 != NULL) && (k_80 != l_80)))
                      _fail(l_80);
                    else
                      k_80 = l_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_80), not_null(k_80));
                  t = f_106(t);
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
ATerm crush_3 (ATerm t, ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm))
{
  ATerm t_80 = NULL;
  ATerm v_80 = NULL;
  t_80 = t;
  {
    ATerm w_80 = NULL;
    ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
    t = not_null(t_80);
    {
      w_80 = t;
      {
        t = SSL_explode_term(not_null(w_80));
        {
          y_80 = t;
          s_80 :
          if(match_cons(y_80, sym__2))
            {
              z_80 = ATgetArgument(y_80, 0);
              a_81 = ATgetArgument(y_80, 1);
              if(((v_80 != NULL) && (v_80 != a_81)))
                _fail(a_81);
              else
                v_80 = a_81;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_80);
      t = foldr_3(t, t_107, u_107, v_107);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL;
  h_81 = t;
  f_81 :
  if(match_cons(h_81, sym__2))
    {
      i_81 = ATgetArgument(h_81, 0);
      j_81 = ATgetArgument(h_81, 1);
      g_81 :
      if(((ATgetType(j_81) == AT_LIST) && ((ATermList) j_81 != ATempty)))
        {
          k_81 = ATgetFirst((ATermList) j_81);
          l_81 = (ATerm) ATgetNext((ATermList) j_81);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_81)), not_null(k_81)), not_null(l_81));
        }
      else
        {
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
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL;
  a_82 = t;
  y_81 :
  if(((ATgetType(a_82) == AT_LIST) && ((ATermList) a_82 != ATempty)))
    {
      b_82 = ATgetFirst((ATermList) a_82);
      e_82 = (ATerm) ATgetNext((ATermList) a_82);
      z_81 :
      if(match_cons(b_82, sym__2))
        {
          c_82 = ATgetArgument(b_82, 0);
          d_82 = ATgetArgument(b_82, 1);
          {
            ATerm i_82 = NULL,j_82 = NULL,p_82 = NULL,v_82 = NULL;
            ATerm l_22;
            l_22 = t;
            {
              ATerm k_82 = NULL;
              ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
              t = not_null(d_82);
              {
                k_82 = t;
                {
                  t = SSL_explode_term(not_null(k_82));
                  {
                    m_82 = t;
                    t_81 :
                    if(match_cons(m_82, sym__2))
                      {
                        n_82 = ATgetArgument(m_82, 0);
                        o_82 = ATgetArgument(m_82, 1);
                        {
                          if(((i_82 != NULL) && (i_82 != n_82)))
                            _fail(n_82);
                          else
                            i_82 = n_82;
                          if(((j_82 != NULL) && (j_82 != o_82)))
                            _fail(o_82);
                          else
                            j_82 = o_82;
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
                ATerm q_82 = NULL;
                ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
                t = not_null(c_82);
                {
                  q_82 = t;
                  {
                    t = SSL_explode_term(not_null(q_82));
                    {
                      s_82 = t;
                      w_81 :
                      if(match_cons(s_82, sym__2))
                        {
                          t_82 = ATgetArgument(s_82, 0);
                          u_82 = ATgetArgument(s_82, 1);
                          {
                            if(((i_82 != NULL) && (i_82 != t_82)))
                              _fail(t_82);
                            else
                              i_82 = t_82;
                            if(((p_82 != NULL) && (p_82 != u_82)))
                              _fail(u_82);
                            else
                              p_82 = u_82;
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
                ATerm w_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_82), not_null(j_82));
                {
                  t = zip_1(t, _id);
                  {
                    w_82 = t;
                    if(((v_82 != NULL) && (v_82 != w_82)))
                      _fail(w_82);
                    else
                      v_82 = w_82;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_82), not_null(e_82));
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
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL;
  g_83 = t;
  e_83 :
  if(((ATgetType(g_83) == AT_LIST) && ((ATermList) g_83 != ATempty)))
    {
      h_83 = ATgetFirst((ATermList) g_83);
      k_83 = (ATerm) ATgetNext((ATermList) g_83);
      f_83 :
      if(match_cons(h_83, sym__2))
        {
          i_83 = ATgetArgument(h_83, 0);
          j_83 = ATgetArgument(h_83, 1);
          {
            ATerm m_83 = NULL;
            if(((i_83 != NULL) && (i_83 != j_83)))
              _fail(j_83);
            else
              i_83 = j_83;
            {
              if(((m_83 != NULL) && (m_83 != k_83)))
                _fail(k_83);
              else
                m_83 = k_83;
              t = not_null(m_83);
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
ATerm while_not_2 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm))
{
  ATerm o_83 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        {
          t = d_105(t);
          t = o_83(t);
        }
      }
    return(t);
  }
  t = o_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm))
{
  t = f_105(t);
  t = while_not_2(t, g_105, h_105);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm i_107 (ATerm))
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL;
  s_83 = t;
  r_83 :
  if(((ATgetType(s_83) == AT_LIST) && ((ATermList) s_83 != ATempty)))
    {
      t_83 = ATgetFirst((ATermList) s_83);
      u_83 = (ATerm) ATgetNext((ATermList) s_83);
      {
        t = i_107(t);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm x_83 = NULL;
            x_83 = t;
            if(((t_83 != NULL) && (t_83 != x_83)))
              _fail(x_83);
            else
              t_83 = x_83;
            return(t);
          }
          t = fetch_1(t, m_4);
        }
        t = not_null(u_83);
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
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL;
      d_84 = t;
      b_84 :
      if(match_cons(d_84, sym__2))
        {
          e_84 = ATgetArgument(d_84, 0);
          f_84 = ATgetArgument(d_84, 1);
          {
            t = not_null(e_84);
            {
              ATerm l_84 (ATerm t)
              {
                ATerm b_23 = t;
                int c_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
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
                          ATerm n_4 (ATerm t)
                          {
                            t = not_null(f_84);
                            return(t);
                          }
                          t = HdMember_1(t, n_4);
                          t = l_84(t);
                          LocalPopChoice(e_23);
                        }
                      else
                        {
                          t = d_23;
                          t = Cons_2(t, _id, l_84);
                        }
                    }
                  }
                return(t);
              }
              t = l_84(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm i_84 = NULL;
          i_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(i_84));
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
ATerm free_vars_3 (ATerm t, ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm q_84 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_92(t);
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
              ATerm o_84 = NULL;
              ATerm t_23;
              t_23 = t;
              {
                ATerm p_84 = NULL;
                t = j_92(t);
                {
                  p_84 = t;
                  if(((o_84 != NULL) && (o_84 != p_84)))
                    _fail(p_84);
                  else
                    o_84 = p_84;
                }
              }
              t = t_23;
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    t = not_null(o_84);
                    return(t);
                  }
                  t = split_2(t, q_84, u_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm t_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = k_92(t, s_4, q_84, t_4);
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
                t = crush_3(t, w_4, union_0, q_84);
              }
            }
        }
      }
    return(t);
  }
  t = q_84(t);
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
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL;
  z_84 = t;
  u_84 :
  if(match_cons(z_84, sym_LRule_1))
    {
      a_85 = ATgetArgument(z_84, 0);
      v_84 :
      if(match_cons(a_85, sym_Rule_3))
        {
          w_84 = ATgetArgument(a_85, 0);
          x_84 = ATgetArgument(a_85, 1);
          y_84 = ATgetArgument(a_85, 2);
          {
            t = not_null(w_84);
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
      if(match_cons(z_84, sym_Scope_2))
        {
          a_85 = ATgetArgument(z_84, 0);
          b_85 = ATgetArgument(z_84, 1);
          t = not_null(a_85);
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
  ATerm z_85 = NULL,a_86 = NULL;
  z_85 = t;
  y_85 :
  if(match_cons(z_85, sym_Var_1))
    {
      a_86 = ATgetArgument(z_85, 0);
      {
        ATerm b_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_86 = NULL,f_86 = NULL;
            ATerm e_86 = NULL;
            t = SSLgetAnnotations(not_null(z_85));
            {
              e_86 = t;
              if(((d_86 != NULL) && (d_86 != e_86)))
                _fail(e_86);
              else
                d_86 = e_86;
            }
            {
              t = not_null(a_86);
              {
                ATerm h_86 = NULL;
                t = w_0(t);
                {
                  f_86 = t;
                  {
                    ATerm i_86 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_86)), not_null(d_86));
                    {
                      i_86 = t;
                      if(((h_86 != NULL) && (h_86 != i_86)))
                        _fail(i_86);
                      else
                        h_86 = i_86;
                    }
                    t = not_null(h_86);
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
              ATerm m_86 = NULL,o_86 = NULL;
              ATerm n_86 = NULL;
              t = SSLgetAnnotations(not_null(z_85));
              {
                n_86 = t;
                if(((m_86 != NULL) && (m_86 != n_86)))
                  _fail(n_86);
                else
                  m_86 = n_86;
              }
              {
                t = not_null(a_86);
                {
                  ATerm q_86 = NULL;
                  t = w_0(t);
                  {
                    o_86 = t;
                    {
                      ATerm r_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_86)), not_null(m_86));
                      {
                        r_86 = t;
                        if(((q_86 != NULL) && (q_86 != r_86)))
                          _fail(r_86);
                        else
                          q_86 = r_86;
                      }
                      t = not_null(q_86);
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
ATerm DistBinding_2 (ATerm t, ATerm r_93 (ATerm), ATerm s_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
  h_87 = t;
  g_87 :
  if(match_cons(h_87, sym__3))
    {
      i_87 = ATgetArgument(h_87, 0);
      j_87 = ATgetArgument(h_87, 1);
      k_87 = ATgetArgument(h_87, 2);
      {
        t = not_null(i_87);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm w_87 = NULL;
            w_87 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_87), not_null(k_87));
              t = r_93(t);
            }
            return(t);
          }
          ATerm z_4 (ATerm t)
          {
            ATerm y_87 = NULL;
            y_87 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_87), not_null(j_87));
              t = r_93(t);
            }
            return(t);
          }
          t = s_93(t, y_4, z_4, _id);
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
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  n_88 = t;
  m_88 :
  if(match_cons(n_88, sym__2))
    {
      o_88 = ATgetArgument(n_88, 0);
      p_88 = ATgetArgument(n_88, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_88)), not_null(o_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL;
  x_88 = t;
  u_88 :
  if(match_cons(x_88, sym__2))
    {
      y_88 = ATgetArgument(x_88, 0);
      b_89 = ATgetArgument(x_88, 1);
      v_88 :
      if(((ATgetType(y_88) == AT_LIST) && ((ATermList) y_88 != ATempty)))
        {
          z_88 = ATgetFirst((ATermList) y_88);
          a_89 = (ATerm) ATgetNext((ATermList) y_88);
          w_88 :
          if(((ATgetType(b_89) == AT_LIST) && ((ATermList) b_89 != ATempty)))
            {
              c_89 = ATgetFirst((ATermList) b_89);
              d_89 = (ATerm) ATgetNext((ATermList) b_89);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_88), not_null(c_89)), (ATerm) ATmakeAppl(sym__2, not_null(a_89), not_null(d_89)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL;
  v_89 = t;
  s_89 :
  if(match_cons(v_89, sym__2))
    {
      w_89 = ATgetArgument(v_89, 0);
      x_89 = ATgetArgument(v_89, 1);
      t_89 :
      if(((ATermList) w_89 == ATempty))
        {
          u_89 :
          if(((ATermList) x_89 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm))
{
  ATerm z_89 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_110(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          t = c_110(t);
          {
            t = _2(t, e_110, z_89);
            t = d_110(t);
          }
        }
      }
    return(t);
  }
  t = z_89(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_110 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_110);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm x_93 (ATerm), ATerm y_93 (ATerm, ATerm (ATerm)))
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym__2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      {
        ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,w_90 = NULL;
        ATerm n_24;
        n_24 = t;
        {
          ATerm r_90 = NULL;
          t = not_null(i_90);
          {
            ATerm s_90 = NULL;
            t = x_93(t);
            {
              r_90 = t;
              {
                if(((o_90 != NULL) && (o_90 != r_90)))
                  _fail(r_90);
                else
                  o_90 = r_90;
                {
                  ATerm t_90 = NULL,v_90 = NULL;
                  t = map_1(t, new_0);
                  {
                    s_90 = t;
                    {
                      if(((p_90 != NULL) && (p_90 != s_90)))
                        _fail(s_90);
                      else
                        p_90 = s_90;
                      {
                        ATerm u_90 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_90), not_null(p_90));
                        {
                          t = zip_1(t, _id);
                          {
                            u_90 = t;
                            if(((t_90 != NULL) && (t_90 != u_90)))
                              _fail(u_90);
                            else
                              t_90 = u_90;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_90), not_null(j_90));
                          {
                            t = conc_0(t);
                            {
                              v_90 = t;
                              if(((q_90 != NULL) && (q_90 != v_90)))
                                _fail(v_90);
                              else
                                q_90 = v_90;
                            }
                          }
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
          ATerm x_90 = NULL;
          t = not_null(i_90);
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(p_90);
              return(t);
            }
            t = y_93(t, a_5);
            {
              x_90 = t;
              if(((w_90 != NULL) && (w_90 != x_90)))
                _fail(x_90);
              else
                w_90 = x_90;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(w_90), not_null(j_90), not_null(q_90));
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
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
  p_91 = t;
  n_91 :
  if(match_cons(p_91, sym__2))
    {
      q_91 = ATgetArgument(p_91, 0);
      r_91 = ATgetArgument(p_91, 1);
      o_91 :
      if(((ATgetType(r_91) == AT_LIST) && ((ATermList) r_91 != ATempty)))
        {
          s_91 = ATgetFirst((ATermList) r_91);
          t_91 = (ATerm) ATgetNext((ATermList) r_91);
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_91), not_null(t_91));
        }
      else
        {
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
  ATerm b_92 = NULL,c_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,m_92 = NULL,n_92 = NULL;
  b_92 = t;
  y_91 :
  if(match_cons(b_92, sym__2))
    {
      c_92 = ATgetArgument(b_92, 0);
      f_92 = ATgetArgument(b_92, 1);
      z_91 :
      if(((ATgetType(f_92) == AT_LIST) && ((ATermList) f_92 != ATempty)))
        {
          g_92 = ATgetFirst((ATermList) f_92);
          n_92 = (ATerm) ATgetNext((ATermList) f_92);
          a_92 :
          if(match_cons(g_92, sym__2))
            {
              h_92 = ATgetArgument(g_92, 0);
              m_92 = ATgetArgument(g_92, 1);
              {
                ATerm p_92 = NULL;
                if(((c_92 != NULL) && (c_92 != h_92)))
                  _fail(h_92);
                else
                  c_92 = h_92;
                {
                  if(((p_92 != NULL) && (p_92 != m_92)))
                    _fail(m_92);
                  else
                    p_92 = m_92;
                  t = not_null(p_92);
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
ATerm RnVar_1 (ATerm t, ATerm l_93 (ATerm, ATerm (ATerm)))
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
  u_92 = t;
  t_92 :
  if(match_cons(u_92, sym__2))
    {
      v_92 = ATgetArgument(u_92, 0);
      w_92 = ATgetArgument(u_92, 1);
      {
        t = not_null(v_92);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(w_92);
              return(t);
            }
            t = split_2(t, _id, c_5);
            t = lookup_0(t);
            return(t);
          }
          t = l_93(t, b_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm o_101 (ATerm))
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
  d_93 = t;
  c_93 :
  if(match_cons(d_93, sym__2))
    {
      e_93 = ATgetArgument(d_93, 0);
      f_93 = ATgetArgument(d_93, 1);
      {
        t = not_null(e_93);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm i_93 = NULL;
            i_93 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_93), not_null(f_93));
              t = o_101(t);
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
ATerm env_alltd_1 (ATerm t, ATerm t_101 (ATerm))
{
  ATerm n_93 (ATerm t)
  {
    ATerm y_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_101(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = y_24;
        t = all_dist_1(t, n_93);
      }
    return(t);
  }
  t = n_93(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm z_93 (ATerm, ATerm (ATerm)), ATerm a_94 (ATerm), ATerm b_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_94 (ATerm, ATerm (ATerm)))
{
  ATerm p_93 = NULL;
  p_93 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_93), (ATerm) ATempty);
    {
      ATerm u_93 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, z_93);
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              {
                t = RnBinding_2(t, a_94, c_94);
                t = DistBinding_2(t, u_93, b_94);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_5);
        return(t);
      }
      t = u_93(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm v_93 (ATerm t, ATerm w_93 (ATerm))
  {
    t = Scope_2(t, w_93, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, v_93);
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
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL;
  l_94 = t;
  k_94 :
  if(((ATgetType(l_94) == AT_LIST) && ((ATermList) l_94 != ATempty)))
    {
      m_94 = ATgetFirst((ATermList) l_94);
      n_94 = (ATerm) ATgetNext((ATermList) l_94);
      t = not_null(m_94);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  s_94 :
  if(match_cons(t_94, sym__2))
    {
      u_94 = ATgetArgument(t_94, 0);
      v_94 = ATgetArgument(t_94, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_94), not_null(v_94));
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
ATerm rewrite_1 (ATerm t, ATerm b_100 (ATerm))
{
  ATerm b_95 = NULL;
  ATerm d_95 = NULL;
  b_95 = t;
  {
    ATerm e_95 = NULL;
    t = term_f_25;
    {
      t = b_100(t);
      {
        e_95 = t;
        if(((d_95 != NULL) && (d_95 != e_95)))
          _fail(e_95);
        else
          d_95 = e_95;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_95), not_null(b_95));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
  s_95 = t;
  q_95 :
  if(match_cons(s_95, sym_Call_2))
    {
      t_95 = ATgetArgument(s_95, 0);
      v_95 = ATgetArgument(s_95, 1);
      r_95 :
      if(match_cons(t_95, sym_SVar_1))
        {
          u_95 = ATgetArgument(t_95, 0);
          {
            ATerm y_95 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,r_96 = NULL;
            ATerm k_25;
            k_25 = t;
            {
              ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(u_95));
              {
                ATerm f_5 (ATerm t)
                {
                  t = term_l_25;
                  return(t);
                }
                t = rewrite_1(t, f_5);
                {
                  i_96 = t;
                  l_95 :
                  if(match_cons(i_96, sym_Defined_4))
                    {
                      j_96 = ATgetArgument(i_96, 0);
                      k_96 = ATgetArgument(i_96, 1);
                      l_96 = ATgetArgument(i_96, 2);
                      m_96 = ATgetArgument(i_96, 3);
                      m_95 :
                      if(match_string(j_96, "i_0"))
                        {
                          ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
                          if(((u_95 != NULL) && (u_95 != k_96)))
                            _fail(k_96);
                          else
                            u_95 = k_96;
                          {
                            if(((y_95 != NULL) && (y_95 != l_96)))
                              _fail(l_96);
                            else
                              y_95 = l_96;
                            {
                              if(((f_96 != NULL) && (f_96 != m_96)))
                                _fail(m_96);
                              else
                                f_96 = m_96;
                              {
                                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_95), not_null(y_95), not_null(f_96));
                                {
                                  t = strename_0(t);
                                  {
                                    n_96 = t;
                                    k_95 :
                                    if(match_cons(n_96, sym_SDef_3))
                                      {
                                        o_96 = ATgetArgument(n_96, 0);
                                        p_96 = ATgetArgument(n_96, 1);
                                        q_96 = ATgetArgument(n_96, 2);
                                        {
                                          if(((u_95 != NULL) && (u_95 != o_96)))
                                            _fail(o_96);
                                          else
                                            u_95 = o_96;
                                          {
                                            if(((g_96 != NULL) && (g_96 != p_96)))
                                              _fail(p_96);
                                            else
                                              g_96 = p_96;
                                            if(((h_96 != NULL) && (h_96 != q_96)))
                                              _fail(q_96);
                                            else
                                              h_96 = q_96;
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
              ATerm w_96 = NULL;
              t = not_null(y_95);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
                  s_96 = t;
                  o_95 :
                  if(match_cons(s_96, sym_VarDec_2))
                    {
                      t_96 = ATgetArgument(s_96, 0);
                      u_96 = ATgetArgument(s_96, 1);
                      t = not_null(t_96);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  w_96 = t;
                  if(((r_96 != NULL) && (r_96 != w_96)))
                    _fail(w_96);
                  else
                    r_96 = w_96;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_96), not_null(v_95), not_null(h_96));
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
  ATerm k_97 = NULL;
  ATerm m_25;
  m_25 = t;
  {
    ATerm l_97 = NULL;
    t = new_0(t);
    {
      l_97 = t;
      {
        if(((k_97 != NULL) && (k_97 != l_97)))
          _fail(l_97);
        else
          k_97 = l_97;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_q_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_97)), (ATerm) ATempty)));
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
                ATerm m_97 = NULL,n_97 = NULL,p_97 = NULL,q_97 = NULL,w_97 = NULL,x_97 = NULL;
                m_97 = t;
                f_97 :
                if(match_cons(m_97, sym_LChoice_2))
                  {
                    n_97 = ATgetArgument(m_97, 0);
                    x_97 = ATgetArgument(m_97, 1);
                    g_97 :
                    if(match_cons(n_97, sym_Call_2))
                      {
                        p_97 = ATgetArgument(n_97, 0);
                        w_97 = ATgetArgument(n_97, 1);
                        h_97 :
                        if(match_cons(p_97, sym_SVar_1))
                          {
                            q_97 = ATgetArgument(p_97, 0);
                            i_97 :
                            if(((ATermList) w_97 == ATempty))
                              {
                                j_97 :
                                if(match_cons(x_97, sym_Id_0))
                                  {
                                    if(((k_97 != NULL) && (k_97 != q_97)))
                                      _fail(q_97);
                                    else
                                      k_97 = q_97;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
ATerm assert_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm j_98 = NULL,k_98 = NULL,m_98 = NULL;
  j_98 = t;
  i_98 :
  if(match_cons(j_98, sym__2))
    {
      k_98 = ATgetArgument(j_98, 0);
      m_98 = ATgetArgument(j_98, 1);
      {
        ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
        ATerm e_26;
        e_26 = t;
        {
          ATerm t_98 = NULL;
          ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL;
          t = z_99(t);
          {
            t_98 = t;
            {
              if(((q_98 != NULL) && (q_98 != t_98)))
                _fail(t_98);
              else
                q_98 = t_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_98), not_null(k_98), not_null(m_98));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_26 = t;
                    int i_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_98), term_h_16);
                        t = table_get_0(t);
                        LocalPopChoice(i_26);
                      }
                    else
                      {
                        t = h_26;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_98 = t;
                      h_98 :
                      if(((ATgetType(u_98) == AT_LIST) && ((ATermList) u_98 != ATempty)))
                        {
                          v_98 = ATgetFirst((ATermList) u_98);
                          w_98 = (ATerm) ATgetNext((ATermList) u_98);
                          {
                            if(((r_98 != NULL) && (r_98 != v_98)))
                              _fail(v_98);
                            else
                              r_98 = v_98;
                            {
                              if(((s_98 != NULL) && (s_98 != w_98)))
                                _fail(w_98);
                              else
                                s_98 = w_98;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_98), term_h_16, (ATerm) ATinsert(CheckATermList(not_null(s_98)), (ATerm) ATinsert(CheckATermList(not_null(r_98)), not_null(k_98))));
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
  ATerm c_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL;
  c_99 = t;
  b_99 :
  if(match_cons(c_99, sym_SDef_3))
    {
      f_99 = ATgetArgument(c_99, 0);
      g_99 = ATgetArgument(c_99, 1);
      h_99 = ATgetArgument(c_99, 2);
      {
        ATerm j_26;
        j_26 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(f_99)), (ATerm) ATmakeAppl(sym_Defined_4, term_k_26, not_null(f_99), not_null(g_99), not_null(h_99)));
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
ATerm Strategies_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm r_99 = NULL,s_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym_Strategies_1))
    {
      s_99 = ATgetArgument(r_99, 0);
      {
        ATerm a_100 = NULL,d_100 = NULL;
        ATerm c_100 = NULL;
        t = SSLgetAnnotations(not_null(r_99));
        {
          c_100 = t;
          if(((a_100 != NULL) && (a_100 != c_100)))
            _fail(c_100);
          else
            a_100 = c_100;
        }
        {
          t = not_null(s_99);
          {
            ATerm f_100 = NULL;
            t = v_86(t);
            {
              d_100 = t;
              {
                ATerm g_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(d_100)), not_null(a_100));
                {
                  g_100 = t;
                  if(((f_100 != NULL) && (f_100 != g_100)))
                    _fail(g_100);
                  else
                    f_100 = g_100;
                }
                t = not_null(f_100);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm q_100 = NULL,r_100 = NULL;
  q_100 = t;
  p_100 :
  if(match_cons(q_100, sym_Signature_1))
    {
      r_100 = ATgetArgument(q_100, 0);
      {
        ATerm u_100 = NULL,w_100 = NULL;
        ATerm v_100 = NULL;
        t = SSLgetAnnotations(not_null(q_100));
        {
          v_100 = t;
          if(((u_100 != NULL) && (u_100 != v_100)))
            _fail(v_100);
          else
            u_100 = v_100;
        }
        {
          t = not_null(r_100);
          {
            ATerm y_100 = NULL;
            t = s_86(t);
            {
              w_100 = t;
              {
                ATerm z_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(w_100)), not_null(u_100));
                {
                  z_100 = t;
                  if(((y_100 != NULL) && (y_100 != z_100)))
                    _fail(z_100);
                  else
                    y_100 = z_100;
                }
                t = not_null(y_100);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm j_101 = NULL,k_101 = NULL;
  j_101 = t;
  i_101 :
  if(match_cons(j_101, sym_Specification_1))
    {
      k_101 = ATgetArgument(j_101, 0);
      {
        ATerm n_101 = NULL,q_101 = NULL;
        ATerm p_101 = NULL;
        t = SSLgetAnnotations(not_null(j_101));
        {
          p_101 = t;
          if(((n_101 != NULL) && (n_101 != p_101)))
            _fail(p_101);
          else
            n_101 = p_101;
        }
        {
          t = not_null(k_101);
          {
            ATerm s_101 = NULL;
            t = x_86(t);
            {
              q_101 = t;
              {
                ATerm v_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(q_101)), not_null(n_101));
                {
                  v_101 = t;
                  if(((s_101 != NULL) && (s_101 != v_101)))
                    _fail(v_101);
                  else
                    s_101 = v_101;
                }
                t = not_null(s_101);
              }
            }
          }
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
ATerm _2 (ATerm t, ATerm o_77 (ATerm), ATerm p_77 (ATerm))
{
  ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL;
  g_102 = t;
  f_102 :
  if(match_cons(g_102, sym__2))
    {
      h_102 = ATgetArgument(g_102, 0);
      i_102 = ATgetArgument(g_102, 1);
      {
        ATerm m_102 = NULL,q_102 = NULL;
        ATerm p_102 = NULL;
        t = SSLgetAnnotations(not_null(g_102));
        {
          p_102 = t;
          if(((m_102 != NULL) && (m_102 != p_102)))
            _fail(p_102);
          else
            m_102 = p_102;
        }
        {
          t = not_null(h_102);
          {
            ATerm s_102 = NULL;
            t = o_77(t);
            {
              q_102 = t;
              {
                t = not_null(i_102);
                {
                  ATerm u_102 = NULL;
                  t = p_77(t);
                  {
                    s_102 = t;
                    {
                      ATerm v_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_102), not_null(s_102)), not_null(m_102));
                      {
                        v_102 = t;
                        if(((u_102 != NULL) && (u_102 != v_102)))
                          _fail(v_102);
                        else
                          u_102 = v_102;
                      }
                      t = not_null(u_102);
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
  ATerm d_103 = NULL;
  ATerm l_26;
  l_26 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm e_103 = NULL,f_103 = NULL;
      e_103 = t;
      c_103 :
      if(match_cons(e_103, sym_Program_1))
        {
          f_103 = ATgetArgument(e_103, 0);
          if(((d_103 != NULL) && (d_103 != f_103)))
            _fail(f_103);
          else
            d_103 = f_103;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_26), not_null(d_103)), term_m_26));
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
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL;
  j_103 = t;
  i_103 :
  if(match_cons(j_103, sym__2))
    {
      k_103 = ATgetArgument(j_103, 0);
      l_103 = ATgetArgument(j_103, 1);
      {
        ATerm p_26;
        p_26 = t;
        t = SSL_printnl(not_null(k_103), not_null(l_103));
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
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
  r_103 = t;
  q_103 :
  if(match_cons(r_103, sym__2))
    {
      s_103 = ATgetArgument(r_103, 0);
      t_103 = ATgetArgument(r_103, 1);
      {
        t = not_null(s_103);
        {
          ATerm u_5 (ATerm t)
          {
            t = not_null(t_103);
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
ATerm debug_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm q_26;
  q_26 = t;
  {
    ATerm z_103 = NULL,b_104 = NULL;
    ATerm r_26;
    r_26 = t;
    {
      ATerm a_104 = NULL;
      t = d_99(t);
      {
        a_104 = t;
        if(((z_103 != NULL) && (z_103 != a_104)))
          _fail(a_104);
        else
          z_103 = a_104;
      }
    }
    t = r_26;
    {
      ATerm c_104 = NULL;
      c_104 = t;
      if(((b_104 != NULL) && (b_104 != c_104)))
        _fail(c_104);
      else
        b_104 = c_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_104)), not_null(z_103)));
        t = printnl_0(t);
      }
    }
  }
  t = q_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_104 = NULL;
  g_104 = t;
  t = SSL_is_string(not_null(g_104));
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
              ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL;
              t_104 = t;
              s_104 :
              if(match_cons(t_104, sym_Path_1))
                {
                  u_104 = ATgetArgument(t_104, 0);
                  t = not_null(u_104);
                }
              else
                {
                  if(match_cons(t_104, sym_Var_1))
                    {
                      u_104 = ATgetArgument(t_104, 0);
                      {
                        t = not_null(u_104);
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
                      if(match_cons(t_104, sym_Prefix_2))
                        {
                          u_104 = ATgetArgument(t_104, 0);
                          v_104 = ATgetArgument(t_104, 1);
                          {
                            ATerm a_105 = NULL,i_105 = NULL;
                            ATerm l_27;
                            l_27 = t;
                            {
                              ATerm b_105 = NULL;
                              t = not_null(u_104);
                              {
                                t = eval_config_0(t);
                                {
                                  b_105 = t;
                                  if(((a_105 != NULL) && (a_105 != b_105)))
                                    _fail(b_105);
                                  else
                                    a_105 = b_105;
                                }
                              }
                            }
                            t = l_27;
                            {
                              ATerm j_105 = NULL;
                              t = not_null(v_104);
                              {
                                t = eval_config_0(t);
                                {
                                  j_105 = t;
                                  if(((i_105 != NULL) && (i_105 != j_105)))
                                    _fail(j_105);
                                  else
                                    i_105 = j_105;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_105), not_null(i_105));
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
  ATerm r_105 = NULL;
  r_105 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_27, not_null(r_105));
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
              ATerm t_105 = NULL;
              ATerm u_105 = NULL;
              u_105 = t;
              if(((t_105 != NULL) && (t_105 != u_105)))
                _fail(u_105);
              else
                t_105 = u_105;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_27, not_null(r_105), not_null(t_105));
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
  ATerm y_105 = NULL;
  y_105 = t;
  t = SSL_TicksToSeconds(not_null(y_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL;
  i_106 = t;
  h_106 :
  if(match_cons(i_106, sym__2))
    {
      j_106 = ATgetArgument(i_106, 0);
      k_106 = ATgetArgument(i_106, 1);
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_106), not_null(k_106));
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            t = SSL_addr(not_null(j_106), not_null(k_106));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_106 (ATerm), ATerm d_106 (ATerm))
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_106(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm r_106 = NULL,s_106 = NULL,t_106 = NULL;
        r_106 = t;
        q_106 :
        if(((ATgetType(r_106) == AT_LIST) && ((ATermList) r_106 != ATempty)))
          {
            s_106 = ATgetFirst((ATermList) r_106);
            t_106 = (ATerm) ATgetNext((ATermList) r_106);
            {
              ATerm w_106 = NULL;
              ATerm x_106 = NULL;
              t = not_null(t_106);
              {
                t = foldr_2(t, c_106, d_106);
                {
                  x_106 = t;
                  if(((w_106 != NULL) && (w_106 != x_106)))
                    _fail(x_106);
                  else
                    w_106 = x_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_106), not_null(w_106));
                t = d_106(t);
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
ATerm crush_2 (ATerm t, ATerm r_107 (ATerm), ATerm s_107 (ATerm))
{
  ATerm f_107 = NULL;
  ATerm h_107 = NULL;
  f_107 = t;
  {
    ATerm j_107 = NULL;
    ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL;
    t = not_null(f_107);
    {
      j_107 = t;
      {
        t = SSL_explode_term(not_null(j_107));
        {
          n_107 = t;
          e_107 :
          if(match_cons(n_107, sym__2))
            {
              o_107 = ATgetArgument(n_107, 0);
              p_107 = ATgetArgument(n_107, 1);
              if(((h_107 != NULL) && (h_107 != p_107)))
                _fail(p_107);
              else
                h_107 = p_107;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_107);
      t = foldr_2(t, r_107, s_107);
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
  ATerm a_108 = NULL,b_108 = NULL,c_108 = NULL;
  a_108 = t;
  z_107 :
  if(match_cons(a_108, sym__2))
    {
      b_108 = ATgetArgument(a_108, 0);
      c_108 = ATgetArgument(a_108, 1);
      {
        ATerm b_28;
        b_28 = t;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_108), not_null(c_108));
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              t = SSL_gtr(not_null(b_108), not_null(c_108));
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
  ATerm i_108 = NULL;
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL;
      j_108 = t;
      h_108 :
      if(match_cons(j_108, sym__2))
        {
          k_108 = ATgetArgument(j_108, 0);
          l_108 = ATgetArgument(j_108, 1);
          {
            if(((i_108 != NULL) && (i_108 != k_108)))
              _fail(k_108);
            else
              i_108 = k_108;
            if(((i_108 != NULL) && (i_108 != l_108)))
              _fail(l_108);
            else
              i_108 = l_108;
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
ATerm if_verbose1_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm g_28;
    g_28 = t;
    {
      ATerm o_108 = NULL;
      ATerm p_108 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          p_108 = t;
          if(((o_108 != NULL) && (o_108 != p_108)))
            _fail(p_108);
          else
            o_108 = p_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_108), term_o_26);
        t = geq_0(t);
      }
    }
    t = g_28;
    t = l_90(t);
    return(t);
  }
  t = try_1(t, z_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm t_108 = NULL,v_108 = NULL;
    ATerm h_28;
    h_28 = t;
    {
      ATerm u_108 = NULL;
      t = run_time_0(t);
      {
        u_108 = t;
        if(((t_108 != NULL) && (t_108 != u_108)))
          _fail(u_108);
        else
          t_108 = u_108;
      }
    }
    t = h_28;
    {
      ATerm w_108 = NULL;
      t = term_j_28;
      {
        t = get_config_0(t);
        {
          w_108 = t;
          if(((v_108 != NULL) && (v_108 != w_108)))
            _fail(w_108);
          else
            v_108 = w_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_28), not_null(t_108)), term_k_28), not_null(v_108)));
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
  ATerm b_109 = NULL,c_109 = NULL,d_109 = NULL;
  b_109 = t;
  a_109 :
  if(match_cons(b_109, sym__2))
    {
      c_109 = ATgetArgument(b_109, 0);
      d_109 = ATgetArgument(b_109, 1);
      t = SSL_WriteToTextFile(not_null(c_109), not_null(d_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL;
  j_109 = t;
  i_109 :
  if(match_cons(j_109, sym__2))
    {
      k_109 = ATgetArgument(j_109, 0);
      l_109 = ATgetArgument(j_109, 1);
      t = SSL_WriteToBinaryFile(not_null(k_109), not_null(l_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_109 = NULL;
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
            ATerm u_109 = NULL,v_109 = NULL;
            u_109 = t;
            q_109 :
            if(match_cons(u_109, sym_Output_1))
              {
                v_109 = ATgetArgument(u_109, 0);
                if(((t_109 != NULL) && (t_109 != v_109)))
                  _fail(v_109);
                else
                  t_109 = v_109;
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
            ATerm w_109 = NULL;
            t = term_c_29;
            {
              w_109 = t;
              if(((t_109 != NULL) && (t_109 != w_109)))
                _fail(w_109);
              else
                t_109 = w_109;
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
        t = not_null(t_109);
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
              ATerm x_109 = NULL;
              x_109 = t;
              s_109 :
              if(!(match_cons(x_109, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm n_98 (ATerm))
{
  ATerm j_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL;
  ATerm c_30;
  c_30 = t;
  t = dtime_0(t);
  t = c_30;
  {
    t = n_98(t);
    {
      ATerm d_30;
      d_30 = t;
      {
        ATerm k_110 = NULL;
        t = dtime_0(t);
        {
          k_110 = t;
          if(((j_110 != NULL) && (j_110 != k_110)))
            _fail(k_110);
          else
            j_110 = k_110;
        }
      }
      t = d_30;
      {
        m_110 = t;
        i_110 :
        if(match_cons(m_110, sym__2))
          {
            n_110 = ATgetArgument(m_110, 0);
            o_110 = ATgetArgument(m_110, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_110)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_110))), not_null(o_110));
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
  ATerm u_110 = NULL;
  u_110 = t;
  t = SSL_ReadFromFile(not_null(u_110));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_113 (ATerm), ATerm k_113 (ATerm))
{
  ATerm z_110 = NULL,b_111 = NULL;
  ATerm e_30;
  e_30 = t;
  {
    ATerm a_111 = NULL;
    t = j_113(t);
    {
      a_111 = t;
      if(((z_110 != NULL) && (z_110 != a_111)))
        _fail(a_111);
      else
        z_110 = a_111;
    }
  }
  t = e_30;
  {
    ATerm c_111 = NULL;
    t = k_113(t);
    {
      c_111 = t;
      if(((b_111 != NULL) && (b_111 != c_111)))
        _fail(c_111);
      else
        b_111 = c_111;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_110), not_null(b_111));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_111 = NULL;
  ATerm f_30;
  f_30 = t;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 (ATerm t)
        {
          ATerm j_111 = NULL,k_111 = NULL;
          j_111 = t;
          g_111 :
          if(match_cons(j_111, sym_Input_1))
            {
              k_111 = ATgetArgument(j_111, 0);
              if(((i_111 != NULL) && (i_111 != k_111)))
                _fail(k_111);
              else
                i_111 = k_111;
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
          ATerm l_111 = NULL;
          t = term_i_30;
          {
            l_111 = t;
            if(((i_111 != NULL) && (i_111 != l_111)))
              _fail(l_111);
            else
              i_111 = l_111;
          }
        }
      }
  }
  t = f_30;
  {
    ATerm i_6 (ATerm t)
    {
      t = not_null(i_111);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_111 = NULL;
  u_111 = t;
  t_111 :
  if(match_cons(u_111, sym_Version_0))
    {
      ATerm y_111 = NULL,a_112 = NULL;
      ATerm j_30;
      j_30 = t;
      {
        ATerm z_111 = NULL;
        t = SSLgetAnnotations(not_null(u_111));
        {
          z_111 = t;
          if(((y_111 != NULL) && (y_111 != z_111)))
            _fail(z_111);
          else
            y_111 = z_111;
        }
      }
      t = j_30;
      {
        ATerm b_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_111));
        {
          b_112 = t;
          if(((a_112 != NULL) && (a_112 != b_112)))
            _fail(b_112);
          else
            a_112 = b_112;
        }
        t = not_null(a_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_98 (ATerm))
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
  t = l_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_112 = NULL;
  i_112 = t;
  t = SSL_table_create(not_null(i_112));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_112 = NULL;
  m_112 = t;
  {
    ATerm o_30;
    o_30 = t;
    {
      t = term_p_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, not_null(m_112));
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
  ATerm q_112 = NULL;
  q_112 = t;
  t = SSL_string_to_int(not_null(q_112));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL;
  y_112 = t;
  w_112 :
  if(match_string(y_112, "register-usage-info"))
    {
      t = register_usage_1(t, v_0);
    }
  else
    {
      if(((ATgetType(y_112) == AT_LIST) && ((ATermList) y_112 != ATempty)))
        {
          z_112 = ATgetFirst((ATermList) y_112);
          a_113 = (ATerm) ATgetNext((ATermList) y_112);
          x_112 :
          if(((ATgetType(a_113) == AT_LIST) && ((ATermList) a_113 != ATempty)))
            {
              b_113 = ATgetFirst((ATermList) a_113);
              c_113 = (ATerm) ATgetNext((ATermList) a_113);
              {
                ATerm h_113 = NULL;
                ATerm r_30;
                r_30 = t;
                {
                  t = not_null(z_112);
                  t = t_0(t);
                }
                t = r_30;
                {
                  ATerm i_113 = NULL;
                  t = not_null(b_113);
                  {
                    t = u_0(t);
                    {
                      i_113 = t;
                      if(((h_113 != NULL) && (h_113 != i_113)))
                        _fail(i_113);
                      else
                        h_113 = i_113;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_113)), not_null(h_113));
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
        ATerm c_114 = NULL;
        c_114 = t;
        o_113 :
        if(!(match_string(c_114, "-i")))
          {
            if(!(match_string(c_114, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        ATerm f_114 = NULL;
        ATerm u_30;
        u_30 = t;
        {
          ATerm d_114 = NULL;
          ATerm e_114 = NULL;
          e_114 = t;
          if(((d_114 != NULL) && (d_114 != e_114)))
            _fail(e_114);
          else
            d_114 = e_114;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_30, not_null(d_114));
            t = set_config_0(t);
          }
        }
        t = u_30;
        {
          ATerm g_114 = NULL;
          g_114 = t;
          if(((f_114 != NULL) && (f_114 != g_114)))
            _fail(g_114);
          else
            f_114 = g_114;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_114));
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
              ATerm h_114 = NULL;
              h_114 = t;
              r_113 :
              if(!(match_string(h_114, "-o")))
                {
                  if(!(match_string(h_114, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_6 (ATerm t)
            {
              ATerm k_114 = NULL;
              ATerm z_30;
              z_30 = t;
              {
                ATerm i_114 = NULL;
                ATerm j_114 = NULL;
                j_114 = t;
                if(((i_114 != NULL) && (i_114 != j_114)))
                  _fail(j_114);
                else
                  i_114 = j_114;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_31, not_null(i_114));
                  t = set_config_0(t);
                }
              }
              t = z_30;
              {
                ATerm l_114 = NULL;
                l_114 = t;
                if(((k_114 != NULL) && (k_114 != l_114)))
                  _fail(l_114);
                else
                  k_114 = l_114;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_114));
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
                    ATerm m_114 = NULL;
                    m_114 = t;
                    u_113 :
                    if(!(match_string(m_114, "-S")))
                      {
                        if(!(match_string(m_114, "--silent")))
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
                          ATerm n_114 = NULL;
                          n_114 = t;
                          v_113 :
                          if(!(match_string(n_114, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_6 (ATerm t)
                        {
                          ATerm u_114 = NULL;
                          ATerm j_31;
                          j_31 = t;
                          {
                            ATerm s_114 = NULL;
                            ATerm t_114 = NULL;
                            t = string_to_int_0(t);
                            {
                              t_114 = t;
                              if(((s_114 != NULL) && (s_114 != t_114)))
                                _fail(t_114);
                              else
                                s_114 = t_114;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(s_114));
                              t = set_config_0(t);
                            }
                          }
                          t = j_31;
                          {
                            ATerm v_114 = NULL;
                            v_114 = t;
                            if(((u_114 != NULL) && (u_114 != v_114)))
                              _fail(v_114);
                            else
                              u_114 = v_114;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_114));
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
                                ATerm w_114 = NULL;
                                w_114 = t;
                                y_113 :
                                if(!(match_string(w_114, "-v")))
                                  {
                                    if(!(match_string(w_114, "--version")))
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
                                      ATerm x_114 = NULL;
                                      x_114 = t;
                                      z_113 :
                                      if(!(match_string(x_114, "-b")))
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
                                        ATerm y_114 = NULL;
                                        y_114 = t;
                                        a_114 :
                                        if(!(match_string(y_114, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm h_7 (ATerm t)
                                      {
                                        t = term_z_33;
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
  ATerm g_115 = NULL;
  g_115 = t;
  t = SSL_table_destroy(not_null(g_115));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_115 = NULL;
  k_115 = t;
  t = SSL_exit(not_null(k_115));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_115 = NULL;
  o_115 = t;
  t = SSL_implode_string(not_null(o_115));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_112 (ATerm))
{
  ATerm r_115 (ATerm t)
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_115);
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        {
          t = Nil_0(t);
          t = c_112(t);
        }
      }
    return(t);
  }
  t = r_115(t);
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
        ATerm u_115 = NULL,v_115 = NULL,w_115 = NULL;
        u_115 = t;
        t_115 :
        if(((ATgetType(u_115) == AT_LIST) && ((ATermList) u_115 != ATempty)))
          {
            v_115 = ATgetFirst((ATermList) u_115);
            w_115 = (ATerm) ATgetNext((ATermList) u_115);
            {
              t = not_null(v_115);
              {
                ATerm j_7 (ATerm t)
                {
                  t = not_null(w_115);
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
  ATerm c_116 = NULL;
  c_116 = t;
  t = SSL_explode_string(not_null(c_116));
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
ATerm long_description_1 (ATerm t, ATerm a_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_111 (ATerm))
{
  ATerm f_116 (ATerm t)
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
        t = Cons_2(t, o_111, f_116);
      }
    return(t);
  }
  t = f_116(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL;
  q_116 = t;
  n_116 :
  if(((ATgetType(q_116) == AT_LIST) && ((ATermList) q_116 != ATempty)))
    {
      o_116 = ATgetFirst((ATermList) q_116);
      p_116 = (ATerm) ATgetNext((ATermList) q_116);
      {
        ATerm t_116 = NULL;
        t = not_null(p_116);
        {
          ATerm j_34;
          j_34 = t;
          {
            ATerm w_116 = NULL,y_116 = NULL,a_117 = NULL;
            ATerm k_34;
            k_34 = t;
            {
              ATerm x_116 = NULL;
              t = s_0(t);
              {
                x_116 = t;
                if(((w_116 != NULL) && (w_116 != x_116)))
                  _fail(x_116);
                else
                  w_116 = x_116;
              }
            }
            t = k_34;
            {
              ATerm z_116 = NULL;
              t = not_null(o_116);
              {
                t = r_0(t);
                {
                  z_116 = t;
                  if(((y_116 != NULL) && (y_116 != z_116)))
                    _fail(z_116);
                  else
                    y_116 = z_116;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_116)), not_null(y_116));
                {
                  a_117 = t;
                  if(((t_116 != NULL) && (t_116 != a_117)))
                    _fail(a_117);
                  else
                    t_116 = a_117;
                }
              }
            }
          }
          t = j_34;
          {
            ATerm k_7 (ATerm t)
            {
              t = not_null(t_116);
              return(t);
            }
            t = reverse_acc_2(t, r_0, k_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_116 == ATempty))
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
ATerm short_description_1 (ATerm t, ATerm z_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_79 (ATerm))
{
  ATerm l_117 = NULL,m_117 = NULL;
  l_117 = t;
  k_117 :
  if(match_cons(l_117, sym_Program_1))
    {
      m_117 = ATgetArgument(l_117, 0);
      {
        ATerm p_117 = NULL,r_117 = NULL;
        ATerm q_117 = NULL;
        t = SSLgetAnnotations(not_null(l_117));
        {
          q_117 = t;
          if(((p_117 != NULL) && (p_117 != q_117)))
            _fail(q_117);
          else
            p_117 = q_117;
        }
        {
          t = not_null(m_117);
          {
            ATerm t_117 = NULL;
            t = c_79(t);
            {
              r_117 = t;
              {
                ATerm v_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_117)), not_null(p_117));
                {
                  v_117 = t;
                  if(((t_117 != NULL) && (t_117 != v_117)))
                    _fail(v_117);
                  else
                    t_117 = v_117;
                }
                t = not_null(t_117);
              }
            }
          }
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
  ATerm e_118 = NULL;
  ATerm m_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm f_118 = NULL;
      f_118 = t;
      if(((e_118 != NULL) && (e_118 != f_118)))
        _fail(f_118);
      else
        e_118 = f_118;
      return(t);
    }
    t = Program_1(t, n_7);
    return(t);
  }
  t = option_defined_1(t, m_7);
  {
    ATerm o_7 (ATerm t)
    {
      ATerm g_118 = NULL;
      ATerm h_118 = NULL;
      t = term_f_25;
      {
        ATerm p_7 (ATerm t)
        {
          t = not_null(e_118);
          return(t);
        }
        t = short_description_1(t, p_7);
        {
          t = concat_strings_0(t);
          {
            h_118 = t;
            if(((g_118 != NULL) && (g_118 != h_118)))
              _fail(h_118);
            else
              g_118 = h_118;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(g_118)));
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
                  ATerm i_118 = NULL;
                  i_118 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_118)), term_p_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_7);
                {
                  ATerm r_7 (ATerm t)
                  {
                    ATerm k_118 = NULL;
                    ATerm l_118 = NULL;
                    t = term_f_25;
                    {
                      ATerm s_7 (ATerm t)
                      {
                        t = not_null(e_118);
                        return(t);
                      }
                      t = long_description_1(t, s_7);
                      {
                        t = concat_strings_0(t);
                        {
                          l_118 = t;
                          if(((k_118 != NULL) && (k_118 != l_118)))
                            _fail(l_118);
                          else
                            k_118 = l_118;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_118)), term_q_34));
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
ATerm Undefined_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm v_118 = NULL,w_118 = NULL;
  v_118 = t;
  u_118 :
  if(match_cons(v_118, sym_Undefined_1))
    {
      w_118 = ATgetArgument(v_118, 0);
      {
        ATerm z_118 = NULL,b_119 = NULL;
        ATerm a_119 = NULL;
        t = SSLgetAnnotations(not_null(v_118));
        {
          a_119 = t;
          if(((z_118 != NULL) && (z_118 != a_119)))
            _fail(a_119);
          else
            z_118 = a_119;
        }
        {
          t = not_null(w_118);
          {
            ATerm d_119 = NULL;
            t = d_79(t);
            {
              b_119 = t;
              {
                ATerm e_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_119)), not_null(z_118));
                {
                  e_119 = t;
                  if(((d_119 != NULL) && (d_119 != e_119)))
                    _fail(e_119);
                  else
                    d_119 = e_119;
                }
                t = not_null(d_119);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_111 (ATerm))
{
  ATerm j_119 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_111, _id);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = Cons_2(t, _id, j_119);
      }
    return(t);
  }
  t = j_119(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_96 (ATerm))
{
  t = fetch_1(t, y_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_119 = NULL;
  o_119 = t;
  n_119 :
  if(match_cons(o_119, sym_Help_0))
    {
      ATerm q_119 = NULL,s_119 = NULL;
      ATerm t_34;
      t_34 = t;
      {
        ATerm r_119 = NULL;
        t = SSLgetAnnotations(not_null(o_119));
        {
          r_119 = t;
          if(((q_119 != NULL) && (q_119 != r_119)))
            _fail(r_119);
          else
            q_119 = r_119;
        }
      }
      t = t_34;
      {
        ATerm t_119 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_119));
        {
          t_119 = t;
          if(((s_119 != NULL) && (s_119 != t_119)))
            _fail(t_119);
          else
            s_119 = t_119;
        }
        t = not_null(s_119);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_114 (ATerm))
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_114(t);
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
  ATerm z_119 = NULL,a_120 = NULL,b_120 = NULL;
  z_119 = t;
  y_119 :
  if(match_cons(z_119, sym__2))
    {
      a_120 = ATgetArgument(z_119, 0);
      b_120 = ATgetArgument(z_119, 1);
      t = SSL_table_get(not_null(a_120), not_null(b_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL;
  i_120 = t;
  h_120 :
  if(match_cons(i_120, sym__3))
    {
      j_120 = ATgetArgument(i_120, 0);
      k_120 = ATgetArgument(i_120, 1);
      l_120 = ATgetArgument(i_120, 2);
      {
        ATerm w_34;
        w_34 = t;
        {
          ATerm q_120 = NULL;
          ATerm r_120 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_120), not_null(k_120));
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
              r_120 = t;
              if(((q_120 != NULL) && (q_120 != r_120)))
                _fail(r_120);
              else
                q_120 = r_120;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_120), not_null(k_120), (ATerm) ATinsert(CheckATermList(not_null(q_120)), not_null(l_120)));
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
ATerm register_usage_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm v_120 = NULL;
  ATerm w_120 = NULL;
  t = term_f_25;
  {
    t = e_96(t);
    {
      w_120 = t;
      if(((v_120 != NULL) && (v_120 != w_120)))
        _fail(w_120);
      else
        v_120 = w_120;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, not_null(v_120));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm c_121 = NULL,e_121 = NULL,f_121 = NULL;
  c_121 = t;
  b_121 :
  if(match_string(c_121, "register-usage-info"))
    {
      t = register_usage_1(t, q_0);
    }
  else
    {
      if(((ATgetType(c_121) == AT_LIST) && ((ATermList) c_121 != ATempty)))
        {
          e_121 = ATgetFirst((ATermList) c_121);
          f_121 = (ATerm) ATgetNext((ATermList) c_121);
          {
            ATerm i_121 = NULL;
            ATerm z_34;
            z_34 = t;
            {
              t = not_null(e_121);
              t = c_0(t);
            }
            t = z_34;
            {
              ATerm j_121 = NULL;
              t = term_f_25;
              {
                t = d_0(t);
                {
                  j_121 = t;
                  if(((i_121 != NULL) && (i_121 != j_121)))
                    _fail(j_121);
                  else
                    i_121 = j_121;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_121)), not_null(i_121));
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
    ATerm o_121 = NULL;
    o_121 = t;
    n_121 :
    if(!(match_string(o_121, "--help")))
      {
        if(!(match_string(o_121, "-h")))
          {
            if(!(match_string(o_121, "-?")))
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
  ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL;
  r_121 = t;
  q_121 :
  if(((ATgetType(r_121) == AT_LIST) && ((ATermList) r_121 != ATempty)))
    {
      s_121 = ATgetFirst((ATermList) r_121);
      t_121 = (ATerm) ATgetNext((ATermList) r_121);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_121)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_121)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_89 (ATerm), ATerm o_89 (ATerm))
{
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL;
  d_122 = t;
  c_122 :
  if(((ATgetType(d_122) == AT_LIST) && ((ATermList) d_122 != ATempty)))
    {
      e_122 = ATgetFirst((ATermList) d_122);
      f_122 = (ATerm) ATgetNext((ATermList) d_122);
      {
        ATerm j_122 = NULL,l_122 = NULL;
        ATerm k_122 = NULL;
        t = SSLgetAnnotations(not_null(d_122));
        {
          k_122 = t;
          if(((j_122 != NULL) && (j_122 != k_122)))
            _fail(k_122);
          else
            j_122 = k_122;
        }
        {
          t = not_null(e_122);
          {
            ATerm n_122 = NULL;
            t = n_89(t);
            {
              l_122 = t;
              {
                t = not_null(f_122);
                {
                  ATerm p_122 = NULL;
                  t = o_89(t);
                  {
                    n_122 = t;
                    {
                      ATerm q_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_122)), not_null(l_122)), not_null(j_122));
                      {
                        q_122 = t;
                        if(((p_122 != NULL) && (p_122 != q_122)))
                          _fail(q_122);
                        else
                          p_122 = q_122;
                      }
                      t = not_null(p_122);
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
  ATerm a_123 = NULL;
  a_123 = t;
  z_122 :
  if(((ATermList) a_123 == ATempty))
    {
      {
        ATerm c_123 = NULL,e_123 = NULL;
        ATerm c_35;
        c_35 = t;
        {
          ATerm d_123 = NULL;
          t = SSLgetAnnotations(not_null(a_123));
          {
            d_123 = t;
            if(((c_123 != NULL) && (c_123 != d_123)))
              _fail(d_123);
            else
              c_123 = d_123;
          }
        }
        t = c_35;
        {
          ATerm f_123 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_123));
          {
            f_123 = t;
            if(((e_123 != NULL) && (e_123 != f_123)))
              _fail(f_123);
            else
              e_123 = f_123;
          }
          t = not_null(e_123);
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
  ATerm l_123 = NULL,m_123 = NULL,n_123 = NULL;
  l_123 = t;
  k_123 :
  if(match_cons(l_123, sym__2))
    {
      m_123 = ATgetArgument(l_123, 0);
      n_123 = ATgetArgument(l_123, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_27, not_null(m_123), not_null(n_123));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_96 (ATerm))
{
  ATerm d_35;
  d_35 = t;
  {
    ATerm w_7 (ATerm t)
    {
      t = term_e_35;
      t = c_96(t);
      return(t);
    }
    t = try_1(t, w_7);
  }
  t = d_35;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm v_123 = NULL;
      ATerm f_35;
      f_35 = t;
      {
        ATerm t_123 = NULL;
        ATerm u_123 = NULL;
        u_123 = t;
        if(((t_123 != NULL) && (t_123 != u_123)))
          _fail(u_123);
        else
          t_123 = u_123;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_28, not_null(t_123));
          t = set_config_0(t);
        }
      }
      t = f_35;
      {
        ATerm w_123 = NULL;
        w_123 = t;
        if(((v_123 != NULL) && (v_123 != w_123)))
          _fail(w_123);
        else
          v_123 = w_123;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_123));
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
                t = c_96(t);
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
  ATerm c_124 = NULL,d_124 = NULL,e_124 = NULL;
  ATerm k_35;
  k_35 = t;
  {
    ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL;
    f_124 = t;
    b_124 :
    if(match_cons(f_124, sym__3))
      {
        g_124 = ATgetArgument(f_124, 0);
        h_124 = ATgetArgument(f_124, 1);
        i_124 = ATgetArgument(f_124, 2);
        {
          if(((c_124 != NULL) && (c_124 != g_124)))
            _fail(g_124);
          else
            c_124 = g_124;
          {
            if(((d_124 != NULL) && (d_124 != h_124)))
              _fail(h_124);
            else
              d_124 = h_124;
            {
              if(((e_124 != NULL) && (e_124 != i_124)))
                _fail(i_124);
              else
                e_124 = i_124;
              t = SSL_table_put(not_null(c_124), not_null(d_124), not_null(e_124));
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
ATerm parse_options_1 (ATerm t, ATerm b_96 (ATerm))
{
  ATerm l_124 = NULL;
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
          t = b_96(t);
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
                  ATerm m_124 = NULL;
                  m_124 = t;
                  if(((l_124 != NULL) && (l_124 != m_124)))
                    _fail(m_124);
                  else
                    l_124 = m_124;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_124)), term_s_35));
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
ATerm iowrap_4 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
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
      t = c_98(t);
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_98);
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
                    t = apply_strategy_1(t, z_97);
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
ATerm iowrap_3 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm l_8 (ATerm t)
    {
      ATerm a_36;
      a_36 = t;
      {
        ATerm p_124 = NULL;
        ATerm q_124 = NULL;
        t = term_j_28;
        {
          t = get_config_0(t);
          {
            q_124 = t;
            if(((p_124 != NULL) && (p_124 != q_124)))
              _fail(q_124);
            else
              p_124 = q_124;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(p_124)));
          t = printnl_0(t);
        }
      }
      t = a_36;
      return(t);
    }
    t = if_verbose2_1(t, l_8);
    return(t);
  }
  t = iowrap_4(t, t_97, u_97, v_97, k_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  t = iowrap_3(t, r_97, s_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    t = _2(t, _id, o_97);
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
