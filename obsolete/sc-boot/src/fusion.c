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
ATerm term_s_34;
ATerm term_s_33;
ATerm term_j_33;
ATerm term_e_32;
ATerm term_u_31;
ATerm term_q_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_r_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_e_29;
ATerm term_a_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_x_27;
ATerm term_k_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_s_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_i_16;
ATerm term_a_16;
ATerm term_o_15;
ATerm term_i_15;
ATerm term_z_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_r_13;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_t_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Call_2, term_k_18, (ATerm) ATempty);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_u_25);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_25);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_q_23);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_q_23);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_q_23);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_d_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__3, term_c_31, term_d_31, (ATerm) ATempty);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_99 (ATerm));
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
ATerm unzip_1 (ATerm, ATerm r_108 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm v_102 (ATerm), ATerm w_102 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_102 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm Con_3 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm m_114 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_112 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm t_99 (ATerm));
ATerm restore_always_2 (ATerm, ATerm u_112 (ATerm), ATerm v_112 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm s_99 (ATerm));
ATerm scope_2 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm x_112 (ATerm));
ATerm innermost_1 (ATerm, ATerm h_102 (ATerm));
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
ATerm alltd_1 (ATerm, ATerm a_115 (ATerm));
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
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm));
ATerm crush_3 (ATerm, ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_103 (ATerm), ATerm n_103 (ATerm));
ATerm for_3 (ATerm, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm));
ATerm HdMember_1 (ATerm, ATerm r_105 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm w_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm));
ATerm zip_1 (ATerm, ATerm m_108 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm v_93 (ATerm), ATerm w_93 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm j_93 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_101 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm q_101 (ATerm));
ATerm rename_4 (ATerm, ATerm x_93 (ATerm, ATerm (ATerm)), ATerm y_93 (ATerm), ATerm z_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_94 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm y_99 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm w_99 (ATerm));
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
ATerm debug_1 (ATerm, ATerm a_99 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_104 (ATerm), ATerm n_104 (ATerm));
ATerm crush_2 (ATerm, ATerm a_106 (ATerm), ATerm b_106 (ATerm));
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
ATerm apply_strategy_1 (ATerm, ATerm k_98 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_111 (ATerm), ATerm q_111 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_110 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_95 (ATerm));
ATerm map_1 (ATerm, ATerm u_109 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_95 (ATerm));
ATerm Program_1 (ATerm, ATerm a_79 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_110 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_112 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_96 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm q_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_89 (ATerm), ATerm m_89 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_95 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_95 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_97 (ATerm), ATerm p_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_97 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm l_8;
  l_8 = t;
  {
    ATerm j_6 = NULL;
    ATerm k_6 = NULL;
    k_6 = t;
    if(((j_6 != NULL) && (j_6 != k_6)))
      _fail(k_6);
    else
      j_6 = k_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(j_6)));
      t = printnl_0(t);
    }
  }
  t = l_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_99 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  {
    t = b_99(t);
    t = debug_0(t);
  }
  t = p_8;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm q_8;
    q_8 = t;
    {
      ATerm n_8 = NULL;
      ATerm o_8 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          o_8 = t;
          if(((n_8 != NULL) && (n_8 != o_8)))
            _fail(o_8);
          else
            n_8 = o_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), term_s_8);
        t = geq_0(t);
      }
    }
    t = q_8;
    t = k_90(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  j_9 = t;
  g_9 :
  if(match_cons(j_9, sym_ExplodeCong_2))
    {
      k_9 = ATgetArgument(j_9, 0);
      i_9 = ATgetArgument(j_9, 1);
      {
        ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
        ATerm r_9 = NULL;
        ATerm s_9 = NULL;
        t = new_0(t);
        {
          r_9 = t;
          {
            if(((n_9 != NULL) && (n_9 != r_9)))
              _fail(r_9);
            else
              n_9 = r_9;
            {
              ATerm u_9 = NULL;
              t = new_0(t);
              {
                s_9 = t;
                {
                  if(((o_9 != NULL) && (o_9 != s_9)))
                    _fail(s_9);
                  else
                    o_9 = s_9;
                  {
                    ATerm v_9 = NULL;
                    t = new_0(t);
                    {
                      u_9 = t;
                      {
                        if(((p_9 != NULL) && (p_9 != u_9)))
                          _fail(u_9);
                        else
                          p_9 = u_9;
                        {
                          t = new_0(t);
                          {
                            v_9 = t;
                            if(((q_9 != NULL) && (q_9 != v_9)))
                              _fail(v_9);
                            else
                              q_9 = v_9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_9)), not_null(p_9)), not_null(o_9)), not_null(n_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(k_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_9)))))));
      }
    }
  else
    {
      if(match_cons(j_9, sym_Build_1))
        {
          k_9 = ATgetArgument(j_9, 0);
          {
            ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
            ATerm b_10 = NULL;
            ATerm f_10 = NULL;
            t = new_0(t);
            {
              b_10 = t;
              {
                if(((z_9 != NULL) && (z_9 != b_10)))
                  _fail(b_10);
                else
                  z_9 = b_10;
                {
                  t = not_null(k_9);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
                      c_10 = t;
                      z_8 :
                      if(match_cons(c_10, sym_Explode_2))
                        {
                          d_10 = ATgetArgument(c_10, 0);
                          e_10 = ATgetArgument(c_10, 1);
                          {
                            if(((x_9 != NULL) && (x_9 != d_10)))
                              _fail(d_10);
                            else
                              x_9 = d_10;
                            {
                              if(((y_9 != NULL) && (y_9 != e_10)))
                                _fail(e_10);
                              else
                                y_9 = e_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9));
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
                      f_10 = t;
                      if(((a_10 != NULL) && (a_10 != f_10)))
                        _fail(f_10);
                      else
                        a_10 = f_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_9)), not_null(x_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_10)))));
          }
        }
      else
        {
          if(match_cons(j_9, sym_Match_1))
            {
              k_9 = ATgetArgument(j_9, 0);
              {
                ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
                ATerm m_10 = NULL;
                ATerm n_10 = NULL;
                t = new_0(t);
                {
                  m_10 = t;
                  {
                    if(((j_10 != NULL) && (j_10 != m_10)))
                      _fail(m_10);
                    else
                      j_10 = m_10;
                    {
                      ATerm r_10 = NULL;
                      t = new_0(t);
                      {
                        n_10 = t;
                        {
                          if(((k_10 != NULL) && (k_10 != n_10)))
                            _fail(n_10);
                          else
                            k_10 = n_10;
                          {
                            t = not_null(k_9);
                            {
                              ATerm g_0 (ATerm t)
                              {
                                ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
                                o_10 = t;
                                e_9 :
                                if(match_cons(o_10, sym_Explode_2))
                                  {
                                    p_10 = ATgetArgument(o_10, 0);
                                    q_10 = ATgetArgument(o_10, 1);
                                    {
                                      if(((h_10 != NULL) && (h_10 != p_10)))
                                        _fail(p_10);
                                      else
                                        h_10 = p_10;
                                      {
                                        if(((i_10 != NULL) && (i_10 != q_10)))
                                          _fail(q_10);
                                        else
                                          i_10 = q_10;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10));
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
                                r_10 = t;
                                if(((l_10 != NULL) && (l_10 != r_10)))
                                  _fail(r_10);
                                else
                                  l_10 = r_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_u_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_10)), (ATerm) ATmakeAppl(sym_Op_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_10)), not_null(h_10)))))));
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
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Match_1))
    {
      z_11 = ATgetArgument(y_11, 0);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
            ATerm f_12 = NULL;
            ATerm k_12 = NULL;
            t = new_0(t);
            {
              f_12 = t;
              {
                if(((d_12 != NULL) && (d_12 != f_12)))
                  _fail(f_12);
                else
                  d_12 = f_12;
                {
                  t = not_null(z_11);
                  {
                    ATerm h_0 (ATerm t)
                    {
                      ATerm g_12 = NULL,h_12 = NULL,j_12 = NULL;
                      g_12 = t;
                      m_11 :
                      if(match_cons(g_12, sym_Anno_2))
                        {
                          h_12 = ATgetArgument(g_12, 0);
                          j_12 = ATgetArgument(g_12, 1);
                          {
                            if(((b_12 != NULL) && (b_12 != h_12)))
                              _fail(h_12);
                            else
                              b_12 = h_12;
                            {
                              if(((c_12 != NULL) && (c_12 != j_12)))
                                _fail(j_12);
                              else
                                c_12 = j_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_12)), not_null(b_12));
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
                      k_12 = t;
                      if(((e_12 != NULL) && (e_12 != k_12)))
                        _fail(k_12);
                      else
                        e_12 = k_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_12))))));
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            {
              ATerm a_9 = t;
              int b_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
                  ATerm p_12 = NULL;
                  ATerm s_12 = NULL;
                  t = new_0(t);
                  {
                    p_12 = t;
                    {
                      if(((n_12 != NULL) && (n_12 != p_12)))
                        _fail(p_12);
                      else
                        n_12 = p_12;
                      {
                        t = not_null(z_11);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm q_12 = NULL,r_12 = NULL;
                            q_12 = t;
                            r_11 :
                            if(match_cons(q_12, sym_RootApp_1))
                              {
                                r_12 = ATgetArgument(q_12, 0);
                                {
                                  if(((m_12 != NULL) && (m_12 != r_12)))
                                    _fail(r_12);
                                  else
                                    m_12 = r_12;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_12));
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
                            s_12 = t;
                            if(((o_12 != NULL) && (o_12 != s_12)))
                              _fail(s_12);
                            else
                              o_12 = s_12;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_12))), not_null(m_12))));
                  LocalPopChoice(b_9);
                }
              else
                {
                  t = a_9;
                  {
                    ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                    ATerm y_12 = NULL;
                    ATerm c_13 = NULL;
                    t = new_0(t);
                    {
                      y_12 = t;
                      {
                        if(((w_12 != NULL) && (w_12 != y_12)))
                          _fail(y_12);
                        else
                          w_12 = y_12;
                        {
                          t = not_null(z_11);
                          {
                            ATerm y_0 (ATerm t)
                            {
                              ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
                              z_12 = t;
                              v_11 :
                              if(match_cons(z_12, sym_App_2))
                                {
                                  a_13 = ATgetArgument(z_12, 0);
                                  b_13 = ATgetArgument(z_12, 1);
                                  {
                                    if(((v_12 != NULL) && (v_12 != a_13)))
                                      _fail(a_13);
                                    else
                                      v_12 = a_13;
                                    {
                                      if(((u_12 != NULL) && (u_12 != b_13)))
                                        _fail(b_13);
                                      else
                                        u_12 = b_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12));
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
                              c_13 = t;
                              if(((x_12 != NULL) && (x_12 != c_13)))
                                _fail(c_13);
                              else
                                x_12 = c_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_12)), not_null(v_12)))));
                  }
                }
            }
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
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  u_13 = t;
  s_13 :
  if(match_cons(u_13, sym_Match_1))
    {
      v_13 = ATgetArgument(u_13, 0);
      t_13 :
      if(match_cons(v_13, sym_RootApp_1))
        {
          w_13 = ATgetArgument(v_13, 0);
          t = not_null(w_13);
        }
      else
        {
          if(match_cons(v_13, sym_App_2))
            {
              w_13 = ATgetArgument(v_13, 0);
              x_13 = ATgetArgument(v_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(w_13), not_null(x_13));
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
  ATerm k_14 = NULL,l_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_Match_1))
    {
      l_14 = ATgetArgument(k_14, 0);
      {
        ATerm n_14 = NULL,o_14 = NULL;
        ATerm s_14 = NULL;
        t = not_null(l_14);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
            p_14 = t;
            g_14 :
            if(match_cons(p_14, sym_RootApp_1))
              {
                q_14 = ATgetArgument(p_14, 0);
                h_14 :
                if(match_cons(q_14, sym_Match_1))
                  {
                    r_14 = ATgetArgument(q_14, 0);
                    {
                      if(((n_14 != NULL) && (n_14 != r_14)))
                        _fail(r_14);
                      else
                        n_14 = r_14;
                      t = not_null(n_14);
                    }
                  }
                else
                  {
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
            s_14 = t;
            if(((o_14 != NULL) && (o_14 != s_14)))
              _fail(s_14);
            else
              o_14 = s_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_14));
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
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm f_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(h_9);
          }
        else
          {
            t = f_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm n_15 = NULL,p_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_Build_1))
    {
      p_15 = ATgetArgument(n_15, 0);
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
            ATerm v_15 = NULL;
            ATerm z_15 = NULL;
            t = new_0(t);
            {
              v_15 = t;
              {
                if(((t_15 != NULL) && (t_15 != v_15)))
                  _fail(v_15);
                else
                  t_15 = v_15;
                {
                  t = not_null(p_15);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                      w_15 = t;
                      c_15 :
                      if(match_cons(w_15, sym_Anno_2))
                        {
                          x_15 = ATgetArgument(w_15, 0);
                          y_15 = ATgetArgument(w_15, 1);
                          {
                            if(((r_15 != NULL) && (r_15 != x_15)))
                              _fail(x_15);
                            else
                              r_15 = x_15;
                            {
                              if(((s_15 != NULL) && (s_15 != y_15)))
                                _fail(y_15);
                              else
                                s_15 = y_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_15));
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
                      z_15 = t;
                      if(((u_15 != NULL) && (u_15 != z_15)))
                        _fail(z_15);
                      else
                        u_15 = z_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_15)), not_null(r_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_15))));
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm w_9 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
                  ATerm e_16 = NULL;
                  ATerm h_16 = NULL;
                  t = new_0(t);
                  {
                    e_16 = t;
                    {
                      if(((c_16 != NULL) && (c_16 != e_16)))
                        _fail(e_16);
                      else
                        c_16 = e_16;
                      {
                        t = not_null(p_15);
                        {
                          ATerm b_1 (ATerm t)
                          {
                            ATerm f_16 = NULL,g_16 = NULL;
                            f_16 = t;
                            g_15 :
                            if(match_cons(f_16, sym_RootApp_1))
                              {
                                g_16 = ATgetArgument(f_16, 0);
                                {
                                  if(((b_16 != NULL) && (b_16 != g_16)))
                                    _fail(g_16);
                                  else
                                    b_16 = g_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_16));
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
                            h_16 = t;
                            if(((d_16 != NULL) && (d_16 != h_16)))
                              _fail(h_16);
                            else
                              d_16 = h_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_16))));
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = w_9;
                  {
                    ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
                    ATerm n_16 = NULL;
                    ATerm r_16 = NULL;
                    t = new_0(t);
                    {
                      n_16 = t;
                      {
                        if(((l_16 != NULL) && (l_16 != n_16)))
                          _fail(n_16);
                        else
                          l_16 = n_16;
                        {
                          t = not_null(p_15);
                          {
                            ATerm c_1 (ATerm t)
                            {
                              ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
                              o_16 = t;
                              k_15 :
                              if(match_cons(o_16, sym_App_2))
                                {
                                  p_16 = ATgetArgument(o_16, 0);
                                  q_16 = ATgetArgument(o_16, 1);
                                  {
                                    if(((j_16 != NULL) && (j_16 != p_16)))
                                      _fail(p_16);
                                    else
                                      j_16 = p_16;
                                    {
                                      if(((k_16 != NULL) && (k_16 != q_16)))
                                        _fail(q_16);
                                      else
                                        k_16 = q_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_16));
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
                              r_16 = t;
                              if(((m_16 != NULL) && (m_16 != r_16)))
                                _fail(r_16);
                              else
                                m_16 = r_16;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_16), not_null(k_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_16))));
                  }
                }
            }
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  k_17 = t;
  i_17 :
  if(match_cons(k_17, sym_Build_1))
    {
      l_17 = ATgetArgument(k_17, 0);
      j_17 :
      if(match_cons(l_17, sym_RootApp_1))
        {
          m_17 = ATgetArgument(l_17, 0);
          t = not_null(m_17);
        }
      else
        {
          if(match_cons(l_17, sym_App_2))
            {
              m_17 = ATgetArgument(l_17, 0);
              n_17 = ATgetArgument(l_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_17)), not_null(m_17));
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
  ATerm z_17 = NULL,a_18 = NULL,l_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Prim_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      l_18 = ATgetArgument(z_17, 1);
      {
        ATerm p_18 = NULL,r_18 = NULL;
        ATerm q_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          q_18 = t;
          if(((p_18 != NULL) && (p_18 != q_18)))
            _fail(q_18);
          else
            p_18 = q_18;
        }
        {
          t = not_null(a_18);
          {
            ATerm u_18 = NULL;
            t = j_89(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm w_18 = NULL;
                  t = k_89(t);
                  {
                    u_18 = t;
                    {
                      ATerm x_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(r_18), not_null(u_18)), not_null(p_18));
                      {
                        x_18 = t;
                        if(((w_18 != NULL) && (w_18 != x_18)))
                          _fail(x_18);
                        else
                          w_18 = x_18;
                      }
                      t = not_null(w_18);
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
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym_Explode_2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      {
        ATerm q_19 = NULL,s_19 = NULL;
        ATerm r_19 = NULL;
        t = SSLgetAnnotations(not_null(k_19));
        {
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
        }
        {
          t = not_null(l_19);
          {
            ATerm u_19 = NULL;
            t = o_85(t);
            {
              s_19 = t;
              {
                t = not_null(m_19);
                {
                  ATerm w_19 = NULL;
                  t = p_85(t);
                  {
                    u_19 = t;
                    {
                      ATerm x_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(s_19), not_null(u_19)), not_null(q_19));
                      {
                        x_19 = t;
                        if(((w_19 != NULL) && (w_19 != x_19)))
                          _fail(x_19);
                        else
                          w_19 = x_19;
                      }
                      t = not_null(w_19);
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
  ATerm k_20 = NULL,m_20 = NULL,n_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_Op_2))
    {
      m_20 = ATgetArgument(k_20, 0);
      n_20 = ATgetArgument(k_20, 1);
      {
        ATerm r_20 = NULL,t_20 = NULL;
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(k_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        {
          t = not_null(m_20);
          {
            ATerm v_20 = NULL;
            t = j_87(t);
            {
              t_20 = t;
              {
                t = not_null(n_20);
                {
                  ATerm x_20 = NULL;
                  t = k_87(t);
                  {
                    v_20 = t;
                    {
                      ATerm y_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(t_20), not_null(v_20)), not_null(r_20));
                      {
                        y_20 = t;
                        if(((x_20 != NULL) && (x_20 != y_20)))
                          _fail(y_20);
                        else
                          x_20 = y_20;
                      }
                      t = not_null(x_20);
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
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_92(t);
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
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
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = pat_td_1(t, b_92);
                    return(t);
                  }
                  t = Explode_2(t, _id, f_1);
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
                        ATerm g_1 (ATerm t)
                        {
                          t = pat_td_1(t, b_92);
                          return(t);
                        }
                        t = Explode_2(t, g_1, _id);
                        LocalPopChoice(z_10);
                      }
                    else
                      {
                        t = y_10;
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
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Build_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_21 = NULL,u_21 = NULL;
            ATerm y_21 = NULL;
            t = not_null(r_21);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
                v_21 = t;
                i_21 :
                if(match_cons(v_21, sym_RootApp_1))
                  {
                    w_21 = ATgetArgument(v_21, 0);
                    j_21 :
                    if(match_cons(w_21, sym_Build_1))
                      {
                        x_21 = ATgetArgument(w_21, 0);
                        {
                          if(((t_21 != NULL) && (t_21 != x_21)))
                            _fail(x_21);
                          else
                            t_21 = x_21;
                          t = not_null(t_21);
                        }
                      }
                    else
                      {
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
                y_21 = t;
                if(((u_21 != NULL) && (u_21 != y_21)))
                  _fail(y_21);
                else
                  u_21 = y_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_21));
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
              ATerm h_22 = NULL;
              t = not_null(r_21);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
                  d_22 = t;
                  m_21 :
                  if(match_cons(d_22, sym_App_2))
                    {
                      e_22 = ATgetArgument(d_22, 0);
                      g_22 = ATgetArgument(d_22, 1);
                      n_21 :
                      if(match_cons(e_22, sym_Build_1))
                        {
                          f_22 = ATgetArgument(e_22, 0);
                          {
                            if(((b_22 != NULL) && (b_22 != f_22)))
                              _fail(f_22);
                            else
                              b_22 = f_22;
                            {
                              if(((a_22 != NULL) && (a_22 != g_22)))
                                _fail(g_22);
                              else
                                a_22 = g_22;
                              t = not_null(b_22);
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
                  h_22 = t;
                  if(((c_22 != NULL) && (c_22 != h_22)))
                    _fail(h_22);
                  else
                    c_22 = h_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_22));
            }
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
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  i_23 = t;
  a_23 :
  if(match_cons(i_23, sym_InfixApp_3))
    {
      j_23 = ATgetArgument(i_23, 0);
      f_23 = ATgetArgument(i_23, 1);
      e_23 = ATgetArgument(i_23, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(f_23), (ATerm) ATmakeAppl(sym_Op_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_23)), not_null(j_23))));
    }
  else
    {
      if(match_cons(i_23, sym_BAM_3))
        {
          j_23 = ATgetArgument(i_23, 0);
          f_23 = ATgetArgument(i_23, 1);
          e_23 = ATgetArgument(i_23, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(e_23))), not_null(j_23)), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_23))));
        }
      else
        {
          if(match_cons(i_23, sym_AM_2))
            {
              j_23 = ATgetArgument(i_23, 0);
              f_23 = ATgetArgument(i_23, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_23), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_23)));
            }
          else
            {
              if(match_cons(i_23, sym_MA_2))
                {
                  j_23 = ATgetArgument(i_23, 0);
                  f_23 = ATgetArgument(i_23, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_23)), not_null(f_23));
                }
              else
                {
                  if(match_cons(i_23, sym_BA_2))
                    {
                      j_23 = ATgetArgument(i_23, 0);
                      f_23 = ATgetArgument(i_23, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_23)), not_null(j_23));
                    }
                  else
                    {
                      if(match_cons(i_23, sym_Lets_2))
                        {
                          j_23 = ATgetArgument(i_23, 0);
                          f_23 = ATgetArgument(i_23, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_23), not_null(f_23));
                        }
                      else
                        {
                          if(match_cons(i_23, sym_LChoices_1))
                            {
                              j_23 = ATgetArgument(i_23, 0);
                              b_23 :
                              if(((ATgetType(j_23) == AT_LIST) && ((ATermList) j_23 != ATempty)))
                                {
                                  g_23 = ATgetFirst((ATermList) j_23);
                                  h_23 = (ATerm) ATgetNext((ATermList) j_23);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_23), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_23)));
                                }
                              else
                                {
                                  if(((ATermList) j_23 == ATempty))
                                    {
                                      t = term_g_11;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(i_23, sym_Choices_1))
                                {
                                  j_23 = ATgetArgument(i_23, 0);
                                  c_23 :
                                  if(((ATgetType(j_23) == AT_LIST) && ((ATermList) j_23 != ATempty)))
                                    {
                                      g_23 = ATgetFirst((ATermList) j_23);
                                      h_23 = (ATerm) ATgetNext((ATermList) j_23);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_23), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_23)));
                                    }
                                  else
                                    {
                                      if(((ATermList) j_23 == ATempty))
                                        {
                                          t = term_g_11;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(i_23, sym_Seqs_1))
                                    {
                                      j_23 = ATgetArgument(i_23, 0);
                                      d_23 :
                                      if(((ATgetType(j_23) == AT_LIST) && ((ATermList) j_23 != ATempty)))
                                        {
                                          g_23 = ATgetFirst((ATermList) j_23);
                                          h_23 = (ATerm) ATgetNext((ATermList) j_23);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_23), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_23)));
                                        }
                                      else
                                        {
                                          if(((ATermList) j_23 == ATempty))
                                            {
                                              t = term_h_11;
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
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  u_24 = t;
  r_24 :
  if(match_cons(u_24, sym__2))
    {
      v_24 = ATgetArgument(u_24, 0);
      y_24 = ATgetArgument(u_24, 1);
      s_24 :
      if(match_cons(v_24, sym__2))
        {
          w_24 = ATgetArgument(v_24, 0);
          x_24 = ATgetArgument(v_24, 1);
          t_24 :
          if(match_cons(y_24, sym__2))
            {
              z_24 = ATgetArgument(y_24, 0);
              a_25 = ATgetArgument(y_24, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_24)), not_null(w_24)), (ATerm) ATinsert(CheckATermList(not_null(a_25)), not_null(x_24)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  h_25 :
  if(((ATgetType(i_25) == AT_LIST) && ((ATermList) i_25 != ATempty)))
    {
      j_25 = ATgetFirst((ATermList) i_25);
      k_25 = (ATerm) ATgetNext((ATermList) i_25);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), not_null(k_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  p_25 :
  if(((ATermList) q_25 == ATempty))
    {
      t = term_i_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm r_108 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, r_108);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  ATerm c_26 (ATerm t)
  {
    ATerm z_25 = NULL;
    ATerm a_26 = NULL;
    t = not_null(w_25);
    {
      ATerm j_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_11;
        }
      {
        t = new_0(t);
        {
          a_26 = t;
          if(((z_25 != NULL) && (z_25 != a_26)))
            _fail(a_26);
          else
            z_25 = a_26;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(z_25)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_25)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_25))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_25))));
    return(t);
  }
  ATerm d_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_25))));
    return(t);
  }
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym_Var_1))
    {
      x_25 = ATgetArgument(w_25, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_26(t);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = d_26(t);
          }
      }
    }
  else
    {
      t = c_26(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_Prim_2))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      {
        ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
        ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
        t = not_null(m_26);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm n_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_11;
              }
            return(t);
          }
          t = fetch_1(t, l_1);
          {
            t = not_null(m_26);
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
                  s_26 = t;
                  h_26 :
                  if(match_cons(s_26, sym__2))
                    {
                      t_26 = ATgetArgument(s_26, 0);
                      u_26 = ATgetArgument(s_26, 1);
                      i_26 :
                      if(match_cons(u_26, sym__2))
                        {
                          v_26 = ATgetArgument(u_26, 0);
                          w_26 = ATgetArgument(u_26, 1);
                          {
                            if(((p_26 != NULL) && (p_26 != t_26)))
                              _fail(t_26);
                            else
                              p_26 = t_26;
                            {
                              if(((q_26 != NULL) && (q_26 != v_26)))
                                _fail(v_26);
                              else
                                q_26 = v_26;
                              if(((r_26 != NULL) && (r_26 != w_26)))
                                _fail(w_26);
                              else
                                r_26 = w_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_26)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_26), not_null(r_26))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm v_102 (ATerm), ATerm w_102 (ATerm))
{
  ATerm z_26 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_102(t);
        t = z_26(t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = w_102(t);
      }
    return(t);
  }
  t = z_26(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_102 (ATerm))
{
  t = repeat_2(t, y_102, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_Wld_0))
    {
      ATerm g_27 = NULL,i_27 = NULL;
      ATerm q_11;
      q_11 = t;
      {
        ATerm h_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
      }
      t = q_11;
      {
        ATerm j_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(g_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        t = not_null(i_27);
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
  ATerm s_11 = t;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
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
      t = s_11;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_App_2))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      {
        ATerm z_27 = NULL,b_28 = NULL;
        ATerm a_28 = NULL;
        t = SSLgetAnnotations(not_null(t_27));
        {
          a_28 = t;
          if(((z_27 != NULL) && (z_27 != a_28)))
            _fail(a_28);
          else
            z_27 = a_28;
        }
        {
          t = not_null(u_27);
          {
            ATerm d_28 = NULL;
            t = i_85(t);
            {
              b_28 = t;
              {
                t = not_null(v_27);
                {
                  ATerm f_28 = NULL;
                  t = j_85(t);
                  {
                    d_28 = t;
                    {
                      ATerm g_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(b_28), not_null(d_28)), not_null(z_27));
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
            }
          }
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
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_cons(t_28, sym_Con_3))
    {
      u_28 = ATgetArgument(t_28, 0);
      v_28 = ATgetArgument(t_28, 1);
      w_28 = ATgetArgument(t_28, 2);
      {
        ATerm b_29 = NULL,d_29 = NULL;
        ATerm c_29 = NULL;
        t = SSLgetAnnotations(not_null(t_28));
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
        {
          t = not_null(u_28);
          {
            ATerm f_29 = NULL;
            t = f_85(t);
            {
              d_29 = t;
              {
                t = not_null(v_28);
                {
                  ATerm h_29 = NULL;
                  t = g_85(t);
                  {
                    f_29 = t;
                    {
                      t = not_null(w_28);
                      {
                        ATerm j_29 = NULL;
                        t = h_85(t);
                        {
                          h_29 = t;
                          {
                            ATerm k_29 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(d_29), not_null(f_29), not_null(h_29)), not_null(b_29));
                            {
                              k_29 = t;
                              if(((j_29 != NULL) && (j_29 != k_29)))
                                _fail(k_29);
                              else
                                j_29 = k_29;
                            }
                            t = not_null(j_29);
                          }
                        }
                      }
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
  ATerm w_11 = t;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm a_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(i_12);
          }
        else
          {
            t = a_12;
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
      t = w_11;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  v_29 = t;
  t_29 :
  if(match_cons(v_29, sym_SRule_1))
    {
      w_29 = ATgetArgument(v_29, 0);
      u_29 :
      if(match_cons(w_29, sym_StratRule_3))
        {
          x_29 = ATgetArgument(w_29, 0);
          y_29 = ATgetArgument(w_29, 1);
          z_29 = ATgetArgument(w_29, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_29)), (ATerm) ATmakeAppl(sym_Where_1, not_null(z_29))), not_null(x_29)));
        }
      else
        {
          if(match_cons(w_29, sym_Rule_3))
            {
              x_29 = ATgetArgument(w_29, 0);
              y_29 = ATgetArgument(w_29, 1);
              z_29 = ATgetArgument(w_29, 2);
              {
                t = not_null(x_29);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(y_29);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(y_29))), (ATerm) ATmakeAppl(sym_Where_1, not_null(z_29))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_29))));
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
ATerm oncetd_1 (ATerm t, ATerm m_114 (ATerm))
{
  ATerm i_30 (ATerm t)
  {
    ATerm l_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_114(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = l_12;
        t = _one(t, i_30);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  x_31 = t;
  v_31 :
  if(match_cons(x_31, sym_SRule_1))
    {
      y_31 = ATgetArgument(x_31, 0);
      w_31 :
      if(match_cons(y_31, sym_Rule_3))
        {
          z_31 = ATgetArgument(y_31, 0);
          a_32 = ATgetArgument(y_31, 1);
          b_32 = ATgetArgument(y_31, 2);
          {
            ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
            ATerm n_32 = NULL;
            ATerm t_32 = NULL;
            t = new_0(t);
            {
              n_32 = t;
              {
                if(((k_32 != NULL) && (k_32 != n_32)))
                  _fail(n_32);
                else
                  k_32 = n_32;
                {
                  t = not_null(z_31);
                  {
                    ATerm b_33 = NULL;
                    ATerm p_1 (ATerm t)
                    {
                      ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
                      o_32 = t;
                      o_30 :
                      if(match_cons(o_32, sym_Con_3))
                        {
                          p_32 = ATgetArgument(o_32, 0);
                          r_32 = ATgetArgument(o_32, 1);
                          s_32 = ATgetArgument(o_32, 2);
                          p_30 :
                          if(match_cons(p_32, sym_Var_1))
                            {
                              q_32 = ATgetArgument(p_32, 0);
                              {
                                if(((j_32 != NULL) && (j_32 != q_32)))
                                  _fail(q_32);
                                else
                                  j_32 = q_32;
                                {
                                  if(((h_32 != NULL) && (h_32 != r_32)))
                                    _fail(r_32);
                                  else
                                    h_32 = r_32;
                                  {
                                    if(((f_32 != NULL) && (f_32 != s_32)))
                                      _fail(s_32);
                                    else
                                      f_32 = s_32;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_32));
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
                      t_32 = t;
                      {
                        if(((l_32 != NULL) && (l_32 != t_32)))
                          _fail(t_32);
                        else
                          l_32 = t_32;
                        {
                          t = not_null(a_32);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
                              u_32 = t;
                              s_30 :
                              if(match_cons(u_32, sym_Con_3))
                                {
                                  v_32 = ATgetArgument(u_32, 0);
                                  x_32 = ATgetArgument(u_32, 1);
                                  y_32 = ATgetArgument(u_32, 2);
                                  r_31 :
                                  if(match_cons(v_32, sym_Var_1))
                                    {
                                      w_32 = ATgetArgument(v_32, 0);
                                      s_31 :
                                      if(match_cons(y_32, sym_Call_2))
                                        {
                                          z_32 = ATgetArgument(y_32, 0);
                                          a_33 = ATgetArgument(y_32, 1);
                                          t_31 :
                                          if(((ATermList) a_33 == ATempty))
                                            {
                                              {
                                                if(((j_32 != NULL) && (j_32 != w_32)))
                                                  _fail(w_32);
                                                else
                                                  j_32 = w_32;
                                                {
                                                  if(((i_32 != NULL) && (i_32 != x_32)))
                                                    _fail(x_32);
                                                  else
                                                    i_32 = x_32;
                                                  {
                                                    if(((g_32 != NULL) && (g_32 != z_32)))
                                                      _fail(z_32);
                                                    else
                                                      g_32 = z_32;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32));
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
                              b_33 = t;
                              if(((m_32 != NULL) && (m_32 != b_33)))
                                _fail(b_33);
                              else
                                m_32 = b_33;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_32)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_32), not_null(m_32), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_32), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_32), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_32), not_null(i_32), term_h_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32)))))));
          }
        }
      else
        {
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
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_112 (ATerm))
{
  t = w_112(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = topdown_1(t, w_112);
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
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
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
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(o_13);
                            }
                          else
                            {
                              t = n_13;
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
  ATerm l_34 = NULL,m_34 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,v_35 = NULL,w_35 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
  l_34 = t;
  z_33 :
  if(match_cons(l_34, sym_Seq_2))
    {
      m_34 = ATgetArgument(l_34, 0);
      v_35 = ATgetArgument(l_34, 1);
      a_34 :
      if(match_cons(m_34, sym_Call_2))
        {
          k_35 = ATgetArgument(m_34, 0);
          m_35 = ATgetArgument(m_34, 1);
          b_34 :
          if(match_cons(k_35, sym_SVar_1))
            {
              l_35 = ATgetArgument(k_35, 0);
              c_34 :
              if(match_string(l_35, "mark"))
                {
                  d_34 :
                  if(((ATermList) m_35 == ATempty))
                    {
                      e_34 :
                      if(match_cons(v_35, sym_Seq_2))
                        {
                          w_35 = ATgetArgument(v_35, 0);
                          k_38 = ATgetArgument(v_35, 1);
                          f_34 :
                          if(match_cons(w_35, sym_Match_1))
                            {
                              j_38 = ATgetArgument(w_35, 0);
                              h_34 :
                              if(match_cons(k_38, sym_Seq_2))
                                {
                                  l_38 = ATgetArgument(k_38, 0);
                                  n_38 = ATgetArgument(k_38, 1);
                                  i_34 :
                                  if(match_cons(l_38, sym_Where_1))
                                    {
                                      m_38 = ATgetArgument(l_38, 0);
                                      k_34 :
                                      if(match_cons(n_38, sym_Build_1))
                                        {
                                          o_38 = ATgetArgument(n_38, 0);
                                          {
                                            ATerm p_13 = t;
                                            int q_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
                                                ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
                                                t = term_r_13;
                                                {
                                                  ATerm v_1 (ATerm t)
                                                  {
                                                    t = term_y_13;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, v_1);
                                                  {
                                                    v_38 = t;
                                                    o_33 :
                                                    if(match_cons(v_38, sym_Defined_2))
                                                      {
                                                        w_38 = ATgetArgument(v_38, 0);
                                                        x_38 = ATgetArgument(v_38, 1);
                                                        p_33 :
                                                        if(match_string(w_38, "o_0"))
                                                          {
                                                            ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
                                                            if(((s_38 != NULL) && (s_38 != x_38)))
                                                              _fail(x_38);
                                                            else
                                                              s_38 = x_38;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(s_38), not_null(j_38), (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(o_38)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  g_40 = t;
                                                                  n_33 :
                                                                  if(match_cons(g_40, sym__2))
                                                                    {
                                                                      h_40 = ATgetArgument(g_40, 0);
                                                                      i_40 = ATgetArgument(g_40, 1);
                                                                      {
                                                                        if(((t_38 != NULL) && (t_38 != h_40)))
                                                                          _fail(h_40);
                                                                        else
                                                                          t_38 = h_40;
                                                                        if(((u_38 != NULL) && (u_38 != i_40)))
                                                                          _fail(i_40);
                                                                        else
                                                                          u_38 = i_40;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(t_38)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_38))));
                                                LocalPopChoice(q_13);
                                              }
                                            else
                                              {
                                                t = p_13;
                                                {
                                                  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
                                                  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
                                                  t = term_r_13;
                                                  {
                                                    ATerm w_1 (ATerm t)
                                                    {
                                                      t = term_y_13;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, w_1);
                                                    {
                                                      r_40 = t;
                                                      x_33 :
                                                      if(match_cons(r_40, sym_Defined_2))
                                                        {
                                                          s_40 = ATgetArgument(r_40, 0);
                                                          t_40 = ATgetArgument(r_40, 1);
                                                          y_33 :
                                                          if(match_string(s_40, "k_0"))
                                                            {
                                                              ATerm u_40 = NULL;
                                                              if(((m_40 != NULL) && (m_40 != t_40)))
                                                                _fail(t_40);
                                                              else
                                                                m_40 = t_40;
                                                              {
                                                                ATerm v_40 = NULL;
                                                                t = not_null(m_40);
                                                                {
                                                                  u_40 = t;
                                                                  {
                                                                    if(((o_40 != NULL) && (o_40 != u_40)))
                                                                      _fail(u_40);
                                                                    else
                                                                      o_40 = u_40;
                                                                    {
                                                                      t = not_null(j_38);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          v_40 = t;
                                                                          {
                                                                            if(((n_40 != NULL) && (n_40 != v_40)))
                                                                              _fail(v_40);
                                                                            else
                                                                              n_40 = v_40;
                                                                            {
                                                                              ATerm x_1 (ATerm t)
                                                                              {
                                                                                t = term_z_13;
                                                                                return(t);
                                                                              }
                                                                              ATerm y_1 (ATerm t)
                                                                              {
                                                                                ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
                                                                                ATerm z_1 (ATerm t)
                                                                                {
                                                                                  ATerm w_40 = NULL,z_40 = NULL;
                                                                                  ATerm y_40 = NULL;
                                                                                  y_40 = t;
                                                                                  if(((w_40 != NULL) && (w_40 != y_40)))
                                                                                    _fail(y_40);
                                                                                  else
                                                                                    w_40 = y_40;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_40));
                                                                                    {
                                                                                      z_40 = t;
                                                                                      {
                                                                                        ATerm a_14;
                                                                                        a_14 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(z_40), not_null(o_40)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_14, not_null(z_40)));
                                                                                          {
                                                                                            ATerm a_2 (ATerm t)
                                                                                            {
                                                                                              t = term_z_13;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, a_2);
                                                                                          }
                                                                                        }
                                                                                        t = a_14;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, z_1);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(o_38));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      l_41 = t;
                                                                                      w_33 :
                                                                                      if(match_cons(l_41, sym__2))
                                                                                        {
                                                                                          m_41 = ATgetArgument(l_41, 0);
                                                                                          n_41 = ATgetArgument(l_41, 1);
                                                                                          {
                                                                                            if(((p_40 != NULL) && (p_40 != m_41)))
                                                                                              _fail(m_41);
                                                                                            else
                                                                                              p_40 = m_41;
                                                                                            if(((q_40 != NULL) && (q_40 != n_41)))
                                                                                              _fail(n_41);
                                                                                            else
                                                                                              q_40 = n_41;
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(p_40)), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_38))));
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
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  ATerm p_44 (ATerm t)
  {
    ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(r_42), not_null(q_42));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_z_13;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        b_44 = t;
        f_42 :
        if(match_cons(b_44, sym_Defined_2))
          {
            c_44 = ATgetArgument(b_44, 0);
            d_44 = ATgetArgument(b_44, 1);
            i_42 :
            if(match_string(c_44, "m_0"))
              {
                if(((r_42 != NULL) && (r_42 != d_44)))
                  _fail(d_44);
                else
                  r_42 = d_44;
              }
            else
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
    t = not_null(r_42);
    return(t);
  }
  ATerm q_44 (ATerm t)
  {
    ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(r_42), not_null(q_42));
    {
      ATerm c_2 (ATerm t)
      {
        t = term_z_13;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        g_44 = t;
        k_42 :
        if(match_cons(g_44, sym_Defined_2))
          {
            h_44 = ATgetArgument(g_44, 0);
            i_44 = ATgetArgument(g_44, 1);
            l_42 :
            if(match_string(h_44, "l_0"))
              {
                if(((r_42 != NULL) && (r_42 != i_44)))
                  _fail(i_44);
                else
                  r_42 = i_44;
              }
            else
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
    t = not_null(r_42);
    return(t);
  }
  p_42 = t;
  m_42 :
  if(match_cons(p_42, sym_App_2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      n_42 :
      if(match_cons(r_42, sym_Var_1))
        {
          o_42 = ATgetArgument(r_42, 0);
          {
            ATerm c_14 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_43 = NULL,x_43 = NULL,y_43 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(o_42), not_null(q_42));
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_z_13;
                    return(t);
                  }
                  t = rewrite_1(t, d_2);
                  {
                    p_43 = t;
                    c_42 :
                    if(match_cons(p_43, sym_Defined_2))
                      {
                        x_43 = ATgetArgument(p_43, 0);
                        y_43 = ATgetArgument(p_43, 1);
                        d_42 :
                        if(match_string(x_43, "p_0"))
                          {
                            if(((o_42 != NULL) && (o_42 != y_43)))
                              _fail(y_43);
                            else
                              o_42 = y_43;
                          }
                        else
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_42));
                LocalPopChoice(d_14);
              }
            else
              {
                t = c_14;
                {
                  ATerm e_14 = t;
                  int f_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_44(t);
                      LocalPopChoice(f_14);
                    }
                  else
                    {
                      t = e_14;
                      t = q_44(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm i_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_44(t);
              LocalPopChoice(m_14);
            }
          else
            {
              t = i_14;
              t = q_44(t);
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
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  x_44 :
  if(((ATgetType(y_44) == AT_LIST) && ((ATermList) y_44 != ATempty)))
    {
      z_44 = ATgetFirst((ATermList) y_44);
      a_45 = (ATerm) ATgetNext((ATermList) y_44);
      t = not_null(a_45);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym__2))
    {
      j_45 = ATgetArgument(i_45, 0);
      k_45 = ATgetArgument(i_45, 1);
      {
        ATerm t_14;
        t_14 = t;
        {
          ATerm n_45 = NULL;
          ATerm o_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_45), not_null(k_45));
          {
            ATerm u_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(v_14);
              }
            else
              {
                t = u_14;
                t = (ATerm) ATempty;
              }
            {
              o_45 = t;
              if(((n_45 != NULL) && (n_45 != o_45)))
                _fail(o_45);
              else
                n_45 = o_45;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_45), not_null(k_45), not_null(n_45));
            t = table_put_0(t);
          }
        }
        t = t_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    ATerm y_45 = NULL;
    ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
    t = t_99(t);
    {
      y_45 = t;
      {
        if(((w_45 != NULL) && (w_45 != y_45)))
          _fail(y_45);
        else
          w_45 = y_45;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), term_z_14);
              t = table_get_0(t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_45 = t;
            u_45 :
            if(((ATgetType(z_45) == AT_LIST) && ((ATermList) z_45 != ATempty)))
              {
                a_46 = ATgetFirst((ATermList) z_45);
                b_46 = (ATerm) ATgetNext((ATermList) z_45);
                {
                  if(((x_45 != NULL) && (x_45 != a_46)))
                    _fail(a_46);
                  else
                    x_45 = a_46;
                  {
                    if(((v_45 != NULL) && (v_45 != b_46)))
                      _fail(b_46);
                    else
                      v_45 = b_46;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_45), term_z_14, not_null(v_45));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_45);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm c_46 = NULL;
                              c_46 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), not_null(c_46));
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
  t = w_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_112 (ATerm), ATerm v_112 (ATerm))
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_112(t);
      t = v_112(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        t = v_112(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm j_46 = NULL;
  ATerm d_15;
  d_15 = t;
  {
    ATerm k_46 = NULL;
    ATerm l_46 = NULL;
    t = s_99(t);
    {
      k_46 = t;
      {
        if(((j_46 != NULL) && (j_46 != k_46)))
          _fail(k_46);
        else
          j_46 = k_46;
        {
          ATerm m_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), term_z_14);
          {
            ATerm e_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_15);
              }
            else
              {
                t = e_15;
                t = (ATerm) ATempty;
              }
            {
              m_46 = t;
              if(((l_46 != NULL) && (l_46 != m_46)))
                _fail(m_46);
              else
                l_46 = m_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_46), term_z_14, (ATerm) ATinsert(CheckATermList(not_null(l_46)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm))
{
  t = begin_scope_1(t, u_99);
  {
    ATerm f_2 (ATerm t)
    {
      t = end_scope_1(t, u_99);
      return(t);
    }
    t = restore_always_2(t, v_99, f_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm b_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym__3))
    {
      e_47 = ATgetArgument(b_47, 0);
      f_47 = ATgetArgument(b_47, 1);
      g_47 = ATgetArgument(b_47, 2);
      {
        ATerm k_47 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_z_13;
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          ATerm p_47 = NULL;
          t = not_null(f_47);
          {
            t = tvars_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm l_47 = NULL;
                l_47 = t;
                {
                  ATerm h_15;
                  h_15 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(l_47), not_null(e_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_15, not_null(l_47)));
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = term_z_13;
                        return(t);
                      }
                      t = assert_1(t, j_2);
                    }
                  }
                  t = h_15;
                }
                return(t);
              }
              t = map_1(t, i_2);
              {
                t = not_null(g_47);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    p_47 = t;
                    if(((k_47 != NULL) && (k_47 != p_47)))
                      _fail(p_47);
                    else
                      k_47 = p_47;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, g_2, h_2);
        t = not_null(k_47);
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
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
  c_49 = t;
  u_48 :
  if(match_cons(c_49, sym_Seq_2))
    {
      d_49 = ATgetArgument(c_49, 0);
      h_49 = ATgetArgument(c_49, 1);
      v_48 :
      if(match_cons(d_49, sym_Call_2))
        {
          e_49 = ATgetArgument(d_49, 0);
          g_49 = ATgetArgument(d_49, 1);
          w_48 :
          if(match_cons(e_49, sym_SVar_1))
            {
              f_49 = ATgetArgument(e_49, 0);
              x_48 :
              if(match_string(f_49, "mark"))
                {
                  y_48 :
                  if(((ATermList) g_49 == ATempty))
                    {
                      z_48 :
                      if(match_cons(h_49, sym_Seq_2))
                        {
                          i_49 = ATgetArgument(h_49, 0);
                          k_49 = ATgetArgument(h_49, 1);
                          a_49 :
                          if(match_cons(i_49, sym_Match_1))
                            {
                              j_49 = ATgetArgument(i_49, 0);
                              b_49 :
                              if(match_cons(k_49, sym_Build_1))
                                {
                                  l_49 = ATgetArgument(k_49, 0);
                                  {
                                    ATerm j_15 = t;
                                    int l_15 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm o_49 = NULL,p_49 = NULL;
                                        ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
                                        t = term_r_13;
                                        {
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_o_15;
                                            return(t);
                                          }
                                          t = rewrite_1(t, k_2);
                                          {
                                            q_49 = t;
                                            j_48 :
                                            if(match_cons(q_49, sym_Defined_2))
                                              {
                                                r_49 = ATgetArgument(q_49, 0);
                                                s_49 = ATgetArgument(q_49, 1);
                                                k_48 :
                                                if(match_string(r_49, "n_0"))
                                                  {
                                                    ATerm t_49 = NULL;
                                                    if(((o_49 != NULL) && (o_49 != s_49)))
                                                      _fail(s_49);
                                                    else
                                                      o_49 = s_49;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_49), not_null(j_49), not_null(l_49));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          t_49 = t;
                                                          if(((p_49 != NULL) && (p_49 != t_49)))
                                                            _fail(t_49);
                                                          else
                                                            p_49 = t_49;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_49)), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_49)));
                                        LocalPopChoice(l_15);
                                      }
                                    else
                                      {
                                        t = j_15;
                                        {
                                          ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
                                          ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
                                          t = term_r_13;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              t = term_o_15;
                                              return(t);
                                            }
                                            t = rewrite_1(t, l_2);
                                            {
                                              a_50 = t;
                                              r_48 :
                                              if(match_cons(a_50, sym_Defined_2))
                                                {
                                                  b_50 = ATgetArgument(a_50, 0);
                                                  c_50 = ATgetArgument(a_50, 1);
                                                  t_48 :
                                                  if(match_string(b_50, "j_0"))
                                                    {
                                                      ATerm d_50 = NULL;
                                                      if(((w_49 != NULL) && (w_49 != c_50)))
                                                        _fail(c_50);
                                                      else
                                                        w_49 = c_50;
                                                      {
                                                        ATerm e_50 = NULL;
                                                        t = not_null(w_49);
                                                        {
                                                          d_50 = t;
                                                          {
                                                            if(((y_49 != NULL) && (y_49 != d_50)))
                                                              _fail(d_50);
                                                            else
                                                              y_49 = d_50;
                                                            {
                                                              t = not_null(j_49);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  e_50 = t;
                                                                  {
                                                                    if(((x_49 != NULL) && (x_49 != e_50)))
                                                                      _fail(e_50);
                                                                    else
                                                                      x_49 = e_50;
                                                                    {
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        t = term_z_13;
                                                                        return(t);
                                                                      }
                                                                      ATerm n_2 (ATerm t)
                                                                      {
                                                                        ATerm j_50 = NULL;
                                                                        ATerm o_2 (ATerm t)
                                                                        {
                                                                          ATerm f_50 = NULL,h_50 = NULL;
                                                                          ATerm g_50 = NULL;
                                                                          g_50 = t;
                                                                          if(((f_50 != NULL) && (f_50 != g_50)))
                                                                            _fail(g_50);
                                                                          else
                                                                            f_50 = g_50;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_50));
                                                                            {
                                                                              h_50 = t;
                                                                              {
                                                                                ATerm q_15;
                                                                                q_15 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(h_50), not_null(y_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_16, not_null(h_50)));
                                                                                  {
                                                                                    ATerm p_2 (ATerm t)
                                                                                    {
                                                                                      t = term_z_13;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, p_2);
                                                                                  }
                                                                                }
                                                                                t = q_15;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, o_2);
                                                                        {
                                                                          t = not_null(l_49);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              j_50 = t;
                                                                              if(((z_49 != NULL) && (z_49 != j_50)))
                                                                                _fail(j_50);
                                                                              else
                                                                                z_49 = j_50;
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_49)), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_49)));
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
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,d_52 = NULL,g_52 = NULL,h_52 = NULL;
  l_51 = t;
  z_50 :
  if(match_cons(l_51, sym_App_2))
    {
      m_51 = ATgetArgument(l_51, 0);
      d_52 = ATgetArgument(l_51, 1);
      f_51 :
      if(match_cons(m_51, sym_Call_2))
        {
          n_51 = ATgetArgument(m_51, 0);
          z_51 = ATgetArgument(m_51, 1);
          g_51 :
          if(match_cons(n_51, sym_SVar_1))
            {
              o_51 = ATgetArgument(n_51, 0);
              h_51 :
              if(match_string(o_51, "bottomup_1"))
                {
                  i_51 :
                  if(((ATgetType(z_51) == AT_LIST) && ((ATermList) z_51 != ATempty)))
                    {
                      a_52 = ATgetFirst((ATermList) z_51);
                      b_52 = (ATerm) ATgetNext((ATermList) z_51);
                      j_51 :
                      if(((ATermList) b_52 == ATempty))
                        {
                          k_51 :
                          if(match_cons(d_52, sym_Op_2))
                            {
                              g_52 = ATgetArgument(d_52, 0);
                              h_52 = ATgetArgument(d_52, 1);
                              {
                                ATerm l_52 = NULL;
                                ATerm o_52 = NULL;
                                t = not_null(h_52);
                                {
                                  ATerm q_2 (ATerm t)
                                  {
                                    ATerm m_52 = NULL;
                                    m_52 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_16, (ATerm) ATinsert(ATempty, not_null(a_52))), not_null(m_52));
                                    return(t);
                                  }
                                  t = map_1(t, q_2);
                                  {
                                    o_52 = t;
                                    if(((l_52 != NULL) && (l_52 != o_52)))
                                      _fail(o_52);
                                    else
                                      l_52 = o_52;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_52), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_52), not_null(l_52)));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  v_52 = t;
  t_52 :
  if(match_cons(v_52, sym_Seq_2))
    {
      w_52 = ATgetArgument(v_52, 0);
      y_52 = ATgetArgument(v_52, 1);
      u_52 :
      if(match_cons(w_52, sym_Build_1))
        {
          x_52 = ATgetArgument(w_52, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(y_52), not_null(x_52)));
        }
      else
        {
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
  ATerm m_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  m_53 = t;
  h_53 :
  if(match_cons(m_53, sym_LChoice_2))
    {
      o_53 = ATgetArgument(m_53, 0);
      r_53 = ATgetArgument(m_53, 1);
      i_53 :
      if(match_cons(o_53, sym_LChoice_2))
        {
          p_53 = ATgetArgument(o_53, 0);
          q_53 = ATgetArgument(o_53, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_53), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_53), not_null(r_53)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(m_53, sym_Seq_2))
        {
          o_53 = ATgetArgument(m_53, 0);
          r_53 = ATgetArgument(m_53, 1);
          j_53 :
          if(match_cons(o_53, sym_Seq_2))
            {
              p_53 = ATgetArgument(o_53, 0);
              q_53 = ATgetArgument(o_53, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_53), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_53), not_null(r_53)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_53, sym_Choice_2))
            {
              o_53 = ATgetArgument(m_53, 0);
              r_53 = ATgetArgument(m_53, 1);
              l_53 :
              if(match_cons(o_53, sym_Choice_2))
                {
                  p_53 = ATgetArgument(o_53, 0);
                  q_53 = ATgetArgument(o_53, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_53), (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_53), not_null(r_53)));
                }
              else
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
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  h_54 = t;
  f_54 :
  if(match_cons(h_54, sym_Seq_2))
    {
      i_54 = ATgetArgument(h_54, 0);
      l_54 = ATgetArgument(h_54, 1);
      g_54 :
      if(match_cons(i_54, sym_Scope_2))
        {
          j_54 = ATgetArgument(i_54, 0);
          k_54 = ATgetArgument(i_54, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_54), not_null(l_54)));
        }
      else
        {
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
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  z_54 = t;
  x_54 :
  if(match_cons(z_54, sym_Seq_2))
    {
      a_55 = ATgetArgument(z_54, 0);
      d_55 = ATgetArgument(z_54, 1);
      y_54 :
      if(match_cons(a_55, sym_LChoice_2))
        {
          b_55 = ATgetArgument(a_55, 0);
          c_55 = ATgetArgument(a_55, 1);
          {
            ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_55));
            {
              ATerm r_2 (ATerm t)
              {
                t = term_t_16;
                return(t);
              }
              t = rewrite_1(t, r_2);
              {
                h_55 = t;
                s_54 :
                if(match_cons(h_55, sym_Defined_2))
                  {
                    i_55 = ATgetArgument(h_55, 0);
                    j_55 = ATgetArgument(h_55, 1);
                    t_54 :
                    if(match_string(i_55, "d_0"))
                      {
                        if(((d_55 != NULL) && (d_55 != j_55)))
                          _fail(j_55);
                        else
                          d_55 = j_55;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(b_55), not_null(d_55)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_55), not_null(d_55)));
          }
        }
      else
        {
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
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  s_55 = t;
  q_55 :
  if(match_cons(s_55, sym_Seq_2))
    {
      t_55 = ATgetArgument(s_55, 0);
      w_55 = ATgetArgument(s_55, 1);
      r_55 :
      if(match_cons(t_55, sym_Choice_2))
        {
          u_55 = ATgetArgument(t_55, 0);
          v_55 = ATgetArgument(t_55, 1);
          {
            ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_55));
            {
              ATerm s_2 (ATerm t)
              {
                t = term_u_16;
                return(t);
              }
              t = rewrite_1(t, s_2);
              {
                a_56 = t;
                o_55 :
                if(match_cons(a_56, sym_Defined_2))
                  {
                    b_56 = ATgetArgument(a_56, 0);
                    c_56 = ATgetArgument(a_56, 1);
                    p_55 :
                    if(match_string(b_56, "c_0"))
                      {
                        if(((w_55 != NULL) && (w_55 != c_56)))
                          _fail(c_56);
                        else
                          w_55 = c_56;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(u_55), not_null(w_55)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_55), not_null(w_55)));
          }
        }
      else
        {
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
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL;
        q_57 = t;
        g_57 :
        if(match_cons(q_57, sym_Seq_2))
          {
            r_57 = ATgetArgument(q_57, 0);
            x_57 = ATgetArgument(q_57, 1);
            h_57 :
            if(match_cons(r_57, sym_Choice_2))
              {
                s_57 = ATgetArgument(r_57, 0);
                u_57 = ATgetArgument(r_57, 1);
                {
                  ATerm g_58 = NULL,i_58 = NULL;
                  ATerm x_16;
                  x_16 = t;
                  {
                    ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_57));
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = term_u_16;
                        return(t);
                      }
                      t = rewrite_1(t, u_2);
                      {
                        d_58 = t;
                        o_56 :
                        if(match_cons(d_58, sym_Defined_2))
                          {
                            e_58 = ATgetArgument(d_58, 0);
                            f_58 = ATgetArgument(d_58, 1);
                            p_56 :
                            if(match_string(e_58, "c_0"))
                              {
                                if(((x_57 != NULL) && (x_57 != f_58)))
                                  _fail(f_58);
                                else
                                  x_57 = f_58;
                              }
                            else
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
                  t = x_16;
                  {
                    ATerm y_16;
                    y_16 = t;
                    {
                      ATerm h_58 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_57), not_null(x_57));
                      {
                        t = t_2(t);
                        {
                          h_58 = t;
                          if(((g_58 != NULL) && (g_58 != h_58)))
                            _fail(h_58);
                          else
                            g_58 = h_58;
                        }
                      }
                    }
                    t = y_16;
                    {
                      ATerm j_58 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_57), not_null(x_57));
                      {
                        t = t_2(t);
                        {
                          j_58 = t;
                          if(((i_58 != NULL) && (i_58 != j_58)))
                            _fail(j_58);
                          else
                            i_58 = j_58;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_58), not_null(i_58));
                        t = t_2(t);
                      }
                    }
                  }
                }
              }
            else
              {
                if(match_cons(r_57, sym_LChoice_2))
                  {
                    s_57 = ATgetArgument(r_57, 0);
                    u_57 = ATgetArgument(r_57, 1);
                    {
                      ATerm t_58 = NULL,v_58 = NULL;
                      ATerm z_16;
                      z_16 = t;
                      {
                        ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_57));
                        {
                          ATerm v_2 (ATerm t)
                          {
                            t = term_t_16;
                            return(t);
                          }
                          t = rewrite_1(t, v_2);
                          {
                            q_58 = t;
                            t_56 :
                            if(match_cons(q_58, sym_Defined_2))
                              {
                                r_58 = ATgetArgument(q_58, 0);
                                s_58 = ATgetArgument(q_58, 1);
                                u_56 :
                                if(match_string(r_58, "d_0"))
                                  {
                                    if(((x_57 != NULL) && (x_57 != s_58)))
                                      _fail(s_58);
                                    else
                                      x_57 = s_58;
                                  }
                                else
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
                      t = z_16;
                      {
                        ATerm a_17;
                        a_17 = t;
                        {
                          ATerm u_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_57), not_null(x_57));
                          {
                            t = t_2(t);
                            {
                              u_58 = t;
                              if(((t_58 != NULL) && (t_58 != u_58)))
                                _fail(u_58);
                              else
                                t_58 = u_58;
                            }
                          }
                        }
                        t = a_17;
                        {
                          ATerm w_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_57), not_null(x_57));
                          {
                            t = t_2(t);
                            {
                              w_58 = t;
                              if(((v_58 != NULL) && (v_58 != w_58)))
                                _fail(w_58);
                              else
                                v_58 = w_58;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_58), not_null(v_58));
                            t = t_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(r_57, sym_Scope_2))
                      {
                        s_57 = ATgetArgument(r_57, 0);
                        u_57 = ATgetArgument(r_57, 1);
                        {
                          ATerm a_59 = NULL;
                          ATerm b_59 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_57), not_null(x_57));
                          {
                            t = t_2(t);
                            {
                              b_59 = t;
                              if(((a_59 != NULL) && (a_59 != b_59)))
                                _fail(b_59);
                              else
                                a_59 = b_59;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_57), not_null(a_59));
                            t = t_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(r_57, sym_Seq_2))
                          {
                            s_57 = ATgetArgument(r_57, 0);
                            u_57 = ATgetArgument(r_57, 1);
                            {
                              ATerm k_59 = NULL;
                              ATerm l_59 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_57), not_null(x_57));
                              {
                                t = t_2(t);
                                {
                                  l_59 = t;
                                  if(((k_59 != NULL) && (k_59 != l_59)))
                                    _fail(l_59);
                                  else
                                    k_59 = l_59;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_57), not_null(k_59));
                                t = t_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(r_57, sym_Build_1))
                              {
                                s_57 = ATgetArgument(r_57, 0);
                                {
                                  ATerm t_59 = NULL;
                                  ATerm u_59 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_57), not_null(s_57));
                                  {
                                    t = t_2(t);
                                    {
                                      u_59 = t;
                                      if(((t_59 != NULL) && (t_59 != u_59)))
                                        _fail(u_59);
                                      else
                                        t_59 = u_59;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_59));
                                    t = t_2(t);
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
            if(match_cons(q_57, sym_LChoice_2))
              {
                r_57 = ATgetArgument(q_57, 0);
                x_57 = ATgetArgument(q_57, 1);
                i_57 :
                if(match_cons(r_57, sym_LChoice_2))
                  {
                    s_57 = ATgetArgument(r_57, 0);
                    u_57 = ATgetArgument(r_57, 1);
                    {
                      ATerm f_59 = NULL;
                      ATerm g_59 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_57), not_null(x_57));
                      {
                        t = t_2(t);
                        {
                          g_59 = t;
                          if(((f_59 != NULL) && (f_59 != g_59)))
                            _fail(g_59);
                          else
                            f_59 = g_59;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_57), not_null(f_59));
                        t = t_2(t);
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
                if(match_cons(q_57, sym_Choice_2))
                  {
                    r_57 = ATgetArgument(q_57, 0);
                    x_57 = ATgetArgument(q_57, 1);
                    j_57 :
                    if(match_cons(r_57, sym_Choice_2))
                      {
                        s_57 = ATgetArgument(r_57, 0);
                        u_57 = ATgetArgument(r_57, 1);
                        {
                          ATerm p_59 = NULL;
                          ATerm q_59 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_57), not_null(x_57));
                          {
                            t = t_2(t);
                            {
                              q_59 = t;
                              if(((p_59 != NULL) && (p_59 != q_59)))
                                _fail(q_59);
                              else
                                p_59 = q_59;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_57), not_null(p_59));
                            t = t_2(t);
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
                    if(match_cons(q_57, sym_App_2))
                      {
                        r_57 = ATgetArgument(q_57, 0);
                        x_57 = ATgetArgument(q_57, 1);
                        k_57 :
                        if(match_cons(r_57, sym_Call_2))
                          {
                            s_57 = ATgetArgument(r_57, 0);
                            u_57 = ATgetArgument(r_57, 1);
                            l_57 :
                            if(match_cons(s_57, sym_SVar_1))
                              {
                                t_57 = ATgetArgument(s_57, 0);
                                m_57 :
                                if(match_string(t_57, "bottomup_1"))
                                  {
                                    n_57 :
                                    if(((ATgetType(u_57) == AT_LIST) && ((ATermList) u_57 != ATempty)))
                                      {
                                        v_57 = ATgetFirst((ATermList) u_57);
                                        w_57 = (ATerm) ATgetNext((ATermList) u_57);
                                        o_57 :
                                        if(((ATermList) w_57 == ATempty))
                                          {
                                            p_57 :
                                            if(match_cons(x_57, sym_Op_2))
                                              {
                                                y_57 = ATgetArgument(x_57, 0);
                                                z_57 = ATgetArgument(x_57, 1);
                                                {
                                                  ATerm y_59 = NULL,c_60 = NULL;
                                                  ATerm b_17;
                                                  b_17 = t;
                                                  {
                                                    ATerm b_60 = NULL;
                                                    t = not_null(z_57);
                                                    {
                                                      ATerm w_2 (ATerm t)
                                                      {
                                                        ATerm z_59 = NULL;
                                                        z_59 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_16, (ATerm) ATinsert(ATempty, not_null(v_57))), not_null(z_59));
                                                        return(t);
                                                      }
                                                      t = map_1(t, w_2);
                                                      {
                                                        b_60 = t;
                                                        if(((y_59 != NULL) && (y_59 != b_60)))
                                                          _fail(b_60);
                                                        else
                                                          y_59 = b_60;
                                                      }
                                                    }
                                                  }
                                                  t = b_17;
                                                  {
                                                    ATerm d_60 = NULL,f_60 = NULL;
                                                    ATerm e_60 = NULL;
                                                    t = not_null(y_59);
                                                    {
                                                      t = bottomup_1(t, t_2);
                                                      {
                                                        e_60 = t;
                                                        if(((d_60 != NULL) && (d_60 != e_60)))
                                                          _fail(e_60);
                                                        else
                                                          d_60 = e_60;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_57), not_null(d_60));
                                                      {
                                                        t = t_2(t);
                                                        {
                                                          f_60 = t;
                                                          if(((c_60 != NULL) && (c_60 != f_60)))
                                                            _fail(f_60);
                                                          else
                                                            c_60 = f_60;
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(v_57), not_null(c_60));
                                                      t = t_2(t);
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
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, t_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  h_61 = t;
  f_61 :
  if(match_cons(h_61, sym_Seq_2))
    {
      i_61 = ATgetArgument(h_61, 0);
      j_61 = ATgetArgument(h_61, 1);
      g_61 :
      if(match_cons(j_61, sym_Scope_2))
        {
          k_61 = ATgetArgument(j_61, 0);
          l_61 = ATgetArgument(j_61, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_61), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_61), not_null(l_61)));
        }
      else
        {
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
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  t_61 = t;
  r_61 :
  if(match_cons(t_61, sym_Seq_2))
    {
      u_61 = ATgetArgument(t_61, 0);
      v_61 = ATgetArgument(t_61, 1);
      s_61 :
      if(match_cons(v_61, sym_LChoice_2))
        {
          w_61 = ATgetArgument(v_61, 0);
          x_61 = ATgetArgument(v_61, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(u_61), not_null(w_61)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_61), not_null(x_61)));
        }
      else
        {
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
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
  f_62 = t;
  d_62 :
  if(match_cons(f_62, sym_Seq_2))
    {
      g_62 = ATgetArgument(f_62, 0);
      h_62 = ATgetArgument(f_62, 1);
      e_62 :
      if(match_cons(h_62, sym_Choice_2))
        {
          i_62 = ATgetArgument(h_62, 0);
          j_62 = ATgetArgument(h_62, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(g_62), not_null(i_62)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_62), not_null(j_62)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    t = bottomup_1(t, x_112);
    return(t);
  }
  t = _all(t, x_2);
  t = x_112(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      t = h_102(t);
      t = bottomup_1(t, y_2);
      return(t);
    }
    t = try_1(t, z_2);
    return(t);
  }
  t = bottomup_1(t, y_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
        z_62 = t;
        x_62 :
        if(match_cons(z_62, sym_Seq_2))
          {
            a_63 = ATgetArgument(z_62, 0);
            b_63 = ATgetArgument(z_62, 1);
            y_62 :
            if(match_cons(b_63, sym_Choice_2))
              {
                c_63 = ATgetArgument(b_63, 0);
                d_63 = ATgetArgument(b_63, 1);
                {
                  ATerm h_63 = NULL,j_63 = NULL;
                  ATerm e_17;
                  e_17 = t;
                  {
                    ATerm i_63 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_63), not_null(c_63));
                    {
                      t = a_3(t);
                      {
                        i_63 = t;
                        if(((h_63 != NULL) && (h_63 != i_63)))
                          _fail(i_63);
                        else
                          h_63 = i_63;
                      }
                    }
                  }
                  t = e_17;
                  {
                    ATerm k_63 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_63), not_null(d_63));
                    {
                      t = a_3(t);
                      {
                        k_63 = t;
                        if(((j_63 != NULL) && (j_63 != k_63)))
                          _fail(k_63);
                        else
                          j_63 = k_63;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_63), not_null(j_63));
                      t = a_3(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(b_63, sym_LChoice_2))
                  {
                    c_63 = ATgetArgument(b_63, 0);
                    d_63 = ATgetArgument(b_63, 1);
                    {
                      ATerm o_63 = NULL,q_63 = NULL;
                      ATerm f_17;
                      f_17 = t;
                      {
                        ATerm p_63 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_63), not_null(c_63));
                        {
                          t = a_3(t);
                          {
                            p_63 = t;
                            if(((o_63 != NULL) && (o_63 != p_63)))
                              _fail(p_63);
                            else
                              o_63 = p_63;
                          }
                        }
                      }
                      t = f_17;
                      {
                        ATerm r_63 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_63), not_null(d_63));
                        {
                          t = a_3(t);
                          {
                            r_63 = t;
                            if(((q_63 != NULL) && (q_63 != r_63)))
                              _fail(r_63);
                            else
                              q_63 = r_63;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_63), not_null(q_63));
                          t = a_3(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(b_63, sym_Scope_2))
                      {
                        c_63 = ATgetArgument(b_63, 0);
                        d_63 = ATgetArgument(b_63, 1);
                        {
                          ATerm v_63 = NULL;
                          ATerm w_63 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_63), not_null(d_63));
                          {
                            t = a_3(t);
                            {
                              w_63 = t;
                              if(((v_63 != NULL) && (v_63 != w_63)))
                                _fail(w_63);
                              else
                                v_63 = w_63;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_63), not_null(v_63));
                            t = a_3(t);
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
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, a_3);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm l_64 = NULL,m_64 = NULL;
  l_64 = t;
  k_64 :
  if(match_cons(l_64, sym_Build_1))
    {
      m_64 = ATgetArgument(l_64, 0);
      {
        ATerm p_64 = NULL,r_64 = NULL;
        ATerm q_64 = NULL;
        t = SSLgetAnnotations(not_null(l_64));
        {
          q_64 = t;
          if(((p_64 != NULL) && (p_64 != q_64)))
            _fail(q_64);
          else
            p_64 = q_64;
        }
        {
          t = not_null(m_64);
          {
            ATerm t_64 = NULL;
            t = d_89(t);
            {
              r_64 = t;
              {
                ATerm u_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(r_64)), not_null(p_64));
                {
                  u_64 = t;
                  if(((t_64 != NULL) && (t_64 != u_64)))
                    _fail(u_64);
                  else
                    t_64 = u_64;
                }
                t = not_null(t_64);
              }
            }
          }
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
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  e_65 :
  if(match_cons(f_65, sym_Seq_2))
    {
      g_65 = ATgetArgument(f_65, 0);
      h_65 = ATgetArgument(f_65, 1);
      {
        ATerm l_65 = NULL,n_65 = NULL;
        ATerm m_65 = NULL;
        t = SSLgetAnnotations(not_null(f_65));
        {
          m_65 = t;
          if(((l_65 != NULL) && (l_65 != m_65)))
            _fail(m_65);
          else
            l_65 = m_65;
        }
        {
          t = not_null(g_65);
          {
            ATerm p_65 = NULL;
            t = n_87(t);
            {
              n_65 = t;
              {
                t = not_null(h_65);
                {
                  ATerm r_65 = NULL;
                  t = o_87(t);
                  {
                    p_65 = t;
                    {
                      ATerm s_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(n_65), not_null(p_65)), not_null(l_65));
                      {
                        s_65 = t;
                        if(((r_65 != NULL) && (r_65 != s_65)))
                          _fail(s_65);
                        else
                          r_65 = s_65;
                      }
                      t = not_null(r_65);
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
  ATerm d_66 = NULL,e_66 = NULL;
  d_66 = t;
  c_66 :
  if(match_cons(d_66, sym_Match_1))
    {
      e_66 = ATgetArgument(d_66, 0);
      {
        ATerm h_66 = NULL,j_66 = NULL;
        ATerm i_66 = NULL;
        t = SSLgetAnnotations(not_null(d_66));
        {
          i_66 = t;
          if(((h_66 != NULL) && (h_66 != i_66)))
            _fail(i_66);
          else
            h_66 = i_66;
        }
        {
          t = not_null(e_66);
          {
            ATerm l_66 = NULL;
            t = c_89(t);
            {
              j_66 = t;
              {
                ATerm m_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(j_66)), not_null(h_66));
                {
                  m_66 = t;
                  if(((l_66 != NULL) && (l_66 != m_66)))
                    _fail(m_66);
                  else
                    l_66 = m_66;
                }
                t = not_null(l_66);
              }
            }
          }
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
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
  b_67 = t;
  a_67 :
  if(match_cons(b_67, sym_LChoice_2))
    {
      c_67 = ATgetArgument(b_67, 0);
      d_67 = ATgetArgument(b_67, 1);
      {
        ATerm h_67 = NULL,j_67 = NULL;
        ATerm i_67 = NULL;
        t = SSLgetAnnotations(not_null(b_67));
        {
          i_67 = t;
          if(((h_67 != NULL) && (h_67 != i_67)))
            _fail(i_67);
          else
            h_67 = i_67;
        }
        {
          t = not_null(c_67);
          {
            ATerm l_67 = NULL;
            t = r_87(t);
            {
              j_67 = t;
              {
                t = not_null(d_67);
                {
                  ATerm r_67 = NULL;
                  t = s_87(t);
                  {
                    l_67 = t;
                    {
                      ATerm s_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(j_67), not_null(l_67)), not_null(h_67));
                      {
                        s_67 = t;
                        if(((r_67 != NULL) && (r_67 != s_67)))
                          _fail(s_67);
                        else
                          r_67 = s_67;
                      }
                      t = not_null(r_67);
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
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
  k_68 = t;
  f_68 :
  if(match_cons(k_68, sym_Choice_2))
    {
      l_68 = ATgetArgument(k_68, 0);
      m_68 = ATgetArgument(k_68, 1);
      {
        ATerm s_68 = NULL,u_68 = NULL;
        ATerm t_68 = NULL;
        t = SSLgetAnnotations(not_null(k_68));
        {
          t_68 = t;
          if(((s_68 != NULL) && (s_68 != t_68)))
            _fail(t_68);
          else
            s_68 = t_68;
        }
        {
          t = not_null(l_68);
          {
            ATerm w_68 = NULL;
            t = p_87(t);
            {
              u_68 = t;
              {
                t = not_null(m_68);
                {
                  ATerm y_68 = NULL;
                  t = q_87(t);
                  {
                    w_68 = t;
                    {
                      ATerm z_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(u_68), not_null(w_68)), not_null(s_68));
                      {
                        z_68 = t;
                        if(((y_68 != NULL) && (y_68 != z_68)))
                          _fail(z_68);
                        else
                          y_68 = z_68;
                      }
                      t = not_null(y_68);
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
  ATerm b_3 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm q_17 = t;
                int r_17 = stack_ptr;
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
                        t = Build_1(t, _id);
                        return(t);
                      }
                      t = Seq_2(t, d_3, e_3);
                      return(t);
                    }
                    t = Scope_2(t, _id, c_3);
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = q_17;
                    {
                      ATerm s_17 = t;
                      int t_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_3 (ATerm t)
                          {
                            ATerm g_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm h_3 (ATerm t)
                            {
                              ATerm i_3 (ATerm t)
                              {
                                t = Build_1(t, _id);
                                return(t);
                              }
                              t = Seq_2(t, _id, i_3);
                              return(t);
                            }
                            t = Seq_2(t, g_3, h_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, f_3);
                          LocalPopChoice(t_17);
                        }
                      else
                        {
                          t = s_17;
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
  t = try_1(t, b_3);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm h_69 = NULL;
  h_69 = t;
  {
    ATerm u_17;
    u_17 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATmakeAppl(sym_Defined_2, term_v_17, not_null(h_69)));
      {
        ATerm j_3 (ATerm t)
        {
          t = term_o_15;
          return(t);
        }
        t = assert_1(t, j_3);
      }
    }
    t = u_17;
    {
      ATerm w_17;
      w_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATmakeAppl(sym_Defined_2, term_x_17, not_null(h_69)));
        {
          ATerm k_3 (ATerm t)
          {
            t = term_y_13;
            return(t);
          }
          t = assert_1(t, k_3);
        }
      }
      t = w_17;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm l_69 = NULL;
  l_69 = t;
  {
    ATerm b_18;
    b_18 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_69)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_18, not_null(l_69)));
      {
        ATerm l_3 (ATerm t)
        {
          t = term_u_16;
          return(t);
        }
        t = assert_1(t, l_3);
      }
    }
    t = b_18;
    {
      ATerm d_18;
      d_18 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_69)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_18, not_null(l_69)));
        {
          ATerm m_3 (ATerm t)
          {
            t = term_t_16;
            return(t);
          }
          t = assert_1(t, m_3);
        }
      }
      t = d_18;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL;
  a_70 = t;
  r_69 :
  if(match_cons(a_70, sym_Call_2))
    {
      b_70 = ATgetArgument(a_70, 0);
      l_70 = ATgetArgument(a_70, 1);
      s_69 :
      if(match_cons(b_70, sym_SVar_1))
        {
          c_70 = ATgetArgument(b_70, 0);
          x_69 :
          if(match_string(c_70, "innermost_1"))
            {
              y_69 :
              if(((ATgetType(l_70) == AT_LIST) && ((ATermList) l_70 != ATempty)))
                {
                  m_70 = ATgetFirst((ATermList) l_70);
                  n_70 = (ATerm) ATgetNext((ATermList) l_70);
                  z_69 :
                  if(((ATermList) n_70 == ATempty))
                    {
                      {
                        ATerm p_70 = NULL,r_70 = NULL;
                        ATerm n_3 (ATerm t)
                        {
                          ATerm o_3 (ATerm t)
                          {
                            t = term_f_18;
                            return(t);
                          }
                          t = say_1(t, o_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, n_3);
                        {
                          ATerm g_18;
                          g_18 = t;
                          {
                            ATerm q_70 = NULL;
                            t = new_0(t);
                            {
                              q_70 = t;
                              if(((p_70 != NULL) && (p_70 != q_70)))
                                _fail(q_70);
                              else
                                p_70 = q_70;
                            }
                          }
                          t = g_18;
                          {
                            ATerm h_18;
                            h_18 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_s_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_70)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = h_18;
                            {
                              ATerm i_18;
                              i_18 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_s_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_70)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = i_18;
                              {
                                ATerm s_70 = NULL;
                                t = not_null(m_70);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    s_70 = t;
                                    if(((r_70 != NULL) && (r_70 != s_70)))
                                      _fail(s_70);
                                    else
                                      r_70 = s_70;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(p_70), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_18, not_null(r_70)), (ATerm) ATmakeAppl(sym_Call_2, term_s_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_70)), (ATerm) ATempty)))), term_h_11))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm p_3 (ATerm t)
                                        {
                                          ATerm n_18 = t;
                                          int o_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(o_18);
                                            }
                                          else
                                            {
                                              t = n_18;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, p_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm q_3 (ATerm t)
                                            {
                                              ATerm r_3 (ATerm t)
                                              {
                                                t = term_s_18;
                                                return(t);
                                              }
                                              t = say_1(t, r_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, q_3);
                                          }
                                        }
                                      }
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
ATerm alltd_1 (ATerm t, ATerm a_115 (ATerm))
{
  ATerm w_70 (ATerm t)
  {
    ATerm t_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_115(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = t_18;
        t = _all(t, w_70);
      }
    return(t);
  }
  t = w_70(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm m_71 = NULL;
  ATerm y_18;
  y_18 = t;
  {
    ATerm n_71 = NULL;
    t = new_0(t);
    {
      n_71 = t;
      {
        if(((m_71 != NULL) && (m_71 != n_71)))
          _fail(n_71);
        else
          m_71 = n_71;
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_s_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_71)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm t_3 (ATerm t)
                  {
                    t = term_b_19;
                    return(t);
                  }
                  t = say_1(t, t_3);
                  return(t);
                }
                t = if_verbose2_1(t, s_3);
                _fail(t);
              }
            }
          {
            ATerm c_19 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
                o_71 = t;
                z_70 :
                if(match_cons(o_71, sym_Seq_2))
                  {
                    p_71 = ATgetArgument(o_71, 0);
                    z_71 = ATgetArgument(o_71, 1);
                    a_71 :
                    if(match_cons(p_71, sym_All_1))
                      {
                        q_71 = ATgetArgument(p_71, 0);
                        b_71 :
                        if(match_cons(q_71, sym_Call_2))
                          {
                            r_71 = ATgetArgument(q_71, 0);
                            t_71 = ATgetArgument(q_71, 1);
                            c_71 :
                            if(match_cons(r_71, sym_SVar_1))
                              {
                                s_71 = ATgetArgument(r_71, 0);
                                d_71 :
                                if(match_string(s_71, "bottomup_1"))
                                  {
                                    e_71 :
                                    if(((ATgetType(t_71) == AT_LIST) && ((ATermList) t_71 != ATempty)))
                                      {
                                        u_71 = ATgetFirst((ATermList) t_71);
                                        y_71 = (ATerm) ATgetNext((ATermList) t_71);
                                        f_71 :
                                        if(match_cons(u_71, sym_Call_2))
                                          {
                                            v_71 = ATgetArgument(u_71, 0);
                                            x_71 = ATgetArgument(u_71, 1);
                                            g_71 :
                                            if(match_cons(v_71, sym_SVar_1))
                                              {
                                                w_71 = ATgetArgument(v_71, 0);
                                                h_71 :
                                                if(((ATermList) x_71 == ATempty))
                                                  {
                                                    i_71 :
                                                    if(((ATermList) y_71 == ATempty))
                                                      {
                                                        j_71 :
                                                        if(match_cons(z_71, sym_Call_2))
                                                          {
                                                            a_72 = ATgetArgument(z_71, 0);
                                                            c_72 = ATgetArgument(z_71, 1);
                                                            k_71 :
                                                            if(match_cons(a_72, sym_SVar_1))
                                                              {
                                                                b_72 = ATgetArgument(a_72, 0);
                                                                l_71 :
                                                                if(((ATermList) c_72 == ATempty))
                                                                  {
                                                                    {
                                                                      if(((m_71 != NULL) && (m_71 != w_71)))
                                                                        _fail(w_71);
                                                                      else
                                                                        m_71 = w_71;
                                                                      if(((m_71 != NULL) && (m_71 != b_72)))
                                                                        _fail(b_72);
                                                                      else
                                                                        m_71 = b_72;
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(d_19);
              }
            else
              {
                t = c_19;
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm v_3 (ATerm t)
                    {
                      t = term_e_19;
                      return(t);
                    }
                    t = debug_1(t, v_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, u_3);
                  _fail(t);
                }
              }
            {
              ATerm w_3 (ATerm t)
              {
                ATerm x_3 (ATerm t)
                {
                  t = term_f_19;
                  return(t);
                }
                t = say_1(t, x_3);
                return(t);
              }
              t = if_verbose2_1(t, w_3);
            }
          }
        }
      }
    }
  }
  t = y_18;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL;
  ATerm g_19;
  g_19 = t;
  {
    ATerm n_73 = NULL;
    t = new_0(t);
    {
      n_73 = t;
      {
        if(((l_73 != NULL) && (l_73 != n_73)))
          _fail(n_73);
        else
          l_73 = n_73;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_73)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm z_3 (ATerm t)
                  {
                    t = term_p_19;
                    return(t);
                  }
                  t = say_1(t, z_3);
                  return(t);
                }
                t = if_verbose2_1(t, y_3);
                _fail(t);
              }
            }
          {
            ATerm t_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
                o_73 = t;
                h_72 :
                if(match_cons(o_73, sym_Call_2))
                  {
                    t_73 = ATgetArgument(o_73, 0);
                    v_73 = ATgetArgument(o_73, 1);
                    i_72 :
                    if(match_cons(t_73, sym_SVar_1))
                      {
                        u_73 = ATgetArgument(t_73, 0);
                        j_72 :
                        if(match_string(u_73, "bottomup_1"))
                          {
                            k_72 :
                            if(((ATgetType(v_73) == AT_LIST) && ((ATermList) v_73 != ATempty)))
                              {
                                w_73 = ATgetFirst((ATermList) v_73);
                                a_75 = (ATerm) ATgetNext((ATermList) v_73);
                                l_72 :
                                if(match_cons(w_73, sym_Rec_2))
                                  {
                                    x_73 = ATgetArgument(w_73, 0);
                                    y_73 = ATgetArgument(w_73, 1);
                                    m_72 :
                                    if(match_cons(y_73, sym_Call_2))
                                      {
                                        z_73 = ATgetArgument(y_73, 0);
                                        b_74 = ATgetArgument(y_73, 1);
                                        n_72 :
                                        if(match_cons(z_73, sym_SVar_1))
                                          {
                                            a_74 = ATgetArgument(z_73, 0);
                                            o_72 :
                                            if(match_string(a_74, "try_1"))
                                              {
                                                p_72 :
                                                if(((ATgetType(b_74) == AT_LIST) && ((ATermList) b_74 != ATempty)))
                                                  {
                                                    c_74 = ATgetFirst((ATermList) b_74);
                                                    z_74 = (ATerm) ATgetNext((ATermList) b_74);
                                                    q_72 :
                                                    if(match_cons(c_74, sym_Seq_2))
                                                      {
                                                        d_74 = ATgetArgument(c_74, 0);
                                                        h_74 = ATgetArgument(c_74, 1);
                                                        r_72 :
                                                        if(match_cons(d_74, sym_Call_2))
                                                          {
                                                            e_74 = ATgetArgument(d_74, 0);
                                                            g_74 = ATgetArgument(d_74, 1);
                                                            w_72 :
                                                            if(match_cons(e_74, sym_SVar_1))
                                                              {
                                                                f_74 = ATgetArgument(e_74, 0);
                                                                x_72 :
                                                                if(((ATermList) g_74 == ATempty))
                                                                  {
                                                                    y_72 :
                                                                    if(match_cons(h_74, sym_Call_2))
                                                                      {
                                                                        i_74 = ATgetArgument(h_74, 0);
                                                                        k_74 = ATgetArgument(h_74, 1);
                                                                        z_72 :
                                                                        if(match_cons(i_74, sym_SVar_1))
                                                                          {
                                                                            j_74 = ATgetArgument(i_74, 0);
                                                                            a_73 :
                                                                            if(match_string(j_74, "bottomup_1"))
                                                                              {
                                                                                b_73 :
                                                                                if(((ATgetType(k_74) == AT_LIST) && ((ATermList) k_74 != ATempty)))
                                                                                  {
                                                                                    l_74 = ATgetFirst((ATermList) k_74);
                                                                                    y_74 = (ATerm) ATgetNext((ATermList) k_74);
                                                                                    c_73 :
                                                                                    if(match_cons(l_74, sym_Call_2))
                                                                                      {
                                                                                        m_74 = ATgetArgument(l_74, 0);
                                                                                        x_74 = ATgetArgument(l_74, 1);
                                                                                        d_73 :
                                                                                        if(match_cons(m_74, sym_SVar_1))
                                                                                          {
                                                                                            n_74 = ATgetArgument(m_74, 0);
                                                                                            e_73 :
                                                                                            if(((ATermList) x_74 == ATempty))
                                                                                              {
                                                                                                f_73 :
                                                                                                if(((ATermList) y_74 == ATempty))
                                                                                                  {
                                                                                                    g_73 :
                                                                                                    if(((ATermList) z_74 == ATempty))
                                                                                                      {
                                                                                                        k_73 :
                                                                                                        if(((ATermList) a_75 == ATempty))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((m_73 != NULL) && (m_73 != x_73)))
                                                                                                                _fail(x_73);
                                                                                                              else
                                                                                                                m_73 = x_73;
                                                                                                              {
                                                                                                                if(((l_73 != NULL) && (l_73 != f_74)))
                                                                                                                  _fail(f_74);
                                                                                                                else
                                                                                                                  l_73 = f_74;
                                                                                                                if(((m_73 != NULL) && (m_73 != n_74)))
                                                                                                                  _fail(n_74);
                                                                                                                else
                                                                                                                  m_73 = n_74;
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
                LocalPopChoice(v_19);
              }
            else
              {
                t = t_19;
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm b_4 (ATerm t)
                    {
                      t = term_y_19;
                      return(t);
                    }
                    t = debug_1(t, b_4);
                    return(t);
                  }
                  t = if_verbose1_1(t, a_4);
                  _fail(t);
                }
              }
            {
              ATerm c_4 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  t = term_z_19;
                  return(t);
                }
                t = say_1(t, d_4);
                return(t);
              }
              t = if_verbose2_1(t, c_4);
            }
          }
        }
      }
    }
  }
  t = g_19;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm h_75 = NULL,y_75 = NULL,l_77 = NULL,o_77 = NULL;
  h_75 = t;
  e_75 :
  if(match_cons(h_75, sym_Call_2))
    {
      y_75 = ATgetArgument(h_75, 0);
      o_77 = ATgetArgument(h_75, 1);
      f_75 :
      if(match_cons(y_75, sym_SVar_1))
        {
          l_77 = ATgetArgument(y_75, 0);
          g_75 :
          if(((ATermList) o_77 == ATempty))
            {
              t = not_null(l_77);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm u_77 = NULL;
  ATerm w_77 = NULL,x_77 = NULL;
  u_77 = t;
  {
    ATerm y_77 = NULL;
    t = not_null(u_77);
    {
      ATerm z_77 = NULL;
      t = c_94(t);
      {
        y_77 = t;
        {
          if(((w_77 != NULL) && (w_77 != y_77)))
            _fail(y_77);
          else
            w_77 = y_77;
          {
            t = d_94(t);
            {
              z_77 = t;
              if(((x_77 != NULL) && (x_77 != z_77)))
                _fail(z_77);
              else
                x_77 = z_77;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_77), not_null(x_77));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
  h_78 = t;
  g_78 :
  if(match_cons(h_78, sym__2))
    {
      i_78 = ATgetArgument(h_78, 0);
      j_78 = ATgetArgument(h_78, 1);
      {
        ATerm m_78 = NULL;
        if(((m_78 != NULL) && (m_78 != j_78)))
          _fail(j_78);
        else
          m_78 = j_78;
      }
    }
  else
    {
      if(match_cons(h_78, sym__3))
        {
          i_78 = ATgetArgument(h_78, 0);
          j_78 = ATgetArgument(h_78, 1);
          k_78 = ATgetArgument(h_78, 2);
          {
            ATerm s_78 = NULL;
            ATerm t_78 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_78), not_null(j_78));
            {
              t = zip_1(t, _id);
              {
                t_78 = t;
                if(((s_78 != NULL) && (s_78 != t_78)))
                  _fail(t_78);
                else
                  s_78 = t_78;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_78), not_null(k_78));
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
  ATerm z_78 = NULL,c_79 = NULL,d_79 = NULL;
  t = subs_args_0(t);
  {
    z_78 = t;
    y_78 :
    if(match_cons(z_78, sym__2))
      {
        c_79 = ATgetArgument(z_78, 0);
        d_79 = ATgetArgument(z_78, 1);
        {
          t = not_null(d_79);
          {
            ATerm e_4 (ATerm t)
            {
              ATerm f_4 (ATerm t)
              {
                t = not_null(c_79);
                return(t);
              }
              t = SubsVar_2(t, e_94, f_4);
              t = f_94(t);
              return(t);
            }
            t = alltd_1(t, e_4);
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
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        t = split_2(t, _id, f_91);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
            n_79 = t;
            i_79 :
            if(match_cons(n_79, sym__2))
              {
                o_79 = ATgetArgument(n_79, 0);
                s_79 = ATgetArgument(n_79, 1);
                j_79 :
                if(match_cons(o_79, sym_SDef_3))
                  {
                    p_79 = ATgetArgument(o_79, 0);
                    q_79 = ATgetArgument(o_79, 1);
                    r_79 = ATgetArgument(o_79, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_79), not_null(q_79), not_null(r_79));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, h_4);
        }
        return(t);
      }
      t = Let_2(t, g_4, _id);
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              t = split_2(t, _id, f_91);
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
                  w_79 = t;
                  l_79 :
                  if(match_cons(w_79, sym__2))
                    {
                      x_79 = ATgetArgument(w_79, 0);
                      a_80 = ATgetArgument(w_79, 1);
                      m_79 :
                      if(match_cons(x_79, sym_VarDec_2))
                        {
                          y_79 = ATgetArgument(x_79, 0);
                          z_79 = ATgetArgument(x_79, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_80), not_null(z_79));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, j_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, i_4, _id);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm k_4 (ATerm t)
              {
                t = f_91(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, k_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
  m_80 = t;
  l_80 :
  if(match_cons(m_80, sym_Rec_2))
    {
      n_80 = ATgetArgument(m_80, 0);
      o_80 = ATgetArgument(m_80, 1);
      {
        ATerm s_80 = NULL,u_80 = NULL;
        ATerm t_80 = NULL;
        t = SSLgetAnnotations(not_null(m_80));
        {
          t_80 = t;
          if(((s_80 != NULL) && (s_80 != t_80)))
            _fail(t_80);
          else
            s_80 = t_80;
        }
        {
          t = not_null(n_80);
          {
            ATerm w_80 = NULL;
            t = c_88(t);
            {
              u_80 = t;
              {
                t = not_null(o_80);
                {
                  ATerm y_80 = NULL;
                  t = d_88(t);
                  {
                    w_80 = t;
                    {
                      ATerm z_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_80), not_null(w_80)), not_null(s_80));
                      {
                        z_80 = t;
                        if(((y_80 != NULL) && (y_80 != z_80)))
                          _fail(z_80);
                        else
                          y_80 = z_80;
                      }
                      t = not_null(y_80);
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
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym_SDef_3))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      p_81 = ATgetArgument(m_81, 2);
      {
        ATerm u_81 = NULL,w_81 = NULL;
        ATerm v_81 = NULL;
        t = SSLgetAnnotations(not_null(m_81));
        {
          v_81 = t;
          if(((u_81 != NULL) && (u_81 != v_81)))
            _fail(v_81);
          else
            u_81 = v_81;
        }
        {
          t = not_null(n_81);
          {
            ATerm y_81 = NULL;
            t = g_88(t);
            {
              w_81 = t;
              {
                t = not_null(o_81);
                {
                  ATerm a_82 = NULL;
                  t = h_88(t);
                  {
                    y_81 = t;
                    {
                      t = not_null(p_81);
                      {
                        ATerm c_82 = NULL;
                        t = i_88(t);
                        {
                          a_82 = t;
                          {
                            ATerm d_82 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(w_81), not_null(y_81), not_null(a_82)), not_null(u_81));
                            {
                              d_82 = t;
                              if(((c_82 != NULL) && (c_82 != d_82)))
                                _fail(d_82);
                              else
                                c_82 = d_82;
                            }
                            t = not_null(c_82);
                          }
                        }
                      }
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
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
  q_82 = t;
  p_82 :
  if(match_cons(q_82, sym_Let_2))
    {
      r_82 = ATgetArgument(q_82, 0);
      s_82 = ATgetArgument(q_82, 1);
      {
        ATerm w_82 = NULL,y_82 = NULL;
        ATerm x_82 = NULL;
        t = SSLgetAnnotations(not_null(q_82));
        {
          x_82 = t;
          if(((w_82 != NULL) && (w_82 != x_82)))
            _fail(x_82);
          else
            w_82 = x_82;
        }
        {
          t = not_null(r_82);
          {
            ATerm a_83 = NULL;
            t = e_88(t);
            {
              y_82 = t;
              {
                t = not_null(s_82);
                {
                  ATerm c_83 = NULL;
                  t = f_88(t);
                  {
                    a_83 = t;
                    {
                      ATerm d_83 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(y_82), not_null(a_83)), not_null(w_82));
                      {
                        d_83 = t;
                        if(((c_83 != NULL) && (c_83 != d_83)))
                          _fail(d_83);
                        else
                          c_83 = d_83;
                      }
                      t = not_null(c_83);
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
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, g_91, g_91);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, i_91, i_91, g_91);
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = Rec_2(t, i_91, g_91);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym_Rec_2))
    {
      m_83 = ATgetArgument(l_83, 0);
      n_83 = ATgetArgument(l_83, 1);
      t = (ATerm) ATinsert(ATempty, not_null(m_83));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  v_83 = t;
  u_83 :
  if(match_cons(v_83, sym_SDef_3))
    {
      w_83 = ATgetArgument(v_83, 0);
      x_83 = ATgetArgument(v_83, 1);
      y_83 = ATgetArgument(v_83, 2);
      {
        t = not_null(x_83);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL;
            c_84 = t;
            t_83 :
            if(match_cons(c_84, sym_VarDec_2))
              {
                d_84 = ATgetArgument(c_84, 0);
                e_84 = ATgetArgument(c_84, 1);
                t = not_null(d_84);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_4);
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
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
  m_84 = t;
  l_84 :
  if(match_cons(m_84, sym_Let_2))
    {
      n_84 = ATgetArgument(m_84, 0);
      o_84 = ATgetArgument(m_84, 1);
      {
        t = not_null(n_84);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL;
            r_84 = t;
            k_84 :
            if(match_cons(r_84, sym_SDef_3))
              {
                s_84 = ATgetArgument(r_84, 0);
                t_84 = ATgetArgument(r_84, 1);
                u_84 = ATgetArgument(r_84, 2);
                t = not_null(s_84);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, m_4);
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
  ATerm k_85 = NULL,l_85 = NULL;
  k_85 = t;
  e_85 :
  if(match_cons(k_85, sym_SVar_1))
    {
      l_85 = ATgetArgument(k_85, 0);
      {
        ATerm q_85 = NULL,s_85 = NULL;
        ATerm r_85 = NULL;
        t = SSLgetAnnotations(not_null(k_85));
        {
          r_85 = t;
          if(((q_85 != NULL) && (q_85 != r_85)))
            _fail(r_85);
          else
            q_85 = r_85;
        }
        {
          t = not_null(l_85);
          {
            ATerm u_85 = NULL;
            t = b_88(t);
            {
              s_85 = t;
              {
                ATerm v_85 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(s_85)), not_null(q_85));
                {
                  v_85 = t;
                  if(((u_85 != NULL) && (u_85 != v_85)))
                    _fail(v_85);
                  else
                    u_85 = v_85;
                }
                t = not_null(u_85);
              }
            }
          }
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
  ATerm n_4 (ATerm t)
  {
    ATerm i_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = i_20;
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, n_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = Scope_2(t, b_91, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm f_86 = NULL,g_86 = NULL;
  f_86 = t;
  e_86 :
  if(match_cons(f_86, sym_DynamicRules_1))
    {
      g_86 = ATgetArgument(f_86, 0);
      {
        ATerm k_86 = NULL,m_86 = NULL;
        ATerm l_86 = NULL;
        t = SSLgetAnnotations(not_null(f_86));
        {
          l_86 = t;
          if(((k_86 != NULL) && (k_86 != l_86)))
            _fail(l_86);
          else
            k_86 = l_86;
        }
        {
          t = not_null(g_86);
          {
            ATerm o_86 = NULL;
            t = j_86(t);
            {
              m_86 = t;
              {
                ATerm p_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(m_86)), not_null(k_86));
                {
                  p_86 = t;
                  if(((o_86 != NULL) && (o_86 != p_86)))
                    _fail(p_86);
                  else
                    o_86 = p_86;
                }
                t = not_null(o_86);
              }
            }
          }
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
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
  d_87 = t;
  c_87 :
  if(match_cons(d_87, sym_Scope_2))
    {
      e_87 = ATgetArgument(d_87, 0);
      f_87 = ATgetArgument(d_87, 1);
      {
        ATerm l_87 = NULL,t_87 = NULL;
        ATerm m_87 = NULL;
        t = SSLgetAnnotations(not_null(d_87));
        {
          m_87 = t;
          if(((l_87 != NULL) && (l_87 != m_87)))
            _fail(m_87);
          else
            l_87 = m_87;
        }
        {
          t = not_null(e_87);
          {
            ATerm v_87 = NULL;
            t = g_89(t);
            {
              t_87 = t;
              {
                t = not_null(f_87);
                {
                  ATerm x_87 = NULL;
                  t = h_89(t);
                  {
                    v_87 = t;
                    {
                      ATerm y_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(t_87), not_null(v_87)), not_null(l_87));
                      {
                        y_87 = t;
                        if(((x_87 != NULL) && (x_87 != y_87)))
                          _fail(y_87);
                        else
                          x_87 = y_87;
                      }
                      t = not_null(x_87);
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
  ATerm q_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, e_91, c_91);
      LocalPopChoice(u_20);
    }
  else
    {
      t = q_20;
      t = DynamicRules_1(t, c_91);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL;
  o_88 = t;
  n_88 :
  if(match_cons(o_88, sym_DynamicRules_1))
    {
      p_88 = ATgetArgument(o_88, 0);
      {
        t = not_null(p_88);
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
  ATerm u_88 = NULL,v_88 = NULL;
  u_88 = t;
  t_88 :
  if(match_cons(u_88, sym_Var_1))
    {
      v_88 = ATgetArgument(u_88, 0);
      t = (ATerm) ATinsert(ATempty, not_null(v_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL,e_89 = NULL;
  a_89 = t;
  z_88 :
  if(match_cons(a_89, sym__2))
    {
      b_89 = ATgetArgument(a_89, 0);
      e_89 = ATgetArgument(a_89, 1);
      {
        t = not_null(b_89);
        {
          ATerm o_89 (ATerm t)
          {
            ATerm w_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_89);
                LocalPopChoice(z_20);
              }
            else
              {
                t = w_20;
                {
                  ATerm a_21 = t;
                  int b_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_4 (ATerm t)
                      {
                        t = not_null(e_89);
                        return(t);
                      }
                      t = HdMember_1(t, o_4);
                      t = o_89(t);
                      LocalPopChoice(b_21);
                    }
                  else
                    {
                      t = a_21;
                      t = Cons_2(t, _id, o_89);
                    }
                }
              }
            return(t);
          }
          t = o_89(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm))
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_104(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
        t_89 = t;
        s_89 :
        if(((ATgetType(t_89) == AT_LIST) && ((ATermList) t_89 != ATempty)))
          {
            u_89 = ATgetFirst((ATermList) t_89);
            v_89 = (ATerm) ATgetNext((ATermList) t_89);
            {
              ATerm y_89 = NULL,a_90 = NULL;
              ATerm e_21;
              e_21 = t;
              {
                ATerm z_89 = NULL;
                t = not_null(u_89);
                {
                  t = q_104(t);
                  {
                    z_89 = t;
                    if(((y_89 != NULL) && (y_89 != z_89)))
                      _fail(z_89);
                    else
                      y_89 = z_89;
                  }
                }
              }
              t = e_21;
              {
                ATerm b_90 = NULL;
                t = not_null(v_89);
                {
                  t = foldr_3(t, o_104, p_104, q_104);
                  {
                    b_90 = t;
                    if(((a_90 != NULL) && (a_90 != b_90)))
                      _fail(b_90);
                    else
                      a_90 = b_90;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_89), not_null(a_90));
                  t = p_104(t);
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
ATerm crush_3 (ATerm t, ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm))
{
  ATerm l_90 = NULL;
  ATerm n_90 = NULL;
  l_90 = t;
  {
    ATerm o_90 = NULL;
    ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL;
    t = not_null(l_90);
    {
      o_90 = t;
      {
        t = SSL_explode_term(not_null(o_90));
        {
          q_90 = t;
          i_90 :
          if(match_cons(q_90, sym__2))
            {
              r_90 = ATgetArgument(q_90, 0);
              s_90 = ATgetArgument(q_90, 1);
              if(((n_90 != NULL) && (n_90 != s_90)))
                _fail(s_90);
              else
                n_90 = s_90;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_90);
      t = foldr_3(t, c_106, d_106, e_106);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
  z_90 = t;
  x_90 :
  if(match_cons(z_90, sym__2))
    {
      a_91 = ATgetArgument(z_90, 0);
      j_91 = ATgetArgument(z_90, 1);
      y_90 :
      if(((ATgetType(j_91) == AT_LIST) && ((ATermList) j_91 != ATempty)))
        {
          k_91 = ATgetFirst((ATermList) j_91);
          l_91 = (ATerm) ATgetNext((ATermList) j_91);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_91)), not_null(k_91)), not_null(l_91));
        }
      else
        {
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
  ATerm a_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,k_92 = NULL;
  a_92 = t;
  y_91 :
  if(((ATgetType(a_92) == AT_LIST) && ((ATermList) a_92 != ATempty)))
    {
      d_92 = ATgetFirst((ATermList) a_92);
      k_92 = (ATerm) ATgetNext((ATermList) a_92);
      z_91 :
      if(match_cons(d_92, sym__2))
        {
          e_92 = ATgetArgument(d_92, 0);
          f_92 = ATgetArgument(d_92, 1);
          {
            ATerm o_92 = NULL,p_92 = NULL,v_92 = NULL,b_93 = NULL;
            ATerm f_21;
            f_21 = t;
            {
              ATerm q_92 = NULL;
              ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL;
              t = not_null(f_92);
              {
                q_92 = t;
                {
                  t = SSL_explode_term(not_null(q_92));
                  {
                    s_92 = t;
                    t_91 :
                    if(match_cons(s_92, sym__2))
                      {
                        t_92 = ATgetArgument(s_92, 0);
                        u_92 = ATgetArgument(s_92, 1);
                        {
                          if(((o_92 != NULL) && (o_92 != t_92)))
                            _fail(t_92);
                          else
                            o_92 = t_92;
                          if(((p_92 != NULL) && (p_92 != u_92)))
                            _fail(u_92);
                          else
                            p_92 = u_92;
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
            t = f_21;
            {
              ATerm g_21;
              g_21 = t;
              {
                ATerm w_92 = NULL;
                ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL;
                t = not_null(e_92);
                {
                  w_92 = t;
                  {
                    t = SSL_explode_term(not_null(w_92));
                    {
                      y_92 = t;
                      w_91 :
                      if(match_cons(y_92, sym__2))
                        {
                          z_92 = ATgetArgument(y_92, 0);
                          a_93 = ATgetArgument(y_92, 1);
                          {
                            if(((o_92 != NULL) && (o_92 != z_92)))
                              _fail(z_92);
                            else
                              o_92 = z_92;
                            if(((v_92 != NULL) && (v_92 != a_93)))
                              _fail(a_93);
                            else
                              v_92 = a_93;
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
              t = g_21;
              {
                ATerm c_93 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_92), not_null(p_92));
                {
                  t = zip_1(t, _id);
                  {
                    c_93 = t;
                    if(((b_93 != NULL) && (b_93 != c_93)))
                      _fail(c_93);
                    else
                      b_93 = c_93;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_93), not_null(k_92));
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
  ATerm n_93 = NULL,o_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  n_93 = t;
  l_93 :
  if(((ATgetType(n_93) == AT_LIST) && ((ATermList) n_93 != ATempty)))
    {
      o_93 = ATgetFirst((ATermList) n_93);
      t_93 = (ATerm) ATgetNext((ATermList) n_93);
      m_93 :
      if(match_cons(o_93, sym__2))
        {
          r_93 = ATgetArgument(o_93, 0);
          s_93 = ATgetArgument(o_93, 1);
          {
            ATerm h_94 = NULL;
            if(((r_93 != NULL) && (r_93 != s_93)))
              _fail(s_93);
            else
              r_93 = s_93;
            {
              if(((h_94 != NULL) && (h_94 != t_93)))
                _fail(t_93);
              else
                h_94 = t_93;
              t = not_null(h_94);
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
ATerm while_not_2 (ATerm t, ATerm m_103 (ATerm), ATerm n_103 (ATerm))
{
  ATerm j_94 (ATerm t)
  {
    ATerm h_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_103(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = h_21;
        {
          t = n_103(t);
          t = j_94(t);
        }
      }
    return(t);
  }
  t = j_94(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm))
{
  t = p_103(t);
  t = while_not_2(t, q_103, r_103);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm r_105 (ATerm))
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
  n_94 = t;
  m_94 :
  if(((ATgetType(n_94) == AT_LIST) && ((ATermList) n_94 != ATempty)))
    {
      o_94 = ATgetFirst((ATermList) n_94);
      p_94 = (ATerm) ATgetNext((ATermList) n_94);
      {
        t = r_105(t);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm s_94 = NULL;
            s_94 = t;
            if(((o_94 != NULL) && (o_94 != s_94)))
              _fail(s_94);
            else
              o_94 = s_94;
            return(t);
          }
          t = fetch_1(t, p_4);
        }
        t = not_null(p_94);
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
  ATerm l_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
      y_94 = t;
      w_94 :
      if(match_cons(y_94, sym__2))
        {
          z_94 = ATgetArgument(y_94, 0);
          a_95 = ATgetArgument(y_94, 1);
          {
            t = not_null(z_94);
            {
              ATerm g_95 (ATerm t)
              {
                ATerm s_21 = t;
                int z_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(z_21);
                  }
                else
                  {
                    t = s_21;
                    {
                      ATerm i_22 = t;
                      int j_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_4 (ATerm t)
                          {
                            t = not_null(a_95);
                            return(t);
                          }
                          t = HdMember_1(t, q_4);
                          t = g_95(t);
                          LocalPopChoice(j_22);
                        }
                      else
                        {
                          t = i_22;
                          t = Cons_2(t, _id, g_95);
                        }
                    }
                  }
                return(t);
              }
              t = g_95(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_21);
    }
  else
    {
      t = l_21;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm d_95 = NULL;
          d_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(d_95));
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 (ATerm t)
              {
                ATerm m_22 = t;
                int n_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(n_22);
                  }
                else
                  {
                    t = m_22;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, u_4);
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, r_4, s_4, t_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_95 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_92(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm q_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_95 = NULL;
              ATerm s_22;
              s_22 = t;
              {
                ATerm k_95 = NULL;
                t = h_92(t);
                {
                  k_95 = t;
                  if(((j_95 != NULL) && (j_95 != k_95)))
                    _fail(k_95);
                  else
                    j_95 = k_95;
                }
              }
              t = s_22;
              {
                ATerm v_4 (ATerm t)
                {
                  ATerm x_4 (ATerm t)
                  {
                    t = not_null(j_95);
                    return(t);
                  }
                  t = split_2(t, l_95, x_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_92(t, v_4, l_95, w_4);
                {
                  ATerm y_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, y_4, union_0, _id);
                }
              }
              LocalPopChoice(r_22);
            }
          else
            {
              t = q_22;
              {
                ATerm z_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, z_4, union_0, l_95);
              }
            }
        }
      }
    return(t);
  }
  t = l_95(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_5, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,c_96 = NULL;
  u_95 = t;
  p_95 :
  if(match_cons(u_95, sym_LRule_1))
    {
      v_95 = ATgetArgument(u_95, 0);
      q_95 :
      if(match_cons(v_95, sym_Rule_3))
        {
          r_95 = ATgetArgument(v_95, 0);
          s_95 = ATgetArgument(v_95, 1);
          t_95 = ATgetArgument(v_95, 2);
          {
            t = not_null(r_95);
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
      if(match_cons(u_95, sym_Scope_2))
        {
          v_95 = ATgetArgument(u_95, 0);
          c_96 = ATgetArgument(u_95, 1);
          t = not_null(v_95);
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
  ATerm t_96 = NULL,u_96 = NULL;
  t_96 = t;
  s_96 :
  if(match_cons(t_96, sym_Var_1))
    {
      u_96 = ATgetArgument(t_96, 0);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_96 = NULL,a_97 = NULL;
            ATerm z_96 = NULL;
            t = SSLgetAnnotations(not_null(t_96));
            {
              z_96 = t;
              if(((y_96 != NULL) && (y_96 != z_96)))
                _fail(z_96);
              else
                y_96 = z_96;
            }
            {
              t = not_null(u_96);
              {
                ATerm c_97 = NULL;
                t = w_0(t);
                {
                  a_97 = t;
                  {
                    ATerm d_97 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_97)), not_null(y_96));
                    {
                      d_97 = t;
                      if(((c_97 != NULL) && (c_97 != d_97)))
                        _fail(d_97);
                      else
                        c_97 = d_97;
                    }
                    t = not_null(c_97);
                  }
                }
              }
            }
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm g_97 = NULL,i_97 = NULL;
              ATerm h_97 = NULL;
              t = SSLgetAnnotations(not_null(t_96));
              {
                h_97 = t;
                if(((g_97 != NULL) && (g_97 != h_97)))
                  _fail(h_97);
                else
                  g_97 = h_97;
              }
              {
                t = not_null(u_96);
                {
                  ATerm k_97 = NULL;
                  t = w_0(t);
                  {
                    i_97 = t;
                    {
                      ATerm m_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_97)), not_null(g_97));
                      {
                        m_97 = t;
                        if(((k_97 != NULL) && (k_97 != m_97)))
                          _fail(m_97);
                        else
                          k_97 = m_97;
                      }
                      t = not_null(k_97);
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
  ATerm j_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  j_98 = t;
  h_98 :
  if(match_cons(j_98, sym__3))
    {
      l_98 = ATgetArgument(j_98, 0);
      m_98 = ATgetArgument(j_98, 1);
      n_98 = ATgetArgument(j_98, 2);
      {
        t = not_null(l_98);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm r_98 = NULL;
            r_98 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_98), not_null(n_98));
              t = p_93(t);
            }
            return(t);
          }
          ATerm c_5 (ATerm t)
          {
            ATerm t_98 = NULL;
            t_98 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_98), not_null(m_98));
              t = p_93(t);
            }
            return(t);
          }
          t = q_93(t, b_5, c_5, _id);
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
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL;
  c_99 = t;
  z_98 :
  if(match_cons(c_99, sym__2))
    {
      d_99 = ATgetArgument(c_99, 0);
      e_99 = ATgetArgument(c_99, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_99)), not_null(d_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL,x_99 = NULL;
  m_99 = t;
  j_99 :
  if(match_cons(m_99, sym__2))
    {
      n_99 = ATgetArgument(m_99, 0);
      q_99 = ATgetArgument(m_99, 1);
      k_99 :
      if(((ATgetType(n_99) == AT_LIST) && ((ATermList) n_99 != ATempty)))
        {
          o_99 = ATgetFirst((ATermList) n_99);
          p_99 = (ATerm) ATgetNext((ATermList) n_99);
          l_99 :
          if(((ATgetType(q_99) == AT_LIST) && ((ATermList) q_99 != ATempty)))
            {
              r_99 = ATgetFirst((ATermList) q_99);
              x_99 = (ATerm) ATgetNext((ATermList) q_99);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_99), not_null(r_99)), (ATerm) ATmakeAppl(sym__2, not_null(p_99), not_null(x_99)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
  i_100 = t;
  f_100 :
  if(match_cons(i_100, sym__2))
    {
      j_100 = ATgetArgument(i_100, 0);
      k_100 = ATgetArgument(i_100, 1);
      g_100 :
      if(((ATermList) j_100 == ATempty))
        {
          h_100 :
          if(((ATermList) k_100 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm))
{
  ATerm m_100 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_108(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          t = i_108(t);
          {
            t = _2(t, k_108, m_100);
            t = j_108(t);
          }
        }
      }
    return(t);
  }
  t = m_100(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_108 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_108);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm v_93 (ATerm), ATerm w_93 (ATerm, ATerm (ATerm)))
{
  ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL;
  u_100 = t;
  t_100 :
  if(match_cons(u_100, sym__2))
    {
      v_100 = ATgetArgument(u_100, 0);
      w_100 = ATgetArgument(u_100, 1);
      {
        ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL,h_101 = NULL;
        ATerm z_22;
        z_22 = t;
        {
          ATerm c_101 = NULL;
          t = not_null(v_100);
          {
            ATerm d_101 = NULL;
            t = v_93(t);
            {
              c_101 = t;
              {
                if(((z_100 != NULL) && (z_100 != c_101)))
                  _fail(c_101);
                else
                  z_100 = c_101;
                {
                  ATerm e_101 = NULL,g_101 = NULL;
                  t = map_1(t, new_0);
                  {
                    d_101 = t;
                    {
                      if(((a_101 != NULL) && (a_101 != d_101)))
                        _fail(d_101);
                      else
                        a_101 = d_101;
                      {
                        ATerm f_101 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_100), not_null(a_101));
                        {
                          t = zip_1(t, _id);
                          {
                            f_101 = t;
                            if(((e_101 != NULL) && (e_101 != f_101)))
                              _fail(f_101);
                            else
                              e_101 = f_101;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_101), not_null(w_100));
                          {
                            t = conc_0(t);
                            {
                              g_101 = t;
                              if(((b_101 != NULL) && (b_101 != g_101)))
                                _fail(g_101);
                              else
                                b_101 = g_101;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_22;
        {
          ATerm i_101 = NULL;
          t = not_null(v_100);
          {
            ATerm d_5 (ATerm t)
            {
              t = not_null(a_101);
              return(t);
            }
            t = w_93(t, d_5);
            {
              i_101 = t;
              if(((h_101 != NULL) && (h_101 != i_101)))
                _fail(i_101);
              else
                h_101 = i_101;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(h_101), not_null(w_100), not_null(b_101));
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
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL;
  v_101 = t;
  t_101 :
  if(match_cons(v_101, sym__2))
    {
      w_101 = ATgetArgument(v_101, 0);
      x_101 = ATgetArgument(v_101, 1);
      u_101 :
      if(((ATgetType(x_101) == AT_LIST) && ((ATermList) x_101 != ATempty)))
        {
          y_101 = ATgetFirst((ATermList) x_101);
          z_101 = (ATerm) ATgetNext((ATermList) x_101);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_101), not_null(z_101));
        }
      else
        {
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
  ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL;
  j_102 = t;
  e_102 :
  if(match_cons(j_102, sym__2))
    {
      k_102 = ATgetArgument(j_102, 0);
      l_102 = ATgetArgument(j_102, 1);
      f_102 :
      if(((ATgetType(l_102) == AT_LIST) && ((ATermList) l_102 != ATempty)))
        {
          m_102 = ATgetFirst((ATermList) l_102);
          p_102 = (ATerm) ATgetNext((ATermList) l_102);
          g_102 :
          if(match_cons(m_102, sym__2))
            {
              n_102 = ATgetArgument(m_102, 0);
              o_102 = ATgetArgument(m_102, 1);
              {
                ATerm r_102 = NULL;
                if(((k_102 != NULL) && (k_102 != n_102)))
                  _fail(n_102);
                else
                  k_102 = n_102;
                {
                  if(((r_102 != NULL) && (r_102 != o_102)))
                    _fail(o_102);
                  else
                    r_102 = o_102;
                  t = not_null(r_102);
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
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm j_93 (ATerm, ATerm (ATerm)))
{
  ATerm a_103 = NULL,b_103 = NULL,c_103 = NULL;
  a_103 = t;
  z_102 :
  if(match_cons(a_103, sym__2))
    {
      b_103 = ATgetArgument(a_103, 0);
      c_103 = ATgetArgument(a_103, 1);
      {
        t = not_null(b_103);
        {
          ATerm e_5 (ATerm t)
          {
            ATerm f_5 (ATerm t)
            {
              t = not_null(c_103);
              return(t);
            }
            t = split_2(t, _id, f_5);
            t = lookup_0(t);
            return(t);
          }
          t = j_93(t, e_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL;
  j_103 = t;
  i_103 :
  if(match_cons(j_103, sym__2))
    {
      k_103 = ATgetArgument(j_103, 0);
      l_103 = ATgetArgument(j_103, 1);
      {
        t = not_null(k_103);
        {
          ATerm g_5 (ATerm t)
          {
            ATerm u_103 = NULL;
            u_103 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_103), not_null(l_103));
              t = l_101(t);
            }
            return(t);
          }
          t = _all(t, g_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm q_101 (ATerm))
{
  ATerm y_103 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_101(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = all_dist_1(t, y_103);
      }
    return(t);
  }
  t = y_103(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm x_93 (ATerm, ATerm (ATerm)), ATerm y_93 (ATerm), ATerm z_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_94 (ATerm, ATerm (ATerm)))
{
  ATerm a_104 = NULL;
  a_104 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_104), (ATerm) ATempty);
    {
      ATerm d_104 (ATerm t)
      {
        ATerm h_5 (ATerm t)
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, x_93);
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              {
                t = RnBinding_2(t, y_93, a_94);
                t = DistBinding_2(t, d_104, z_93);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, h_5);
        return(t);
      }
      t = d_104(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm e_104 (ATerm t, ATerm f_104 (ATerm))
  {
    t = Scope_2(t, f_104, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, e_104);
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
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  h_104 :
  if(((ATgetType(i_104) == AT_LIST) && ((ATermList) i_104 != ATempty)))
    {
      j_104 = ATgetFirst((ATermList) i_104);
      k_104 = (ATerm) ATgetNext((ATermList) i_104);
      t = not_null(j_104);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  v_104 = t;
  u_104 :
  if(match_cons(v_104, sym__2))
    {
      w_104 = ATgetArgument(v_104, 0);
      x_104 = ATgetArgument(v_104, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_104), not_null(x_104));
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
ATerm rewrite_1 (ATerm t, ATerm y_99 (ATerm))
{
  ATerm d_105 = NULL;
  ATerm f_105 = NULL;
  d_105 = t;
  {
    ATerm g_105 = NULL;
    t = term_q_23;
    {
      t = y_99(t);
      {
        g_105 = t;
        if(((f_105 != NULL) && (f_105 != g_105)))
          _fail(g_105);
        else
          f_105 = g_105;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_105), not_null(d_105));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL,f_106 = NULL,g_106 = NULL;
  y_105 = t;
  w_105 :
  if(match_cons(y_105, sym_Call_2))
    {
      z_105 = ATgetArgument(y_105, 0);
      g_106 = ATgetArgument(y_105, 1);
      x_105 :
      if(match_cons(z_105, sym_SVar_1))
        {
          f_106 = ATgetArgument(z_105, 0);
          {
            ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,w_106 = NULL;
            ATerm r_23;
            r_23 = t;
            {
              ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(f_106));
              {
                ATerm i_5 (ATerm t)
                {
                  t = term_s_23;
                  return(t);
                }
                t = rewrite_1(t, i_5);
                {
                  n_106 = t;
                  o_105 :
                  if(match_cons(n_106, sym_Defined_4))
                    {
                      o_106 = ATgetArgument(n_106, 0);
                      p_106 = ATgetArgument(n_106, 1);
                      q_106 = ATgetArgument(n_106, 2);
                      r_106 = ATgetArgument(n_106, 3);
                      p_105 :
                      if(match_string(o_106, "i_0"))
                        {
                          ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL;
                          if(((f_106 != NULL) && (f_106 != p_106)))
                            _fail(p_106);
                          else
                            f_106 = p_106;
                          {
                            if(((j_106 != NULL) && (j_106 != q_106)))
                              _fail(q_106);
                            else
                              j_106 = q_106;
                            {
                              if(((k_106 != NULL) && (k_106 != r_106)))
                                _fail(r_106);
                              else
                                k_106 = r_106;
                              {
                                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_106), not_null(j_106), not_null(k_106));
                                {
                                  t = strename_0(t);
                                  {
                                    s_106 = t;
                                    n_105 :
                                    if(match_cons(s_106, sym_SDef_3))
                                      {
                                        t_106 = ATgetArgument(s_106, 0);
                                        u_106 = ATgetArgument(s_106, 1);
                                        v_106 = ATgetArgument(s_106, 2);
                                        {
                                          if(((f_106 != NULL) && (f_106 != t_106)))
                                            _fail(t_106);
                                          else
                                            f_106 = t_106;
                                          {
                                            if(((l_106 != NULL) && (l_106 != u_106)))
                                              _fail(u_106);
                                            else
                                              l_106 = u_106;
                                            if(((m_106 != NULL) && (m_106 != v_106)))
                                              _fail(v_106);
                                            else
                                              m_106 = v_106;
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
            t = r_23;
            {
              ATerm b_107 = NULL;
              t = not_null(l_106);
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
                  x_106 = t;
                  s_105 :
                  if(match_cons(x_106, sym_VarDec_2))
                    {
                      y_106 = ATgetArgument(x_106, 0);
                      z_106 = ATgetArgument(x_106, 1);
                      t = not_null(y_106);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, j_5);
                {
                  b_107 = t;
                  if(((w_106 != NULL) && (w_106 != b_107)))
                    _fail(b_107);
                  else
                    w_106 = b_107;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_106), not_null(g_106), not_null(m_106));
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
  ATerm o_107 = NULL;
  ATerm t_23;
  t_23 = t;
  {
    ATerm p_107 = NULL;
    t = new_0(t);
    {
      p_107 = t;
      {
        if(((o_107 != NULL) && (o_107 != p_107)))
          _fail(p_107);
        else
          o_107 = p_107;
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_x_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_107)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm l_5 (ATerm t)
                  {
                    t = term_y_23;
                    return(t);
                  }
                  t = say_1(t, l_5);
                  return(t);
                }
                t = if_verbose2_1(t, k_5);
                _fail(t);
              }
            }
          {
            ATerm z_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL;
                q_107 = t;
                j_107 :
                if(match_cons(q_107, sym_LChoice_2))
                  {
                    r_107 = ATgetArgument(q_107, 0);
                    v_107 = ATgetArgument(q_107, 1);
                    k_107 :
                    if(match_cons(r_107, sym_Call_2))
                      {
                        s_107 = ATgetArgument(r_107, 0);
                        u_107 = ATgetArgument(r_107, 1);
                        l_107 :
                        if(match_cons(s_107, sym_SVar_1))
                          {
                            t_107 = ATgetArgument(s_107, 0);
                            m_107 :
                            if(((ATermList) u_107 == ATempty))
                              {
                                n_107 :
                                if(match_cons(v_107, sym_Id_0))
                                  {
                                    if(((o_107 != NULL) && (o_107 != t_107)))
                                      _fail(t_107);
                                    else
                                      o_107 = t_107;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(a_24);
              }
            else
              {
                t = z_23;
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm n_5 (ATerm t)
                    {
                      t = term_b_24;
                      return(t);
                    }
                    t = debug_1(t, n_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, m_5);
                  _fail(t);
                }
              }
            {
              ATerm o_5 (ATerm t)
              {
                ATerm p_5 (ATerm t)
                {
                  t = term_c_24;
                  return(t);
                }
                t = say_1(t, p_5);
                return(t);
              }
              t = if_verbose2_1(t, o_5);
            }
          }
        }
      }
    }
  }
  t = t_23;
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
ATerm assert_1 (ATerm t, ATerm w_99 (ATerm))
{
  ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
  d_108 = t;
  c_108 :
  if(match_cons(d_108, sym__2))
    {
      e_108 = ATgetArgument(d_108, 0);
      f_108 = ATgetArgument(d_108, 1);
      {
        ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL;
        ATerm d_24;
        d_24 = t;
        {
          ATerm s_108 = NULL;
          ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL;
          t = w_99(t);
          {
            s_108 = t;
            {
              if(((o_108 != NULL) && (o_108 != s_108)))
                _fail(s_108);
              else
                o_108 = s_108;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_108), not_null(e_108), not_null(f_108));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_24 = t;
                    int f_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_108), term_z_14);
                        t = table_get_0(t);
                        LocalPopChoice(f_24);
                      }
                    else
                      {
                        t = e_24;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_108 = t;
                      b_108 :
                      if(((ATgetType(t_108) == AT_LIST) && ((ATermList) t_108 != ATempty)))
                        {
                          u_108 = ATgetFirst((ATermList) t_108);
                          v_108 = (ATerm) ATgetNext((ATermList) t_108);
                          {
                            if(((p_108 != NULL) && (p_108 != u_108)))
                              _fail(u_108);
                            else
                              p_108 = u_108;
                            {
                              if(((q_108 != NULL) && (q_108 != v_108)))
                                _fail(v_108);
                              else
                                q_108 = v_108;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_108), term_z_14, (ATerm) ATinsert(CheckATermList(not_null(q_108)), (ATerm) ATinsert(CheckATermList(not_null(p_108)), not_null(e_108))));
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
        t = d_24;
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
  ATerm b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL;
  b_109 = t;
  a_109 :
  if(match_cons(b_109, sym_SDef_3))
    {
      c_109 = ATgetArgument(b_109, 0);
      d_109 = ATgetArgument(b_109, 1);
      e_109 = ATgetArgument(b_109, 2);
      {
        ATerm g_24;
        g_24 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(c_109)), (ATerm) ATmakeAppl(sym_Defined_4, term_h_24, not_null(c_109), not_null(d_109), not_null(e_109)));
          {
            ATerm q_5 (ATerm t)
            {
              t = term_s_23;
              return(t);
            }
            t = assert_1(t, q_5);
          }
        }
        t = g_24;
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
  ATerm o_109 = NULL,p_109 = NULL;
  o_109 = t;
  n_109 :
  if(match_cons(o_109, sym_Strategies_1))
    {
      p_109 = ATgetArgument(o_109, 0);
      {
        ATerm s_109 = NULL,w_109 = NULL;
        ATerm t_109 = NULL;
        t = SSLgetAnnotations(not_null(o_109));
        {
          t_109 = t;
          if(((s_109 != NULL) && (s_109 != t_109)))
            _fail(t_109);
          else
            s_109 = t_109;
        }
        {
          t = not_null(p_109);
          {
            ATerm y_109 = NULL;
            t = t_86(t);
            {
              w_109 = t;
              {
                ATerm z_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_109)), not_null(s_109));
                {
                  z_109 = t;
                  if(((y_109 != NULL) && (y_109 != z_109)))
                    _fail(z_109);
                  else
                    y_109 = z_109;
                }
                t = not_null(y_109);
              }
            }
          }
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
  ATerm n_110 = NULL,o_110 = NULL;
  n_110 = t;
  m_110 :
  if(match_cons(n_110, sym_Signature_1))
    {
      o_110 = ATgetArgument(n_110, 0);
      {
        ATerm r_110 = NULL,t_110 = NULL;
        ATerm s_110 = NULL;
        t = SSLgetAnnotations(not_null(n_110));
        {
          s_110 = t;
          if(((r_110 != NULL) && (r_110 != s_110)))
            _fail(s_110);
          else
            r_110 = s_110;
        }
        {
          t = not_null(o_110);
          {
            ATerm v_110 = NULL;
            t = q_86(t);
            {
              t_110 = t;
              {
                ATerm w_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(t_110)), not_null(r_110));
                {
                  w_110 = t;
                  if(((v_110 != NULL) && (v_110 != w_110)))
                    _fail(w_110);
                  else
                    v_110 = w_110;
                }
                t = not_null(v_110);
              }
            }
          }
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
  ATerm g_111 = NULL,h_111 = NULL;
  g_111 = t;
  f_111 :
  if(match_cons(g_111, sym_Specification_1))
    {
      h_111 = ATgetArgument(g_111, 0);
      {
        ATerm k_111 = NULL,n_111 = NULL;
        ATerm m_111 = NULL;
        t = SSLgetAnnotations(not_null(g_111));
        {
          m_111 = t;
          if(((k_111 != NULL) && (k_111 != m_111)))
            _fail(m_111);
          else
            k_111 = m_111;
        }
        {
          t = not_null(h_111);
          {
            ATerm r_111 = NULL;
            t = v_86(t);
            {
              n_111 = t;
              {
                ATerm s_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(n_111)), not_null(k_111));
                {
                  s_111 = t;
                  if(((r_111 != NULL) && (r_111 != s_111)))
                    _fail(s_111);
                  else
                    r_111 = s_111;
                }
                t = not_null(r_111);
              }
            }
          }
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
  ATerm r_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      ATerm u_5 (ATerm t)
      {
        ATerm v_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, v_5);
        return(t);
      }
      t = Cons_2(t, u_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, s_5, t_5);
    return(t);
  }
  t = Specification_1(t, r_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL;
  d_112 = t;
  c_112 :
  if(match_cons(d_112, sym__2))
    {
      e_112 = ATgetArgument(d_112, 0);
      f_112 = ATgetArgument(d_112, 1);
      {
        ATerm k_112 = NULL,m_112 = NULL;
        ATerm l_112 = NULL;
        t = SSLgetAnnotations(not_null(d_112));
        {
          l_112 = t;
          if(((k_112 != NULL) && (k_112 != l_112)))
            _fail(l_112);
          else
            k_112 = l_112;
        }
        {
          t = not_null(e_112);
          {
            ATerm o_112 = NULL;
            t = m_77(t);
            {
              m_112 = t;
              {
                t = not_null(f_112);
                {
                  ATerm q_112 = NULL;
                  t = n_77(t);
                  {
                    o_112 = t;
                    {
                      ATerm r_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_112), not_null(o_112)), not_null(k_112));
                      {
                        r_112 = t;
                        if(((q_112 != NULL) && (q_112 != r_112)))
                          _fail(r_112);
                        else
                          q_112 = r_112;
                      }
                      t = not_null(q_112);
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
  ATerm d_113 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm e_113 = NULL,f_113 = NULL;
      e_113 = t;
      c_113 :
      if(match_cons(e_113, sym_Program_1))
        {
          f_113 = ATgetArgument(e_113, 0);
          if(((d_113 != NULL) && (d_113 != f_113)))
            _fail(f_113);
          else
            d_113 = f_113;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_24), not_null(d_113)), term_j_24));
      {
        t = printnl_0(t);
        {
          t = term_l_24;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_24;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_cons(j_113, sym__2))
    {
      k_113 = ATgetArgument(j_113, 0);
      l_113 = ATgetArgument(j_113, 1);
      {
        ATerm m_24;
        m_24 = t;
        t = SSL_printnl(not_null(k_113), not_null(l_113));
        t = m_24;
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
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
  r_113 = t;
  q_113 :
  if(match_cons(r_113, sym__2))
    {
      s_113 = ATgetArgument(r_113, 0);
      t_113 = ATgetArgument(r_113, 1);
      {
        t = not_null(s_113);
        {
          ATerm x_5 (ATerm t)
          {
            t = not_null(t_113);
            return(t);
          }
          t = at_end_1(t, x_5);
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
ATerm debug_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm n_24;
  n_24 = t;
  {
    ATerm z_113 = NULL,b_114 = NULL;
    ATerm o_24;
    o_24 = t;
    {
      ATerm a_114 = NULL;
      t = a_99(t);
      {
        a_114 = t;
        if(((z_113 != NULL) && (z_113 != a_114)))
          _fail(a_114);
        else
          z_113 = a_114;
      }
    }
    t = o_24;
    {
      ATerm c_114 = NULL;
      c_114 = t;
      if(((b_114 != NULL) && (b_114 != c_114)))
        _fail(c_114);
      else
        b_114 = c_114;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_114)), not_null(z_113)));
        t = printnl_0(t);
      }
    }
  }
  t = n_24;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_114 = NULL;
  g_114 = t;
  t = SSL_is_string(not_null(g_114));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_5);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm r_114 = NULL,s_114 = NULL,t_114 = NULL;
              r_114 = t;
              q_114 :
              if(match_cons(r_114, sym_Path_1))
                {
                  s_114 = ATgetArgument(r_114, 0);
                  t = not_null(s_114);
                }
              else
                {
                  if(match_cons(r_114, sym_Var_1))
                    {
                      s_114 = ATgetArgument(r_114, 0);
                      {
                        t = not_null(s_114);
                        {
                          ATerm d_25 = t;
                          int e_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_25);
                            }
                          else
                            {
                              t = d_25;
                              {
                                ATerm z_5 (ATerm t)
                                {
                                  t = term_f_25;
                                  return(t);
                                }
                                t = debug_1(t, z_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_114, sym_Prefix_2))
                        {
                          s_114 = ATgetArgument(r_114, 0);
                          t_114 = ATgetArgument(r_114, 1);
                          {
                            ATerm y_114 = NULL,c_115 = NULL;
                            ATerm g_25;
                            g_25 = t;
                            {
                              ATerm z_114 = NULL;
                              t = not_null(s_114);
                              {
                                t = eval_config_0(t);
                                {
                                  z_114 = t;
                                  if(((y_114 != NULL) && (y_114 != z_114)))
                                    _fail(z_114);
                                  else
                                    y_114 = z_114;
                                }
                              }
                            }
                            t = g_25;
                            {
                              ATerm d_115 = NULL;
                              t = not_null(t_114);
                              {
                                t = eval_config_0(t);
                                {
                                  d_115 = t;
                                  if(((c_115 != NULL) && (c_115 != d_115)))
                                    _fail(d_115);
                                  else
                                    c_115 = d_115;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_114), not_null(c_115));
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
  ATerm l_115 = NULL;
  l_115 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_25, not_null(l_115));
    {
      t = table_get_0(t);
      {
        ATerm a_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_25;
            m_25 = t;
            {
              ATerm n_115 = NULL;
              ATerm o_115 = NULL;
              o_115 = t;
              if(((n_115 != NULL) && (n_115 != o_115)))
                _fail(o_115);
              else
                n_115 = o_115;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_25, not_null(l_115), not_null(n_115));
                t = table_put_0(t);
              }
            }
            t = m_25;
          }
          return(t);
        }
        t = try_1(t, a_6);
      }
    }
  }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, term_n_25));
  {
    t = printnl_0(t);
    {
      t = term_l_24;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_115 = NULL;
  s_115 = t;
  t = SSL_TicksToSeconds(not_null(s_115));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_115 = NULL,y_115 = NULL,z_115 = NULL;
  x_115 = t;
  w_115 :
  if(match_cons(x_115, sym__2))
    {
      y_115 = ATgetArgument(x_115, 0);
      z_115 = ATgetArgument(x_115, 1);
      {
        ATerm o_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_115), not_null(z_115));
            LocalPopChoice(r_25);
          }
        else
          {
            t = o_25;
            t = SSL_addr(not_null(y_115), not_null(z_115));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_104 (ATerm), ATerm n_104 (ATerm))
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_104(t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL;
        h_116 = t;
        g_116 :
        if(((ATgetType(h_116) == AT_LIST) && ((ATermList) h_116 != ATempty)))
          {
            i_116 = ATgetFirst((ATermList) h_116);
            j_116 = (ATerm) ATgetNext((ATermList) h_116);
            {
              ATerm m_116 = NULL;
              ATerm n_116 = NULL;
              t = not_null(j_116);
              {
                t = foldr_2(t, m_104, n_104);
                {
                  n_116 = t;
                  if(((m_116 != NULL) && (m_116 != n_116)))
                    _fail(n_116);
                  else
                    m_116 = n_116;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_116), not_null(m_116));
                t = n_104(t);
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
ATerm crush_2 (ATerm t, ATerm a_106 (ATerm), ATerm b_106 (ATerm))
{
  ATerm u_116 = NULL;
  ATerm w_116 = NULL;
  u_116 = t;
  {
    ATerm x_116 = NULL;
    ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL;
    t = not_null(u_116);
    {
      x_116 = t;
      {
        t = SSL_explode_term(not_null(x_116));
        {
          z_116 = t;
          t_116 :
          if(match_cons(z_116, sym__2))
            {
              a_117 = ATgetArgument(z_116, 0);
              b_117 = ATgetArgument(z_116, 1);
              if(((w_116 != NULL) && (w_116 != b_117)))
                _fail(b_117);
              else
                w_116 = b_117;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_116);
      t = foldr_2(t, a_106, b_106);
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
    ATerm b_6 (ATerm t)
    {
      t = term_u_25;
      return(t);
    }
    t = crush_2(t, b_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL;
  h_117 = t;
  g_117 :
  if(match_cons(h_117, sym__2))
    {
      i_117 = ATgetArgument(h_117, 0);
      j_117 = ATgetArgument(h_117, 1);
      {
        ATerm y_25;
        y_25 = t;
        {
          ATerm b_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_117), not_null(j_117));
              LocalPopChoice(e_26);
            }
          else
            {
              t = b_26;
              t = SSL_gtr(not_null(i_117), not_null(j_117));
            }
        }
        t = y_25;
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
  ATerm p_117 = NULL;
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL;
      q_117 = t;
      o_117 :
      if(match_cons(q_117, sym__2))
        {
          r_117 = ATgetArgument(q_117, 0);
          s_117 = ATgetArgument(q_117, 1);
          {
            if(((p_117 != NULL) && (p_117 != r_117)))
              _fail(r_117);
            else
              p_117 = r_117;
            if(((p_117 != NULL) && (p_117 != s_117)))
              _fail(s_117);
            else
              p_117 = s_117;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm n_26;
    n_26 = t;
    {
      ATerm v_117 = NULL;
      ATerm w_117 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          w_117 = t;
          if(((v_117 != NULL) && (v_117 != w_117)))
            _fail(w_117);
          else
            v_117 = w_117;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_117), term_l_24);
        t = geq_0(t);
      }
    }
    t = n_26;
    t = j_90(t);
    return(t);
  }
  t = try_1(t, c_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm a_118 = NULL,c_118 = NULL;
    ATerm o_26;
    o_26 = t;
    {
      ATerm b_118 = NULL;
      t = run_time_0(t);
      {
        b_118 = t;
        if(((a_118 != NULL) && (a_118 != b_118)))
          _fail(b_118);
        else
          a_118 = b_118;
      }
    }
    t = o_26;
    {
      ATerm d_118 = NULL;
      t = term_x_26;
      {
        t = get_config_0(t);
        {
          d_118 = t;
          if(((c_118 != NULL) && (c_118 != d_118)))
            _fail(d_118);
          else
            c_118 = d_118;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), not_null(a_118)), term_y_26), not_null(c_118)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_6);
  {
    t = term_u_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL;
  j_118 = t;
  h_118 :
  if(match_cons(j_118, sym__2))
    {
      k_118 = ATgetArgument(j_118, 0);
      l_118 = ATgetArgument(j_118, 1);
      t = SSL_WriteToTextFile(not_null(k_118), not_null(l_118));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL;
  r_118 = t;
  q_118 :
  if(match_cons(r_118, sym__2))
    {
      s_118 = ATgetArgument(r_118, 0);
      t_118 = ATgetArgument(r_118, 1);
      t = SSL_WriteToBinaryFile(not_null(s_118), not_null(t_118));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_119 = NULL;
  ATerm b_27;
  b_27 = t;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm c_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
          {
            ATerm d_119 = NULL,e_119 = NULL;
            d_119 = t;
            z_118 :
            if(match_cons(d_119, sym_Output_1))
              {
                e_119 = ATgetArgument(d_119, 0);
                if(((c_119 != NULL) && (c_119 != e_119)))
                  _fail(e_119);
                else
                  c_119 = e_119;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, f_6);
          LocalPopChoice(f_27);
        }
      else
        {
          t = c_27;
          {
            ATerm f_119 = NULL;
            t = term_k_27;
            {
              f_119 = t;
              if(((c_119 != NULL) && (c_119 != f_119)))
                _fail(f_119);
              else
                c_119 = f_119;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_6, _id);
  }
  t = b_27;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm h_6 (ATerm t)
      {
        t = not_null(c_119);
        return(t);
      }
      t = split_2(t, h_6, _id);
      return(t);
    }
    t = _2(t, _id, g_6);
    {
      ATerm l_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 (ATerm t)
          {
            ATerm l_6 (ATerm t)
            {
              ATerm g_119 = NULL;
              g_119 = t;
              b_119 :
              if(!(match_cons(g_119, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, l_6);
            return(t);
          }
          t = _2(t, i_6, WriteToBinaryFile_0);
          LocalPopChoice(m_27);
        }
      else
        {
          t = l_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm m_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL;
  ATerm n_27;
  n_27 = t;
  t = dtime_0(t);
  t = n_27;
  {
    t = k_98(t);
    {
      ATerm o_27;
      o_27 = t;
      {
        ATerm n_119 = NULL;
        t = dtime_0(t);
        {
          n_119 = t;
          if(((m_119 != NULL) && (m_119 != n_119)))
            _fail(n_119);
          else
            m_119 = n_119;
        }
      }
      t = o_27;
      {
        o_119 = t;
        l_119 :
        if(match_cons(o_119, sym__2))
          {
            p_119 = ATgetArgument(o_119, 0);
            q_119 = ATgetArgument(o_119, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_119)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_119))), not_null(q_119));
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
  ATerm w_119 = NULL;
  w_119 = t;
  t = SSL_ReadFromFile(not_null(w_119));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_111 (ATerm), ATerm q_111 (ATerm))
{
  ATerm b_120 = NULL,d_120 = NULL;
  ATerm p_27;
  p_27 = t;
  {
    ATerm c_120 = NULL;
    t = p_111(t);
    {
      c_120 = t;
      if(((b_120 != NULL) && (b_120 != c_120)))
        _fail(c_120);
      else
        b_120 = c_120;
    }
  }
  t = p_27;
  {
    ATerm e_120 = NULL;
    t = q_111(t);
    {
      e_120 = t;
      if(((d_120 != NULL) && (d_120 != e_120)))
        _fail(e_120);
      else
        d_120 = e_120;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_120), not_null(d_120));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_120 = NULL;
  ATerm q_27;
  q_27 = t;
  {
    ATerm r_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 (ATerm t)
        {
          ATerm l_120 = NULL,m_120 = NULL;
          l_120 = t;
          i_120 :
          if(match_cons(l_120, sym_Input_1))
            {
              m_120 = ATgetArgument(l_120, 0);
              if(((k_120 != NULL) && (k_120 != m_120)))
                _fail(m_120);
              else
                k_120 = m_120;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_6);
        LocalPopChoice(w_27);
      }
    else
      {
        t = r_27;
        {
          ATerm n_120 = NULL;
          t = term_x_27;
          {
            n_120 = t;
            if(((k_120 != NULL) && (k_120 != n_120)))
              _fail(n_120);
            else
              k_120 = n_120;
          }
        }
      }
  }
  t = q_27;
  {
    ATerm n_6 (ATerm t)
    {
      t = not_null(k_120);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_120 = NULL;
  u_120 = t;
  t_120 :
  if(match_cons(u_120, sym_Version_0))
    {
      ATerm w_120 = NULL,y_120 = NULL;
      ATerm y_27;
      y_27 = t;
      {
        ATerm x_120 = NULL;
        t = SSLgetAnnotations(not_null(u_120));
        {
          x_120 = t;
          if(((w_120 != NULL) && (w_120 != x_120)))
            _fail(x_120);
          else
            w_120 = x_120;
        }
      }
      t = y_27;
      {
        ATerm z_120 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_120));
        {
          z_120 = t;
          if(((y_120 != NULL) && (y_120 != z_120)))
            _fail(z_120);
          else
            y_120 = z_120;
        }
        t = not_null(y_120);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    ATerm c_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = c_28;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_6);
  t = i_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_121 = NULL;
  e_121 = t;
  t = SSL_table_create(not_null(e_121));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_121 = NULL;
  i_121 = t;
  {
    ATerm j_28;
    j_28 = t;
    {
      t = term_k_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, not_null(i_121));
          t = table_put_0(t);
        }
      }
    }
    t = j_28;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_121 = NULL;
  m_121 = t;
  t = SSL_string_to_int(not_null(m_121));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL;
  u_121 = t;
  s_121 :
  if(match_string(u_121, "register-usage-info"))
    {
      t = register_usage_1(t, v_0);
    }
  else
    {
      if(((ATgetType(u_121) == AT_LIST) && ((ATermList) u_121 != ATempty)))
        {
          v_121 = ATgetFirst((ATermList) u_121);
          w_121 = (ATerm) ATgetNext((ATermList) u_121);
          t_121 :
          if(((ATgetType(w_121) == AT_LIST) && ((ATermList) w_121 != ATempty)))
            {
              x_121 = ATgetFirst((ATermList) w_121);
              y_121 = (ATerm) ATgetNext((ATermList) w_121);
              {
                ATerm c_122 = NULL;
                ATerm m_28;
                m_28 = t;
                {
                  t = not_null(v_121);
                  t = t_0(t);
                }
                t = m_28;
                {
                  ATerm d_122 = NULL;
                  t = not_null(x_121);
                  {
                    t = u_0(t);
                    {
                      d_122 = t;
                      if(((c_122 != NULL) && (c_122 != d_122)))
                        _fail(d_122);
                      else
                        c_122 = d_122;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_121)), not_null(c_122));
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
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6 (ATerm t)
      {
        ATerm u_122 = NULL;
        u_122 = t;
        h_122 :
        if(!(match_string(u_122, "-i")))
          {
            if(!(match_string(u_122, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        ATerm x_122 = NULL;
        ATerm p_28;
        p_28 = t;
        {
          ATerm v_122 = NULL;
          ATerm w_122 = NULL;
          w_122 = t;
          if(((v_122 != NULL) && (v_122 != w_122)))
            _fail(w_122);
          else
            v_122 = w_122;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_28, not_null(v_122));
            t = set_config_0(t);
          }
        }
        t = p_28;
        {
          ATerm y_122 = NULL;
          y_122 = t;
          if(((x_122 != NULL) && (x_122 != y_122)))
            _fail(y_122);
          else
            x_122 = y_122;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_122));
        }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = term_r_28;
        return(t);
      }
      t = ArgOption_3(t, p_6, q_6, r_6);
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 (ATerm t)
            {
              ATerm z_122 = NULL;
              z_122 = t;
              k_122 :
              if(!(match_string(z_122, "-o")))
                {
                  if(!(match_string(z_122, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm c_123 = NULL;
              ATerm z_28;
              z_28 = t;
              {
                ATerm a_123 = NULL;
                ATerm b_123 = NULL;
                b_123 = t;
                if(((a_123 != NULL) && (a_123 != b_123)))
                  _fail(b_123);
                else
                  a_123 = b_123;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_29, not_null(a_123));
                  t = set_config_0(t);
                }
              }
              t = z_28;
              {
                ATerm d_123 = NULL;
                d_123 = t;
                if(((c_123 != NULL) && (c_123 != d_123)))
                  _fail(d_123);
                else
                  c_123 = d_123;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_123));
              }
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_e_29;
              return(t);
            }
            t = ArgOption_3(t, s_6, t_6, u_6);
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm g_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_6 (ATerm t)
                  {
                    ATerm e_123 = NULL;
                    e_123 = t;
                    n_122 :
                    if(!(match_string(e_123, "-S")))
                      {
                        if(!(match_string(e_123, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm w_6 (ATerm t)
                  {
                    t = term_l_29;
                    t = set_config_0(t);
                    t = term_m_29;
                    return(t);
                  }
                  ATerm x_6 (ATerm t)
                  {
                    t = term_n_29;
                    return(t);
                  }
                  t = Option_3(t, v_6, w_6, x_6);
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = g_29;
                  {
                    ATerm o_29 = t;
                    int p_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_6 (ATerm t)
                        {
                          ATerm f_123 = NULL;
                          f_123 = t;
                          o_122 :
                          if(!(match_string(f_123, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm z_6 (ATerm t)
                        {
                          ATerm i_123 = NULL;
                          ATerm q_29;
                          q_29 = t;
                          {
                            ATerm g_123 = NULL;
                            ATerm h_123 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_123 = t;
                              if(((g_123 != NULL) && (g_123 != h_123)))
                                _fail(h_123);
                              else
                                g_123 = h_123;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(g_123));
                              t = set_config_0(t);
                            }
                          }
                          t = q_29;
                          {
                            ATerm j_123 = NULL;
                            j_123 = t;
                            if(((i_123 != NULL) && (i_123 != j_123)))
                              _fail(j_123);
                            else
                              i_123 = j_123;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_123));
                          }
                          return(t);
                        }
                        ATerm a_7 (ATerm t)
                        {
                          t = term_r_29;
                          return(t);
                        }
                        t = ArgOption_3(t, y_6, z_6, a_7);
                        LocalPopChoice(p_29);
                      }
                    else
                      {
                        t = o_29;
                        {
                          ATerm s_29 = t;
                          int a_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_7 (ATerm t)
                              {
                                ATerm k_123 = NULL;
                                k_123 = t;
                                r_122 :
                                if(!(match_string(k_123, "-v")))
                                  {
                                    if(!(match_string(k_123, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm c_7 (ATerm t)
                              {
                                t = term_c_30;
                                t = set_config_0(t);
                                t = term_d_30;
                                return(t);
                              }
                              ATerm d_7 (ATerm t)
                              {
                                t = term_e_30;
                                return(t);
                              }
                              t = Option_3(t, b_7, c_7, d_7);
                              LocalPopChoice(a_30);
                            }
                          else
                            {
                              t = s_29;
                              {
                                ATerm f_30 = t;
                                int g_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_7 (ATerm t)
                                    {
                                      ATerm l_123 = NULL;
                                      l_123 = t;
                                      s_122 :
                                      if(!(match_string(l_123, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_7 (ATerm t)
                                    {
                                      t = term_j_30;
                                      t = set_config_0(t);
                                      t = term_k_30;
                                      return(t);
                                    }
                                    ATerm g_7 (ATerm t)
                                    {
                                      t = term_l_30;
                                      return(t);
                                    }
                                    t = Option_3(t, e_7, f_7, g_7);
                                    LocalPopChoice(g_30);
                                  }
                                else
                                  {
                                    t = f_30;
                                    {
                                      ATerm h_7 (ATerm t)
                                      {
                                        ATerm m_123 = NULL;
                                        m_123 = t;
                                        t_122 :
                                        if(!(match_string(m_123, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm i_7 (ATerm t)
                                      {
                                        t = term_n_30;
                                        t = set_config_0(t);
                                        t = term_q_30;
                                        return(t);
                                      }
                                      ATerm j_7 (ATerm t)
                                      {
                                        t = term_r_30;
                                        return(t);
                                      }
                                      t = Option_3(t, h_7, i_7, j_7);
                                    }
                                  }
                              }
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
  ATerm u_123 = NULL;
  u_123 = t;
  t = SSL_table_destroy(not_null(u_123));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_123 = NULL;
  y_123 = t;
  t = SSL_exit(not_null(y_123));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_124 = NULL;
  c_124 = t;
  t = SSL_implode_string(not_null(c_124));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_110 (ATerm))
{
  ATerm f_124 (ATerm t)
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_124);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        {
          t = Nil_0(t);
          t = i_110(t);
        }
      }
    return(t);
  }
  t = f_124(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL;
        i_124 = t;
        h_124 :
        if(((ATgetType(i_124) == AT_LIST) && ((ATermList) i_124 != ATempty)))
          {
            j_124 = ATgetFirst((ATermList) i_124);
            k_124 = (ATerm) ATgetNext((ATermList) i_124);
            {
              t = not_null(j_124);
              {
                ATerm k_7 (ATerm t)
                {
                  t = not_null(k_124);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_7);
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
  ATerm q_124 = NULL;
  q_124 = t;
  t = SSL_explode_string(not_null(q_124));
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
ATerm long_description_1 (ATerm t, ATerm x_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_109 (ATerm))
{
  ATerm t_124 (ATerm t)
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = Cons_2(t, u_109, t_124);
      }
    return(t);
  }
  t = t_124(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL;
  c_125 = t;
  z_124 :
  if(((ATgetType(c_125) == AT_LIST) && ((ATermList) c_125 != ATempty)))
    {
      a_125 = ATgetFirst((ATermList) c_125);
      b_125 = (ATerm) ATgetNext((ATermList) c_125);
      {
        ATerm f_125 = NULL;
        t = not_null(b_125);
        {
          ATerm z_30;
          z_30 = t;
          {
            ATerm g_125 = NULL,i_125 = NULL,k_125 = NULL;
            ATerm a_31;
            a_31 = t;
            {
              ATerm h_125 = NULL;
              t = s_0(t);
              {
                h_125 = t;
                if(((g_125 != NULL) && (g_125 != h_125)))
                  _fail(h_125);
                else
                  g_125 = h_125;
              }
            }
            t = a_31;
            {
              ATerm j_125 = NULL;
              t = not_null(a_125);
              {
                t = r_0(t);
                {
                  j_125 = t;
                  if(((i_125 != NULL) && (i_125 != j_125)))
                    _fail(j_125);
                  else
                    i_125 = j_125;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_125)), not_null(i_125));
                {
                  k_125 = t;
                  if(((f_125 != NULL) && (f_125 != k_125)))
                    _fail(k_125);
                  else
                    f_125 = k_125;
                }
              }
            }
          }
          t = z_30;
          {
            ATerm l_7 (ATerm t)
            {
              t = not_null(f_125);
              return(t);
            }
            t = reverse_acc_2(t, r_0, l_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) c_125 == ATempty))
        {
          {
            t = term_q_23;
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
  ATerm m_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm v_125 = NULL,w_125 = NULL;
  v_125 = t;
  u_125 :
  if(match_cons(v_125, sym_Program_1))
    {
      w_125 = ATgetArgument(v_125, 0);
      {
        ATerm z_125 = NULL,b_126 = NULL;
        ATerm a_126 = NULL;
        t = SSLgetAnnotations(not_null(v_125));
        {
          a_126 = t;
          if(((z_125 != NULL) && (z_125 != a_126)))
            _fail(a_126);
          else
            z_125 = a_126;
        }
        {
          t = not_null(w_125);
          {
            ATerm d_126 = NULL;
            t = a_79(t);
            {
              b_126 = t;
              {
                ATerm e_126 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_126)), not_null(z_125));
                {
                  e_126 = t;
                  if(((d_126 != NULL) && (d_126 != e_126)))
                    _fail(e_126);
                  else
                    d_126 = e_126;
                }
                t = not_null(d_126);
              }
            }
          }
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
  ATerm n_126 = NULL;
  ATerm n_7 (ATerm t)
  {
    ATerm o_7 (ATerm t)
    {
      ATerm o_126 = NULL;
      o_126 = t;
      if(((n_126 != NULL) && (n_126 != o_126)))
        _fail(o_126);
      else
        n_126 = o_126;
      return(t);
    }
    t = Program_1(t, o_7);
    return(t);
  }
  t = option_defined_1(t, n_7);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm p_126 = NULL;
      ATerm q_126 = NULL;
      t = term_q_23;
      {
        ATerm q_7 (ATerm t)
        {
          t = not_null(n_126);
          return(t);
        }
        t = short_description_1(t, q_7);
        {
          t = concat_strings_0(t);
          {
            q_126 = t;
            if(((p_126 != NULL) && (p_126 != q_126)))
              _fail(q_126);
            else
              p_126 = q_126;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(p_126)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, p_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, term_b_31));
      {
        t = printnl_0(t);
        {
          t = term_e_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_7 (ATerm t)
                {
                  ATerm r_126 = NULL;
                  r_126 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_126)), term_f_31));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_7);
                {
                  ATerm s_7 (ATerm t)
                  {
                    ATerm t_126 = NULL;
                    ATerm u_126 = NULL;
                    t = term_q_23;
                    {
                      ATerm t_7 (ATerm t)
                      {
                        t = not_null(n_126);
                        return(t);
                      }
                      t = long_description_1(t, t_7);
                      {
                        t = concat_strings_0(t);
                        {
                          u_126 = t;
                          if(((t_126 != NULL) && (t_126 != u_126)))
                            _fail(u_126);
                          else
                            t_126 = u_126;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_126)), term_g_31));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_7);
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
  ATerm e_127 = NULL,f_127 = NULL;
  e_127 = t;
  d_127 :
  if(match_cons(e_127, sym_Undefined_1))
    {
      f_127 = ATgetArgument(e_127, 0);
      {
        ATerm i_127 = NULL,k_127 = NULL;
        ATerm j_127 = NULL;
        t = SSLgetAnnotations(not_null(e_127));
        {
          j_127 = t;
          if(((i_127 != NULL) && (i_127 != j_127)))
            _fail(j_127);
          else
            i_127 = j_127;
        }
        {
          t = not_null(f_127);
          {
            ATerm m_127 = NULL;
            t = b_79(t);
            {
              k_127 = t;
              {
                ATerm n_127 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_127)), not_null(i_127));
                {
                  n_127 = t;
                  if(((m_127 != NULL) && (m_127 != n_127)))
                    _fail(n_127);
                  else
                    m_127 = n_127;
                }
                t = not_null(m_127);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm s_127 (ATerm t)
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_110, _id);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = Cons_2(t, _id, s_127);
      }
    return(t);
  }
  t = s_127(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_96 (ATerm))
{
  t = fetch_1(t, v_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_127 = NULL;
  x_127 = t;
  w_127 :
  if(match_cons(x_127, sym_Help_0))
    {
      ATerm z_127 = NULL,b_128 = NULL;
      ATerm j_31;
      j_31 = t;
      {
        ATerm a_128 = NULL;
        t = SSLgetAnnotations(not_null(x_127));
        {
          a_128 = t;
          if(((z_127 != NULL) && (z_127 != a_128)))
            _fail(a_128);
          else
            z_127 = a_128;
        }
      }
      t = j_31;
      {
        ATerm c_128 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_127));
        {
          c_128 = t;
          if(((b_128 != NULL) && (b_128 != c_128)))
            _fail(c_128);
          else
            b_128 = c_128;
        }
        t = not_null(b_128);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_112 (ATerm))
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_112(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL;
  i_128 = t;
  h_128 :
  if(match_cons(i_128, sym__2))
    {
      j_128 = ATgetArgument(i_128, 0);
      k_128 = ATgetArgument(i_128, 1);
      t = SSL_table_get(not_null(j_128), not_null(k_128));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL;
  r_128 = t;
  q_128 :
  if(match_cons(r_128, sym__3))
    {
      s_128 = ATgetArgument(r_128, 0);
      t_128 = ATgetArgument(r_128, 1);
      u_128 = ATgetArgument(r_128, 2);
      {
        ATerm m_31;
        m_31 = t;
        {
          ATerm y_128 = NULL;
          ATerm z_128 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_128), not_null(t_128));
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                t = (ATerm) ATempty;
              }
            {
              z_128 = t;
              if(((y_128 != NULL) && (y_128 != z_128)))
                _fail(z_128);
              else
                y_128 = z_128;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_128), not_null(t_128), (ATerm) ATinsert(CheckATermList(not_null(y_128)), not_null(u_128)));
            t = table_put_0(t);
          }
        }
        t = m_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_96 (ATerm))
{
  ATerm d_129 = NULL;
  ATerm e_129 = NULL;
  t = term_q_23;
  {
    t = b_96(t);
    {
      e_129 = t;
      if(((d_129 != NULL) && (d_129 != e_129)))
        _fail(e_129);
      else
        d_129 = e_129;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_31, term_d_31, not_null(d_129));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
  k_129 = t;
  j_129 :
  if(match_string(k_129, "register-usage-info"))
    {
      t = register_usage_1(t, q_0);
    }
  else
    {
      if(((ATgetType(k_129) == AT_LIST) && ((ATermList) k_129 != ATempty)))
        {
          l_129 = ATgetFirst((ATermList) k_129);
          m_129 = (ATerm) ATgetNext((ATermList) k_129);
          {
            ATerm p_129 = NULL;
            ATerm p_31;
            p_31 = t;
            {
              t = not_null(l_129);
              t = a_0(t);
            }
            t = p_31;
            {
              ATerm q_129 = NULL;
              t = term_q_23;
              {
                t = b_0(t);
                {
                  q_129 = t;
                  if(((p_129 != NULL) && (p_129 != q_129)))
                    _fail(q_129);
                  else
                    p_129 = q_129;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_129)), not_null(p_129));
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
  ATerm u_7 (ATerm t)
  {
    ATerm v_129 = NULL;
    v_129 = t;
    u_129 :
    if(!(match_string(v_129, "--help")))
      {
        if(!(match_string(v_129, "-h")))
          {
            if(!(match_string(v_129, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  ATerm w_7 (ATerm t)
  {
    t = term_u_31;
    return(t);
  }
  t = Option_3(t, u_7, v_7, w_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL;
  y_129 = t;
  x_129 :
  if(((ATgetType(y_129) == AT_LIST) && ((ATermList) y_129 != ATempty)))
    {
      z_129 = ATgetFirst((ATermList) y_129);
      a_130 = (ATerm) ATgetNext((ATermList) y_129);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_130)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_129)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_89 (ATerm), ATerm m_89 (ATerm))
{
  ATerm k_130 = NULL,l_130 = NULL,m_130 = NULL;
  k_130 = t;
  j_130 :
  if(((ATgetType(k_130) == AT_LIST) && ((ATermList) k_130 != ATempty)))
    {
      l_130 = ATgetFirst((ATermList) k_130);
      m_130 = (ATerm) ATgetNext((ATermList) k_130);
      {
        ATerm q_130 = NULL,s_130 = NULL;
        ATerm r_130 = NULL;
        t = SSLgetAnnotations(not_null(k_130));
        {
          r_130 = t;
          if(((q_130 != NULL) && (q_130 != r_130)))
            _fail(r_130);
          else
            q_130 = r_130;
        }
        {
          t = not_null(l_130);
          {
            ATerm u_130 = NULL;
            t = l_89(t);
            {
              s_130 = t;
              {
                t = not_null(m_130);
                {
                  ATerm w_130 = NULL;
                  t = m_89(t);
                  {
                    u_130 = t;
                    {
                      ATerm x_130 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_130)), not_null(s_130)), not_null(q_130));
                      {
                        x_130 = t;
                        if(((w_130 != NULL) && (w_130 != x_130)))
                          _fail(x_130);
                        else
                          w_130 = x_130;
                      }
                      t = not_null(w_130);
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
  ATerm h_131 = NULL;
  h_131 = t;
  g_131 :
  if(((ATermList) h_131 == ATempty))
    {
      {
        ATerm j_131 = NULL,l_131 = NULL;
        ATerm c_32;
        c_32 = t;
        {
          ATerm k_131 = NULL;
          t = SSLgetAnnotations(not_null(h_131));
          {
            k_131 = t;
            if(((j_131 != NULL) && (j_131 != k_131)))
              _fail(k_131);
            else
              j_131 = k_131;
          }
        }
        t = c_32;
        {
          ATerm m_131 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_131));
          {
            m_131 = t;
            if(((l_131 != NULL) && (l_131 != m_131)))
              _fail(m_131);
            else
              l_131 = m_131;
          }
          t = not_null(l_131);
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
  ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL;
  s_131 = t;
  r_131 :
  if(match_cons(s_131, sym__2))
    {
      t_131 = ATgetArgument(s_131, 0);
      u_131 = ATgetArgument(s_131, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_25, not_null(t_131), not_null(u_131));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm d_32;
  d_32 = t;
  {
    ATerm x_7 (ATerm t)
    {
      t = term_e_32;
      t = z_95(t);
      return(t);
    }
    t = try_1(t, x_7);
  }
  t = d_32;
  {
    ATerm y_7 (ATerm t)
    {
      ATerm c_132 = NULL;
      ATerm c_33;
      c_33 = t;
      {
        ATerm a_132 = NULL;
        ATerm b_132 = NULL;
        b_132 = t;
        if(((a_132 != NULL) && (a_132 != b_132)))
          _fail(b_132);
        else
          a_132 = b_132;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(a_132));
          t = set_config_0(t);
        }
      }
      t = c_33;
      {
        ATerm d_132 = NULL;
        d_132 = t;
        if(((c_132 != NULL) && (c_132 != d_132)))
          _fail(d_132);
        else
          c_132 = d_132;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_132));
      }
      return(t);
    }
    ATerm z_7 (ATerm t)
    {
      ATerm d_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              {
                t = z_95(t);
                t = Cons_2(t, _id, z_7);
              }
            }
          LocalPopChoice(e_33);
        }
      else
        {
          t = d_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_7, z_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_132 = NULL,k_132 = NULL,l_132 = NULL;
  ATerm h_33;
  h_33 = t;
  {
    ATerm m_132 = NULL,n_132 = NULL,o_132 = NULL,p_132 = NULL;
    m_132 = t;
    i_132 :
    if(match_cons(m_132, sym__3))
      {
        n_132 = ATgetArgument(m_132, 0);
        o_132 = ATgetArgument(m_132, 1);
        p_132 = ATgetArgument(m_132, 2);
        {
          if(((j_132 != NULL) && (j_132 != n_132)))
            _fail(n_132);
          else
            j_132 = n_132;
          {
            if(((k_132 != NULL) && (k_132 != o_132)))
              _fail(o_132);
            else
              k_132 = o_132;
            {
              if(((l_132 != NULL) && (l_132 != p_132)))
                _fail(p_132);
              else
                l_132 = p_132;
              t = SSL_table_put(not_null(j_132), not_null(k_132), not_null(l_132));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_95 (ATerm))
{
  ATerm s_132 = NULL;
  ATerm i_33;
  i_33 = t;
  {
    t = term_j_33;
    t = table_put_0(t);
  }
  t = i_33;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_95(t);
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_8);
    {
      ATerm b_8 (ATerm t)
      {
        ATerm m_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_u_25;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_33);
          }
        else
          {
            t = m_33;
            {
              ATerm c_8 (ATerm t)
              {
                ATerm d_8 (ATerm t)
                {
                  ATerm t_132 = NULL;
                  t_132 = t;
                  if(((s_132 != NULL) && (s_132 != t_132)))
                    _fail(t_132);
                  else
                    s_132 = t_132;
                  return(t);
                }
                t = Undefined_1(t, d_8);
                return(t);
              }
              t = option_defined_1(t, c_8);
              {
                ATerm r_33;
                r_33 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_132)), term_s_33));
                  t = printnl_0(t);
                }
                t = r_33;
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_24;
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
        ATerm t_33;
        t_33 = t;
        {
          t = term_c_31;
          t = table_destroy_0(t);
        }
        t = t_33;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm))
{
  ATerm e_8 (ATerm t)
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_97(t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_8);
  {
    t = store_options_0(t);
    {
      t = z_97(t);
      {
        ATerm g_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_97);
            LocalPopChoice(j_34);
          }
        else
          {
            t = g_34;
            {
              ATerm n_34 = t;
              int o_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, w_97);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(o_34);
                }
              else
                {
                  t = n_34;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm g_8 (ATerm t)
    {
      ATerm p_34;
      p_34 = t;
      {
        ATerm w_132 = NULL;
        ATerm x_132 = NULL;
        t = term_x_26;
        {
          t = get_config_0(t);
          {
            x_132 = t;
            if(((w_132 != NULL) && (w_132 != x_132)))
              _fail(x_132);
            else
              w_132 = x_132;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(w_132)));
          t = printnl_0(t);
        }
      }
      t = p_34;
      return(t);
    }
    t = if_verbose2_1(t, g_8);
    return(t);
  }
  t = iowrap_4(t, q_97, r_97, s_97, f_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_97 (ATerm), ATerm p_97 (ATerm))
{
  t = iowrap_3(t, o_97, p_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_97 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    t = _2(t, _id, l_97);
    return(t);
  }
  t = iowrap_2(t, h_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        {
          ATerm j_8 (ATerm t)
          {
            ATerm k_8 (ATerm t)
            {
              t = term_s_34;
              return(t);
            }
            t = say_1(t, k_8);
            return(t);
          }
          t = if_verbose2_1(t, j_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, i_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
