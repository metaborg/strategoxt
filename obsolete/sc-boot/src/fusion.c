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
ATerm term_e_36;
ATerm term_r_35;
ATerm term_l_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_y_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_h_30;
ATerm term_u_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_s_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_c_25;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_k_20;
ATerm term_z_19;
ATerm term_s_19;
ATerm term_o_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_x_18;
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
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Call_2, term_s_19, (ATerm) ATempty);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_s_27);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_27);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_c_25);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_c_25);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_c_25);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_m_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__3, term_l_34, term_m_34, (ATerm) ATempty);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_99 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm n_90 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm m_89 (ATerm), ATerm n_89 (ATerm));
ATerm Explode_2 (ATerm, ATerm r_85 (ATerm), ATerm s_85 (ATerm));
ATerm Op_2 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm pat_td_1 (ATerm, ATerm e_92 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm h_110 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm));
ATerm repeat_1 (ATerm, ATerm o_104 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm l_85 (ATerm), ATerm m_85 (ATerm));
ATerm Con_3 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm c_116 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_114 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_99 (ATerm));
ATerm restore_always_2 (ATerm, ATerm k_114 (ATerm), ATerm l_114 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm n_114 (ATerm));
ATerm innermost_1 (ATerm, ATerm n_102 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm g_89 (ATerm));
ATerm Seq_2 (ATerm, ATerm q_87 (ATerm), ATerm r_87 (ATerm));
ATerm Match_1 (ATerm, ATerm f_89 (ATerm));
ATerm LChoice_2 (ATerm, ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm Choice_2 (ATerm, ATerm s_87 (ATerm), ATerm t_87 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm q_116 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm f_94 (ATerm), ATerm g_94 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm h_94 (ATerm), ATerm i_94 (ATerm));
ATerm substitute_1 (ATerm, ATerm j_94 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm i_91 (ATerm));
ATerm Rec_2 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm SDef_3 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm));
ATerm Let_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm sboundin_3 (ATerm, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm e_88 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm e_91 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm m_86 (ATerm));
ATerm Scope_2 (ATerm, ATerm j_89 (ATerm), ATerm k_89 (ATerm));
ATerm tboundin_3 (ATerm, ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm));
ATerm crush_3 (ATerm, ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm));
ATerm for_3 (ATerm, ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm));
ATerm HdMember_1 (ATerm, ATerm h_107 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm w_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm s_93 (ATerm), ATerm t_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm));
ATerm zip_1 (ATerm, ATerm c_110 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm y_93 (ATerm), ATerm z_93 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm m_93 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm o_101 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm t_101 (ATerm));
ATerm rename_4 (ATerm, ATerm a_94 (ATerm, ATerm (ATerm)), ATerm b_94 (ATerm), ATerm c_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_94 (ATerm, ATerm (ATerm)));
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
ATerm Strategies_1 (ATerm, ATerm w_86 (ATerm));
ATerm Signature_1 (ATerm, ATerm t_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm y_86 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm));
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
ATerm crush_2 (ATerm, ATerm q_107 (ATerm), ATerm r_107 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_90 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_98 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_113 (ATerm), ATerm g_113 (ATerm));
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
ATerm at_end_1 (ATerm, ATerm y_111 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_96 (ATerm));
ATerm map_1 (ATerm, ATerm k_111 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_95 (ATerm));
ATerm Program_1 (ATerm, ATerm d_79 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_111 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_113 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_96 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm q_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm));
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
ATerm if_verbose2_1 (ATerm t, ATerm n_90 (ATerm))
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
    t = n_90(t);
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
ATerm Prim_2 (ATerm t, ATerm m_89 (ATerm), ATerm n_89 (ATerm))
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
            t = m_89(t);
            {
              w_16 = t;
              {
                t = not_null(q_16);
                {
                  ATerm a_17 = NULL;
                  t = n_89(t);
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
ATerm Explode_2 (ATerm t, ATerm r_85 (ATerm), ATerm s_85 (ATerm))
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
            t = r_85(t);
            {
              v_17 = t;
              {
                t = not_null(p_17);
                {
                  ATerm z_17 = NULL;
                  t = s_85(t);
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
ATerm Op_2 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm))
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
            t = m_87(t);
            {
              u_18 = t;
              {
                t = not_null(o_18);
                {
                  ATerm y_18 = NULL;
                  t = n_87(t);
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
ATerm pat_td_1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm s_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_92(t);
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
                t = pat_td_1(t, e_92);
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
                    t = pat_td_1(t, e_92);
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
                          t = pat_td_1(t, e_92);
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
                              t = pat_td_1(t, e_92);
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
ATerm unzip_1 (ATerm t, ATerm h_110 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, h_110);
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
ATerm App_2 (ATerm t, ATerm l_85 (ATerm), ATerm m_85 (ATerm))
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
            t = l_85(t);
            {
              b_26 = t;
              {
                t = not_null(v_25);
                {
                  ATerm f_26 = NULL;
                  t = m_85(t);
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
ATerm Con_3 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm))
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
            t = i_85(t);
            {
              d_27 = t;
              {
                t = not_null(v_26);
                {
                  ATerm h_27 = NULL;
                  t = j_85(t);
                  {
                    f_27 = t;
                    {
                      t = not_null(w_26);
                      {
                        ATerm j_27 = NULL;
                        t = k_85(t);
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
ATerm oncetd_1 (ATerm t, ATerm c_116 (ATerm))
{
  ATerm i_28 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_116(t);
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
ATerm topdown_1 (ATerm t, ATerm m_114 (ATerm))
{
  t = m_114(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = topdown_1(t, m_114);
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
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  j_32 = t;
  z_31 :
  if(match_cons(j_32, sym_Seq_2))
    {
      k_32 = ATgetArgument(j_32, 0);
      o_32 = ATgetArgument(j_32, 1);
      a_32 :
      if(match_cons(k_32, sym_Call_2))
        {
          l_32 = ATgetArgument(k_32, 0);
          n_32 = ATgetArgument(k_32, 1);
          b_32 :
          if(match_cons(l_32, sym_SVar_1))
            {
              m_32 = ATgetArgument(l_32, 0);
              c_32 :
              if(match_string(m_32, "mark"))
                {
                  d_32 :
                  if(((ATermList) n_32 == ATempty))
                    {
                      e_32 :
                      if(match_cons(o_32, sym_Seq_2))
                        {
                          p_32 = ATgetArgument(o_32, 0);
                          r_32 = ATgetArgument(o_32, 1);
                          f_32 :
                          if(match_cons(p_32, sym_Match_1))
                            {
                              q_32 = ATgetArgument(p_32, 0);
                              g_32 :
                              if(match_cons(r_32, sym_Seq_2))
                                {
                                  s_32 = ATgetArgument(r_32, 0);
                                  u_32 = ATgetArgument(r_32, 1);
                                  h_32 :
                                  if(match_cons(s_32, sym_Where_1))
                                    {
                                      t_32 = ATgetArgument(s_32, 0);
                                      i_32 :
                                      if(match_cons(u_32, sym_Build_1))
                                        {
                                          v_32 = ATgetArgument(u_32, 0);
                                          {
                                            ATerm z_14 = t;
                                            int j_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
                                                ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
                                                t = term_k_15;
                                                {
                                                  ATerm v_1 (ATerm t)
                                                  {
                                                    t = term_l_15;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, v_1);
                                                  {
                                                    c_33 = t;
                                                    q_30 :
                                                    if(match_cons(c_33, sym_Defined_2))
                                                      {
                                                        d_33 = ATgetArgument(c_33, 0);
                                                        e_33 = ATgetArgument(c_33, 1);
                                                        r_30 :
                                                        if(match_string(d_33, "o_0"))
                                                          {
                                                            ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
                                                            if(((z_32 != NULL) && (z_32 != e_33)))
                                                              _fail(e_33);
                                                            else
                                                              z_32 = e_33;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(z_32), not_null(q_32), (ATerm) ATmakeAppl(sym__2, not_null(t_32), not_null(v_32)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  f_33 = t;
                                                                  p_30 :
                                                                  if(match_cons(f_33, sym__2))
                                                                    {
                                                                      g_33 = ATgetArgument(f_33, 0);
                                                                      h_33 = ATgetArgument(f_33, 1);
                                                                      {
                                                                        if(((a_33 != NULL) && (a_33 != g_33)))
                                                                          _fail(g_33);
                                                                        else
                                                                          a_33 = g_33;
                                                                        if(((b_33 != NULL) && (b_33 != h_33)))
                                                                          _fail(h_33);
                                                                        else
                                                                          b_33 = h_33;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(a_33)), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_33))));
                                                LocalPopChoice(j_15);
                                              }
                                            else
                                              {
                                                t = z_14;
                                                {
                                                  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
                                                  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
                                                  t = term_k_15;
                                                  {
                                                    ATerm w_1 (ATerm t)
                                                    {
                                                      t = term_l_15;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, w_1);
                                                    {
                                                      q_33 = t;
                                                      x_31 :
                                                      if(match_cons(q_33, sym_Defined_2))
                                                        {
                                                          r_33 = ATgetArgument(q_33, 0);
                                                          s_33 = ATgetArgument(q_33, 1);
                                                          y_31 :
                                                          if(match_string(r_33, "k_0"))
                                                            {
                                                              ATerm t_33 = NULL;
                                                              if(((l_33 != NULL) && (l_33 != s_33)))
                                                                _fail(s_33);
                                                              else
                                                                l_33 = s_33;
                                                              {
                                                                ATerm u_33 = NULL;
                                                                t = not_null(l_33);
                                                                {
                                                                  t_33 = t;
                                                                  {
                                                                    if(((n_33 != NULL) && (n_33 != t_33)))
                                                                      _fail(t_33);
                                                                    else
                                                                      n_33 = t_33;
                                                                    {
                                                                      t = not_null(q_32);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          u_33 = t;
                                                                          {
                                                                            if(((m_33 != NULL) && (m_33 != u_33)))
                                                                              _fail(u_33);
                                                                            else
                                                                              m_33 = u_33;
                                                                            {
                                                                              ATerm x_1 (ATerm t)
                                                                              {
                                                                                t = term_m_15;
                                                                                return(t);
                                                                              }
                                                                              ATerm y_1 (ATerm t)
                                                                              {
                                                                                ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
                                                                                ATerm z_1 (ATerm t)
                                                                                {
                                                                                  ATerm v_33 = NULL,x_33 = NULL;
                                                                                  ATerm w_33 = NULL;
                                                                                  w_33 = t;
                                                                                  if(((v_33 != NULL) && (v_33 != w_33)))
                                                                                    _fail(w_33);
                                                                                  else
                                                                                    v_33 = w_33;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_33));
                                                                                    {
                                                                                      x_33 = t;
                                                                                      {
                                                                                        ATerm n_15;
                                                                                        n_15 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(x_33), not_null(n_33)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_15, not_null(x_33)));
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
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_32), not_null(v_32));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      z_33 = t;
                                                                                      w_31 :
                                                                                      if(match_cons(z_33, sym__2))
                                                                                        {
                                                                                          a_34 = ATgetArgument(z_33, 0);
                                                                                          b_34 = ATgetArgument(z_33, 1);
                                                                                          {
                                                                                            if(((o_33 != NULL) && (o_33 != a_34)))
                                                                                              _fail(a_34);
                                                                                            else
                                                                                              o_33 = a_34;
                                                                                            if(((p_33 != NULL) && (p_33 != b_34)))
                                                                                              _fail(b_34);
                                                                                            else
                                                                                              p_33 = b_34;
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(o_33)), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_32))));
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
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  ATerm v_40 (ATerm t)
  {
    ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(w_38), not_null(v_38));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_m_15;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        m_40 = t;
        m_38 :
        if(match_cons(m_40, sym_Defined_2))
          {
            n_40 = ATgetArgument(m_40, 0);
            o_40 = ATgetArgument(m_40, 1);
            n_38 :
            if(match_string(n_40, "m_0"))
              {
                if(((w_38 != NULL) && (w_38 != o_40)))
                  _fail(o_40);
                else
                  w_38 = o_40;
              }
            else
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
    t = not_null(w_38);
    return(t);
  }
  ATerm w_40 (ATerm t)
  {
    ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(w_38), not_null(v_38));
    {
      ATerm c_2 (ATerm t)
      {
        t = term_m_15;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        r_40 = t;
        p_38 :
        if(match_cons(r_40, sym_Defined_2))
          {
            s_40 = ATgetArgument(r_40, 0);
            t_40 = ATgetArgument(r_40, 1);
            q_38 :
            if(match_string(s_40, "l_0"))
              {
                if(((w_38 != NULL) && (w_38 != t_40)))
                  _fail(t_40);
                else
                  w_38 = t_40;
              }
            else
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
    t = not_null(w_38);
    return(t);
  }
  u_38 = t;
  r_38 :
  if(match_cons(u_38, sym_App_2))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      s_38 :
      if(match_cons(w_38, sym_Var_1))
        {
          t_38 = ATgetArgument(w_38, 0);
          {
            ATerm p_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_38 = NULL,a_39 = NULL,j_40 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(t_38), not_null(v_38));
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_m_15;
                    return(t);
                  }
                  t = rewrite_1(t, d_2);
                  {
                    z_38 = t;
                    x_35 :
                    if(match_cons(z_38, sym_Defined_2))
                      {
                        a_39 = ATgetArgument(z_38, 0);
                        j_40 = ATgetArgument(z_38, 1);
                        y_35 :
                        if(match_string(a_39, "p_0"))
                          {
                            if(((t_38 != NULL) && (t_38 != j_40)))
                              _fail(j_40);
                            else
                              t_38 = j_40;
                          }
                        else
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_38));
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
                      t = v_40(t);
                      LocalPopChoice(s_15);
                    }
                  else
                    {
                      t = r_15;
                      t = w_40(t);
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
              t = v_40(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              t = w_40(t);
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
  ATerm d_41 = NULL,o_41 = NULL,p_41 = NULL;
  d_41 = t;
  c_41 :
  if(((ATgetType(d_41) == AT_LIST) && ((ATermList) d_41 != ATempty)))
    {
      o_41 = ATgetFirst((ATermList) d_41);
      p_41 = (ATerm) ATgetNext((ATermList) d_41);
      t = not_null(p_41);
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
  v_41 :
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
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm o_42 = NULL;
    ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
    t = w_99(t);
    {
      o_42 = t;
      {
        if(((m_42 != NULL) && (m_42 != o_42)))
          _fail(o_42);
        else
          m_42 = o_42;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_42), term_h_16);
              t = table_get_0(t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            p_42 = t;
            i_42 :
            if(((ATgetType(p_42) == AT_LIST) && ((ATermList) p_42 != ATempty)))
              {
                q_42 = ATgetFirst((ATermList) p_42);
                r_42 = (ATerm) ATgetNext((ATermList) p_42);
                {
                  if(((n_42 != NULL) && (n_42 != q_42)))
                    _fail(q_42);
                  else
                    n_42 = q_42;
                  {
                    if(((l_42 != NULL) && (l_42 != r_42)))
                      _fail(r_42);
                    else
                      l_42 = r_42;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_42), term_h_16, not_null(l_42));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_42);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm s_42 = NULL;
                              s_42 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_42), not_null(s_42));
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
ATerm restore_always_2 (ATerm t, ATerm k_114 (ATerm), ATerm l_114 (ATerm))
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_114(t);
      t = l_114(t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        t = l_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm b_44 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm c_44 = NULL;
    ATerm d_44 = NULL;
    t = v_99(t);
    {
      c_44 = t;
      {
        if(((b_44 != NULL) && (b_44 != c_44)))
          _fail(c_44);
        else
          b_44 = c_44;
        {
          ATerm e_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), term_h_16);
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
              e_44 = t;
              if(((d_44 != NULL) && (d_44 != e_44)))
                _fail(e_44);
              else
                d_44 = e_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_44), term_h_16, (ATerm) ATinsert(CheckATermList(not_null(d_44)), (ATerm) ATempty));
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
  ATerm l_44 = NULL,m_44 = NULL,s_44 = NULL,t_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym__3))
    {
      m_44 = ATgetArgument(l_44, 0);
      s_44 = ATgetArgument(l_44, 1);
      t_44 = ATgetArgument(l_44, 2);
      {
        ATerm z_44 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_m_15;
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          ATerm c_45 = NULL;
          t = not_null(s_44);
          {
            t = tvars_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm a_45 = NULL;
                a_45 = t;
                {
                  ATerm r_16;
                  r_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(a_45), not_null(m_44)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_16, not_null(a_45)));
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
                    c_45 = t;
                    if(((z_44 != NULL) && (z_44 != c_45)))
                      _fail(c_45);
                    else
                      z_44 = c_45;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, g_2, h_2);
        t = not_null(z_44);
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
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  d_46 = t;
  v_45 :
  if(match_cons(d_46, sym_Seq_2))
    {
      e_46 = ATgetArgument(d_46, 0);
      i_46 = ATgetArgument(d_46, 1);
      w_45 :
      if(match_cons(e_46, sym_Call_2))
        {
          f_46 = ATgetArgument(e_46, 0);
          h_46 = ATgetArgument(e_46, 1);
          x_45 :
          if(match_cons(f_46, sym_SVar_1))
            {
              g_46 = ATgetArgument(f_46, 0);
              y_45 :
              if(match_string(g_46, "mark"))
                {
                  z_45 :
                  if(((ATermList) h_46 == ATempty))
                    {
                      a_46 :
                      if(match_cons(i_46, sym_Seq_2))
                        {
                          j_46 = ATgetArgument(i_46, 0);
                          l_46 = ATgetArgument(i_46, 1);
                          b_46 :
                          if(match_cons(j_46, sym_Match_1))
                            {
                              k_46 = ATgetArgument(j_46, 0);
                              c_46 :
                              if(match_cons(l_46, sym_Build_1))
                                {
                                  m_46 = ATgetArgument(l_46, 0);
                                  {
                                    ATerm t_16 = t;
                                    int x_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm p_46 = NULL,q_46 = NULL;
                                        ATerm r_46 = NULL,s_46 = NULL,b_47 = NULL;
                                        t = term_k_15;
                                        {
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_z_16;
                                            return(t);
                                          }
                                          t = rewrite_1(t, k_2);
                                          {
                                            r_46 = t;
                                            l_45 :
                                            if(match_cons(r_46, sym_Defined_2))
                                              {
                                                s_46 = ATgetArgument(r_46, 0);
                                                b_47 = ATgetArgument(r_46, 1);
                                                m_45 :
                                                if(match_string(s_46, "n_0"))
                                                  {
                                                    ATerm c_47 = NULL;
                                                    if(((p_46 != NULL) && (p_46 != b_47)))
                                                      _fail(b_47);
                                                    else
                                                      p_46 = b_47;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_46), not_null(k_46), not_null(m_46));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          c_47 = t;
                                                          if(((q_46 != NULL) && (q_46 != c_47)))
                                                            _fail(c_47);
                                                          else
                                                            q_46 = c_47;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_46)));
                                        LocalPopChoice(x_16);
                                      }
                                    else
                                      {
                                        t = t_16;
                                        {
                                          ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                                          ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
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
                                              t_45 :
                                              if(match_cons(l_47, sym_Defined_2))
                                                {
                                                  m_47 = ATgetArgument(l_47, 0);
                                                  n_47 = ATgetArgument(l_47, 1);
                                                  u_45 :
                                                  if(match_string(m_47, "j_0"))
                                                    {
                                                      ATerm o_47 = NULL;
                                                      if(((h_47 != NULL) && (h_47 != n_47)))
                                                        _fail(n_47);
                                                      else
                                                        h_47 = n_47;
                                                      {
                                                        ATerm r_47 = NULL;
                                                        t = not_null(h_47);
                                                        {
                                                          o_47 = t;
                                                          {
                                                            if(((j_47 != NULL) && (j_47 != o_47)))
                                                              _fail(o_47);
                                                            else
                                                              j_47 = o_47;
                                                            {
                                                              t = not_null(k_46);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  r_47 = t;
                                                                  {
                                                                    if(((i_47 != NULL) && (i_47 != r_47)))
                                                                      _fail(r_47);
                                                                    else
                                                                      i_47 = r_47;
                                                                    {
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        t = term_m_15;
                                                                        return(t);
                                                                      }
                                                                      ATerm n_2 (ATerm t)
                                                                      {
                                                                        ATerm w_47 = NULL;
                                                                        ATerm o_2 (ATerm t)
                                                                        {
                                                                          ATerm s_47 = NULL,u_47 = NULL;
                                                                          ATerm t_47 = NULL;
                                                                          t_47 = t;
                                                                          if(((s_47 != NULL) && (s_47 != t_47)))
                                                                            _fail(t_47);
                                                                          else
                                                                            s_47 = t_47;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_47));
                                                                            {
                                                                              u_47 = t;
                                                                              {
                                                                                ATerm c_17;
                                                                                c_17 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(u_47), not_null(j_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_17, not_null(u_47)));
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
                                                                          t = not_null(m_46);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              w_47 = t;
                                                                              if(((k_47 != NULL) && (k_47 != w_47)))
                                                                                _fail(w_47);
                                                                              else
                                                                                k_47 = w_47;
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_47)));
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
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  e_49 = t;
  x_48 :
  if(match_cons(e_49, sym_App_2))
    {
      f_49 = ATgetArgument(e_49, 0);
      l_49 = ATgetArgument(e_49, 1);
      y_48 :
      if(match_cons(f_49, sym_Call_2))
        {
          g_49 = ATgetArgument(f_49, 0);
          i_49 = ATgetArgument(f_49, 1);
          z_48 :
          if(match_cons(g_49, sym_SVar_1))
            {
              h_49 = ATgetArgument(g_49, 0);
              a_49 :
              if(match_string(h_49, "bottomup_1"))
                {
                  b_49 :
                  if(((ATgetType(i_49) == AT_LIST) && ((ATermList) i_49 != ATempty)))
                    {
                      j_49 = ATgetFirst((ATermList) i_49);
                      k_49 = (ATerm) ATgetNext((ATermList) i_49);
                      c_49 :
                      if(((ATermList) k_49 == ATempty))
                        {
                          d_49 :
                          if(match_cons(l_49, sym_Op_2))
                            {
                              m_49 = ATgetArgument(l_49, 0);
                              n_49 = ATgetArgument(l_49, 1);
                              {
                                ATerm r_49 = NULL;
                                ATerm u_49 = NULL;
                                t = not_null(n_49);
                                {
                                  ATerm q_2 (ATerm t)
                                  {
                                    ATerm s_49 = NULL;
                                    s_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, not_null(j_49))), not_null(s_49));
                                    return(t);
                                  }
                                  t = map_1(t, q_2);
                                  {
                                    u_49 = t;
                                    if(((r_49 != NULL) && (r_49 != u_49)))
                                      _fail(u_49);
                                    else
                                      r_49 = u_49;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(j_49), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_49), not_null(r_49)));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  b_50 = t;
  z_49 :
  if(match_cons(b_50, sym_Seq_2))
    {
      c_50 = ATgetArgument(b_50, 0);
      e_50 = ATgetArgument(b_50, 1);
      a_50 :
      if(match_cons(c_50, sym_Build_1))
        {
          d_50 = ATgetArgument(c_50, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(e_50), not_null(d_50)));
        }
      else
        {
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
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  p_50 = t;
  l_50 :
  if(match_cons(p_50, sym_LChoice_2))
    {
      q_50 = ATgetArgument(p_50, 0);
      t_50 = ATgetArgument(p_50, 1);
      m_50 :
      if(match_cons(q_50, sym_LChoice_2))
        {
          r_50 = ATgetArgument(q_50, 0);
          s_50 = ATgetArgument(q_50, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_50), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_50), not_null(t_50)));
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
          t_50 = ATgetArgument(p_50, 1);
          n_50 :
          if(match_cons(q_50, sym_Seq_2))
            {
              r_50 = ATgetArgument(q_50, 0);
              s_50 = ATgetArgument(q_50, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_50), not_null(t_50)));
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
              t_50 = ATgetArgument(p_50, 1);
              o_50 :
              if(match_cons(q_50, sym_Choice_2))
                {
                  r_50 = ATgetArgument(q_50, 0);
                  s_50 = ATgetArgument(q_50, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_50), (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_50), not_null(t_50)));
                }
              else
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
  ATerm q_51 = NULL,r_51 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
  q_51 = t;
  o_51 :
  if(match_cons(q_51, sym_Seq_2))
    {
      r_51 = ATgetArgument(q_51, 0);
      e_52 = ATgetArgument(q_51, 1);
      p_51 :
      if(match_cons(r_51, sym_Scope_2))
        {
          c_52 = ATgetArgument(r_51, 0);
          d_52 = ATgetArgument(r_51, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_52), not_null(e_52)));
        }
      else
        {
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
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  s_52 = t;
  q_52 :
  if(match_cons(s_52, sym_Seq_2))
    {
      t_52 = ATgetArgument(s_52, 0);
      w_52 = ATgetArgument(s_52, 1);
      r_52 :
      if(match_cons(t_52, sym_LChoice_2))
        {
          u_52 = ATgetArgument(t_52, 0);
          v_52 = ATgetArgument(t_52, 1);
          {
            ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_52));
            {
              ATerm r_2 (ATerm t)
              {
                t = term_g_17;
                return(t);
              }
              t = rewrite_1(t, r_2);
              {
                a_53 = t;
                o_52 :
                if(match_cons(a_53, sym_Defined_2))
                  {
                    b_53 = ATgetArgument(a_53, 0);
                    c_53 = ATgetArgument(a_53, 1);
                    p_52 :
                    if(match_string(b_53, "b_0"))
                      {
                        if(((w_52 != NULL) && (w_52 != c_53)))
                          _fail(c_53);
                        else
                          w_52 = c_53;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(u_52), not_null(w_52)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_52), not_null(w_52)));
          }
        }
      else
        {
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
  ATerm o_53 = NULL,p_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  o_53 = t;
  l_53 :
  if(match_cons(o_53, sym_Seq_2))
    {
      p_53 = ATgetArgument(o_53, 0);
      t_53 = ATgetArgument(o_53, 1);
      m_53 :
      if(match_cons(p_53, sym_Choice_2))
        {
          r_53 = ATgetArgument(p_53, 0);
          s_53 = ATgetArgument(p_53, 1);
          {
            ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(t_53));
            {
              ATerm s_2 (ATerm t)
              {
                t = term_h_17;
                return(t);
              }
              t = rewrite_1(t, s_2);
              {
                x_53 = t;
                j_53 :
                if(match_cons(x_53, sym_Defined_2))
                  {
                    y_53 = ATgetArgument(x_53, 0);
                    z_53 = ATgetArgument(x_53, 1);
                    k_53 :
                    if(match_string(y_53, "a_0"))
                      {
                        if(((t_53 != NULL) && (t_53 != z_53)))
                          _fail(z_53);
                        else
                          t_53 = z_53;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(r_53), not_null(t_53)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_53), not_null(t_53)));
          }
        }
      else
        {
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
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0(t);
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
              {
                ATerm q_17 = t;
                int r_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0(t);
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = q_17;
                    {
                      ATerm s_17 = t;
                      int w_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0(t);
                          LocalPopChoice(w_17);
                        }
                      else
                        {
                          t = s_17;
                          {
                            ATerm y_17 = t;
                            int b_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = IntroduceApp_0(t);
                                LocalPopChoice(b_18);
                              }
                            else
                              {
                                t = y_17;
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
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  f_54 = t;
  d_54 :
  if(match_cons(f_54, sym_Seq_2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      e_54 :
      if(match_cons(h_54, sym_Scope_2))
        {
          i_54 = ATgetArgument(h_54, 0);
          j_54 = ATgetArgument(h_54, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_54), not_null(j_54)));
        }
      else
        {
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
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  r_54 = t;
  p_54 :
  if(match_cons(r_54, sym_Seq_2))
    {
      s_54 = ATgetArgument(r_54, 0);
      t_54 = ATgetArgument(r_54, 1);
      q_54 :
      if(match_cons(t_54, sym_LChoice_2))
        {
          u_54 = ATgetArgument(t_54, 0);
          v_54 = ATgetArgument(t_54, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(s_54), not_null(u_54)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_54), not_null(v_54)));
        }
      else
        {
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
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  g_55 = t;
  e_55 :
  if(match_cons(g_55, sym_Seq_2))
    {
      h_55 = ATgetArgument(g_55, 0);
      i_55 = ATgetArgument(g_55, 1);
      f_55 :
      if(match_cons(i_55, sym_Choice_2))
        {
          j_55 = ATgetArgument(i_55, 0);
          k_55 = ATgetArgument(i_55, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(h_55), not_null(j_55)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_55), not_null(k_55)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm n_114 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    t = bottomup_1(t, n_114);
    return(t);
  }
  t = _all(t, u_2);
  t = n_114(t);
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
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0(t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceL_0(t);
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              t = SeqOverScopeL_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1(t, x_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm v_55 = NULL,w_55 = NULL;
  v_55 = t;
  u_55 :
  if(match_cons(v_55, sym_Build_1))
    {
      w_55 = ATgetArgument(v_55, 0);
      {
        ATerm z_55 = NULL,b_56 = NULL;
        ATerm a_56 = NULL;
        t = SSLgetAnnotations(not_null(v_55));
        {
          a_56 = t;
          if(((z_55 != NULL) && (z_55 != a_56)))
            _fail(a_56);
          else
            z_55 = a_56;
        }
        {
          t = not_null(w_55);
          {
            ATerm d_56 = NULL;
            t = g_89(t);
            {
              b_56 = t;
              {
                ATerm e_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(b_56)), not_null(z_55));
                {
                  e_56 = t;
                  if(((d_56 != NULL) && (d_56 != e_56)))
                    _fail(e_56);
                  else
                    d_56 = e_56;
                }
                t = not_null(d_56);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm q_87 (ATerm), ATerm r_87 (ATerm))
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  o_56 :
  if(match_cons(p_56, sym_Seq_2))
    {
      q_56 = ATgetArgument(p_56, 0);
      r_56 = ATgetArgument(p_56, 1);
      {
        ATerm v_56 = NULL,x_56 = NULL;
        ATerm w_56 = NULL;
        t = SSLgetAnnotations(not_null(p_56));
        {
          w_56 = t;
          if(((v_56 != NULL) && (v_56 != w_56)))
            _fail(w_56);
          else
            v_56 = w_56;
        }
        {
          t = not_null(q_56);
          {
            ATerm z_56 = NULL;
            t = q_87(t);
            {
              x_56 = t;
              {
                t = not_null(r_56);
                {
                  ATerm b_57 = NULL;
                  t = r_87(t);
                  {
                    z_56 = t;
                    {
                      ATerm c_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(x_56), not_null(z_56)), not_null(v_56));
                      {
                        c_57 = t;
                        if(((b_57 != NULL) && (b_57 != c_57)))
                          _fail(c_57);
                        else
                          b_57 = c_57;
                      }
                      t = not_null(b_57);
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
ATerm Match_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm n_57 = NULL,o_57 = NULL;
  n_57 = t;
  m_57 :
  if(match_cons(n_57, sym_Match_1))
    {
      o_57 = ATgetArgument(n_57, 0);
      {
        ATerm r_57 = NULL,t_57 = NULL;
        ATerm s_57 = NULL;
        t = SSLgetAnnotations(not_null(n_57));
        {
          s_57 = t;
          if(((r_57 != NULL) && (r_57 != s_57)))
            _fail(s_57);
          else
            r_57 = s_57;
        }
        {
          t = not_null(o_57);
          {
            ATerm v_57 = NULL;
            t = f_89(t);
            {
              t_57 = t;
              {
                ATerm w_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(t_57)), not_null(r_57));
                {
                  w_57 = t;
                  if(((v_57 != NULL) && (v_57 != w_57)))
                    _fail(w_57);
                  else
                    v_57 = w_57;
                }
                t = not_null(v_57);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
  h_58 = t;
  g_58 :
  if(match_cons(h_58, sym_LChoice_2))
    {
      i_58 = ATgetArgument(h_58, 0);
      j_58 = ATgetArgument(h_58, 1);
      {
        ATerm n_58 = NULL,s_58 = NULL;
        ATerm r_58 = NULL;
        t = SSLgetAnnotations(not_null(h_58));
        {
          r_58 = t;
          if(((n_58 != NULL) && (n_58 != r_58)))
            _fail(r_58);
          else
            n_58 = r_58;
        }
        {
          t = not_null(i_58);
          {
            ATerm u_58 = NULL;
            t = u_87(t);
            {
              s_58 = t;
              {
                t = not_null(j_58);
                {
                  ATerm w_58 = NULL;
                  t = v_87(t);
                  {
                    u_58 = t;
                    {
                      ATerm x_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(s_58), not_null(u_58)), not_null(n_58));
                      {
                        x_58 = t;
                        if(((w_58 != NULL) && (w_58 != x_58)))
                          _fail(x_58);
                        else
                          w_58 = x_58;
                      }
                      t = not_null(w_58);
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
ATerm Choice_2 (ATerm t, ATerm s_87 (ATerm), ATerm t_87 (ATerm))
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
  j_59 = t;
  i_59 :
  if(match_cons(j_59, sym_Choice_2))
    {
      k_59 = ATgetArgument(j_59, 0);
      l_59 = ATgetArgument(j_59, 1);
      {
        ATerm p_59 = NULL,r_59 = NULL;
        ATerm q_59 = NULL;
        t = SSLgetAnnotations(not_null(j_59));
        {
          q_59 = t;
          if(((p_59 != NULL) && (p_59 != q_59)))
            _fail(q_59);
          else
            p_59 = q_59;
        }
        {
          t = not_null(k_59);
          {
            ATerm t_59 = NULL;
            t = s_87(t);
            {
              r_59 = t;
              {
                t = not_null(l_59);
                {
                  ATerm v_59 = NULL;
                  t = t_87(t);
                  {
                    t_59 = t;
                    {
                      ATerm w_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(r_59), not_null(t_59)), not_null(p_59));
                      {
                        w_59 = t;
                        if(((v_59 != NULL) && (v_59 != w_59)))
                          _fail(w_59);
                        else
                          v_59 = w_59;
                      }
                      t = not_null(v_59);
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
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm k_18 = t;
                int p_18 = stack_ptr;
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
                    LocalPopChoice(p_18);
                  }
                else
                  {
                    t = k_18;
                    {
                      ATerm q_18 = t;
                      int r_18 = stack_ptr;
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
                          LocalPopChoice(r_18);
                        }
                      else
                        {
                          t = q_18;
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
  ATerm e_60 = NULL;
  e_60 = t;
  {
    ATerm v_18;
    v_18 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATmakeAppl(sym_Defined_2, term_x_18, not_null(e_60)));
      {
        ATerm g_3 (ATerm t)
        {
          t = term_z_16;
          return(t);
        }
        t = assert_1(t, g_3);
      }
    }
    t = v_18;
    {
      ATerm a_19;
      a_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATmakeAppl(sym_Defined_2, term_b_19, not_null(e_60)));
        {
          ATerm h_3 (ATerm t)
          {
            t = term_l_15;
            return(t);
          }
          t = assert_1(t, h_3);
        }
      }
      t = a_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm i_60 = NULL;
  i_60 = t;
  {
    ATerm c_19;
    c_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(i_60)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_19, not_null(i_60)));
      {
        ATerm i_3 (ATerm t)
        {
          t = term_h_17;
          return(t);
        }
        t = assert_1(t, i_3);
      }
    }
    t = c_19;
    {
      ATerm e_19;
      e_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(i_60)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_19, not_null(i_60)));
        {
          ATerm j_3 (ATerm t)
          {
            t = term_g_17;
            return(t);
          }
          t = assert_1(t, j_3);
        }
      }
      t = e_19;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  t_60 = t;
  o_60 :
  if(match_cons(t_60, sym_Call_2))
    {
      u_60 = ATgetArgument(t_60, 0);
      w_60 = ATgetArgument(t_60, 1);
      p_60 :
      if(match_cons(u_60, sym_SVar_1))
        {
          v_60 = ATgetArgument(u_60, 0);
          q_60 :
          if(match_string(v_60, "innermost_1"))
            {
              r_60 :
              if(((ATgetType(w_60) == AT_LIST) && ((ATermList) w_60 != ATempty)))
                {
                  x_60 = ATgetFirst((ATermList) w_60);
                  y_60 = (ATerm) ATgetNext((ATermList) w_60);
                  s_60 :
                  if(((ATermList) y_60 == ATempty))
                    {
                      {
                        ATerm a_61 = NULL,c_61 = NULL;
                        ATerm k_3 (ATerm t)
                        {
                          ATerm l_3 (ATerm t)
                          {
                            t = term_g_19;
                            return(t);
                          }
                          t = say_1(t, l_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, k_3);
                        {
                          ATerm h_19;
                          h_19 = t;
                          {
                            ATerm b_61 = NULL;
                            t = new_0(t);
                            {
                              b_61 = t;
                              if(((a_61 != NULL) && (a_61 != b_61)))
                                _fail(b_61);
                              else
                                a_61 = b_61;
                            }
                          }
                          t = h_19;
                          {
                            ATerm k_19;
                            k_19 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_61)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = k_19;
                            {
                              ATerm l_19;
                              l_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_61)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = l_19;
                              {
                                ATerm d_61 = NULL;
                                t = not_null(x_60);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    d_61 = t;
                                    if(((c_61 != NULL) && (c_61 != d_61)))
                                      _fail(d_61);
                                    else
                                      c_61 = d_61;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(a_61), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_z_19, not_null(c_61)), (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_61)), (ATerm) ATempty)))), term_j_12))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm m_3 (ATerm t)
                                        {
                                          ATerm i_20 = t;
                                          int j_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(j_20);
                                            }
                                          else
                                            {
                                              t = i_20;
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
                                                t = term_k_20;
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
ATerm alltd_1 (ATerm t, ATerm q_116 (ATerm))
{
  ATerm h_61 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_116(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = _all(t, h_61);
      }
    return(t);
  }
  t = h_61(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm x_61 = NULL;
  ATerm n_20;
  n_20 = t;
  {
    ATerm y_61 = NULL;
    t = new_0(t);
    {
      y_61 = t;
      {
        if(((x_61 != NULL) && (x_61 != y_61)))
          _fail(y_61);
        else
          x_61 = y_61;
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_61)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm q_3 (ATerm t)
                  {
                    t = term_q_20;
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
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL;
                z_61 = t;
                k_61 :
                if(match_cons(z_61, sym_Seq_2))
                  {
                    a_62 = ATgetArgument(z_61, 0);
                    k_62 = ATgetArgument(z_61, 1);
                    l_61 :
                    if(match_cons(a_62, sym_All_1))
                      {
                        b_62 = ATgetArgument(a_62, 0);
                        m_61 :
                        if(match_cons(b_62, sym_Call_2))
                          {
                            c_62 = ATgetArgument(b_62, 0);
                            e_62 = ATgetArgument(b_62, 1);
                            n_61 :
                            if(match_cons(c_62, sym_SVar_1))
                              {
                                d_62 = ATgetArgument(c_62, 0);
                                o_61 :
                                if(match_string(d_62, "bottomup_1"))
                                  {
                                    p_61 :
                                    if(((ATgetType(e_62) == AT_LIST) && ((ATermList) e_62 != ATempty)))
                                      {
                                        f_62 = ATgetFirst((ATermList) e_62);
                                        j_62 = (ATerm) ATgetNext((ATermList) e_62);
                                        q_61 :
                                        if(match_cons(f_62, sym_Call_2))
                                          {
                                            g_62 = ATgetArgument(f_62, 0);
                                            i_62 = ATgetArgument(f_62, 1);
                                            r_61 :
                                            if(match_cons(g_62, sym_SVar_1))
                                              {
                                                h_62 = ATgetArgument(g_62, 0);
                                                s_61 :
                                                if(((ATermList) i_62 == ATempty))
                                                  {
                                                    t_61 :
                                                    if(((ATermList) j_62 == ATempty))
                                                      {
                                                        u_61 :
                                                        if(match_cons(k_62, sym_Call_2))
                                                          {
                                                            l_62 = ATgetArgument(k_62, 0);
                                                            n_62 = ATgetArgument(k_62, 1);
                                                            v_61 :
                                                            if(match_cons(l_62, sym_SVar_1))
                                                              {
                                                                m_62 = ATgetArgument(l_62, 0);
                                                                w_61 :
                                                                if(((ATermList) n_62 == ATempty))
                                                                  {
                                                                    {
                                                                      if(((x_61 != NULL) && (x_61 != h_62)))
                                                                        _fail(h_62);
                                                                      else
                                                                        x_61 = h_62;
                                                                      if(((x_61 != NULL) && (x_61 != m_62)))
                                                                        _fail(m_62);
                                                                      else
                                                                        x_61 = m_62;
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                {
                  ATerm r_3 (ATerm t)
                  {
                    ATerm s_3 (ATerm t)
                    {
                      t = term_t_20;
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
                  t = term_u_20;
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
  t = n_20;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  ATerm v_20;
  v_20 = t;
  {
    ATerm r_63 = NULL;
    t = new_0(t);
    {
      r_63 = t;
      {
        if(((p_63 != NULL) && (p_63 != r_63)))
          _fail(r_63);
        else
          p_63 = r_63;
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_z_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_63)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = term_k_21;
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
            ATerm l_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
                s_63 = t;
                s_62 :
                if(match_cons(s_63, sym_Call_2))
                  {
                    t_63 = ATgetArgument(s_63, 0);
                    v_63 = ATgetArgument(s_63, 1);
                    t_62 :
                    if(match_cons(t_63, sym_SVar_1))
                      {
                        u_63 = ATgetArgument(t_63, 0);
                        u_62 :
                        if(match_string(u_63, "bottomup_1"))
                          {
                            v_62 :
                            if(((ATgetType(v_63) == AT_LIST) && ((ATermList) v_63 != ATempty)))
                              {
                                w_63 = ATgetFirst((ATermList) v_63);
                                r_64 = (ATerm) ATgetNext((ATermList) v_63);
                                w_62 :
                                if(match_cons(w_63, sym_Rec_2))
                                  {
                                    x_63 = ATgetArgument(w_63, 0);
                                    y_63 = ATgetArgument(w_63, 1);
                                    x_62 :
                                    if(match_cons(y_63, sym_Call_2))
                                      {
                                        z_63 = ATgetArgument(y_63, 0);
                                        b_64 = ATgetArgument(y_63, 1);
                                        y_62 :
                                        if(match_cons(z_63, sym_SVar_1))
                                          {
                                            a_64 = ATgetArgument(z_63, 0);
                                            z_62 :
                                            if(match_string(a_64, "try_1"))
                                              {
                                                a_63 :
                                                if(((ATgetType(b_64) == AT_LIST) && ((ATermList) b_64 != ATempty)))
                                                  {
                                                    c_64 = ATgetFirst((ATermList) b_64);
                                                    q_64 = (ATerm) ATgetNext((ATermList) b_64);
                                                    b_63 :
                                                    if(match_cons(c_64, sym_Seq_2))
                                                      {
                                                        d_64 = ATgetArgument(c_64, 0);
                                                        h_64 = ATgetArgument(c_64, 1);
                                                        c_63 :
                                                        if(match_cons(d_64, sym_Call_2))
                                                          {
                                                            e_64 = ATgetArgument(d_64, 0);
                                                            g_64 = ATgetArgument(d_64, 1);
                                                            d_63 :
                                                            if(match_cons(e_64, sym_SVar_1))
                                                              {
                                                                f_64 = ATgetArgument(e_64, 0);
                                                                e_63 :
                                                                if(((ATermList) g_64 == ATempty))
                                                                  {
                                                                    f_63 :
                                                                    if(match_cons(h_64, sym_Call_2))
                                                                      {
                                                                        i_64 = ATgetArgument(h_64, 0);
                                                                        k_64 = ATgetArgument(h_64, 1);
                                                                        g_63 :
                                                                        if(match_cons(i_64, sym_SVar_1))
                                                                          {
                                                                            j_64 = ATgetArgument(i_64, 0);
                                                                            h_63 :
                                                                            if(match_string(j_64, "bottomup_1"))
                                                                              {
                                                                                i_63 :
                                                                                if(((ATgetType(k_64) == AT_LIST) && ((ATermList) k_64 != ATempty)))
                                                                                  {
                                                                                    l_64 = ATgetFirst((ATermList) k_64);
                                                                                    p_64 = (ATerm) ATgetNext((ATermList) k_64);
                                                                                    j_63 :
                                                                                    if(match_cons(l_64, sym_Call_2))
                                                                                      {
                                                                                        m_64 = ATgetArgument(l_64, 0);
                                                                                        o_64 = ATgetArgument(l_64, 1);
                                                                                        k_63 :
                                                                                        if(match_cons(m_64, sym_SVar_1))
                                                                                          {
                                                                                            n_64 = ATgetArgument(m_64, 0);
                                                                                            l_63 :
                                                                                            if(((ATermList) o_64 == ATempty))
                                                                                              {
                                                                                                m_63 :
                                                                                                if(((ATermList) p_64 == ATempty))
                                                                                                  {
                                                                                                    n_63 :
                                                                                                    if(((ATermList) q_64 == ATempty))
                                                                                                      {
                                                                                                        o_63 :
                                                                                                        if(((ATermList) r_64 == ATempty))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((q_63 != NULL) && (q_63 != x_63)))
                                                                                                                _fail(x_63);
                                                                                                              else
                                                                                                                q_63 = x_63;
                                                                                                              {
                                                                                                                if(((p_63 != NULL) && (p_63 != f_64)))
                                                                                                                  _fail(f_64);
                                                                                                                else
                                                                                                                  p_63 = f_64;
                                                                                                                if(((q_63 != NULL) && (q_63 != n_64)))
                                                                                                                  _fail(n_64);
                                                                                                                else
                                                                                                                  q_63 = n_64;
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
                LocalPopChoice(m_21);
              }
            else
              {
                t = l_21;
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm y_3 (ATerm t)
                    {
                      t = term_n_21;
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
                  t = term_o_21;
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
  t = v_20;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  y_64 = t;
  v_64 :
  if(match_cons(y_64, sym_Call_2))
    {
      z_64 = ATgetArgument(y_64, 0);
      b_65 = ATgetArgument(y_64, 1);
      w_64 :
      if(match_cons(z_64, sym_SVar_1))
        {
          a_65 = ATgetArgument(z_64, 0);
          x_64 :
          if(((ATermList) b_65 == ATempty))
            {
              t = not_null(a_65);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm f_94 (ATerm), ATerm g_94 (ATerm))
{
  ATerm h_65 = NULL;
  ATerm j_65 = NULL,k_65 = NULL;
  h_65 = t;
  {
    ATerm l_65 = NULL;
    t = not_null(h_65);
    {
      ATerm m_65 = NULL;
      t = f_94(t);
      {
        l_65 = t;
        {
          if(((j_65 != NULL) && (j_65 != l_65)))
            _fail(l_65);
          else
            j_65 = l_65;
          {
            t = g_94(t);
            {
              m_65 = t;
              if(((k_65 != NULL) && (k_65 != m_65)))
                _fail(m_65);
              else
                k_65 = m_65;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_65), not_null(k_65));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
  u_65 = t;
  t_65 :
  if(match_cons(u_65, sym__2))
    {
      v_65 = ATgetArgument(u_65, 0);
      w_65 = ATgetArgument(u_65, 1);
      {
        ATerm z_65 = NULL;
        if(((z_65 != NULL) && (z_65 != w_65)))
          _fail(w_65);
        else
          z_65 = w_65;
      }
    }
  else
    {
      if(match_cons(u_65, sym__3))
        {
          v_65 = ATgetArgument(u_65, 0);
          w_65 = ATgetArgument(u_65, 1);
          x_65 = ATgetArgument(u_65, 2);
          {
            ATerm f_66 = NULL;
            ATerm g_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_65), not_null(w_65));
            {
              t = zip_1(t, _id);
              {
                g_66 = t;
                if(((f_66 != NULL) && (f_66 != g_66)))
                  _fail(g_66);
                else
                  f_66 = g_66;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_66), not_null(x_65));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm h_94 (ATerm), ATerm i_94 (ATerm))
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
  t = subs_args_0(t);
  {
    m_66 = t;
    l_66 :
    if(match_cons(m_66, sym__2))
      {
        n_66 = ATgetArgument(m_66, 0);
        o_66 = ATgetArgument(m_66, 1);
        {
          t = not_null(o_66);
          {
            ATerm b_4 (ATerm t)
            {
              ATerm c_4 (ATerm t)
              {
                t = not_null(n_66);
                return(t);
              }
              t = SubsVar_2(t, h_94, c_4);
              t = i_94(t);
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
ATerm substitute_1 (ATerm t, ATerm j_94 (ATerm))
{
  t = substitute_2(t, j_94, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        t = split_2(t, _id, i_91);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
            c_67 = t;
            x_66 :
            if(match_cons(c_67, sym__2))
              {
                d_67 = ATgetArgument(c_67, 0);
                h_67 = ATgetArgument(c_67, 1);
                y_66 :
                if(match_cons(d_67, sym_SDef_3))
                  {
                    e_67 = ATgetArgument(d_67, 0);
                    f_67 = ATgetArgument(d_67, 1);
                    g_67 = ATgetArgument(d_67, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_67), not_null(f_67), not_null(g_67));
                  }
                else
                  {
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
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              t = split_2(t, _id, i_91);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,t_67 = NULL;
                  l_67 = t;
                  a_67 :
                  if(match_cons(l_67, sym__2))
                    {
                      m_67 = ATgetArgument(l_67, 0);
                      t_67 = ATgetArgument(l_67, 1);
                      b_67 :
                      if(match_cons(m_67, sym_VarDec_2))
                        {
                          n_67 = ATgetArgument(m_67, 0);
                          o_67 = ATgetArgument(m_67, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_67), not_null(o_67));
                        }
                      else
                        {
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
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              ATerm h_4 (ATerm t)
              {
                t = i_91(t);
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
ATerm Rec_2 (ATerm t, ATerm f_88 (ATerm), ATerm g_88 (ATerm))
{
  ATerm h_68 = NULL,i_68 = NULL,n_68 = NULL;
  h_68 = t;
  g_68 :
  if(match_cons(h_68, sym_Rec_2))
    {
      i_68 = ATgetArgument(h_68, 0);
      n_68 = ATgetArgument(h_68, 1);
      {
        ATerm t_68 = NULL,v_68 = NULL;
        ATerm u_68 = NULL;
        t = SSLgetAnnotations(not_null(h_68));
        {
          u_68 = t;
          if(((t_68 != NULL) && (t_68 != u_68)))
            _fail(u_68);
          else
            t_68 = u_68;
        }
        {
          t = not_null(i_68);
          {
            ATerm x_68 = NULL;
            t = f_88(t);
            {
              v_68 = t;
              {
                t = not_null(n_68);
                {
                  ATerm z_68 = NULL;
                  t = g_88(t);
                  {
                    x_68 = t;
                    {
                      ATerm a_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(v_68), not_null(x_68)), not_null(t_68));
                      {
                        a_69 = t;
                        if(((z_68 != NULL) && (z_68 != a_69)))
                          _fail(a_69);
                        else
                          z_68 = a_69;
                      }
                      t = not_null(z_68);
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
ATerm SDef_3 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm))
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  n_69 = t;
  m_69 :
  if(match_cons(n_69, sym_SDef_3))
    {
      o_69 = ATgetArgument(n_69, 0);
      p_69 = ATgetArgument(n_69, 1);
      q_69 = ATgetArgument(n_69, 2);
      {
        ATerm v_69 = NULL,b_70 = NULL;
        ATerm a_70 = NULL;
        t = SSLgetAnnotations(not_null(n_69));
        {
          a_70 = t;
          if(((v_69 != NULL) && (v_69 != a_70)))
            _fail(a_70);
          else
            v_69 = a_70;
        }
        {
          t = not_null(o_69);
          {
            ATerm d_70 = NULL;
            t = j_88(t);
            {
              b_70 = t;
              {
                t = not_null(p_69);
                {
                  ATerm f_70 = NULL;
                  t = k_88(t);
                  {
                    d_70 = t;
                    {
                      t = not_null(q_69);
                      {
                        ATerm p_70 = NULL;
                        t = l_88(t);
                        {
                          f_70 = t;
                          {
                            ATerm q_70 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(b_70), not_null(d_70), not_null(f_70)), not_null(v_69));
                            {
                              q_70 = t;
                              if(((p_70 != NULL) && (p_70 != q_70)))
                                _fail(q_70);
                              else
                                p_70 = q_70;
                            }
                            t = not_null(p_70);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  d_71 = t;
  c_71 :
  if(match_cons(d_71, sym_Let_2))
    {
      e_71 = ATgetArgument(d_71, 0);
      f_71 = ATgetArgument(d_71, 1);
      {
        ATerm j_71 = NULL,l_71 = NULL;
        ATerm k_71 = NULL;
        t = SSLgetAnnotations(not_null(d_71));
        {
          k_71 = t;
          if(((j_71 != NULL) && (j_71 != k_71)))
            _fail(k_71);
          else
            j_71 = k_71;
        }
        {
          t = not_null(e_71);
          {
            ATerm n_71 = NULL;
            t = h_88(t);
            {
              l_71 = t;
              {
                t = not_null(f_71);
                {
                  ATerm p_71 = NULL;
                  t = i_88(t);
                  {
                    n_71 = t;
                    {
                      ATerm q_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(l_71), not_null(n_71)), not_null(j_71));
                      {
                        q_71 = t;
                        if(((p_71 != NULL) && (p_71 != q_71)))
                          _fail(q_71);
                        else
                          p_71 = q_71;
                      }
                      t = not_null(p_71);
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
ATerm sboundin_3 (ATerm t, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm))
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, j_91, j_91);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, l_91, l_91, j_91);
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            t = Rec_2(t, l_91, j_91);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  y_71 = t;
  x_71 :
  if(match_cons(y_71, sym_Rec_2))
    {
      z_71 = ATgetArgument(y_71, 0);
      a_72 = ATgetArgument(y_71, 1);
      t = (ATerm) ATinsert(ATempty, not_null(z_71));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  i_72 = t;
  h_72 :
  if(match_cons(i_72, sym_SDef_3))
    {
      j_72 = ATgetArgument(i_72, 0);
      k_72 = ATgetArgument(i_72, 1);
      l_72 = ATgetArgument(i_72, 2);
      {
        t = not_null(k_72);
        {
          ATerm i_4 (ATerm t)
          {
            ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
            p_72 = t;
            g_72 :
            if(match_cons(p_72, sym_VarDec_2))
              {
                q_72 = ATgetArgument(p_72, 0);
                r_72 = ATgetArgument(p_72, 1);
                t = not_null(q_72);
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
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
  d_73 = t;
  c_73 :
  if(match_cons(d_73, sym_Let_2))
    {
      e_73 = ATgetArgument(d_73, 0);
      f_73 = ATgetArgument(d_73, 1);
      {
        t = not_null(e_73);
        {
          ATerm j_4 (ATerm t)
          {
            ATerm i_73 = NULL,j_73 = NULL,n_73 = NULL,o_73 = NULL;
            i_73 = t;
            b_73 :
            if(match_cons(i_73, sym_SDef_3))
              {
                j_73 = ATgetArgument(i_73, 0);
                n_73 = ATgetArgument(i_73, 1);
                o_73 = ATgetArgument(i_73, 2);
                t = not_null(j_73);
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
ATerm SVar_1 (ATerm t, ATerm e_88 (ATerm))
{
  ATerm d_74 = NULL,e_74 = NULL;
  d_74 = t;
  c_74 :
  if(match_cons(d_74, sym_SVar_1))
    {
      e_74 = ATgetArgument(d_74, 0);
      {
        ATerm h_74 = NULL,j_74 = NULL;
        ATerm i_74 = NULL;
        t = SSLgetAnnotations(not_null(d_74));
        {
          i_74 = t;
          if(((h_74 != NULL) && (h_74 != i_74)))
            _fail(i_74);
          else
            h_74 = i_74;
        }
        {
          t = not_null(e_74);
          {
            ATerm l_74 = NULL;
            t = e_88(t);
            {
              j_74 = t;
              {
                ATerm m_74 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(j_74)), not_null(h_74));
                {
                  m_74 = t;
                  if(((l_74 != NULL) && (l_74 != m_74)))
                    _fail(m_74);
                  else
                    l_74 = m_74;
                }
                t = not_null(l_74);
              }
            }
          }
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
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, k_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm e_91 (ATerm))
{
  t = Scope_2(t, e_91, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm f_75 = NULL,g_75 = NULL;
  f_75 = t;
  e_75 :
  if(match_cons(f_75, sym_DynamicRules_1))
    {
      g_75 = ATgetArgument(f_75, 0);
      {
        ATerm j_75 = NULL,b_76 = NULL;
        ATerm k_75 = NULL;
        t = SSLgetAnnotations(not_null(f_75));
        {
          k_75 = t;
          if(((j_75 != NULL) && (j_75 != k_75)))
            _fail(k_75);
          else
            j_75 = k_75;
        }
        {
          t = not_null(g_75);
          {
            ATerm r_77 = NULL;
            t = m_86(t);
            {
              b_76 = t;
              {
                ATerm s_77 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(b_76)), not_null(j_75));
                {
                  s_77 = t;
                  if(((r_77 != NULL) && (r_77 != s_77)))
                    _fail(s_77);
                  else
                    r_77 = s_77;
                }
                t = not_null(r_77);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm j_89 (ATerm), ATerm k_89 (ATerm))
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  d_78 = t;
  c_78 :
  if(match_cons(d_78, sym_Scope_2))
    {
      e_78 = ATgetArgument(d_78, 0);
      f_78 = ATgetArgument(d_78, 1);
      {
        ATerm j_78 = NULL,l_78 = NULL;
        ATerm k_78 = NULL;
        t = SSLgetAnnotations(not_null(d_78));
        {
          k_78 = t;
          if(((j_78 != NULL) && (j_78 != k_78)))
            _fail(k_78);
          else
            j_78 = k_78;
        }
        {
          t = not_null(e_78);
          {
            ATerm n_78 = NULL;
            t = j_89(t);
            {
              l_78 = t;
              {
                t = not_null(f_78);
                {
                  ATerm p_78 = NULL;
                  t = k_89(t);
                  {
                    n_78 = t;
                    {
                      ATerm q_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_78), not_null(n_78)), not_null(j_78));
                      {
                        q_78 = t;
                        if(((p_78 != NULL) && (p_78 != q_78)))
                          _fail(q_78);
                        else
                          p_78 = q_78;
                      }
                      t = not_null(p_78);
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
ATerm tboundin_3 (ATerm t, ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm))
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, h_91, f_91);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = DynamicRules_1(t, f_91);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym_DynamicRules_1))
    {
      z_78 = ATgetArgument(y_78, 0);
      {
        t = not_null(z_78);
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
  ATerm g_79 = NULL,h_79 = NULL;
  g_79 = t;
  f_79 :
  if(match_cons(g_79, sym_Var_1))
    {
      h_79 = ATgetArgument(g_79, 0);
      t = (ATerm) ATinsert(ATempty, not_null(h_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL,o_79 = NULL;
  m_79 = t;
  l_79 :
  if(match_cons(m_79, sym__2))
    {
      n_79 = ATgetArgument(m_79, 0);
      o_79 = ATgetArgument(m_79, 1);
      {
        t = not_null(n_79);
        {
          ATerm s_79 (ATerm t)
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_79);
                LocalPopChoice(e_22);
              }
            else
              {
                t = d_22;
                {
                  ATerm f_22 = t;
                  int g_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_4 (ATerm t)
                      {
                        t = not_null(o_79);
                        return(t);
                      }
                      t = HdMember_1(t, l_4);
                      t = s_79(t);
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = f_22;
                      t = Cons_2(t, _id, s_79);
                    }
                }
              }
            return(t);
          }
          t = s_79(t);
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
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_106(t);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
        x_79 = t;
        w_79 :
        if(((ATgetType(x_79) == AT_LIST) && ((ATermList) x_79 != ATempty)))
          {
            y_79 = ATgetFirst((ATermList) x_79);
            z_79 = (ATerm) ATgetNext((ATermList) x_79);
            {
              ATerm c_80 = NULL,e_80 = NULL;
              ATerm j_22;
              j_22 = t;
              {
                ATerm d_80 = NULL;
                t = not_null(y_79);
                {
                  t = g_106(t);
                  {
                    d_80 = t;
                    if(((c_80 != NULL) && (c_80 != d_80)))
                      _fail(d_80);
                    else
                      c_80 = d_80;
                  }
                }
              }
              t = j_22;
              {
                ATerm f_80 = NULL;
                t = not_null(z_79);
                {
                  t = foldr_3(t, e_106, f_106, g_106);
                  {
                    f_80 = t;
                    if(((e_80 != NULL) && (e_80 != f_80)))
                      _fail(f_80);
                    else
                      e_80 = f_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_80), not_null(e_80));
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
ATerm crush_3 (ATerm t, ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm))
{
  ATerm n_80 = NULL;
  ATerm p_80 = NULL;
  n_80 = t;
  {
    ATerm q_80 = NULL;
    ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
    t = not_null(n_80);
    {
      q_80 = t;
      {
        t = SSL_explode_term(not_null(q_80));
        {
          s_80 = t;
          m_80 :
          if(match_cons(s_80, sym__2))
            {
              t_80 = ATgetArgument(s_80, 0);
              u_80 = ATgetArgument(s_80, 1);
              if(((p_80 != NULL) && (p_80 != u_80)))
                _fail(u_80);
              else
                p_80 = u_80;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_80);
      t = foldr_3(t, s_107, t_107, u_107);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  b_81 = t;
  z_80 :
  if(match_cons(b_81, sym__2))
    {
      c_81 = ATgetArgument(b_81, 0);
      d_81 = ATgetArgument(b_81, 1);
      a_81 :
      if(((ATgetType(d_81) == AT_LIST) && ((ATermList) d_81 != ATempty)))
        {
          e_81 = ATgetFirst((ATermList) d_81);
          f_81 = (ATerm) ATgetNext((ATermList) d_81);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_81)), not_null(e_81)), not_null(f_81));
        }
      else
        {
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
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL;
  u_81 = t;
  s_81 :
  if(((ATgetType(u_81) == AT_LIST) && ((ATermList) u_81 != ATempty)))
    {
      v_81 = ATgetFirst((ATermList) u_81);
      y_81 = (ATerm) ATgetNext((ATermList) u_81);
      t_81 :
      if(match_cons(v_81, sym__2))
        {
          w_81 = ATgetArgument(v_81, 0);
          x_81 = ATgetArgument(v_81, 1);
          {
            ATerm c_82 = NULL,d_82 = NULL,j_82 = NULL,p_82 = NULL;
            ATerm k_22;
            k_22 = t;
            {
              ATerm e_82 = NULL;
              ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
              t = not_null(x_81);
              {
                e_82 = t;
                {
                  t = SSL_explode_term(not_null(e_82));
                  {
                    g_82 = t;
                    n_81 :
                    if(match_cons(g_82, sym__2))
                      {
                        h_82 = ATgetArgument(g_82, 0);
                        i_82 = ATgetArgument(g_82, 1);
                        {
                          if(((c_82 != NULL) && (c_82 != h_82)))
                            _fail(h_82);
                          else
                            c_82 = h_82;
                          if(((d_82 != NULL) && (d_82 != i_82)))
                            _fail(i_82);
                          else
                            d_82 = i_82;
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
            t = k_22;
            {
              ATerm l_22;
              l_22 = t;
              {
                ATerm k_82 = NULL;
                ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
                t = not_null(w_81);
                {
                  k_82 = t;
                  {
                    t = SSL_explode_term(not_null(k_82));
                    {
                      m_82 = t;
                      q_81 :
                      if(match_cons(m_82, sym__2))
                        {
                          n_82 = ATgetArgument(m_82, 0);
                          o_82 = ATgetArgument(m_82, 1);
                          {
                            if(((c_82 != NULL) && (c_82 != n_82)))
                              _fail(n_82);
                            else
                              c_82 = n_82;
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
                ATerm q_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_82), not_null(d_82));
                {
                  t = zip_1(t, _id);
                  {
                    q_82 = t;
                    if(((p_82 != NULL) && (p_82 != q_82)))
                      _fail(q_82);
                    else
                      p_82 = q_82;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_82), not_null(y_81));
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
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
  a_83 = t;
  y_82 :
  if(((ATgetType(a_83) == AT_LIST) && ((ATermList) a_83 != ATempty)))
    {
      b_83 = ATgetFirst((ATermList) a_83);
      e_83 = (ATerm) ATgetNext((ATermList) a_83);
      z_82 :
      if(match_cons(b_83, sym__2))
        {
          c_83 = ATgetArgument(b_83, 0);
          d_83 = ATgetArgument(b_83, 1);
          {
            ATerm g_83 = NULL;
            if(((c_83 != NULL) && (c_83 != d_83)))
              _fail(d_83);
            else
              c_83 = d_83;
            {
              if(((g_83 != NULL) && (g_83 != e_83)))
                _fail(e_83);
              else
                g_83 = e_83;
              t = not_null(g_83);
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
  ATerm i_83 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          t = d_105(t);
          t = i_83(t);
        }
      }
    return(t);
  }
  t = i_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm))
{
  t = f_105(t);
  t = while_not_2(t, g_105, h_105);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL;
  m_83 = t;
  l_83 :
  if(((ATgetType(m_83) == AT_LIST) && ((ATermList) m_83 != ATempty)))
    {
      n_83 = ATgetFirst((ATermList) m_83);
      o_83 = (ATerm) ATgetNext((ATermList) m_83);
      {
        t = h_107(t);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm r_83 = NULL;
            r_83 = t;
            if(((n_83 != NULL) && (n_83 != r_83)))
              _fail(r_83);
            else
              n_83 = r_83;
            return(t);
          }
          t = fetch_1(t, m_4);
        }
        t = not_null(o_83);
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
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
      x_83 = t;
      v_83 :
      if(match_cons(x_83, sym__2))
        {
          y_83 = ATgetArgument(x_83, 0);
          z_83 = ATgetArgument(x_83, 1);
          {
            t = not_null(y_83);
            {
              ATerm f_84 (ATerm t)
              {
                ATerm q_22 = t;
                int b_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(b_23);
                  }
                else
                  {
                    t = q_22;
                    {
                      ATerm c_23 = t;
                      int d_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_4 (ATerm t)
                          {
                            t = not_null(z_83);
                            return(t);
                          }
                          t = HdMember_1(t, n_4);
                          t = f_84(t);
                          LocalPopChoice(d_23);
                        }
                      else
                        {
                          t = c_23;
                          t = Cons_2(t, _id, f_84);
                        }
                    }
                  }
                return(t);
              }
              t = f_84(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm c_84 = NULL;
          c_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_84));
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_4 (ATerm t)
              {
                ATerm g_23 = t;
                int l_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(l_23);
                  }
                else
                  {
                    t = g_23;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, r_4);
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, o_4, p_4, q_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_84 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_92(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          ATerm o_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_84 = NULL;
              ATerm s_23;
              s_23 = t;
              {
                ATerm j_84 = NULL;
                t = k_92(t);
                {
                  j_84 = t;
                  if(((i_84 != NULL) && (i_84 != j_84)))
                    _fail(j_84);
                  else
                    i_84 = j_84;
                }
              }
              t = s_23;
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    t = not_null(i_84);
                    return(t);
                  }
                  t = split_2(t, k_84, u_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm t_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = l_92(t, s_4, k_84, t_4);
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, v_4, union_0, _id);
                }
              }
              LocalPopChoice(r_23);
            }
          else
            {
              t = o_23;
              {
                ATerm w_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, w_4, union_0, k_84);
              }
            }
        }
      }
    return(t);
  }
  t = k_84(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, x_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t_84 = t;
  o_84 :
  if(match_cons(t_84, sym_LRule_1))
    {
      u_84 = ATgetArgument(t_84, 0);
      p_84 :
      if(match_cons(u_84, sym_Rule_3))
        {
          q_84 = ATgetArgument(u_84, 0);
          r_84 = ATgetArgument(u_84, 1);
          s_84 = ATgetArgument(u_84, 2);
          {
            t = not_null(q_84);
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
      if(match_cons(t_84, sym_Scope_2))
        {
          u_84 = ATgetArgument(t_84, 0);
          v_84 = ATgetArgument(t_84, 1);
          t = not_null(u_84);
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
  ATerm t_85 = NULL,u_85 = NULL;
  t_85 = t;
  q_85 :
  if(match_cons(t_85, sym_Var_1))
    {
      u_85 = ATgetArgument(t_85, 0);
      {
        ATerm y_23 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_85 = NULL,z_85 = NULL;
            ATerm y_85 = NULL;
            t = SSLgetAnnotations(not_null(t_85));
            {
              y_85 = t;
              if(((x_85 != NULL) && (x_85 != y_85)))
                _fail(y_85);
              else
                x_85 = y_85;
            }
            {
              t = not_null(u_85);
              {
                ATerm b_86 = NULL;
                t = w_0(t);
                {
                  z_85 = t;
                  {
                    ATerm c_86 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_85)), not_null(x_85));
                    {
                      c_86 = t;
                      if(((b_86 != NULL) && (b_86 != c_86)))
                        _fail(c_86);
                      else
                        b_86 = c_86;
                    }
                    t = not_null(b_86);
                  }
                }
              }
            }
            LocalPopChoice(b_24);
          }
        else
          {
            t = y_23;
            {
              ATerm f_86 = NULL,h_86 = NULL;
              ATerm g_86 = NULL;
              t = SSLgetAnnotations(not_null(t_85));
              {
                g_86 = t;
                if(((f_86 != NULL) && (f_86 != g_86)))
                  _fail(g_86);
                else
                  f_86 = g_86;
              }
              {
                t = not_null(u_85);
                {
                  ATerm j_86 = NULL;
                  t = w_0(t);
                  {
                    h_86 = t;
                    {
                      ATerm k_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_86)), not_null(f_86));
                      {
                        k_86 = t;
                        if(((j_86 != NULL) && (j_86 != k_86)))
                          _fail(k_86);
                        else
                          j_86 = k_86;
                      }
                      t = not_null(j_86);
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
ATerm DistBinding_2 (ATerm t, ATerm s_93 (ATerm), ATerm t_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL;
  b_87 = t;
  a_87 :
  if(match_cons(b_87, sym__3))
    {
      c_87 = ATgetArgument(b_87, 0);
      d_87 = ATgetArgument(b_87, 1);
      e_87 = ATgetArgument(b_87, 2);
      {
        t = not_null(c_87);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm i_87 = NULL;
            i_87 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_87), not_null(e_87));
              t = s_93(t);
            }
            return(t);
          }
          ATerm z_4 (ATerm t)
          {
            ATerm k_87 = NULL;
            k_87 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_87), not_null(d_87));
              t = s_93(t);
            }
            return(t);
          }
          t = t_93(t, y_4, z_4, _id);
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
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  y_87 :
  if(match_cons(z_87, sym__2))
    {
      a_88 = ATgetArgument(z_87, 0);
      b_88 = ATgetArgument(z_87, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_88)), not_null(a_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  r_88 = t;
  o_88 :
  if(match_cons(r_88, sym__2))
    {
      s_88 = ATgetArgument(r_88, 0);
      v_88 = ATgetArgument(r_88, 1);
      p_88 :
      if(((ATgetType(s_88) == AT_LIST) && ((ATermList) s_88 != ATempty)))
        {
          t_88 = ATgetFirst((ATermList) s_88);
          u_88 = (ATerm) ATgetNext((ATermList) s_88);
          q_88 :
          if(((ATgetType(v_88) == AT_LIST) && ((ATermList) v_88 != ATempty)))
            {
              w_88 = ATgetFirst((ATermList) v_88);
              x_88 = (ATerm) ATgetNext((ATermList) v_88);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_88), not_null(w_88)), (ATerm) ATmakeAppl(sym__2, not_null(u_88), not_null(x_88)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm l_89 = NULL,q_89 = NULL,r_89 = NULL;
  l_89 = t;
  e_89 :
  if(match_cons(l_89, sym__2))
    {
      q_89 = ATgetArgument(l_89, 0);
      r_89 = ATgetArgument(l_89, 1);
      h_89 :
      if(((ATermList) q_89 == ATempty))
        {
          i_89 :
          if(((ATermList) r_89 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm))
{
  ATerm t_89 (ATerm t)
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_109(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        {
          t = y_109(t);
          {
            t = _2(t, a_110, t_89);
            t = z_109(t);
          }
        }
      }
    return(t);
  }
  t = t_89(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_110 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_110);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm y_93 (ATerm), ATerm z_93 (ATerm, ATerm (ATerm)))
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
  b_90 = t;
  a_90 :
  if(match_cons(b_90, sym__2))
    {
      c_90 = ATgetArgument(b_90, 0);
      d_90 = ATgetArgument(b_90, 1);
      {
        ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL,q_90 = NULL;
        ATerm g_24;
        g_24 = t;
        {
          ATerm j_90 = NULL;
          t = not_null(c_90);
          {
            ATerm k_90 = NULL;
            t = y_93(t);
            {
              j_90 = t;
              {
                if(((g_90 != NULL) && (g_90 != j_90)))
                  _fail(j_90);
                else
                  g_90 = j_90;
                {
                  ATerm l_90 = NULL,p_90 = NULL;
                  t = map_1(t, new_0);
                  {
                    k_90 = t;
                    {
                      if(((h_90 != NULL) && (h_90 != k_90)))
                        _fail(k_90);
                      else
                        h_90 = k_90;
                      {
                        ATerm o_90 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_90), not_null(h_90));
                        {
                          t = zip_1(t, _id);
                          {
                            o_90 = t;
                            if(((l_90 != NULL) && (l_90 != o_90)))
                              _fail(o_90);
                            else
                              l_90 = o_90;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_90), not_null(d_90));
                          {
                            t = conc_0(t);
                            {
                              p_90 = t;
                              if(((i_90 != NULL) && (i_90 != p_90)))
                                _fail(p_90);
                              else
                                i_90 = p_90;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = g_24;
        {
          ATerm r_90 = NULL;
          t = not_null(c_90);
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(h_90);
              return(t);
            }
            t = z_93(t, a_5);
            {
              r_90 = t;
              if(((q_90 != NULL) && (q_90 != r_90)))
                _fail(r_90);
              else
                q_90 = r_90;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(q_90), not_null(d_90), not_null(i_90));
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
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,m_91 = NULL,n_91 = NULL;
  b_91 = t;
  z_90 :
  if(match_cons(b_91, sym__2))
    {
      c_91 = ATgetArgument(b_91, 0);
      d_91 = ATgetArgument(b_91, 1);
      a_91 :
      if(((ATgetType(d_91) == AT_LIST) && ((ATermList) d_91 != ATempty)))
        {
          m_91 = ATgetFirst((ATermList) d_91);
          n_91 = (ATerm) ATgetNext((ATermList) d_91);
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_91), not_null(n_91));
        }
      else
        {
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
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  v_91 = t;
  s_91 :
  if(match_cons(v_91, sym__2))
    {
      w_91 = ATgetArgument(v_91, 0);
      x_91 = ATgetArgument(v_91, 1);
      t_91 :
      if(((ATgetType(x_91) == AT_LIST) && ((ATermList) x_91 != ATempty)))
        {
          y_91 = ATgetFirst((ATermList) x_91);
          b_92 = (ATerm) ATgetNext((ATermList) x_91);
          u_91 :
          if(match_cons(y_91, sym__2))
            {
              z_91 = ATgetArgument(y_91, 0);
              a_92 = ATgetArgument(y_91, 1);
              {
                ATerm d_92 = NULL;
                if(((w_91 != NULL) && (w_91 != z_91)))
                  _fail(z_91);
                else
                  w_91 = z_91;
                {
                  if(((d_92 != NULL) && (d_92 != a_92)))
                    _fail(a_92);
                  else
                    d_92 = a_92;
                  t = not_null(d_92);
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
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm m_93 (ATerm, ATerm (ATerm)))
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
  o_92 = t;
  n_92 :
  if(match_cons(o_92, sym__2))
    {
      p_92 = ATgetArgument(o_92, 0);
      q_92 = ATgetArgument(o_92, 1);
      {
        t = not_null(p_92);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(q_92);
              return(t);
            }
            t = split_2(t, _id, c_5);
            t = lookup_0(t);
            return(t);
          }
          t = m_93(t, b_5);
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
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL;
  x_92 = t;
  w_92 :
  if(match_cons(x_92, sym__2))
    {
      y_92 = ATgetArgument(x_92, 0);
      z_92 = ATgetArgument(x_92, 1);
      {
        t = not_null(y_92);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm c_93 = NULL;
            c_93 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_93), not_null(z_92));
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
  ATerm g_93 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_101(t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        t = all_dist_1(t, g_93);
      }
    return(t);
  }
  t = g_93(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm a_94 (ATerm, ATerm (ATerm)), ATerm b_94 (ATerm), ATerm c_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_94 (ATerm, ATerm (ATerm)))
{
  ATerm i_93 = NULL;
  i_93 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_93), (ATerm) ATempty);
    {
      ATerm l_93 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, a_94);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              {
                t = RnBinding_2(t, b_94, d_94);
                t = DistBinding_2(t, l_93, c_94);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_5);
        return(t);
      }
      t = l_93(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm n_93 (ATerm t, ATerm o_93 (ATerm))
  {
    t = Scope_2(t, o_93, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, n_93);
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
  ATerm r_93 = NULL,u_93 = NULL,v_93 = NULL;
  r_93 = t;
  q_93 :
  if(((ATgetType(r_93) == AT_LIST) && ((ATermList) r_93 != ATempty)))
    {
      u_93 = ATgetFirst((ATermList) r_93);
      v_93 = (ATerm) ATgetNext((ATermList) r_93);
      t = not_null(u_93);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
  n_94 = t;
  m_94 :
  if(match_cons(n_94, sym__2))
    {
      o_94 = ATgetArgument(n_94, 0);
      p_94 = ATgetArgument(n_94, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_94), not_null(p_94));
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
  ATerm v_94 = NULL;
  ATerm x_94 = NULL;
  v_94 = t;
  {
    ATerm y_94 = NULL;
    t = term_c_25;
    {
      t = b_100(t);
      {
        y_94 = t;
        if(((x_94 != NULL) && (x_94 != y_94)))
          _fail(y_94);
        else
          x_94 = y_94;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_94), not_null(v_94));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  m_95 = t;
  k_95 :
  if(match_cons(m_95, sym_Call_2))
    {
      n_95 = ATgetArgument(m_95, 0);
      p_95 = ATgetArgument(m_95, 1);
      l_95 :
      if(match_cons(n_95, sym_SVar_1))
        {
          o_95 = ATgetArgument(n_95, 0);
          {
            ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,l_96 = NULL;
            ATerm f_25;
            f_25 = t;
            {
              ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,f_96 = NULL,g_96 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_95));
              {
                ATerm f_5 (ATerm t)
                {
                  t = term_k_25;
                  return(t);
                }
                t = rewrite_1(t, f_5);
                {
                  w_95 = t;
                  f_95 :
                  if(match_cons(w_95, sym_Defined_4))
                    {
                      x_95 = ATgetArgument(w_95, 0);
                      y_95 = ATgetArgument(w_95, 1);
                      f_96 = ATgetArgument(w_95, 2);
                      g_96 = ATgetArgument(w_95, 3);
                      g_95 :
                      if(match_string(x_95, "i_0"))
                        {
                          ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL;
                          if(((o_95 != NULL) && (o_95 != y_95)))
                            _fail(y_95);
                          else
                            o_95 = y_95;
                          {
                            if(((s_95 != NULL) && (s_95 != f_96)))
                              _fail(f_96);
                            else
                              s_95 = f_96;
                            {
                              if(((t_95 != NULL) && (t_95 != g_96)))
                                _fail(g_96);
                              else
                                t_95 = g_96;
                              {
                                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_95), not_null(s_95), not_null(t_95));
                                {
                                  t = strename_0(t);
                                  {
                                    h_96 = t;
                                    e_95 :
                                    if(match_cons(h_96, sym_SDef_3))
                                      {
                                        i_96 = ATgetArgument(h_96, 0);
                                        j_96 = ATgetArgument(h_96, 1);
                                        k_96 = ATgetArgument(h_96, 2);
                                        {
                                          if(((o_95 != NULL) && (o_95 != i_96)))
                                            _fail(i_96);
                                          else
                                            o_95 = i_96;
                                          {
                                            if(((u_95 != NULL) && (u_95 != j_96)))
                                              _fail(j_96);
                                            else
                                              u_95 = j_96;
                                            if(((v_95 != NULL) && (v_95 != k_96)))
                                              _fail(k_96);
                                            else
                                              v_95 = k_96;
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
            t = f_25;
            {
              ATerm q_96 = NULL;
              t = not_null(s_95);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL;
                  m_96 = t;
                  i_95 :
                  if(match_cons(m_96, sym_VarDec_2))
                    {
                      n_96 = ATgetArgument(m_96, 0);
                      o_96 = ATgetArgument(m_96, 1);
                      t = not_null(n_96);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  q_96 = t;
                  if(((l_96 != NULL) && (l_96 != q_96)))
                    _fail(q_96);
                  else
                    l_96 = q_96;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_96), not_null(p_95), not_null(v_95));
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
  ATerm e_97 = NULL;
  ATerm l_25;
  l_25 = t;
  {
    ATerm f_97 = NULL;
    t = new_0(t);
    {
      f_97 = t;
      {
        if(((e_97 != NULL) && (e_97 != f_97)))
          _fail(f_97);
        else
          e_97 = f_97;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_p_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_97)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = term_q_25;
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
            ATerm r_25 = t;
            int w_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL;
                g_97 = t;
                z_96 :
                if(match_cons(g_97, sym_LChoice_2))
                  {
                    h_97 = ATgetArgument(g_97, 0);
                    l_97 = ATgetArgument(g_97, 1);
                    a_97 :
                    if(match_cons(h_97, sym_Call_2))
                      {
                        i_97 = ATgetArgument(h_97, 0);
                        k_97 = ATgetArgument(h_97, 1);
                        b_97 :
                        if(match_cons(i_97, sym_SVar_1))
                          {
                            j_97 = ATgetArgument(i_97, 0);
                            c_97 :
                            if(((ATermList) k_97 == ATempty))
                              {
                                d_97 :
                                if(match_cons(l_97, sym_Id_0))
                                  {
                                    if(((e_97 != NULL) && (e_97 != j_97)))
                                      _fail(j_97);
                                    else
                                      e_97 = j_97;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(w_25);
              }
            else
              {
                t = r_25;
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm k_5 (ATerm t)
                    {
                      t = term_x_25;
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
                  t = term_y_25;
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
  t = l_25;
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
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
  d_98 = t;
  y_97 :
  if(match_cons(d_98, sym__2))
    {
      e_98 = ATgetArgument(d_98, 0);
      f_98 = ATgetArgument(d_98, 1);
      {
        ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
        ATerm c_26;
        c_26 = t;
        {
          ATerm m_98 = NULL;
          ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
          t = z_99(t);
          {
            m_98 = t;
            {
              if(((i_98 != NULL) && (i_98 != m_98)))
                _fail(m_98);
              else
                i_98 = m_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_98), not_null(e_98), not_null(f_98));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_26 = t;
                    int h_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_98), term_h_16);
                        t = table_get_0(t);
                        LocalPopChoice(h_26);
                      }
                    else
                      {
                        t = e_26;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_98 = t;
                      x_97 :
                      if(((ATgetType(o_98) == AT_LIST) && ((ATermList) o_98 != ATempty)))
                        {
                          p_98 = ATgetFirst((ATermList) o_98);
                          q_98 = (ATerm) ATgetNext((ATermList) o_98);
                          {
                            if(((j_98 != NULL) && (j_98 != p_98)))
                              _fail(p_98);
                            else
                              j_98 = p_98;
                            {
                              if(((k_98 != NULL) && (k_98 != q_98)))
                                _fail(q_98);
                              else
                                k_98 = q_98;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_98), term_h_16, (ATerm) ATinsert(CheckATermList(not_null(k_98)), (ATerm) ATinsert(CheckATermList(not_null(j_98)), not_null(e_98))));
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
        t = c_26;
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
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL;
  w_98 = t;
  v_98 :
  if(match_cons(w_98, sym_SDef_3))
    {
      x_98 = ATgetArgument(w_98, 0);
      y_98 = ATgetArgument(w_98, 1);
      z_98 = ATgetArgument(w_98, 2);
      {
        ATerm i_26;
        i_26 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(x_98)), (ATerm) ATmakeAppl(sym_Defined_4, term_j_26, not_null(x_98), not_null(y_98), not_null(z_98)));
          {
            ATerm n_5 (ATerm t)
            {
              t = term_k_25;
              return(t);
            }
            t = assert_1(t, n_5);
          }
        }
        t = i_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm l_99 = NULL,m_99 = NULL;
  l_99 = t;
  k_99 :
  if(match_cons(l_99, sym_Strategies_1))
    {
      m_99 = ATgetArgument(l_99, 0);
      {
        ATerm p_99 = NULL,r_99 = NULL;
        ATerm q_99 = NULL;
        t = SSLgetAnnotations(not_null(l_99));
        {
          q_99 = t;
          if(((p_99 != NULL) && (p_99 != q_99)))
            _fail(q_99);
          else
            p_99 = q_99;
        }
        {
          t = not_null(m_99);
          {
            ATerm t_99 = NULL;
            t = w_86(t);
            {
              r_99 = t;
              {
                ATerm u_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_99)), not_null(p_99));
                {
                  u_99 = t;
                  if(((t_99 != NULL) && (t_99 != u_99)))
                    _fail(u_99);
                  else
                    t_99 = u_99;
                }
                t = not_null(t_99);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm k_100 = NULL,l_100 = NULL;
  k_100 = t;
  j_100 :
  if(match_cons(k_100, sym_Signature_1))
    {
      l_100 = ATgetArgument(k_100, 0);
      {
        ATerm o_100 = NULL,q_100 = NULL;
        ATerm p_100 = NULL;
        t = SSLgetAnnotations(not_null(k_100));
        {
          p_100 = t;
          if(((o_100 != NULL) && (o_100 != p_100)))
            _fail(p_100);
          else
            o_100 = p_100;
        }
        {
          t = not_null(l_100);
          {
            ATerm s_100 = NULL;
            t = t_86(t);
            {
              q_100 = t;
              {
                ATerm t_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(q_100)), not_null(o_100));
                {
                  t_100 = t;
                  if(((s_100 != NULL) && (s_100 != t_100)))
                    _fail(t_100);
                  else
                    s_100 = t_100;
                }
                t = not_null(s_100);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm d_101 = NULL,e_101 = NULL;
  d_101 = t;
  c_101 :
  if(match_cons(d_101, sym_Specification_1))
    {
      e_101 = ATgetArgument(d_101, 0);
      {
        ATerm h_101 = NULL,j_101 = NULL;
        ATerm i_101 = NULL;
        t = SSLgetAnnotations(not_null(d_101));
        {
          i_101 = t;
          if(((h_101 != NULL) && (h_101 != i_101)))
            _fail(i_101);
          else
            h_101 = i_101;
        }
        {
          t = not_null(e_101);
          {
            ATerm l_101 = NULL;
            t = y_86(t);
            {
              j_101 = t;
              {
                ATerm m_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_101)), not_null(h_101));
                {
                  m_101 = t;
                  if(((l_101 != NULL) && (l_101 != m_101)))
                    _fail(m_101);
                  else
                    l_101 = m_101;
                }
                t = not_null(l_101);
              }
            }
          }
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
ATerm _2 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm))
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
  a_102 = t;
  z_101 :
  if(match_cons(a_102, sym__2))
    {
      b_102 = ATgetArgument(a_102, 0);
      c_102 = ATgetArgument(a_102, 1);
      {
        ATerm g_102 = NULL,i_102 = NULL;
        ATerm h_102 = NULL;
        t = SSLgetAnnotations(not_null(a_102));
        {
          h_102 = t;
          if(((g_102 != NULL) && (g_102 != h_102)))
            _fail(h_102);
          else
            g_102 = h_102;
        }
        {
          t = not_null(b_102);
          {
            ATerm k_102 = NULL;
            t = p_77(t);
            {
              i_102 = t;
              {
                t = not_null(c_102);
                {
                  ATerm m_102 = NULL;
                  t = q_77(t);
                  {
                    k_102 = t;
                    {
                      ATerm p_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_102), not_null(k_102)), not_null(g_102));
                      {
                        p_102 = t;
                        if(((m_102 != NULL) && (m_102 != p_102)))
                          _fail(p_102);
                        else
                          m_102 = p_102;
                      }
                      t = not_null(m_102);
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
  ATerm x_102 = NULL;
  ATerm k_26;
  k_26 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm y_102 = NULL,z_102 = NULL;
      y_102 = t;
      w_102 :
      if(match_cons(y_102, sym_Program_1))
        {
          z_102 = ATgetArgument(y_102, 0);
          if(((x_102 != NULL) && (x_102 != z_102)))
            _fail(z_102);
          else
            x_102 = z_102;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_26), not_null(x_102)), term_l_26));
      {
        t = printnl_0(t);
        {
          t = term_n_26;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_26;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL,f_103 = NULL;
  d_103 = t;
  c_103 :
  if(match_cons(d_103, sym__2))
    {
      e_103 = ATgetArgument(d_103, 0);
      f_103 = ATgetArgument(d_103, 1);
      {
        ATerm o_26;
        o_26 = t;
        t = SSL_printnl(not_null(e_103), not_null(f_103));
        t = o_26;
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
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
  l_103 = t;
  k_103 :
  if(match_cons(l_103, sym__2))
    {
      m_103 = ATgetArgument(l_103, 0);
      n_103 = ATgetArgument(l_103, 1);
      {
        t = not_null(m_103);
        {
          ATerm u_5 (ATerm t)
          {
            t = not_null(n_103);
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
  ATerm p_26;
  p_26 = t;
  {
    ATerm t_103 = NULL,v_103 = NULL;
    ATerm q_26;
    q_26 = t;
    {
      ATerm u_103 = NULL;
      t = d_99(t);
      {
        u_103 = t;
        if(((t_103 != NULL) && (t_103 != u_103)))
          _fail(u_103);
        else
          t_103 = u_103;
      }
    }
    t = q_26;
    {
      ATerm w_103 = NULL;
      w_103 = t;
      if(((v_103 != NULL) && (v_103 != w_103)))
        _fail(w_103);
      else
        v_103 = w_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_103)), not_null(t_103)));
        t = printnl_0(t);
      }
    }
  }
  t = p_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_104 = NULL;
  a_104 = t;
  t = SSL_is_string(not_null(a_104));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = r_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_5);
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm j_104 = NULL,k_104 = NULL,p_104 = NULL;
              j_104 = t;
              i_104 :
              if(match_cons(j_104, sym_Path_1))
                {
                  k_104 = ATgetArgument(j_104, 0);
                  t = not_null(k_104);
                }
              else
                {
                  if(match_cons(j_104, sym_Var_1))
                    {
                      k_104 = ATgetArgument(j_104, 0);
                      {
                        t = not_null(k_104);
                        {
                          ATerm a_27 = t;
                          int e_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_27);
                            }
                          else
                            {
                              t = a_27;
                              {
                                ATerm w_5 (ATerm t)
                                {
                                  t = term_g_27;
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
                      if(match_cons(j_104, sym_Prefix_2))
                        {
                          k_104 = ATgetArgument(j_104, 0);
                          p_104 = ATgetArgument(j_104, 1);
                          {
                            ATerm u_104 = NULL,w_104 = NULL;
                            ATerm i_27;
                            i_27 = t;
                            {
                              ATerm v_104 = NULL;
                              t = not_null(k_104);
                              {
                                t = eval_config_0(t);
                                {
                                  v_104 = t;
                                  if(((u_104 != NULL) && (u_104 != v_104)))
                                    _fail(v_104);
                                  else
                                    u_104 = v_104;
                                }
                              }
                            }
                            t = i_27;
                            {
                              ATerm x_104 = NULL;
                              t = not_null(p_104);
                              {
                                t = eval_config_0(t);
                                {
                                  x_104 = t;
                                  if(((w_104 != NULL) && (w_104 != x_104)))
                                    _fail(x_104);
                                  else
                                    w_104 = x_104;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_104), not_null(w_104));
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
  ATerm l_105 = NULL;
  l_105 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_27, not_null(l_105));
    {
      t = table_get_0(t);
      {
        ATerm x_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_27;
            m_27 = t;
            {
              ATerm n_105 = NULL;
              ATerm o_105 = NULL;
              o_105 = t;
              if(((n_105 != NULL) && (n_105 != o_105)))
                _fail(o_105);
              else
                n_105 = o_105;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_27, not_null(l_105), not_null(n_105));
                t = table_put_0(t);
              }
            }
            t = m_27;
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
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, term_n_27));
  {
    t = printnl_0(t);
    {
      t = term_n_26;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_105 = NULL;
  s_105 = t;
  t = SSL_TicksToSeconds(not_null(s_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
  x_105 = t;
  w_105 :
  if(match_cons(x_105, sym__2))
    {
      y_105 = ATgetArgument(x_105, 0);
      z_105 = ATgetArgument(x_105, 1);
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_105), not_null(z_105));
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = SSL_addr(not_null(y_105), not_null(z_105));
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
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_106(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
        l_106 = t;
        k_106 :
        if(((ATgetType(l_106) == AT_LIST) && ((ATermList) l_106 != ATempty)))
          {
            m_106 = ATgetFirst((ATermList) l_106);
            n_106 = (ATerm) ATgetNext((ATermList) l_106);
            {
              ATerm q_106 = NULL;
              ATerm r_106 = NULL;
              t = not_null(n_106);
              {
                t = foldr_2(t, c_106, d_106);
                {
                  r_106 = t;
                  if(((q_106 != NULL) && (q_106 != r_106)))
                    _fail(r_106);
                  else
                    q_106 = r_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_106), not_null(q_106));
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
ATerm crush_2 (ATerm t, ATerm q_107 (ATerm), ATerm r_107 (ATerm))
{
  ATerm y_106 = NULL;
  ATerm a_107 = NULL;
  y_106 = t;
  {
    ATerm b_107 = NULL;
    ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
    t = not_null(y_106);
    {
      b_107 = t;
      {
        t = SSL_explode_term(not_null(b_107));
        {
          e_107 = t;
          x_106 :
          if(match_cons(e_107, sym__2))
            {
              f_107 = ATgetArgument(e_107, 0);
              g_107 = ATgetArgument(e_107, 1);
              if(((a_107 != NULL) && (a_107 != g_107)))
                _fail(g_107);
              else
                a_107 = g_107;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_107);
      t = foldr_2(t, q_107, r_107);
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
      t = term_s_27;
      return(t);
    }
    t = crush_2(t, y_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_107 = NULL,v_107 = NULL,w_107 = NULL;
  p_107 = t;
  o_107 :
  if(match_cons(p_107, sym__2))
    {
      v_107 = ATgetArgument(p_107, 0);
      w_107 = ATgetArgument(p_107, 1);
      {
        ATerm a_28;
        a_28 = t;
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_107), not_null(w_107));
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              t = SSL_gtr(not_null(v_107), not_null(w_107));
            }
        }
        t = a_28;
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
  ATerm c_108 = NULL;
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
      d_108 = t;
      b_108 :
      if(match_cons(d_108, sym__2))
        {
          e_108 = ATgetArgument(d_108, 0);
          f_108 = ATgetArgument(d_108, 1);
          {
            if(((c_108 != NULL) && (c_108 != e_108)))
              _fail(e_108);
            else
              c_108 = e_108;
            if(((c_108 != NULL) && (c_108 != f_108)))
              _fail(f_108);
            else
              c_108 = f_108;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm f_28;
    f_28 = t;
    {
      ATerm i_108 = NULL;
      ATerm j_108 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          j_108 = t;
          if(((i_108 != NULL) && (i_108 != j_108)))
            _fail(j_108);
          else
            i_108 = j_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_108), term_n_26);
        t = geq_0(t);
      }
    }
    t = f_28;
    t = m_90(t);
    return(t);
  }
  t = try_1(t, z_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm n_108 = NULL,p_108 = NULL;
    ATerm g_28;
    g_28 = t;
    {
      ATerm o_108 = NULL;
      t = run_time_0(t);
      {
        o_108 = t;
        if(((n_108 != NULL) && (n_108 != o_108)))
          _fail(o_108);
        else
          n_108 = o_108;
      }
    }
    t = g_28;
    {
      ATerm q_108 = NULL;
      t = term_h_28;
      {
        t = get_config_0(t);
        {
          q_108 = t;
          if(((p_108 != NULL) && (p_108 != q_108)))
            _fail(q_108);
          else
            p_108 = q_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_28), not_null(n_108)), term_j_28), not_null(p_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_6);
  {
    t = term_s_27;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL;
  v_108 = t;
  u_108 :
  if(match_cons(v_108, sym__2))
    {
      w_108 = ATgetArgument(v_108, 0);
      x_108 = ATgetArgument(v_108, 1);
      t = SSL_WriteToTextFile(not_null(w_108), not_null(x_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL;
  d_109 = t;
  c_109 :
  if(match_cons(d_109, sym__2))
    {
      e_109 = ATgetArgument(d_109, 0);
      f_109 = ATgetArgument(d_109, 1);
      t = SSL_WriteToBinaryFile(not_null(e_109), not_null(f_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_109 = NULL;
  ATerm l_28;
  l_28 = t;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            ATerm o_109 = NULL,p_109 = NULL;
            o_109 = t;
            k_109 :
            if(match_cons(o_109, sym_Output_1))
              {
                p_109 = ATgetArgument(o_109, 0);
                if(((n_109 != NULL) && (n_109 != p_109)))
                  _fail(p_109);
                else
                  n_109 = p_109;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, c_6);
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          {
            ATerm q_109 = NULL;
            t = term_u_28;
            {
              q_109 = t;
              if(((n_109 != NULL) && (n_109 != q_109)))
                _fail(q_109);
              else
                n_109 = q_109;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_6, _id);
  }
  t = l_28;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        t = not_null(n_109);
        return(t);
      }
      t = split_2(t, e_6, _id);
      return(t);
    }
    t = _2(t, _id, d_6);
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
          {
            ATerm g_6 (ATerm t)
            {
              ATerm r_109 = NULL;
              r_109 = t;
              m_109 :
              if(!(match_cons(r_109, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, g_6);
            return(t);
          }
          t = _2(t, f_6, WriteToBinaryFile_0);
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
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
  ATerm d_110 = NULL,f_110 = NULL,g_110 = NULL,i_110 = NULL;
  ATerm e_29;
  e_29 = t;
  t = dtime_0(t);
  t = e_29;
  {
    t = n_98(t);
    {
      ATerm c_30;
      c_30 = t;
      {
        ATerm e_110 = NULL;
        t = dtime_0(t);
        {
          e_110 = t;
          if(((d_110 != NULL) && (d_110 != e_110)))
            _fail(e_110);
          else
            d_110 = e_110;
        }
      }
      t = c_30;
      {
        f_110 = t;
        w_109 :
        if(match_cons(f_110, sym__2))
          {
            g_110 = ATgetArgument(f_110, 0);
            i_110 = ATgetArgument(f_110, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_110)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_110))), not_null(i_110));
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
  ATerm o_110 = NULL;
  o_110 = t;
  t = SSL_ReadFromFile(not_null(o_110));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_113 (ATerm), ATerm g_113 (ATerm))
{
  ATerm t_110 = NULL,v_110 = NULL;
  ATerm d_30;
  d_30 = t;
  {
    ATerm u_110 = NULL;
    t = f_113(t);
    {
      u_110 = t;
      if(((t_110 != NULL) && (t_110 != u_110)))
        _fail(u_110);
      else
        t_110 = u_110;
    }
  }
  t = d_30;
  {
    ATerm w_110 = NULL;
    t = g_113(t);
    {
      w_110 = t;
      if(((v_110 != NULL) && (v_110 != w_110)))
        _fail(w_110);
      else
        v_110 = w_110;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_110), not_null(v_110));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_111 = NULL;
  ATerm e_30;
  e_30 = t;
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 (ATerm t)
        {
          ATerm d_111 = NULL,e_111 = NULL;
          d_111 = t;
          a_111 :
          if(match_cons(d_111, sym_Input_1))
            {
              e_111 = ATgetArgument(d_111, 0);
              if(((c_111 != NULL) && (c_111 != e_111)))
                _fail(e_111);
              else
                c_111 = e_111;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_6);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        {
          ATerm f_111 = NULL;
          t = term_h_30;
          {
            f_111 = t;
            if(((c_111 != NULL) && (c_111 != f_111)))
              _fail(f_111);
            else
              c_111 = f_111;
          }
        }
      }
  }
  t = e_30;
  {
    ATerm i_6 (ATerm t)
    {
      t = not_null(c_111);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_111 = NULL;
  o_111 = t;
  n_111 :
  if(match_cons(o_111, sym_Version_0))
    {
      ATerm q_111 = NULL,u_111 = NULL;
      ATerm i_30;
      i_30 = t;
      {
        ATerm r_111 = NULL;
        t = SSLgetAnnotations(not_null(o_111));
        {
          r_111 = t;
          if(((q_111 != NULL) && (q_111 != r_111)))
            _fail(r_111);
          else
            q_111 = r_111;
        }
      }
      t = i_30;
      {
        ATerm v_111 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_111));
        {
          v_111 = t;
          if(((u_111 != NULL) && (u_111 != v_111)))
            _fail(v_111);
          else
            u_111 = v_111;
        }
        t = not_null(u_111);
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
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
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
  ATerm c_112 = NULL;
  c_112 = t;
  t = SSL_table_create(not_null(c_112));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_112 = NULL;
  g_112 = t;
  {
    ATerm n_30;
    n_30 = t;
    {
      t = term_o_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_30, term_s_30, not_null(g_112));
          t = table_put_0(t);
        }
      }
    }
    t = n_30;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_112 = NULL;
  k_112 = t;
  t = SSL_string_to_int(not_null(k_112));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL;
  s_112 = t;
  q_112 :
  if(match_string(s_112, "register-usage-info"))
    {
      t = register_usage_1(t, v_0);
    }
  else
    {
      if(((ATgetType(s_112) == AT_LIST) && ((ATermList) s_112 != ATempty)))
        {
          t_112 = ATgetFirst((ATermList) s_112);
          u_112 = (ATerm) ATgetNext((ATermList) s_112);
          r_112 :
          if(((ATgetType(u_112) == AT_LIST) && ((ATermList) u_112 != ATempty)))
            {
              v_112 = ATgetFirst((ATermList) u_112);
              w_112 = (ATerm) ATgetNext((ATermList) u_112);
              {
                ATerm a_113 = NULL;
                ATerm t_30;
                t_30 = t;
                {
                  t = not_null(t_112);
                  t = t_0(t);
                }
                t = t_30;
                {
                  ATerm c_113 = NULL;
                  t = not_null(v_112);
                  {
                    t = u_0(t);
                    {
                      c_113 = t;
                      if(((a_113 != NULL) && (a_113 != c_113)))
                        _fail(c_113);
                      else
                        a_113 = c_113;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_112)), not_null(a_113));
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
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 (ATerm t)
      {
        ATerm v_113 = NULL;
        v_113 = t;
        i_113 :
        if(!(match_string(v_113, "-i")))
          {
            if(!(match_string(v_113, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        ATerm z_113 = NULL;
        ATerm w_30;
        w_30 = t;
        {
          ATerm w_113 = NULL;
          ATerm y_113 = NULL;
          y_113 = t;
          if(((w_113 != NULL) && (w_113 != y_113)))
            _fail(y_113);
          else
            w_113 = y_113;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_30, not_null(w_113));
            t = set_config_0(t);
          }
        }
        t = w_30;
        {
          ATerm a_114 = NULL;
          a_114 = t;
          if(((z_113 != NULL) && (z_113 != a_114)))
            _fail(a_114);
          else
            z_113 = a_114;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_113));
        }
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        t = term_y_30;
        return(t);
      }
      t = ArgOption_3(t, m_6, n_6, o_6);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              ATerm b_114 = NULL;
              b_114 = t;
              l_113 :
              if(!(match_string(b_114, "-o")))
                {
                  if(!(match_string(b_114, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_6 (ATerm t)
            {
              ATerm e_114 = NULL;
              ATerm b_31;
              b_31 = t;
              {
                ATerm c_114 = NULL;
                ATerm d_114 = NULL;
                d_114 = t;
                if(((c_114 != NULL) && (c_114 != d_114)))
                  _fail(d_114);
                else
                  c_114 = d_114;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_31, not_null(c_114));
                  t = set_config_0(t);
                }
              }
              t = b_31;
              {
                ATerm f_114 = NULL;
                f_114 = t;
                if(((e_114 != NULL) && (e_114 != f_114)))
                  _fail(f_114);
                else
                  e_114 = f_114;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_114));
              }
              return(t);
            }
            ATerm r_6 (ATerm t)
            {
              t = term_d_31;
              return(t);
            }
            t = ArgOption_3(t, p_6, q_6, r_6);
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm e_31 = t;
              int f_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_6 (ATerm t)
                  {
                    ATerm g_114 = NULL;
                    g_114 = t;
                    o_113 :
                    if(!(match_string(g_114, "-S")))
                      {
                        if(!(match_string(g_114, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_6 (ATerm t)
                  {
                    t = term_g_31;
                    t = set_config_0(t);
                    t = term_h_31;
                    return(t);
                  }
                  ATerm u_6 (ATerm t)
                  {
                    t = term_i_31;
                    return(t);
                  }
                  t = Option_3(t, s_6, t_6, u_6);
                  LocalPopChoice(f_31);
                }
              else
                {
                  t = e_31;
                  {
                    ATerm j_31 = t;
                    int k_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_6 (ATerm t)
                        {
                          ATerm h_114 = NULL;
                          h_114 = t;
                          p_113 :
                          if(!(match_string(h_114, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_6 (ATerm t)
                        {
                          ATerm o_114 = NULL;
                          ATerm l_31;
                          l_31 = t;
                          {
                            ATerm i_114 = NULL;
                            ATerm j_114 = NULL;
                            t = string_to_int_0(t);
                            {
                              j_114 = t;
                              if(((i_114 != NULL) && (i_114 != j_114)))
                                _fail(j_114);
                              else
                                i_114 = j_114;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(i_114));
                              t = set_config_0(t);
                            }
                          }
                          t = l_31;
                          {
                            ATerm p_114 = NULL;
                            p_114 = t;
                            if(((o_114 != NULL) && (o_114 != p_114)))
                              _fail(p_114);
                            else
                              o_114 = p_114;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_114));
                          }
                          return(t);
                        }
                        ATerm x_6 (ATerm t)
                        {
                          t = term_m_31;
                          return(t);
                        }
                        t = ArgOption_3(t, v_6, w_6, x_6);
                        LocalPopChoice(k_31);
                      }
                    else
                      {
                        t = j_31;
                        {
                          ATerm n_31 = t;
                          int o_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_6 (ATerm t)
                              {
                                ATerm q_114 = NULL;
                                q_114 = t;
                                s_113 :
                                if(!(match_string(q_114, "-v")))
                                  {
                                    if(!(match_string(q_114, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm z_6 (ATerm t)
                              {
                                t = term_q_31;
                                t = set_config_0(t);
                                t = term_r_31;
                                return(t);
                              }
                              ATerm c_7 (ATerm t)
                              {
                                t = term_s_31;
                                return(t);
                              }
                              t = Option_3(t, y_6, z_6, c_7);
                              LocalPopChoice(o_31);
                            }
                          else
                            {
                              t = n_31;
                              {
                                ATerm t_31 = t;
                                int u_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_7 (ATerm t)
                                    {
                                      ATerm r_114 = NULL;
                                      r_114 = t;
                                      t_113 :
                                      if(!(match_string(r_114, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm e_7 (ATerm t)
                                    {
                                      t = term_w_32;
                                      t = set_config_0(t);
                                      t = term_x_32;
                                      return(t);
                                    }
                                    ATerm f_7 (ATerm t)
                                    {
                                      t = term_y_32;
                                      return(t);
                                    }
                                    t = Option_3(t, d_7, e_7, f_7);
                                    LocalPopChoice(u_31);
                                  }
                                else
                                  {
                                    t = t_31;
                                    {
                                      ATerm g_7 (ATerm t)
                                      {
                                        ATerm s_114 = NULL;
                                        s_114 = t;
                                        u_113 :
                                        if(!(match_string(s_114, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm h_7 (ATerm t)
                                      {
                                        t = term_j_33;
                                        t = set_config_0(t);
                                        t = term_k_33;
                                        return(t);
                                      }
                                      ATerm i_7 (ATerm t)
                                      {
                                        t = term_y_33;
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
  ATerm a_115 = NULL;
  a_115 = t;
  t = SSL_table_destroy(not_null(a_115));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_115 = NULL;
  e_115 = t;
  t = SSL_exit(not_null(e_115));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_115 = NULL;
  i_115 = t;
  t = SSL_implode_string(not_null(i_115));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_111 (ATerm))
{
  ATerm l_115 (ATerm t)
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_115);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          t = Nil_0(t);
          t = y_111(t);
        }
      }
    return(t);
  }
  t = l_115(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL;
        o_115 = t;
        n_115 :
        if(((ATgetType(o_115) == AT_LIST) && ((ATermList) o_115 != ATempty)))
          {
            p_115 = ATgetFirst((ATermList) o_115);
            q_115 = (ATerm) ATgetNext((ATermList) o_115);
            {
              t = not_null(p_115);
              {
                ATerm j_7 (ATerm t)
                {
                  t = not_null(q_115);
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
  ATerm w_115 = NULL;
  w_115 = t;
  t = SSL_explode_string(not_null(w_115));
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
ATerm map_1 (ATerm t, ATerm k_111 (ATerm))
{
  ATerm z_115 (ATerm t)
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = Cons_2(t, k_111, z_115);
      }
    return(t);
  }
  t = z_115(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL;
  k_116 = t;
  h_116 :
  if(((ATgetType(k_116) == AT_LIST) && ((ATermList) k_116 != ATempty)))
    {
      i_116 = ATgetFirst((ATermList) k_116);
      j_116 = (ATerm) ATgetNext((ATermList) k_116);
      {
        ATerm n_116 = NULL;
        t = not_null(j_116);
        {
          ATerm i_34;
          i_34 = t;
          {
            ATerm o_116 = NULL,s_116 = NULL,u_116 = NULL;
            ATerm j_34;
            j_34 = t;
            {
              ATerm p_116 = NULL;
              t = s_0(t);
              {
                p_116 = t;
                if(((o_116 != NULL) && (o_116 != p_116)))
                  _fail(p_116);
                else
                  o_116 = p_116;
              }
            }
            t = j_34;
            {
              ATerm t_116 = NULL;
              t = not_null(i_116);
              {
                t = r_0(t);
                {
                  t_116 = t;
                  if(((s_116 != NULL) && (s_116 != t_116)))
                    _fail(t_116);
                  else
                    s_116 = t_116;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_116)), not_null(s_116));
                {
                  u_116 = t;
                  if(((n_116 != NULL) && (n_116 != u_116)))
                    _fail(u_116);
                  else
                    n_116 = u_116;
                }
              }
            }
          }
          t = i_34;
          {
            ATerm k_7 (ATerm t)
            {
              t = not_null(n_116);
              return(t);
            }
            t = reverse_acc_2(t, r_0, k_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) k_116 == ATempty))
        {
          {
            t = term_c_25;
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
ATerm Program_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm f_117 = NULL,g_117 = NULL;
  f_117 = t;
  e_117 :
  if(match_cons(f_117, sym_Program_1))
    {
      g_117 = ATgetArgument(f_117, 0);
      {
        ATerm j_117 = NULL,l_117 = NULL;
        ATerm k_117 = NULL;
        t = SSLgetAnnotations(not_null(f_117));
        {
          k_117 = t;
          if(((j_117 != NULL) && (j_117 != k_117)))
            _fail(k_117);
          else
            j_117 = k_117;
        }
        {
          t = not_null(g_117);
          {
            ATerm n_117 = NULL;
            t = d_79(t);
            {
              l_117 = t;
              {
                ATerm o_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_117)), not_null(j_117));
                {
                  o_117 = t;
                  if(((n_117 != NULL) && (n_117 != o_117)))
                    _fail(o_117);
                  else
                    n_117 = o_117;
                }
                t = not_null(n_117);
              }
            }
          }
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
  ATerm y_117 = NULL;
  ATerm m_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm z_117 = NULL;
      z_117 = t;
      if(((y_117 != NULL) && (y_117 != z_117)))
        _fail(z_117);
      else
        y_117 = z_117;
      return(t);
    }
    t = Program_1(t, n_7);
    return(t);
  }
  t = option_defined_1(t, m_7);
  {
    ATerm o_7 (ATerm t)
    {
      ATerm a_118 = NULL;
      ATerm b_118 = NULL;
      t = term_c_25;
      {
        ATerm p_7 (ATerm t)
        {
          t = not_null(y_117);
          return(t);
        }
        t = short_description_1(t, p_7);
        {
          t = concat_strings_0(t);
          {
            b_118 = t;
            if(((a_118 != NULL) && (a_118 != b_118)))
              _fail(b_118);
            else
              a_118 = b_118;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(a_118)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, o_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, term_k_34));
      {
        t = printnl_0(t);
        {
          t = term_n_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_7 (ATerm t)
                {
                  ATerm c_118 = NULL;
                  c_118 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_118)), term_o_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_7);
                {
                  ATerm r_7 (ATerm t)
                  {
                    ATerm e_118 = NULL;
                    ATerm f_118 = NULL;
                    t = term_c_25;
                    {
                      ATerm s_7 (ATerm t)
                      {
                        t = not_null(y_117);
                        return(t);
                      }
                      t = long_description_1(t, s_7);
                      {
                        t = concat_strings_0(t);
                        {
                          f_118 = t;
                          if(((e_118 != NULL) && (e_118 != f_118)))
                            _fail(f_118);
                          else
                            e_118 = f_118;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_118)), term_p_34));
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
ATerm Undefined_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm p_118 = NULL,q_118 = NULL;
  p_118 = t;
  o_118 :
  if(match_cons(p_118, sym_Undefined_1))
    {
      q_118 = ATgetArgument(p_118, 0);
      {
        ATerm t_118 = NULL,v_118 = NULL;
        ATerm u_118 = NULL;
        t = SSLgetAnnotations(not_null(p_118));
        {
          u_118 = t;
          if(((t_118 != NULL) && (t_118 != u_118)))
            _fail(u_118);
          else
            t_118 = u_118;
        }
        {
          t = not_null(q_118);
          {
            ATerm x_118 = NULL;
            t = e_79(t);
            {
              v_118 = t;
              {
                ATerm y_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_118)), not_null(t_118));
                {
                  y_118 = t;
                  if(((x_118 != NULL) && (x_118 != y_118)))
                    _fail(y_118);
                  else
                    x_118 = y_118;
                }
                t = not_null(x_118);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_111 (ATerm))
{
  ATerm d_119 (ATerm t)
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_111, _id);
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        t = Cons_2(t, _id, d_119);
      }
    return(t);
  }
  t = d_119(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_96 (ATerm))
{
  t = fetch_1(t, y_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_119 = NULL;
  i_119 = t;
  h_119 :
  if(match_cons(i_119, sym_Help_0))
    {
      ATerm k_119 = NULL,m_119 = NULL;
      ATerm s_34;
      s_34 = t;
      {
        ATerm l_119 = NULL;
        t = SSLgetAnnotations(not_null(i_119));
        {
          l_119 = t;
          if(((k_119 != NULL) && (k_119 != l_119)))
            _fail(l_119);
          else
            k_119 = l_119;
        }
      }
      t = s_34;
      {
        ATerm n_119 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_119));
        {
          n_119 = t;
          if(((m_119 != NULL) && (m_119 != n_119)))
            _fail(n_119);
          else
            m_119 = n_119;
        }
        t = not_null(m_119);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_113 (ATerm))
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_113(t);
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_119 = NULL,u_119 = NULL,v_119 = NULL;
  t_119 = t;
  s_119 :
  if(match_cons(t_119, sym__2))
    {
      u_119 = ATgetArgument(t_119, 0);
      v_119 = ATgetArgument(t_119, 1);
      t = SSL_table_get(not_null(u_119), not_null(v_119));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL;
  c_120 = t;
  b_120 :
  if(match_cons(c_120, sym__3))
    {
      d_120 = ATgetArgument(c_120, 0);
      e_120 = ATgetArgument(c_120, 1);
      f_120 = ATgetArgument(c_120, 2);
      {
        ATerm v_34;
        v_34 = t;
        {
          ATerm k_120 = NULL;
          ATerm l_120 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_120), not_null(e_120));
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
                t = (ATerm) ATempty;
              }
            {
              l_120 = t;
              if(((k_120 != NULL) && (k_120 != l_120)))
                _fail(l_120);
              else
                k_120 = l_120;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_120), not_null(e_120), (ATerm) ATinsert(CheckATermList(not_null(k_120)), not_null(f_120)));
            t = table_put_0(t);
          }
        }
        t = v_34;
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
  ATerm p_120 = NULL;
  ATerm q_120 = NULL;
  t = term_c_25;
  {
    t = e_96(t);
    {
      q_120 = t;
      if(((p_120 != NULL) && (p_120 != q_120)))
        _fail(q_120);
      else
        p_120 = q_120;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_34, term_m_34, not_null(p_120));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL;
  w_120 = t;
  v_120 :
  if(match_string(w_120, "register-usage-info"))
    {
      t = register_usage_1(t, q_0);
    }
  else
    {
      if(((ATgetType(w_120) == AT_LIST) && ((ATermList) w_120 != ATempty)))
        {
          x_120 = ATgetFirst((ATermList) w_120);
          y_120 = (ATerm) ATgetNext((ATermList) w_120);
          {
            ATerm c_121 = NULL;
            ATerm y_34;
            y_34 = t;
            {
              t = not_null(x_120);
              t = c_0(t);
            }
            t = y_34;
            {
              ATerm d_121 = NULL;
              t = term_c_25;
              {
                t = d_0(t);
                {
                  d_121 = t;
                  if(((c_121 != NULL) && (c_121 != d_121)))
                    _fail(d_121);
                  else
                    c_121 = d_121;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_120)), not_null(c_121));
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
    ATerm i_121 = NULL;
    i_121 = t;
    h_121 :
    if(!(match_string(i_121, "--help")))
      {
        if(!(match_string(i_121, "-h")))
          {
            if(!(match_string(i_121, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = term_z_34;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    t = term_a_35;
    return(t);
  }
  t = Option_3(t, t_7, u_7, v_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL;
  l_121 = t;
  k_121 :
  if(((ATgetType(l_121) == AT_LIST) && ((ATermList) l_121 != ATempty)))
    {
      m_121 = ATgetFirst((ATermList) l_121);
      n_121 = (ATerm) ATgetNext((ATermList) l_121);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_121)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_121)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm))
{
  ATerm x_121 = NULL,y_121 = NULL,z_121 = NULL;
  x_121 = t;
  w_121 :
  if(((ATgetType(x_121) == AT_LIST) && ((ATermList) x_121 != ATempty)))
    {
      y_121 = ATgetFirst((ATermList) x_121);
      z_121 = (ATerm) ATgetNext((ATermList) x_121);
      {
        ATerm d_122 = NULL,f_122 = NULL;
        ATerm e_122 = NULL;
        t = SSLgetAnnotations(not_null(x_121));
        {
          e_122 = t;
          if(((d_122 != NULL) && (d_122 != e_122)))
            _fail(e_122);
          else
            d_122 = e_122;
        }
        {
          t = not_null(y_121);
          {
            ATerm h_122 = NULL;
            t = o_89(t);
            {
              f_122 = t;
              {
                t = not_null(z_121);
                {
                  ATerm j_122 = NULL;
                  t = p_89(t);
                  {
                    h_122 = t;
                    {
                      ATerm k_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_122)), not_null(f_122)), not_null(d_122));
                      {
                        k_122 = t;
                        if(((j_122 != NULL) && (j_122 != k_122)))
                          _fail(k_122);
                        else
                          j_122 = k_122;
                      }
                      t = not_null(j_122);
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
  ATerm u_122 = NULL;
  u_122 = t;
  t_122 :
  if(((ATermList) u_122 == ATempty))
    {
      {
        ATerm w_122 = NULL,y_122 = NULL;
        ATerm b_35;
        b_35 = t;
        {
          ATerm x_122 = NULL;
          t = SSLgetAnnotations(not_null(u_122));
          {
            x_122 = t;
            if(((w_122 != NULL) && (w_122 != x_122)))
              _fail(x_122);
            else
              w_122 = x_122;
          }
        }
        t = b_35;
        {
          ATerm z_122 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_122));
          {
            z_122 = t;
            if(((y_122 != NULL) && (y_122 != z_122)))
              _fail(z_122);
            else
              y_122 = z_122;
          }
          t = not_null(y_122);
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
  ATerm f_123 = NULL,g_123 = NULL,h_123 = NULL;
  f_123 = t;
  e_123 :
  if(match_cons(f_123, sym__2))
    {
      g_123 = ATgetArgument(f_123, 0);
      h_123 = ATgetArgument(f_123, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_27, not_null(g_123), not_null(h_123));
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
  ATerm c_35;
  c_35 = t;
  {
    ATerm w_7 (ATerm t)
    {
      t = term_d_35;
      t = c_96(t);
      return(t);
    }
    t = try_1(t, w_7);
  }
  t = c_35;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm p_123 = NULL;
      ATerm e_35;
      e_35 = t;
      {
        ATerm n_123 = NULL;
        ATerm o_123 = NULL;
        o_123 = t;
        if(((n_123 != NULL) && (n_123 != o_123)))
          _fail(o_123);
        else
          n_123 = o_123;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_28, not_null(n_123));
          t = set_config_0(t);
        }
      }
      t = e_35;
      {
        ATerm q_123 = NULL;
        q_123 = t;
        if(((p_123 != NULL) && (p_123 != q_123)))
          _fail(q_123);
        else
          p_123 = q_123;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_123));
      }
      return(t);
    }
    ATerm y_7 (ATerm t)
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              {
                t = c_96(t);
                t = Cons_2(t, _id, y_7);
              }
            }
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
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
  ATerm w_123 = NULL,x_123 = NULL,y_123 = NULL;
  ATerm j_35;
  j_35 = t;
  {
    ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL,c_124 = NULL;
    z_123 = t;
    v_123 :
    if(match_cons(z_123, sym__3))
      {
        a_124 = ATgetArgument(z_123, 0);
        b_124 = ATgetArgument(z_123, 1);
        c_124 = ATgetArgument(z_123, 2);
        {
          if(((w_123 != NULL) && (w_123 != a_124)))
            _fail(a_124);
          else
            w_123 = a_124;
          {
            if(((x_123 != NULL) && (x_123 != b_124)))
              _fail(b_124);
            else
              x_123 = b_124;
            {
              if(((y_123 != NULL) && (y_123 != c_124)))
                _fail(c_124);
              else
                y_123 = c_124;
              t = SSL_table_put(not_null(w_123), not_null(x_123), not_null(y_123));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_96 (ATerm))
{
  ATerm f_124 = NULL;
  ATerm k_35;
  k_35 = t;
  {
    t = term_l_35;
    t = table_put_0(t);
  }
  t = k_35;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_96(t);
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_8);
    {
      ATerm b_8 (ATerm t)
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_27;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            {
              ATerm c_8 (ATerm t)
              {
                ATerm d_8 (ATerm t)
                {
                  ATerm g_124 = NULL;
                  g_124 = t;
                  if(((f_124 != NULL) && (f_124 != g_124)))
                    _fail(g_124);
                  else
                    f_124 = g_124;
                  return(t);
                }
                t = Undefined_1(t, d_8);
                return(t);
              }
              t = option_defined_1(t, c_8);
              {
                ATerm q_35;
                q_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_124)), term_r_35));
                  t = printnl_0(t);
                }
                t = q_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_26;
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
        ATerm s_35;
        s_35 = t;
        {
          t = term_l_34;
          t = table_destroy_0(t);
        }
        t = s_35;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
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
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_98);
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
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
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
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
      ATerm b_36;
      b_36 = t;
      {
        ATerm j_124 = NULL;
        ATerm k_124 = NULL;
        t = term_h_28;
        {
          t = get_config_0(t);
          {
            k_124 = t;
            if(((j_124 != NULL) && (j_124 != k_124)))
              _fail(k_124);
            else
              j_124 = k_124;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_9, (ATerm) ATinsert(ATempty, not_null(j_124)));
          t = printnl_0(t);
        }
      }
      t = b_36;
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
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        {
          ATerm q_9 (ATerm t)
          {
            ATerm r_9 (ATerm t)
            {
              t = term_e_36;
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
