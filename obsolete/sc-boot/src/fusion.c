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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
ATerm term_b_33;
ATerm term_k_31;
ATerm term_e_31;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_s_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_b_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_k_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_i_25;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_a_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_z_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_s_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
void init_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("this looks like an innermost", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Call_2, term_s_17, (ATerm) ATempty);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_t_22);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_t_22);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_t_22);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_t_22);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_t_22);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__3, term_a_30, term_b_30, (ATerm) ATempty);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_97 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm Explode_2 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm Op_2 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm l_90 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm q_106 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_100 (ATerm), ATerm v_100 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_100 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm));
ATerm Con_3 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm l_112 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_110 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_97 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_110 (ATerm), ATerm u_110 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_97 (ATerm));
ATerm scope_2 (ATerm, ATerm t_97 (ATerm), ATerm u_97 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm w_110 (ATerm));
ATerm innermost_1 (ATerm, ATerm g_100 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm b_88 (ATerm));
ATerm Seq_2 (ATerm, ATerm l_86 (ATerm), ATerm m_86 (ATerm));
ATerm Match_1 (ATerm, ATerm a_88 (ATerm));
ATerm LChoice_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm Choice_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm z_112 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_96 (ATerm));
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm m_92 (ATerm), ATerm n_92 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm o_92 (ATerm), ATerm p_92 (ATerm));
ATerm substitute_1 (ATerm, ATerm q_92 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm p_89 (ATerm));
ATerm Rec_2 (ATerm, ATerm a_87 (ATerm), ATerm b_87 (ATerm));
ATerm SDef_3 (ATerm, ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm));
ATerm Let_2 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm z_86 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm l_89 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm h_85 (ATerm));
ATerm Scope_2 (ATerm, ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm));
ATerm crush_3 (ATerm, ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_101 (ATerm), ATerm m_101 (ATerm));
ATerm for_3 (ATerm, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm));
ATerm HdMember_1 (ATerm, ATerm q_103 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm w_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm z_91 (ATerm), ATerm a_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm));
ATerm zip_1 (ATerm, ATerm l_106 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm f_92 (ATerm), ATerm g_92 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm t_91 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm k_99 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm p_99 (ATerm));
ATerm rename_4 (ATerm, ATerm h_92 (ATerm, ATerm (ATerm)), ATerm i_92 (ATerm), ATerm j_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_92 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm x_97 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm v_97 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm r_85 (ATerm));
ATerm Signature_1 (ATerm, ATerm o_85 (ATerm));
ATerm Specification_1 (ATerm, ATerm t_85 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_102 (ATerm), ATerm m_102 (ATerm));
ATerm crush_2 (ATerm, ATerm z_103 (ATerm), ATerm a_104 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_96 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_109 (ATerm), ATerm p_109 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_96 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_108 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_94 (ATerm));
ATerm map_1 (ATerm, ATerm t_107 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_94 (ATerm));
ATerm Program_1 (ATerm, ATerm z_77 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_108 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_95 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_110 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_94 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm q_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_94 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_94 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_95 (ATerm), ATerm u_95 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_95 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm b_8;
  b_8 = t;
  {
    ATerm j_6 = NULL;
    ATerm k_6 = NULL;
    k_6 = t;
    if(((j_6 != NULL) && (j_6 != k_6)))
      _fail(k_6);
    else
      j_6 = k_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, not_null(j_6)));
      t = printnl_0(t);
    }
  }
  t = b_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_97 (ATerm))
{
  ATerm d_8;
  d_8 = t;
  {
    t = a_97(t);
    t = debug_0(t);
  }
  t = d_8;
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  e_9 = t;
  c_9 :
  if(match_cons(e_9, sym_ExplodeCong_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      d_9 = ATgetArgument(e_9, 1);
      {
        ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
        ATerm n_9 = NULL;
        ATerm o_9 = NULL;
        t = new_0(t);
        {
          n_9 = t;
          {
            if(((j_9 != NULL) && (j_9 != n_9)))
              _fail(n_9);
            else
              j_9 = n_9;
            {
              ATerm p_9 = NULL;
              t = new_0(t);
              {
                o_9 = t;
                {
                  if(((k_9 != NULL) && (k_9 != o_9)))
                    _fail(o_9);
                  else
                    k_9 = o_9;
                  {
                    ATerm q_9 = NULL;
                    t = new_0(t);
                    {
                      p_9 = t;
                      {
                        if(((l_9 != NULL) && (l_9 != p_9)))
                          _fail(p_9);
                        else
                          l_9 = p_9;
                        {
                          t = new_0(t);
                          {
                            q_9 = t;
                            if(((m_9 != NULL) && (m_9 != q_9)))
                              _fail(q_9);
                            else
                              m_9 = q_9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_9)), not_null(l_9)), not_null(k_9)), not_null(j_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_9)))))));
      }
    }
  else
    {
      if(match_cons(e_9, sym_Build_1))
        {
          f_9 = ATgetArgument(e_9, 0);
          {
            ATerm s_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
            ATerm x_9 = NULL;
            ATerm b_10 = NULL;
            t = new_0(t);
            {
              x_9 = t;
              {
                if(((v_9 != NULL) && (v_9 != x_9)))
                  _fail(x_9);
                else
                  v_9 = x_9;
                {
                  t = not_null(f_9);
                  {
                    ATerm e_0 (ATerm t)
                    {
                      ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
                      y_9 = t;
                      v_8 :
                      if(match_cons(y_9, sym_Explode_2))
                        {
                          z_9 = ATgetArgument(y_9, 0);
                          a_10 = ATgetArgument(y_9, 1);
                          {
                            if(((s_9 != NULL) && (s_9 != z_9)))
                              _fail(z_9);
                            else
                              s_9 = z_9;
                            {
                              if(((u_9 != NULL) && (u_9 != a_10)))
                                _fail(a_10);
                              else
                                u_9 = a_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_9));
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
                      b_10 = t;
                      if(((w_9 != NULL) && (w_9 != b_10)))
                        _fail(b_10);
                      else
                        w_9 = b_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_9)), not_null(s_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_9)))));
          }
        }
      else
        {
          if(match_cons(e_9, sym_Match_1))
            {
              f_9 = ATgetArgument(e_9, 0);
              {
                ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
                ATerm i_10 = NULL;
                ATerm j_10 = NULL;
                t = new_0(t);
                {
                  i_10 = t;
                  {
                    if(((f_10 != NULL) && (f_10 != i_10)))
                      _fail(i_10);
                    else
                      f_10 = i_10;
                    {
                      ATerm n_10 = NULL;
                      t = new_0(t);
                      {
                        j_10 = t;
                        {
                          if(((g_10 != NULL) && (g_10 != j_10)))
                            _fail(j_10);
                          else
                            g_10 = j_10;
                          {
                            t = not_null(f_9);
                            {
                              ATerm f_0 (ATerm t)
                              {
                                ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
                                k_10 = t;
                                a_9 :
                                if(match_cons(k_10, sym_Explode_2))
                                  {
                                    l_10 = ATgetArgument(k_10, 0);
                                    m_10 = ATgetArgument(k_10, 1);
                                    {
                                      if(((d_10 != NULL) && (d_10 != l_10)))
                                        _fail(l_10);
                                      else
                                        d_10 = l_10;
                                      {
                                        if(((e_10 != NULL) && (e_10 != m_10)))
                                          _fail(m_10);
                                        else
                                          e_10 = m_10;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_10));
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
                                n_10 = t;
                                if(((h_10 != NULL) && (h_10 != n_10)))
                                  _fail(n_10);
                                else
                                  h_10 = n_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_f_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_10)), (ATerm) ATmakeAppl(sym_Op_2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_10)), not_null(d_10)))))));
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
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_Match_1))
    {
      v_11 = ATgetArgument(u_11, 0);
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
            ATerm b_12 = NULL;
            ATerm f_12 = NULL;
            t = new_0(t);
            {
              b_12 = t;
              {
                if(((z_11 != NULL) && (z_11 != b_12)))
                  _fail(b_12);
                else
                  z_11 = b_12;
                {
                  t = not_null(v_11);
                  {
                    ATerm g_0 (ATerm t)
                    {
                      ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
                      c_12 = t;
                      i_11 :
                      if(match_cons(c_12, sym_Anno_2))
                        {
                          d_12 = ATgetArgument(c_12, 0);
                          e_12 = ATgetArgument(c_12, 1);
                          {
                            if(((x_11 != NULL) && (x_11 != d_12)))
                              _fail(d_12);
                            else
                              x_11 = d_12;
                            {
                              if(((y_11 != NULL) && (y_11 != e_12)))
                                _fail(e_12);
                              else
                                y_11 = e_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_11)), not_null(x_11));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, g_0);
                    {
                      f_12 = t;
                      if(((a_12 != NULL) && (a_12 != f_12)))
                        _fail(f_12);
                      else
                        a_12 = f_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_11)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_11))))));
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            {
              ATerm k_8 = t;
              int l_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_12 = NULL,j_12 = NULL,k_12 = NULL;
                  ATerm l_12 = NULL;
                  ATerm o_12 = NULL;
                  t = new_0(t);
                  {
                    l_12 = t;
                    {
                      if(((j_12 != NULL) && (j_12 != l_12)))
                        _fail(l_12);
                      else
                        j_12 = l_12;
                      {
                        t = not_null(v_11);
                        {
                          ATerm h_0 (ATerm t)
                          {
                            ATerm m_12 = NULL,n_12 = NULL;
                            m_12 = t;
                            m_11 :
                            if(match_cons(m_12, sym_RootApp_1))
                              {
                                n_12 = ATgetArgument(m_12, 0);
                                {
                                  if(((h_12 != NULL) && (h_12 != n_12)))
                                    _fail(n_12);
                                  else
                                    h_12 = n_12;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_12));
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
                            o_12 = t;
                            if(((k_12 != NULL) && (k_12 != o_12)))
                              _fail(o_12);
                            else
                              k_12 = o_12;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_12))), not_null(h_12))));
                  LocalPopChoice(l_8);
                }
              else
                {
                  t = k_8;
                  {
                    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
                    ATerm u_12 = NULL;
                    ATerm y_12 = NULL;
                    t = new_0(t);
                    {
                      u_12 = t;
                      {
                        if(((s_12 != NULL) && (s_12 != u_12)))
                          _fail(u_12);
                        else
                          s_12 = u_12;
                        {
                          t = not_null(v_11);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
                              v_12 = t;
                              r_11 :
                              if(match_cons(v_12, sym_App_2))
                                {
                                  w_12 = ATgetArgument(v_12, 0);
                                  x_12 = ATgetArgument(v_12, 1);
                                  {
                                    if(((r_12 != NULL) && (r_12 != w_12)))
                                      _fail(w_12);
                                    else
                                      r_12 = w_12;
                                    {
                                      if(((q_12 != NULL) && (q_12 != x_12)))
                                        _fail(x_12);
                                      else
                                        q_12 = x_12;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12));
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
                              y_12 = t;
                              if(((t_12 != NULL) && (t_12 != y_12)))
                                _fail(y_12);
                              else
                                t_12 = y_12;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_12)), not_null(r_12)))));
                  }
                }
            }
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
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  q_13 = t;
  o_13 :
  if(match_cons(q_13, sym_Match_1))
    {
      r_13 = ATgetArgument(q_13, 0);
      p_13 :
      if(match_cons(r_13, sym_RootApp_1))
        {
          s_13 = ATgetArgument(r_13, 0);
          t = not_null(s_13);
        }
      else
        {
          if(match_cons(r_13, sym_App_2))
            {
              s_13 = ATgetArgument(r_13, 0);
              t_13 = ATgetArgument(r_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(s_13), not_null(t_13));
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
  ATerm g_14 = NULL,h_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_Match_1))
    {
      h_14 = ATgetArgument(g_14, 0);
      {
        ATerm j_14 = NULL,k_14 = NULL;
        ATerm o_14 = NULL;
        t = not_null(h_14);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
            l_14 = t;
            c_14 :
            if(match_cons(l_14, sym_RootApp_1))
              {
                m_14 = ATgetArgument(l_14, 0);
                d_14 :
                if(match_cons(m_14, sym_Match_1))
                  {
                    n_14 = ATgetArgument(m_14, 0);
                    {
                      if(((j_14 != NULL) && (j_14 != n_14)))
                        _fail(n_14);
                      else
                        j_14 = n_14;
                      t = not_null(j_14);
                    }
                  }
                else
                  {
                    _fail(t);
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
            o_14 = t;
            if(((k_14 != NULL) && (k_14 != o_14)))
              _fail(o_14);
            else
              k_14 = o_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(k_14));
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
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
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
            t = Mapp1_0(t);
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_Build_1))
    {
      k_15 = ATgetArgument(j_15, 0);
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_15 = NULL,n_15 = NULL,p_15 = NULL,q_15 = NULL;
            ATerm r_15 = NULL;
            ATerm v_15 = NULL;
            t = new_0(t);
            {
              r_15 = t;
              {
                if(((p_15 != NULL) && (p_15 != r_15)))
                  _fail(r_15);
                else
                  p_15 = r_15;
                {
                  t = not_null(k_15);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
                      s_15 = t;
                      y_14 :
                      if(match_cons(s_15, sym_Anno_2))
                        {
                          t_15 = ATgetArgument(s_15, 0);
                          u_15 = ATgetArgument(s_15, 1);
                          {
                            if(((m_15 != NULL) && (m_15 != t_15)))
                              _fail(t_15);
                            else
                              m_15 = t_15;
                            {
                              if(((n_15 != NULL) && (n_15 != u_15)))
                                _fail(u_15);
                              else
                                n_15 = u_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_15));
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
                      v_15 = t;
                      if(((q_15 != NULL) && (q_15 != v_15)))
                        _fail(v_15);
                      else
                        q_15 = v_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_s_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_15)), not_null(m_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_15))));
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            {
              ATerm t_8 = t;
              int u_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
                  ATerm a_16 = NULL;
                  ATerm d_16 = NULL;
                  t = new_0(t);
                  {
                    a_16 = t;
                    {
                      if(((y_15 != NULL) && (y_15 != a_16)))
                        _fail(a_16);
                      else
                        y_15 = a_16;
                      {
                        t = not_null(k_15);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_16 = NULL,c_16 = NULL;
                            b_16 = t;
                            c_15 :
                            if(match_cons(b_16, sym_RootApp_1))
                              {
                                c_16 = ATgetArgument(b_16, 0);
                                {
                                  if(((x_15 != NULL) && (x_15 != c_16)))
                                    _fail(c_16);
                                  else
                                    x_15 = c_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_15));
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
                            d_16 = t;
                            if(((z_15 != NULL) && (z_15 != d_16)))
                              _fail(d_16);
                            else
                              z_15 = d_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_15))));
                  LocalPopChoice(u_8);
                }
              else
                {
                  t = t_8;
                  {
                    ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
                    ATerm j_16 = NULL;
                    ATerm n_16 = NULL;
                    t = new_0(t);
                    {
                      j_16 = t;
                      {
                        if(((h_16 != NULL) && (h_16 != j_16)))
                          _fail(j_16);
                        else
                          h_16 = j_16;
                        {
                          t = not_null(k_15);
                          {
                            ATerm b_1 (ATerm t)
                            {
                              ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
                              k_16 = t;
                              g_15 :
                              if(match_cons(k_16, sym_App_2))
                                {
                                  l_16 = ATgetArgument(k_16, 0);
                                  m_16 = ATgetArgument(k_16, 1);
                                  {
                                    if(((f_16 != NULL) && (f_16 != l_16)))
                                      _fail(l_16);
                                    else
                                      f_16 = l_16;
                                    {
                                      if(((g_16 != NULL) && (g_16 != m_16)))
                                        _fail(m_16);
                                      else
                                        g_16 = m_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_16));
                                    }
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
                              n_16 = t;
                              if(((i_16 != NULL) && (i_16 != n_16)))
                                _fail(n_16);
                              else
                                i_16 = n_16;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_16), not_null(g_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_16))));
                  }
                }
            }
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
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  g_17 = t;
  d_17 :
  if(match_cons(g_17, sym_Build_1))
    {
      h_17 = ATgetArgument(g_17, 0);
      f_17 :
      if(match_cons(h_17, sym_RootApp_1))
        {
          i_17 = ATgetArgument(h_17, 0);
          t = not_null(i_17);
        }
      else
        {
          if(match_cons(h_17, sym_App_2))
            {
              i_17 = ATgetArgument(h_17, 0);
              j_17 = ATgetArgument(h_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_17)), not_null(i_17));
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
ATerm Prim_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_Prim_2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      {
        ATerm l_18 = NULL,n_18 = NULL;
        ATerm m_18 = NULL;
        t = SSLgetAnnotations(not_null(v_17));
        {
          m_18 = t;
          if(((l_18 != NULL) && (l_18 != m_18)))
            _fail(m_18);
          else
            l_18 = m_18;
        }
        {
          t = not_null(w_17);
          {
            ATerm p_18 = NULL;
            t = h_88(t);
            {
              n_18 = t;
              {
                t = not_null(x_17);
                {
                  ATerm r_18 = NULL;
                  t = i_88(t);
                  {
                    p_18 = t;
                    {
                      ATerm t_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(n_18), not_null(p_18)), not_null(l_18));
                      {
                        t_18 = t;
                        if(((r_18 != NULL) && (r_18 != t_18)))
                          _fail(t_18);
                        else
                          r_18 = t_18;
                      }
                      t = not_null(r_18);
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
ATerm Explode_2 (ATerm t, ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_Explode_2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      {
        ATerm m_19 = NULL,o_19 = NULL;
        ATerm n_19 = NULL;
        t = SSLgetAnnotations(not_null(g_19));
        {
          n_19 = t;
          if(((m_19 != NULL) && (m_19 != n_19)))
            _fail(n_19);
          else
            m_19 = n_19;
        }
        {
          t = not_null(h_19);
          {
            ATerm q_19 = NULL;
            t = m_84(t);
            {
              o_19 = t;
              {
                t = not_null(i_19);
                {
                  ATerm s_19 = NULL;
                  t = n_84(t);
                  {
                    q_19 = t;
                    {
                      ATerm t_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(o_19), not_null(q_19)), not_null(m_19));
                      {
                        t_19 = t;
                        if(((s_19 != NULL) && (s_19 != t_19)))
                          _fail(t_19);
                        else
                          s_19 = t_19;
                      }
                      t = not_null(s_19);
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
ATerm Op_2 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm))
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_Op_2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      {
        ATerm n_20 = NULL,p_20 = NULL;
        ATerm o_20 = NULL;
        t = SSLgetAnnotations(not_null(g_20));
        {
          o_20 = t;
          if(((n_20 != NULL) && (n_20 != o_20)))
            _fail(o_20);
          else
            n_20 = o_20;
        }
        {
          t = not_null(h_20);
          {
            ATerm r_20 = NULL;
            t = h_86(t);
            {
              p_20 = t;
              {
                t = not_null(i_20);
                {
                  ATerm t_20 = NULL;
                  t = i_86(t);
                  {
                    r_20 = t;
                    {
                      ATerm u_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(p_20), not_null(r_20)), not_null(n_20));
                      {
                        u_20 = t;
                        if(((t_20 != NULL) && (t_20 != u_20)))
                          _fail(u_20);
                        else
                          t_20 = u_20;
                      }
                      t = not_null(t_20);
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
ATerm pat_td_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_90(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                t = pat_td_1(t, l_90);
                return(t);
              }
              t = fetch_1(t, d_1);
              return(t);
            }
            t = Op_2(t, _id, c_1);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm b_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = pat_td_1(t, l_90);
                    return(t);
                  }
                  t = Explode_2(t, _id, e_1);
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = b_9;
                  {
                    ATerm h_9 = t;
                    int i_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_1 (ATerm t)
                        {
                          t = pat_td_1(t, l_90);
                          return(t);
                        }
                        t = Explode_2(t, f_1, _id);
                        LocalPopChoice(i_9);
                      }
                    else
                      {
                        t = h_9;
                        {
                          ATerm g_1 (ATerm t)
                          {
                            ATerm h_1 (ATerm t)
                            {
                              t = pat_td_1(t, l_90);
                              return(t);
                            }
                            t = fetch_1(t, h_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, g_1);
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
  ATerm m_21 = NULL,n_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym_Build_1))
    {
      n_21 = ATgetArgument(m_21, 0);
      {
        ATerm r_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL,q_21 = NULL;
            ATerm u_21 = NULL;
            t = not_null(n_21);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
                r_21 = t;
                d_21 :
                if(match_cons(r_21, sym_RootApp_1))
                  {
                    s_21 = ATgetArgument(r_21, 0);
                    e_21 :
                    if(match_cons(s_21, sym_Build_1))
                      {
                        t_21 = ATgetArgument(s_21, 0);
                        {
                          if(((p_21 != NULL) && (p_21 != t_21)))
                            _fail(t_21);
                          else
                            p_21 = t_21;
                          t = not_null(p_21);
                        }
                      }
                    else
                      {
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
                u_21 = t;
                if(((q_21 != NULL) && (q_21 != u_21)))
                  _fail(u_21);
                else
                  q_21 = u_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_21));
            LocalPopChoice(t_9);
          }
        else
          {
            t = r_9;
            {
              ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
              ATerm d_22 = NULL;
              t = not_null(n_21);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
                  z_21 = t;
                  i_21 :
                  if(match_cons(z_21, sym_App_2))
                    {
                      a_22 = ATgetArgument(z_21, 0);
                      c_22 = ATgetArgument(z_21, 1);
                      j_21 :
                      if(match_cons(a_22, sym_Build_1))
                        {
                          b_22 = ATgetArgument(a_22, 0);
                          {
                            if(((x_21 != NULL) && (x_21 != b_22)))
                              _fail(b_22);
                            else
                              x_21 = b_22;
                            {
                              if(((w_21 != NULL) && (w_21 != c_22)))
                                _fail(c_22);
                              else
                                w_21 = c_22;
                              t = not_null(x_21);
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
                t = pat_td_1(t, j_1);
                {
                  d_22 = t;
                  if(((y_21 != NULL) && (y_21 != d_22)))
                    _fail(d_22);
                  else
                    y_21 = d_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(y_21));
            }
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
  ATerm c_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(o_10);
    }
  else
    {
      t = c_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  e_23 = t;
  w_22 :
  if(match_cons(e_23, sym_InfixApp_3))
    {
      f_23 = ATgetArgument(e_23, 0);
      b_23 = ATgetArgument(e_23, 1);
      a_23 = ATgetArgument(e_23, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_23), (ATerm) ATmakeAppl(sym_Op_2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_23)), not_null(f_23))));
    }
  else
    {
      if(match_cons(e_23, sym_BAM_3))
        {
          f_23 = ATgetArgument(e_23, 0);
          b_23 = ATgetArgument(e_23, 1);
          a_23 = ATgetArgument(e_23, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(a_23))), not_null(f_23)), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_23))));
        }
      else
        {
          if(match_cons(e_23, sym_AM_2))
            {
              f_23 = ATgetArgument(e_23, 0);
              b_23 = ATgetArgument(e_23, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_23), (ATerm) ATmakeAppl(sym_Match_1, not_null(b_23)));
            }
          else
            {
              if(match_cons(e_23, sym_MA_2))
                {
                  f_23 = ATgetArgument(e_23, 0);
                  b_23 = ATgetArgument(e_23, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_23)), not_null(b_23));
                }
              else
                {
                  if(match_cons(e_23, sym_BA_2))
                    {
                      f_23 = ATgetArgument(e_23, 0);
                      b_23 = ATgetArgument(e_23, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_23)), not_null(f_23));
                    }
                  else
                    {
                      if(match_cons(e_23, sym_Lets_2))
                        {
                          f_23 = ATgetArgument(e_23, 0);
                          b_23 = ATgetArgument(e_23, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_23), not_null(b_23));
                        }
                      else
                        {
                          if(match_cons(e_23, sym_LChoices_1))
                            {
                              f_23 = ATgetArgument(e_23, 0);
                              x_22 :
                              if(((ATgetType(f_23) == AT_LIST) && ((ATermList) f_23 != ATempty)))
                                {
                                  c_23 = ATgetFirst((ATermList) f_23);
                                  d_23 = (ATerm) ATgetNext((ATermList) f_23);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_23), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_23)));
                                }
                              else
                                {
                                  if(((ATermList) f_23 == ATempty))
                                    {
                                      t = term_r_10;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(e_23, sym_Choices_1))
                                {
                                  f_23 = ATgetArgument(e_23, 0);
                                  y_22 :
                                  if(((ATgetType(f_23) == AT_LIST) && ((ATermList) f_23 != ATempty)))
                                    {
                                      c_23 = ATgetFirst((ATermList) f_23);
                                      d_23 = (ATerm) ATgetNext((ATermList) f_23);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_23), (ATerm) ATmakeAppl(sym_Choices_1, not_null(d_23)));
                                    }
                                  else
                                    {
                                      if(((ATermList) f_23 == ATempty))
                                        {
                                          t = term_r_10;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(e_23, sym_Seqs_1))
                                    {
                                      f_23 = ATgetArgument(e_23, 0);
                                      z_22 :
                                      if(((ATgetType(f_23) == AT_LIST) && ((ATermList) f_23 != ATempty)))
                                        {
                                          c_23 = ATgetFirst((ATermList) f_23);
                                          d_23 = (ATerm) ATgetNext((ATermList) f_23);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_23), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_23)));
                                        }
                                      else
                                        {
                                          if(((ATermList) f_23 == ATempty))
                                            {
                                              t = term_s_10;
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
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  q_24 = t;
  n_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      u_24 = ATgetArgument(q_24, 1);
      o_24 :
      if(match_cons(r_24, sym__2))
        {
          s_24 = ATgetArgument(r_24, 0);
          t_24 = ATgetArgument(r_24, 1);
          p_24 :
          if(match_cons(u_24, sym__2))
            {
              v_24 = ATgetArgument(u_24, 0);
              w_24 = ATgetArgument(u_24, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_24)), not_null(s_24)), (ATerm) ATinsert(CheckATermList(not_null(w_24)), not_null(t_24)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(((ATgetType(e_25) == AT_LIST) && ((ATermList) e_25 != ATempty)))
    {
      f_25 = ATgetFirst((ATermList) e_25);
      g_25 = (ATerm) ATgetNext((ATermList) e_25);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_25), not_null(g_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  l_25 :
  if(((ATermList) m_25 == ATempty))
    {
      t = term_t_10;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm q_106 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, q_106);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  ATerm y_25 (ATerm t)
  {
    ATerm v_25 = NULL;
    ATerm w_25 = NULL;
    t = not_null(s_25);
    {
      ATerm u_10 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_10;
        }
      {
        t = new_0(t);
        {
          w_25 = t;
          if(((v_25 != NULL) && (v_25 != w_25)))
            _fail(w_25);
          else
            v_25 = w_25;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(v_25)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_25)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_25))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_25))));
    return(t);
  }
  ATerm z_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_10, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25))));
    return(t);
  }
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym_Var_1))
    {
      t_25 = ATgetArgument(s_25, 0);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_25(t);
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = z_25(t);
          }
      }
    }
  else
    {
      t = y_25(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym_Prim_2))
    {
      h_26 = ATgetArgument(g_26, 0);
      i_26 = ATgetArgument(g_26, 1);
      {
        ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
        ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
        t = not_null(i_26);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm x_10 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_10;
              }
            return(t);
          }
          t = fetch_1(t, k_1);
          {
            t = not_null(i_26);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm l_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, l_1);
                {
                  o_26 = t;
                  d_26 :
                  if(match_cons(o_26, sym__2))
                    {
                      p_26 = ATgetArgument(o_26, 0);
                      q_26 = ATgetArgument(o_26, 1);
                      e_26 :
                      if(match_cons(q_26, sym__2))
                        {
                          r_26 = ATgetArgument(q_26, 0);
                          s_26 = ATgetArgument(q_26, 1);
                          {
                            if(((l_26 != NULL) && (l_26 != p_26)))
                              _fail(p_26);
                            else
                              l_26 = p_26;
                            {
                              if(((m_26 != NULL) && (m_26 != r_26)))
                                _fail(r_26);
                              else
                                m_26 = r_26;
                              if(((n_26 != NULL) && (n_26 != s_26)))
                                _fail(s_26);
                              else
                                n_26 = s_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_26)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(h_26), not_null(n_26))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm u_100 (ATerm), ATerm v_100 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_100(t);
        t = v_26(t);
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = v_100(t);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_100 (ATerm))
{
  t = repeat_2(t, x_100, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_Wld_0))
    {
      ATerm c_27 = NULL,e_27 = NULL;
      ATerm a_11;
      a_11 = t;
      {
        ATerm d_27 = NULL;
        t = SSLgetAnnotations(not_null(a_27));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
      }
      t = a_11;
      {
        ATerm f_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(c_27));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm b_11 = t;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, m_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm))
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  o_27 :
  if(match_cons(p_27, sym_App_2))
    {
      q_27 = ATgetArgument(p_27, 0);
      r_27 = ATgetArgument(p_27, 1);
      {
        ATerm v_27 = NULL,x_27 = NULL;
        ATerm w_27 = NULL;
        t = SSLgetAnnotations(not_null(p_27));
        {
          w_27 = t;
          if(((v_27 != NULL) && (v_27 != w_27)))
            _fail(w_27);
          else
            v_27 = w_27;
        }
        {
          t = not_null(q_27);
          {
            ATerm z_27 = NULL;
            t = g_84(t);
            {
              x_27 = t;
              {
                t = not_null(r_27);
                {
                  ATerm b_28 = NULL;
                  t = h_84(t);
                  {
                    z_27 = t;
                    {
                      ATerm c_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(x_27), not_null(z_27)), not_null(v_27));
                      {
                        c_28 = t;
                        if(((b_28 != NULL) && (b_28 != c_28)))
                          _fail(c_28);
                        else
                          b_28 = c_28;
                      }
                      t = not_null(b_28);
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
ATerm Con_3 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_Con_3))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      s_28 = ATgetArgument(p_28, 2);
      {
        ATerm x_28 = NULL,z_28 = NULL;
        ATerm y_28 = NULL;
        t = SSLgetAnnotations(not_null(p_28));
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
        {
          t = not_null(q_28);
          {
            ATerm b_29 = NULL;
            t = d_84(t);
            {
              z_28 = t;
              {
                t = not_null(r_28);
                {
                  ATerm d_29 = NULL;
                  t = e_84(t);
                  {
                    b_29 = t;
                    {
                      t = not_null(s_28);
                      {
                        ATerm f_29 = NULL;
                        t = f_84(t);
                        {
                          d_29 = t;
                          {
                            ATerm g_29 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(z_28), not_null(b_29), not_null(d_29)), not_null(x_28));
                            {
                              g_29 = t;
                              if(((f_29 != NULL) && (f_29 != g_29)))
                                _fail(g_29);
                              else
                                f_29 = g_29;
                            }
                            t = not_null(f_29);
                          }
                        }
                      }
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
  ATerm e_11 = t;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, n_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_11;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  r_29 = t;
  p_29 :
  if(match_cons(r_29, sym_SRule_1))
    {
      s_29 = ATgetArgument(r_29, 0);
      q_29 :
      if(match_cons(s_29, sym_StratRule_3))
        {
          t_29 = ATgetArgument(s_29, 0);
          u_29 = ATgetArgument(s_29, 1);
          v_29 = ATgetArgument(s_29, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_29)), (ATerm) ATmakeAppl(sym_Where_1, not_null(v_29))), not_null(t_29)));
        }
      else
        {
          if(match_cons(s_29, sym_Rule_3))
            {
              t_29 = ATgetArgument(s_29, 0);
              u_29 = ATgetArgument(s_29, 1);
              v_29 = ATgetArgument(s_29, 2);
              {
                t = not_null(t_29);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(u_29);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(u_29))), (ATerm) ATmakeAppl(sym_Where_1, not_null(v_29))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_29))));
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
ATerm oncetd_1 (ATerm t, ATerm l_112 (ATerm))
{
  ATerm e_30 (ATerm t)
  {
    ATerm h_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_112(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = h_11;
        t = _one(t, e_30);
      }
    return(t);
  }
  t = e_30(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  t_31 = t;
  r_31 :
  if(match_cons(t_31, sym_SRule_1))
    {
      u_31 = ATgetArgument(t_31, 0);
      s_31 :
      if(match_cons(u_31, sym_Rule_3))
        {
          v_31 = ATgetArgument(u_31, 0);
          w_31 = ATgetArgument(u_31, 1);
          x_31 = ATgetArgument(u_31, 2);
          {
            ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
            ATerm j_32 = NULL;
            ATerm p_32 = NULL;
            t = new_0(t);
            {
              j_32 = t;
              {
                if(((g_32 != NULL) && (g_32 != j_32)))
                  _fail(j_32);
                else
                  g_32 = j_32;
                {
                  t = not_null(v_31);
                  {
                    ATerm x_32 = NULL;
                    ATerm o_1 (ATerm t)
                    {
                      ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
                      k_32 = t;
                      k_30 :
                      if(match_cons(k_32, sym_Con_3))
                        {
                          l_32 = ATgetArgument(k_32, 0);
                          n_32 = ATgetArgument(k_32, 1);
                          o_32 = ATgetArgument(k_32, 2);
                          l_30 :
                          if(match_cons(l_32, sym_Var_1))
                            {
                              m_32 = ATgetArgument(l_32, 0);
                              {
                                if(((f_32 != NULL) && (f_32 != m_32)))
                                  _fail(m_32);
                                else
                                  f_32 = m_32;
                                {
                                  if(((d_32 != NULL) && (d_32 != n_32)))
                                    _fail(n_32);
                                  else
                                    d_32 = n_32;
                                  {
                                    if(((b_32 != NULL) && (b_32 != o_32)))
                                      _fail(o_32);
                                    else
                                      b_32 = o_32;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_32));
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
                    t = oncetd_1(t, o_1);
                    {
                      p_32 = t;
                      {
                        if(((h_32 != NULL) && (h_32 != p_32)))
                          _fail(p_32);
                        else
                          h_32 = p_32;
                        {
                          t = not_null(w_31);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
                              q_32 = t;
                              o_30 :
                              if(match_cons(q_32, sym_Con_3))
                                {
                                  r_32 = ATgetArgument(q_32, 0);
                                  t_32 = ATgetArgument(q_32, 1);
                                  u_32 = ATgetArgument(q_32, 2);
                                  n_31 :
                                  if(match_cons(r_32, sym_Var_1))
                                    {
                                      s_32 = ATgetArgument(r_32, 0);
                                      o_31 :
                                      if(match_cons(u_32, sym_Call_2))
                                        {
                                          v_32 = ATgetArgument(u_32, 0);
                                          w_32 = ATgetArgument(u_32, 1);
                                          p_31 :
                                          if(((ATermList) w_32 == ATempty))
                                            {
                                              {
                                                if(((f_32 != NULL) && (f_32 != s_32)))
                                                  _fail(s_32);
                                                else
                                                  f_32 = s_32;
                                                {
                                                  if(((e_32 != NULL) && (e_32 != t_32)))
                                                    _fail(t_32);
                                                  else
                                                    e_32 = t_32;
                                                  {
                                                    if(((c_32 != NULL) && (c_32 != v_32)))
                                                      _fail(v_32);
                                                    else
                                                      c_32 = v_32;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32));
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
                            t = oncetd_1(t, p_1);
                            {
                              x_32 = t;
                              if(((i_32 != NULL) && (i_32 != x_32)))
                                _fail(x_32);
                              else
                                i_32 = x_32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_32)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_32), not_null(i_32), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_31), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(c_32), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_32), not_null(e_32), term_s_10)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32)))))));
          }
        }
      else
        {
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
  ATerm q_1 (ATerm t)
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm v_110 (ATerm))
{
  t = v_110(t);
  {
    ATerm r_1 (ATerm t)
    {
      t = topdown_1(t, v_110);
      return(t);
    }
    t = _all(t, r_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm t_1 (ATerm t)
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm s_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = s_11;
                  {
                    ATerm g_12 = t;
                    int i_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(i_12);
                      }
                    else
                      {
                        t = g_12;
                        {
                          ATerm p_12 = t;
                          int z_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(z_12);
                            }
                          else
                            {
                              t = p_12;
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
      t = repeat_1(t, t_1);
    }
    return(t);
  }
  t = topdown_1(t, s_1);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,r_35 = NULL,s_35 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  h_34 = t;
  v_33 :
  if(match_cons(h_34, sym_Seq_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      r_35 = ATgetArgument(h_34, 1);
      w_33 :
      if(match_cons(i_34, sym_Call_2))
        {
          g_35 = ATgetArgument(i_34, 0);
          i_35 = ATgetArgument(i_34, 1);
          x_33 :
          if(match_cons(g_35, sym_SVar_1))
            {
              h_35 = ATgetArgument(g_35, 0);
              y_33 :
              if(match_string(h_35, "mark"))
                {
                  z_33 :
                  if(((ATermList) i_35 == ATempty))
                    {
                      a_34 :
                      if(match_cons(r_35, sym_Seq_2))
                        {
                          s_35 = ATgetArgument(r_35, 0);
                          g_38 = ATgetArgument(r_35, 1);
                          b_34 :
                          if(match_cons(s_35, sym_Match_1))
                            {
                              f_38 = ATgetArgument(s_35, 0);
                              d_34 :
                              if(match_cons(g_38, sym_Seq_2))
                                {
                                  h_38 = ATgetArgument(g_38, 0);
                                  j_38 = ATgetArgument(g_38, 1);
                                  e_34 :
                                  if(match_cons(h_38, sym_Where_1))
                                    {
                                      i_38 = ATgetArgument(h_38, 0);
                                      g_34 :
                                      if(match_cons(j_38, sym_Build_1))
                                        {
                                          k_38 = ATgetArgument(j_38, 0);
                                          {
                                            ATerm a_13 = t;
                                            int b_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
                                                ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
                                                t = term_c_13;
                                                {
                                                  ATerm u_1 (ATerm t)
                                                  {
                                                    t = term_d_13;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, u_1);
                                                  {
                                                    r_38 = t;
                                                    k_33 :
                                                    if(match_cons(r_38, sym_Defined_2))
                                                      {
                                                        s_38 = ATgetArgument(r_38, 0);
                                                        t_38 = ATgetArgument(r_38, 1);
                                                        l_33 :
                                                        if(match_string(s_38, "o_0"))
                                                          {
                                                            ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
                                                            if(((o_38 != NULL) && (o_38 != t_38)))
                                                              _fail(t_38);
                                                            else
                                                              o_38 = t_38;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(o_38), not_null(f_38), (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(k_38)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  c_40 = t;
                                                                  j_33 :
                                                                  if(match_cons(c_40, sym__2))
                                                                    {
                                                                      d_40 = ATgetArgument(c_40, 0);
                                                                      e_40 = ATgetArgument(c_40, 1);
                                                                      {
                                                                        if(((p_38 != NULL) && (p_38 != d_40)))
                                                                          _fail(d_40);
                                                                        else
                                                                          p_38 = d_40;
                                                                        if(((q_38 != NULL) && (q_38 != e_40)))
                                                                          _fail(e_40);
                                                                        else
                                                                          q_38 = e_40;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(p_38)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_38))));
                                                LocalPopChoice(b_13);
                                              }
                                            else
                                              {
                                                t = a_13;
                                                {
                                                  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
                                                  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
                                                  t = term_c_13;
                                                  {
                                                    ATerm v_1 (ATerm t)
                                                    {
                                                      t = term_d_13;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, v_1);
                                                    {
                                                      n_40 = t;
                                                      t_33 :
                                                      if(match_cons(n_40, sym_Defined_2))
                                                        {
                                                          o_40 = ATgetArgument(n_40, 0);
                                                          p_40 = ATgetArgument(n_40, 1);
                                                          u_33 :
                                                          if(match_string(o_40, "k_0"))
                                                            {
                                                              ATerm q_40 = NULL;
                                                              if(((i_40 != NULL) && (i_40 != p_40)))
                                                                _fail(p_40);
                                                              else
                                                                i_40 = p_40;
                                                              {
                                                                ATerm r_40 = NULL;
                                                                t = not_null(i_40);
                                                                {
                                                                  q_40 = t;
                                                                  {
                                                                    if(((k_40 != NULL) && (k_40 != q_40)))
                                                                      _fail(q_40);
                                                                    else
                                                                      k_40 = q_40;
                                                                    {
                                                                      t = not_null(f_38);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          r_40 = t;
                                                                          {
                                                                            if(((j_40 != NULL) && (j_40 != r_40)))
                                                                              _fail(r_40);
                                                                            else
                                                                              j_40 = r_40;
                                                                            {
                                                                              ATerm w_1 (ATerm t)
                                                                              {
                                                                                t = term_e_13;
                                                                                return(t);
                                                                              }
                                                                              ATerm x_1 (ATerm t)
                                                                              {
                                                                                ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
                                                                                ATerm y_1 (ATerm t)
                                                                                {
                                                                                  ATerm s_40 = NULL,v_40 = NULL;
                                                                                  ATerm u_40 = NULL;
                                                                                  u_40 = t;
                                                                                  if(((s_40 != NULL) && (s_40 != u_40)))
                                                                                    _fail(u_40);
                                                                                  else
                                                                                    s_40 = u_40;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_40));
                                                                                    {
                                                                                      v_40 = t;
                                                                                      {
                                                                                        ATerm f_13;
                                                                                        f_13 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(v_40), not_null(k_40)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, not_null(v_40)));
                                                                                          {
                                                                                            ATerm z_1 (ATerm t)
                                                                                            {
                                                                                              t = term_e_13;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, z_1);
                                                                                          }
                                                                                        }
                                                                                        t = f_13;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, y_1);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(k_38));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      h_41 = t;
                                                                                      s_33 :
                                                                                      if(match_cons(h_41, sym__2))
                                                                                        {
                                                                                          i_41 = ATgetArgument(h_41, 0);
                                                                                          j_41 = ATgetArgument(h_41, 1);
                                                                                          {
                                                                                            if(((l_40 != NULL) && (l_40 != i_41)))
                                                                                              _fail(i_41);
                                                                                            else
                                                                                              l_40 = i_41;
                                                                                            if(((m_40 != NULL) && (m_40 != j_41)))
                                                                                              _fail(j_41);
                                                                                            else
                                                                                              m_40 = j_41;
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
                                                                              t = scope_2(t, w_1, x_1);
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(l_40)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_38))));
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
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  ATerm l_44 (ATerm t)
  {
    ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(n_42), not_null(m_42));
    {
      ATerm a_2 (ATerm t)
      {
        t = term_e_13;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        x_43 = t;
        b_42 :
        if(match_cons(x_43, sym_Defined_2))
          {
            y_43 = ATgetArgument(x_43, 0);
            z_43 = ATgetArgument(x_43, 1);
            e_42 :
            if(match_string(y_43, "m_0"))
              {
                if(((n_42 != NULL) && (n_42 != z_43)))
                  _fail(z_43);
                else
                  n_42 = z_43;
              }
            else
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
    t = not_null(n_42);
    return(t);
  }
  ATerm m_44 (ATerm t)
  {
    ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(n_42), not_null(m_42));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_e_13;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        c_44 = t;
        g_42 :
        if(match_cons(c_44, sym_Defined_2))
          {
            d_44 = ATgetArgument(c_44, 0);
            e_44 = ATgetArgument(c_44, 1);
            h_42 :
            if(match_string(d_44, "l_0"))
              {
                if(((n_42 != NULL) && (n_42 != e_44)))
                  _fail(e_44);
                else
                  n_42 = e_44;
              }
            else
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
    t = not_null(n_42);
    return(t);
  }
  l_42 = t;
  i_42 :
  if(match_cons(l_42, sym_App_2))
    {
      m_42 = ATgetArgument(l_42, 0);
      n_42 = ATgetArgument(l_42, 1);
      j_42 :
      if(match_cons(n_42, sym_Var_1))
        {
          k_42 = ATgetArgument(n_42, 0);
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_43 = NULL,t_43 = NULL,u_43 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(k_42), not_null(m_42));
                {
                  ATerm c_2 (ATerm t)
                  {
                    t = term_e_13;
                    return(t);
                  }
                  t = rewrite_1(t, c_2);
                  {
                    l_43 = t;
                    y_41 :
                    if(match_cons(l_43, sym_Defined_2))
                      {
                        t_43 = ATgetArgument(l_43, 0);
                        u_43 = ATgetArgument(l_43, 1);
                        z_41 :
                        if(match_string(t_43, "p_0"))
                          {
                            if(((k_42 != NULL) && (k_42 != u_43)))
                              _fail(u_43);
                            else
                              k_42 = u_43;
                          }
                        else
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_42));
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                {
                  ATerm j_13 = t;
                  int k_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_44(t);
                      LocalPopChoice(k_13);
                    }
                  else
                    {
                      t = j_13;
                      t = m_44(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_44(t);
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              t = m_44(t);
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
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
  u_44 = t;
  t_44 :
  if(((ATgetType(u_44) == AT_LIST) && ((ATermList) u_44 != ATempty)))
    {
      v_44 = ATgetFirst((ATermList) u_44);
      w_44 = (ATerm) ATgetNext((ATermList) u_44);
      t = not_null(w_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym__2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      {
        ATerm n_13;
        n_13 = t;
        {
          ATerm j_45 = NULL;
          ATerm k_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_45), not_null(g_45));
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                t = (ATerm) ATempty;
              }
            {
              k_45 = t;
              if(((j_45 != NULL) && (j_45 != k_45)))
                _fail(k_45);
              else
                j_45 = k_45;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_45), not_null(g_45), not_null(j_45));
            t = table_put_0(t);
          }
        }
        t = n_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm u_45 = NULL;
    ATerm v_45 = NULL,w_45 = NULL,g_46 = NULL;
    t = s_97(t);
    {
      u_45 = t;
      {
        if(((s_45 != NULL) && (s_45 != u_45)))
          _fail(u_45);
        else
          s_45 = u_45;
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_45), term_z_13);
              t = table_get_0(t);
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_45 = t;
            q_45 :
            if(((ATgetType(v_45) == AT_LIST) && ((ATermList) v_45 != ATempty)))
              {
                w_45 = ATgetFirst((ATermList) v_45);
                g_46 = (ATerm) ATgetNext((ATermList) v_45);
                {
                  if(((t_45 != NULL) && (t_45 != w_45)))
                    _fail(w_45);
                  else
                    t_45 = w_45;
                  {
                    if(((r_45 != NULL) && (r_45 != g_46)))
                      _fail(g_46);
                    else
                      r_45 = g_46;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_45), term_z_13, not_null(r_45));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(t_45);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm h_46 = NULL;
                              h_46 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_45), not_null(h_46));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, d_2);
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
  t = w_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_110 (ATerm), ATerm u_110 (ATerm))
{
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_110(t);
      t = u_110(t);
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      {
        t = u_110(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_97 (ATerm))
{
  ATerm s_46 = NULL;
  ATerm e_14;
  e_14 = t;
  {
    ATerm t_46 = NULL;
    ATerm u_46 = NULL;
    t = r_97(t);
    {
      t_46 = t;
      {
        if(((s_46 != NULL) && (s_46 != t_46)))
          _fail(t_46);
        else
          s_46 = t_46;
        {
          ATerm v_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_46), term_z_13);
          {
            ATerm i_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_14);
              }
            else
              {
                t = i_14;
                t = (ATerm) ATempty;
              }
            {
              v_46 = t;
              if(((u_46 != NULL) && (u_46 != v_46)))
                _fail(v_46);
              else
                u_46 = v_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_46), term_z_13, (ATerm) ATinsert(CheckATermList(not_null(u_46)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = e_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm))
{
  t = begin_scope_1(t, t_97);
  {
    ATerm e_2 (ATerm t)
    {
      t = end_scope_1(t, t_97);
      return(t);
    }
    t = restore_always_2(t, u_97, e_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm c_47 = NULL,e_47 = NULL,f_47 = NULL,o_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym__3))
    {
      e_47 = ATgetArgument(c_47, 0);
      f_47 = ATgetArgument(c_47, 1);
      o_47 = ATgetArgument(c_47, 2);
      {
        ATerm s_47 = NULL;
        ATerm f_2 (ATerm t)
        {
          t = term_e_13;
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          ATerm v_47 = NULL;
          t = not_null(f_47);
          {
            t = tvars_0(t);
            {
              ATerm h_2 (ATerm t)
              {
                ATerm t_47 = NULL;
                t_47 = t;
                {
                  ATerm q_14;
                  q_14 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(t_47), not_null(e_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_14, not_null(t_47)));
                    {
                      ATerm i_2 (ATerm t)
                      {
                        t = term_e_13;
                        return(t);
                      }
                      t = assert_1(t, i_2);
                    }
                  }
                  t = q_14;
                }
                return(t);
              }
              t = map_1(t, h_2);
              {
                t = not_null(o_47);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    v_47 = t;
                    if(((s_47 != NULL) && (s_47 != v_47)))
                      _fail(v_47);
                    else
                      s_47 = v_47;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, f_2, g_2);
        t = not_null(s_47);
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
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  w_48 = t;
  o_48 :
  if(match_cons(w_48, sym_Seq_2))
    {
      x_48 = ATgetArgument(w_48, 0);
      b_49 = ATgetArgument(w_48, 1);
      p_48 :
      if(match_cons(x_48, sym_Call_2))
        {
          y_48 = ATgetArgument(x_48, 0);
          a_49 = ATgetArgument(x_48, 1);
          q_48 :
          if(match_cons(y_48, sym_SVar_1))
            {
              z_48 = ATgetArgument(y_48, 0);
              r_48 :
              if(match_string(z_48, "mark"))
                {
                  s_48 :
                  if(((ATermList) a_49 == ATempty))
                    {
                      t_48 :
                      if(match_cons(b_49, sym_Seq_2))
                        {
                          c_49 = ATgetArgument(b_49, 0);
                          e_49 = ATgetArgument(b_49, 1);
                          u_48 :
                          if(match_cons(c_49, sym_Match_1))
                            {
                              d_49 = ATgetArgument(c_49, 0);
                              v_48 :
                              if(match_cons(e_49, sym_Build_1))
                                {
                                  f_49 = ATgetArgument(e_49, 0);
                                  {
                                    ATerm s_14 = t;
                                    int t_14 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm i_49 = NULL,j_49 = NULL;
                                        ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
                                        t = term_c_13;
                                        {
                                          ATerm j_2 (ATerm t)
                                          {
                                            t = term_u_14;
                                            return(t);
                                          }
                                          t = rewrite_1(t, j_2);
                                          {
                                            k_49 = t;
                                            e_48 :
                                            if(match_cons(k_49, sym_Defined_2))
                                              {
                                                l_49 = ATgetArgument(k_49, 0);
                                                m_49 = ATgetArgument(k_49, 1);
                                                f_48 :
                                                if(match_string(l_49, "n_0"))
                                                  {
                                                    ATerm n_49 = NULL;
                                                    if(((i_49 != NULL) && (i_49 != m_49)))
                                                      _fail(m_49);
                                                    else
                                                      i_49 = m_49;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_49), not_null(d_49), not_null(f_49));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          n_49 = t;
                                                          if(((j_49 != NULL) && (j_49 != n_49)))
                                                            _fail(n_49);
                                                          else
                                                            j_49 = n_49;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_49)), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_49)));
                                        LocalPopChoice(t_14);
                                      }
                                    else
                                      {
                                        t = s_14;
                                        {
                                          ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
                                          ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
                                          t = term_c_13;
                                          {
                                            ATerm k_2 (ATerm t)
                                            {
                                              t = term_u_14;
                                              return(t);
                                            }
                                            t = rewrite_1(t, k_2);
                                            {
                                              u_49 = t;
                                              m_48 :
                                              if(match_cons(u_49, sym_Defined_2))
                                                {
                                                  v_49 = ATgetArgument(u_49, 0);
                                                  w_49 = ATgetArgument(u_49, 1);
                                                  n_48 :
                                                  if(match_string(v_49, "j_0"))
                                                    {
                                                      ATerm x_49 = NULL;
                                                      if(((q_49 != NULL) && (q_49 != w_49)))
                                                        _fail(w_49);
                                                      else
                                                        q_49 = w_49;
                                                      {
                                                        ATerm a_50 = NULL;
                                                        t = not_null(q_49);
                                                        {
                                                          x_49 = t;
                                                          {
                                                            if(((s_49 != NULL) && (s_49 != x_49)))
                                                              _fail(x_49);
                                                            else
                                                              s_49 = x_49;
                                                            {
                                                              t = not_null(d_49);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  a_50 = t;
                                                                  {
                                                                    if(((r_49 != NULL) && (r_49 != a_50)))
                                                                      _fail(a_50);
                                                                    else
                                                                      r_49 = a_50;
                                                                    {
                                                                      ATerm l_2 (ATerm t)
                                                                      {
                                                                        t = term_e_13;
                                                                        return(t);
                                                                      }
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        ATerm k_50 = NULL;
                                                                        ATerm n_2 (ATerm t)
                                                                        {
                                                                          ATerm b_50 = NULL,d_50 = NULL;
                                                                          ATerm c_50 = NULL;
                                                                          c_50 = t;
                                                                          if(((b_50 != NULL) && (b_50 != c_50)))
                                                                            _fail(c_50);
                                                                          else
                                                                            b_50 = c_50;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_50));
                                                                            {
                                                                              d_50 = t;
                                                                              {
                                                                                ATerm v_14;
                                                                                v_14 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(d_50), not_null(s_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, not_null(d_50)));
                                                                                  {
                                                                                    ATerm o_2 (ATerm t)
                                                                                    {
                                                                                      t = term_e_13;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, o_2);
                                                                                  }
                                                                                }
                                                                                t = v_14;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, n_2);
                                                                        {
                                                                          t = not_null(f_49);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              k_50 = t;
                                                                              if(((t_49 != NULL) && (t_49 != k_50)))
                                                                                _fail(k_50);
                                                                              else
                                                                                t_49 = k_50;
                                                                            }
                                                                          }
                                                                        }
                                                                        return(t);
                                                                      }
                                                                      t = scope_2(t, l_2, m_2);
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_49)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_49)));
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
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
  s_51 = t;
  l_51 :
  if(match_cons(s_51, sym_App_2))
    {
      t_51 = ATgetArgument(s_51, 0);
      z_51 = ATgetArgument(s_51, 1);
      m_51 :
      if(match_cons(t_51, sym_Call_2))
        {
          u_51 = ATgetArgument(t_51, 0);
          w_51 = ATgetArgument(t_51, 1);
          n_51 :
          if(match_cons(u_51, sym_SVar_1))
            {
              v_51 = ATgetArgument(u_51, 0);
              o_51 :
              if(match_string(v_51, "bottomup_1"))
                {
                  p_51 :
                  if(((ATgetType(w_51) == AT_LIST) && ((ATermList) w_51 != ATempty)))
                    {
                      x_51 = ATgetFirst((ATermList) w_51);
                      y_51 = (ATerm) ATgetNext((ATermList) w_51);
                      q_51 :
                      if(((ATermList) y_51 == ATempty))
                        {
                          r_51 :
                          if(match_cons(z_51, sym_Op_2))
                            {
                              a_52 = ATgetArgument(z_51, 0);
                              b_52 = ATgetArgument(z_51, 1);
                              {
                                ATerm f_52 = NULL;
                                ATerm i_52 = NULL;
                                t = not_null(b_52);
                                {
                                  ATerm p_2 (ATerm t)
                                  {
                                    ATerm g_52 = NULL;
                                    g_52 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, not_null(x_51))), not_null(g_52));
                                    return(t);
                                  }
                                  t = map_1(t, p_2);
                                  {
                                    i_52 = t;
                                    if(((f_52 != NULL) && (f_52 != i_52)))
                                      _fail(i_52);
                                    else
                                      f_52 = i_52;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_51), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_52), not_null(f_52)));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  p_52 = t;
  n_52 :
  if(match_cons(p_52, sym_Seq_2))
    {
      q_52 = ATgetArgument(p_52, 0);
      s_52 = ATgetArgument(p_52, 1);
      o_52 :
      if(match_cons(q_52, sym_Build_1))
        {
          r_52 = ATgetArgument(q_52, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(s_52), not_null(r_52)));
        }
      else
        {
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
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  d_53 = t;
  z_52 :
  if(match_cons(d_53, sym_LChoice_2))
    {
      e_53 = ATgetArgument(d_53, 0);
      h_53 = ATgetArgument(d_53, 1);
      a_53 :
      if(match_cons(e_53, sym_LChoice_2))
        {
          f_53 = ATgetArgument(e_53, 0);
          g_53 = ATgetArgument(e_53, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_53), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_53), not_null(h_53)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(d_53, sym_Seq_2))
        {
          e_53 = ATgetArgument(d_53, 0);
          h_53 = ATgetArgument(d_53, 1);
          b_53 :
          if(match_cons(e_53, sym_Seq_2))
            {
              f_53 = ATgetArgument(e_53, 0);
              g_53 = ATgetArgument(e_53, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_53), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_53), not_null(h_53)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(d_53, sym_Choice_2))
            {
              e_53 = ATgetArgument(d_53, 0);
              h_53 = ATgetArgument(d_53, 1);
              c_53 :
              if(match_cons(e_53, sym_Choice_2))
                {
                  f_53 = ATgetArgument(e_53, 0);
                  g_53 = ATgetArgument(e_53, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_53), (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_53), not_null(h_53)));
                }
              else
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
  ATerm x_53 = NULL,y_53 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  x_53 = t;
  v_53 :
  if(match_cons(x_53, sym_Seq_2))
    {
      y_53 = ATgetArgument(x_53, 0);
      d_54 = ATgetArgument(x_53, 1);
      w_53 :
      if(match_cons(y_53, sym_Scope_2))
        {
          b_54 = ATgetArgument(y_53, 0);
          c_54 = ATgetArgument(y_53, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_54), not_null(d_54)));
        }
      else
        {
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
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  o_54 = t;
  m_54 :
  if(match_cons(o_54, sym_Seq_2))
    {
      p_54 = ATgetArgument(o_54, 0);
      s_54 = ATgetArgument(o_54, 1);
      n_54 :
      if(match_cons(p_54, sym_LChoice_2))
        {
          q_54 = ATgetArgument(p_54, 0);
          r_54 = ATgetArgument(p_54, 1);
          {
            ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(s_54));
            {
              ATerm q_2 (ATerm t)
              {
                t = term_a_15;
                return(t);
              }
              t = rewrite_1(t, q_2);
              {
                w_54 = t;
                k_54 :
                if(match_cons(w_54, sym_Defined_2))
                  {
                    x_54 = ATgetArgument(w_54, 0);
                    y_54 = ATgetArgument(w_54, 1);
                    l_54 :
                    if(match_string(x_54, "d_0"))
                      {
                        if(((s_54 != NULL) && (s_54 != y_54)))
                          _fail(y_54);
                        else
                          s_54 = y_54;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(q_54), not_null(s_54)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), not_null(s_54)));
          }
        }
      else
        {
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
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  h_55 = t;
  f_55 :
  if(match_cons(h_55, sym_Seq_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      l_55 = ATgetArgument(h_55, 1);
      g_55 :
      if(match_cons(i_55, sym_Choice_2))
        {
          j_55 = ATgetArgument(i_55, 0);
          k_55 = ATgetArgument(i_55, 1);
          {
            ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(l_55));
            {
              ATerm r_2 (ATerm t)
              {
                t = term_b_15;
                return(t);
              }
              t = rewrite_1(t, r_2);
              {
                p_55 = t;
                d_55 :
                if(match_cons(p_55, sym_Defined_2))
                  {
                    q_55 = ATgetArgument(p_55, 0);
                    r_55 = ATgetArgument(p_55, 1);
                    e_55 :
                    if(match_string(q_55, "c_0"))
                      {
                        if(((l_55 != NULL) && (l_55 != r_55)))
                          _fail(r_55);
                        else
                          l_55 = r_55;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(j_55), not_null(l_55)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_55), not_null(l_55)));
          }
        }
      else
        {
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
  ATerm s_2 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
        f_57 = t;
        v_56 :
        if(match_cons(f_57, sym_Seq_2))
          {
            g_57 = ATgetArgument(f_57, 0);
            m_57 = ATgetArgument(f_57, 1);
            w_56 :
            if(match_cons(g_57, sym_Choice_2))
              {
                h_57 = ATgetArgument(g_57, 0);
                j_57 = ATgetArgument(g_57, 1);
                {
                  ATerm y_57 = NULL,a_58 = NULL;
                  ATerm f_15;
                  f_15 = t;
                  {
                    ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(m_57));
                    {
                      ATerm t_2 (ATerm t)
                      {
                        t = term_b_15;
                        return(t);
                      }
                      t = rewrite_1(t, t_2);
                      {
                        v_57 = t;
                        d_56 :
                        if(match_cons(v_57, sym_Defined_2))
                          {
                            w_57 = ATgetArgument(v_57, 0);
                            x_57 = ATgetArgument(v_57, 1);
                            e_56 :
                            if(match_string(w_57, "c_0"))
                              {
                                if(((m_57 != NULL) && (m_57 != x_57)))
                                  _fail(x_57);
                                else
                                  m_57 = x_57;
                              }
                            else
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
                  t = f_15;
                  {
                    ATerm h_15;
                    h_15 = t;
                    {
                      ATerm z_57 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_57), not_null(m_57));
                      {
                        t = s_2(t);
                        {
                          z_57 = t;
                          if(((y_57 != NULL) && (y_57 != z_57)))
                            _fail(z_57);
                          else
                            y_57 = z_57;
                        }
                      }
                    }
                    t = h_15;
                    {
                      ATerm b_58 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_57), not_null(m_57));
                      {
                        t = s_2(t);
                        {
                          b_58 = t;
                          if(((a_58 != NULL) && (a_58 != b_58)))
                            _fail(b_58);
                          else
                            a_58 = b_58;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_57), not_null(a_58));
                        t = s_2(t);
                      }
                    }
                  }
                }
              }
            else
              {
                if(match_cons(g_57, sym_LChoice_2))
                  {
                    h_57 = ATgetArgument(g_57, 0);
                    j_57 = ATgetArgument(g_57, 1);
                    {
                      ATerm i_58 = NULL,k_58 = NULL;
                      ATerm l_15;
                      l_15 = t;
                      {
                        ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(m_57));
                        {
                          ATerm u_2 (ATerm t)
                          {
                            t = term_a_15;
                            return(t);
                          }
                          t = rewrite_1(t, u_2);
                          {
                            f_58 = t;
                            i_56 :
                            if(match_cons(f_58, sym_Defined_2))
                              {
                                g_58 = ATgetArgument(f_58, 0);
                                h_58 = ATgetArgument(f_58, 1);
                                j_56 :
                                if(match_string(g_58, "d_0"))
                                  {
                                    if(((m_57 != NULL) && (m_57 != h_58)))
                                      _fail(h_58);
                                    else
                                      m_57 = h_58;
                                  }
                                else
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
                      t = l_15;
                      {
                        ATerm o_15;
                        o_15 = t;
                        {
                          ATerm j_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_57), not_null(m_57));
                          {
                            t = s_2(t);
                            {
                              j_58 = t;
                              if(((i_58 != NULL) && (i_58 != j_58)))
                                _fail(j_58);
                              else
                                i_58 = j_58;
                            }
                          }
                        }
                        t = o_15;
                        {
                          ATerm l_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_57), not_null(m_57));
                          {
                            t = s_2(t);
                            {
                              l_58 = t;
                              if(((k_58 != NULL) && (k_58 != l_58)))
                                _fail(l_58);
                              else
                                k_58 = l_58;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_58), not_null(k_58));
                            t = s_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(g_57, sym_Scope_2))
                      {
                        h_57 = ATgetArgument(g_57, 0);
                        j_57 = ATgetArgument(g_57, 1);
                        {
                          ATerm p_58 = NULL;
                          ATerm q_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_57), not_null(m_57));
                          {
                            t = s_2(t);
                            {
                              q_58 = t;
                              if(((p_58 != NULL) && (p_58 != q_58)))
                                _fail(q_58);
                              else
                                p_58 = q_58;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_57), not_null(p_58));
                            t = s_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(g_57, sym_Seq_2))
                          {
                            h_57 = ATgetArgument(g_57, 0);
                            j_57 = ATgetArgument(g_57, 1);
                            {
                              ATerm z_58 = NULL;
                              ATerm a_59 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_57), not_null(m_57));
                              {
                                t = s_2(t);
                                {
                                  a_59 = t;
                                  if(((z_58 != NULL) && (z_58 != a_59)))
                                    _fail(a_59);
                                  else
                                    z_58 = a_59;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_57), not_null(z_58));
                                t = s_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(g_57, sym_Build_1))
                              {
                                h_57 = ATgetArgument(g_57, 0);
                                {
                                  ATerm i_59 = NULL;
                                  ATerm j_59 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_57), not_null(h_57));
                                  {
                                    t = s_2(t);
                                    {
                                      j_59 = t;
                                      if(((i_59 != NULL) && (i_59 != j_59)))
                                        _fail(j_59);
                                      else
                                        i_59 = j_59;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_59));
                                    t = s_2(t);
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
            if(match_cons(f_57, sym_LChoice_2))
              {
                g_57 = ATgetArgument(f_57, 0);
                m_57 = ATgetArgument(f_57, 1);
                x_56 :
                if(match_cons(g_57, sym_LChoice_2))
                  {
                    h_57 = ATgetArgument(g_57, 0);
                    j_57 = ATgetArgument(g_57, 1);
                    {
                      ATerm u_58 = NULL;
                      ATerm v_58 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_57), not_null(m_57));
                      {
                        t = s_2(t);
                        {
                          v_58 = t;
                          if(((u_58 != NULL) && (u_58 != v_58)))
                            _fail(v_58);
                          else
                            u_58 = v_58;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_57), not_null(u_58));
                        t = s_2(t);
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
                if(match_cons(f_57, sym_Choice_2))
                  {
                    g_57 = ATgetArgument(f_57, 0);
                    m_57 = ATgetArgument(f_57, 1);
                    y_56 :
                    if(match_cons(g_57, sym_Choice_2))
                      {
                        h_57 = ATgetArgument(g_57, 0);
                        j_57 = ATgetArgument(g_57, 1);
                        {
                          ATerm e_59 = NULL;
                          ATerm f_59 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_57), not_null(m_57));
                          {
                            t = s_2(t);
                            {
                              f_59 = t;
                              if(((e_59 != NULL) && (e_59 != f_59)))
                                _fail(f_59);
                              else
                                e_59 = f_59;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_57), not_null(e_59));
                            t = s_2(t);
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
                    if(match_cons(f_57, sym_App_2))
                      {
                        g_57 = ATgetArgument(f_57, 0);
                        m_57 = ATgetArgument(f_57, 1);
                        z_56 :
                        if(match_cons(g_57, sym_Call_2))
                          {
                            h_57 = ATgetArgument(g_57, 0);
                            j_57 = ATgetArgument(g_57, 1);
                            a_57 :
                            if(match_cons(h_57, sym_SVar_1))
                              {
                                i_57 = ATgetArgument(h_57, 0);
                                b_57 :
                                if(match_string(i_57, "bottomup_1"))
                                  {
                                    c_57 :
                                    if(((ATgetType(j_57) == AT_LIST) && ((ATermList) j_57 != ATempty)))
                                      {
                                        k_57 = ATgetFirst((ATermList) j_57);
                                        l_57 = (ATerm) ATgetNext((ATermList) j_57);
                                        d_57 :
                                        if(((ATermList) l_57 == ATempty))
                                          {
                                            e_57 :
                                            if(match_cons(m_57, sym_Op_2))
                                              {
                                                n_57 = ATgetArgument(m_57, 0);
                                                o_57 = ATgetArgument(m_57, 1);
                                                {
                                                  ATerm n_59 = NULL,r_59 = NULL;
                                                  ATerm w_15;
                                                  w_15 = t;
                                                  {
                                                    ATerm q_59 = NULL;
                                                    t = not_null(o_57);
                                                    {
                                                      ATerm v_2 (ATerm t)
                                                      {
                                                        ATerm o_59 = NULL;
                                                        o_59 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, not_null(k_57))), not_null(o_59));
                                                        return(t);
                                                      }
                                                      t = map_1(t, v_2);
                                                      {
                                                        q_59 = t;
                                                        if(((n_59 != NULL) && (n_59 != q_59)))
                                                          _fail(q_59);
                                                        else
                                                          n_59 = q_59;
                                                      }
                                                    }
                                                  }
                                                  t = w_15;
                                                  {
                                                    ATerm s_59 = NULL,u_59 = NULL;
                                                    ATerm t_59 = NULL;
                                                    t = not_null(n_59);
                                                    {
                                                      t = bottomup_1(t, s_2);
                                                      {
                                                        t_59 = t;
                                                        if(((s_59 != NULL) && (s_59 != t_59)))
                                                          _fail(t_59);
                                                        else
                                                          s_59 = t_59;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_57), not_null(s_59));
                                                      {
                                                        t = s_2(t);
                                                        {
                                                          u_59 = t;
                                                          if(((r_59 != NULL) && (r_59 != u_59)))
                                                            _fail(u_59);
                                                          else
                                                            r_59 = u_59;
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_57), not_null(r_59));
                                                      t = s_2(t);
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
              }
          }
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, s_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
  w_60 = t;
  u_60 :
  if(match_cons(w_60, sym_Seq_2))
    {
      x_60 = ATgetArgument(w_60, 0);
      y_60 = ATgetArgument(w_60, 1);
      v_60 :
      if(match_cons(y_60, sym_Scope_2))
        {
          z_60 = ATgetArgument(y_60, 0);
          a_61 = ATgetArgument(y_60, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_60), not_null(a_61)));
        }
      else
        {
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
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
  i_61 = t;
  g_61 :
  if(match_cons(i_61, sym_Seq_2))
    {
      j_61 = ATgetArgument(i_61, 0);
      k_61 = ATgetArgument(i_61, 1);
      h_61 :
      if(match_cons(k_61, sym_LChoice_2))
        {
          l_61 = ATgetArgument(k_61, 0);
          m_61 = ATgetArgument(k_61, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(j_61), not_null(l_61)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_61), not_null(m_61)));
        }
      else
        {
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
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
  u_61 = t;
  s_61 :
  if(match_cons(u_61, sym_Seq_2))
    {
      v_61 = ATgetArgument(u_61, 0);
      w_61 = ATgetArgument(u_61, 1);
      t_61 :
      if(match_cons(w_61, sym_Choice_2))
        {
          x_61 = ATgetArgument(w_61, 0);
          y_61 = ATgetArgument(w_61, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(v_61), not_null(x_61)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_61), not_null(y_61)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm w_110 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    t = bottomup_1(t, w_110);
    return(t);
  }
  t = _all(t, w_2);
  t = w_110(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      t = g_100(t);
      t = bottomup_1(t, x_2);
      return(t);
    }
    t = try_1(t, y_2);
    return(t);
  }
  t = bottomup_1(t, x_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm e_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
        o_62 = t;
        m_62 :
        if(match_cons(o_62, sym_Seq_2))
          {
            p_62 = ATgetArgument(o_62, 0);
            q_62 = ATgetArgument(o_62, 1);
            n_62 :
            if(match_cons(q_62, sym_Choice_2))
              {
                r_62 = ATgetArgument(q_62, 0);
                s_62 = ATgetArgument(q_62, 1);
                {
                  ATerm w_62 = NULL,y_62 = NULL;
                  ATerm p_16;
                  p_16 = t;
                  {
                    ATerm x_62 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_62), not_null(r_62));
                    {
                      t = z_2(t);
                      {
                        x_62 = t;
                        if(((w_62 != NULL) && (w_62 != x_62)))
                          _fail(x_62);
                        else
                          w_62 = x_62;
                      }
                    }
                  }
                  t = p_16;
                  {
                    ATerm z_62 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_62), not_null(s_62));
                    {
                      t = z_2(t);
                      {
                        z_62 = t;
                        if(((y_62 != NULL) && (y_62 != z_62)))
                          _fail(z_62);
                        else
                          y_62 = z_62;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_62), not_null(y_62));
                      t = z_2(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(q_62, sym_LChoice_2))
                  {
                    r_62 = ATgetArgument(q_62, 0);
                    s_62 = ATgetArgument(q_62, 1);
                    {
                      ATerm d_63 = NULL,f_63 = NULL;
                      ATerm q_16;
                      q_16 = t;
                      {
                        ATerm e_63 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_62), not_null(r_62));
                        {
                          t = z_2(t);
                          {
                            e_63 = t;
                            if(((d_63 != NULL) && (d_63 != e_63)))
                              _fail(e_63);
                            else
                              d_63 = e_63;
                          }
                        }
                      }
                      t = q_16;
                      {
                        ATerm g_63 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_62), not_null(s_62));
                        {
                          t = z_2(t);
                          {
                            g_63 = t;
                            if(((f_63 != NULL) && (f_63 != g_63)))
                              _fail(g_63);
                            else
                              f_63 = g_63;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_63), not_null(f_63));
                          t = z_2(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(q_62, sym_Scope_2))
                      {
                        r_62 = ATgetArgument(q_62, 0);
                        s_62 = ATgetArgument(q_62, 1);
                        {
                          ATerm k_63 = NULL;
                          ATerm l_63 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_62), not_null(s_62));
                          {
                            t = z_2(t);
                            {
                              l_63 = t;
                              if(((k_63 != NULL) && (k_63 != l_63)))
                                _fail(l_63);
                              else
                                k_63 = l_63;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_62), not_null(k_63));
                            t = z_2(t);
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
        LocalPopChoice(o_16);
      }
    else
      {
        t = e_16;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, z_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm a_64 = NULL,b_64 = NULL;
  a_64 = t;
  z_63 :
  if(match_cons(a_64, sym_Build_1))
    {
      b_64 = ATgetArgument(a_64, 0);
      {
        ATerm e_64 = NULL,g_64 = NULL;
        ATerm f_64 = NULL;
        t = SSLgetAnnotations(not_null(a_64));
        {
          f_64 = t;
          if(((e_64 != NULL) && (e_64 != f_64)))
            _fail(f_64);
          else
            e_64 = f_64;
        }
        {
          t = not_null(b_64);
          {
            ATerm i_64 = NULL;
            t = b_88(t);
            {
              g_64 = t;
              {
                ATerm j_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(g_64)), not_null(e_64));
                {
                  j_64 = t;
                  if(((i_64 != NULL) && (i_64 != j_64)))
                    _fail(j_64);
                  else
                    i_64 = j_64;
                }
                t = not_null(i_64);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm l_86 (ATerm), ATerm m_86 (ATerm))
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  t_64 :
  if(match_cons(u_64, sym_Seq_2))
    {
      v_64 = ATgetArgument(u_64, 0);
      w_64 = ATgetArgument(u_64, 1);
      {
        ATerm a_65 = NULL,c_65 = NULL;
        ATerm b_65 = NULL;
        t = SSLgetAnnotations(not_null(u_64));
        {
          b_65 = t;
          if(((a_65 != NULL) && (a_65 != b_65)))
            _fail(b_65);
          else
            a_65 = b_65;
        }
        {
          t = not_null(v_64);
          {
            ATerm e_65 = NULL;
            t = l_86(t);
            {
              c_65 = t;
              {
                t = not_null(w_64);
                {
                  ATerm g_65 = NULL;
                  t = m_86(t);
                  {
                    e_65 = t;
                    {
                      ATerm h_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(c_65), not_null(e_65)), not_null(a_65));
                      {
                        h_65 = t;
                        if(((g_65 != NULL) && (g_65 != h_65)))
                          _fail(h_65);
                        else
                          g_65 = h_65;
                      }
                      t = not_null(g_65);
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
ATerm Match_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm w_65 = NULL,x_65 = NULL;
  w_65 = t;
  r_65 :
  if(match_cons(w_65, sym_Match_1))
    {
      x_65 = ATgetArgument(w_65, 0);
      {
        ATerm a_66 = NULL,c_66 = NULL;
        ATerm b_66 = NULL;
        t = SSLgetAnnotations(not_null(w_65));
        {
          b_66 = t;
          if(((a_66 != NULL) && (a_66 != b_66)))
            _fail(b_66);
          else
            a_66 = b_66;
        }
        {
          t = not_null(x_65);
          {
            ATerm e_66 = NULL;
            t = a_88(t);
            {
              c_66 = t;
              {
                ATerm f_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(c_66)), not_null(a_66));
                {
                  f_66 = t;
                  if(((e_66 != NULL) && (e_66 != f_66)))
                    _fail(f_66);
                  else
                    e_66 = f_66;
                }
                t = not_null(e_66);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  p_66 :
  if(match_cons(u_66, sym_LChoice_2))
    {
      v_66 = ATgetArgument(u_66, 0);
      w_66 = ATgetArgument(u_66, 1);
      {
        ATerm a_67 = NULL,c_67 = NULL;
        ATerm b_67 = NULL;
        t = SSLgetAnnotations(not_null(u_66));
        {
          b_67 = t;
          if(((a_67 != NULL) && (a_67 != b_67)))
            _fail(b_67);
          else
            a_67 = b_67;
        }
        {
          t = not_null(v_66);
          {
            ATerm e_67 = NULL;
            t = p_86(t);
            {
              c_67 = t;
              {
                t = not_null(w_66);
                {
                  ATerm i_67 = NULL;
                  t = q_86(t);
                  {
                    e_67 = t;
                    {
                      ATerm j_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(c_67), not_null(e_67)), not_null(a_67));
                      {
                        j_67 = t;
                        if(((i_67 != NULL) && (i_67 != j_67)))
                          _fail(j_67);
                        else
                          i_67 = j_67;
                      }
                      t = not_null(i_67);
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
ATerm Choice_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL;
  b_68 = t;
  a_68 :
  if(match_cons(b_68, sym_Choice_2))
    {
      c_68 = ATgetArgument(b_68, 0);
      d_68 = ATgetArgument(b_68, 1);
      {
        ATerm h_68 = NULL,j_68 = NULL;
        ATerm i_68 = NULL;
        t = SSLgetAnnotations(not_null(b_68));
        {
          i_68 = t;
          if(((h_68 != NULL) && (h_68 != i_68)))
            _fail(i_68);
          else
            h_68 = i_68;
        }
        {
          t = not_null(c_68);
          {
            ATerm l_68 = NULL;
            t = n_86(t);
            {
              j_68 = t;
              {
                t = not_null(d_68);
                {
                  ATerm n_68 = NULL;
                  t = o_86(t);
                  {
                    l_68 = t;
                    {
                      ATerm o_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(j_68), not_null(l_68)), not_null(h_68));
                      {
                        o_68 = t;
                        if(((n_68 != NULL) && (n_68 != o_68)))
                          _fail(o_68);
                        else
                          n_68 = o_68;
                      }
                      t = not_null(n_68);
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
  ATerm a_3 (ATerm t)
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        {
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              LocalPopChoice(u_16);
            }
          else
            {
              t = t_16;
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_3 (ATerm t)
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = Match_1(t, _id);
                        return(t);
                      }
                      ATerm d_3 (ATerm t)
                      {
                        t = Build_1(t, _id);
                        return(t);
                      }
                      t = Seq_2(t, c_3, d_3);
                      return(t);
                    }
                    t = Scope_2(t, _id, b_3);
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = v_16;
                    {
                      ATerm x_16 = t;
                      int y_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_3 (ATerm t)
                          {
                            ATerm f_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm g_3 (ATerm t)
                            {
                              ATerm h_3 (ATerm t)
                              {
                                t = Build_1(t, _id);
                                return(t);
                              }
                              t = Seq_2(t, _id, h_3);
                              return(t);
                            }
                            t = Seq_2(t, f_3, g_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, e_3);
                          LocalPopChoice(y_16);
                        }
                      else
                        {
                          t = x_16;
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
  t = try_1(t, a_3);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm w_68 = NULL;
  w_68 = t;
  {
    ATerm z_16;
    z_16 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATmakeAppl(sym_Defined_2, term_a_17, not_null(w_68)));
      {
        ATerm i_3 (ATerm t)
        {
          t = term_u_14;
          return(t);
        }
        t = assert_1(t, i_3);
      }
    }
    t = z_16;
    {
      ATerm b_17;
      b_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATmakeAppl(sym_Defined_2, term_c_17, not_null(w_68)));
        {
          ATerm j_3 (ATerm t)
          {
            t = term_d_13;
            return(t);
          }
          t = assert_1(t, j_3);
        }
      }
      t = b_17;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm e_69 = NULL;
  e_69 = t;
  {
    ATerm e_17;
    e_17 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(e_69)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_17, not_null(e_69)));
      {
        ATerm k_3 (ATerm t)
        {
          t = term_b_15;
          return(t);
        }
        t = assert_1(t, k_3);
      }
    }
    t = e_17;
    {
      ATerm l_17;
      l_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(e_69)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, not_null(e_69)));
        {
          ATerm l_3 (ATerm t)
          {
            t = term_a_15;
            return(t);
          }
          t = assert_1(t, l_3);
        }
      }
      t = l_17;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
  x_69 = t;
  s_69 :
  if(match_cons(x_69, sym_Call_2))
    {
      y_69 = ATgetArgument(x_69, 0);
      a_70 = ATgetArgument(x_69, 1);
      t_69 :
      if(match_cons(y_69, sym_SVar_1))
        {
          z_69 = ATgetArgument(y_69, 0);
          u_69 :
          if(match_string(z_69, "innermost_1"))
            {
              v_69 :
              if(((ATgetType(a_70) == AT_LIST) && ((ATermList) a_70 != ATempty)))
                {
                  b_70 = ATgetFirst((ATermList) a_70);
                  c_70 = (ATerm) ATgetNext((ATermList) a_70);
                  w_69 :
                  if(((ATermList) c_70 == ATempty))
                    {
                      {
                        ATerm e_70 = NULL,g_70 = NULL;
                        ATerm m_3 (ATerm t)
                        {
                          t = term_n_17;
                          return(t);
                        }
                        t = say_1(t, m_3);
                        {
                          ATerm o_17;
                          o_17 = t;
                          {
                            ATerm f_70 = NULL;
                            t = new_0(t);
                            {
                              f_70 = t;
                              if(((e_70 != NULL) && (e_70 != f_70)))
                                _fail(f_70);
                              else
                                e_70 = f_70;
                            }
                          }
                          t = o_17;
                          {
                            ATerm p_17;
                            p_17 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_70)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = p_17;
                            {
                              ATerm q_17;
                              q_17 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_70)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = q_17;
                              {
                                ATerm h_70 = NULL;
                                t = not_null(b_70);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    h_70 = t;
                                    if(((g_70 != NULL) && (g_70 != h_70)))
                                      _fail(h_70);
                                    else
                                      g_70 = h_70;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(e_70), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_t_17, not_null(g_70)), (ATerm) ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_70)), (ATerm) ATempty)))), term_s_10))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm n_3 (ATerm t)
                                        {
                                          ATerm y_17 = t;
                                          int z_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(z_17);
                                            }
                                          else
                                            {
                                              t = y_17;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, n_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm o_3 (ATerm t)
                                            {
                                              t = term_a_18;
                                              return(t);
                                            }
                                            t = say_1(t, o_3);
                                          }
                                        }
                                      }
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
ATerm alltd_1 (ATerm t, ATerm z_112 (ATerm))
{
  ATerm l_70 (ATerm t)
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_112(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = _all(t, l_70);
      }
    return(t);
  }
  t = l_70(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm b_71 = NULL;
  ATerm d_18;
  d_18 = t;
  {
    ATerm c_71 = NULL;
    t = new_0(t);
    {
      c_71 = t;
      {
        if(((b_71 != NULL) && (b_71 != c_71)))
          _fail(c_71);
        else
          b_71 = c_71;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_71)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              {
                ATerm p_3 (ATerm t)
                {
                  t = term_g_18;
                  return(t);
                }
                t = say_1(t, p_3);
                _fail(t);
              }
            }
          {
            ATerm h_18 = t;
            int i_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL;
                d_71 = t;
                o_70 :
                if(match_cons(d_71, sym_Seq_2))
                  {
                    e_71 = ATgetArgument(d_71, 0);
                    o_71 = ATgetArgument(d_71, 1);
                    p_70 :
                    if(match_cons(e_71, sym_All_1))
                      {
                        f_71 = ATgetArgument(e_71, 0);
                        q_70 :
                        if(match_cons(f_71, sym_Call_2))
                          {
                            g_71 = ATgetArgument(f_71, 0);
                            i_71 = ATgetArgument(f_71, 1);
                            r_70 :
                            if(match_cons(g_71, sym_SVar_1))
                              {
                                h_71 = ATgetArgument(g_71, 0);
                                s_70 :
                                if(match_string(h_71, "bottomup_1"))
                                  {
                                    t_70 :
                                    if(((ATgetType(i_71) == AT_LIST) && ((ATermList) i_71 != ATempty)))
                                      {
                                        j_71 = ATgetFirst((ATermList) i_71);
                                        n_71 = (ATerm) ATgetNext((ATermList) i_71);
                                        u_70 :
                                        if(match_cons(j_71, sym_Call_2))
                                          {
                                            k_71 = ATgetArgument(j_71, 0);
                                            m_71 = ATgetArgument(j_71, 1);
                                            v_70 :
                                            if(match_cons(k_71, sym_SVar_1))
                                              {
                                                l_71 = ATgetArgument(k_71, 0);
                                                w_70 :
                                                if(((ATermList) m_71 == ATempty))
                                                  {
                                                    x_70 :
                                                    if(((ATermList) n_71 == ATempty))
                                                      {
                                                        y_70 :
                                                        if(match_cons(o_71, sym_Call_2))
                                                          {
                                                            p_71 = ATgetArgument(o_71, 0);
                                                            r_71 = ATgetArgument(o_71, 1);
                                                            z_70 :
                                                            if(match_cons(p_71, sym_SVar_1))
                                                              {
                                                                q_71 = ATgetArgument(p_71, 0);
                                                                a_71 :
                                                                if(((ATermList) r_71 == ATempty))
                                                                  {
                                                                    {
                                                                      if(((b_71 != NULL) && (b_71 != l_71)))
                                                                        _fail(l_71);
                                                                      else
                                                                        b_71 = l_71;
                                                                      if(((b_71 != NULL) && (b_71 != q_71)))
                                                                        _fail(q_71);
                                                                      else
                                                                        b_71 = q_71;
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(i_18);
              }
            else
              {
                t = h_18;
                {
                  ATerm q_3 (ATerm t)
                  {
                    t = term_j_18;
                    return(t);
                  }
                  t = debug_1(t, q_3);
                  _fail(t);
                }
              }
            {
              ATerm r_3 (ATerm t)
              {
                t = term_k_18;
                return(t);
              }
              t = say_1(t, r_3);
            }
          }
        }
      }
    }
  }
  t = d_18;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    ATerm g_73 = NULL;
    t = new_0(t);
    {
      g_73 = t;
      {
        if(((e_73 != NULL) && (e_73 != g_73)))
          _fail(g_73);
        else
          e_73 = g_73;
        {
          ATerm q_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_v_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_73)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(s_18);
            }
          else
            {
              t = q_18;
              {
                ATerm s_3 (ATerm t)
                {
                  t = term_w_18;
                  return(t);
                }
                t = say_1(t, s_3);
                _fail(t);
              }
            }
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,c_75 = NULL,p_76 = NULL,s_76 = NULL,t_76 = NULL;
                h_73 = t;
                a_72 :
                if(match_cons(h_73, sym_Call_2))
                  {
                    i_73 = ATgetArgument(h_73, 0);
                    k_73 = ATgetArgument(h_73, 1);
                    b_72 :
                    if(match_cons(i_73, sym_SVar_1))
                      {
                        j_73 = ATgetArgument(i_73, 0);
                        c_72 :
                        if(match_string(j_73, "bottomup_1"))
                          {
                            d_72 :
                            if(((ATgetType(k_73) == AT_LIST) && ((ATermList) k_73 != ATempty)))
                              {
                                l_73 = ATgetFirst((ATermList) k_73);
                                t_76 = (ATerm) ATgetNext((ATermList) k_73);
                                e_72 :
                                if(match_cons(l_73, sym_Rec_2))
                                  {
                                    m_73 = ATgetArgument(l_73, 0);
                                    n_73 = ATgetArgument(l_73, 1);
                                    f_72 :
                                    if(match_cons(n_73, sym_Call_2))
                                      {
                                        o_73 = ATgetArgument(n_73, 0);
                                        q_73 = ATgetArgument(n_73, 1);
                                        g_72 :
                                        if(match_cons(o_73, sym_SVar_1))
                                          {
                                            p_73 = ATgetArgument(o_73, 0);
                                            h_72 :
                                            if(match_string(p_73, "try_1"))
                                              {
                                                i_72 :
                                                if(((ATgetType(q_73) == AT_LIST) && ((ATermList) q_73 != ATempty)))
                                                  {
                                                    r_73 = ATgetFirst((ATermList) q_73);
                                                    s_76 = (ATerm) ATgetNext((ATermList) q_73);
                                                    j_72 :
                                                    if(match_cons(r_73, sym_Seq_2))
                                                      {
                                                        b_74 = ATgetArgument(r_73, 0);
                                                        f_74 = ATgetArgument(r_73, 1);
                                                        k_72 :
                                                        if(match_cons(b_74, sym_Call_2))
                                                          {
                                                            c_74 = ATgetArgument(b_74, 0);
                                                            e_74 = ATgetArgument(b_74, 1);
                                                            o_72 :
                                                            if(match_cons(c_74, sym_SVar_1))
                                                              {
                                                                d_74 = ATgetArgument(c_74, 0);
                                                                p_72 :
                                                                if(((ATermList) e_74 == ATempty))
                                                                  {
                                                                    q_72 :
                                                                    if(match_cons(f_74, sym_Call_2))
                                                                      {
                                                                        g_74 = ATgetArgument(f_74, 0);
                                                                        i_74 = ATgetArgument(f_74, 1);
                                                                        r_72 :
                                                                        if(match_cons(g_74, sym_SVar_1))
                                                                          {
                                                                            h_74 = ATgetArgument(g_74, 0);
                                                                            s_72 :
                                                                            if(match_string(h_74, "bottomup_1"))
                                                                              {
                                                                                x_72 :
                                                                                if(((ATgetType(i_74) == AT_LIST) && ((ATermList) i_74 != ATempty)))
                                                                                  {
                                                                                    j_74 = ATgetFirst((ATermList) i_74);
                                                                                    p_76 = (ATerm) ATgetNext((ATermList) i_74);
                                                                                    y_72 :
                                                                                    if(match_cons(j_74, sym_Call_2))
                                                                                      {
                                                                                        k_74 = ATgetArgument(j_74, 0);
                                                                                        c_75 = ATgetArgument(j_74, 1);
                                                                                        z_72 :
                                                                                        if(match_cons(k_74, sym_SVar_1))
                                                                                          {
                                                                                            l_74 = ATgetArgument(k_74, 0);
                                                                                            a_73 :
                                                                                            if(((ATermList) c_75 == ATempty))
                                                                                              {
                                                                                                b_73 :
                                                                                                if(((ATermList) p_76 == ATempty))
                                                                                                  {
                                                                                                    c_73 :
                                                                                                    if(((ATermList) s_76 == ATempty))
                                                                                                      {
                                                                                                        d_73 :
                                                                                                        if(((ATermList) t_76 == ATempty))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((f_73 != NULL) && (f_73 != m_73)))
                                                                                                                _fail(m_73);
                                                                                                              else
                                                                                                                f_73 = m_73;
                                                                                                              {
                                                                                                                if(((e_73 != NULL) && (e_73 != d_74)))
                                                                                                                  _fail(d_74);
                                                                                                                else
                                                                                                                  e_73 = d_74;
                                                                                                                if(((f_73 != NULL) && (f_73 != l_74)))
                                                                                                                  _fail(l_74);
                                                                                                                else
                                                                                                                  f_73 = l_74;
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
                LocalPopChoice(y_18);
              }
            else
              {
                t = x_18;
                {
                  ATerm t_3 (ATerm t)
                  {
                    t = term_z_18;
                    return(t);
                  }
                  t = debug_1(t, t_3);
                  _fail(t);
                }
              }
            {
              ATerm u_3 (ATerm t)
              {
                t = term_a_19;
                return(t);
              }
              t = say_1(t, u_3);
            }
          }
        }
      }
    }
  }
  t = o_18;
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_96 (ATerm))
{
  ATerm b_19;
  b_19 = t;
  {
    ATerm y_76 = NULL,a_77 = NULL;
    ATerm c_19;
    c_19 = t;
    {
      ATerm z_76 = NULL;
      t = z_96(t);
      {
        z_76 = t;
        if(((y_76 != NULL) && (y_76 != z_76)))
          _fail(z_76);
        else
          y_76 = z_76;
      }
    }
    t = c_19;
    {
      ATerm b_77 = NULL;
      b_77 = t;
      if(((a_77 != NULL) && (a_77 != b_77)))
        _fail(b_77);
      else
        a_77 = b_77;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_77)), not_null(y_76)));
        t = printnl_0(t);
      }
    }
  }
  t = b_19;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL;
  i_77 = t;
  f_77 :
  if(match_cons(i_77, sym_Call_2))
    {
      j_77 = ATgetArgument(i_77, 0);
      l_77 = ATgetArgument(i_77, 1);
      g_77 :
      if(match_cons(j_77, sym_SVar_1))
        {
          k_77 = ATgetArgument(j_77, 0);
          h_77 :
          if(((ATermList) l_77 == ATempty))
            {
              t = not_null(k_77);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm m_92 (ATerm), ATerm n_92 (ATerm))
{
  ATerm r_77 = NULL;
  ATerm t_77 = NULL,u_77 = NULL;
  r_77 = t;
  {
    ATerm v_77 = NULL;
    t = not_null(r_77);
    {
      ATerm w_77 = NULL;
      t = m_92(t);
      {
        v_77 = t;
        {
          if(((t_77 != NULL) && (t_77 != v_77)))
            _fail(v_77);
          else
            t_77 = v_77;
          {
            t = n_92(t);
            {
              w_77 = t;
              if(((u_77 != NULL) && (u_77 != w_77)))
                _fail(w_77);
              else
                u_77 = w_77;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_77), not_null(u_77));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  g_78 = t;
  f_78 :
  if(match_cons(g_78, sym__2))
    {
      h_78 = ATgetArgument(g_78, 0);
      i_78 = ATgetArgument(g_78, 1);
      {
        ATerm l_78 = NULL;
        if(((l_78 != NULL) && (l_78 != i_78)))
          _fail(i_78);
        else
          l_78 = i_78;
      }
    }
  else
    {
      if(match_cons(g_78, sym__3))
        {
          h_78 = ATgetArgument(g_78, 0);
          i_78 = ATgetArgument(g_78, 1);
          j_78 = ATgetArgument(g_78, 2);
          {
            ATerm r_78 = NULL;
            ATerm s_78 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_78), not_null(i_78));
            {
              t = zip_1(t, _id);
              {
                s_78 = t;
                if(((r_78 != NULL) && (r_78 != s_78)))
                  _fail(s_78);
                else
                  r_78 = s_78;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_78), not_null(j_78));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm o_92 (ATerm), ATerm p_92 (ATerm))
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
  t = subs_args_0(t);
  {
    y_78 = t;
    x_78 :
    if(match_cons(y_78, sym__2))
      {
        z_78 = ATgetArgument(y_78, 0);
        a_79 = ATgetArgument(y_78, 1);
        {
          t = not_null(a_79);
          {
            ATerm v_3 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                t = not_null(z_78);
                return(t);
              }
              t = SubsVar_2(t, o_92, w_3);
              t = p_92(t);
              return(t);
            }
            t = alltd_1(t, v_3);
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
ATerm substitute_1 (ATerm t, ATerm q_92 (ATerm))
{
  t = substitute_2(t, q_92, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm p_89 (ATerm))
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        t = split_2(t, _id, p_89);
        {
          ATerm y_3 (ATerm t)
          {
            ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL;
            k_79 = t;
            f_79 :
            if(match_cons(k_79, sym__2))
              {
                l_79 = ATgetArgument(k_79, 0);
                p_79 = ATgetArgument(k_79, 1);
                g_79 :
                if(match_cons(l_79, sym_SDef_3))
                  {
                    m_79 = ATgetArgument(l_79, 0);
                    n_79 = ATgetArgument(l_79, 1);
                    o_79 = ATgetArgument(l_79, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_79), not_null(n_79), not_null(o_79));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, y_3);
        }
        return(t);
      }
      t = Let_2(t, x_3, _id);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              t = split_2(t, _id, p_89);
              {
                ATerm a_4 (ATerm t)
                {
                  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL;
                  t_79 = t;
                  i_79 :
                  if(match_cons(t_79, sym__2))
                    {
                      u_79 = ATgetArgument(t_79, 0);
                      x_79 = ATgetArgument(t_79, 1);
                      j_79 :
                      if(match_cons(u_79, sym_VarDec_2))
                        {
                          v_79 = ATgetArgument(u_79, 0);
                          w_79 = ATgetArgument(u_79, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_79), not_null(w_79));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, a_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, z_3, _id);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm b_4 (ATerm t)
              {
                t = p_89(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, b_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm a_87 (ATerm), ATerm b_87 (ATerm))
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
  j_80 = t;
  i_80 :
  if(match_cons(j_80, sym_Rec_2))
    {
      k_80 = ATgetArgument(j_80, 0);
      l_80 = ATgetArgument(j_80, 1);
      {
        ATerm p_80 = NULL,r_80 = NULL;
        ATerm q_80 = NULL;
        t = SSLgetAnnotations(not_null(j_80));
        {
          q_80 = t;
          if(((p_80 != NULL) && (p_80 != q_80)))
            _fail(q_80);
          else
            p_80 = q_80;
        }
        {
          t = not_null(k_80);
          {
            ATerm t_80 = NULL;
            t = a_87(t);
            {
              r_80 = t;
              {
                t = not_null(l_80);
                {
                  ATerm v_80 = NULL;
                  t = b_87(t);
                  {
                    t_80 = t;
                    {
                      ATerm w_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(r_80), not_null(t_80)), not_null(p_80));
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
ATerm SDef_3 (ATerm t, ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm))
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL;
  j_81 = t;
  i_81 :
  if(match_cons(j_81, sym_SDef_3))
    {
      k_81 = ATgetArgument(j_81, 0);
      l_81 = ATgetArgument(j_81, 1);
      m_81 = ATgetArgument(j_81, 2);
      {
        ATerm r_81 = NULL,t_81 = NULL;
        ATerm s_81 = NULL;
        t = SSLgetAnnotations(not_null(j_81));
        {
          s_81 = t;
          if(((r_81 != NULL) && (r_81 != s_81)))
            _fail(s_81);
          else
            r_81 = s_81;
        }
        {
          t = not_null(k_81);
          {
            ATerm v_81 = NULL;
            t = e_87(t);
            {
              t_81 = t;
              {
                t = not_null(l_81);
                {
                  ATerm x_81 = NULL;
                  t = f_87(t);
                  {
                    v_81 = t;
                    {
                      t = not_null(m_81);
                      {
                        ATerm z_81 = NULL;
                        t = g_87(t);
                        {
                          x_81 = t;
                          {
                            ATerm a_82 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(t_81), not_null(v_81), not_null(x_81)), not_null(r_81));
                            {
                              a_82 = t;
                              if(((z_81 != NULL) && (z_81 != a_82)))
                                _fail(a_82);
                              else
                                z_81 = a_82;
                            }
                            t = not_null(z_81);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm))
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL;
  n_82 = t;
  m_82 :
  if(match_cons(n_82, sym_Let_2))
    {
      o_82 = ATgetArgument(n_82, 0);
      p_82 = ATgetArgument(n_82, 1);
      {
        ATerm t_82 = NULL,v_82 = NULL;
        ATerm u_82 = NULL;
        t = SSLgetAnnotations(not_null(n_82));
        {
          u_82 = t;
          if(((t_82 != NULL) && (t_82 != u_82)))
            _fail(u_82);
          else
            t_82 = u_82;
        }
        {
          t = not_null(o_82);
          {
            ATerm x_82 = NULL;
            t = c_87(t);
            {
              v_82 = t;
              {
                t = not_null(p_82);
                {
                  ATerm z_82 = NULL;
                  t = d_87(t);
                  {
                    x_82 = t;
                    {
                      ATerm a_83 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(v_82), not_null(x_82)), not_null(t_82));
                      {
                        a_83 = t;
                        if(((z_82 != NULL) && (z_82 != a_83)))
                          _fail(a_83);
                        else
                          z_82 = a_83;
                      }
                      t = not_null(z_82);
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
ATerm sboundin_3 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm))
{
  ATerm l_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, q_89, q_89);
      LocalPopChoice(p_19);
    }
  else
    {
      t = l_19;
      {
        ATerm r_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, s_89, s_89, q_89);
            LocalPopChoice(u_19);
          }
        else
          {
            t = r_19;
            t = Rec_2(t, s_89, q_89);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
  i_83 = t;
  h_83 :
  if(match_cons(i_83, sym_Rec_2))
    {
      j_83 = ATgetArgument(i_83, 0);
      k_83 = ATgetArgument(i_83, 1);
      t = (ATerm) ATinsert(ATempty, not_null(j_83));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
  s_83 = t;
  r_83 :
  if(match_cons(s_83, sym_SDef_3))
    {
      t_83 = ATgetArgument(s_83, 0);
      u_83 = ATgetArgument(s_83, 1);
      v_83 = ATgetArgument(s_83, 2);
      {
        t = not_null(u_83);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
            z_83 = t;
            q_83 :
            if(match_cons(z_83, sym_VarDec_2))
              {
                a_84 = ATgetArgument(z_83, 0);
                b_84 = ATgetArgument(z_83, 1);
                t = not_null(a_84);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_4);
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
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL;
  q_84 = t;
  p_84 :
  if(match_cons(q_84, sym_Let_2))
    {
      r_84 = ATgetArgument(q_84, 0);
      s_84 = ATgetArgument(q_84, 1);
      {
        t = not_null(r_84);
        {
          ATerm d_4 (ATerm t)
          {
            ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL;
            v_84 = t;
            o_84 :
            if(match_cons(v_84, sym_SDef_3))
              {
                w_84 = ATgetArgument(v_84, 0);
                x_84 = ATgetArgument(v_84, 1);
                y_84 = ATgetArgument(v_84, 2);
                t = not_null(w_84);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, d_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm k_85 = NULL,l_85 = NULL;
  k_85 = t;
  j_85 :
  if(match_cons(k_85, sym_SVar_1))
    {
      l_85 = ATgetArgument(k_85, 0);
      {
        ATerm p_85 = NULL,s_85 = NULL;
        ATerm q_85 = NULL;
        t = SSLgetAnnotations(not_null(k_85));
        {
          q_85 = t;
          if(((p_85 != NULL) && (p_85 != q_85)))
            _fail(q_85);
          else
            p_85 = q_85;
        }
        {
          t = not_null(l_85);
          {
            ATerm v_85 = NULL;
            t = z_86(t);
            {
              s_85 = t;
              {
                ATerm w_85 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(s_85)), not_null(p_85));
                {
                  w_85 = t;
                  if(((v_85 != NULL) && (v_85 != w_85)))
                    _fail(w_85);
                  else
                    v_85 = w_85;
                }
                t = not_null(v_85);
              }
            }
          }
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
  ATerm e_4 (ATerm t)
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        {
          ATerm x_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(y_19);
            }
          else
            {
              t = x_19;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, e_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm l_89 (ATerm))
{
  t = Scope_2(t, l_89, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm g_86 = NULL,j_86 = NULL;
  g_86 = t;
  f_86 :
  if(match_cons(g_86, sym_DynamicRules_1))
    {
      j_86 = ATgetArgument(g_86, 0);
      {
        ATerm s_86 = NULL,u_86 = NULL;
        ATerm t_86 = NULL;
        t = SSLgetAnnotations(not_null(g_86));
        {
          t_86 = t;
          if(((s_86 != NULL) && (s_86 != t_86)))
            _fail(t_86);
          else
            s_86 = t_86;
        }
        {
          t = not_null(j_86);
          {
            ATerm w_86 = NULL;
            t = h_85(t);
            {
              u_86 = t;
              {
                ATerm x_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(u_86)), not_null(s_86));
                {
                  x_86 = t;
                  if(((w_86 != NULL) && (w_86 != x_86)))
                    _fail(x_86);
                  else
                    w_86 = x_86;
                }
                t = not_null(w_86);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  p_87 :
  if(match_cons(q_87, sym_Scope_2))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      {
        ATerm w_87 = NULL,y_87 = NULL;
        ATerm x_87 = NULL;
        t = SSLgetAnnotations(not_null(q_87));
        {
          x_87 = t;
          if(((w_87 != NULL) && (w_87 != x_87)))
            _fail(x_87);
          else
            w_87 = x_87;
        }
        {
          t = not_null(r_87);
          {
            ATerm c_88 = NULL;
            t = e_88(t);
            {
              y_87 = t;
              {
                t = not_null(s_87);
                {
                  ATerm g_88 = NULL;
                  t = f_88(t);
                  {
                    c_88 = t;
                    {
                      ATerm l_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(y_87), not_null(c_88)), not_null(w_87));
                      {
                        l_88 = t;
                        if(((g_88 != NULL) && (g_88 != l_88)))
                          _fail(l_88);
                        else
                          g_88 = l_88;
                      }
                      t = not_null(g_88);
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
ATerm tboundin_3 (ATerm t, ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm))
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_89, m_89);
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      t = DynamicRules_1(t, m_89);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym_DynamicRules_1))
    {
      u_88 = ATgetArgument(t_88, 0);
      {
        t = not_null(u_88);
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
  ATerm z_88 = NULL,a_89 = NULL;
  z_88 = t;
  y_88 :
  if(match_cons(z_88, sym_Var_1))
    {
      a_89 = ATgetArgument(z_88, 0);
      t = (ATerm) ATinsert(ATempty, not_null(a_89));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  e_89 :
  if(match_cons(f_89, sym__2))
    {
      g_89 = ATgetArgument(f_89, 0);
      h_89 = ATgetArgument(f_89, 1);
      {
        t = not_null(g_89);
        {
          ATerm t_89 (ATerm t)
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_89);
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
                      ATerm f_4 (ATerm t)
                      {
                        t = not_null(h_89);
                        return(t);
                      }
                      t = HdMember_1(t, f_4);
                      t = t_89(t);
                      LocalPopChoice(e_20);
                    }
                  else
                    {
                      t = d_20;
                      t = Cons_2(t, _id, t_89);
                    }
                }
              }
            return(t);
          }
          t = t_89(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm))
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_102(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL;
        y_89 = t;
        x_89 :
        if(((ATgetType(y_89) == AT_LIST) && ((ATermList) y_89 != ATempty)))
          {
            z_89 = ATgetFirst((ATermList) y_89);
            a_90 = (ATerm) ATgetNext((ATermList) y_89);
            {
              ATerm d_90 = NULL,f_90 = NULL;
              ATerm l_20;
              l_20 = t;
              {
                ATerm e_90 = NULL;
                t = not_null(z_89);
                {
                  t = p_102(t);
                  {
                    e_90 = t;
                    if(((d_90 != NULL) && (d_90 != e_90)))
                      _fail(e_90);
                    else
                      d_90 = e_90;
                  }
                }
              }
              t = l_20;
              {
                ATerm g_90 = NULL;
                t = not_null(a_90);
                {
                  t = foldr_3(t, n_102, o_102, p_102);
                  {
                    g_90 = t;
                    if(((f_90 != NULL) && (f_90 != g_90)))
                      _fail(g_90);
                    else
                      f_90 = g_90;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_90), not_null(f_90));
                  t = o_102(t);
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
ATerm crush_3 (ATerm t, ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm))
{
  ATerm u_90 = NULL;
  ATerm w_90 = NULL;
  u_90 = t;
  {
    ATerm x_90 = NULL;
    ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
    t = not_null(u_90);
    {
      x_90 = t;
      {
        t = SSL_explode_term(not_null(x_90));
        {
          z_90 = t;
          p_90 :
          if(match_cons(z_90, sym__2))
            {
              a_91 = ATgetArgument(z_90, 0);
              b_91 = ATgetArgument(z_90, 1);
              if(((w_90 != NULL) && (w_90 != b_91)))
                _fail(b_91);
              else
                w_90 = b_91;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_90);
      t = foldr_3(t, b_104, c_104, d_104);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL;
  i_91 = t;
  g_91 :
  if(match_cons(i_91, sym__2))
    {
      j_91 = ATgetArgument(i_91, 0);
      k_91 = ATgetArgument(i_91, 1);
      h_91 :
      if(((ATgetType(k_91) == AT_LIST) && ((ATermList) k_91 != ATempty)))
        {
          l_91 = ATgetFirst((ATermList) k_91);
          m_91 = (ATerm) ATgetNext((ATermList) k_91);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_91)), not_null(l_91)), not_null(m_91));
        }
      else
        {
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
  ATerm e_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL;
  e_92 = t;
  c_92 :
  if(((ATgetType(e_92) == AT_LIST) && ((ATermList) e_92 != ATempty)))
    {
      r_92 = ATgetFirst((ATermList) e_92);
      u_92 = (ATerm) ATgetNext((ATermList) e_92);
      d_92 :
      if(match_cons(r_92, sym__2))
        {
          s_92 = ATgetArgument(r_92, 0);
          t_92 = ATgetArgument(r_92, 1);
          {
            ATerm y_92 = NULL,z_92 = NULL,f_93 = NULL,l_93 = NULL;
            ATerm m_20;
            m_20 = t;
            {
              ATerm a_93 = NULL;
              ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
              t = not_null(t_92);
              {
                a_93 = t;
                {
                  t = SSL_explode_term(not_null(a_93));
                  {
                    c_93 = t;
                    v_91 :
                    if(match_cons(c_93, sym__2))
                      {
                        d_93 = ATgetArgument(c_93, 0);
                        e_93 = ATgetArgument(c_93, 1);
                        {
                          if(((y_92 != NULL) && (y_92 != d_93)))
                            _fail(d_93);
                          else
                            y_92 = d_93;
                          if(((z_92 != NULL) && (z_92 != e_93)))
                            _fail(e_93);
                          else
                            z_92 = e_93;
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
            t = m_20;
            {
              ATerm q_20;
              q_20 = t;
              {
                ATerm g_93 = NULL;
                ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL;
                t = not_null(s_92);
                {
                  g_93 = t;
                  {
                    t = SSL_explode_term(not_null(g_93));
                    {
                      i_93 = t;
                      y_91 :
                      if(match_cons(i_93, sym__2))
                        {
                          j_93 = ATgetArgument(i_93, 0);
                          k_93 = ATgetArgument(i_93, 1);
                          {
                            if(((y_92 != NULL) && (y_92 != j_93)))
                              _fail(j_93);
                            else
                              y_92 = j_93;
                            if(((f_93 != NULL) && (f_93 != k_93)))
                              _fail(k_93);
                            else
                              f_93 = k_93;
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
              t = q_20;
              {
                ATerm m_93 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_93), not_null(z_92));
                {
                  t = zip_1(t, _id);
                  {
                    m_93 = t;
                    if(((l_93 != NULL) && (l_93 != m_93)))
                      _fail(m_93);
                    else
                      l_93 = m_93;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_93), not_null(u_92));
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
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL;
  w_93 = t;
  u_93 :
  if(((ATgetType(w_93) == AT_LIST) && ((ATermList) w_93 != ATempty)))
    {
      x_93 = ATgetFirst((ATermList) w_93);
      a_94 = (ATerm) ATgetNext((ATermList) w_93);
      v_93 :
      if(match_cons(x_93, sym__2))
        {
          y_93 = ATgetArgument(x_93, 0);
          z_93 = ATgetArgument(x_93, 1);
          {
            ATerm i_94 = NULL;
            if(((y_93 != NULL) && (y_93 != z_93)))
              _fail(z_93);
            else
              y_93 = z_93;
            {
              if(((i_94 != NULL) && (i_94 != a_94)))
                _fail(a_94);
              else
                i_94 = a_94;
              t = not_null(i_94);
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
ATerm while_not_2 (ATerm t, ATerm l_101 (ATerm), ATerm m_101 (ATerm))
{
  ATerm k_94 (ATerm t)
  {
    ATerm s_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_101(t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = s_20;
        {
          t = m_101(t);
          t = k_94(t);
        }
      }
    return(t);
  }
  t = k_94(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm))
{
  t = o_101(t);
  t = while_not_2(t, p_101, q_101);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm q_103 (ATerm))
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
  o_94 = t;
  n_94 :
  if(((ATgetType(o_94) == AT_LIST) && ((ATermList) o_94 != ATempty)))
    {
      p_94 = ATgetFirst((ATermList) o_94);
      q_94 = (ATerm) ATgetNext((ATermList) o_94);
      {
        t = q_103(t);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm t_94 = NULL;
            t_94 = t;
            if(((p_94 != NULL) && (p_94 != t_94)))
              _fail(t_94);
            else
              p_94 = t_94;
            return(t);
          }
          t = fetch_1(t, g_4);
        }
        t = not_null(q_94);
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
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_94 = NULL,b_95 = NULL,c_95 = NULL;
      z_94 = t;
      x_94 :
      if(match_cons(z_94, sym__2))
        {
          b_95 = ATgetArgument(z_94, 0);
          c_95 = ATgetArgument(z_94, 1);
          {
            t = not_null(b_95);
            {
              ATerm i_95 (ATerm t)
              {
                ATerm y_20 = t;
                int z_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(z_20);
                  }
                else
                  {
                    t = y_20;
                    {
                      ATerm a_21 = t;
                      int b_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_4 (ATerm t)
                          {
                            t = not_null(c_95);
                            return(t);
                          }
                          t = HdMember_1(t, h_4);
                          t = i_95(t);
                          LocalPopChoice(b_21);
                        }
                      else
                        {
                          t = a_21;
                          t = Cons_2(t, _id, i_95);
                        }
                    }
                  }
                return(t);
              }
              t = i_95(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm i_4 (ATerm t)
        {
          ATerm f_95 = NULL;
          f_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_95));
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          ATerm c_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 (ATerm t)
              {
                ATerm g_21 = t;
                int h_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(h_21);
                  }
                else
                  {
                    t = g_21;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, l_4);
              LocalPopChoice(f_21);
            }
          else
            {
              t = c_21;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, i_4, j_4, k_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_95 (ATerm t)
  {
    ATerm k_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_90(t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = k_21;
        {
          ATerm v_21 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_95 = NULL;
              ATerm f_22;
              f_22 = t;
              {
                ATerm m_95 = NULL;
                t = r_90(t);
                {
                  m_95 = t;
                  if(((l_95 != NULL) && (l_95 != m_95)))
                    _fail(m_95);
                  else
                    l_95 = m_95;
                }
              }
              t = f_22;
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm o_4 (ATerm t)
                  {
                    t = not_null(l_95);
                    return(t);
                  }
                  t = split_2(t, n_95, o_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm n_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = s_90(t, m_4, n_95, n_4);
                {
                  ATerm p_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, p_4, union_0, _id);
                }
              }
              LocalPopChoice(e_22);
            }
          else
            {
              t = v_21;
              {
                ATerm q_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, q_4, union_0, n_95);
              }
            }
        }
      }
    return(t);
  }
  t = n_95(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, r_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
  c_96 = t;
  s_95 :
  if(match_cons(c_96, sym_LRule_1))
    {
      d_96 = ATgetArgument(c_96, 0);
      v_95 :
      if(match_cons(d_96, sym_Rule_3))
        {
          w_95 = ATgetArgument(d_96, 0);
          x_95 = ATgetArgument(d_96, 1);
          b_96 = ATgetArgument(d_96, 2);
          {
            t = not_null(w_95);
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
      if(match_cons(c_96, sym_Scope_2))
        {
          d_96 = ATgetArgument(c_96, 0);
          e_96 = ATgetArgument(c_96, 1);
          t = not_null(d_96);
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
  ATerm x_96 = NULL,y_96 = NULL;
  x_96 = t;
  w_96 :
  if(match_cons(x_96, sym_Var_1))
    {
      y_96 = ATgetArgument(x_96, 0);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_97 = NULL,f_97 = NULL;
            ATerm e_97 = NULL;
            t = SSLgetAnnotations(not_null(x_96));
            {
              e_97 = t;
              if(((d_97 != NULL) && (d_97 != e_97)))
                _fail(e_97);
              else
                d_97 = e_97;
            }
            {
              t = not_null(y_96);
              {
                ATerm h_97 = NULL;
                t = w_0(t);
                {
                  f_97 = t;
                  {
                    ATerm i_97 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_97)), not_null(d_97));
                    {
                      i_97 = t;
                      if(((h_97 != NULL) && (h_97 != i_97)))
                        _fail(i_97);
                      else
                        h_97 = i_97;
                    }
                    t = not_null(h_97);
                  }
                }
              }
            }
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            {
              ATerm l_97 = NULL,n_97 = NULL;
              ATerm m_97 = NULL;
              t = SSLgetAnnotations(not_null(x_96));
              {
                m_97 = t;
                if(((l_97 != NULL) && (l_97 != m_97)))
                  _fail(m_97);
                else
                  l_97 = m_97;
              }
              {
                t = not_null(y_96);
                {
                  ATerm p_97 = NULL;
                  t = w_0(t);
                  {
                    n_97 = t;
                    {
                      ATerm q_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_97)), not_null(l_97));
                      {
                        q_97 = t;
                        if(((p_97 != NULL) && (p_97 != q_97)))
                          _fail(q_97);
                        else
                          p_97 = q_97;
                      }
                      t = not_null(p_97);
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
ATerm DistBinding_2 (ATerm t, ATerm z_91 (ATerm), ATerm a_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL;
  j_98 = t;
  i_98 :
  if(match_cons(j_98, sym__3))
    {
      k_98 = ATgetArgument(j_98, 0);
      l_98 = ATgetArgument(j_98, 1);
      m_98 = ATgetArgument(j_98, 2);
      {
        t = not_null(k_98);
        {
          ATerm s_4 (ATerm t)
          {
            ATerm q_98 = NULL;
            q_98 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_98), not_null(m_98));
              t = z_91(t);
            }
            return(t);
          }
          ATerm t_4 (ATerm t)
          {
            ATerm s_98 = NULL;
            s_98 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_98), not_null(l_98));
              t = z_91(t);
            }
            return(t);
          }
          t = a_92(t, s_4, t_4, _id);
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
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
  z_98 = t;
  y_98 :
  if(match_cons(z_98, sym__2))
    {
      a_99 = ATgetArgument(z_98, 0);
      b_99 = ATgetArgument(z_98, 1);
      {
        t = not_null(a_99);
        {
          ATerm u_4 (ATerm t)
          {
            t = not_null(b_99);
            return(t);
          }
          t = at_end_1(t, u_4);
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
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  g_99 :
  if(match_cons(h_99, sym__2))
    {
      i_99 = ATgetArgument(h_99, 0);
      j_99 = ATgetArgument(h_99, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_99)), not_null(i_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL;
  u_99 = t;
  r_99 :
  if(match_cons(u_99, sym__2))
    {
      v_99 = ATgetArgument(u_99, 0);
      y_99 = ATgetArgument(u_99, 1);
      s_99 :
      if(((ATgetType(v_99) == AT_LIST) && ((ATermList) v_99 != ATempty)))
        {
          w_99 = ATgetFirst((ATermList) v_99);
          x_99 = (ATerm) ATgetNext((ATermList) v_99);
          t_99 :
          if(((ATgetType(y_99) == AT_LIST) && ((ATermList) y_99 != ATempty)))
            {
              z_99 = ATgetFirst((ATermList) y_99);
              a_100 = (ATerm) ATgetNext((ATermList) y_99);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_99), not_null(z_99)), (ATerm) ATmakeAppl(sym__2, not_null(x_99), not_null(a_100)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
  m_100 = t;
  j_100 :
  if(match_cons(m_100, sym__2))
    {
      n_100 = ATgetArgument(m_100, 0);
      o_100 = ATgetArgument(m_100, 1);
      k_100 :
      if(((ATermList) n_100 == ATempty))
        {
          l_100 :
          if(((ATermList) o_100 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm))
{
  ATerm q_100 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_106(t);
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          t = h_106(t);
          {
            t = _2(t, j_106, q_100);
            t = i_106(t);
          }
        }
      }
    return(t);
  }
  t = q_100(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm l_106 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, l_106);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm f_92 (ATerm), ATerm g_92 (ATerm, ATerm (ATerm)))
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  c_101 = t;
  b_101 :
  if(match_cons(c_101, sym__2))
    {
      d_101 = ATgetArgument(c_101, 0);
      e_101 = ATgetArgument(c_101, 1);
      {
        ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,v_101 = NULL;
        ATerm m_22;
        m_22 = t;
        {
          ATerm k_101 = NULL;
          t = not_null(d_101);
          {
            ATerm r_101 = NULL;
            t = f_92(t);
            {
              k_101 = t;
              {
                if(((h_101 != NULL) && (h_101 != k_101)))
                  _fail(k_101);
                else
                  h_101 = k_101;
                {
                  ATerm s_101 = NULL,u_101 = NULL;
                  t = map_1(t, new_0);
                  {
                    r_101 = t;
                    {
                      if(((i_101 != NULL) && (i_101 != r_101)))
                        _fail(r_101);
                      else
                        i_101 = r_101;
                      {
                        ATerm t_101 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_101), not_null(i_101));
                        {
                          t = zip_1(t, _id);
                          {
                            t_101 = t;
                            if(((s_101 != NULL) && (s_101 != t_101)))
                              _fail(t_101);
                            else
                              s_101 = t_101;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_101), not_null(e_101));
                          {
                            t = conc_0(t);
                            {
                              u_101 = t;
                              if(((j_101 != NULL) && (j_101 != u_101)))
                                _fail(u_101);
                              else
                                j_101 = u_101;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = m_22;
        {
          ATerm w_101 = NULL;
          t = not_null(d_101);
          {
            ATerm v_4 (ATerm t)
            {
              t = not_null(i_101);
              return(t);
            }
            t = g_92(t, v_4);
            {
              w_101 = t;
              if(((v_101 != NULL) && (v_101 != w_101)))
                _fail(w_101);
              else
                v_101 = w_101;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(v_101), not_null(e_101), not_null(j_101));
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
  ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL;
  g_102 = t;
  e_102 :
  if(match_cons(g_102, sym__2))
    {
      h_102 = ATgetArgument(g_102, 0);
      i_102 = ATgetArgument(g_102, 1);
      f_102 :
      if(((ATgetType(i_102) == AT_LIST) && ((ATermList) i_102 != ATempty)))
        {
          j_102 = ATgetFirst((ATermList) i_102);
          k_102 = (ATerm) ATgetNext((ATermList) i_102);
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_102), not_null(k_102));
        }
      else
        {
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
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL;
  x_102 = t;
  u_102 :
  if(match_cons(x_102, sym__2))
    {
      y_102 = ATgetArgument(x_102, 0);
      z_102 = ATgetArgument(x_102, 1);
      v_102 :
      if(((ATgetType(z_102) == AT_LIST) && ((ATermList) z_102 != ATempty)))
        {
          a_103 = ATgetFirst((ATermList) z_102);
          d_103 = (ATerm) ATgetNext((ATermList) z_102);
          w_102 :
          if(match_cons(a_103, sym__2))
            {
              b_103 = ATgetArgument(a_103, 0);
              c_103 = ATgetArgument(a_103, 1);
              {
                ATerm f_103 = NULL;
                if(((y_102 != NULL) && (y_102 != b_103)))
                  _fail(b_103);
                else
                  y_102 = b_103;
                {
                  if(((f_103 != NULL) && (f_103 != c_103)))
                    _fail(c_103);
                  else
                    f_103 = c_103;
                  t = not_null(f_103);
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
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm t_91 (ATerm, ATerm (ATerm)))
{
  ATerm k_103 = NULL,m_103 = NULL,n_103 = NULL;
  k_103 = t;
  j_103 :
  if(match_cons(k_103, sym__2))
    {
      m_103 = ATgetArgument(k_103, 0);
      n_103 = ATgetArgument(k_103, 1);
      {
        t = not_null(m_103);
        {
          ATerm w_4 (ATerm t)
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(n_103);
              return(t);
            }
            t = split_2(t, _id, x_4);
            t = lookup_0(t);
            return(t);
          }
          t = t_91(t, w_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm k_99 (ATerm))
{
  ATerm x_103 = NULL,y_103 = NULL,e_104 = NULL;
  x_103 = t;
  w_103 :
  if(match_cons(x_103, sym__2))
    {
      y_103 = ATgetArgument(x_103, 0);
      e_104 = ATgetArgument(x_103, 1);
      {
        t = not_null(y_103);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm h_104 = NULL;
            h_104 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_104), not_null(e_104));
              t = k_99(t);
            }
            return(t);
          }
          t = _all(t, y_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm p_99 (ATerm))
{
  ATerm l_104 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = all_dist_1(t, l_104);
      }
    return(t);
  }
  t = l_104(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_92 (ATerm, ATerm (ATerm)), ATerm i_92 (ATerm), ATerm j_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_92 (ATerm, ATerm (ATerm)))
{
  ATerm n_104 = NULL;
  n_104 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_104), (ATerm) ATempty);
    {
      ATerm q_104 (ATerm t)
      {
        ATerm z_4 (ATerm t)
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, h_92);
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              {
                t = RnBinding_2(t, i_92, k_92);
                t = DistBinding_2(t, q_104, j_92);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_4);
        return(t);
      }
      t = q_104(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm r_104 (ATerm t, ATerm s_104 (ATerm))
  {
    t = Scope_2(t, s_104, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, r_104);
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
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  v_104 = t;
  u_104 :
  if(((ATgetType(v_104) == AT_LIST) && ((ATermList) v_104 != ATempty)))
    {
      w_104 = ATgetFirst((ATermList) v_104);
      x_104 = (ATerm) ATgetNext((ATermList) v_104);
      t = not_null(w_104);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL;
  d_105 = t;
  c_105 :
  if(match_cons(d_105, sym__2))
    {
      e_105 = ATgetArgument(d_105, 0);
      f_105 = ATgetArgument(d_105, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_105), not_null(f_105));
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
ATerm rewrite_1 (ATerm t, ATerm x_97 (ATerm))
{
  ATerm l_105 = NULL;
  ATerm n_105 = NULL;
  l_105 = t;
  {
    ATerm o_105 = NULL;
    t = term_t_22;
    {
      t = x_97(t);
      {
        o_105 = t;
        if(((n_105 != NULL) && (n_105 != o_105)))
          _fail(o_105);
        else
          n_105 = o_105;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_105), not_null(l_105));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL;
  c_106 = t;
  a_106 :
  if(match_cons(c_106, sym_Call_2))
    {
      d_106 = ATgetArgument(c_106, 0);
      f_106 = ATgetArgument(c_106, 1);
      b_106 :
      if(match_cons(d_106, sym_SVar_1))
        {
          e_106 = ATgetArgument(d_106, 0);
          {
            ATerm o_106 = NULL,p_106 = NULL,r_106 = NULL,s_106 = NULL,c_107 = NULL;
            ATerm u_22;
            u_22 = t;
            {
              ATerm t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(e_106));
              {
                ATerm a_5 (ATerm t)
                {
                  t = term_v_22;
                  return(t);
                }
                t = rewrite_1(t, a_5);
                {
                  t_106 = t;
                  v_105 :
                  if(match_cons(t_106, sym_Defined_4))
                    {
                      u_106 = ATgetArgument(t_106, 0);
                      v_106 = ATgetArgument(t_106, 1);
                      w_106 = ATgetArgument(t_106, 2);
                      x_106 = ATgetArgument(t_106, 3);
                      w_105 :
                      if(match_string(u_106, "i_0"))
                        {
                          ATerm y_106 = NULL,z_106 = NULL,a_107 = NULL,b_107 = NULL;
                          if(((e_106 != NULL) && (e_106 != v_106)))
                            _fail(v_106);
                          else
                            e_106 = v_106;
                          {
                            if(((o_106 != NULL) && (o_106 != w_106)))
                              _fail(w_106);
                            else
                              o_106 = w_106;
                            {
                              if(((p_106 != NULL) && (p_106 != x_106)))
                                _fail(x_106);
                              else
                                p_106 = x_106;
                              {
                                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_106), not_null(o_106), not_null(p_106));
                                {
                                  t = strename_0(t);
                                  {
                                    y_106 = t;
                                    u_105 :
                                    if(match_cons(y_106, sym_SDef_3))
                                      {
                                        z_106 = ATgetArgument(y_106, 0);
                                        a_107 = ATgetArgument(y_106, 1);
                                        b_107 = ATgetArgument(y_106, 2);
                                        {
                                          if(((e_106 != NULL) && (e_106 != z_106)))
                                            _fail(z_106);
                                          else
                                            e_106 = z_106;
                                          {
                                            if(((r_106 != NULL) && (r_106 != a_107)))
                                              _fail(a_107);
                                            else
                                              r_106 = a_107;
                                            if(((s_106 != NULL) && (s_106 != b_107)))
                                              _fail(b_107);
                                            else
                                              s_106 = b_107;
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
            t = u_22;
            {
              ATerm h_107 = NULL;
              t = not_null(r_106);
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
                  d_107 = t;
                  y_105 :
                  if(match_cons(d_107, sym_VarDec_2))
                    {
                      e_107 = ATgetArgument(d_107, 0);
                      f_107 = ATgetArgument(d_107, 1);
                      t = not_null(e_107);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, b_5);
                {
                  h_107 = t;
                  if(((c_107 != NULL) && (c_107 != h_107)))
                    _fail(h_107);
                  else
                    c_107 = h_107;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_107), not_null(f_106), not_null(s_106));
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
  ATerm w_107 = NULL;
  ATerm g_23;
  g_23 = t;
  {
    ATerm x_107 = NULL;
    t = new_0(t);
    {
      x_107 = t;
      {
        if(((w_107 != NULL) && (w_107 != x_107)))
          _fail(x_107);
        else
          w_107 = x_107;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_k_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_107)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              {
                ATerm c_5 (ATerm t)
                {
                  t = term_l_23;
                  return(t);
                }
                t = say_1(t, c_5);
                _fail(t);
              }
            }
          {
            ATerm m_23 = t;
            int n_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL;
                y_107 = t;
                p_107 :
                if(match_cons(y_107, sym_LChoice_2))
                  {
                    z_107 = ATgetArgument(y_107, 0);
                    f_108 = ATgetArgument(y_107, 1);
                    q_107 :
                    if(match_cons(z_107, sym_Call_2))
                      {
                        a_108 = ATgetArgument(z_107, 0);
                        e_108 = ATgetArgument(z_107, 1);
                        r_107 :
                        if(match_cons(a_108, sym_SVar_1))
                          {
                            d_108 = ATgetArgument(a_108, 0);
                            s_107 :
                            if(((ATermList) e_108 == ATempty))
                              {
                                v_107 :
                                if(match_cons(f_108, sym_Id_0))
                                  {
                                    if(((w_107 != NULL) && (w_107 != d_108)))
                                      _fail(d_108);
                                    else
                                      w_107 = d_108;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(n_23);
              }
            else
              {
                t = m_23;
                {
                  ATerm d_5 (ATerm t)
                  {
                    t = term_o_23;
                    return(t);
                  }
                  t = debug_1(t, d_5);
                  _fail(t);
                }
              }
            {
              ATerm e_5 (ATerm t)
              {
                t = term_p_23;
                return(t);
              }
              t = say_1(t, e_5);
            }
          }
        }
      }
    }
  }
  t = g_23;
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
ATerm assert_1 (ATerm t, ATerm v_97 (ATerm))
{
  ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
  p_108 = t;
  o_108 :
  if(match_cons(p_108, sym__2))
    {
      q_108 = ATgetArgument(p_108, 0);
      r_108 = ATgetArgument(p_108, 1);
      {
        ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
        ATerm q_23;
        q_23 = t;
        {
          ATerm x_108 = NULL;
          ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
          t = v_97(t);
          {
            x_108 = t;
            {
              if(((u_108 != NULL) && (u_108 != x_108)))
                _fail(x_108);
              else
                u_108 = x_108;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_108), not_null(q_108), not_null(r_108));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_23 = t;
                    int s_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_108), term_z_13);
                        t = table_get_0(t);
                        LocalPopChoice(s_23);
                      }
                    else
                      {
                        t = r_23;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_108 = t;
                      n_108 :
                      if(((ATgetType(y_108) == AT_LIST) && ((ATermList) y_108 != ATempty)))
                        {
                          z_108 = ATgetFirst((ATermList) y_108);
                          a_109 = (ATerm) ATgetNext((ATermList) y_108);
                          {
                            if(((v_108 != NULL) && (v_108 != z_108)))
                              _fail(z_108);
                            else
                              v_108 = z_108;
                            {
                              if(((w_108 != NULL) && (w_108 != a_109)))
                                _fail(a_109);
                              else
                                w_108 = a_109;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_108), term_z_13, (ATerm) ATinsert(CheckATermList(not_null(w_108)), (ATerm) ATinsert(CheckATermList(not_null(v_108)), not_null(q_108))));
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
        t = q_23;
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
  ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL;
  g_109 = t;
  f_109 :
  if(match_cons(g_109, sym_SDef_3))
    {
      h_109 = ATgetArgument(g_109, 0);
      i_109 = ATgetArgument(g_109, 1);
      j_109 = ATgetArgument(g_109, 2);
      {
        ATerm t_23;
        t_23 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_109)), (ATerm) ATmakeAppl(sym_Defined_4, term_u_23, not_null(h_109), not_null(i_109), not_null(j_109)));
          {
            ATerm f_5 (ATerm t)
            {
              t = term_v_22;
              return(t);
            }
            t = assert_1(t, f_5);
          }
        }
        t = t_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm w_109 = NULL,x_109 = NULL;
  w_109 = t;
  v_109 :
  if(match_cons(w_109, sym_Strategies_1))
    {
      x_109 = ATgetArgument(w_109, 0);
      {
        ATerm a_110 = NULL,c_110 = NULL;
        ATerm b_110 = NULL;
        t = SSLgetAnnotations(not_null(w_109));
        {
          b_110 = t;
          if(((a_110 != NULL) && (a_110 != b_110)))
            _fail(b_110);
          else
            a_110 = b_110;
        }
        {
          t = not_null(x_109);
          {
            ATerm e_110 = NULL;
            t = r_85(t);
            {
              c_110 = t;
              {
                ATerm f_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(c_110)), not_null(a_110));
                {
                  f_110 = t;
                  if(((e_110 != NULL) && (e_110 != f_110)))
                    _fail(f_110);
                  else
                    e_110 = f_110;
                }
                t = not_null(e_110);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm q_110 = NULL,r_110 = NULL;
  q_110 = t;
  p_110 :
  if(match_cons(q_110, sym_Signature_1))
    {
      r_110 = ATgetArgument(q_110, 0);
      {
        ATerm y_110 = NULL,a_111 = NULL;
        ATerm z_110 = NULL;
        t = SSLgetAnnotations(not_null(q_110));
        {
          z_110 = t;
          if(((y_110 != NULL) && (y_110 != z_110)))
            _fail(z_110);
          else
            y_110 = z_110;
        }
        {
          t = not_null(r_110);
          {
            ATerm c_111 = NULL;
            t = o_85(t);
            {
              a_111 = t;
              {
                ATerm d_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(a_111)), not_null(y_110));
                {
                  d_111 = t;
                  if(((c_111 != NULL) && (c_111 != d_111)))
                    _fail(d_111);
                  else
                    c_111 = d_111;
                }
                t = not_null(c_111);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm n_111 = NULL,o_111 = NULL;
  n_111 = t;
  m_111 :
  if(match_cons(n_111, sym_Specification_1))
    {
      o_111 = ATgetArgument(n_111, 0);
      {
        ATerm r_111 = NULL,t_111 = NULL;
        ATerm s_111 = NULL;
        t = SSLgetAnnotations(not_null(n_111));
        {
          s_111 = t;
          if(((r_111 != NULL) && (r_111 != s_111)))
            _fail(s_111);
          else
            r_111 = s_111;
        }
        {
          t = not_null(o_111);
          {
            ATerm v_111 = NULL;
            t = t_85(t);
            {
              t_111 = t;
              {
                ATerm w_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_111)), not_null(r_111));
                {
                  w_111 = t;
                  if(((v_111 != NULL) && (v_111 != w_111)))
                    _fail(w_111);
                  else
                    v_111 = w_111;
                }
                t = not_null(v_111);
              }
            }
          }
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
  ATerm g_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        ATerm k_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, k_5);
        return(t);
      }
      t = Cons_2(t, j_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, h_5, i_5);
    return(t);
  }
  t = Specification_1(t, g_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
{
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL;
  h_112 = t;
  g_112 :
  if(match_cons(h_112, sym__2))
    {
      i_112 = ATgetArgument(h_112, 0);
      j_112 = ATgetArgument(h_112, 1);
      {
        ATerm p_112 = NULL,r_112 = NULL;
        ATerm q_112 = NULL;
        t = SSLgetAnnotations(not_null(h_112));
        {
          q_112 = t;
          if(((p_112 != NULL) && (p_112 != q_112)))
            _fail(q_112);
          else
            p_112 = q_112;
        }
        {
          t = not_null(i_112);
          {
            ATerm t_112 = NULL;
            t = q_76(t);
            {
              r_112 = t;
              {
                t = not_null(j_112);
                {
                  ATerm v_112 = NULL;
                  t = r_76(t);
                  {
                    t_112 = t;
                    {
                      ATerm w_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_112), not_null(t_112)), not_null(p_112));
                      {
                        w_112 = t;
                        if(((v_112 != NULL) && (v_112 != w_112)))
                          _fail(w_112);
                        else
                          v_112 = w_112;
                      }
                      t = not_null(v_112);
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
  ATerm g_113 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm h_113 = NULL,i_113 = NULL;
      h_113 = t;
      f_113 :
      if(match_cons(h_113, sym_Program_1))
        {
          i_113 = ATgetArgument(h_113, 0);
          if(((g_113 != NULL) && (g_113 != i_113)))
            _fail(i_113);
          else
            g_113 = i_113;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, l_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), not_null(g_113)), term_w_23));
      {
        t = printnl_0(t);
        {
          t = term_y_23;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, term_z_23));
  {
    t = printnl_0(t);
    {
      t = term_y_23;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_113 = NULL;
  l_113 = t;
  t = SSL_TicksToSeconds(not_null(l_113));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL;
  q_113 = t;
  p_113 :
  if(match_cons(q_113, sym__2))
    {
      r_113 = ATgetArgument(q_113, 0);
      s_113 = ATgetArgument(q_113, 1);
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_113), not_null(s_113));
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = SSL_addr(not_null(r_113), not_null(s_113));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_102 (ATerm), ATerm m_102 (ATerm))
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_102(t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm a_114 = NULL,b_114 = NULL,c_114 = NULL;
        a_114 = t;
        y_113 :
        if(((ATgetType(a_114) == AT_LIST) && ((ATermList) a_114 != ATempty)))
          {
            b_114 = ATgetFirst((ATermList) a_114);
            c_114 = (ATerm) ATgetNext((ATermList) a_114);
            {
              ATerm f_114 = NULL;
              ATerm g_114 = NULL;
              t = not_null(c_114);
              {
                t = foldr_2(t, l_102, m_102);
                {
                  g_114 = t;
                  if(((f_114 != NULL) && (f_114 != g_114)))
                    _fail(g_114);
                  else
                    f_114 = g_114;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_114), not_null(f_114));
                t = m_102(t);
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
ATerm crush_2 (ATerm t, ATerm z_103 (ATerm), ATerm a_104 (ATerm))
{
  ATerm n_114 = NULL;
  ATerm p_114 = NULL;
  n_114 = t;
  {
    ATerm q_114 = NULL;
    ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
    t = not_null(n_114);
    {
      q_114 = t;
      {
        t = SSL_explode_term(not_null(q_114));
        {
          s_114 = t;
          m_114 :
          if(match_cons(s_114, sym__2))
            {
              t_114 = ATgetArgument(s_114, 0);
              u_114 = ATgetArgument(s_114, 1);
              if(((p_114 != NULL) && (p_114 != u_114)))
                _fail(u_114);
              else
                p_114 = u_114;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_114);
      t = foldr_2(t, z_103, a_104);
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
    ATerm m_5 (ATerm t)
    {
      t = term_e_24;
      return(t);
    }
    t = crush_2(t, m_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL;
  ATerm n_5 (ATerm t)
  {
    ATerm l_115 = NULL;
    ATerm o_5 (ATerm t)
    {
      ATerm f_24 = t;
      if((PushChoice() == 0))
        {
          ATerm p_5 (ATerm t)
          {
            ATerm g_115 = NULL;
            g_115 = t;
            y_114 :
            if(!(match_cons(g_115, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_5);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_24;
        }
      return(t);
    }
    t = _2(t, o_5, _id);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm r_5 (ATerm t)
        {
          ATerm h_115 = NULL,i_115 = NULL;
          h_115 = t;
          a_115 :
          if(match_cons(h_115, sym_Runtime_1))
            {
              i_115 = ATgetArgument(h_115, 0);
              if(((e_115 != NULL) && (e_115 != i_115)))
                _fail(i_115);
              else
                e_115 = i_115;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_5);
        return(t);
      }
      t = _2(t, q_5, _id);
      {
        ATerm s_5 (ATerm t)
        {
          ATerm t_5 (ATerm t)
          {
            ATerm j_115 = NULL,k_115 = NULL;
            j_115 = t;
            c_115 :
            if(match_cons(j_115, sym_Program_1))
              {
                k_115 = ATgetArgument(j_115, 0);
                if(((f_115 != NULL) && (f_115 != k_115)))
                  _fail(k_115);
                else
                  f_115 = k_115;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_5);
          return(t);
        }
        t = _2(t, s_5, _id);
        {
          ATerm m_115 = NULL;
          t = run_time_0(t);
          {
            m_115 = t;
            if(((l_115 != NULL) && (l_115 != m_115)))
              _fail(m_115);
            else
              l_115 = m_115;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_24), not_null(l_115)), term_g_24), not_null(f_115)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, n_5);
  {
    t = term_e_24;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL;
  s_115 = t;
  r_115 :
  if(match_cons(s_115, sym__2))
    {
      t_115 = ATgetArgument(s_115, 0);
      u_115 = ATgetArgument(s_115, 1);
      t = SSL_WriteToTextFile(not_null(t_115), not_null(u_115));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
  a_116 = t;
  z_115 :
  if(match_cons(a_116, sym__2))
    {
      b_116 = ATgetArgument(a_116, 0);
      c_116 = ATgetArgument(a_116, 1);
      t = SSL_WriteToBinaryFile(not_null(b_116), not_null(c_116));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_116 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm j_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_5 (ATerm t)
          {
            ATerm l_116 = NULL,m_116 = NULL;
            l_116 = t;
            h_116 :
            if(match_cons(l_116, sym_Output_1))
              {
                m_116 = ATgetArgument(l_116, 0);
                if(((k_116 != NULL) && (k_116 != m_116)))
                  _fail(m_116);
                else
                  k_116 = m_116;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_5);
          LocalPopChoice(k_24);
        }
      else
        {
          t = j_24;
          {
            ATerm n_116 = NULL;
            t = term_l_24;
            {
              n_116 = t;
              if(((k_116 != NULL) && (k_116 != n_116)))
                _fail(n_116);
              else
                k_116 = n_116;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_5, _id);
  }
  t = i_24;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_5 (ATerm t)
      {
        t = not_null(k_116);
        return(t);
      }
      t = split_2(t, x_5, _id);
      return(t);
    }
    t = _2(t, _id, w_5);
    {
      ATerm m_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_5 (ATerm t)
          {
            ATerm z_5 (ATerm t)
            {
              ATerm o_116 = NULL;
              o_116 = t;
              j_116 :
              if(!(match_cons(o_116, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_5);
            return(t);
          }
          t = _2(t, y_5, WriteToBinaryFile_0);
          LocalPopChoice(x_24);
        }
      else
        {
          t = m_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm l_96 (ATerm))
{
  ATerm u_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL;
  ATerm y_24;
  y_24 = t;
  t = dtime_0(t);
  t = y_24;
  {
    t = l_96(t);
    {
      ATerm z_24;
      z_24 = t;
      {
        ATerm v_116 = NULL;
        t = dtime_0(t);
        {
          v_116 = t;
          if(((u_116 != NULL) && (u_116 != v_116)))
            _fail(v_116);
          else
            u_116 = v_116;
        }
      }
      t = z_24;
      {
        w_116 = t;
        t_116 :
        if(match_cons(w_116, sym__2))
          {
            x_116 = ATgetArgument(w_116, 0);
            y_116 = ATgetArgument(w_116, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_116)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_116))), not_null(y_116));
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
  ATerm e_117 = NULL;
  e_117 = t;
  t = SSL_ReadFromFile(not_null(e_117));
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_109 (ATerm), ATerm p_109 (ATerm))
{
  ATerm j_117 = NULL,l_117 = NULL;
  ATerm a_25;
  a_25 = t;
  {
    ATerm k_117 = NULL;
    t = o_109(t);
    {
      k_117 = t;
      if(((j_117 != NULL) && (j_117 != k_117)))
        _fail(k_117);
      else
        j_117 = k_117;
    }
  }
  t = a_25;
  {
    ATerm m_117 = NULL;
    t = p_109(t);
    {
      m_117 = t;
      if(((l_117 != NULL) && (l_117 != m_117)))
        _fail(m_117);
      else
        l_117 = m_117;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_117), not_null(l_117));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_117 = NULL;
  ATerm b_25;
  b_25 = t;
  {
    ATerm c_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 (ATerm t)
        {
          ATerm t_117 = NULL,u_117 = NULL;
          t_117 = t;
          q_117 :
          if(match_cons(t_117, sym_Input_1))
            {
              u_117 = ATgetArgument(t_117, 0);
              if(((s_117 != NULL) && (s_117 != u_117)))
                _fail(u_117);
              else
                s_117 = u_117;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, a_6);
        LocalPopChoice(h_25);
      }
    else
      {
        t = c_25;
        {
          ATerm v_117 = NULL;
          t = term_i_25;
          {
            v_117 = t;
            if(((s_117 != NULL) && (s_117 != v_117)))
              _fail(v_117);
            else
              s_117 = v_117;
          }
        }
      }
  }
  t = b_25;
  {
    ATerm b_6 (ATerm t)
    {
      t = not_null(s_117);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_118 = NULL;
  c_118 = t;
  b_118 :
  if(match_cons(c_118, sym_Version_0))
    {
      ATerm e_118 = NULL,g_118 = NULL;
      ATerm j_25;
      j_25 = t;
      {
        ATerm f_118 = NULL;
        t = SSLgetAnnotations(not_null(c_118));
        {
          f_118 = t;
          if(((e_118 != NULL) && (e_118 != f_118)))
            _fail(f_118);
          else
            e_118 = f_118;
        }
      }
      t = j_25;
      {
        ATerm h_118 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_118));
        {
          h_118 = t;
          if(((g_118 != NULL) && (g_118 != h_118)))
            _fail(h_118);
          else
            g_118 = h_118;
        }
        t = not_null(g_118);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_96 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm k_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = k_25;
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_6);
  t = j_96(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_118 = NULL;
  m_118 = t;
  t = SSL_table_create(not_null(m_118));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_118 = NULL;
  q_118 = t;
  {
    ATerm q_25;
    q_25 = t;
    {
      t = term_u_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_25, term_x_25, not_null(q_118));
          t = table_put_0(t);
        }
      }
    }
    t = q_25;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL;
  v_118 = t;
  u_118 :
  if(match_cons(v_118, sym__2))
    {
      w_118 = ATgetArgument(v_118, 0);
      x_118 = ATgetArgument(v_118, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_26, not_null(w_118), not_null(x_118));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL;
  g_119 = t;
  e_119 :
  if(match_string(g_119, "register-usage-info"))
    {
      t = register_usage_1(t, v_0);
    }
  else
    {
      if(((ATgetType(g_119) == AT_LIST) && ((ATermList) g_119 != ATempty)))
        {
          h_119 = ATgetFirst((ATermList) g_119);
          i_119 = (ATerm) ATgetNext((ATermList) g_119);
          f_119 :
          if(((ATgetType(i_119) == AT_LIST) && ((ATermList) i_119 != ATempty)))
            {
              j_119 = ATgetFirst((ATermList) i_119);
              k_119 = (ATerm) ATgetNext((ATermList) i_119);
              {
                ATerm o_119 = NULL;
                ATerm b_26;
                b_26 = t;
                {
                  t = not_null(h_119);
                  t = t_0(t);
                }
                t = b_26;
                {
                  ATerm p_119 = NULL;
                  t = not_null(j_119);
                  {
                    t = u_0(t);
                    {
                      p_119 = t;
                      if(((o_119 != NULL) && (o_119 != p_119)))
                        _fail(p_119);
                      else
                        o_119 = p_119;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_119)), not_null(o_119));
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
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 (ATerm t)
      {
        ATerm h_120 = NULL;
        h_120 = t;
        t_119 :
        if(!(match_string(h_120, "-S")))
          {
            if(!(match_string(h_120, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        t = term_t_26;
        t = set_config_0(t);
        t = term_u_26;
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        t = term_w_26;
        return(t);
      }
      t = Option_3(t, d_6, e_6, f_6);
      LocalPopChoice(j_26);
    }
  else
    {
      t = c_26;
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              ATerm i_120 = NULL;
              i_120 = t;
              u_119 :
              if(!(match_string(i_120, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_6 (ATerm t)
            {
              t = term_g_27;
              t = set_config_0(t);
              t = term_h_27;
              return(t);
            }
            ATerm i_6 (ATerm t)
            {
              t = term_i_27;
              return(t);
            }
            t = Option_3(t, g_6, h_6, i_6);
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            {
              ATerm j_27 = t;
              int k_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_6 (ATerm t)
                  {
                    ATerm j_120 = NULL;
                    j_120 = t;
                    v_119 :
                    if(!(match_string(j_120, "-v")))
                      {
                        if(!(match_string(j_120, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_6 (ATerm t)
                  {
                    t = term_m_27;
                    t = set_config_0(t);
                    t = term_n_27;
                    return(t);
                  }
                  ATerm n_6 (ATerm t)
                  {
                    t = term_s_27;
                    return(t);
                  }
                  t = Option_3(t, l_6, m_6, n_6);
                  LocalPopChoice(k_27);
                }
              else
                {
                  t = j_27;
                  {
                    ATerm t_27 = t;
                    int u_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_6 (ATerm t)
                        {
                          ATerm k_120 = NULL;
                          k_120 = t;
                          w_119 :
                          if(!(match_string(k_120, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_6 (ATerm t)
                        {
                          ATerm n_120 = NULL;
                          ATerm y_27;
                          y_27 = t;
                          {
                            ATerm l_120 = NULL;
                            ATerm m_120 = NULL;
                            m_120 = t;
                            if(((l_120 != NULL) && (l_120 != m_120)))
                              _fail(m_120);
                            else
                              l_120 = m_120;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_a_28, not_null(l_120));
                              t = set_config_0(t);
                            }
                          }
                          t = y_27;
                          {
                            ATerm o_120 = NULL;
                            o_120 = t;
                            if(((n_120 != NULL) && (n_120 != o_120)))
                              _fail(o_120);
                            else
                              n_120 = o_120;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_120));
                          }
                          return(t);
                        }
                        ATerm q_6 (ATerm t)
                        {
                          t = term_d_28;
                          return(t);
                        }
                        t = ArgOption_3(t, o_6, p_6, q_6);
                        LocalPopChoice(u_27);
                      }
                    else
                      {
                        t = t_27;
                        {
                          ATerm e_28 = t;
                          int f_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_6 (ATerm t)
                              {
                                ATerm p_120 = NULL;
                                p_120 = t;
                                z_119 :
                                if(!(match_string(p_120, "-i")))
                                  {
                                    if(!(match_string(p_120, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm s_6 (ATerm t)
                              {
                                ATerm s_120 = NULL;
                                ATerm g_28;
                                g_28 = t;
                                {
                                  ATerm q_120 = NULL;
                                  ATerm r_120 = NULL;
                                  r_120 = t;
                                  if(((q_120 != NULL) && (q_120 != r_120)))
                                    _fail(r_120);
                                  else
                                    q_120 = r_120;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_h_28, not_null(q_120));
                                    t = set_config_0(t);
                                  }
                                }
                                t = g_28;
                                {
                                  ATerm t_120 = NULL;
                                  t_120 = t;
                                  if(((s_120 != NULL) && (s_120 != t_120)))
                                    _fail(t_120);
                                  else
                                    s_120 = t_120;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_120));
                                }
                                return(t);
                              }
                              ATerm t_6 (ATerm t)
                              {
                                t = term_i_28;
                                return(t);
                              }
                              t = ArgOption_3(t, r_6, s_6, t_6);
                              LocalPopChoice(f_28);
                            }
                          else
                            {
                              t = e_28;
                              {
                                ATerm j_28 = t;
                                int k_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_6 (ATerm t)
                                    {
                                      ATerm u_120 = NULL;
                                      u_120 = t;
                                      c_120 :
                                      if(!(match_string(u_120, "-o")))
                                        {
                                          if(!(match_string(u_120, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm v_6 (ATerm t)
                                    {
                                      ATerm x_120 = NULL;
                                      ATerm l_28;
                                      l_28 = t;
                                      {
                                        ATerm v_120 = NULL;
                                        ATerm w_120 = NULL;
                                        w_120 = t;
                                        if(((v_120 != NULL) && (v_120 != w_120)))
                                          _fail(w_120);
                                        else
                                          v_120 = w_120;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_m_28, not_null(v_120));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = l_28;
                                      {
                                        ATerm y_120 = NULL;
                                        y_120 = t;
                                        if(((x_120 != NULL) && (x_120 != y_120)))
                                          _fail(y_120);
                                        else
                                          x_120 = y_120;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_120));
                                      }
                                      return(t);
                                    }
                                    ATerm w_6 (ATerm t)
                                    {
                                      t = term_n_28;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_6, v_6, w_6);
                                    LocalPopChoice(k_28);
                                  }
                                else
                                  {
                                    t = j_28;
                                    {
                                      ATerm t_28 = t;
                                      int u_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_6 (ATerm t)
                                          {
                                            ATerm z_120 = NULL;
                                            z_120 = t;
                                            f_120 :
                                            if(!(match_string(z_120, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_6 (ATerm t)
                                          {
                                            t = term_w_28;
                                            t = set_config_0(t);
                                            t = term_a_29;
                                            return(t);
                                          }
                                          ATerm z_6 (ATerm t)
                                          {
                                            t = term_c_29;
                                            return(t);
                                          }
                                          t = Option_3(t, x_6, y_6, z_6);
                                          LocalPopChoice(u_28);
                                        }
                                      else
                                        {
                                          t = t_28;
                                          {
                                            ATerm a_7 (ATerm t)
                                            {
                                              ATerm a_121 = NULL;
                                              a_121 = t;
                                              g_120 :
                                              if(!(match_string(a_121, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm b_7 (ATerm t)
                                            {
                                              t = term_h_29;
                                              t = set_config_0(t);
                                              t = term_i_29;
                                              return(t);
                                            }
                                            ATerm c_7 (ATerm t)
                                            {
                                              t = term_j_29;
                                              return(t);
                                            }
                                            t = Option_3(t, a_7, b_7, c_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm i_121 = NULL;
  i_121 = t;
  t = SSL_table_destroy(not_null(i_121));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_121 = NULL;
  m_121 = t;
  t = SSL_exit(not_null(m_121));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_121 = NULL;
  q_121 = t;
  t = SSL_implode_string(not_null(q_121));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm t_121 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_121);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          t = Nil_0(t);
          t = h_108(t);
        }
      }
    return(t);
  }
  t = t_121(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL;
        w_121 = t;
        v_121 :
        if(((ATgetType(w_121) == AT_LIST) && ((ATermList) w_121 != ATempty)))
          {
            x_121 = ATgetFirst((ATermList) w_121);
            y_121 = (ATerm) ATgetNext((ATermList) w_121);
            {
              t = not_null(x_121);
              {
                ATerm d_7 (ATerm t)
                {
                  t = not_null(y_121);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_7);
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
  ATerm e_122 = NULL;
  e_122 = t;
  t = SSL_explode_string(not_null(e_122));
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
ATerm long_description_1 (ATerm t, ATerm c_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_107 (ATerm))
{
  ATerm h_122 (ATerm t)
  {
    ATerm o_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_29);
      }
    else
      {
        t = o_29;
        t = Cons_2(t, t_107, h_122);
      }
    return(t);
  }
  t = h_122(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL;
  q_122 = t;
  n_122 :
  if(((ATgetType(q_122) == AT_LIST) && ((ATermList) q_122 != ATempty)))
    {
      o_122 = ATgetFirst((ATermList) q_122);
      p_122 = (ATerm) ATgetNext((ATermList) q_122);
      {
        ATerm t_122 = NULL;
        t = not_null(p_122);
        {
          ATerm x_29;
          x_29 = t;
          {
            ATerm u_122 = NULL,w_122 = NULL,y_122 = NULL;
            ATerm y_29;
            y_29 = t;
            {
              ATerm v_122 = NULL;
              t = s_0(t);
              {
                v_122 = t;
                if(((u_122 != NULL) && (u_122 != v_122)))
                  _fail(v_122);
                else
                  u_122 = v_122;
              }
            }
            t = y_29;
            {
              ATerm x_122 = NULL;
              t = not_null(o_122);
              {
                t = r_0(t);
                {
                  x_122 = t;
                  if(((w_122 != NULL) && (w_122 != x_122)))
                    _fail(x_122);
                  else
                    w_122 = x_122;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_122)), not_null(w_122));
                {
                  y_122 = t;
                  if(((t_122 != NULL) && (t_122 != y_122)))
                    _fail(y_122);
                  else
                    t_122 = y_122;
                }
              }
            }
          }
          t = x_29;
          {
            ATerm e_7 (ATerm t)
            {
              t = not_null(t_122);
              return(t);
            }
            t = reverse_acc_2(t, r_0, e_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_122 == ATempty))
        {
          {
            t = term_t_22;
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
  ATerm f_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm j_123 = NULL,k_123 = NULL;
  j_123 = t;
  i_123 :
  if(match_cons(j_123, sym_Program_1))
    {
      k_123 = ATgetArgument(j_123, 0);
      {
        ATerm n_123 = NULL,p_123 = NULL;
        ATerm o_123 = NULL;
        t = SSLgetAnnotations(not_null(j_123));
        {
          o_123 = t;
          if(((n_123 != NULL) && (n_123 != o_123)))
            _fail(o_123);
          else
            n_123 = o_123;
        }
        {
          t = not_null(k_123);
          {
            ATerm r_123 = NULL;
            t = z_77(t);
            {
              p_123 = t;
              {
                ATerm s_123 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_123)), not_null(n_123));
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
  ATerm b_124 = NULL;
  ATerm g_7 (ATerm t)
  {
    ATerm h_7 (ATerm t)
    {
      ATerm c_124 = NULL;
      c_124 = t;
      if(((b_124 != NULL) && (b_124 != c_124)))
        _fail(c_124);
      else
        b_124 = c_124;
      return(t);
    }
    t = Program_1(t, h_7);
    return(t);
  }
  t = option_defined_1(t, g_7);
  {
    ATerm i_7 (ATerm t)
    {
      ATerm d_124 = NULL;
      ATerm e_124 = NULL;
      t = term_t_22;
      {
        ATerm j_7 (ATerm t)
        {
          t = not_null(b_124);
          return(t);
        }
        t = short_description_1(t, j_7);
        {
          t = concat_strings_0(t);
          {
            e_124 = t;
            if(((d_124 != NULL) && (d_124 != e_124)))
              _fail(e_124);
            else
              d_124 = e_124;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, not_null(d_124)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, i_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, term_z_29));
      {
        t = printnl_0(t);
        {
          t = term_c_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm f_124 = NULL;
                  f_124 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_124)), term_d_30));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_7);
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm h_124 = NULL;
                    ATerm i_124 = NULL;
                    t = term_t_22;
                    {
                      ATerm m_7 (ATerm t)
                      {
                        t = not_null(b_124);
                        return(t);
                      }
                      t = long_description_1(t, m_7);
                      {
                        t = concat_strings_0(t);
                        {
                          i_124 = t;
                          if(((h_124 != NULL) && (h_124 != i_124)))
                            _fail(i_124);
                          else
                            h_124 = i_124;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_124)), term_f_30));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_7);
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
ATerm printnl_0 (ATerm t)
{
  ATerm p_124 = NULL,q_124 = NULL,r_124 = NULL;
  p_124 = t;
  o_124 :
  if(match_cons(p_124, sym__2))
    {
      q_124 = ATgetArgument(p_124, 0);
      r_124 = ATgetArgument(p_124, 1);
      {
        ATerm g_30;
        g_30 = t;
        t = SSL_printnl(not_null(q_124), not_null(r_124));
        t = g_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm a_125 = NULL,b_125 = NULL;
  a_125 = t;
  z_124 :
  if(match_cons(a_125, sym_Undefined_1))
    {
      b_125 = ATgetArgument(a_125, 0);
      {
        ATerm e_125 = NULL,g_125 = NULL;
        ATerm f_125 = NULL;
        t = SSLgetAnnotations(not_null(a_125));
        {
          f_125 = t;
          if(((e_125 != NULL) && (e_125 != f_125)))
            _fail(f_125);
          else
            e_125 = f_125;
        }
        {
          t = not_null(b_125);
          {
            ATerm i_125 = NULL;
            t = a_78(t);
            {
              g_125 = t;
              {
                ATerm j_125 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_125)), not_null(e_125));
                {
                  j_125 = t;
                  if(((i_125 != NULL) && (i_125 != j_125)))
                    _fail(j_125);
                  else
                    i_125 = j_125;
                }
                t = not_null(i_125);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_108 (ATerm))
{
  ATerm o_125 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_108, _id);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = Cons_2(t, _id, o_125);
      }
    return(t);
  }
  t = o_125(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_95 (ATerm))
{
  t = fetch_1(t, a_95);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_125 = NULL;
  t_125 = t;
  s_125 :
  if(match_cons(t_125, sym_Help_0))
    {
      ATerm v_125 = NULL,x_125 = NULL;
      ATerm j_30;
      j_30 = t;
      {
        ATerm w_125 = NULL;
        t = SSLgetAnnotations(not_null(t_125));
        {
          w_125 = t;
          if(((v_125 != NULL) && (v_125 != w_125)))
            _fail(w_125);
          else
            v_125 = w_125;
        }
      }
      t = j_30;
      {
        ATerm y_125 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_125));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_110 (ATerm))
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_110(t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL;
  e_126 = t;
  d_126 :
  if(match_cons(e_126, sym__2))
    {
      f_126 = ATgetArgument(e_126, 0);
      g_126 = ATgetArgument(e_126, 1);
      t = SSL_table_get(not_null(f_126), not_null(g_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL;
  n_126 = t;
  m_126 :
  if(match_cons(n_126, sym__3))
    {
      o_126 = ATgetArgument(n_126, 0);
      p_126 = ATgetArgument(n_126, 1);
      q_126 = ATgetArgument(n_126, 2);
      {
        ATerm p_30;
        p_30 = t;
        {
          ATerm u_126 = NULL;
          ATerm v_126 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_126), not_null(p_126));
          {
            ATerm q_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_30);
              }
            else
              {
                t = q_30;
                t = (ATerm) ATempty;
              }
            {
              v_126 = t;
              if(((u_126 != NULL) && (u_126 != v_126)))
                _fail(v_126);
              else
                u_126 = v_126;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_126), not_null(p_126), (ATerm) ATinsert(CheckATermList(not_null(u_126)), not_null(q_126)));
            t = table_put_0(t);
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
ATerm register_usage_1 (ATerm t, ATerm g_94 (ATerm))
{
  ATerm z_126 = NULL;
  ATerm a_127 = NULL;
  t = term_t_22;
  {
    t = g_94(t);
    {
      a_127 = t;
      if(((z_126 != NULL) && (z_126 != a_127)))
        _fail(a_127);
      else
        z_126 = a_127;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_30, term_b_30, not_null(z_126));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
  g_127 = t;
  f_127 :
  if(match_string(g_127, "register-usage-info"))
    {
      t = register_usage_1(t, q_0);
    }
  else
    {
      if(((ATgetType(g_127) == AT_LIST) && ((ATermList) g_127 != ATempty)))
        {
          h_127 = ATgetFirst((ATermList) g_127);
          i_127 = (ATerm) ATgetNext((ATermList) g_127);
          {
            ATerm l_127 = NULL;
            ATerm s_30;
            s_30 = t;
            {
              t = not_null(h_127);
              t = a_0(t);
            }
            t = s_30;
            {
              ATerm m_127 = NULL;
              t = term_t_22;
              {
                t = b_0(t);
                {
                  m_127 = t;
                  if(((l_127 != NULL) && (l_127 != m_127)))
                    _fail(m_127);
                  else
                    l_127 = m_127;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_127)), not_null(l_127));
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
  ATerm n_7 (ATerm t)
  {
    ATerm r_127 = NULL;
    r_127 = t;
    q_127 :
    if(!(match_string(r_127, "--help")))
      {
        if(!(match_string(r_127, "-h")))
          {
            if(!(match_string(r_127, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = term_t_30;
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    t = term_u_30;
    return(t);
  }
  t = Option_3(t, n_7, o_7, p_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_127 = NULL,v_127 = NULL,w_127 = NULL;
  u_127 = t;
  t_127 :
  if(((ATgetType(u_127) == AT_LIST) && ((ATermList) u_127 != ATempty)))
    {
      v_127 = ATgetFirst((ATermList) u_127);
      w_127 = (ATerm) ATgetNext((ATermList) u_127);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_127)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_127)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  ATerm g_128 = NULL,h_128 = NULL,i_128 = NULL;
  g_128 = t;
  f_128 :
  if(((ATgetType(g_128) == AT_LIST) && ((ATermList) g_128 != ATempty)))
    {
      h_128 = ATgetFirst((ATermList) g_128);
      i_128 = (ATerm) ATgetNext((ATermList) g_128);
      {
        ATerm m_128 = NULL,o_128 = NULL;
        ATerm n_128 = NULL;
        t = SSLgetAnnotations(not_null(g_128));
        {
          n_128 = t;
          if(((m_128 != NULL) && (m_128 != n_128)))
            _fail(n_128);
          else
            m_128 = n_128;
        }
        {
          t = not_null(h_128);
          {
            ATerm q_128 = NULL;
            t = j_88(t);
            {
              o_128 = t;
              {
                t = not_null(i_128);
                {
                  ATerm s_128 = NULL;
                  t = k_88(t);
                  {
                    q_128 = t;
                    {
                      ATerm t_128 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_128)), not_null(o_128)), not_null(m_128));
                      {
                        t_128 = t;
                        if(((s_128 != NULL) && (s_128 != t_128)))
                          _fail(t_128);
                        else
                          s_128 = t_128;
                      }
                      t = not_null(s_128);
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
  ATerm d_129 = NULL;
  d_129 = t;
  c_129 :
  if(((ATermList) d_129 == ATempty))
    {
      {
        ATerm f_129 = NULL,h_129 = NULL;
        ATerm v_30;
        v_30 = t;
        {
          ATerm g_129 = NULL;
          t = SSLgetAnnotations(not_null(d_129));
          {
            g_129 = t;
            if(((f_129 != NULL) && (f_129 != g_129)))
              _fail(g_129);
            else
              f_129 = g_129;
          }
        }
        t = v_30;
        {
          ATerm i_129 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_129));
          {
            i_129 = t;
            if(((h_129 != NULL) && (h_129 != i_129)))
              _fail(i_129);
            else
              h_129 = i_129;
          }
          t = not_null(h_129);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm w_30;
  w_30 = t;
  {
    ATerm q_7 (ATerm t)
    {
      t = term_x_30;
      t = e_94(t);
      return(t);
    }
    t = try_1(t, q_7);
  }
  t = w_30;
  {
    ATerm r_7 (ATerm t)
    {
      ATerm n_129 = NULL;
      n_129 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_129));
      return(t);
    }
    ATerm s_7 (ATerm t)
    {
      ATerm y_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              {
                t = e_94(t);
                t = Cons_2(t, _id, s_7);
              }
            }
          LocalPopChoice(z_30);
        }
      else
        {
          t = y_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_7, s_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL;
  ATerm c_31;
  c_31 = t;
  {
    ATerm w_129 = NULL,x_129 = NULL,y_129 = NULL,z_129 = NULL;
    w_129 = t;
    s_129 :
    if(match_cons(w_129, sym__3))
      {
        x_129 = ATgetArgument(w_129, 0);
        y_129 = ATgetArgument(w_129, 1);
        z_129 = ATgetArgument(w_129, 2);
        {
          if(((t_129 != NULL) && (t_129 != x_129)))
            _fail(x_129);
          else
            t_129 = x_129;
          {
            if(((u_129 != NULL) && (u_129 != y_129)))
              _fail(y_129);
            else
              u_129 = y_129;
            {
              if(((v_129 != NULL) && (v_129 != z_129)))
                _fail(z_129);
              else
                v_129 = z_129;
              t = SSL_table_put(not_null(t_129), not_null(u_129), not_null(v_129));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm c_130 = NULL;
  ATerm d_31;
  d_31 = t;
  {
    t = term_e_31;
    t = table_put_0(t);
  }
  t = d_31;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_94(t);
          LocalPopChoice(g_31);
        }
      else
        {
          t = f_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_7);
    {
      ATerm u_7 (ATerm t)
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_e_24;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm v_7 (ATerm t)
              {
                ATerm w_7 (ATerm t)
                {
                  ATerm d_130 = NULL;
                  d_130 = t;
                  if(((c_130 != NULL) && (c_130 != d_130)))
                    _fail(d_130);
                  else
                    c_130 = d_130;
                  return(t);
                }
                t = Undefined_1(t, w_7);
                return(t);
              }
              t = option_defined_1(t, v_7);
              {
                ATerm j_31;
                j_31 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_130)), term_k_31));
                  t = printnl_0(t);
                }
                t = j_31;
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_23;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, u_7);
      {
        ATerm l_31;
        l_31 = t;
        {
          t = term_a_30;
          t = table_destroy_0(t);
        }
        t = l_31;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm m_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_95(t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = m_31;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, x_7);
  {
    t = store_options_0(t);
    {
      ATerm y_31 = t;
      int z_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, a_96);
          LocalPopChoice(z_31);
        }
      else
        {
          t = y_31;
          {
            ATerm a_32 = t;
            int y_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, y_95);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(y_32);
              }
            else
              {
                t = a_32;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_95 (ATerm), ATerm u_95 (ATerm))
{
  t = iowrap_3(t, t_95, u_95, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm y_7 (ATerm t)
  {
    t = _2(t, _id, q_95);
    return(t);
  }
  t = iowrap_2(t, y_7, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        {
          ATerm a_8 (ATerm t)
          {
            t = term_b_33;
            return(t);
          }
          t = say_1(t, a_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, z_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
