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
ATerm term_s_35;
ATerm term_t_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_w_28;
ATerm term_n_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_g_25;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_d_18;
ATerm term_f_17;
ATerm term_m_15;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_v_13;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
void init_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Op_2, term_o_20, (ATerm) ATempty);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_x_6);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_x_6);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_x_6);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_x_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_x_6);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__3, term_w_32, term_x_32, (ATerm) ATempty);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm k_111 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_91 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm n_90 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_80 (ATerm), ATerm c_80 (ATerm));
ATerm Let_2 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm));
ATerm sboundin_3 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm j_90 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm w_81 (ATerm));
ATerm tboundin_3 (ATerm, ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm u_101 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_101 (ATerm), ATerm z_101 (ATerm));
ATerm diff_1 (ATerm, ATerm q_101 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm j_108 (ATerm), ATerm k_108 (ATerm));
ATerm for_3 (ATerm, ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm j_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm f_104 (ATerm), ATerm g_104 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm q_104 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm j_105 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm t_104 (ATerm));
ATerm rename_4 (ATerm, ATerm a_104 (ATerm, ATerm (ATerm)), ATerm b_104 (ATerm), ATerm c_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_104 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_111 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_95 (ATerm), ATerm b_95 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_111 (ATerm));
ATerm scope_2 (ATerm, ATerm g_111 (ATerm), ATerm h_111 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm i_111 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm));
ATerm crush_3 (ATerm, ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm));
ATerm Choice_2 (ATerm, ATerm o_79 (ATerm), ATerm p_79 (ATerm));
ATerm Cong_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm Match_1 (ATerm, ATerm v_78 (ATerm));
ATerm Seq_2 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm Scope_2 (ATerm, ATerm z_78 (ATerm), ATerm a_79 (ATerm));
ATerm Build_1 (ATerm, ATerm w_78 (ATerm));
ATerm SVar_1 (ATerm, ATerm a_80 (ATerm));
ATerm Call_2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm z_92 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm));
ATerm zip_1 (ATerm, ATerm h_96 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm l_82 (ATerm), ATerm m_82 (ATerm));
ATerm Prim_2 (ATerm, ATerm r_78 (ATerm), ATerm s_78 (ATerm));
ATerm Explode_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
ATerm Op_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm pat_td_1 (ATerm, ATerm o_117 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm s_107 (ATerm), ATerm t_107 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_107 (ATerm));
ATerm downup_1 (ATerm, ATerm l_91 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_81 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_81 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm g_77 (ATerm), ATerm h_77 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_98 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_117 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_113 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_111 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_95 (ATerm), ATerm d_95 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_102 (ATerm), ATerm m_102 (ATerm));
ATerm crush_2 (ATerm, ATerm j_101 (ATerm), ATerm k_101 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_113 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_111 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_115 (ATerm));
ATerm map_1 (ATerm, ATerm q_97 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_115 (ATerm));
ATerm Program_1 (ATerm, ATerm j_88 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_118 (ATerm));
ATerm Undefined_1 (ATerm, ATerm k_88 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_97 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_114 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_94 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_115 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_115 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_115 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_112 (ATerm), ATerm j_112 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_112 (ATerm));
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
ATerm rewrite_1 (ATerm t, ATerm k_111 (ATerm))
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm s_7 = NULL;
    t = term_x_6;
    {
      t = k_111(t);
      {
        s_7 = t;
        if(((o_7 != NULL) && (o_7 != s_7)))
          _fail(s_7);
        else
          o_7 = s_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), not_null(m_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  b_8 = t;
  z_7 :
  if(match_cons(b_8, sym_Call_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      e_8 = ATgetArgument(b_8, 1);
      a_8 :
      if(match_cons(c_8, sym_SVar_1))
        {
          d_8 = ATgetArgument(c_8, 0);
          {
            ATerm i_8 = NULL;
            ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_8)), term_y_6);
            {
              ATerm k_0 (ATerm t)
              {
                t = term_z_6;
                return(t);
              }
              t = rewrite_1(t, k_0);
              {
                j_8 = t;
                x_7 :
                if(match_cons(j_8, sym_Defined_2))
                  {
                    k_8 = ATgetArgument(j_8, 0);
                    l_8 = ATgetArgument(j_8, 1);
                    y_7 :
                    if(match_string(k_8, "v_0"))
                      {
                        if(((i_8 != NULL) && (i_8 != l_8)))
                          _fail(l_8);
                        else
                          i_8 = l_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_8)), not_null(e_8));
          }
        }
      else
        {
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
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  v_8 = t;
  s_8 :
  if(match_cons(v_8, sym_Call_2))
    {
      w_8 = ATgetArgument(v_8, 0);
      y_8 = ATgetArgument(v_8, 1);
      t_8 :
      if(match_cons(w_8, sym_SVar_1))
        {
          x_8 = ATgetArgument(w_8, 0);
          u_8 :
          if(((ATgetType(y_8) == AT_LIST) && ATisEmpty(y_8)))
            {
              {
                ATerm b_9 = NULL;
                ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
                t = not_null(v_8);
                {
                  ATerm l_0 (ATerm t)
                  {
                    t = term_a_7;
                    return(t);
                  }
                  t = rewrite_1(t, l_0);
                  {
                    c_9 = t;
                    q_8 :
                    if(match_cons(c_9, sym_Defined_2))
                      {
                        d_9 = ATgetArgument(c_9, 0);
                        e_9 = ATgetArgument(c_9, 1);
                        r_8 :
                        if(match_string(d_9, "s_0"))
                          {
                            if(((b_9 != NULL) && (b_9 != e_9)))
                              _fail(e_9);
                            else
                              b_9 = e_9;
                          }
                        else
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
                  t = not_null(b_9);
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
ATerm topdown_1 (ATerm t, ATerm j_91 (ATerm))
{
  t = j_91(t);
  {
    ATerm m_0 (ATerm t)
    {
      t = topdown_1(t, j_91);
      return(t);
    }
    t = _all(t, m_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  w_9 = t;
  j_9 :
  if(match_cons(w_9, sym__2))
    {
      x_9 = ATgetArgument(w_9, 0);
      e_10 = ATgetArgument(w_9, 1);
      k_9 :
      if(match_cons(x_9, sym_VarDec_2))
        {
          y_9 = ATgetArgument(x_9, 0);
          z_9 = ATgetArgument(x_9, 1);
          l_9 :
          if(match_cons(z_9, sym_FunType_2))
            {
              a_10 = ATgetArgument(z_9, 0);
              d_10 = ATgetArgument(z_9, 1);
              m_9 :
              if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
                {
                  b_10 = ATgetFirst((ATermList) a_10);
                  c_10 = (ATerm) ATgetNext((ATermList) a_10);
                  n_9 :
                  if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
                    {
                      r_9 = ATgetFirst((ATermList) c_10);
                      s_9 = (ATerm) ATgetNext((ATermList) c_10);
                      o_9 :
                      if(match_cons(e_10, sym_Call_2))
                        {
                          t_9 = ATgetArgument(e_10, 0);
                          v_9 = ATgetArgument(e_10, 1);
                          p_9 :
                          if(match_cons(t_9, sym_SVar_1))
                            {
                              u_9 = ATgetArgument(t_9, 0);
                              q_9 :
                              if(((ATgetType(v_9) == AT_LIST) && ATisEmpty(v_9)))
                                {
                                  {
                                    ATerm b_7;
                                    b_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_9)), term_y_6), (ATerm) ATmakeAppl(sym_Defined_2, term_c_7, not_null(u_9)));
                                      {
                                        ATerm n_0 (ATerm t)
                                        {
                                          t = term_z_6;
                                          return(t);
                                        }
                                        t = assert_1(t, n_0);
                                      }
                                    }
                                    t = b_7;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                        {
                          {
                            ATerm d_7;
                            d_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_9)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_e_7, not_null(e_10)));
                              {
                                ATerm p_0 (ATerm t)
                                {
                                  t = term_a_7;
                                  return(t);
                                }
                                t = assert_1(t, p_0);
                              }
                            }
                            t = d_7;
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
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = term_a_7;
    return(t);
  }
  ATerm r_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = term_z_6;
      return(t);
    }
    ATerm u_0 (ATerm t)
    {
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
      q_10 = t;
      m_10 :
      if(match_cons(q_10, sym__3))
        {
          r_10 = ATgetArgument(q_10, 0);
          s_10 = ATgetArgument(q_10, 1);
          t_10 = ATgetArgument(q_10, 2);
          {
            if(((n_10 != NULL) && (n_10 != r_10)))
              _fail(r_10);
            else
              n_10 = r_10;
            {
              if(((o_10 != NULL) && (o_10 != s_10)))
                _fail(s_10);
              else
                o_10 = s_10;
              {
                if(((p_10 != NULL) && (p_10 != t_10)))
                  _fail(t_10);
                else
                  p_10 = t_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(o_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(p_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm f_7 = t;
                            int g_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(g_7);
                              }
                            else
                              {
                                t = f_7;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, x_0);
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
    t = scope_2(t, t_0, u_0);
    return(t);
  }
  t = scope_2(t, q_0, r_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  w_10 :
  if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
    {
      y_10 = ATgetFirst((ATermList) x_10);
      z_10 = (ATerm) ATgetNext((ATermList) x_10);
      t = not_null(y_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm n_90 (ATerm))
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, n_90);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
            j_11 = t;
            e_11 :
            if(match_cons(j_11, sym__2))
              {
                k_11 = ATgetArgument(j_11, 0);
                o_11 = ATgetArgument(j_11, 1);
                f_11 :
                if(match_cons(k_11, sym_SDef_3))
                  {
                    l_11 = ATgetArgument(k_11, 0);
                    m_11 = ATgetArgument(k_11, 1);
                    n_11 = ATgetArgument(k_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_11), not_null(m_11), not_null(n_11));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, z_0);
        }
        return(t);
      }
      t = Let_2(t, y_0, _id);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, n_90);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
                  s_11 = t;
                  h_11 :
                  if(match_cons(s_11, sym__2))
                    {
                      t_11 = ATgetArgument(s_11, 0);
                      w_11 = ATgetArgument(s_11, 1);
                      i_11 :
                      if(match_cons(t_11, sym_VarDec_2))
                        {
                          u_11 = ATgetArgument(t_11, 0);
                          v_11 = ATgetArgument(t_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_11), not_null(v_11));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, b_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, a_1, _id);
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = n_90(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, c_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm b_80 (ATerm), ATerm c_80 (ATerm))
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_Rec_2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      {
        ATerm o_12 = NULL,q_12 = NULL;
        ATerm p_12 = NULL;
        t = SSLgetAnnotations(not_null(i_12));
        {
          p_12 = t;
          if(((o_12 != NULL) && (o_12 != p_12)))
            _fail(p_12);
          else
            o_12 = p_12;
        }
        {
          t = not_null(j_12);
          {
            ATerm s_12 = NULL;
            t = b_80(t);
            {
              q_12 = t;
              {
                t = not_null(k_12);
                {
                  ATerm u_12 = NULL;
                  t = c_80(t);
                  {
                    s_12 = t;
                    {
                      ATerm v_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(q_12), not_null(s_12)), not_null(o_12));
                      {
                        v_12 = t;
                        if(((u_12 != NULL) && (u_12 != v_12)))
                          _fail(v_12);
                        else
                          u_12 = v_12;
                      }
                      t = not_null(u_12);
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
ATerm Let_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym_Let_2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      {
        ATerm n_13 = NULL,p_13 = NULL;
        ATerm o_13 = NULL;
        t = SSLgetAnnotations(not_null(h_13));
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
        {
          t = not_null(i_13);
          {
            ATerm r_13 = NULL;
            t = d_80(t);
            {
              p_13 = t;
              {
                t = not_null(j_13);
                {
                  ATerm t_13 = NULL;
                  t = e_80(t);
                  {
                    r_13 = t;
                    {
                      ATerm u_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_13), not_null(r_13)), not_null(n_13));
                      {
                        u_13 = t;
                        if(((t_13 != NULL) && (t_13 != u_13)))
                          _fail(u_13);
                        else
                          t_13 = u_13;
                      }
                      t = not_null(t_13);
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
ATerm sboundin_3 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm))
{
  ATerm l_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, o_90, o_90);
      LocalPopChoice(n_7);
    }
  else
    {
      t = l_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, q_90, q_90, o_90);
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = Rec_2(t, q_90, o_90);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym_Rec_2))
    {
      d_14 = ATgetArgument(c_14, 0);
      e_14 = ATgetArgument(c_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_SDef_3))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      p_14 = ATgetArgument(m_14, 2);
      {
        t = not_null(o_14);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
            t_14 = t;
            k_14 :
            if(match_cons(t_14, sym_VarDec_2))
              {
                u_14 = ATgetArgument(t_14, 0);
                v_14 = ATgetArgument(t_14, 1);
                t = not_null(u_14);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_Let_2))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      {
        t = not_null(e_15);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
            i_15 = t;
            b_15 :
            if(match_cons(i_15, sym_SDef_3))
              {
                j_15 = ATgetArgument(i_15, 0);
                k_15 = ATgetArgument(i_15, 1);
                l_15 = ATgetArgument(i_15, 2);
                t = not_null(j_15);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_1);
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
  ATerm f_1 (ATerm t)
  {
    ATerm r_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(t_7);
      }
    else
      {
        t = r_7;
        {
          ATerm u_7 = t;
          int v_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(v_7);
            }
          else
            {
              t = u_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm j_90 (ATerm))
{
  t = Scope_2(t, j_90, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_DynamicRules_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(w_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(x_15);
          {
            ATerm e_16 = NULL;
            t = w_81(t);
            {
              c_16 = t;
              {
                ATerm f_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(c_16)), not_null(a_16));
                {
                  f_16 = t;
                  if(((e_16 != NULL) && (e_16 != f_16)))
                    _fail(f_16);
                  else
                    e_16 = f_16;
                }
                t = not_null(e_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm))
{
  ATerm w_7 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, m_90, k_90);
      LocalPopChoice(f_8);
    }
  else
    {
      t = w_7;
      t = DynamicRules_1(t, k_90);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym_DynamicRules_1))
    {
      n_16 = ATgetArgument(m_16, 0);
      {
        t = not_null(n_16);
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
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Var_1))
    {
      t_16 = ATgetArgument(s_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(t_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_101 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym__2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      {
        t = not_null(z_16);
        {
          ATerm e_17 (ATerm t)
          {
            ATerm g_8 = t;
            int h_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_17);
                LocalPopChoice(h_8);
              }
            else
              {
                t = g_8;
                {
                  ATerm m_8 = t;
                  int n_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(a_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_101, g_1);
                      t = e_17(t);
                      LocalPopChoice(n_8);
                    }
                  else
                    {
                      t = m_8;
                      t = Cons_2(t, _id, e_17);
                    }
                }
              }
            return(t);
          }
          t = e_17(t);
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
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym__2))
    {
      i_17 = ATgetArgument(h_17, 0);
      j_17 = ATgetArgument(h_17, 1);
      if(((i_17 != NULL) && (i_17 != j_17)))
        _fail(j_17);
      else
        i_17 = j_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_101 (ATerm), ATerm z_101 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  o_17 :
  if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
    {
      q_17 = ATgetFirst((ATermList) p_17);
      r_17 = (ATerm) ATgetNext((ATermList) p_17);
      {
        t = z_101(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm u_17 = NULL;
            u_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(u_17));
              t = y_101(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(r_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm q_101 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym__2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      {
        t = not_null(b_18);
        {
          ATerm g_18 (ATerm t)
          {
            ATerm o_8 = t;
            int p_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(p_8);
              }
            else
              {
                t = o_8;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(c_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_101, i_1);
                      t = g_18(t);
                      LocalPopChoice(a_9);
                    }
                  else
                    {
                      t = z_8;
                      t = Cons_2(t, _id, g_18);
                    }
                }
              }
            return(t);
          }
          t = g_18(t);
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  k_18 = t;
  i_18 :
  if(match_cons(k_18, sym__2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      j_18 :
      if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
        {
          n_18 = ATgetFirst((ATermList) m_18);
          o_18 = (ATerm) ATgetNext((ATermList) m_18);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_18)), not_null(n_18)), not_null(o_18));
        }
      else
        {
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
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  d_19 = t;
  b_19 :
  if(((ATgetType(d_19) == AT_LIST) && !(ATisEmpty(d_19))))
    {
      e_19 = ATgetFirst((ATermList) d_19);
      h_19 = (ATerm) ATgetNext((ATermList) d_19);
      c_19 :
      if(match_cons(e_19, sym__2))
        {
          f_19 = ATgetArgument(e_19, 0);
          g_19 = ATgetArgument(e_19, 1);
          {
            ATerm l_19 = NULL,m_19 = NULL,s_19 = NULL,y_19 = NULL;
            ATerm f_9;
            f_9 = t;
            {
              ATerm n_19 = NULL;
              ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
              t = not_null(g_19);
              {
                n_19 = t;
                {
                  t = SSL_explode_term(not_null(n_19));
                  {
                    p_19 = t;
                    w_18 :
                    if(match_cons(p_19, sym__2))
                      {
                        q_19 = ATgetArgument(p_19, 0);
                        r_19 = ATgetArgument(p_19, 1);
                        {
                          if(((l_19 != NULL) && (l_19 != q_19)))
                            _fail(q_19);
                          else
                            l_19 = q_19;
                          if(((m_19 != NULL) && (m_19 != r_19)))
                            _fail(r_19);
                          else
                            m_19 = r_19;
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
            t = f_9;
            {
              ATerm g_9;
              g_9 = t;
              {
                ATerm t_19 = NULL;
                ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
                t = not_null(f_19);
                {
                  t_19 = t;
                  {
                    t = SSL_explode_term(not_null(t_19));
                    {
                      v_19 = t;
                      z_18 :
                      if(match_cons(v_19, sym__2))
                        {
                          w_19 = ATgetArgument(v_19, 0);
                          x_19 = ATgetArgument(v_19, 1);
                          {
                            if(((l_19 != NULL) && (l_19 != w_19)))
                              _fail(w_19);
                            else
                              l_19 = w_19;
                            if(((s_19 != NULL) && (s_19 != x_19)))
                              _fail(x_19);
                            else
                              s_19 = x_19;
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
              t = g_9;
              {
                ATerm z_19 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), not_null(m_19));
                {
                  t = zip_1(t, _id);
                  {
                    z_19 = t;
                    if(((y_19 != NULL) && (y_19 != z_19)))
                      _fail(z_19);
                    else
                      y_19 = z_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(h_19));
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
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  j_20 = t;
  h_20 :
  if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
    {
      k_20 = ATgetFirst((ATermList) j_20);
      n_20 = (ATerm) ATgetNext((ATermList) j_20);
      i_20 :
      if(match_cons(k_20, sym__2))
        {
          l_20 = ATgetArgument(k_20, 0);
          m_20 = ATgetArgument(k_20, 1);
          {
            ATerm p_20 = NULL;
            if(((l_20 != NULL) && (l_20 != m_20)))
              _fail(m_20);
            else
              l_20 = m_20;
            {
              if(((p_20 != NULL) && (p_20 != n_20)))
                _fail(n_20);
              else
                p_20 = n_20;
              t = not_null(p_20);
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
ATerm while_not_2 (ATerm t, ATerm j_108 (ATerm), ATerm k_108 (ATerm))
{
  ATerm r_20 (ATerm t)
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_108(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          t = k_108(t);
          t = r_20(t);
        }
      }
    return(t);
  }
  t = r_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm))
{
  t = m_108(t);
  t = while_not_2(t, n_108, o_108);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm t_20 = NULL;
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_20));
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, m_1);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, j_1, k_1, l_1);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_20 (ATerm t)
  {
    ATerm l_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_106(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = l_10;
        {
          ATerm v_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_20 = NULL;
              ATerm b_11;
              b_11 = t;
              {
                ATerm y_20 = NULL;
                t = e_106(t);
                {
                  y_20 = t;
                  if(((x_20 != NULL) && (x_20 != y_20)))
                    _fail(y_20);
                  else
                    x_20 = y_20;
                }
              }
              t = b_11;
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = not_null(x_20);
                    return(t);
                  }
                  t = split_2(t, z_20, p_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = f_106(t, n_1, z_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              LocalPopChoice(a_11);
            }
          else
            {
              t = v_10;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, r_1, union_0, z_20);
              }
            }
        }
      }
    return(t);
  }
  t = z_20(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  d_21 :
  if(match_cons(i_21, sym_LRule_1))
    {
      j_21 = ATgetArgument(i_21, 0);
      e_21 :
      if(match_cons(j_21, sym_Rule_3))
        {
          f_21 = ATgetArgument(j_21, 0);
          g_21 = ATgetArgument(j_21, 1);
          h_21 = ATgetArgument(j_21, 2);
          {
            t = not_null(f_21);
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
      if(match_cons(i_21, sym_Scope_2))
        {
          j_21 = ATgetArgument(i_21, 0);
          k_21 = ATgetArgument(i_21, 1);
          t = not_null(j_21);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym_Var_1))
    {
      c_22 = ATgetArgument(b_22, 0);
      {
        ATerm g_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_22 = NULL,h_22 = NULL;
            ATerm g_22 = NULL;
            t = SSLgetAnnotations(not_null(b_22));
            {
              g_22 = t;
              if(((f_22 != NULL) && (f_22 != g_22)))
                _fail(g_22);
              else
                f_22 = g_22;
            }
            {
              t = not_null(c_22);
              {
                ATerm j_22 = NULL;
                t = j_0(t);
                {
                  h_22 = t;
                  {
                    ATerm k_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_22)), not_null(f_22));
                    {
                      k_22 = t;
                      if(((j_22 != NULL) && (j_22 != k_22)))
                        _fail(k_22);
                      else
                        j_22 = k_22;
                    }
                    t = not_null(j_22);
                  }
                }
              }
            }
            LocalPopChoice(p_11);
          }
        else
          {
            t = g_11;
            {
              ATerm n_22 = NULL,p_22 = NULL;
              ATerm o_22 = NULL;
              t = SSLgetAnnotations(not_null(b_22));
              {
                o_22 = t;
                if(((n_22 != NULL) && (n_22 != o_22)))
                  _fail(o_22);
                else
                  n_22 = o_22;
              }
              {
                t = not_null(c_22);
                {
                  ATerm r_22 = NULL;
                  t = j_0(t);
                  {
                    p_22 = t;
                    {
                      ATerm s_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_22)), not_null(n_22));
                      {
                        s_22 = t;
                        if(((r_22 != NULL) && (r_22 != s_22)))
                          _fail(s_22);
                        else
                          r_22 = s_22;
                      }
                      t = not_null(r_22);
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
ATerm DistBinding_2 (ATerm t, ATerm l_104 (ATerm), ATerm m_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym__3))
    {
      g_23 = ATgetArgument(f_23, 0);
      h_23 = ATgetArgument(f_23, 1);
      i_23 = ATgetArgument(f_23, 2);
      {
        t = not_null(g_23);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm m_23 = NULL;
            m_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(i_23));
              t = l_104(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm o_23 = NULL;
            o_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(h_23));
              t = l_104(t);
            }
            return(t);
          }
          t = m_104(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm f_104 (ATerm), ATerm g_104 (ATerm, ATerm (ATerm)))
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      {
        ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,n_24 = NULL;
        ATerm q_11;
        q_11 = t;
        {
          ATerm i_24 = NULL;
          t = not_null(b_24);
          {
            ATerm j_24 = NULL;
            t = f_104(t);
            {
              i_24 = t;
              {
                if(((f_24 != NULL) && (f_24 != i_24)))
                  _fail(i_24);
                else
                  f_24 = i_24;
                {
                  ATerm k_24 = NULL,m_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    j_24 = t;
                    {
                      if(((g_24 != NULL) && (g_24 != j_24)))
                        _fail(j_24);
                      else
                        g_24 = j_24;
                      {
                        ATerm l_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(g_24));
                        {
                          t = zip_1(t, _id);
                          {
                            l_24 = t;
                            if(((k_24 != NULL) && (k_24 != l_24)))
                              _fail(l_24);
                            else
                              k_24 = l_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_24), not_null(c_24));
                          {
                            t = conc_0(t);
                            {
                              m_24 = t;
                              if(((h_24 != NULL) && (h_24 != m_24)))
                                _fail(m_24);
                              else
                                h_24 = m_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = q_11;
        {
          ATerm o_24 = NULL;
          t = not_null(b_24);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(g_24);
              return(t);
            }
            t = g_104(t, v_1);
            {
              o_24 = t;
              if(((n_24 != NULL) && (n_24 != o_24)))
                _fail(o_24);
              else
                n_24 = o_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(n_24), not_null(c_24), not_null(h_24));
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
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  y_24 = t;
  w_24 :
  if(match_cons(y_24, sym__2))
    {
      z_24 = ATgetArgument(y_24, 0);
      a_25 = ATgetArgument(y_24, 1);
      x_24 :
      if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
        {
          b_25 = ATgetFirst((ATermList) a_25);
          c_25 = (ATerm) ATgetNext((ATermList) a_25);
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(c_25));
        }
      else
        {
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
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  k_25 = t;
  h_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      i_25 :
      if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
        {
          n_25 = ATgetFirst((ATermList) m_25);
          q_25 = (ATerm) ATgetNext((ATermList) m_25);
          j_25 :
          if(match_cons(n_25, sym__2))
            {
              o_25 = ATgetArgument(n_25, 0);
              p_25 = ATgetArgument(n_25, 1);
              {
                ATerm s_25 = NULL;
                if(((l_25 != NULL) && (l_25 != o_25)))
                  _fail(o_25);
                else
                  l_25 = o_25;
                {
                  if(((s_25 != NULL) && (s_25 != p_25)))
                    _fail(p_25);
                  else
                    s_25 = p_25;
                  t = not_null(s_25);
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
  ATerm r_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = r_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm q_104 (ATerm, ATerm (ATerm)))
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym__2))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      {
        t = not_null(y_25);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(z_25);
              return(t);
            }
            t = split_2(t, _id, x_1);
            t = lookup_0(t);
            return(t);
          }
          t = q_104(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm j_105 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym__2))
    {
      h_26 = ATgetArgument(g_26, 0);
      i_26 = ATgetArgument(g_26, 1);
      {
        t = not_null(h_26);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm l_26 = NULL;
            l_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), not_null(i_26));
              t = j_105(t);
            }
            return(t);
          }
          t = _all(t, y_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm t_104 (ATerm))
{
  ATerm p_26 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_104(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = all_dist_1(t, p_26);
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm a_104 (ATerm, ATerm (ATerm)), ATerm b_104 (ATerm), ATerm c_104 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_104 (ATerm, ATerm (ATerm)))
{
  ATerm r_26 = NULL;
  r_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), (ATerm) ATempty);
    {
      ATerm u_26 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, a_104);
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              {
                t = RnBinding_2(t, b_104, d_104);
                t = DistBinding_2(t, u_26, c_104);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_1);
        return(t);
      }
      t = u_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm v_26 (ATerm t, ATerm w_26 (ATerm))
  {
    t = Scope_2(t, w_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, v_26);
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
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  ATerm r_29 (ATerm t)
  {
    ATerm e_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_28)), term_y_6);
    {
      ATerm a_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        e_28 = t;
        d_27 :
        if(match_cons(e_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_d_12;
    return(t);
  }
  ATerm s_29 (ATerm t)
  {
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
    ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
    t = not_null(y_27);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        l_28 = t;
        j_27 :
        if(match_cons(l_28, sym_Defined_2))
          {
            m_28 = ATgetArgument(l_28, 0);
            n_28 = ATgetArgument(l_28, 1);
            k_27 :
            if(match_string(m_28, "o_0"))
              {
                ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
                if(((h_28 != NULL) && (h_28 != n_28)))
                  _fail(n_28);
                else
                  h_28 = n_28;
                {
                  t = not_null(h_28);
                  {
                    t = strename_0(t);
                    {
                      o_28 = t;
                      h_27 :
                      if(match_cons(o_28, sym_SDef_3))
                        {
                          p_28 = ATgetArgument(o_28, 0);
                          q_28 = ATgetArgument(o_28, 1);
                          t_28 = ATgetArgument(o_28, 2);
                          i_27 :
                          if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
                            {
                              r_28 = ATgetFirst((ATermList) q_28);
                              s_28 = (ATerm) ATgetNext((ATermList) q_28);
                              {
                                ATerm u_28 = NULL;
                                if(((a_28 != NULL) && (a_28 != p_28)))
                                  _fail(p_28);
                                else
                                  a_28 = p_28;
                                {
                                  if(((i_28 != NULL) && (i_28 != q_28)))
                                    _fail(q_28);
                                  else
                                    i_28 = q_28;
                                  {
                                    if(((j_28 != NULL) && (j_28 != t_28)))
                                      _fail(t_28);
                                    else
                                      j_28 = t_28;
                                    {
                                      t = new_0(t);
                                      {
                                        u_28 = t;
                                        {
                                          if(((k_28 != NULL) && (k_28 != u_28)))
                                            _fail(u_28);
                                          else
                                            k_28 = u_28;
                                          {
                                            ATerm e_12;
                                            e_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_28)), term_y_6), term_d_12);
                                              {
                                                ATerm c_2 (ATerm t)
                                                {
                                                  t = term_c_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, c_2);
                                              }
                                            }
                                            t = e_12;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_28), not_null(i_28), not_null(j_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_28)), (ATerm) ATempty));
    return(t);
  }
  ATerm t_29 (ATerm t)
  {
    ATerm x_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_28)), term_y_6);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        x_28 = t;
        m_27 :
        if(match_cons(x_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_d_12;
    return(t);
  }
  ATerm u_29 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
    ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_28)), term_y_6);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        f_29 = t;
        r_27 :
        if(match_cons(f_29, sym_Defined_2))
          {
            g_29 = ATgetArgument(f_29, 0);
            h_29 = ATgetArgument(f_29, 1);
            s_27 :
            if(match_string(g_29, "e_0"))
              {
                ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
                if(((b_29 != NULL) && (b_29 != h_29)))
                  _fail(h_29);
                else
                  b_29 = h_29;
                {
                  t = not_null(b_29);
                  {
                    t = strename_0(t);
                    {
                      i_29 = t;
                      q_27 :
                      if(match_cons(i_29, sym_SDef_3))
                        {
                          j_29 = ATgetArgument(i_29, 0);
                          k_29 = ATgetArgument(i_29, 1);
                          l_29 = ATgetArgument(i_29, 2);
                          {
                            ATerm m_29 = NULL;
                            if(((a_28 != NULL) && (a_28 != j_29)))
                              _fail(j_29);
                            else
                              a_28 = j_29;
                            {
                              if(((c_29 != NULL) && (c_29 != k_29)))
                                _fail(k_29);
                              else
                                c_29 = k_29;
                              {
                                if(((d_29 != NULL) && (d_29 != l_29)))
                                  _fail(l_29);
                                else
                                  d_29 = l_29;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_29), not_null(b_28), not_null(d_29));
                                  {
                                    t = substitute_args_0(t);
                                    {
                                      m_29 = t;
                                      {
                                        if(((e_29 != NULL) && (e_29 != m_29)))
                                          _fail(m_29);
                                        else
                                          e_29 = m_29;
                                        {
                                          ATerm f_12;
                                          f_12 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_28)), term_y_6), term_d_12);
                                            {
                                              ATerm f_2 (ATerm t)
                                              {
                                                t = term_c_12;
                                                return(t);
                                              }
                                              t = assert_1(t, f_2);
                                            }
                                          }
                                          t = f_12;
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
    t = not_null(e_29);
    return(t);
  }
  ATerm v_29 (ATerm t)
  {
    ATerm q_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_28)), term_y_6);
    {
      ATerm g_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, g_2);
      {
        q_29 = t;
        u_27 :
        if(match_cons(q_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_d_12;
    return(t);
  }
  y_27 = t;
  v_27 :
  if(match_cons(y_27, sym_Call_2))
    {
      z_27 = ATgetArgument(y_27, 0);
      b_28 = ATgetArgument(y_27, 1);
      w_27 :
      if(match_cons(z_27, sym_SVar_1))
        {
          a_28 = ATgetArgument(z_27, 0);
          x_27 :
          if(((ATgetType(b_28) == AT_LIST) && ATisEmpty(b_28)))
            {
              {
                ATerm g_12 = t;
                int l_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_29(t);
                    LocalPopChoice(l_12);
                  }
                else
                  {
                    t = g_12;
                    {
                      ATerm m_12 = t;
                      int n_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_29(t);
                          LocalPopChoice(n_12);
                        }
                      else
                        {
                          t = m_12;
                          {
                            ATerm r_12 = t;
                            int t_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = t_29(t);
                                LocalPopChoice(t_12);
                              }
                            else
                              {
                                t = r_12;
                                {
                                  ATerm w_12 = t;
                                  int x_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_29(t);
                                      LocalPopChoice(x_12);
                                    }
                                  else
                                    {
                                      t = w_12;
                                      t = v_29(t);
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
              ATerm y_12 = t;
              int z_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_29(t);
                  LocalPopChoice(z_12);
                }
              else
                {
                  t = y_12;
                  {
                    ATerm a_13 = t;
                    int b_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = t_29(t);
                        LocalPopChoice(b_13);
                      }
                    else
                      {
                        t = a_13;
                        {
                          ATerm c_13 = t;
                          int d_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = u_29(t);
                              LocalPopChoice(d_13);
                            }
                          else
                            {
                              t = c_13;
                              t = v_29(t);
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
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_SDef_3))
    {
      i_30 = ATgetArgument(h_30, 0);
      j_30 = ATgetArgument(h_30, 1);
      k_30 = ATgetArgument(h_30, 2);
      {
        ATerm e_13;
        e_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_30)), term_y_6), term_d_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_c_12;
              return(t);
            }
            t = assert_1(t, h_2);
          }
        }
        t = e_13;
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
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  o_30 :
  if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
    {
      c_32 = ATgetFirst((ATermList) b_32);
      d_32 = (ATerm) ATgetNext((ATermList) b_32);
      t = not_null(d_32);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  h_33 :
  if(match_cons(i_33, sym__2))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm n_33 = NULL;
          ATerm o_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), not_null(k_33));
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
                t = (ATerm) ATempty;
              }
            {
              o_33 = t;
              if(((n_33 != NULL) && (n_33 != o_33)))
                _fail(o_33);
              else
                n_33 = o_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_33), not_null(k_33), not_null(n_33));
            t = table_put_0(t);
          }
        }
        t = f_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_111 (ATerm))
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  ATerm m_13;
  m_13 = t;
  {
    ATerm z_33 = NULL;
    ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
    t = f_111(t);
    {
      z_33 = t;
      {
        if(((y_33 != NULL) && (y_33 != z_33)))
          _fail(z_33);
        else
          y_33 = z_33;
        {
          ATerm q_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), term_v_13);
              t = table_get_0(t);
              LocalPopChoice(s_13);
            }
          else
            {
              t = q_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            a_34 = t;
            v_33 :
            if(((ATgetType(a_34) == AT_LIST) && !(ATisEmpty(a_34))))
              {
                b_34 = ATgetFirst((ATermList) a_34);
                c_34 = (ATerm) ATgetNext((ATermList) a_34);
                {
                  if(((x_33 != NULL) && (x_33 != b_34)))
                    _fail(b_34);
                  else
                    x_33 = b_34;
                  {
                    if(((w_33 != NULL) && (w_33 != c_34)))
                      _fail(c_34);
                    else
                      w_33 = c_34;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_33), term_v_13, not_null(w_33));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_33);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm d_34 = NULL;
                              d_34 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(d_34));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_2);
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
  t = m_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_95 (ATerm), ATerm b_95 (ATerm))
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_95(t);
      t = b_95(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        t = b_95(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_111 (ATerm))
{
  ATerm k_34 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm l_34 = NULL;
    ATerm m_34 = NULL;
    t = e_111(t);
    {
      l_34 = t;
      {
        if(((k_34 != NULL) && (k_34 != l_34)))
          _fail(l_34);
        else
          k_34 = l_34;
        {
          ATerm n_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_34), term_v_13);
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = (ATerm) ATempty;
              }
            {
              n_34 = t;
              if(((m_34 != NULL) && (m_34 != n_34)))
                _fail(n_34);
              else
                m_34 = n_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_34), term_v_13, (ATerm) ATinsert(CheckATermList(not_null(m_34)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm g_111 (ATerm), ATerm h_111 (ATerm))
{
  t = begin_scope_1(t, g_111);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, g_111);
      return(t);
    }
    t = restore_always_2(t, h_111, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_c_12;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_111 (ATerm))
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  v_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      {
        ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
        ATerm h_14;
        h_14 = t;
        {
          ATerm e_35 = NULL;
          ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
          t = i_111(t);
          {
            e_35 = t;
            {
              if(((b_35 != NULL) && (b_35 != e_35)))
                _fail(e_35);
              else
                b_35 = e_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_35), not_null(x_34), not_null(y_34));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_14 = t;
                    int j_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), term_v_13);
                        t = table_get_0(t);
                        LocalPopChoice(j_14);
                      }
                    else
                      {
                        t = i_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      f_35 = t;
                      u_34 :
                      if(((ATgetType(f_35) == AT_LIST) && !(ATisEmpty(f_35))))
                        {
                          g_35 = ATgetFirst((ATermList) f_35);
                          h_35 = (ATerm) ATgetNext((ATermList) f_35);
                          {
                            if(((c_35 != NULL) && (c_35 != g_35)))
                              _fail(g_35);
                            else
                              c_35 = g_35;
                            {
                              if(((d_35 != NULL) && (d_35 != h_35)))
                                _fail(h_35);
                              else
                                d_35 = h_35;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_35), term_v_13, (ATerm) ATinsert(CheckATermList(not_null(d_35)), (ATerm) ATinsert(CheckATermList(not_null(c_35)), not_null(x_34))));
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
        t = h_14;
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
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym_SDef_3))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      q_35 = ATgetArgument(n_35, 2);
      {
        ATerm q_14;
        q_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_35)), term_y_6), (ATerm) ATmakeAppl(sym_Defined_2, term_r_14, not_null(n_35)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_c_12;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = q_14;
        {
          ATerm s_14;
          s_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, not_null(n_35)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_c_12;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = s_14;
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
  ATerm x_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm))
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_102(t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
        y_35 = t;
        x_35 :
        if(((ATgetType(y_35) == AT_LIST) && !(ATisEmpty(y_35))))
          {
            z_35 = ATgetFirst((ATermList) y_35);
            a_36 = (ATerm) ATgetNext((ATermList) y_35);
            {
              ATerm d_36 = NULL,f_36 = NULL;
              ATerm a_15;
              a_15 = t;
              {
                ATerm e_36 = NULL;
                t = not_null(z_35);
                {
                  t = p_102(t);
                  {
                    e_36 = t;
                    if(((d_36 != NULL) && (d_36 != e_36)))
                      _fail(e_36);
                    else
                      d_36 = e_36;
                  }
                }
              }
              t = a_15;
              {
                ATerm g_36 = NULL;
                t = not_null(a_36);
                {
                  t = foldr_3(t, n_102, o_102, p_102);
                  {
                    g_36 = t;
                    if(((f_36 != NULL) && (f_36 != g_36)))
                      _fail(g_36);
                    else
                      f_36 = g_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_36), not_null(f_36));
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
ATerm crush_3 (ATerm t, ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm))
{
  ATerm o_36 = NULL;
  ATerm u_36 = NULL;
  o_36 = t;
  {
    ATerm v_36 = NULL;
    ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
    t = not_null(o_36);
    {
      v_36 = t;
      {
        t = SSL_explode_term(not_null(v_36));
        {
          x_36 = t;
          n_36 :
          if(match_cons(x_36, sym__2))
            {
              y_36 = ATgetArgument(x_36, 0);
              z_36 = ATgetArgument(x_36, 1);
              if(((u_36 != NULL) && (u_36 != z_36)))
                _fail(z_36);
              else
                u_36 = z_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_36);
      t = foldr_3(t, l_101, m_101, n_101);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        t = term_m_15;
        return(t);
      }
      t = crush_3(t, o_2, add_0, term_size_0);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm f_37 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            t = term_m_15;
            return(t);
          }
          t = crush_3(t, p_2, add_0, f_37);
          return(t);
        }
        t = f_37(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym_LChoice_2))
    {
      n_37 = ATgetArgument(m_37, 0);
      o_37 = ATgetArgument(m_37, 1);
      {
        ATerm s_37 = NULL,u_37 = NULL;
        ATerm t_37 = NULL;
        t = SSLgetAnnotations(not_null(m_37));
        {
          t_37 = t;
          if(((s_37 != NULL) && (s_37 != t_37)))
            _fail(t_37);
          else
            s_37 = t_37;
        }
        {
          t = not_null(n_37);
          {
            ATerm w_37 = NULL;
            t = q_79(t);
            {
              u_37 = t;
              {
                t = not_null(o_37);
                {
                  ATerm y_37 = NULL;
                  t = r_79(t);
                  {
                    w_37 = t;
                    {
                      ATerm z_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(u_37), not_null(w_37)), not_null(s_37));
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
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm o_79 (ATerm), ATerm p_79 (ATerm))
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  p_38 :
  if(match_cons(q_38, sym_Choice_2))
    {
      r_38 = ATgetArgument(q_38, 0);
      s_38 = ATgetArgument(q_38, 1);
      {
        ATerm d_39 = NULL,f_39 = NULL;
        ATerm e_39 = NULL;
        t = SSLgetAnnotations(not_null(q_38));
        {
          e_39 = t;
          if(((d_39 != NULL) && (d_39 != e_39)))
            _fail(e_39);
          else
            d_39 = e_39;
        }
        {
          t = not_null(r_38);
          {
            ATerm h_39 = NULL;
            t = o_79(t);
            {
              f_39 = t;
              {
                t = not_null(s_38);
                {
                  ATerm j_39 = NULL;
                  t = p_79(t);
                  {
                    h_39 = t;
                    {
                      ATerm k_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(f_39), not_null(h_39)), not_null(d_39));
                      {
                        k_39 = t;
                        if(((j_39 != NULL) && (j_39 != k_39)))
                          _fail(k_39);
                        else
                          j_39 = k_39;
                      }
                      t = not_null(j_39);
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
ATerm Cong_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym_Cong_2))
    {
      x_39 = ATgetArgument(w_39, 0);
      y_39 = ATgetArgument(w_39, 1);
      {
        ATerm c_40 = NULL,e_40 = NULL;
        ATerm d_40 = NULL;
        t = SSLgetAnnotations(not_null(w_39));
        {
          d_40 = t;
          if(((c_40 != NULL) && (c_40 != d_40)))
            _fail(d_40);
          else
            c_40 = d_40;
        }
        {
          t = not_null(x_39);
          {
            ATerm g_40 = NULL;
            t = e_79(t);
            {
              e_40 = t;
              {
                t = not_null(y_39);
                {
                  ATerm k_40 = NULL;
                  t = f_79(t);
                  {
                    g_40 = t;
                    {
                      ATerm l_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(e_40), not_null(g_40)), not_null(c_40));
                      {
                        l_40 = t;
                        if(((k_40 != NULL) && (k_40 != l_40)))
                          _fail(l_40);
                        else
                          k_40 = l_40;
                      }
                      t = not_null(k_40);
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
ATerm Match_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm d_41 = NULL,i_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym_Match_1))
    {
      i_41 = ATgetArgument(d_41, 0);
      {
        ATerm p_41 = NULL,r_41 = NULL;
        ATerm q_41 = NULL;
        t = SSLgetAnnotations(not_null(d_41));
        {
          q_41 = t;
          if(((p_41 != NULL) && (p_41 != q_41)))
            _fail(q_41);
          else
            p_41 = q_41;
        }
        {
          t = not_null(i_41);
          {
            ATerm t_41 = NULL;
            t = v_78(t);
            {
              r_41 = t;
              {
                ATerm u_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(r_41)), not_null(p_41));
                {
                  u_41 = t;
                  if(((t_41 != NULL) && (t_41 != u_41)))
                    _fail(u_41);
                  else
                    t_41 = u_41;
                }
                t = not_null(t_41);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_Seq_2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        ATerm l_42 = NULL,n_42 = NULL;
        ATerm m_42 = NULL;
        t = SSLgetAnnotations(not_null(f_42));
        {
          m_42 = t;
          if(((l_42 != NULL) && (l_42 != m_42)))
            _fail(m_42);
          else
            l_42 = m_42;
        }
        {
          t = not_null(g_42);
          {
            ATerm p_42 = NULL;
            t = m_79(t);
            {
              n_42 = t;
              {
                t = not_null(h_42);
                {
                  ATerm r_42 = NULL;
                  t = n_79(t);
                  {
                    p_42 = t;
                    {
                      ATerm s_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(n_42), not_null(p_42)), not_null(l_42));
                      {
                        s_42 = t;
                        if(((r_42 != NULL) && (r_42 != s_42)))
                          _fail(s_42);
                        else
                          r_42 = s_42;
                      }
                      t = not_null(r_42);
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
ATerm Scope_2 (ATerm t, ATerm z_78 (ATerm), ATerm a_79 (ATerm))
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  q_43 :
  if(match_cons(r_43, sym_Scope_2))
    {
      s_43 = ATgetArgument(r_43, 0);
      t_43 = ATgetArgument(r_43, 1);
      {
        ATerm a_44 = NULL,c_44 = NULL;
        ATerm b_44 = NULL;
        t = SSLgetAnnotations(not_null(r_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        {
          t = not_null(s_43);
          {
            ATerm e_44 = NULL;
            t = z_78(t);
            {
              c_44 = t;
              {
                t = not_null(t_43);
                {
                  ATerm g_44 = NULL;
                  t = a_79(t);
                  {
                    e_44 = t;
                    {
                      ATerm h_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(c_44), not_null(e_44)), not_null(a_44));
                      {
                        h_44 = t;
                        if(((g_44 != NULL) && (g_44 != h_44)))
                          _fail(h_44);
                        else
                          g_44 = h_44;
                      }
                      t = not_null(g_44);
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
ATerm Build_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm t_44 = NULL,u_44 = NULL;
  t_44 = t;
  s_44 :
  if(match_cons(t_44, sym_Build_1))
    {
      u_44 = ATgetArgument(t_44, 0);
      {
        ATerm x_44 = NULL,z_44 = NULL;
        ATerm y_44 = NULL;
        t = SSLgetAnnotations(not_null(t_44));
        {
          y_44 = t;
          if(((x_44 != NULL) && (x_44 != y_44)))
            _fail(y_44);
          else
            x_44 = y_44;
        }
        {
          t = not_null(u_44);
          {
            ATerm b_45 = NULL;
            t = w_78(t);
            {
              z_44 = t;
              {
                ATerm c_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(z_44)), not_null(x_44));
                {
                  c_45 = t;
                  if(((b_45 != NULL) && (b_45 != c_45)))
                    _fail(c_45);
                  else
                    b_45 = c_45;
                }
                t = not_null(b_45);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm m_45 = NULL,n_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym_SVar_1))
    {
      n_45 = ATgetArgument(m_45, 0);
      {
        ATerm q_45 = NULL,s_45 = NULL;
        ATerm r_45 = NULL;
        t = SSLgetAnnotations(not_null(m_45));
        {
          r_45 = t;
          if(((q_45 != NULL) && (q_45 != r_45)))
            _fail(r_45);
          else
            q_45 = r_45;
        }
        {
          t = not_null(n_45);
          {
            ATerm u_45 = NULL;
            t = a_80(t);
            {
              s_45 = t;
              {
                ATerm v_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(s_45)), not_null(q_45));
                {
                  v_45 = t;
                  if(((u_45 != NULL) && (u_45 != v_45)))
                    _fail(v_45);
                  else
                    u_45 = v_45;
                }
                t = not_null(u_45);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym_Call_2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      {
        ATerm m_46 = NULL,o_46 = NULL;
        ATerm n_46 = NULL;
        t = SSLgetAnnotations(not_null(g_46));
        {
          n_46 = t;
          if(((m_46 != NULL) && (m_46 != n_46)))
            _fail(n_46);
          else
            m_46 = n_46;
        }
        {
          t = not_null(h_46);
          {
            ATerm q_46 = NULL;
            t = p_80(t);
            {
              o_46 = t;
              {
                t = not_null(i_46);
                {
                  ATerm s_46 = NULL;
                  t = q_80(t);
                  {
                    q_46 = t;
                    {
                      ATerm t_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(o_46), not_null(q_46)), not_null(m_46));
                      {
                        t_46 = t;
                        if(((s_46 != NULL) && (s_46 != t_46)))
                          _fail(t_46);
                        else
                          s_46 = t_46;
                      }
                      t = not_null(s_46);
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
  ATerm d_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_cons(d_47, sym_Fail_0))
    {
      ATerm f_47 = NULL,h_47 = NULL;
      ATerm n_15;
      n_15 = t;
      {
        ATerm g_47 = NULL;
        t = SSLgetAnnotations(not_null(d_47));
        {
          g_47 = t;
          if(((f_47 != NULL) && (f_47 != g_47)))
            _fail(g_47);
          else
            f_47 = g_47;
        }
      }
      t = n_15;
      {
        ATerm i_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(f_47));
        {
          i_47 = t;
          if(((h_47 != NULL) && (h_47 != i_47)))
            _fail(i_47);
          else
            h_47 = i_47;
        }
        t = not_null(h_47);
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
  ATerm q_47 = NULL;
  q_47 = t;
  p_47 :
  if(match_cons(q_47, sym_Id_0))
    {
      ATerm s_47 = NULL,u_47 = NULL;
      ATerm o_15;
      o_15 = t;
      {
        ATerm t_47 = NULL;
        t = SSLgetAnnotations(not_null(q_47));
        {
          t_47 = t;
          if(((s_47 != NULL) && (s_47 != t_47)))
            _fail(t_47);
          else
            s_47 = t_47;
        }
      }
      t = o_15;
      {
        ATerm v_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(s_47));
        {
          v_47 = t;
          if(((u_47 != NULL) && (u_47 != v_47)))
            _fail(v_47);
          else
            u_47 = v_47;
        }
        t = not_null(u_47);
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
  ATerm z_47 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
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
              t = Fail_0(t);
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
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    LocalPopChoice(u_15);
                  }
                else
                  {
                    t = t_15;
                    {
                      ATerm y_15 = t;
                      int z_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(z_15);
                        }
                      else
                        {
                          t = y_15;
                          {
                            ATerm d_16 = t;
                            int g_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(g_16);
                              }
                            else
                              {
                                t = d_16;
                                {
                                  ATerm h_16 = t;
                                  int i_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      LocalPopChoice(i_16);
                                    }
                                  else
                                    {
                                      t = h_16;
                                      {
                                        ATerm j_16 = t;
                                        int k_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            LocalPopChoice(k_16);
                                          }
                                        else
                                          {
                                            t = j_16;
                                            {
                                              ATerm o_16 = t;
                                              int p_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_2 (ATerm t)
                                                  {
                                                    ATerm u_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, u_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, t_2);
                                                  LocalPopChoice(p_16);
                                                }
                                              else
                                                {
                                                  t = o_16;
                                                  {
                                                    ATerm q_16 = t;
                                                    int u_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_2 (ATerm t)
                                                        {
                                                          ATerm w_2 (ATerm t)
                                                          {
                                                            ATerm x_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, x_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, w_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, v_2, _id);
                                                        LocalPopChoice(u_16);
                                                      }
                                                    else
                                                      {
                                                        t = q_16;
                                                        {
                                                          ATerm v_16 = t;
                                                          int w_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(w_16);
                                                            }
                                                          else
                                                            {
                                                              t = v_16;
                                                              {
                                                                ATerm b_17 = t;
                                                                int c_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, z_47, z_47);
                                                                    LocalPopChoice(c_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_17;
                                                                    t = LChoice_2(t, z_47, z_47);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = z_47(t);
  {
    ATerm d_17;
    d_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_f_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = d_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm z_92 (ATerm))
{
  ATerm a_48 (ATerm t)
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_92(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = _one(t, a_48);
      }
    return(t);
  }
  t = a_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm))
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  l_48 = t;
  h_48 :
  if(match_cons(l_48, sym_SDef_3))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      o_48 = ATgetArgument(l_48, 2);
      {
        ATerm t_48 = NULL,v_48 = NULL;
        ATerm u_48 = NULL;
        t = SSLgetAnnotations(not_null(l_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
        {
          t = not_null(m_48);
          {
            ATerm x_48 = NULL;
            t = f_80(t);
            {
              v_48 = t;
              {
                t = not_null(n_48);
                {
                  ATerm z_48 = NULL;
                  t = g_80(t);
                  {
                    x_48 = t;
                    {
                      t = not_null(o_48);
                      {
                        ATerm b_49 = NULL;
                        t = h_80(t);
                        {
                          z_48 = t;
                          {
                            ATerm c_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(v_48), not_null(x_48), not_null(z_48)), not_null(t_48));
                            {
                              c_49 = t;
                              if(((b_49 != NULL) && (b_49 != c_49)))
                                _fail(c_49);
                              else
                                b_49 = c_49;
                            }
                            t = not_null(b_49);
                          }
                        }
                      }
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
  ATerm p_49 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm r_49 = NULL;
    ATerm m_17 = t;
    if((PushChoice() == 0))
      {
        ATerm q_49 = NULL;
        q_49 = t;
        j_49 :
        if(!(match_string(q_49, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_17;
      }
    {
      r_49 = t;
      if(((p_49 != NULL) && (p_49 != r_49)))
        _fail(r_49);
      else
        p_49 = r_49;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm n_17;
    n_17 = t;
    {
      ATerm s_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
            s_49 = t;
            m_49 :
            if(match_cons(s_49, sym_Call_2))
              {
                t_49 = ATgetArgument(s_49, 0);
                v_49 = ATgetArgument(s_49, 1);
                n_49 :
                if(match_cons(t_49, sym_SVar_1))
                  {
                    u_49 = ATgetArgument(t_49, 0);
                    o_49 :
                    if(((ATgetType(v_49) == AT_LIST) && ATisEmpty(v_49)))
                      {
                        if(((p_49 != NULL) && (p_49 != u_49)))
                          _fail(u_49);
                        else
                          p_49 = u_49;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, b_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_17;
        }
    }
    t = n_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  r_50 :
  if(match_cons(s_50, sym_Cong_2))
    {
      t_50 = ATgetArgument(s_50, 0);
      u_50 = ATgetArgument(s_50, 1);
      {
        ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,e_51 = NULL,l_52 = NULL,u_52 = NULL,w_52 = NULL;
        ATerm t_17;
        t_17 = t;
        {
          ATerm f_51 = NULL;
          t = not_null(u_50);
          {
            ATerm t_51 = NULL;
            t = map_1(t, new_0);
            {
              f_51 = t;
              {
                if(((a_51 != NULL) && (a_51 != f_51)))
                  _fail(f_51);
                else
                  a_51 = f_51;
                {
                  t = not_null(a_51);
                  {
                    ATerm u_51 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm g_51 = NULL;
                      ATerm h_51 = NULL;
                      h_51 = t;
                      if(((g_51 != NULL) && (g_51 != h_51)))
                        _fail(h_51);
                      else
                        g_51 = h_51;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_51));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      t_51 = t;
                      {
                        if(((x_50 != NULL) && (x_50 != t_51)))
                          _fail(t_51);
                        else
                          x_50 = t_51;
                        {
                          ATerm v_51 = NULL;
                          t = new_0(t);
                          {
                            u_51 = t;
                            {
                              if(((y_50 != NULL) && (y_50 != u_51)))
                                _fail(u_51);
                              else
                                y_50 = u_51;
                              {
                                t = not_null(u_50);
                                {
                                  ATerm z_51 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    v_51 = t;
                                    {
                                      if(((b_51 != NULL) && (b_51 != v_51)))
                                        _fail(v_51);
                                      else
                                        b_51 = v_51;
                                      {
                                        t = not_null(b_51);
                                        {
                                          ATerm a_52 = NULL,k_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm x_51 = NULL;
                                            ATerm y_51 = NULL;
                                            y_51 = t;
                                            if(((x_51 != NULL) && (x_51 != y_51)))
                                              _fail(y_51);
                                            else
                                              x_51 = y_51;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_51));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            z_51 = t;
                                            {
                                              if(((z_50 != NULL) && (z_50 != z_51)))
                                                _fail(z_51);
                                              else
                                                z_50 = z_51;
                                              {
                                                ATerm b_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_51), not_null(b_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    b_52 = t;
                                                    if(((a_52 != NULL) && (a_52 != b_52)))
                                                      _fail(b_52);
                                                    else
                                                      a_52 = b_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_52), not_null(u_50));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
                                                      c_52 = t;
                                                      l_50 :
                                                      if(match_cons(c_52, sym__2))
                                                        {
                                                          d_52 = ATgetArgument(c_52, 0);
                                                          g_52 = ATgetArgument(c_52, 1);
                                                          m_50 :
                                                          if(match_cons(d_52, sym__2))
                                                            {
                                                              e_52 = ATgetArgument(d_52, 0);
                                                              f_52 = ATgetArgument(d_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_52)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, e_3);
                                                    {
                                                      k_52 = t;
                                                      if(((e_51 != NULL) && (e_51 != k_52)))
                                                        _fail(k_52);
                                                      else
                                                        e_51 = k_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_17;
        {
          ATerm v_17;
          v_17 = t;
          {
            ATerm t_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_51), not_null(b_51));
            {
              t = conc_0(t);
              {
                t_52 = t;
                if(((l_52 != NULL) && (l_52 != t_52)))
                  _fail(t_52);
                else
                  l_52 = t_52;
              }
            }
          }
          t = v_17;
          {
            ATerm w_17;
            w_17 = t;
            {
              ATerm v_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_50), not_null(x_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50))));
              {
                t = Mapp2_0(t);
                {
                  v_52 = t;
                  if(((u_52 != NULL) && (u_52 != v_52)))
                    _fail(v_52);
                  else
                    u_52 = v_52;
                }
              }
            }
            t = w_17;
            {
              ATerm z_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_50), not_null(z_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50))));
              {
                t = Bapp2_0(t);
                {
                  z_52 = t;
                  if(((w_52 != NULL) && (w_52 != z_52)))
                    _fail(z_52);
                  else
                    w_52 = z_52;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(l_52)), not_null(y_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_51)), not_null(w_52))));
            }
          }
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
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym_Build_1))
    {
      l_54 = ATgetArgument(k_54, 0);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
            ATerm r_54 = NULL;
            ATerm v_54 = NULL;
            t = new_0(t);
            {
              r_54 = t;
              {
                if(((p_54 != NULL) && (p_54 != r_54)))
                  _fail(r_54);
                else
                  p_54 = r_54;
                {
                  t = not_null(l_54);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
                      s_54 = t;
                      y_53 :
                      if(match_cons(s_54, sym_Anno_2))
                        {
                          t_54 = ATgetArgument(s_54, 0);
                          u_54 = ATgetArgument(s_54, 1);
                          {
                            if(((n_54 != NULL) && (n_54 != t_54)))
                              _fail(t_54);
                            else
                              n_54 = t_54;
                            {
                              if(((o_54 != NULL) && (o_54 != u_54)))
                                _fail(u_54);
                              else
                                o_54 = u_54;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_54));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, f_3);
                    {
                      v_54 = t;
                      if(((q_54 != NULL) && (q_54 != v_54)))
                        _fail(v_54);
                      else
                        q_54 = v_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_54)), not_null(n_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_54))));
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            {
              ATerm e_18 = t;
              int f_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
                  ATerm a_55 = NULL;
                  ATerm d_55 = NULL;
                  t = new_0(t);
                  {
                    a_55 = t;
                    {
                      if(((y_54 != NULL) && (y_54 != a_55)))
                        _fail(a_55);
                      else
                        y_54 = a_55;
                      {
                        t = not_null(l_54);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm b_55 = NULL,c_55 = NULL;
                            b_55 = t;
                            d_54 :
                            if(match_cons(b_55, sym_RootApp_1))
                              {
                                c_55 = ATgetArgument(b_55, 0);
                                {
                                  if(((x_54 != NULL) && (x_54 != c_55)))
                                    _fail(c_55);
                                  else
                                    x_54 = c_55;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_54));
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
                            d_55 = t;
                            if(((z_54 != NULL) && (z_54 != d_55)))
                              _fail(d_55);
                            else
                              z_54 = d_55;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_54))));
                  LocalPopChoice(f_18);
                }
              else
                {
                  t = e_18;
                  {
                    ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
                    ATerm j_55 = NULL;
                    ATerm n_55 = NULL;
                    t = new_0(t);
                    {
                      j_55 = t;
                      {
                        if(((h_55 != NULL) && (h_55 != j_55)))
                          _fail(j_55);
                        else
                          h_55 = j_55;
                        {
                          t = not_null(l_54);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
                              k_55 = t;
                              h_54 :
                              if(match_cons(k_55, sym_App_2))
                                {
                                  l_55 = ATgetArgument(k_55, 0);
                                  m_55 = ATgetArgument(k_55, 1);
                                  {
                                    if(((f_55 != NULL) && (f_55 != l_55)))
                                      _fail(l_55);
                                    else
                                      f_55 = l_55;
                                    {
                                      if(((g_55 != NULL) && (g_55 != m_55)))
                                        _fail(m_55);
                                      else
                                        g_55 = m_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_55));
                                    }
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
                              n_55 = t;
                              if(((i_55 != NULL) && (i_55 != n_55)))
                                _fail(n_55);
                              else
                                i_55 = n_55;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_55), not_null(g_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_55)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_55))));
                  }
                }
            }
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
  ATerm h_56 = NULL,i_56 = NULL,n_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym__2))
    {
      i_56 = ATgetArgument(h_56, 0);
      n_56 = ATgetArgument(h_56, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_56)), not_null(i_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  v_56 = t;
  s_56 :
  if(match_cons(v_56, sym__2))
    {
      w_56 = ATgetArgument(v_56, 0);
      z_56 = ATgetArgument(v_56, 1);
      t_56 :
      if(((ATgetType(w_56) == AT_LIST) && !(ATisEmpty(w_56))))
        {
          x_56 = ATgetFirst((ATermList) w_56);
          y_56 = (ATerm) ATgetNext((ATermList) w_56);
          u_56 :
          if(((ATgetType(z_56) == AT_LIST) && !(ATisEmpty(z_56))))
            {
              a_57 = ATgetFirst((ATermList) z_56);
              b_57 = (ATerm) ATgetNext((ATermList) z_56);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_56), not_null(a_57)), (ATerm) ATmakeAppl(sym__2, not_null(y_56), not_null(b_57)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  j_57 :
  if(match_cons(m_57, sym__2))
    {
      n_57 = ATgetArgument(m_57, 0);
      o_57 = ATgetArgument(m_57, 1);
      k_57 :
      if(((ATgetType(n_57) == AT_LIST) && ATisEmpty(n_57)))
        {
          l_57 :
          if(((ATgetType(o_57) == AT_LIST) && ATisEmpty(o_57)))
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
ATerm genzip_4 (ATerm t, ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm))
{
  ATerm q_57 (ATerm t)
  {
    ATerm h_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_96(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = h_18;
        {
          t = d_96(t);
          {
            t = _2(t, f_96, q_57);
            t = e_96(t);
          }
        }
      }
    return(t);
  }
  t = q_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_96 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_96);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  w_58 = t;
  p_58 :
  if(match_cons(w_58, sym_Call_2))
    {
      x_58 = ATgetArgument(w_58, 0);
      z_58 = ATgetArgument(w_58, 1);
      q_58 :
      if(match_cons(x_58, sym_SVar_1))
        {
          y_58 = ATgetArgument(x_58, 0);
          r_58 :
          if(match_string(y_58, "Anno_Cong__"))
            {
              s_58 :
              if(((ATgetType(z_58) == AT_LIST) && !(ATisEmpty(z_58))))
                {
                  a_59 = ATgetFirst((ATermList) z_58);
                  d_59 = (ATerm) ATgetNext((ATermList) z_58);
                  t_58 :
                  if(match_cons(a_59, sym_Cong_2))
                    {
                      b_59 = ATgetArgument(a_59, 0);
                      c_59 = ATgetArgument(a_59, 1);
                      u_58 :
                      if(((ATgetType(d_59) == AT_LIST) && !(ATisEmpty(d_59))))
                        {
                          e_59 = ATgetFirst((ATermList) d_59);
                          f_59 = (ATerm) ATgetNext((ATermList) d_59);
                          v_58 :
                          if(((ATgetType(f_59) == AT_LIST) && ATisEmpty(f_59)))
                            {
                              {
                                ATerm j_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,n_61 = NULL,x_61 = NULL,z_61 = NULL;
                                ATerm q_18;
                                q_18 = t;
                                {
                                  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(c_59)), not_null(e_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      x_59 = t;
                                      l_58 :
                                      if(((ATgetType(x_59) == AT_LIST) && !(ATisEmpty(x_59))))
                                        {
                                          y_59 = ATgetFirst((ATermList) x_59);
                                          z_59 = (ATerm) ATgetNext((ATermList) x_59);
                                          {
                                            ATerm c_60 = NULL;
                                            if(((j_59 != NULL) && (j_59 != y_59)))
                                              _fail(y_59);
                                            else
                                              j_59 = y_59;
                                            {
                                              if(((u_59 != NULL) && (u_59 != z_59)))
                                                _fail(z_59);
                                              else
                                                u_59 = z_59;
                                              {
                                                ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
                                                ATerm i_3 (ATerm t)
                                                {
                                                  ATerm a_60 = NULL;
                                                  ATerm b_60 = NULL;
                                                  b_60 = t;
                                                  if(((a_60 != NULL) && (a_60 != b_60)))
                                                    _fail(b_60);
                                                  else
                                                    a_60 = b_60;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_60));
                                                  return(t);
                                                }
                                                t = map_1(t, i_3);
                                                {
                                                  c_60 = t;
                                                  {
                                                    if(((r_59 != NULL) && (r_59 != c_60)))
                                                      _fail(c_60);
                                                    else
                                                      r_59 = c_60;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(c_59)), not_null(e_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          d_60 = t;
                                                          i_58 :
                                                          if(((ATgetType(d_60) == AT_LIST) && !(ATisEmpty(d_60))))
                                                            {
                                                              e_60 = ATgetFirst((ATermList) d_60);
                                                              f_60 = (ATerm) ATgetNext((ATermList) d_60);
                                                              {
                                                                ATerm i_60 = NULL;
                                                                if(((s_59 != NULL) && (s_59 != e_60)))
                                                                  _fail(e_60);
                                                                else
                                                                  s_59 = e_60;
                                                                {
                                                                  if(((v_59 != NULL) && (v_59 != f_60)))
                                                                    _fail(f_60);
                                                                  else
                                                                    v_59 = f_60;
                                                                  {
                                                                    ATerm j_60 = NULL,m_61 = NULL;
                                                                    ATerm j_3 (ATerm t)
                                                                    {
                                                                      ATerm g_60 = NULL;
                                                                      ATerm h_60 = NULL;
                                                                      h_60 = t;
                                                                      if(((g_60 != NULL) && (g_60 != h_60)))
                                                                        _fail(h_60);
                                                                      else
                                                                        g_60 = h_60;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_60));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      i_60 = t;
                                                                      {
                                                                        if(((t_59 != NULL) && (t_59 != i_60)))
                                                                          _fail(i_60);
                                                                        else
                                                                          t_59 = i_60;
                                                                        {
                                                                          ATerm k_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_59), not_null(v_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              k_60 = t;
                                                                              if(((j_60 != NULL) && (j_60 != k_60)))
                                                                                _fail(k_60);
                                                                              else
                                                                                j_60 = k_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_60), (ATerm) ATinsert(CheckATermList(not_null(c_59)), not_null(e_59)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
                                                                                l_60 = t;
                                                                                f_58 :
                                                                                if(match_cons(l_60, sym__2))
                                                                                  {
                                                                                    m_60 = ATgetArgument(l_60, 0);
                                                                                    p_60 = ATgetArgument(l_60, 1);
                                                                                    g_58 :
                                                                                    if(match_cons(m_60, sym__2))
                                                                                      {
                                                                                        n_60 = ATgetArgument(m_60, 0);
                                                                                        o_60 = ATgetArgument(m_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_60)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, k_3);
                                                                              {
                                                                                m_61 = t;
                                                                                if(((w_59 != NULL) && (w_59 != m_61)))
                                                                                  _fail(m_61);
                                                                                else
                                                                                  w_59 = m_61;
                                                                              }
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
                                t = q_18;
                                {
                                  ATerm r_18;
                                  r_18 = t;
                                  {
                                    ATerm o_61 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_59), not_null(v_59));
                                    {
                                      t = conc_0(t);
                                      {
                                        o_61 = t;
                                        if(((n_61 != NULL) && (n_61 != o_61)))
                                          _fail(o_61);
                                        else
                                          n_61 = o_61;
                                      }
                                    }
                                  }
                                  t = r_18;
                                  {
                                    ATerm s_18;
                                    s_18 = t;
                                    {
                                      ATerm y_61 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(b_59), not_null(r_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          y_61 = t;
                                          if(((x_61 != NULL) && (x_61 != y_61)))
                                            _fail(y_61);
                                          else
                                            x_61 = y_61;
                                        }
                                      }
                                    }
                                    t = s_18;
                                    {
                                      ATerm a_62 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(b_59), not_null(t_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          a_62 = t;
                                          if(((z_61 != NULL) && (z_61 != a_62)))
                                            _fail(a_62);
                                          else
                                            z_61 = a_62;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(n_61)), not_null(s_59)), not_null(j_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_59)), not_null(z_61))));
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
ATerm As_2 (ATerm t, ATerm l_82 (ATerm), ATerm m_82 (ATerm))
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  t_62 :
  if(match_cons(u_62, sym_As_2))
    {
      v_62 = ATgetArgument(u_62, 0);
      w_62 = ATgetArgument(u_62, 1);
      {
        ATerm a_63 = NULL,c_63 = NULL;
        ATerm b_63 = NULL;
        t = SSLgetAnnotations(not_null(u_62));
        {
          b_63 = t;
          if(((a_63 != NULL) && (a_63 != b_63)))
            _fail(b_63);
          else
            a_63 = b_63;
        }
        {
          t = not_null(v_62);
          {
            ATerm e_63 = NULL;
            t = l_82(t);
            {
              c_63 = t;
              {
                t = not_null(w_62);
                {
                  ATerm g_63 = NULL;
                  t = m_82(t);
                  {
                    e_63 = t;
                    {
                      ATerm h_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(c_63), not_null(e_63)), not_null(a_63));
                      {
                        h_63 = t;
                        if(((g_63 != NULL) && (g_63 != h_63)))
                          _fail(h_63);
                        else
                          g_63 = h_63;
                      }
                      t = not_null(g_63);
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
ATerm Prim_2 (ATerm t, ATerm r_78 (ATerm), ATerm s_78 (ATerm))
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  s_63 :
  if(match_cons(t_63, sym_Prim_2))
    {
      u_63 = ATgetArgument(t_63, 0);
      v_63 = ATgetArgument(t_63, 1);
      {
        ATerm z_63 = NULL,b_64 = NULL;
        ATerm a_64 = NULL;
        t = SSLgetAnnotations(not_null(t_63));
        {
          a_64 = t;
          if(((z_63 != NULL) && (z_63 != a_64)))
            _fail(a_64);
          else
            z_63 = a_64;
        }
        {
          t = not_null(u_63);
          {
            ATerm d_64 = NULL;
            t = r_78(t);
            {
              b_64 = t;
              {
                t = not_null(v_63);
                {
                  ATerm f_64 = NULL;
                  t = s_78(t);
                  {
                    d_64 = t;
                    {
                      ATerm g_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_64), not_null(d_64)), not_null(z_63));
                      {
                        g_64 = t;
                        if(((f_64 != NULL) && (f_64 != g_64)))
                          _fail(g_64);
                        else
                          f_64 = g_64;
                      }
                      t = not_null(f_64);
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
ATerm Explode_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL;
  l_65 = t;
  f_65 :
  if(match_cons(l_65, sym_Explode_2))
    {
      m_65 = ATgetArgument(l_65, 0);
      n_65 = ATgetArgument(l_65, 1);
      {
        ATerm a_66 = NULL,c_66 = NULL;
        ATerm b_66 = NULL;
        t = SSLgetAnnotations(not_null(l_65));
        {
          b_66 = t;
          if(((a_66 != NULL) && (a_66 != b_66)))
            _fail(b_66);
          else
            a_66 = b_66;
        }
        {
          t = not_null(m_65);
          {
            ATerm e_66 = NULL;
            t = h_82(t);
            {
              c_66 = t;
              {
                t = not_null(n_65);
                {
                  ATerm b_67 = NULL;
                  t = i_82(t);
                  {
                    e_66 = t;
                    {
                      ATerm c_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_66), not_null(e_66)), not_null(a_66));
                      {
                        c_67 = t;
                        if(((b_67 != NULL) && (b_67 != c_67)))
                          _fail(c_67);
                        else
                          b_67 = c_67;
                      }
                      t = not_null(b_67);
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
ATerm Op_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  n_67 :
  if(match_cons(o_67, sym_Op_2))
    {
      p_67 = ATgetArgument(o_67, 0);
      q_67 = ATgetArgument(o_67, 1);
      {
        ATerm u_67 = NULL,w_67 = NULL;
        ATerm v_67 = NULL;
        t = SSLgetAnnotations(not_null(o_67));
        {
          v_67 = t;
          if(((u_67 != NULL) && (u_67 != v_67)))
            _fail(v_67);
          else
            u_67 = v_67;
        }
        {
          t = not_null(p_67);
          {
            ATerm y_67 = NULL;
            t = v_80(t);
            {
              w_67 = t;
              {
                t = not_null(q_67);
                {
                  ATerm a_68 = NULL;
                  t = w_80(t);
                  {
                    y_67 = t;
                    {
                      ATerm b_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(w_67), not_null(y_67)), not_null(u_67));
                      {
                        b_68 = t;
                        if(((a_68 != NULL) && (a_68 != b_68)))
                          _fail(b_68);
                        else
                          a_68 = b_68;
                      }
                      t = not_null(a_68);
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
ATerm pat_td_1 (ATerm t, ATerm o_117 (ATerm))
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_117(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm v_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, o_117);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
            LocalPopChoice(x_18);
          }
        else
          {
            t = v_18;
            {
              ATerm y_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, o_117);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = y_18;
                  {
                    ATerm i_19 = t;
                    int j_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, o_117);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        LocalPopChoice(j_19);
                      }
                    else
                      {
                        t = i_19;
                        {
                          ATerm k_19 = t;
                          int o_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_3 (ATerm t)
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = pat_td_1(t, o_117);
                                  return(t);
                                }
                                t = fetch_1(t, q_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, p_3);
                              LocalPopChoice(o_19);
                            }
                          else
                            {
                              t = k_19;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, o_117);
                                  return(t);
                                }
                                t = As_2(t, _id, r_3);
                              }
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
  ATerm y_68 = NULL,z_68 = NULL;
  y_68 = t;
  x_68 :
  if(match_cons(y_68, sym_Match_1))
    {
      z_68 = ATgetArgument(y_68, 0);
      {
        ATerm u_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
            ATerm f_69 = NULL;
            ATerm j_69 = NULL;
            t = new_0(t);
            {
              f_69 = t;
              {
                if(((d_69 != NULL) && (d_69 != f_69)))
                  _fail(f_69);
                else
                  d_69 = f_69;
                {
                  t = not_null(z_68);
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
                      g_69 = t;
                      m_68 :
                      if(match_cons(g_69, sym_Anno_2))
                        {
                          h_69 = ATgetArgument(g_69, 0);
                          i_69 = ATgetArgument(g_69, 1);
                          {
                            if(((b_69 != NULL) && (b_69 != h_69)))
                              _fail(h_69);
                            else
                              b_69 = h_69;
                            {
                              if(((c_69 != NULL) && (c_69 != i_69)))
                                _fail(i_69);
                              else
                                c_69 = i_69;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_69)), not_null(b_69));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, s_3);
                    {
                      j_69 = t;
                      if(((e_69 != NULL) && (e_69 != j_69)))
                        _fail(j_69);
                      else
                        e_69 = j_69;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_69)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_69)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_69))))));
            LocalPopChoice(a_20);
          }
        else
          {
            t = u_19;
            {
              ATerm c_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
                  ATerm o_69 = NULL;
                  ATerm r_69 = NULL;
                  t = new_0(t);
                  {
                    o_69 = t;
                    {
                      if(((m_69 != NULL) && (m_69 != o_69)))
                        _fail(o_69);
                      else
                        m_69 = o_69;
                      {
                        t = not_null(z_68);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm p_69 = NULL,q_69 = NULL;
                            p_69 = t;
                            q_68 :
                            if(match_cons(p_69, sym_RootApp_1))
                              {
                                q_69 = ATgetArgument(p_69, 0);
                                {
                                  if(((l_69 != NULL) && (l_69 != q_69)))
                                    _fail(q_69);
                                  else
                                    l_69 = q_69;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_69));
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
                            r_69 = t;
                            if(((n_69 != NULL) && (n_69 != r_69)))
                              _fail(r_69);
                            else
                              n_69 = r_69;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_69))), not_null(l_69))));
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = c_20;
                  {
                    ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
                    ATerm x_69 = NULL;
                    ATerm b_70 = NULL;
                    t = new_0(t);
                    {
                      x_69 = t;
                      {
                        if(((v_69 != NULL) && (v_69 != x_69)))
                          _fail(x_69);
                        else
                          v_69 = x_69;
                        {
                          t = not_null(z_68);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
                              y_69 = t;
                              v_68 :
                              if(match_cons(y_69, sym_App_2))
                                {
                                  z_69 = ATgetArgument(y_69, 0);
                                  a_70 = ATgetArgument(y_69, 1);
                                  {
                                    if(((u_69 != NULL) && (u_69 != z_69)))
                                      _fail(z_69);
                                    else
                                      u_69 = z_69;
                                    {
                                      if(((t_69 != NULL) && (t_69 != a_70)))
                                        _fail(a_70);
                                      else
                                        t_69 = a_70;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_69));
                                    }
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
                              b_70 = t;
                              if(((w_69 != NULL) && (w_69 != b_70)))
                                _fail(b_70);
                              else
                                w_69 = b_70;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_69))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_69)), not_null(u_69)))));
                  }
                }
            }
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
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  u_70 = t;
  t_70 :
  if(match_cons(u_70, sym_Cong_2))
    {
      v_70 = ATgetArgument(u_70, 0);
      w_70 = ATgetArgument(u_70, 1);
      {
        ATerm z_70 = NULL;
        ATerm d_71 = NULL;
        t = not_null(w_70);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm a_71 = NULL,b_71 = NULL;
            b_71 = t;
            r_70 :
            if(match_cons(b_71, sym_Match_1))
              {
                a_71 = ATgetArgument(b_71, 0);
                t = not_null(a_71);
              }
            else
              {
                if(match_cons(b_71, sym_Id_0))
                  {
                    t = term_e_20;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, v_3);
          {
            d_71 = t;
            if(((z_70 != NULL) && (z_70 != d_71)))
              _fail(d_71);
            else
              z_70 = d_71;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(v_70), not_null(z_70)));
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
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  j_71 :
  if(match_cons(l_71, sym_Scope_2))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      k_71 :
      if(((ATgetType(m_71) == AT_LIST) && ATisEmpty(m_71)))
        {
          t = not_null(n_71);
        }
      else
        {
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
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  j_72 = t;
  w_71 :
  if(match_cons(j_72, sym_Where_1))
    {
      k_72 = ATgetArgument(j_72, 0);
      x_71 :
      if(match_cons(k_72, sym_Seq_2))
        {
          i_72 = ATgetArgument(k_72, 0);
          e_72 = ATgetArgument(k_72, 1);
          y_71 :
          if(match_cons(i_72, sym_Where_1))
            {
              d_72 = ATgetArgument(i_72, 0);
              z_71 :
              if(match_cons(e_72, sym_Seq_2))
                {
                  f_72 = ATgetArgument(e_72, 0);
                  h_72 = ATgetArgument(e_72, 1);
                  a_72 :
                  if(match_cons(f_72, sym_Build_1))
                    {
                      g_72 = ATgetArgument(f_72, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_72)), not_null(h_72))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(k_72, sym_Where_1))
            {
              i_72 = ATgetArgument(k_72, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(i_72));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(j_72, sym_Test_1))
        {
          k_72 = ATgetArgument(j_72, 0);
          b_72 :
          if(match_cons(k_72, sym_Test_1))
            {
              i_72 = ATgetArgument(k_72, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(i_72));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(j_72, sym_Not_1))
            {
              k_72 = ATgetArgument(j_72, 0);
              c_72 :
              if(match_cons(k_72, sym_Not_1))
                {
                  i_72 = ATgetArgument(k_72, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(i_72));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(j_72, sym_LChoice_2))
                {
                  k_72 = ATgetArgument(j_72, 0);
                  l_72 = ATgetArgument(j_72, 1);
                  {
                    if(((k_72 != NULL) && (k_72 != l_72)))
                      _fail(l_72);
                    else
                      k_72 = l_72;
                    t = not_null(k_72);
                  }
                }
              else
                {
                  if(match_cons(j_72, sym_Choice_2))
                    {
                      k_72 = ATgetArgument(j_72, 0);
                      l_72 = ATgetArgument(j_72, 1);
                      {
                        if(((k_72 != NULL) && (k_72 != l_72)))
                          _fail(l_72);
                        else
                          k_72 = l_72;
                        t = not_null(k_72);
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
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
  y_74 = t;
  u_74 :
  if(match_cons(y_74, sym_LChoice_2))
    {
      z_74 = ATgetArgument(y_74, 0);
      c_75 = ATgetArgument(y_74, 1);
      v_74 :
      if(match_cons(z_74, sym_LChoice_2))
        {
          a_75 = ATgetArgument(z_74, 0);
          b_75 = ATgetArgument(z_74, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_75), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_75), not_null(c_75)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(y_74, sym_Seq_2))
        {
          z_74 = ATgetArgument(y_74, 0);
          c_75 = ATgetArgument(y_74, 1);
          w_74 :
          if(match_cons(z_74, sym_Seq_2))
            {
              a_75 = ATgetArgument(z_74, 0);
              b_75 = ATgetArgument(z_74, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_75), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_75), not_null(c_75)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(y_74, sym_Choice_2))
            {
              z_74 = ATgetArgument(y_74, 0);
              c_75 = ATgetArgument(y_74, 1);
              x_74 :
              if(match_cons(z_74, sym_Choice_2))
                {
                  a_75 = ATgetArgument(z_74, 0);
                  b_75 = ATgetArgument(z_74, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_75), (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_75), not_null(c_75)));
                }
              else
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
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  c_76 :
  if(match_cons(j_76, sym_Lets_2))
    {
      k_76 = ATgetArgument(j_76, 0);
      l_76 = ATgetArgument(j_76, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_76), not_null(l_76));
    }
  else
    {
      if(match_cons(j_76, sym_LChoices_1))
        {
          k_76 = ATgetArgument(j_76, 0);
          d_76 :
          if(((ATgetType(k_76) == AT_LIST) && !(ATisEmpty(k_76))))
            {
              g_76 = ATgetFirst((ATermList) k_76);
              h_76 = (ATerm) ATgetNext((ATermList) k_76);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_76), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_76)));
            }
          else
            {
              if(((ATgetType(k_76) == AT_LIST) && ATisEmpty(k_76)))
                {
                  t = term_f_20;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(j_76, sym_Choices_1))
            {
              k_76 = ATgetArgument(j_76, 0);
              e_76 :
              if(((ATgetType(k_76) == AT_LIST) && !(ATisEmpty(k_76))))
                {
                  g_76 = ATgetFirst((ATermList) k_76);
                  h_76 = (ATerm) ATgetNext((ATermList) k_76);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_76), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_76)));
                }
              else
                {
                  if(((ATgetType(k_76) == AT_LIST) && ATisEmpty(k_76)))
                    {
                      t = term_f_20;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(j_76, sym_Seqs_1))
                {
                  k_76 = ATgetArgument(j_76, 0);
                  f_76 :
                  if(((ATgetType(k_76) == AT_LIST) && !(ATisEmpty(k_76))))
                    {
                      g_76 = ATgetFirst((ATermList) k_76);
                      h_76 = (ATerm) ATgetNext((ATermList) k_76);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_76), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_76)));
                    }
                  else
                    {
                      if(((ATgetType(k_76) == AT_LIST) && ATisEmpty(k_76)))
                        {
                          t = term_g_20;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(j_76, sym_DefaultVarDec_1))
                    {
                      k_76 = ATgetArgument(j_76, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_20), term_s_20));
                    }
                  else
                    {
                      if(match_cons(j_76, sym_InfixApp_3))
                        {
                          k_76 = ATgetArgument(j_76, 0);
                          l_76 = ATgetArgument(j_76, 1);
                          i_76 = ATgetArgument(j_76, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_76), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_76)), not_null(k_76))));
                        }
                      else
                        {
                          if(match_cons(j_76, sym_BAM_3))
                            {
                              k_76 = ATgetArgument(j_76, 0);
                              l_76 = ATgetArgument(j_76, 1);
                              i_76 = ATgetArgument(j_76, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(i_76))), not_null(k_76)), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_76))));
                            }
                          else
                            {
                              if(match_cons(j_76, sym_AM_2))
                                {
                                  k_76 = ATgetArgument(j_76, 0);
                                  l_76 = ATgetArgument(j_76, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_76), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_76)));
                                }
                              else
                                {
                                  if(match_cons(j_76, sym_MA_2))
                                    {
                                      k_76 = ATgetArgument(j_76, 0);
                                      l_76 = ATgetArgument(j_76, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_76)), not_null(l_76));
                                    }
                                  else
                                    {
                                      if(match_cons(j_76, sym_BA_2))
                                        {
                                          k_76 = ATgetArgument(j_76, 0);
                                          l_76 = ATgetArgument(j_76, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_76)), not_null(k_76));
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
  ATerm g_78 = NULL,h_78 = NULL;
  g_78 = t;
  e_78 :
  if(match_cons(g_78, sym_Where_1))
    {
      h_78 = ATgetArgument(g_78, 0);
      f_78 :
      if(match_cons(h_78, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
  m_78 = t;
  k_78 :
  if(match_cons(m_78, sym_LChoice_2))
    {
      n_78 = ATgetArgument(m_78, 0);
      o_78 = ATgetArgument(m_78, 1);
      l_78 :
      if(match_cons(o_78, sym_Fail_0))
        {
          t = not_null(n_78);
        }
      else
        {
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
  ATerm c_79 = NULL,d_79 = NULL,g_79 = NULL;
  c_79 = t;
  y_78 :
  if(match_cons(c_79, sym_LChoice_2))
    {
      d_79 = ATgetArgument(c_79, 0);
      g_79 = ATgetArgument(c_79, 1);
      b_79 :
      if(match_cons(d_79, sym_Fail_0))
        {
          t = not_null(g_79);
        }
      else
        {
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
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  s_79 = t;
  k_79 :
  if(match_cons(s_79, sym_Choice_2))
    {
      t_79 = ATgetArgument(s_79, 0);
      u_79 = ATgetArgument(s_79, 1);
      l_79 :
      if(match_cons(u_79, sym_Fail_0))
        {
          t = not_null(t_79);
        }
      else
        {
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
  ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL;
  i_80 = t;
  y_79 :
  if(match_cons(i_80, sym_Choice_2))
    {
      j_80 = ATgetArgument(i_80, 0);
      k_80 = ATgetArgument(i_80, 1);
      z_79 :
      if(match_cons(j_80, sym_Fail_0))
        {
          t = not_null(k_80);
        }
      else
        {
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
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
  s_80 = t;
  r_80 :
  if(match_cons(s_80, sym_Cong_2))
    {
      t_80 = ATgetArgument(s_80, 0);
      u_80 = ATgetArgument(s_80, 1);
      {
        t = not_null(u_80);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm z_80 = NULL;
            z_80 = t;
            o_80 :
            if(!(match_cons(z_80, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        t = term_f_20;
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
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL;
  g_81 = t;
  e_81 :
  if(match_cons(g_81, sym_Path_2))
    {
      h_81 = ATgetArgument(g_81, 0);
      i_81 = ATgetArgument(g_81, 1);
      f_81 :
      if(match_cons(i_81, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm o_81 = NULL,p_81 = NULL;
  o_81 = t;
  m_81 :
  if(match_cons(o_81, sym_One_1))
    {
      p_81 = ATgetArgument(o_81, 0);
      n_81 :
      if(match_cons(p_81, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm u_81 = NULL,v_81 = NULL;
  u_81 = t;
  s_81 :
  if(match_cons(u_81, sym_Some_1))
    {
      v_81 = ATgetArgument(u_81, 0);
      t_81 :
      if(match_cons(v_81, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL;
  b_82 = t;
  z_81 :
  if(match_cons(b_82, sym_Rec_2))
    {
      c_82 = ATgetArgument(b_82, 0);
      d_82 = ATgetArgument(b_82, 1);
      a_82 :
      if(match_cons(d_82, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL;
  n_82 = t;
  j_82 :
  if(match_cons(n_82, sym_Scope_2))
    {
      o_82 = ATgetArgument(n_82, 0);
      p_82 = ATgetArgument(n_82, 1);
      k_82 :
      if(match_cons(p_82, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
  v_82 = t;
  t_82 :
  if(match_cons(v_82, sym_Seq_2))
    {
      w_82 = ATgetArgument(v_82, 0);
      x_82 = ATgetArgument(v_82, 1);
      u_82 :
      if(match_cons(w_82, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm d_83 = NULL,e_83 = NULL;
  d_83 = t;
  b_83 :
  if(match_cons(d_83, sym_Not_1))
    {
      e_83 = ATgetArgument(d_83, 0);
      c_83 :
      if(match_cons(e_83, sym_Fail_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm j_83 = NULL,k_83 = NULL;
  j_83 = t;
  h_83 :
  if(match_cons(j_83, sym_Test_1))
    {
      k_83 = ATgetArgument(j_83, 0);
      i_83 :
      if(match_cons(k_83, sym_Fail_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm c_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(l_21);
                }
              else
                {
                  t = c_21;
                  {
                    ATerm m_21 = t;
                    int n_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(n_21);
                      }
                    else
                      {
                        t = m_21;
                        {
                          ATerm o_21 = t;
                          int p_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(p_21);
                            }
                          else
                            {
                              t = o_21;
                              {
                                ATerm q_21 = t;
                                int r_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
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
                                          t = F8_0(t);
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
                                                t = F9_0(t);
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
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
                                                            LocalPopChoice(z_21);
                                                          }
                                                        else
                                                          {
                                                            t = y_21;
                                                            {
                                                              ATerm d_22 = t;
                                                              int e_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(e_22);
                                                                }
                                                              else
                                                                {
                                                                  t = d_22;
                                                                  {
                                                                    ATerm i_22 = t;
                                                                    int l_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(l_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_22;
                                                                        {
                                                                          ATerm m_22 = t;
                                                                          int q_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(q_22);
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
  ATerm p_83 = NULL,q_83 = NULL;
  p_83 = t;
  n_83 :
  if(match_cons(p_83, sym_Match_1))
    {
      q_83 = ATgetArgument(p_83, 0);
      o_83 :
      if(match_cons(q_83, sym_Wld_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm v_83 = NULL,w_83 = NULL;
  v_83 = t;
  t_83 :
  if(match_cons(v_83, sym_Where_1))
    {
      w_83 = ATgetArgument(v_83, 0);
      u_83 :
      if(match_cons(w_83, sym_Id_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm b_84 = NULL,c_84 = NULL;
  b_84 = t;
  z_83 :
  if(match_cons(b_84, sym_All_1))
    {
      c_84 = ATgetArgument(b_84, 0);
      a_84 :
      if(match_cons(c_84, sym_Id_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL;
  h_84 = t;
  f_84 :
  if(match_cons(h_84, sym_Rec_2))
    {
      i_84 = ATgetArgument(h_84, 0);
      j_84 = ATgetArgument(h_84, 1);
      g_84 :
      if(match_cons(j_84, sym_Id_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL;
  p_84 = t;
  n_84 :
  if(match_cons(p_84, sym_Scope_2))
    {
      q_84 = ATgetArgument(p_84, 0);
      r_84 = ATgetArgument(p_84, 1);
      o_84 :
      if(match_cons(r_84, sym_Id_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
  x_84 = t;
  v_84 :
  if(match_cons(x_84, sym_LChoice_2))
    {
      y_84 = ATgetArgument(x_84, 0);
      z_84 = ATgetArgument(x_84, 1);
      w_84 :
      if(match_cons(y_84, sym_Id_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
  f_85 = t;
  d_85 :
  if(match_cons(f_85, sym_Seq_2))
    {
      g_85 = ATgetArgument(f_85, 0);
      h_85 = ATgetArgument(f_85, 1);
      e_85 :
      if(match_cons(h_85, sym_Id_0))
        {
          t = not_null(g_85);
        }
      else
        {
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
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
  n_85 = t;
  l_85 :
  if(match_cons(n_85, sym_Seq_2))
    {
      o_85 = ATgetArgument(n_85, 0);
      p_85 = ATgetArgument(n_85, 1);
      m_85 :
      if(match_cons(o_85, sym_Id_0))
        {
          t = not_null(p_85);
        }
      else
        {
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
  ATerm v_85 = NULL,w_85 = NULL;
  v_85 = t;
  t_85 :
  if(match_cons(v_85, sym_Not_1))
    {
      w_85 = ATgetArgument(v_85, 0);
      u_85 :
      if(match_cons(w_85, sym_Id_0))
        {
          t = term_f_20;
        }
      else
        {
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
  ATerm b_86 = NULL,c_86 = NULL;
  b_86 = t;
  z_85 :
  if(match_cons(b_86, sym_Test_1))
    {
      c_86 = ATgetArgument(b_86, 0);
      a_86 :
      if(match_cons(c_86, sym_Id_0))
        {
          t = term_g_20;
        }
      else
        {
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
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
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
                        t = I4_0(t);
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
                              t = I7_0(t);
                              LocalPopChoice(c_23);
                            }
                          else
                            {
                              t = b_23;
                              {
                                ATerm d_23 = t;
                                int j_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(j_23);
                                  }
                                else
                                  {
                                    t = d_23;
                                    {
                                      ATerm k_23 = t;
                                      int l_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(l_23);
                                        }
                                      else
                                        {
                                          t = k_23;
                                          {
                                            ATerm n_23 = t;
                                            int p_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(p_23);
                                              }
                                            else
                                              {
                                                t = n_23;
                                                {
                                                  ATerm q_23 = t;
                                                  int r_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(r_23);
                                                    }
                                                  else
                                                    {
                                                      t = q_23;
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
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
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
                  t = HL_0(t);
                  LocalPopChoice(x_23);
                }
              else
                {
                  t = w_23;
                  {
                    ATerm y_23 = t;
                    int d_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(d_24);
                      }
                    else
                      {
                        t = y_23;
                        {
                          ATerm e_24 = t;
                          int p_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(p_24);
                            }
                          else
                            {
                              t = e_24;
                              {
                                ATerm q_24 = t;
                                int r_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(r_24);
                                  }
                                else
                                  {
                                    t = q_24;
                                    {
                                      ATerm s_24 = t;
                                      int t_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(t_24);
                                        }
                                      else
                                        {
                                          t = s_24;
                                          {
                                            ATerm u_24 = t;
                                            int v_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(v_24);
                                              }
                                            else
                                              {
                                                t = u_24;
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
ATerm repeat_2 (ATerm t, ATerm s_107 (ATerm), ATerm t_107 (ATerm))
{
  ATerm e_86 (ATerm t)
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_107(t);
        t = e_86(t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = t_107(t);
      }
    return(t);
  }
  t = e_86(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_107 (ATerm))
{
  t = repeat_2(t, v_107, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm l_91 (ATerm))
{
  ATerm f_86 (ATerm t)
  {
    t = l_91(t);
    {
      t = _all(t, f_86);
      t = l_91(t);
    }
    return(t);
  }
  t = f_86(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, x_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm z_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, z_3);
    }
    return(t);
  }
  t = map_1(t, y_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm l_86 = NULL,m_86 = NULL;
  l_86 = t;
  k_86 :
  if(match_cons(l_86, sym_Strategies_1))
    {
      m_86 = ATgetArgument(l_86, 0);
      {
        ATerm p_86 = NULL,r_86 = NULL;
        ATerm q_86 = NULL;
        t = SSLgetAnnotations(not_null(l_86));
        {
          q_86 = t;
          if(((p_86 != NULL) && (p_86 != q_86)))
            _fail(q_86);
          else
            p_86 = q_86;
        }
        {
          t = not_null(m_86);
          {
            ATerm t_86 = NULL;
            t = a_81(t);
            {
              r_86 = t;
              {
                ATerm u_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_86)), not_null(p_86));
                {
                  u_86 = t;
                  if(((t_86 != NULL) && (t_86 != u_86)))
                    _fail(u_86);
                  else
                    t_86 = u_86;
                }
                t = not_null(t_86);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm e_87 = NULL,f_87 = NULL;
  e_87 = t;
  d_87 :
  if(match_cons(e_87, sym_Specification_1))
    {
      f_87 = ATgetArgument(e_87, 0);
      {
        ATerm i_87 = NULL,k_87 = NULL;
        ATerm j_87 = NULL;
        t = SSLgetAnnotations(not_null(e_87));
        {
          j_87 = t;
          if(((i_87 != NULL) && (i_87 != j_87)))
            _fail(j_87);
          else
            i_87 = j_87;
        }
        {
          t = not_null(f_87);
          {
            ATerm m_87 = NULL;
            t = c_81(t);
            {
              k_87 = t;
              {
                ATerm n_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_87)), not_null(i_87));
                {
                  n_87 = t;
                  if(((m_87 != NULL) && (m_87 != n_87)))
                    _fail(n_87);
                  else
                    m_87 = n_87;
                }
                t = not_null(m_87);
              }
            }
          }
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
ATerm _2 (ATerm t, ATerm g_77 (ATerm), ATerm h_77 (ATerm))
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym__2))
    {
      z_87 = ATgetArgument(y_87, 0);
      a_88 = ATgetArgument(y_87, 1);
      {
        ATerm e_88 = NULL,g_88 = NULL;
        ATerm f_88 = NULL;
        t = SSLgetAnnotations(not_null(y_87));
        {
          f_88 = t;
          if(((e_88 != NULL) && (e_88 != f_88)))
            _fail(f_88);
          else
            e_88 = f_88;
        }
        {
          t = not_null(z_87);
          {
            ATerm i_88 = NULL;
            t = g_77(t);
            {
              g_88 = t;
              {
                t = not_null(a_88);
                {
                  ATerm m_88 = NULL;
                  t = h_77(t);
                  {
                    i_88 = t;
                    {
                      ATerm n_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_88), not_null(i_88)), not_null(e_88));
                      {
                        n_88 = t;
                        if(((m_88 != NULL) && (m_88 != n_88)))
                          _fail(n_88);
                        else
                          m_88 = n_88;
                      }
                      t = not_null(m_88);
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
  ATerm v_88 = NULL;
  ATerm f_25;
  f_25 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm w_88 = NULL,x_88 = NULL;
      w_88 = t;
      u_88 :
      if(match_cons(w_88, sym_Program_1))
        {
          x_88 = ATgetArgument(w_88, 0);
          if(((v_88 != NULL) && (v_88 != x_88)))
            _fail(x_88);
          else
            v_88 = x_88;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_25), not_null(v_88)), term_r_25));
      {
        t = printnl_0(t);
        {
          t = term_m_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
  b_89 = t;
  a_89 :
  if(match_cons(b_89, sym__2))
    {
      c_89 = ATgetArgument(b_89, 0);
      d_89 = ATgetArgument(b_89, 1);
      {
        ATerm u_25;
        u_25 = t;
        t = SSL_printnl(not_null(c_89), not_null(d_89));
        t = u_25;
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
  ATerm i_89 = NULL;
  i_89 = t;
  t = SSL_implode_string(not_null(i_89));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = v_25;
      {
        ATerm n_89 = NULL,r_89 = NULL,s_89 = NULL;
        n_89 = t;
        m_89 :
        if(((ATgetType(n_89) == AT_LIST) && !(ATisEmpty(n_89))))
          {
            r_89 = ATgetFirst((ATermList) n_89);
            s_89 = (ATerm) ATgetNext((ATermList) n_89);
            {
              t = not_null(r_89);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(s_89);
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
  ATerm c_90 = NULL;
  ATerm e_90 = NULL;
  c_90 = t;
  {
    ATerm f_90 = NULL;
    ATerm h_90 = NULL,i_90 = NULL,r_90 = NULL;
    t = not_null(c_90);
    {
      f_90 = t;
      {
        t = SSL_explode_term(not_null(f_90));
        {
          h_90 = t;
          a_90 :
          if(match_cons(h_90, sym__2))
            {
              i_90 = ATgetArgument(h_90, 0);
              r_90 = ATgetArgument(h_90, 1);
              b_90 :
              if(match_string(i_90, ""))
                {
                  if(((e_90 != NULL) && (e_90 != r_90)))
                    _fail(r_90);
                  else
                    e_90 = r_90;
                }
              else
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
      t = not_null(e_90);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm v_90 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_90);
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        {
          t = Nil_0(t);
          t = f_98(t);
        }
      }
    return(t);
  }
  t = v_90(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL;
  y_90 = t;
  x_90 :
  if(match_cons(y_90, sym__2))
    {
      z_90 = ATgetArgument(y_90, 0);
      a_91 = ATgetArgument(y_90, 1);
      {
        t = not_null(z_90);
        {
          ATerm i_4 (ATerm t)
          {
            t = not_null(a_91);
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
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_91 = NULL;
  f_91 = t;
  t = SSL_explode_string(not_null(f_91));
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
ATerm debug_1 (ATerm t, ATerm z_117 (ATerm))
{
  ATerm j_26;
  j_26 = t;
  {
    ATerm n_91 = NULL,p_91 = NULL;
    ATerm k_26;
    k_26 = t;
    {
      ATerm o_91 = NULL;
      t = z_117(t);
      {
        o_91 = t;
        if(((n_91 != NULL) && (n_91 != o_91)))
          _fail(o_91);
        else
          n_91 = o_91;
      }
    }
    t = k_26;
    {
      ATerm q_91 = NULL;
      q_91 = t;
      if(((p_91 != NULL) && (p_91 != q_91)))
        _fail(q_91);
      else
        p_91 = q_91;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_91)), not_null(n_91)));
        t = printnl_0(t);
      }
    }
  }
  t = j_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_91 = NULL;
  u_91 = t;
  t = SSL_is_string(not_null(u_91));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm o_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_4);
            LocalPopChoice(q_26);
          }
        else
          {
            t = o_26;
            {
              ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL;
              d_92 = t;
              c_92 :
              if(match_cons(d_92, sym_Path_1))
                {
                  e_92 = ATgetArgument(d_92, 0);
                  t = not_null(e_92);
                }
              else
                {
                  if(match_cons(d_92, sym_Var_1))
                    {
                      e_92 = ATgetArgument(d_92, 0);
                      {
                        t = not_null(e_92);
                        {
                          ATerm s_26 = t;
                          int t_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_26);
                            }
                          else
                            {
                              t = s_26;
                              {
                                ATerm k_4 (ATerm t)
                                {
                                  t = term_x_26;
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
                      if(match_cons(d_92, sym_Prefix_2))
                        {
                          e_92 = ATgetArgument(d_92, 0);
                          f_92 = ATgetArgument(d_92, 1);
                          {
                            ATerm k_92 = NULL,m_92 = NULL;
                            ATerm y_26;
                            y_26 = t;
                            {
                              ATerm l_92 = NULL;
                              t = not_null(e_92);
                              {
                                t = eval_config_0(t);
                                {
                                  l_92 = t;
                                  if(((k_92 != NULL) && (k_92 != l_92)))
                                    _fail(l_92);
                                  else
                                    k_92 = l_92;
                                }
                              }
                            }
                            t = y_26;
                            {
                              ATerm n_92 = NULL;
                              t = not_null(f_92);
                              {
                                t = eval_config_0(t);
                                {
                                  n_92 = t;
                                  if(((m_92 != NULL) && (m_92 != n_92)))
                                    _fail(n_92);
                                  else
                                    m_92 = n_92;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_92), not_null(m_92));
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
  ATerm v_92 = NULL;
  v_92 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_26, not_null(v_92));
    {
      t = table_get_0(t);
      {
        ATerm l_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_27;
            a_27 = t;
            {
              ATerm x_92 = NULL;
              ATerm y_92 = NULL;
              y_92 = t;
              if(((x_92 != NULL) && (x_92 != y_92)))
                _fail(y_92);
              else
                x_92 = y_92;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_26, not_null(v_92), not_null(x_92));
                t = table_put_0(t);
              }
            }
            t = a_27;
          }
          return(t);
        }
        t = try_1(t, l_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_113 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm b_27;
    b_27 = t;
    {
      ATerm e_93 = NULL;
      ATerm f_93 = NULL;
      t = term_c_27;
      {
        t = get_config_0(t);
        {
          f_93 = t;
          if(((e_93 != NULL) && (e_93 != f_93)))
            _fail(f_93);
          else
            e_93 = f_93;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_93), term_e_27);
        t = geq_0(t);
      }
    }
    t = b_27;
    t = s_113(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL;
  j_93 = t;
  i_93 :
  if(match_cons(j_93, sym__2))
    {
      k_93 = ATgetArgument(j_93, 0);
      l_93 = ATgetArgument(j_93, 1);
      t = SSL_WriteToTextFile(not_null(k_93), not_null(l_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
  r_93 = t;
  q_93 :
  if(match_cons(r_93, sym__2))
    {
      s_93 = ATgetArgument(r_93, 0);
      t_93 = ATgetArgument(r_93, 1);
      t = SSL_WriteToBinaryFile(not_null(s_93), not_null(t_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_94 = NULL;
  ATerm f_27;
  f_27 = t;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm g_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 (ATerm t)
          {
            ATerm c_94 = NULL,d_94 = NULL;
            c_94 = t;
            y_93 :
            if(match_cons(c_94, sym_Output_1))
              {
                d_94 = ATgetArgument(c_94, 0);
                if(((b_94 != NULL) && (b_94 != d_94)))
                  _fail(d_94);
                else
                  b_94 = d_94;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_4);
          LocalPopChoice(l_27);
        }
      else
        {
          t = g_27;
          {
            ATerm e_94 = NULL;
            t = term_n_27;
            {
              e_94 = t;
              if(((b_94 != NULL) && (b_94 != e_94)))
                _fail(e_94);
              else
                b_94 = e_94;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_4, _id);
  }
  t = f_27;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm q_4 (ATerm t)
      {
        t = not_null(b_94);
        return(t);
      }
      t = split_2(t, q_4, _id);
      return(t);
    }
    t = _2(t, _id, p_4);
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 (ATerm t)
          {
            ATerm s_4 (ATerm t)
            {
              ATerm f_94 = NULL;
              f_94 = t;
              a_94 :
              if(!(match_cons(f_94, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, s_4);
            return(t);
          }
          t = _2(t, r_4, WriteToBinaryFile_0);
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_111 (ATerm))
{
  ATerm l_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL;
  ATerm t_27;
  t_27 = t;
  t = dtime_0(t);
  t = t_27;
  {
    t = v_111(t);
    {
      ATerm c_28;
      c_28 = t;
      {
        ATerm m_94 = NULL;
        t = dtime_0(t);
        {
          m_94 = t;
          if(((l_94 != NULL) && (l_94 != m_94)))
            _fail(m_94);
          else
            l_94 = m_94;
        }
      }
      t = c_28;
      {
        o_94 = t;
        k_94 :
        if(match_cons(o_94, sym__2))
          {
            p_94 = ATgetArgument(o_94, 0);
            q_94 = ATgetArgument(o_94, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_94))), not_null(q_94));
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
  ATerm w_94 = NULL;
  w_94 = t;
  t = SSL_ReadFromFile(not_null(w_94));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_95 (ATerm), ATerm d_95 (ATerm))
{
  ATerm f_95 = NULL,h_95 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    ATerm g_95 = NULL;
    t = c_95(t);
    {
      g_95 = t;
      if(((f_95 != NULL) && (f_95 != g_95)))
        _fail(g_95);
      else
        f_95 = g_95;
    }
  }
  t = d_28;
  {
    ATerm i_95 = NULL;
    t = d_95(t);
    {
      i_95 = t;
      if(((h_95 != NULL) && (h_95 != i_95)))
        _fail(i_95);
      else
        h_95 = i_95;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_95), not_null(h_95));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_95 = NULL;
  ATerm f_28;
  f_28 = t;
  {
    ATerm g_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 (ATerm t)
        {
          ATerm p_95 = NULL,q_95 = NULL;
          p_95 = t;
          m_95 :
          if(match_cons(p_95, sym_Input_1))
            {
              q_95 = ATgetArgument(p_95, 0);
              if(((o_95 != NULL) && (o_95 != q_95)))
                _fail(q_95);
              else
                o_95 = q_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_4);
        LocalPopChoice(v_28);
      }
    else
      {
        t = g_28;
        {
          ATerm r_95 = NULL;
          t = term_w_28;
          {
            r_95 = t;
            if(((o_95 != NULL) && (o_95 != r_95)))
              _fail(r_95);
            else
              o_95 = r_95;
          }
        }
      }
  }
  t = f_28;
  {
    ATerm u_4 (ATerm t)
    {
      t = not_null(o_95);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_4);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_95 = NULL;
  v_95 = t;
  t = SSL_string_to_int(not_null(v_95));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL;
  j_96 = t;
  b_96 :
  if(match_string(j_96, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(j_96) == AT_LIST) && !(ATisEmpty(j_96))))
        {
          k_96 = ATgetFirst((ATermList) j_96);
          l_96 = (ATerm) ATgetNext((ATermList) j_96);
          i_96 :
          if(((ATgetType(l_96) == AT_LIST) && !(ATisEmpty(l_96))))
            {
              m_96 = ATgetFirst((ATermList) l_96);
              n_96 = (ATerm) ATgetNext((ATermList) l_96);
              {
                ATerm r_96 = NULL;
                ATerm y_28;
                y_28 = t;
                {
                  t = not_null(k_96);
                  t = g_0(t);
                }
                t = y_28;
                {
                  ATerm s_96 = NULL;
                  t = not_null(m_96);
                  {
                    t = h_0(t);
                    {
                      s_96 = t;
                      if(((r_96 != NULL) && (r_96 != s_96)))
                        _fail(s_96);
                      else
                        r_96 = s_96;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_96)), not_null(r_96));
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
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 (ATerm t)
      {
        ATerm l_97 = NULL;
        l_97 = t;
        w_96 :
        if(!(match_string(l_97, "-i")))
          {
            if(!(match_string(l_97, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        ATerm p_97 = NULL;
        ATerm n_29;
        n_29 = t;
        {
          ATerm m_97 = NULL;
          ATerm n_97 = NULL;
          n_97 = t;
          if(((m_97 != NULL) && (m_97 != n_97)))
            _fail(n_97);
          else
            m_97 = n_97;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(m_97));
            t = set_config_0(t);
          }
        }
        t = n_29;
        {
          ATerm s_97 = NULL;
          s_97 = t;
          if(((p_97 != NULL) && (p_97 != s_97)))
            _fail(s_97);
          else
            p_97 = s_97;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_97));
        }
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = term_p_29;
        return(t);
      }
      t = ArgOption_3(t, v_4, w_4, x_4);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              ATerm t_97 = NULL;
              t_97 = t;
              z_96 :
              if(!(match_string(t_97, "-o")))
                {
                  if(!(match_string(t_97, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              ATerm w_97 = NULL;
              ATerm y_29;
              y_29 = t;
              {
                ATerm u_97 = NULL;
                ATerm v_97 = NULL;
                v_97 = t;
                if(((u_97 != NULL) && (u_97 != v_97)))
                  _fail(v_97);
                else
                  u_97 = v_97;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_29, not_null(u_97));
                  t = set_config_0(t);
                }
              }
              t = y_29;
              {
                ATerm x_97 = NULL;
                x_97 = t;
                if(((w_97 != NULL) && (w_97 != x_97)))
                  _fail(x_97);
                else
                  w_97 = x_97;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_97));
              }
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              t = term_a_30;
              return(t);
            }
            t = ArgOption_3(t, y_4, z_4, a_5);
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm y_97 = NULL;
                    y_97 = t;
                    c_97 :
                    if(!(match_string(y_97, "-S")))
                      {
                        if(!(match_string(y_97, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_5 (ATerm t)
                  {
                    t = term_e_30;
                    t = set_config_0(t);
                    t = term_f_30;
                    return(t);
                  }
                  ATerm d_5 (ATerm t)
                  {
                    t = term_l_30;
                    return(t);
                  }
                  t = Option_3(t, b_5, c_5, d_5);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  {
                    ATerm m_30 = t;
                    int n_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_5 (ATerm t)
                        {
                          ATerm b_98 = NULL;
                          b_98 = t;
                          d_97 :
                          if(!(match_string(b_98, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_5 (ATerm t)
                        {
                          ATerm e_98 = NULL;
                          ATerm p_30;
                          p_30 = t;
                          {
                            ATerm c_98 = NULL;
                            ATerm d_98 = NULL;
                            t = string_to_int_0(t);
                            {
                              d_98 = t;
                              if(((c_98 != NULL) && (c_98 != d_98)))
                                _fail(d_98);
                              else
                                c_98 = d_98;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_27, not_null(c_98));
                              t = set_config_0(t);
                            }
                          }
                          t = p_30;
                          {
                            ATerm h_98 = NULL;
                            h_98 = t;
                            if(((e_98 != NULL) && (e_98 != h_98)))
                              _fail(h_98);
                            else
                              e_98 = h_98;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_98));
                          }
                          return(t);
                        }
                        ATerm g_5 (ATerm t)
                        {
                          t = term_q_30;
                          return(t);
                        }
                        t = ArgOption_3(t, e_5, f_5, g_5);
                        LocalPopChoice(n_30);
                      }
                    else
                      {
                        t = m_30;
                        {
                          ATerm r_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_5 (ATerm t)
                              {
                                ATerm i_98 = NULL;
                                i_98 = t;
                                g_97 :
                                if(!(match_string(i_98, "-k")))
                                  {
                                    if(!(match_string(i_98, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_5 (ATerm t)
                              {
                                ATerm t_30;
                                t_30 = t;
                                {
                                  ATerm j_98 = NULL;
                                  ATerm k_98 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    k_98 = t;
                                    if(((j_98 != NULL) && (j_98 != k_98)))
                                      _fail(k_98);
                                    else
                                      j_98 = k_98;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_u_30, not_null(j_98));
                                    t = set_config_0(t);
                                  }
                                }
                                t = t_30;
                                return(t);
                              }
                              ATerm j_5 (ATerm t)
                              {
                                t = term_v_30;
                                return(t);
                              }
                              t = ArgOption_3(t, h_5, i_5, j_5);
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = r_30;
                              {
                                ATerm w_30 = t;
                                int x_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_5 (ATerm t)
                                    {
                                      ATerm l_98 = NULL;
                                      l_98 = t;
                                      i_97 :
                                      if(!(match_string(l_98, "-v")))
                                        {
                                          if(!(match_string(l_98, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm l_5 (ATerm t)
                                    {
                                      t = term_z_30;
                                      t = set_config_0(t);
                                      t = term_a_31;
                                      return(t);
                                    }
                                    ATerm m_5 (ATerm t)
                                    {
                                      t = term_b_31;
                                      return(t);
                                    }
                                    t = Option_3(t, k_5, l_5, m_5);
                                    LocalPopChoice(x_30);
                                  }
                                else
                                  {
                                    t = w_30;
                                    {
                                      ATerm c_31 = t;
                                      int d_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_5 (ATerm t)
                                          {
                                            ATerm m_98 = NULL;
                                            m_98 = t;
                                            j_97 :
                                            if(!(match_string(m_98, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm o_5 (ATerm t)
                                          {
                                            t = term_f_31;
                                            t = set_config_0(t);
                                            t = term_g_31;
                                            return(t);
                                          }
                                          ATerm p_5 (ATerm t)
                                          {
                                            t = term_h_31;
                                            return(t);
                                          }
                                          t = Option_3(t, n_5, o_5, p_5);
                                          LocalPopChoice(d_31);
                                        }
                                      else
                                        {
                                          t = c_31;
                                          {
                                            ATerm q_5 (ATerm t)
                                            {
                                              ATerm n_98 = NULL;
                                              n_98 = t;
                                              k_97 :
                                              if(!(match_string(n_98, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm r_5 (ATerm t)
                                            {
                                              t = term_j_31;
                                              t = set_config_0(t);
                                              t = term_k_31;
                                              return(t);
                                            }
                                            ATerm s_5 (ATerm t)
                                            {
                                              t = term_l_31;
                                              return(t);
                                            }
                                            t = Option_3(t, q_5, r_5, s_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATempty, term_m_31));
  {
    t = printnl_0(t);
    {
      t = term_m_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_98 = NULL;
  w_98 = t;
  t = SSL_TicksToSeconds(not_null(w_98));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL;
  b_99 = t;
  a_99 :
  if(match_cons(b_99, sym__2))
    {
      c_99 = ATgetArgument(b_99, 0);
      d_99 = ATgetArgument(b_99, 1);
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_99), not_null(d_99));
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            t = SSL_addr(not_null(c_99), not_null(d_99));
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
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_102(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm k_99 = NULL,l_99 = NULL,m_99 = NULL;
        k_99 = t;
        j_99 :
        if(((ATgetType(k_99) == AT_LIST) && !(ATisEmpty(k_99))))
          {
            l_99 = ATgetFirst((ATermList) k_99);
            m_99 = (ATerm) ATgetNext((ATermList) k_99);
            {
              ATerm p_99 = NULL;
              ATerm q_99 = NULL;
              t = not_null(m_99);
              {
                t = foldr_2(t, l_102, m_102);
                {
                  q_99 = t;
                  if(((p_99 != NULL) && (p_99 != q_99)))
                    _fail(q_99);
                  else
                    p_99 = q_99;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_99), not_null(p_99));
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
ATerm crush_2 (ATerm t, ATerm j_101 (ATerm), ATerm k_101 (ATerm))
{
  ATerm x_99 = NULL;
  ATerm z_99 = NULL;
  x_99 = t;
  {
    ATerm a_100 = NULL;
    ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL;
    t = not_null(x_99);
    {
      a_100 = t;
      {
        t = SSL_explode_term(not_null(a_100));
        {
          c_100 = t;
          w_99 :
          if(match_cons(c_100, sym__2))
            {
              d_100 = ATgetArgument(c_100, 0);
              e_100 = ATgetArgument(c_100, 1);
              if(((z_99 != NULL) && (z_99 != e_100)))
                _fail(e_100);
              else
                z_99 = e_100;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_99);
      t = foldr_2(t, j_101, k_101);
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
    ATerm t_5 (ATerm t)
    {
      t = term_d_30;
      return(t);
    }
    t = crush_2(t, t_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL;
  k_100 = t;
  j_100 :
  if(match_cons(k_100, sym__2))
    {
      l_100 = ATgetArgument(k_100, 0);
      m_100 = ATgetArgument(k_100, 1);
      {
        ATerm r_31;
        r_31 = t;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_100), not_null(m_100));
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              t = SSL_gtr(not_null(l_100), not_null(m_100));
            }
        }
        t = r_31;
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
  ATerm s_100 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL;
      t_100 = t;
      r_100 :
      if(match_cons(t_100, sym__2))
        {
          u_100 = ATgetArgument(t_100, 0);
          v_100 = ATgetArgument(t_100, 1);
          {
            if(((s_100 != NULL) && (s_100 != u_100)))
              _fail(u_100);
            else
              s_100 = u_100;
            if(((s_100 != NULL) && (s_100 != v_100)))
              _fail(v_100);
            else
              s_100 = v_100;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_113 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm w_31;
    w_31 = t;
    {
      ATerm y_100 = NULL;
      ATerm z_100 = NULL;
      t = term_c_27;
      {
        t = get_config_0(t);
        {
          z_100 = t;
          if(((y_100 != NULL) && (y_100 != z_100)))
            _fail(z_100);
          else
            y_100 = z_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_100), term_m_15);
        t = geq_0(t);
      }
    }
    t = w_31;
    t = r_113(t);
    return(t);
  }
  t = try_1(t, u_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm d_101 = NULL,f_101 = NULL;
    ATerm x_31;
    x_31 = t;
    {
      ATerm e_101 = NULL;
      t = run_time_0(t);
      {
        e_101 = t;
        if(((d_101 != NULL) && (d_101 != e_101)))
          _fail(e_101);
        else
          d_101 = e_101;
      }
    }
    t = x_31;
    {
      ATerm g_101 = NULL;
      t = term_y_31;
      {
        t = get_config_0(t);
        {
          g_101 = t;
          if(((f_101 != NULL) && (f_101 != g_101)))
            _fail(g_101);
          else
            f_101 = g_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_32), not_null(d_101)), term_z_31), not_null(f_101)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_5);
  {
    t = term_d_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_101 = NULL;
  w_101 = t;
  t_101 :
  if(match_cons(w_101, sym_Version_0))
    {
      ATerm b_102 = NULL,d_102 = NULL;
      ATerm e_32;
      e_32 = t;
      {
        ATerm c_102 = NULL;
        t = SSLgetAnnotations(not_null(w_101));
        {
          c_102 = t;
          if(((b_102 != NULL) && (b_102 != c_102)))
            _fail(c_102);
          else
            b_102 = c_102;
        }
      }
      t = e_32;
      {
        ATerm e_102 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_102));
        {
          e_102 = t;
          if(((d_102 != NULL) && (d_102 != e_102)))
            _fail(e_102);
          else
            d_102 = e_102;
        }
        t = not_null(d_102);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_111 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_5);
  t = t_111(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  t = SSL_table_create(not_null(j_102));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_102 = NULL;
  s_102 = t;
  {
    ATerm j_32;
    j_32 = t;
    {
      t = term_k_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_32, term_l_32, not_null(s_102));
          t = table_put_0(t);
        }
      }
    }
    t = j_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_102 = NULL;
  w_102 = t;
  t = SSL_table_destroy(not_null(w_102));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_103 = NULL;
  a_103 = t;
  t = SSL_exit(not_null(a_103));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL;
  e_103 = t;
  d_103 :
  if(((ATgetType(e_103) == AT_LIST) && ATisEmpty(e_103)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_103) == AT_LIST) && !(ATisEmpty(e_103))))
        {
          f_103 = ATgetFirst((ATermList) e_103);
          g_103 = (ATerm) ATgetNext((ATermList) e_103);
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
  ATerm m_32;
  m_32 = t;
  {
    ATerm j_103 = NULL;
    ATerm m_103 = NULL;
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm k_103 = NULL;
          ATerm l_103 = NULL;
          l_103 = t;
          if(((k_103 != NULL) && (k_103 != l_103)))
            _fail(l_103);
          else
            k_103 = l_103;
          t = (ATerm) ATinsert(ATempty, not_null(k_103));
        }
      }
    {
      m_103 = t;
      if(((j_103 != NULL) && (j_103 != m_103)))
        _fail(m_103);
      else
        j_103 = m_103;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_27, not_null(j_103));
      t = printnl_0(t);
    }
  }
  t = m_32;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_115 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm p_103 (ATerm t)
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = Cons_2(t, q_97, p_103);
      }
    return(t);
  }
  t = p_103(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL;
  y_103 = t;
  v_103 :
  if(((ATgetType(y_103) == AT_LIST) && !(ATisEmpty(y_103))))
    {
      w_103 = ATgetFirst((ATermList) y_103);
      x_103 = (ATerm) ATgetNext((ATermList) y_103);
      {
        ATerm i_104 = NULL;
        t = not_null(x_103);
        {
          ATerm r_32;
          r_32 = t;
          {
            ATerm j_104 = NULL,n_104 = NULL,p_104 = NULL;
            ATerm s_32;
            s_32 = t;
            {
              ATerm k_104 = NULL;
              t = f_0(t);
              {
                k_104 = t;
                if(((j_104 != NULL) && (j_104 != k_104)))
                  _fail(k_104);
                else
                  j_104 = k_104;
              }
            }
            t = s_32;
            {
              ATerm o_104 = NULL;
              t = not_null(w_103);
              {
                t = d_0(t);
                {
                  o_104 = t;
                  if(((n_104 != NULL) && (n_104 != o_104)))
                    _fail(o_104);
                  else
                    n_104 = o_104;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_104)), not_null(n_104));
                {
                  p_104 = t;
                  if(((i_104 != NULL) && (i_104 != p_104)))
                    _fail(p_104);
                  else
                    i_104 = p_104;
                }
              }
            }
          }
          t = r_32;
          {
            ATerm x_5 (ATerm t)
            {
              t = not_null(i_104);
              return(t);
            }
            t = reverse_acc_2(t, d_0, x_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_103) == AT_LIST) && ATisEmpty(y_103)))
        {
          {
            t = term_x_6;
            t = f_0(t);
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
  ATerm y_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_115 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm d_105 = NULL,e_105 = NULL;
  d_105 = t;
  c_105 :
  if(match_cons(d_105, sym_Program_1))
    {
      e_105 = ATgetArgument(d_105, 0);
      {
        ATerm h_105 = NULL,k_105 = NULL;
        ATerm i_105 = NULL;
        t = SSLgetAnnotations(not_null(d_105));
        {
          i_105 = t;
          if(((h_105 != NULL) && (h_105 != i_105)))
            _fail(i_105);
          else
            h_105 = i_105;
        }
        {
          t = not_null(e_105);
          {
            ATerm m_105 = NULL;
            t = j_88(t);
            {
              k_105 = t;
              {
                ATerm n_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_105)), not_null(h_105));
                {
                  n_105 = t;
                  if(((m_105 != NULL) && (m_105 != n_105)))
                    _fail(n_105);
                  else
                    m_105 = n_105;
                }
                t = not_null(m_105);
              }
            }
          }
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
  ATerm w_105 = NULL;
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_105 = NULL;
      t = term_y_31;
      {
        t = get_config_0(t);
        {
          x_105 = t;
          if(((w_105 != NULL) && (w_105 != x_105)))
            _fail(x_105);
          else
            w_105 = x_105;
        }
      }
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm z_5 (ATerm t)
        {
          ATerm a_6 (ATerm t)
          {
            ATerm y_105 = NULL;
            y_105 = t;
            if(((w_105 != NULL) && (w_105 != y_105)))
              _fail(y_105);
            else
              w_105 = y_105;
            return(t);
          }
          t = Program_1(t, a_6);
          return(t);
        }
        t = option_defined_1(t, z_5);
      }
    }
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        t = not_null(w_105);
        return(t);
      }
      t = short_description_1(t, c_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_6);
    {
      t = term_v_32;
      {
        t = echo_0(t);
        {
          t = term_y_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_6 (ATerm t)
                {
                  ATerm z_105 = NULL;
                  ATerm a_106 = NULL;
                  a_106 = t;
                  if(((z_105 != NULL) && (z_105 != a_106)))
                    _fail(a_106);
                  else
                    z_105 = a_106;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_105)), term_z_32);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_6);
                {
                  ATerm e_6 (ATerm t)
                  {
                    ATerm b_106 = NULL;
                    ATerm c_106 = NULL;
                    ATerm f_6 (ATerm t)
                    {
                      t = not_null(w_105);
                      return(t);
                    }
                    t = long_description_1(t, f_6);
                    {
                      c_106 = t;
                      if(((b_106 != NULL) && (b_106 != c_106)))
                        _fail(c_106);
                      else
                        b_106 = c_106;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_106)), term_a_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_6);
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
  ATerm b_33;
  b_33 = t;
  {
    ATerm m_106 = NULL;
    ATerm n_106 = NULL;
    n_106 = t;
    if(((m_106 != NULL) && (m_106 != n_106)))
      _fail(n_106);
    else
      m_106 = n_106;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATempty, not_null(m_106)));
      t = printnl_0(t);
    }
  }
  t = b_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_118 (ATerm))
{
  ATerm c_33;
  c_33 = t;
  {
    t = a_118(t);
    t = debug_0(t);
  }
  t = c_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_88 (ATerm))
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
            t = k_88(t);
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
ATerm fetch_1 (ATerm t, ATerm z_97 (ATerm))
{
  ATerm i_107 (ATerm t)
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_97, _id);
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = Cons_2(t, _id, i_107);
      }
    return(t);
  }
  t = i_107(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_114 (ATerm))
{
  t = fetch_1(t, u_114);
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
      ATerm f_33;
      f_33 = t;
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
      t = f_33;
      {
        ATerm w_107 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_107));
        {
          w_107 = t;
          if(((r_107 != NULL) && (r_107 != w_107)))
            _fail(w_107);
          else
            r_107 = w_107;
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
ATerm try_1 (ATerm t, ATerm n_94 (ATerm))
{
  ATerm g_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_94(t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = g_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL;
  c_108 = t;
  b_108 :
  if(match_cons(c_108, sym__2))
    {
      d_108 = ATgetArgument(c_108, 0);
      e_108 = ATgetArgument(c_108, 1);
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
  ATerm r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL;
  r_108 = t;
  q_108 :
  if(match_cons(r_108, sym__3))
    {
      s_108 = ATgetArgument(r_108, 0);
      t_108 = ATgetArgument(r_108, 1);
      u_108 = ATgetArgument(r_108, 2);
      {
        ATerm m_33;
        m_33 = t;
        {
          ATerm y_108 = NULL;
          ATerm z_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_108), not_null(t_108));
          {
            ATerm p_33 = t;
            int q_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_33);
              }
            else
              {
                t = p_33;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_108), not_null(t_108), (ATerm) ATinsert(CheckATermList(not_null(y_108)), not_null(u_108)));
            t = table_put_0(t);
          }
        }
        t = m_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_115 (ATerm))
{
  ATerm d_109 = NULL;
  ATerm e_109 = NULL;
  t = term_x_6;
  {
    t = z_115(t);
    {
      e_109 = t;
      if(((d_109 != NULL) && (d_109 != e_109)))
        _fail(e_109);
      else
        d_109 = e_109;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_32, term_x_32, not_null(d_109));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_string(k_109, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(k_109) == AT_LIST) && !(ATisEmpty(k_109))))
        {
          l_109 = ATgetFirst((ATermList) k_109);
          m_109 = (ATerm) ATgetNext((ATermList) k_109);
          {
            ATerm p_109 = NULL;
            ATerm r_33;
            r_33 = t;
            {
              t = not_null(l_109);
              t = a_0(t);
            }
            t = r_33;
            {
              ATerm q_109 = NULL;
              t = term_x_6;
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
  ATerm g_6 (ATerm t)
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
  ATerm h_6 (ATerm t)
  {
    t = term_t_33;
    {
      t = set_config_0(t);
      t = term_u_33;
    }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_e_34;
    return(t);
  }
  t = Option_3(t, g_6, h_6, i_6);
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
ATerm Cons_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
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
            t = p_78(t);
            {
              s_110 = t;
              {
                t = not_null(m_110);
                {
                  ATerm w_110 = NULL;
                  t = q_78(t);
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
  ATerm n_111 = NULL;
  n_111 = t;
  m_111 :
  if(((ATgetType(n_111) == AT_LIST) && ATisEmpty(n_111)))
    {
      {
        ATerm p_111 = NULL,r_111 = NULL;
        ATerm f_34;
        f_34 = t;
        {
          ATerm q_111 = NULL;
          t = SSLgetAnnotations(not_null(n_111));
          {
            q_111 = t;
            if(((p_111 != NULL) && (p_111 != q_111)))
              _fail(q_111);
            else
              p_111 = q_111;
          }
        }
        t = f_34;
        {
          ATerm s_111 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_111));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm e_112 = NULL,g_112 = NULL,h_112 = NULL;
  e_112 = t;
  d_112 :
  if(match_cons(e_112, sym__2))
    {
      g_112 = ATgetArgument(e_112, 0);
      h_112 = ATgetArgument(e_112, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_26, not_null(g_112), not_null(h_112));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_115 (ATerm))
{
  ATerm g_34;
  g_34 = t;
  {
    ATerm k_6 (ATerm t)
    {
      t = term_h_34;
      t = x_115(t);
      return(t);
    }
    t = try_1(t, k_6);
  }
  t = g_34;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm y_112 = NULL;
      ATerm i_34;
      i_34 = t;
      {
        ATerm w_112 = NULL;
        ATerm x_112 = NULL;
        x_112 = t;
        if(((w_112 != NULL) && (w_112 != x_112)))
          _fail(x_112);
        else
          w_112 = x_112;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_31, not_null(w_112));
          t = set_config_0(t);
        }
      }
      t = i_34;
      {
        ATerm z_112 = NULL;
        z_112 = t;
        if(((y_112 != NULL) && (y_112 != z_112)))
          _fail(z_112);
        else
          y_112 = z_112;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_112));
      }
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm j_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_34);
            }
          else
            {
              t = p_34;
              {
                t = x_115(t);
                t = Cons_2(t, _id, m_6);
              }
            }
          LocalPopChoice(o_34);
        }
      else
        {
          t = j_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_6, m_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL;
  ATerm r_34;
  r_34 = t;
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
  t = r_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_115 (ATerm))
{
  ATerm o_113 = NULL;
  ATerm s_34;
  s_34 = t;
  {
    t = term_t_34;
    t = table_put_0(t);
  }
  t = s_34;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm z_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_115(t);
          LocalPopChoice(a_35);
        }
      else
        {
          t = z_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_6);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_35;
            k_35 = t;
            {
              ATerm l_35 = t;
              int r_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_33;
                  t = get_config_0(t);
                  LocalPopChoice(r_35);
                }
              else
                {
                  t = l_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_35;
            {
              t = system_usage_0(t);
              {
                t = term_d_30;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm p_113 = NULL;
                  p_113 = t;
                  if(((o_113 != NULL) && (o_113 != p_113)))
                    _fail(p_113);
                  else
                    o_113 = p_113;
                  return(t);
                }
                t = Undefined_1(t, q_6);
                return(t);
              }
              t = option_defined_1(t, p_6);
              {
                ATerm r_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_113)), term_s_35);
                  return(t);
                }
                t = say_1(t, r_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_6);
      {
        ATerm t_35;
        t_35 = t;
        {
          t = term_w_32;
          t = table_destroy_0(t);
        }
        t = t_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm))
{
  t = parse_options_1(t, z_111);
  {
    t = store_options_0(t);
    {
      t = b_112(t);
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_112);
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            {
              ATerm w_35 = t;
              int b_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_112(t);
                  t = report_success_0(t);
                  LocalPopChoice(b_36);
                }
              else
                {
                  t = w_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm c_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_112(t);
        LocalPopChoice(h_36);
      }
    else
      {
        t = c_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_112);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_6, s_112, t_112, t_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm i_36;
      i_36 = t;
      {
        ATerm u_113 = NULL;
        ATerm v_113 = NULL;
        t = term_y_31;
        {
          t = get_config_0(t);
          {
            v_113 = t;
            if(((u_113 != NULL) && (u_113 != v_113)))
              _fail(v_113);
            else
              u_113 = v_113;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATinsert(ATempty, not_null(u_113)));
          t = printnl_0(t);
        }
      }
      t = i_36;
      return(t);
    }
    t = if_verbose2_1(t, v_6);
    return(t);
  }
  t = iowrap_4(t, k_112, l_112, m_112, u_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_112 (ATerm), ATerm j_112 (ATerm))
{
  t = iowrap_3(t, i_112, j_112, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_112 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    t = _2(t, _id, f_112);
    return(t);
  }
  t = iowrap_2(t, w_6, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
