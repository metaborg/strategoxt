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
ATerm term_v_36;
ATerm term_d_36;
ATerm term_m_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_z_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_z_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_z_17;
ATerm term_y_16;
ATerm term_b_15;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_n_13;
ATerm term_b_12;
ATerm term_a_12;
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
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
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
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATempty);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_p_6);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_q_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_30);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_a_31, term_p_6);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_p_6);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_o_33, term_r_33);
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
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__3, term_o_33, term_r_33, (ATerm) ATempty);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_112 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_92 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm q_91 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm));
ATerm Let_2 (ATerm, ATerm g_81 (ATerm), ATerm h_81 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_91 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm z_82 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm y_102 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_103 (ATerm), ATerm d_103 (ATerm));
ATerm diff_1 (ATerm, ATerm u_102 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_109 (ATerm), ATerm n_109 (ATerm));
ATerm for_3 (ATerm, ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm p_105 (ATerm), ATerm q_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm j_105 (ATerm), ATerm k_105 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm u_105 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm n_106 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm x_105 (ATerm));
ATerm rename_4 (ATerm, ATerm e_105 (ATerm, ATerm (ATerm)), ATerm f_105 (ATerm), ATerm g_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_105 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_112 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_96 (ATerm), ATerm b_96 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_112 (ATerm));
ATerm scope_2 (ATerm, ATerm j_112 (ATerm), ATerm k_112 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_112 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm));
ATerm crush_3 (ATerm, ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm Choice_2 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm Cong_2 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm));
ATerm Match_1 (ATerm, ATerm y_79 (ATerm));
ATerm Seq_2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm Scope_2 (ATerm, ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm Build_1 (ATerm, ATerm z_79 (ATerm));
ATerm SVar_1 (ATerm, ATerm d_81 (ATerm));
ATerm Call_2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm c_94 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm k_81 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm));
ATerm zip_1 (ATerm, ATerm j_97 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm Prim_2 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm));
ATerm Explode_2 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm));
ATerm Op_2 (ATerm, ATerm y_81 (ATerm), ATerm z_81 (ATerm));
ATerm pat_td_1 (ATerm, ATerm s_118 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm v_108 (ATerm), ATerm w_108 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_108 (ATerm));
ATerm downup_1 (ATerm, ATerm o_92 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm d_82 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_82 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_99 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_119 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_114 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_112 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_96 (ATerm), ATerm f_96 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_103 (ATerm), ATerm q_103 (ATerm));
ATerm crush_2 (ATerm, ATerm n_102 (ATerm), ATerm o_102 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_114 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_112 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_116 (ATerm));
ATerm map_1 (ATerm, ATerm s_98 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_116 (ATerm));
ATerm Program_1 (ATerm, ATerm m_89 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_119 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_89 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_115 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_95 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_117 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_117 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_116 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm p_113 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_113 (ATerm), ATerm m_113 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_113 (ATerm));
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
ATerm rewrite_1 (ATerm t, ATerm n_112 (ATerm))
{
  ATerm o_7 = NULL;
  ATerm u_7 = NULL;
  o_7 = t;
  {
    ATerm v_7 = NULL;
    t = term_p_6;
    {
      t = n_112(t);
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
              ATerm b_0 (ATerm t)
              {
                t = term_r_6;
                return(t);
              }
              t = rewrite_1(t, b_0);
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
                  ATerm f_0 (ATerm t)
                  {
                    t = term_s_6;
                    return(t);
                  }
                  t = rewrite_1(t, f_0);
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
ATerm topdown_1 (ATerm t, ATerm m_92 (ATerm))
{
  t = m_92(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1(t, m_92);
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
ATerm spaste_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        t = split_2(t, _id, q_91);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
            m_11 = t;
            h_11 :
            if(match_cons(m_11, sym__2))
              {
                n_11 = ATgetArgument(m_11, 0);
                r_11 = ATgetArgument(m_11, 1);
                i_11 :
                if(match_cons(n_11, sym_SDef_3))
                  {
                    o_11 = ATgetArgument(n_11, 0);
                    p_11 = ATgetArgument(n_11, 1);
                    q_11 = ATgetArgument(n_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_11), not_null(p_11), not_null(q_11));
                  }
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
              t = split_2(t, _id, q_91);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
                  v_11 = t;
                  k_11 :
                  if(match_cons(v_11, sym__2))
                    {
                      w_11 = ATgetArgument(v_11, 0);
                      z_11 = ATgetArgument(v_11, 1);
                      l_11 :
                      if(match_cons(w_11, sym_VarDec_2))
                        {
                          x_11 = ATgetArgument(w_11, 0);
                          y_11 = ATgetArgument(w_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_11), not_null(y_11));
                        }
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
                t = q_91(t);
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
ATerm Rec_2 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_Rec_2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm r_12 = NULL,t_12 = NULL;
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        {
          t = not_null(m_12);
          {
            ATerm v_12 = NULL;
            t = e_81(t);
            {
              t_12 = t;
              {
                t = not_null(n_12);
                {
                  ATerm x_12 = NULL;
                  t = f_81(t);
                  {
                    v_12 = t;
                    {
                      ATerm y_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(t_12), not_null(v_12)), not_null(r_12));
                      {
                        y_12 = t;
                        if(((x_12 != NULL) && (x_12 != y_12)))
                          _fail(y_12);
                        else
                          x_12 = y_12;
                      }
                      t = not_null(x_12);
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
ATerm Let_2 (ATerm t, ATerm g_81 (ATerm), ATerm h_81 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Let_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        ATerm q_13 = NULL,s_13 = NULL;
        ATerm r_13 = NULL;
        t = SSLgetAnnotations(not_null(k_13));
        {
          r_13 = t;
          if(((q_13 != NULL) && (q_13 != r_13)))
            _fail(r_13);
          else
            q_13 = r_13;
        }
        {
          t = not_null(l_13);
          {
            ATerm u_13 = NULL;
            t = g_81(t);
            {
              s_13 = t;
              {
                t = not_null(m_13);
                {
                  ATerm w_13 = NULL;
                  t = h_81(t);
                  {
                    u_13 = t;
                    {
                      ATerm x_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_13), not_null(u_13)), not_null(q_13));
                      {
                        x_13 = t;
                        if(((w_13 != NULL) && (w_13 != x_13)))
                          _fail(x_13);
                        else
                          w_13 = x_13;
                      }
                      t = not_null(w_13);
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
ATerm sboundin_3 (ATerm t, ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, r_91, r_91);
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
            t = SDef_3(t, t_91, t_91, r_91);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = Rec_2(t, t_91, r_91);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Rec_2))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_SDef_3))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      s_14 = ATgetArgument(p_14, 2);
      {
        t = not_null(r_14);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
            w_14 = t;
            n_14 :
            if(match_cons(w_14, sym_VarDec_2))
              {
                x_14 = ATgetArgument(w_14, 0);
                y_14 = ATgetArgument(w_14, 1);
                t = not_null(x_14);
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_Let_2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      {
        t = not_null(h_15);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
            l_15 = t;
            e_15 :
            if(match_cons(l_15, sym_SDef_3))
              {
                m_15 = ATgetArgument(l_15, 0);
                n_15 = ATgetArgument(l_15, 1);
                o_15 = ATgetArgument(l_15, 2);
                t = not_null(m_15);
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
ATerm tpaste_1 (ATerm t, ATerm m_91 (ATerm))
{
  t = Scope_2(t, m_91, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_DynamicRules_1))
    {
      a_16 = ATgetArgument(z_15, 0);
      {
        ATerm d_16 = NULL,f_16 = NULL;
        ATerm e_16 = NULL;
        t = SSLgetAnnotations(not_null(z_15));
        {
          e_16 = t;
          if(((d_16 != NULL) && (d_16 != e_16)))
            _fail(e_16);
          else
            d_16 = e_16;
        }
        {
          t = not_null(a_16);
          {
            ATerm h_16 = NULL;
            t = z_82(t);
            {
              f_16 = t;
              {
                ATerm i_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(f_16)), not_null(d_16));
                {
                  i_16 = t;
                  if(((h_16 != NULL) && (h_16 != i_16)))
                    _fail(i_16);
                  else
                    h_16 = i_16;
                }
                t = not_null(h_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm))
{
  ATerm n_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, p_91, n_91);
      LocalPopChoice(p_7);
    }
  else
    {
      t = n_7;
      t = DynamicRules_1(t, n_91);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym_DynamicRules_1))
    {
      q_16 = ATgetArgument(p_16, 0);
      {
        t = not_null(q_16);
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
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_Var_1))
    {
      w_16 = ATgetArgument(v_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(w_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_102 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      {
        t = not_null(c_17);
        {
          ATerm h_17 (ATerm t)
          {
            ATerm q_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_17);
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
                        t = not_null(d_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_102, f_1);
                      t = h_17(t);
                      LocalPopChoice(t_7);
                    }
                  else
                    {
                      t = s_7;
                      t = Cons_2(t, _id, h_17);
                    }
                }
              }
            return(t);
          }
          t = h_17(t);
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym__2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      if(((l_17 != NULL) && (l_17 != m_17)))
        _fail(m_17);
      else
        l_17 = m_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_103 (ATerm), ATerm d_103 (ATerm))
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
    {
      t_17 = ATgetFirst((ATermList) s_17);
      u_17 = (ATerm) ATgetNext((ATermList) s_17);
      {
        t = d_103(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm x_17 = NULL;
            x_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(x_17));
              t = c_103(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
        }
        t = not_null(u_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm u_102 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        t = not_null(e_18);
        {
          ATerm j_18 (ATerm t)
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
                        t = not_null(f_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_102, h_1);
                      t = j_18(t);
                      LocalPopChoice(z_7);
                    }
                  else
                    {
                      t = y_7;
                      t = Cons_2(t, _id, j_18);
                    }
                }
              }
            return(t);
          }
          t = j_18(t);
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
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  n_18 = t;
  l_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      m_18 :
      if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
        {
          q_18 = ATgetFirst((ATermList) p_18);
          r_18 = (ATerm) ATgetNext((ATermList) p_18);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_18)), not_null(q_18)), not_null(r_18));
        }
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
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  g_19 = t;
  e_19 :
  if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
    {
      h_19 = ATgetFirst((ATermList) g_19);
      k_19 = (ATerm) ATgetNext((ATermList) g_19);
      f_19 :
      if(match_cons(h_19, sym__2))
        {
          i_19 = ATgetArgument(h_19, 0);
          j_19 = ATgetArgument(h_19, 1);
          {
            ATerm o_19 = NULL,p_19 = NULL,v_19 = NULL,b_20 = NULL;
            ATerm a_8;
            a_8 = t;
            {
              ATerm q_19 = NULL;
              ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
              t = not_null(j_19);
              {
                q_19 = t;
                {
                  t = SSL_explode_term(not_null(q_19));
                  {
                    s_19 = t;
                    z_18 :
                    if(match_cons(s_19, sym__2))
                      {
                        t_19 = ATgetArgument(s_19, 0);
                        u_19 = ATgetArgument(s_19, 1);
                        {
                          if(((o_19 != NULL) && (o_19 != t_19)))
                            _fail(t_19);
                          else
                            o_19 = t_19;
                          if(((p_19 != NULL) && (p_19 != u_19)))
                            _fail(u_19);
                          else
                            p_19 = u_19;
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
                ATerm w_19 = NULL;
                ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
                t = not_null(i_19);
                {
                  w_19 = t;
                  {
                    t = SSL_explode_term(not_null(w_19));
                    {
                      y_19 = t;
                      c_19 :
                      if(match_cons(y_19, sym__2))
                        {
                          z_19 = ATgetArgument(y_19, 0);
                          a_20 = ATgetArgument(y_19, 1);
                          {
                            if(((o_19 != NULL) && (o_19 != z_19)))
                              _fail(z_19);
                            else
                              o_19 = z_19;
                            if(((v_19 != NULL) && (v_19 != a_20)))
                              _fail(a_20);
                            else
                              v_19 = a_20;
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
                ATerm c_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(p_19));
                {
                  t = zip_1(t, _id);
                  {
                    c_20 = t;
                    if(((b_20 != NULL) && (b_20 != c_20)))
                      _fail(c_20);
                    else
                      b_20 = c_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(k_19));
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
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  m_20 = t;
  k_20 :
  if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
    {
      n_20 = ATgetFirst((ATermList) m_20);
      q_20 = (ATerm) ATgetNext((ATermList) m_20);
      l_20 :
      if(match_cons(n_20, sym__2))
        {
          o_20 = ATgetArgument(n_20, 0);
          p_20 = ATgetArgument(n_20, 1);
          {
            ATerm s_20 = NULL;
            if(((o_20 != NULL) && (o_20 != p_20)))
              _fail(p_20);
            else
              o_20 = p_20;
            {
              if(((s_20 != NULL) && (s_20 != q_20)))
                _fail(q_20);
              else
                s_20 = q_20;
              t = not_null(s_20);
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
ATerm while_not_2 (ATerm t, ATerm m_109 (ATerm), ATerm n_109 (ATerm))
{
  ATerm u_20 (ATerm t)
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          t = n_109(t);
          t = u_20(t);
        }
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm))
{
  t = p_109(t);
  t = while_not_2(t, q_109, r_109);
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
        ATerm w_20 = NULL;
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_20));
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
ATerm free_vars_3 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_21 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107(t);
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
              ATerm a_21 = NULL;
              ATerm l_10;
              l_10 = t;
              {
                ATerm b_21 = NULL;
                t = i_107(t);
                {
                  b_21 = t;
                  if(((a_21 != NULL) && (a_21 != b_21)))
                    _fail(b_21);
                  else
                    a_21 = b_21;
                }
              }
              t = l_10;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm o_1 (ATerm t)
                  {
                    t = not_null(a_21);
                    return(t);
                  }
                  t = split_2(t, c_21, o_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm n_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = j_107(t, m_1, c_21, n_1);
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
                t = crush_3(t, r_1, s_1, c_21);
              }
            }
        }
      }
    return(t);
  }
  t = c_21(t);
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
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  g_21 :
  if(match_cons(l_21, sym_LRule_1))
    {
      m_21 = ATgetArgument(l_21, 0);
      h_21 :
      if(match_cons(m_21, sym_Rule_3))
        {
          i_21 = ATgetArgument(m_21, 0);
          j_21 = ATgetArgument(m_21, 1);
          k_21 = ATgetArgument(m_21, 2);
          {
            t = not_null(i_21);
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
      if(match_cons(l_21, sym_Scope_2))
        {
          m_21 = ATgetArgument(l_21, 0);
          n_21 = ATgetArgument(l_21, 1);
          t = not_null(m_21);
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
  ATerm e_22 = NULL,f_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_Var_1))
    {
      f_22 = ATgetArgument(e_22, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_22 = NULL,k_22 = NULL;
            ATerm j_22 = NULL;
            t = SSLgetAnnotations(not_null(e_22));
            {
              j_22 = t;
              if(((i_22 != NULL) && (i_22 != j_22)))
                _fail(j_22);
              else
                i_22 = j_22;
            }
            {
              t = not_null(f_22);
              {
                ATerm m_22 = NULL;
                t = o_0(t);
                {
                  k_22 = t;
                  {
                    ATerm n_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_22)), not_null(i_22));
                    {
                      n_22 = t;
                      if(((m_22 != NULL) && (m_22 != n_22)))
                        _fail(n_22);
                      else
                        m_22 = n_22;
                    }
                    t = not_null(m_22);
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
              ATerm q_22 = NULL,s_22 = NULL;
              ATerm r_22 = NULL;
              t = SSLgetAnnotations(not_null(e_22));
              {
                r_22 = t;
                if(((q_22 != NULL) && (q_22 != r_22)))
                  _fail(r_22);
                else
                  q_22 = r_22;
              }
              {
                t = not_null(f_22);
                {
                  ATerm u_22 = NULL;
                  t = o_0(t);
                  {
                    s_22 = t;
                    {
                      ATerm v_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_22)), not_null(q_22));
                      {
                        v_22 = t;
                        if(((u_22 != NULL) && (u_22 != v_22)))
                          _fail(v_22);
                        else
                          u_22 = v_22;
                      }
                      t = not_null(u_22);
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
ATerm DistBinding_2 (ATerm t, ATerm p_105 (ATerm), ATerm q_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym__3))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      l_23 = ATgetArgument(i_23, 2);
      {
        t = not_null(j_23);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm p_23 = NULL;
            p_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_23), not_null(l_23));
              t = p_105(t);
            }
            return(t);
          }
          ATerm v_1 (ATerm t)
          {
            ATerm r_23 = NULL;
            r_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(k_23));
              t = p_105(t);
            }
            return(t);
          }
          t = q_105(t, u_1, v_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm j_105 (ATerm), ATerm k_105 (ATerm, ATerm (ATerm)))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,q_24 = NULL;
        ATerm y_10;
        y_10 = t;
        {
          ATerm l_24 = NULL;
          t = not_null(e_24);
          {
            ATerm m_24 = NULL;
            t = j_105(t);
            {
              l_24 = t;
              {
                if(((i_24 != NULL) && (i_24 != l_24)))
                  _fail(l_24);
                else
                  i_24 = l_24;
                {
                  ATerm n_24 = NULL,p_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    m_24 = t;
                    {
                      if(((j_24 != NULL) && (j_24 != m_24)))
                        _fail(m_24);
                      else
                        j_24 = m_24;
                      {
                        ATerm o_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(j_24));
                        {
                          t = zip_1(t, _id);
                          {
                            o_24 = t;
                            if(((n_24 != NULL) && (n_24 != o_24)))
                              _fail(o_24);
                            else
                              n_24 = o_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(f_24));
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
                              p_24 = t;
                              if(((k_24 != NULL) && (k_24 != p_24)))
                                _fail(p_24);
                              else
                                k_24 = p_24;
                            }
                          }
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
          ATerm r_24 = NULL;
          t = not_null(e_24);
          {
            ATerm w_1 (ATerm t)
            {
              t = not_null(j_24);
              return(t);
            }
            t = k_105(t, w_1);
            {
              r_24 = t;
              if(((q_24 != NULL) && (q_24 != r_24)))
                _fail(r_24);
              else
                q_24 = r_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(q_24), not_null(f_24), not_null(k_24));
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
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      a_25 :
      if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
        {
          e_25 = ATgetFirst((ATermList) d_25);
          f_25 = (ATerm) ATgetNext((ATermList) d_25);
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(f_25));
        }
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
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  n_25 = t;
  k_25 :
  if(match_cons(n_25, sym__2))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      l_25 :
      if(((ATgetType(p_25) == AT_LIST) && !(ATisEmpty(p_25))))
        {
          q_25 = ATgetFirst((ATermList) p_25);
          t_25 = (ATerm) ATgetNext((ATermList) p_25);
          m_25 :
          if(match_cons(q_25, sym__2))
            {
              r_25 = ATgetArgument(q_25, 0);
              s_25 = ATgetArgument(q_25, 1);
              {
                ATerm v_25 = NULL;
                if(((o_25 != NULL) && (o_25 != r_25)))
                  _fail(r_25);
                else
                  o_25 = r_25;
                {
                  if(((v_25 != NULL) && (v_25 != s_25)))
                    _fail(s_25);
                  else
                    v_25 = s_25;
                  t = not_null(v_25);
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
ATerm RnVar_1 (ATerm t, ATerm u_105 (ATerm, ATerm (ATerm)))
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym__2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      {
        t = not_null(b_26);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm y_1 (ATerm t)
            {
              t = not_null(c_26);
              return(t);
            }
            t = split_2(t, _id, y_1);
            t = lookup_0(t);
            return(t);
          }
          t = u_105(t, x_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        t = not_null(k_26);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm o_26 = NULL;
            o_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(l_26));
              t = n_106(t);
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
ATerm env_alltd_1 (ATerm t, ATerm x_105 (ATerm))
{
  ATerm s_26 (ATerm t)
  {
    ATerm j_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_105(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = j_11;
        t = all_dist_1(t, s_26);
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm e_105 (ATerm, ATerm (ATerm)), ATerm f_105 (ATerm), ATerm g_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_105 (ATerm, ATerm (ATerm)))
{
  ATerm u_26 = NULL;
  u_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), (ATerm) ATempty);
    {
      ATerm x_26 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, e_105);
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              {
                t = RnBinding_2(t, f_105, h_105);
                t = DistBinding_2(t, x_26, g_105);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, a_2);
        return(t);
      }
      t = x_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm y_26 (ATerm t, ATerm z_26 (ATerm))
  {
    t = Scope_2(t, z_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, y_26);
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
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  ATerm u_29 (ATerm t)
  {
    ATerm h_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_q_6);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        h_28 = t;
        g_27 :
        if(match_cons(h_28, sym_Undefined_0))
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
  ATerm v_29 (ATerm t)
  {
    ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
    ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
    t = not_null(b_28);
    {
      ATerm c_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        o_28 = t;
        m_27 :
        if(match_cons(o_28, sym_Defined_2))
          {
            p_28 = ATgetArgument(o_28, 0);
            q_28 = ATgetArgument(o_28, 1);
            n_27 :
            if(match_string(p_28, "g_0"))
              {
                ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
                if(((k_28 != NULL) && (k_28 != q_28)))
                  _fail(q_28);
                else
                  k_28 = q_28;
                {
                  t = not_null(k_28);
                  {
                    t = strename_0(t);
                    {
                      r_28 = t;
                      k_27 :
                      if(match_cons(r_28, sym_SDef_3))
                        {
                          s_28 = ATgetArgument(r_28, 0);
                          t_28 = ATgetArgument(r_28, 1);
                          w_28 = ATgetArgument(r_28, 2);
                          l_27 :
                          if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
                            {
                              u_28 = ATgetFirst((ATermList) t_28);
                              v_28 = (ATerm) ATgetNext((ATermList) t_28);
                              {
                                ATerm x_28 = NULL;
                                if(((d_28 != NULL) && (d_28 != s_28)))
                                  _fail(s_28);
                                else
                                  d_28 = s_28;
                                {
                                  if(((l_28 != NULL) && (l_28 != t_28)))
                                    _fail(t_28);
                                  else
                                    l_28 = t_28;
                                  {
                                    if(((m_28 != NULL) && (m_28 != w_28)))
                                      _fail(w_28);
                                    else
                                      m_28 = w_28;
                                    {
                                      t = new_0(t);
                                      {
                                        x_28 = t;
                                        {
                                          if(((n_28 != NULL) && (n_28 != x_28)))
                                            _fail(x_28);
                                          else
                                            n_28 = x_28;
                                          {
                                            ATerm c_12;
                                            c_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_q_6), term_b_12);
                                              {
                                                ATerm d_2 (ATerm t)
                                                {
                                                  t = term_a_12;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_28), not_null(l_28), not_null(m_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_28)), (ATerm) ATempty));
    return(t);
  }
  ATerm w_29 (ATerm t)
  {
    ATerm a_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_q_6);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        a_29 = t;
        p_27 :
        if(match_cons(a_29, sym_Undefined_0))
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
  ATerm x_29 (ATerm t)
  {
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
    ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_q_6);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, f_2);
      {
        i_29 = t;
        u_27 :
        if(match_cons(i_29, sym_Defined_2))
          {
            j_29 = ATgetArgument(i_29, 0);
            k_29 = ATgetArgument(i_29, 1);
            v_27 :
            if(match_string(j_29, "d_0"))
              {
                ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
                if(((e_29 != NULL) && (e_29 != k_29)))
                  _fail(k_29);
                else
                  e_29 = k_29;
                {
                  t = not_null(e_29);
                  {
                    t = strename_0(t);
                    {
                      l_29 = t;
                      t_27 :
                      if(match_cons(l_29, sym_SDef_3))
                        {
                          m_29 = ATgetArgument(l_29, 0);
                          n_29 = ATgetArgument(l_29, 1);
                          o_29 = ATgetArgument(l_29, 2);
                          {
                            ATerm p_29 = NULL;
                            if(((d_28 != NULL) && (d_28 != m_29)))
                              _fail(m_29);
                            else
                              d_28 = m_29;
                            {
                              if(((f_29 != NULL) && (f_29 != n_29)))
                                _fail(n_29);
                              else
                                f_29 = n_29;
                              {
                                if(((g_29 != NULL) && (g_29 != o_29)))
                                  _fail(o_29);
                                else
                                  g_29 = o_29;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_29), not_null(e_28), not_null(g_29));
                                  {
                                    t = substitute_args_0(t);
                                    {
                                      p_29 = t;
                                      {
                                        if(((h_29 != NULL) && (h_29 != p_29)))
                                          _fail(p_29);
                                        else
                                          h_29 = p_29;
                                        {
                                          ATerm d_12;
                                          d_12 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_q_6), term_b_12);
                                            {
                                              ATerm g_2 (ATerm t)
                                              {
                                                t = term_a_12;
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
    t = not_null(h_29);
    return(t);
  }
  ATerm y_29 (ATerm t)
  {
    ATerm t_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_q_6);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, h_2);
      {
        t_29 = t;
        x_27 :
        if(match_cons(t_29, sym_Undefined_0))
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
  b_28 = t;
  y_27 :
  if(match_cons(b_28, sym_Call_2))
    {
      c_28 = ATgetArgument(b_28, 0);
      e_28 = ATgetArgument(b_28, 1);
      z_27 :
      if(match_cons(c_28, sym_SVar_1))
        {
          d_28 = ATgetArgument(c_28, 0);
          a_28 :
          if(((ATgetType(e_28) == AT_LIST) && ATisEmpty(e_28)))
            {
              {
                ATerm e_12 = t;
                int f_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_29(t);
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
                          t = v_29(t);
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
                                t = w_29(t);
                                LocalPopChoice(j_12);
                              }
                            else
                              {
                                t = i_12;
                                {
                                  ATerm o_12 = t;
                                  int p_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_29(t);
                                      LocalPopChoice(p_12);
                                    }
                                  else
                                    {
                                      t = o_12;
                                      t = y_29(t);
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
              int u_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_29(t);
                  LocalPopChoice(u_12);
                }
              else
                {
                  t = q_12;
                  {
                    ATerm w_12 = t;
                    int z_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_29(t);
                        LocalPopChoice(z_12);
                      }
                    else
                      {
                        t = w_12;
                        {
                          ATerm a_13 = t;
                          int b_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = x_29(t);
                              LocalPopChoice(b_13);
                            }
                          else
                            {
                              t = a_13;
                              t = y_29(t);
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
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_SDef_3))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      n_30 = ATgetArgument(k_30, 2);
      {
        ATerm c_13;
        c_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_30)), term_q_6), term_b_12);
          {
            ATerm i_2 (ATerm t)
            {
              t = term_a_12;
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
  ATerm s_30 = NULL,f_32 = NULL,g_32 = NULL;
  s_30 = t;
  r_30 :
  if(((ATgetType(s_30) == AT_LIST) && !(ATisEmpty(s_30))))
    {
      f_32 = ATgetFirst((ATermList) s_30);
      g_32 = (ATerm) ATgetNext((ATermList) s_30);
      t = not_null(g_32);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  j_33 :
  if(match_cons(k_33, sym__2))
    {
      l_33 = ATgetArgument(k_33, 0);
      m_33 = ATgetArgument(k_33, 1);
      {
        ATerm d_13;
        d_13 = t;
        {
          ATerm p_33 = NULL;
          ATerm q_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(m_33));
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
              q_33 = t;
              if(((p_33 != NULL) && (p_33 != q_33)))
                _fail(q_33);
              else
                p_33 = q_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_33), not_null(m_33), not_null(p_33));
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
ATerm end_scope_1 (ATerm t, ATerm i_112 (ATerm))
{
  ATerm x_33 = NULL,z_33 = NULL,a_34 = NULL;
  ATerm g_13;
  g_13 = t;
  {
    ATerm b_34 = NULL;
    ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
    t = i_112(t);
    {
      b_34 = t;
      {
        if(((a_34 != NULL) && (a_34 != b_34)))
          _fail(b_34);
        else
          a_34 = b_34;
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), term_n_13);
              t = table_get_0(t);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_34 = t;
            w_33 :
            if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
              {
                d_34 = ATgetFirst((ATermList) c_34);
                e_34 = (ATerm) ATgetNext((ATermList) c_34);
                {
                  if(((z_33 != NULL) && (z_33 != d_34)))
                    _fail(d_34);
                  else
                    z_33 = d_34;
                  {
                    if(((x_33 != NULL) && (x_33 != e_34)))
                      _fail(e_34);
                    else
                      x_33 = e_34;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_34), term_n_13, not_null(x_33));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_33);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm f_34 = NULL;
                              f_34 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), not_null(f_34));
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
ATerm restore_always_2 (ATerm t, ATerm a_96 (ATerm), ATerm b_96 (ATerm))
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_96(t);
      t = b_96(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        t = b_96(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_112 (ATerm))
{
  ATerm m_34 = NULL;
  ATerm t_13;
  t_13 = t;
  {
    ATerm n_34 = NULL;
    ATerm o_34 = NULL;
    t = h_112(t);
    {
      n_34 = t;
      {
        if(((m_34 != NULL) && (m_34 != n_34)))
          _fail(n_34);
        else
          m_34 = n_34;
        {
          ATerm p_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_34), term_n_13);
          {
            ATerm v_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_13);
              }
            else
              {
                t = v_13;
                t = (ATerm) ATempty;
              }
            {
              p_34 = t;
              if(((o_34 != NULL) && (o_34 != p_34)))
                _fail(p_34);
              else
                o_34 = p_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_34), term_n_13, (ATerm) ATinsert(CheckATermList(not_null(o_34)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm j_112 (ATerm), ATerm k_112 (ATerm))
{
  t = begin_scope_1(t, j_112);
  {
    ATerm k_2 (ATerm t)
    {
      t = end_scope_1(t, j_112);
      return(t);
    }
    t = restore_always_2(t, k_112, k_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_a_12;
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
ATerm assert_1 (ATerm t, ATerm l_112 (ATerm))
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  x_34 :
  if(match_cons(y_34, sym__2))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      {
        ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
        ATerm b_14;
        b_14 = t;
        {
          ATerm g_35 = NULL;
          ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
          t = l_112(t);
          {
            g_35 = t;
            {
              if(((d_35 != NULL) && (d_35 != g_35)))
                _fail(g_35);
              else
                d_35 = g_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_35), not_null(z_34), not_null(a_35));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_14 = t;
                    int d_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_35), term_n_13);
                        t = table_get_0(t);
                        LocalPopChoice(d_14);
                      }
                    else
                      {
                        t = c_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_35 = t;
                      w_34 :
                      if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
                        {
                          i_35 = ATgetFirst((ATermList) h_35);
                          j_35 = (ATerm) ATgetNext((ATermList) h_35);
                          {
                            if(((e_35 != NULL) && (e_35 != i_35)))
                              _fail(i_35);
                            else
                              e_35 = i_35;
                            {
                              if(((f_35 != NULL) && (f_35 != j_35)))
                                _fail(j_35);
                              else
                                f_35 = j_35;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_35), term_n_13, (ATerm) ATinsert(CheckATermList(not_null(f_35)), (ATerm) ATinsert(CheckATermList(not_null(e_35)), not_null(z_34))));
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
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_SDef_3))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      s_35 = ATgetArgument(p_35, 2);
      {
        ATerm i_14;
        i_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_35)), term_q_6), (ATerm) ATmakeAppl(sym_Defined_2, term_j_14, not_null(p_35)));
          {
            ATerm n_2 (ATerm t)
            {
              t = term_a_12;
              return(t);
            }
            t = assert_1(t, n_2);
          }
        }
        t = i_14;
        {
          ATerm k_14;
          k_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_l_14, not_null(p_35)));
            {
              ATerm o_2 (ATerm t)
              {
                t = term_a_12;
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
ATerm foldr_3 (ATerm t, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm))
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_103(t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
        a_36 = t;
        z_35 :
        if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
          {
            b_36 = ATgetFirst((ATermList) a_36);
            c_36 = (ATerm) ATgetNext((ATermList) a_36);
            {
              ATerm f_36 = NULL,h_36 = NULL;
              ATerm v_14;
              v_14 = t;
              {
                ATerm g_36 = NULL;
                t = not_null(b_36);
                {
                  t = t_103(t);
                  {
                    g_36 = t;
                    if(((f_36 != NULL) && (f_36 != g_36)))
                      _fail(g_36);
                    else
                      f_36 = g_36;
                  }
                }
              }
              t = v_14;
              {
                ATerm i_36 = NULL;
                t = not_null(c_36);
                {
                  t = foldr_3(t, r_103, s_103, t_103);
                  {
                    i_36 = t;
                    if(((h_36 != NULL) && (h_36 != i_36)))
                      _fail(i_36);
                    else
                      h_36 = i_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(h_36));
                  t = s_103(t);
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
ATerm crush_3 (ATerm t, ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm))
{
  ATerm q_36 = NULL;
  ATerm s_36 = NULL;
  q_36 = t;
  {
    ATerm t_36 = NULL;
    ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
    t = not_null(q_36);
    {
      t_36 = t;
      {
        t = SSL_explode_term(not_null(t_36));
        {
          z_36 = t;
          p_36 :
          if(match_cons(z_36, sym__2))
            {
              a_37 = ATgetArgument(z_36, 0);
              b_37 = ATgetArgument(z_36, 1);
              if(((s_36 != NULL) && (s_36 != b_37)))
                _fail(b_37);
              else
                s_36 = b_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_36);
      t = foldr_3(t, p_102, q_102, r_102);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm z_14 = t;
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
      t = z_14;
      {
        ATerm h_37 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            t = term_b_15;
            return(t);
          }
          t = crush_3(t, q_2, add_0, h_37);
          return(t);
        }
        t = h_37(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym_LChoice_2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        ATerm u_37 = NULL,w_37 = NULL;
        ATerm v_37 = NULL;
        t = SSLgetAnnotations(not_null(o_37));
        {
          v_37 = t;
          if(((u_37 != NULL) && (u_37 != v_37)))
            _fail(v_37);
          else
            u_37 = v_37;
        }
        {
          t = not_null(p_37);
          {
            ATerm y_37 = NULL;
            t = t_80(t);
            {
              w_37 = t;
              {
                t = not_null(q_37);
                {
                  ATerm a_38 = NULL;
                  t = u_80(t);
                  {
                    y_37 = t;
                    {
                      ATerm b_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(w_37), not_null(y_37)), not_null(u_37));
                      {
                        b_38 = t;
                        if(((a_38 != NULL) && (a_38 != b_38)))
                          _fail(b_38);
                        else
                          a_38 = b_38;
                      }
                      t = not_null(a_38);
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
ATerm Choice_2 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym_Choice_2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      {
        ATerm y_38 = NULL,a_39 = NULL;
        ATerm z_38 = NULL;
        t = SSLgetAnnotations(not_null(s_38));
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
        {
          t = not_null(t_38);
          {
            ATerm h_39 = NULL;
            t = r_80(t);
            {
              a_39 = t;
              {
                t = not_null(u_38);
                {
                  ATerm j_39 = NULL;
                  t = s_80(t);
                  {
                    h_39 = t;
                    {
                      ATerm k_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(a_39), not_null(h_39)), not_null(y_38));
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
ATerm Cong_2 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm))
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
            t = h_80(t);
            {
              e_40 = t;
              {
                t = not_null(y_39);
                {
                  ATerm i_40 = NULL;
                  t = i_80(t);
                  {
                    g_40 = t;
                    {
                      ATerm j_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(e_40), not_null(g_40)), not_null(c_40));
                      {
                        j_40 = t;
                        if(((i_40 != NULL) && (i_40 != j_40)))
                          _fail(j_40);
                        else
                          i_40 = j_40;
                      }
                      t = not_null(i_40);
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
ATerm Match_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm d_41 = NULL,e_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym_Match_1))
    {
      e_41 = ATgetArgument(d_41, 0);
      {
        ATerm h_41 = NULL,j_41 = NULL;
        ATerm i_41 = NULL;
        t = SSLgetAnnotations(not_null(d_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
        {
          t = not_null(e_41);
          {
            ATerm p_41 = NULL;
            t = y_79(t);
            {
              j_41 = t;
              {
                ATerm u_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(j_41)), not_null(h_41));
                {
                  u_41 = t;
                  if(((p_41 != NULL) && (p_41 != u_41)))
                    _fail(u_41);
                  else
                    p_41 = u_41;
                }
                t = not_null(p_41);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
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
            t = p_80(t);
            {
              n_42 = t;
              {
                t = not_null(h_42);
                {
                  ATerm r_42 = NULL;
                  t = q_80(t);
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
ATerm Scope_2 (ATerm t, ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm p_43 = NULL,s_43 = NULL,t_43 = NULL;
  p_43 = t;
  j_43 :
  if(match_cons(p_43, sym_Scope_2))
    {
      s_43 = ATgetArgument(p_43, 0);
      t_43 = ATgetArgument(p_43, 1);
      {
        ATerm x_43 = NULL,z_43 = NULL;
        ATerm y_43 = NULL;
        t = SSLgetAnnotations(not_null(p_43));
        {
          y_43 = t;
          if(((x_43 != NULL) && (x_43 != y_43)))
            _fail(y_43);
          else
            x_43 = y_43;
        }
        {
          t = not_null(s_43);
          {
            ATerm e_44 = NULL;
            t = c_80(t);
            {
              z_43 = t;
              {
                t = not_null(t_43);
                {
                  ATerm g_44 = NULL;
                  t = d_80(t);
                  {
                    e_44 = t;
                    {
                      ATerm h_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_43), not_null(e_44)), not_null(x_43));
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
ATerm Build_1 (ATerm t, ATerm z_79 (ATerm))
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
            t = z_79(t);
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
ATerm SVar_1 (ATerm t, ATerm d_81 (ATerm))
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
            t = d_81(t);
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
ATerm Call_2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
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
            t = s_81(t);
            {
              o_46 = t;
              {
                t = not_null(i_46);
                {
                  ATerm s_46 = NULL;
                  t = t_81(t);
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
      ATerm c_15;
      c_15 = t;
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
      t = c_15;
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
      ATerm d_15;
      d_15 = t;
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
      t = d_15;
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
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
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
                                  int b_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm s_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, s_2, _id);
                                      LocalPopChoice(b_16);
                                    }
                                  else
                                    {
                                      t = x_15;
                                      {
                                        ATerm c_16 = t;
                                        int g_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, t_2);
                                            LocalPopChoice(g_16);
                                          }
                                        else
                                          {
                                            t = c_16;
                                            {
                                              ATerm j_16 = t;
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
                                                  t = j_16;
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
                                                          int r_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(r_16);
                                                            }
                                                          else
                                                            {
                                                              t = n_16;
                                                              {
                                                                ATerm s_16 = t;
                                                                int t_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, z_47, z_47);
                                                                    LocalPopChoice(t_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_16;
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
    ATerm x_16;
    x_16 = t;
    {
      ATerm z_2 (ATerm t)
      {
        t = term_y_16;
        return(t);
      }
      t = split_2(t, term_size_0, z_2);
      t = leq_0(t);
    }
    t = x_16;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm a_48 (ATerm t)
  {
    ATerm z_16 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_94(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = z_16;
        t = _one(t, a_48);
      }
    return(t);
  }
  t = a_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm k_81 (ATerm))
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym_SDef_3))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      l_48 = ATgetArgument(i_48, 2);
      {
        ATerm q_48 = NULL,s_48 = NULL;
        ATerm r_48 = NULL;
        t = SSLgetAnnotations(not_null(i_48));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
        {
          t = not_null(j_48);
          {
            ATerm u_48 = NULL;
            t = i_81(t);
            {
              s_48 = t;
              {
                t = not_null(k_48);
                {
                  ATerm w_48 = NULL;
                  t = j_81(t);
                  {
                    u_48 = t;
                    {
                      t = not_null(l_48);
                      {
                        ATerm y_48 = NULL;
                        t = k_81(t);
                        {
                          w_48 = t;
                          {
                            ATerm z_48 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_48), not_null(u_48), not_null(w_48)), not_null(q_48));
                            {
                              z_48 = t;
                              if(((y_48 != NULL) && (y_48 != z_48)))
                                _fail(z_48);
                              else
                                y_48 = z_48;
                            }
                            t = not_null(y_48);
                          }
                        }
                      }
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
  ATerm a_3 (ATerm t)
  {
    ATerm r_49 = NULL;
    ATerm f_17 = t;
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
        t = f_17;
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
  ATerm b_3 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    {
      ATerm i_17 = t;
      if((PushChoice() == 0))
        {
          ATerm c_3 (ATerm t)
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
          t = oncetd_1(t, c_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_17;
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
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  o_50 :
  if(match_cons(p_50, sym_Cong_2))
    {
      q_50 = ATgetArgument(p_50, 0);
      r_50 = ATgetArgument(p_50, 1);
      {
        ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,b_51 = NULL,c_51 = NULL,x_51 = NULL,b_52 = NULL,d_52 = NULL;
        ATerm n_17;
        n_17 = t;
        {
          ATerm d_51 = NULL;
          t = not_null(r_50);
          {
            ATerm g_51 = NULL;
            t = map_1(t, new_0);
            {
              d_51 = t;
              {
                if(((y_50 != NULL) && (y_50 != d_51)))
                  _fail(d_51);
                else
                  y_50 = d_51;
                {
                  t = not_null(y_50);
                  {
                    ATerm h_51 = NULL;
                    ATerm d_3 (ATerm t)
                    {
                      ATerm e_51 = NULL;
                      ATerm f_51 = NULL;
                      f_51 = t;
                      if(((e_51 != NULL) && (e_51 != f_51)))
                        _fail(f_51);
                      else
                        e_51 = f_51;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_51));
                      return(t);
                    }
                    t = map_1(t, d_3);
                    {
                      g_51 = t;
                      {
                        if(((v_50 != NULL) && (v_50 != g_51)))
                          _fail(g_51);
                        else
                          v_50 = g_51;
                        {
                          ATerm i_51 = NULL;
                          t = new_0(t);
                          {
                            h_51 = t;
                            {
                              if(((w_50 != NULL) && (w_50 != h_51)))
                                _fail(h_51);
                              else
                                w_50 = h_51;
                              {
                                t = not_null(r_50);
                                {
                                  ATerm l_51 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    i_51 = t;
                                    {
                                      if(((b_51 != NULL) && (b_51 != i_51)))
                                        _fail(i_51);
                                      else
                                        b_51 = i_51;
                                      {
                                        t = not_null(b_51);
                                        {
                                          ATerm m_51 = NULL,w_51 = NULL;
                                          ATerm e_3 (ATerm t)
                                          {
                                            ATerm j_51 = NULL;
                                            ATerm k_51 = NULL;
                                            k_51 = t;
                                            if(((j_51 != NULL) && (j_51 != k_51)))
                                              _fail(k_51);
                                            else
                                              j_51 = k_51;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_51));
                                            return(t);
                                          }
                                          t = map_1(t, e_3);
                                          {
                                            l_51 = t;
                                            {
                                              if(((x_50 != NULL) && (x_50 != l_51)))
                                                _fail(l_51);
                                              else
                                                x_50 = l_51;
                                              {
                                                ATerm n_51 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_50), not_null(b_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    n_51 = t;
                                                    if(((m_51 != NULL) && (m_51 != n_51)))
                                                      _fail(n_51);
                                                    else
                                                      m_51 = n_51;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_51), not_null(r_50));
                                                  {
                                                    ATerm f_3 (ATerm t)
                                                    {
                                                      ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
                                                      o_51 = t;
                                                      i_50 :
                                                      if(match_cons(o_51, sym__2))
                                                        {
                                                          p_51 = ATgetArgument(o_51, 0);
                                                          s_51 = ATgetArgument(o_51, 1);
                                                          j_50 :
                                                          if(match_cons(p_51, sym__2))
                                                            {
                                                              q_51 = ATgetArgument(p_51, 0);
                                                              r_51 = ATgetArgument(p_51, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_51))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_51), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_51)))));
                                                            }
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
                                                      w_51 = t;
                                                      if(((c_51 != NULL) && (c_51 != w_51)))
                                                        _fail(w_51);
                                                      else
                                                        c_51 = w_51;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = n_17;
        {
          ATerm o_17;
          o_17 = t;
          {
            ATerm y_51 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_50), not_null(b_51));
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
                y_51 = t;
                if(((x_51 != NULL) && (x_51 != y_51)))
                  _fail(y_51);
                else
                  x_51 = y_51;
              }
            }
          }
          t = o_17;
          {
            ATerm v_17;
            v_17 = t;
            {
              ATerm c_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(q_50), not_null(v_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_50))));
              {
                t = Mapp2_0(t);
                {
                  c_52 = t;
                  if(((b_52 != NULL) && (b_52 != c_52)))
                    _fail(c_52);
                  else
                    b_52 = c_52;
                }
              }
            }
            t = v_17;
            {
              ATerm e_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(q_50), not_null(x_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_50))));
              {
                t = Bapp2_0(t);
                {
                  e_52 = t;
                  if(((d_52 != NULL) && (d_52 != e_52)))
                    _fail(e_52);
                  else
                    d_52 = e_52;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(x_51)), not_null(w_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_51)), not_null(d_52))));
            }
          }
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
  ATerm j_54 = NULL,k_54 = NULL;
  j_54 = t;
  i_54 :
  if(match_cons(j_54, sym_Build_1))
    {
      k_54 = ATgetArgument(j_54, 0);
      {
        ATerm w_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
            ATerm q_54 = NULL;
            ATerm u_54 = NULL;
            t = new_0(t);
            {
              q_54 = t;
              {
                if(((o_54 != NULL) && (o_54 != q_54)))
                  _fail(q_54);
                else
                  o_54 = q_54;
                {
                  t = not_null(k_54);
                  {
                    ATerm g_3 (ATerm t)
                    {
                      ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
                      r_54 = t;
                      r_53 :
                      if(match_cons(r_54, sym_Anno_2))
                        {
                          s_54 = ATgetArgument(r_54, 0);
                          t_54 = ATgetArgument(r_54, 1);
                          {
                            if(((m_54 != NULL) && (m_54 != s_54)))
                              _fail(s_54);
                            else
                              m_54 = s_54;
                            {
                              if(((n_54 != NULL) && (n_54 != t_54)))
                                _fail(t_54);
                              else
                                n_54 = t_54;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_54));
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
                      u_54 = t;
                      if(((p_54 != NULL) && (p_54 != u_54)))
                        _fail(u_54);
                      else
                        p_54 = u_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_54)), not_null(m_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_54))));
            LocalPopChoice(y_17);
          }
        else
          {
            t = w_17;
            {
              ATerm a_18 = t;
              int b_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_54 = NULL,x_54 = NULL,z_54 = NULL;
                  ATerm a_55 = NULL;
                  ATerm d_55 = NULL;
                  t = new_0(t);
                  {
                    a_55 = t;
                    {
                      if(((x_54 != NULL) && (x_54 != a_55)))
                        _fail(a_55);
                      else
                        x_54 = a_55;
                      {
                        t = not_null(k_54);
                        {
                          ATerm h_3 (ATerm t)
                          {
                            ATerm b_55 = NULL,c_55 = NULL;
                            b_55 = t;
                            x_53 :
                            if(match_cons(b_55, sym_RootApp_1))
                              {
                                c_55 = ATgetArgument(b_55, 0);
                                {
                                  if(((w_54 != NULL) && (w_54 != c_55)))
                                    _fail(c_55);
                                  else
                                    w_54 = c_55;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_54));
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
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_54))));
                  LocalPopChoice(b_18);
                }
              else
                {
                  t = a_18;
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
                          t = not_null(k_54);
                          {
                            ATerm i_3 (ATerm t)
                            {
                              ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
                              k_55 = t;
                              b_54 :
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
                            t = pat_td_1(t, i_3);
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
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  c_56 = t;
  b_56 :
  if(match_cons(c_56, sym__2))
    {
      d_56 = ATgetArgument(c_56, 0);
      e_56 = ATgetArgument(c_56, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_56)), not_null(d_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  m_56 = t;
  j_56 :
  if(match_cons(m_56, sym__2))
    {
      n_56 = ATgetArgument(m_56, 0);
      q_56 = ATgetArgument(m_56, 1);
      k_56 :
      if(((ATgetType(n_56) == AT_LIST) && !(ATisEmpty(n_56))))
        {
          o_56 = ATgetFirst((ATermList) n_56);
          p_56 = (ATerm) ATgetNext((ATermList) n_56);
          l_56 :
          if(((ATgetType(q_56) == AT_LIST) && !(ATisEmpty(q_56))))
            {
              r_56 = ATgetFirst((ATermList) q_56);
              s_56 = (ATerm) ATgetNext((ATermList) q_56);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_56), not_null(r_56)), (ATerm) ATmakeAppl(sym__2, not_null(p_56), not_null(s_56)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  e_57 :
  if(match_cons(l_57, sym__2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      f_57 :
      if(((ATgetType(m_57) == AT_LIST) && ATisEmpty(m_57)))
        {
          k_57 :
          if(((ATgetType(n_57) == AT_LIST) && ATisEmpty(n_57)))
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
ATerm genzip_4 (ATerm t, ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm))
{
  ATerm p_57 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_97(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          t = f_97(t);
          {
            t = _2(t, h_97, p_57);
            t = g_97(t);
          }
        }
      }
    return(t);
  }
  t = p_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_97);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  p_58 = t;
  i_58 :
  if(match_cons(p_58, sym_Call_2))
    {
      q_58 = ATgetArgument(p_58, 0);
      s_58 = ATgetArgument(p_58, 1);
      j_58 :
      if(match_cons(q_58, sym_SVar_1))
        {
          r_58 = ATgetArgument(q_58, 0);
          k_58 :
          if(match_string(r_58, "Anno_Cong__"))
            {
              l_58 :
              if(((ATgetType(s_58) == AT_LIST) && !(ATisEmpty(s_58))))
                {
                  t_58 = ATgetFirst((ATermList) s_58);
                  w_58 = (ATerm) ATgetNext((ATermList) s_58);
                  m_58 :
                  if(match_cons(t_58, sym_Cong_2))
                    {
                      u_58 = ATgetArgument(t_58, 0);
                      v_58 = ATgetArgument(t_58, 1);
                      n_58 :
                      if(((ATgetType(w_58) == AT_LIST) && !(ATisEmpty(w_58))))
                        {
                          x_58 = ATgetFirst((ATermList) w_58);
                          y_58 = (ATerm) ATgetNext((ATermList) w_58);
                          o_58 :
                          if(((ATgetType(y_58) == AT_LIST) && ATisEmpty(y_58)))
                            {
                              {
                                ATerm c_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,o_59 = NULL,p_59 = NULL,u_60 = NULL,w_60 = NULL,y_60 = NULL;
                                ATerm i_18;
                                i_18 = t;
                                {
                                  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(v_58)), not_null(x_58));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      q_59 = t;
                                      e_58 :
                                      if(((ATgetType(q_59) == AT_LIST) && !(ATisEmpty(q_59))))
                                        {
                                          r_59 = ATgetFirst((ATermList) q_59);
                                          s_59 = (ATerm) ATgetNext((ATermList) q_59);
                                          {
                                            ATerm v_59 = NULL;
                                            if(((c_59 != NULL) && (c_59 != r_59)))
                                              _fail(r_59);
                                            else
                                              c_59 = r_59;
                                            {
                                              if(((l_59 != NULL) && (l_59 != s_59)))
                                                _fail(s_59);
                                              else
                                                l_59 = s_59;
                                              {
                                                ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
                                                ATerm j_3 (ATerm t)
                                                {
                                                  ATerm t_59 = NULL;
                                                  ATerm u_59 = NULL;
                                                  u_59 = t;
                                                  if(((t_59 != NULL) && (t_59 != u_59)))
                                                    _fail(u_59);
                                                  else
                                                    t_59 = u_59;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_59));
                                                  return(t);
                                                }
                                                t = map_1(t, j_3);
                                                {
                                                  v_59 = t;
                                                  {
                                                    if(((i_59 != NULL) && (i_59 != v_59)))
                                                      _fail(v_59);
                                                    else
                                                      i_59 = v_59;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(v_58)), not_null(x_58));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          w_59 = t;
                                                          c_58 :
                                                          if(((ATgetType(w_59) == AT_LIST) && !(ATisEmpty(w_59))))
                                                            {
                                                              x_59 = ATgetFirst((ATermList) w_59);
                                                              y_59 = (ATerm) ATgetNext((ATermList) w_59);
                                                              {
                                                                ATerm b_60 = NULL;
                                                                if(((j_59 != NULL) && (j_59 != x_59)))
                                                                  _fail(x_59);
                                                                else
                                                                  j_59 = x_59;
                                                                {
                                                                  if(((o_59 != NULL) && (o_59 != y_59)))
                                                                    _fail(y_59);
                                                                  else
                                                                    o_59 = y_59;
                                                                  {
                                                                    ATerm c_60 = NULL,m_60 = NULL;
                                                                    ATerm k_3 (ATerm t)
                                                                    {
                                                                      ATerm z_59 = NULL;
                                                                      ATerm a_60 = NULL;
                                                                      a_60 = t;
                                                                      if(((z_59 != NULL) && (z_59 != a_60)))
                                                                        _fail(a_60);
                                                                      else
                                                                        z_59 = a_60;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_59));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, k_3);
                                                                    {
                                                                      b_60 = t;
                                                                      {
                                                                        if(((k_59 != NULL) && (k_59 != b_60)))
                                                                          _fail(b_60);
                                                                        else
                                                                          k_59 = b_60;
                                                                        {
                                                                          ATerm d_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_59), not_null(o_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              d_60 = t;
                                                                              if(((c_60 != NULL) && (c_60 != d_60)))
                                                                                _fail(d_60);
                                                                              else
                                                                                c_60 = d_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_60), (ATerm) ATinsert(CheckATermList(not_null(v_58)), not_null(x_58)));
                                                                            {
                                                                              ATerm l_3 (ATerm t)
                                                                              {
                                                                                ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
                                                                                e_60 = t;
                                                                                z_57 :
                                                                                if(match_cons(e_60, sym__2))
                                                                                  {
                                                                                    f_60 = ATgetArgument(e_60, 0);
                                                                                    i_60 = ATgetArgument(e_60, 1);
                                                                                    a_58 :
                                                                                    if(match_cons(f_60, sym__2))
                                                                                      {
                                                                                        g_60 = ATgetArgument(f_60, 0);
                                                                                        h_60 = ATgetArgument(f_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_60)))));
                                                                                      }
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
                                                                                m_60 = t;
                                                                                if(((p_59 != NULL) && (p_59 != m_60)))
                                                                                  _fail(m_60);
                                                                                else
                                                                                  p_59 = m_60;
                                                                              }
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
                                  ATerm k_18;
                                  k_18 = t;
                                  {
                                    ATerm v_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_59), not_null(o_59));
                                    {
                                      ATerm s_18 = t;
                                      int t_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(t_18);
                                        }
                                      else
                                        {
                                          t = s_18;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        v_60 = t;
                                        if(((u_60 != NULL) && (u_60 != v_60)))
                                          _fail(v_60);
                                        else
                                          u_60 = v_60;
                                      }
                                    }
                                  }
                                  t = k_18;
                                  {
                                    ATerm u_18;
                                    u_18 = t;
                                    {
                                      ATerm x_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(u_58), not_null(i_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          x_60 = t;
                                          if(((w_60 != NULL) && (w_60 != x_60)))
                                            _fail(x_60);
                                          else
                                            w_60 = x_60;
                                        }
                                      }
                                    }
                                    t = u_18;
                                    {
                                      ATerm z_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(u_58), not_null(k_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          z_60 = t;
                                          if(((y_60 != NULL) && (y_60 != z_60)))
                                            _fail(z_60);
                                          else
                                            y_60 = z_60;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(u_60)), not_null(j_59)), not_null(c_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(p_59)), not_null(y_60))));
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
ATerm As_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm t_61 = NULL,e_62 = NULL,f_62 = NULL;
  t_61 = t;
  s_61 :
  if(match_cons(t_61, sym_As_2))
    {
      e_62 = ATgetArgument(t_61, 0);
      f_62 = ATgetArgument(t_61, 1);
      {
        ATerm a_63 = NULL,c_63 = NULL;
        ATerm b_63 = NULL;
        t = SSLgetAnnotations(not_null(t_61));
        {
          b_63 = t;
          if(((a_63 != NULL) && (a_63 != b_63)))
            _fail(b_63);
          else
            a_63 = b_63;
        }
        {
          t = not_null(e_62);
          {
            ATerm e_63 = NULL;
            t = o_83(t);
            {
              c_63 = t;
              {
                t = not_null(f_62);
                {
                  ATerm g_63 = NULL;
                  t = p_83(t);
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
ATerm Prim_2 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm))
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
            t = u_79(t);
            {
              b_64 = t;
              {
                t = not_null(v_63);
                {
                  ATerm f_64 = NULL;
                  t = v_79(t);
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
ATerm Explode_2 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm))
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  s_64 = t;
  r_64 :
  if(match_cons(s_64, sym_Explode_2))
    {
      t_64 = ATgetArgument(s_64, 0);
      u_64 = ATgetArgument(s_64, 1);
      {
        ATerm y_64 = NULL,a_65 = NULL;
        ATerm z_64 = NULL;
        t = SSLgetAnnotations(not_null(s_64));
        {
          z_64 = t;
          if(((y_64 != NULL) && (y_64 != z_64)))
            _fail(z_64);
          else
            y_64 = z_64;
        }
        {
          t = not_null(t_64);
          {
            ATerm c_65 = NULL;
            t = k_83(t);
            {
              a_65 = t;
              {
                t = not_null(u_64);
                {
                  ATerm e_65 = NULL;
                  t = l_83(t);
                  {
                    c_65 = t;
                    {
                      ATerm f_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(a_65), not_null(c_65)), not_null(y_64));
                      {
                        f_65 = t;
                        if(((e_65 != NULL) && (e_65 != f_65)))
                          _fail(f_65);
                        else
                          e_65 = f_65;
                      }
                      t = not_null(e_65);
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
ATerm Op_2 (ATerm t, ATerm y_81 (ATerm), ATerm z_81 (ATerm))
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  f_66 = t;
  e_66 :
  if(match_cons(f_66, sym_Op_2))
    {
      g_66 = ATgetArgument(f_66, 0);
      h_66 = ATgetArgument(f_66, 1);
      {
        ATerm q_66 = NULL,b_67 = NULL;
        ATerm r_66 = NULL;
        t = SSLgetAnnotations(not_null(f_66));
        {
          r_66 = t;
          if(((q_66 != NULL) && (q_66 != r_66)))
            _fail(r_66);
          else
            q_66 = r_66;
        }
        {
          t = not_null(g_66);
          {
            ATerm d_67 = NULL;
            t = y_81(t);
            {
              b_67 = t;
              {
                t = not_null(h_66);
                {
                  ATerm f_67 = NULL;
                  t = z_81(t);
                  {
                    d_67 = t;
                    {
                      ATerm g_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_67), not_null(d_67)), not_null(q_66));
                      {
                        g_67 = t;
                        if(((f_67 != NULL) && (f_67 != g_67)))
                          _fail(g_67);
                        else
                          f_67 = g_67;
                      }
                      t = not_null(f_67);
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
ATerm pat_td_1 (ATerm t, ATerm s_118 (ATerm))
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_118(t);
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
                t = pat_td_1(t, s_118);
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
              ATerm a_19 = t;
              int b_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_3 (ATerm t)
                  {
                    t = pat_td_1(t, s_118);
                    return(t);
                  }
                  t = Explode_2(t, _id, o_3);
                  LocalPopChoice(b_19);
                }
              else
                {
                  t = a_19;
                  {
                    ATerm d_19 = t;
                    int l_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_3 (ATerm t)
                        {
                          t = pat_td_1(t, s_118);
                          return(t);
                        }
                        t = Explode_2(t, p_3, _id);
                        LocalPopChoice(l_19);
                      }
                    else
                      {
                        t = d_19;
                        {
                          ATerm m_19 = t;
                          int n_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_3 (ATerm t)
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, s_118);
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
                                  t = pat_td_1(t, s_118);
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
  ATerm x_68 = NULL,y_68 = NULL;
  x_68 = t;
  w_68 :
  if(match_cons(x_68, sym_Match_1))
    {
      y_68 = ATgetArgument(x_68, 0);
      {
        ATerm r_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
            ATerm e_69 = NULL;
            ATerm i_69 = NULL;
            t = new_0(t);
            {
              e_69 = t;
              {
                if(((c_69 != NULL) && (c_69 != e_69)))
                  _fail(e_69);
                else
                  c_69 = e_69;
                {
                  t = not_null(y_68);
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
                      f_69 = t;
                      m_68 :
                      if(match_cons(f_69, sym_Anno_2))
                        {
                          g_69 = ATgetArgument(f_69, 0);
                          h_69 = ATgetArgument(f_69, 1);
                          {
                            if(((a_69 != NULL) && (a_69 != g_69)))
                              _fail(g_69);
                            else
                              a_69 = g_69;
                            {
                              if(((b_69 != NULL) && (b_69 != h_69)))
                                _fail(h_69);
                              else
                                b_69 = h_69;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_69)), not_null(a_69));
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
                      i_69 = t;
                      if(((d_69 != NULL) && (d_69 != i_69)))
                        _fail(i_69);
                      else
                        d_69 = i_69;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_69)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_69)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(b_69))))));
            LocalPopChoice(x_19);
          }
        else
          {
            t = r_19;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
                  ATerm n_69 = NULL;
                  ATerm q_69 = NULL;
                  t = new_0(t);
                  {
                    n_69 = t;
                    {
                      if(((l_69 != NULL) && (l_69 != n_69)))
                        _fail(n_69);
                      else
                        l_69 = n_69;
                      {
                        t = not_null(y_68);
                        {
                          ATerm u_3 (ATerm t)
                          {
                            ATerm o_69 = NULL,p_69 = NULL;
                            o_69 = t;
                            q_68 :
                            if(match_cons(o_69, sym_RootApp_1))
                              {
                                p_69 = ATgetArgument(o_69, 0);
                                {
                                  if(((k_69 != NULL) && (k_69 != p_69)))
                                    _fail(p_69);
                                  else
                                    k_69 = p_69;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_69));
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
                            q_69 = t;
                            if(((m_69 != NULL) && (m_69 != q_69)))
                              _fail(q_69);
                            else
                              m_69 = q_69;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_69))), not_null(k_69))));
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  {
                    ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
                    ATerm w_69 = NULL;
                    ATerm b_70 = NULL;
                    t = new_0(t);
                    {
                      w_69 = t;
                      {
                        if(((u_69 != NULL) && (u_69 != w_69)))
                          _fail(w_69);
                        else
                          u_69 = w_69;
                        {
                          t = not_null(y_68);
                          {
                            ATerm v_3 (ATerm t)
                            {
                              ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
                              y_69 = t;
                              u_68 :
                              if(match_cons(y_69, sym_App_2))
                                {
                                  z_69 = ATgetArgument(y_69, 0);
                                  a_70 = ATgetArgument(y_69, 1);
                                  {
                                    if(((t_69 != NULL) && (t_69 != z_69)))
                                      _fail(z_69);
                                    else
                                      t_69 = z_69;
                                    {
                                      if(((s_69 != NULL) && (s_69 != a_70)))
                                        _fail(a_70);
                                      else
                                        s_69 = a_70;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_69));
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
                              b_70 = t;
                              if(((v_69 != NULL) && (v_69 != b_70)))
                                _fail(b_70);
                              else
                                v_69 = b_70;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_69))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_69)), not_null(t_69)))));
                  }
                }
            }
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
          ATerm w_3 (ATerm t)
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
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  h_73 = t;
  d_73 :
  if(match_cons(h_73, sym_LChoice_2))
    {
      i_73 = ATgetArgument(h_73, 0);
      l_73 = ATgetArgument(h_73, 1);
      e_73 :
      if(match_cons(i_73, sym_LChoice_2))
        {
          j_73 = ATgetArgument(i_73, 0);
          k_73 = ATgetArgument(i_73, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_73), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_73), not_null(l_73)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(h_73, sym_Seq_2))
        {
          i_73 = ATgetArgument(h_73, 0);
          l_73 = ATgetArgument(h_73, 1);
          f_73 :
          if(match_cons(i_73, sym_Seq_2))
            {
              j_73 = ATgetArgument(i_73, 0);
              k_73 = ATgetArgument(i_73, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_73), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_73), not_null(l_73)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_73, sym_Choice_2))
            {
              i_73 = ATgetArgument(h_73, 0);
              l_73 = ATgetArgument(h_73, 1);
              g_73 :
              if(match_cons(i_73, sym_Choice_2))
                {
                  j_73 = ATgetArgument(i_73, 0);
                  k_73 = ATgetArgument(i_73, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_73), (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_73), not_null(l_73)));
                }
              else
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
                  if(match_cons(j_76, sym_DefaultVarDec_1))
                    {
                      k_76 = ATgetArgument(j_76, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_20), term_t_20));
                    }
                  else
                    {
                      if(match_cons(j_76, sym_InfixApp_3))
                        {
                          k_76 = ATgetArgument(j_76, 0);
                          l_76 = ATgetArgument(j_76, 1);
                          i_76 = ATgetArgument(j_76, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_76), (ATerm) ATmakeAppl(sym_Op_2, term_v_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_76)), not_null(k_76))));
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
  ATerm z_77 = NULL,a_78 = NULL;
  z_77 = t;
  v_77 :
  if(match_cons(z_77, sym_Where_1))
    {
      a_78 = ATgetArgument(z_77, 0);
      w_77 :
      if(match_cons(a_78, sym_Fail_0))
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
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
  m_78 = t;
  i_78 :
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
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
  u_78 = t;
  s_78 :
  if(match_cons(u_78, sym_LChoice_2))
    {
      v_78 = ATgetArgument(u_78, 0);
      w_78 = ATgetArgument(u_78, 1);
      t_78 :
      if(match_cons(v_78, sym_Fail_0))
        {
          t = not_null(w_78);
        }
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
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  a_79 :
  if(match_cons(c_79, sym_Choice_2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      b_79 :
      if(match_cons(e_79, sym_Fail_0))
        {
          t = not_null(d_79);
        }
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
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  k_79 = t;
  i_79 :
  if(match_cons(k_79, sym_Choice_2))
    {
      l_79 = ATgetArgument(k_79, 0);
      m_79 = ATgetArgument(k_79, 1);
      j_79 :
      if(match_cons(l_79, sym_Fail_0))
        {
          t = not_null(m_79);
        }
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
  ATerm w_79 = NULL,x_79 = NULL,a_80 = NULL;
  w_79 = t;
  r_79 :
  if(match_cons(w_79, sym_Cong_2))
    {
      x_79 = ATgetArgument(w_79, 0);
      a_80 = ATgetArgument(w_79, 1);
      {
        t = not_null(a_80);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm f_80 = NULL;
            f_80 = t;
            q_79 :
            if(!(match_cons(f_80, sym_Fail_0)))
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
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
  m_80 = t;
  k_80 :
  if(match_cons(m_80, sym_Path_2))
    {
      n_80 = ATgetArgument(m_80, 0);
      o_80 = ATgetArgument(m_80, 1);
      l_80 :
      if(match_cons(o_80, sym_Fail_0))
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
  ATerm a_81 = NULL,b_81 = NULL;
  a_81 = t;
  y_80 :
  if(match_cons(a_81, sym_One_1))
    {
      b_81 = ATgetArgument(a_81, 0);
      z_80 :
      if(match_cons(b_81, sym_Fail_0))
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
  ATerm o_81 = NULL,p_81 = NULL;
  o_81 = t;
  m_81 :
  if(match_cons(o_81, sym_Some_1))
    {
      p_81 = ATgetArgument(o_81, 0);
      n_81 :
      if(match_cons(p_81, sym_Fail_0))
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
  ATerm w_81 = NULL,x_81 = NULL,a_82 = NULL;
  w_81 = t;
  u_81 :
  if(match_cons(w_81, sym_Rec_2))
    {
      x_81 = ATgetArgument(w_81, 0);
      a_82 = ATgetArgument(w_81, 1);
      v_81 :
      if(match_cons(a_82, sym_Fail_0))
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
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL;
  i_82 = t;
  g_82 :
  if(match_cons(i_82, sym_Scope_2))
    {
      j_82 = ATgetArgument(i_82, 0);
      k_82 = ATgetArgument(i_82, 1);
      h_82 :
      if(match_cons(k_82, sym_Fail_0))
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
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
  q_82 = t;
  o_82 :
  if(match_cons(q_82, sym_Seq_2))
    {
      r_82 = ATgetArgument(q_82, 0);
      s_82 = ATgetArgument(q_82, 1);
      p_82 :
      if(match_cons(r_82, sym_Fail_0))
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
  ATerm y_82 = NULL,a_83 = NULL;
  y_82 = t;
  w_82 :
  if(match_cons(y_82, sym_Not_1))
    {
      a_83 = ATgetArgument(y_82, 0);
      x_82 :
      if(match_cons(a_83, sym_Fail_0))
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
  ATerm f_83 = NULL,g_83 = NULL;
  f_83 = t;
  d_83 :
  if(match_cons(f_83, sym_Test_1))
    {
      g_83 = ATgetArgument(f_83, 0);
      e_83 :
      if(match_cons(g_83, sym_Fail_0))
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
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm z_20 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(d_21);
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
                    ATerm o_21 = t;
                    int p_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
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
                                                              int g_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(g_22);
                                                                }
                                                              else
                                                                {
                                                                  t = c_22;
                                                                  {
                                                                    ATerm h_22 = t;
                                                                    int l_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(l_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_22;
                                                                        {
                                                                          ATerm o_22 = t;
                                                                          int p_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(p_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_22;
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
  ATerm n_83 = NULL,q_83 = NULL;
  n_83 = t;
  j_83 :
  if(match_cons(n_83, sym_Match_1))
    {
      q_83 = ATgetArgument(n_83, 0);
      m_83 :
      if(match_cons(q_83, sym_Wld_0))
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
  ATerm v_83 = NULL,w_83 = NULL;
  v_83 = t;
  t_83 :
  if(match_cons(v_83, sym_Where_1))
    {
      w_83 = ATgetArgument(v_83, 0);
      u_83 :
      if(match_cons(w_83, sym_Id_0))
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
  ATerm b_84 = NULL,c_84 = NULL;
  b_84 = t;
  z_83 :
  if(match_cons(b_84, sym_All_1))
    {
      c_84 = ATgetArgument(b_84, 0);
      a_84 :
      if(match_cons(c_84, sym_Id_0))
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
  ATerm b_86 = NULL,c_86 = NULL;
  b_86 = t;
  z_85 :
  if(match_cons(b_86, sym_Test_1))
    {
      c_86 = ATgetArgument(b_86, 0);
      a_86 :
      if(match_cons(c_86, sym_Id_0))
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
  ATerm t_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = t_22;
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
                                      ATerm m_23 = t;
                                      int n_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(n_23);
                                        }
                                      else
                                        {
                                          t = m_23;
                                          {
                                            ATerm o_23 = t;
                                            int q_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(q_23);
                                              }
                                            else
                                              {
                                                t = o_23;
                                                {
                                                  ATerm s_23 = t;
                                                  int t_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(t_23);
                                                    }
                                                  else
                                                    {
                                                      t = s_23;
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
                          ATerm g_24 = t;
                          int h_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(h_24);
                            }
                          else
                            {
                              t = g_24;
                              {
                                ATerm s_24 = t;
                                int t_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
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
ATerm repeat_2 (ATerm t, ATerm v_108 (ATerm), ATerm w_108 (ATerm))
{
  ATerm e_86 (ATerm t)
  {
    ATerm y_24 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_108(t);
        t = e_86(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = y_24;
        t = w_108(t);
      }
    return(t);
  }
  t = e_86(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_108 (ATerm))
{
  t = repeat_2(t, y_108, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm o_92 (ATerm))
{
  ATerm f_86 (ATerm t)
  {
    t = o_92(t);
    {
      t = _all(t, f_86);
      t = o_92(t);
    }
    return(t);
  }
  t = f_86(t);
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
ATerm Strategies_1 (ATerm t, ATerm d_82 (ATerm))
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
            t = d_82(t);
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
ATerm Specification_1 (ATerm t, ATerm f_82 (ATerm))
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
            t = f_82(t);
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
ATerm _2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
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
            t = j_78(t);
            {
              g_88 = t;
              {
                t = not_null(a_88);
                {
                  ATerm k_88 = NULL;
                  t = k_78(t);
                  {
                    i_88 = t;
                    {
                      ATerm l_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_88), not_null(i_88)), not_null(e_88));
                      {
                        l_88 = t;
                        if(((k_88 != NULL) && (k_88 != l_88)))
                          _fail(l_88);
                        else
                          k_88 = l_88;
                      }
                      t = not_null(k_88);
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
  ATerm t_88 = NULL;
  ATerm j_25;
  j_25 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm u_88 = NULL,v_88 = NULL;
      u_88 = t;
      s_88 :
      if(match_cons(u_88, sym_Program_1))
        {
          v_88 = ATgetArgument(u_88, 0);
          if(((t_88 != NULL) && (t_88 != v_88)))
            _fail(v_88);
          else
            t_88 = v_88;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_25), not_null(t_88)), term_w_25));
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
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
  z_88 = t;
  y_88 :
  if(match_cons(z_88, sym__2))
    {
      a_89 = ATgetArgument(z_88, 0);
      b_89 = ATgetArgument(z_88, 1);
      {
        ATerm y_25;
        y_25 = t;
        t = SSL_printnl(not_null(a_89), not_null(b_89));
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
  ATerm g_89 = NULL;
  g_89 = t;
  t = SSL_implode_string(not_null(g_89));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm l_89 = NULL,o_89 = NULL,p_89 = NULL;
        l_89 = t;
        k_89 :
        if(((ATgetType(l_89) == AT_LIST) && !(ATisEmpty(l_89))))
          {
            o_89 = ATgetFirst((ATermList) l_89);
            p_89 = (ATerm) ATgetNext((ATermList) l_89);
            {
              t = not_null(o_89);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(p_89);
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
  ATerm z_89 = NULL;
  ATerm b_90 = NULL;
  z_89 = t;
  {
    ATerm c_90 = NULL;
    ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL;
    t = not_null(z_89);
    {
      c_90 = t;
      {
        t = SSL_explode_term(not_null(c_90));
        {
          e_90 = t;
          x_89 :
          if(match_cons(e_90, sym__2))
            {
              f_90 = ATgetArgument(e_90, 0);
              g_90 = ATgetArgument(e_90, 1);
              y_89 :
              if(match_string(f_90, ""))
                {
                  if(((b_90 != NULL) && (b_90 != g_90)))
                    _fail(g_90);
                  else
                    b_90 = g_90;
                }
              else
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
      t = not_null(b_90);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_99 (ATerm))
{
  ATerm k_90 (ATerm t)
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_90);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          t = Nil_0(t);
          t = h_99(t);
        }
      }
    return(t);
  }
  t = k_90(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  m_90 :
  if(match_cons(n_90, sym__2))
    {
      o_90 = ATgetArgument(n_90, 0);
      p_90 = ATgetArgument(n_90, 1);
      {
        t = not_null(o_90);
        {
          ATerm i_4 (ATerm t)
          {
            t = not_null(p_90);
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
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_26);
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
  ATerm x_90 = NULL;
  x_90 = t;
  t = SSL_explode_string(not_null(x_90));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm n_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(p_26);
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
ATerm debug_1 (ATerm t, ATerm d_119 (ATerm))
{
  ATerm q_26;
  q_26 = t;
  {
    ATerm c_91 = NULL,e_91 = NULL;
    ATerm r_26;
    r_26 = t;
    {
      ATerm d_91 = NULL;
      t = d_119(t);
      {
        d_91 = t;
        if(((c_91 != NULL) && (c_91 != d_91)))
          _fail(d_91);
        else
          c_91 = d_91;
      }
    }
    t = r_26;
    {
      ATerm f_91 = NULL;
      f_91 = t;
      if(((e_91 != NULL) && (e_91 != f_91)))
        _fail(f_91);
      else
        e_91 = f_91;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_91)), not_null(c_91)));
        t = printnl_0(t);
      }
    }
  }
  t = q_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_91 = NULL;
  j_91 = t;
  t = SSL_is_string(not_null(j_91));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = t_26;
      {
        ATerm w_26 = t;
        int a_27 = stack_ptr;
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
            LocalPopChoice(a_27);
          }
        else
          {
            t = w_26;
            {
              ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
              a_92 = t;
              z_91 :
              if(match_cons(a_92, sym_Path_1))
                {
                  b_92 = ATgetArgument(a_92, 0);
                  t = not_null(b_92);
                }
              else
                {
                  if(match_cons(a_92, sym_Var_1))
                    {
                      b_92 = ATgetArgument(a_92, 0);
                      {
                        t = not_null(b_92);
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
                      if(match_cons(a_92, sym_Prefix_2))
                        {
                          b_92 = ATgetArgument(a_92, 0);
                          c_92 = ATgetArgument(a_92, 1);
                          {
                            ATerm h_92 = NULL,j_92 = NULL;
                            ATerm h_27;
                            h_27 = t;
                            {
                              ATerm i_92 = NULL;
                              t = not_null(b_92);
                              {
                                t = eval_config_0(t);
                                {
                                  i_92 = t;
                                  if(((h_92 != NULL) && (h_92 != i_92)))
                                    _fail(i_92);
                                  else
                                    h_92 = i_92;
                                }
                              }
                            }
                            t = h_27;
                            {
                              ATerm k_92 = NULL;
                              t = not_null(c_92);
                              {
                                t = eval_config_0(t);
                                {
                                  k_92 = t;
                                  if(((j_92 != NULL) && (j_92 != k_92)))
                                    _fail(k_92);
                                  else
                                    j_92 = k_92;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(j_92));
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
    t = (ATerm) ATmakeAppl(sym__2, term_i_27, not_null(v_92));
    {
      t = table_get_0(t);
      {
        ATerm j_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm q_27;
              q_27 = t;
              {
                ATerm x_92 = NULL;
                ATerm y_92 = NULL;
                y_92 = t;
                if(((x_92 != NULL) && (x_92 != y_92)))
                  _fail(y_92);
                else
                  x_92 = y_92;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_27, not_null(v_92), not_null(x_92));
                  t = table_put_0(t);
                }
              }
              t = q_27;
            }
            LocalPopChoice(o_27);
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
ATerm if_verbose2_1 (ATerm t, ATerm v_114 (ATerm))
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_27;
      w_27 = t;
      {
        ATerm c_93 = NULL;
        ATerm d_93 = NULL;
        t = term_f_28;
        {
          t = get_config_0(t);
          {
            d_93 = t;
            if(((c_93 != NULL) && (c_93 != d_93)))
              _fail(d_93);
            else
              c_93 = d_93;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_93), term_g_28);
          t = geq_0(t);
        }
      }
      t = w_27;
      t = v_114(t);
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
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  h_93 = t;
  g_93 :
  if(match_cons(h_93, sym__2))
    {
      i_93 = ATgetArgument(h_93, 0);
      j_93 = ATgetArgument(h_93, 1);
      t = SSL_WriteToTextFile(not_null(i_93), not_null(j_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL;
  p_93 = t;
  o_93 :
  if(match_cons(p_93, sym__2))
    {
      q_93 = ATgetArgument(p_93, 0);
      r_93 = ATgetArgument(p_93, 1);
      t = SSL_WriteToBinaryFile(not_null(q_93), not_null(r_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_93 = NULL;
  ATerm i_28;
  i_28 = t;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm j_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_4 (ATerm t)
          {
            ATerm a_94 = NULL,b_94 = NULL;
            a_94 = t;
            w_93 :
            if(match_cons(a_94, sym_Output_1))
              {
                b_94 = ATgetArgument(a_94, 0);
                if(((z_93 != NULL) && (z_93 != b_94)))
                  _fail(b_94);
                else
                  z_93 = b_94;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, m_4);
          LocalPopChoice(y_28);
        }
      else
        {
          t = j_28;
          {
            ATerm e_94 = NULL;
            t = term_z_28;
            {
              e_94 = t;
              if(((z_93 != NULL) && (z_93 != e_94)))
                _fail(e_94);
              else
                z_93 = e_94;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_4, _id);
  }
  t = i_28;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        t = not_null(z_93);
        return(t);
      }
      t = split_2(t, o_4, _id);
      return(t);
    }
    t = _2(t, _id, n_4);
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_4 (ATerm t)
          {
            ATerm q_4 (ATerm t)
            {
              ATerm f_94 = NULL;
              f_94 = t;
              y_93 :
              if(!(match_cons(f_94, sym_Binary_0)))
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
          t = b_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_112 (ATerm))
{
  ATerm l_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
  ATerm d_29;
  d_29 = t;
  t = dtime_0(t);
  t = d_29;
  {
    t = y_112(t);
    {
      ATerm q_29;
      q_29 = t;
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
      t = q_29;
      {
        n_94 = t;
        k_94 :
        if(match_cons(n_94, sym__2))
          {
            o_94 = ATgetArgument(n_94, 0);
            p_94 = ATgetArgument(n_94, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_94))), not_null(p_94));
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
  ATerm v_94 = NULL;
  v_94 = t;
  t = SSL_ReadFromFile(not_null(v_94));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_96 (ATerm), ATerm f_96 (ATerm))
{
  ATerm a_95 = NULL,c_95 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    ATerm b_95 = NULL;
    t = e_96(t);
    {
      b_95 = t;
      if(((a_95 != NULL) && (a_95 != b_95)))
        _fail(b_95);
      else
        a_95 = b_95;
    }
  }
  t = r_29;
  {
    ATerm d_95 = NULL;
    t = f_96(t);
    {
      d_95 = t;
      if(((c_95 != NULL) && (c_95 != d_95)))
        _fail(d_95);
      else
        c_95 = d_95;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_95), not_null(c_95));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_95 = NULL;
  ATerm s_29;
  s_29 = t;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 (ATerm t)
        {
          ATerm k_95 = NULL,l_95 = NULL;
          k_95 = t;
          h_95 :
          if(match_cons(k_95, sym_Input_1))
            {
              l_95 = ATgetArgument(k_95, 0);
              if(((j_95 != NULL) && (j_95 != l_95)))
                _fail(l_95);
              else
                j_95 = l_95;
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
        t = z_29;
        {
          ATerm m_95 = NULL;
          t = term_b_30;
          {
            m_95 = t;
            if(((j_95 != NULL) && (j_95 != m_95)))
              _fail(m_95);
            else
              j_95 = m_95;
          }
        }
      }
  }
  t = s_29;
  {
    ATerm s_4 (ATerm t)
    {
      t = not_null(j_95);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_4);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm r_95 = NULL;
    r_95 = t;
    p_95 :
    if(!(match_string(r_95, "-v")))
      {
        if(!(match_string(r_95, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_d_30;
    t = set_config_0(t);
    t = term_e_30;
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_f_30;
    return(t);
  }
  t = Option_3(t, t_4, u_4, v_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm u_95 = NULL;
    u_95 = t;
    s_95 :
    if(!(match_string(u_95, "-k")))
      {
        if(!(match_string(u_95, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm g_30;
    g_30 = t;
    {
      ATerm v_95 = NULL;
      ATerm w_95 = NULL;
      t = string_to_int_0(t);
      {
        w_95 = t;
        if(((v_95 != NULL) && (v_95 != w_95)))
          _fail(w_95);
        else
          v_95 = w_95;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_30, not_null(v_95));
        t = set_config_0(t);
      }
    }
    t = g_30;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_i_30;
    return(t);
  }
  t = ArgOption_3(t, w_4, x_4, y_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_95 = NULL;
  z_95 = t;
  t = SSL_string_to_int(not_null(z_95));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_4 (ATerm t)
      {
        ATerm l_96 = NULL;
        l_96 = t;
        g_96 :
        if(!(match_string(l_96, "-S")))
          {
            if(!(match_string(l_96, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_5 (ATerm t)
      {
        t = term_t_30;
        t = set_config_0(t);
        t = term_u_30;
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = term_v_30;
        return(t);
      }
      t = Option_3(t, z_4, a_5, b_5);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 (ATerm t)
            {
              ATerm m_96 = NULL;
              m_96 = t;
              h_96 :
              if(!(match_string(m_96, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_5 (ATerm t)
            {
              ATerm p_96 = NULL;
              ATerm y_30;
              y_30 = t;
              {
                ATerm n_96 = NULL;
                ATerm o_96 = NULL;
                t = string_to_int_0(t);
                {
                  o_96 = t;
                  if(((n_96 != NULL) && (n_96 != o_96)))
                    _fail(o_96);
                  else
                    n_96 = o_96;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_28, not_null(n_96));
                  t = set_config_0(t);
                }
              }
              t = y_30;
              {
                ATerm q_96 = NULL;
                q_96 = t;
                if(((p_96 != NULL) && (p_96 != q_96)))
                  _fail(q_96);
                else
                  p_96 = q_96;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_96));
              }
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              t = term_z_30;
              return(t);
            }
            t = ArgOption_3(t, c_5, d_5, e_5);
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm r_96 = NULL;
                r_96 = t;
                k_96 :
                if(!(match_string(r_96, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_5 (ATerm t)
              {
                t = term_b_31;
                t = set_config_0(t);
                t = term_c_31;
                return(t);
              }
              ATerm h_5 (ATerm t)
              {
                t = term_d_31;
                return(t);
              }
              t = Option_3(t, f_5, g_5, h_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm x_96 = NULL;
    x_96 = t;
    u_96 :
    if(!(match_string(x_96, "-o")))
      {
        if(!(match_string(x_96, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    ATerm a_97 = NULL;
    ATerm i_31;
    i_31 = t;
    {
      ATerm y_96 = NULL;
      ATerm z_96 = NULL;
      z_96 = t;
      if(((y_96 != NULL) && (y_96 != z_96)))
        _fail(z_96);
      else
        y_96 = z_96;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_31, not_null(y_96));
        t = set_config_0(t);
      }
    }
    t = i_31;
    {
      ATerm b_97 = NULL;
      b_97 = t;
      if(((a_97 != NULL) && (a_97 != b_97)))
        _fail(b_97);
      else
        a_97 = b_97;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_97));
    }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_k_31;
    return(t);
  }
  t = ArgOption_3(t, i_5, j_5, k_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm l_5 (ATerm t)
        {
          ATerm l_97 = NULL;
          l_97 = t;
          k_97 :
          if(!(match_string(l_97, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_5 (ATerm t)
        {
          t = term_o_31;
          t = set_config_0(t);
          t = term_p_31;
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_q_31;
          return(t);
        }
        t = Option_3(t, l_5, m_5, n_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL;
  r_97 = t;
  p_97 :
  if(match_string(r_97, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(r_97) == AT_LIST) && !(ATisEmpty(r_97))))
        {
          s_97 = ATgetFirst((ATermList) r_97);
          t_97 = (ATerm) ATgetNext((ATermList) r_97);
          q_97 :
          if(((ATgetType(t_97) == AT_LIST) && !(ATisEmpty(t_97))))
            {
              u_97 = ATgetFirst((ATermList) t_97);
              v_97 = (ATerm) ATgetNext((ATermList) t_97);
              {
                ATerm z_97 = NULL;
                ATerm r_31;
                r_31 = t;
                {
                  t = not_null(s_97);
                  t = j_0(t);
                }
                t = r_31;
                {
                  ATerm a_98 = NULL;
                  t = not_null(u_97);
                  {
                    t = l_0(t);
                    {
                      a_98 = t;
                      if(((z_97 != NULL) && (z_97 != a_98)))
                        _fail(a_98);
                      else
                        z_97 = a_98;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_97)), not_null(z_97));
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
ATerm input_option_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm h_98 = NULL;
    h_98 = t;
    e_98 :
    if(!(match_string(h_98, "-i")))
      {
        if(!(match_string(h_98, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    ATerm k_98 = NULL;
    ATerm s_31;
    s_31 = t;
    {
      ATerm i_98 = NULL;
      ATerm j_98 = NULL;
      j_98 = t;
      if(((i_98 != NULL) && (i_98 != j_98)))
        _fail(j_98);
      else
        i_98 = j_98;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_31, not_null(i_98));
        t = set_config_0(t);
      }
    }
    t = s_31;
    {
      ATerm l_98 = NULL;
      l_98 = t;
      if(((k_98 != NULL) && (k_98 != l_98)))
        _fail(l_98);
      else
        k_98 = l_98;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_98));
    }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_u_31;
    return(t);
  }
  t = ArgOption_3(t, o_5, p_5, q_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm x_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(y_31);
          }
        else
          {
            t = x_31;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATempty, term_z_31));
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
  ATerm p_98 = NULL;
  p_98 = t;
  t = SSL_TicksToSeconds(not_null(p_98));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
  x_98 = t;
  w_98 :
  if(match_cons(x_98, sym__2))
    {
      y_98 = ATgetArgument(x_98, 0);
      z_98 = ATgetArgument(x_98, 1);
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_98), not_null(z_98));
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            t = SSL_addr(not_null(y_98), not_null(z_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_103 (ATerm), ATerm q_103 (ATerm))
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_103(t);
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
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
                t = foldr_2(t, p_103, q_103);
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
                t = q_103(t);
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
ATerm crush_2 (ATerm t, ATerm n_102 (ATerm), ATerm o_102 (ATerm))
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
      t = foldr_2(t, n_102, o_102);
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
      t = term_q_30;
      return(t);
    }
    t = crush_2(t, r_5, add_0);
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
        ATerm e_32;
        e_32 = t;
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_100), not_null(m_100));
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              t = SSL_gtr(not_null(l_100), not_null(m_100));
            }
        }
        t = e_32;
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
  ATerm j_32 = t;
  int k_32 = stack_ptr;
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
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_114 (ATerm))
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_32;
      n_32 = t;
      {
        ATerm y_100 = NULL;
        ATerm z_100 = NULL;
        t = term_f_28;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_100), term_b_15);
          t = geq_0(t);
        }
      }
      t = n_32;
      t = u_114(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm d_101 = NULL,f_101 = NULL;
    ATerm o_32;
    o_32 = t;
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
    t = o_32;
    {
      ATerm g_101 = NULL;
      t = term_p_32;
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
        t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_32), not_null(d_101)), term_q_32), not_null(f_101)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_5);
  {
    t = term_q_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_101 = NULL;
  n_101 = t;
  m_101 :
  if(match_cons(n_101, sym_Version_0))
    {
      ATerm p_101 = NULL,r_101 = NULL;
      ATerm s_32;
      s_32 = t;
      {
        ATerm q_101 = NULL;
        t = SSLgetAnnotations(not_null(n_101));
        {
          q_101 = t;
          if(((p_101 != NULL) && (p_101 != q_101)))
            _fail(q_101);
          else
            p_101 = q_101;
        }
      }
      t = s_32;
      {
        ATerm s_101 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_101));
        {
          s_101 = t;
          if(((r_101 != NULL) && (r_101 != s_101)))
            _fail(s_101);
          else
            r_101 = s_101;
        }
        t = not_null(r_101);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_112 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, t_5);
  t = w_112(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_101 = NULL;
  x_101 = t;
  t = SSL_table_create(not_null(x_101));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_102 = NULL;
  b_102 = t;
  {
    ATerm x_32;
    x_32 = t;
    {
      t = term_y_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_32, term_z_32, not_null(b_102));
          t = table_put_0(t);
        }
      }
    }
    t = x_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_102 = NULL;
  f_102 = t;
  t = SSL_table_destroy(not_null(f_102));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  t = SSL_exit(not_null(j_102));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL,w_102 = NULL;
  s_102 = t;
  m_102 :
  if(((ATgetType(s_102) == AT_LIST) && ATisEmpty(s_102)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_102) == AT_LIST) && !(ATisEmpty(s_102))))
        {
          t_102 = ATgetFirst((ATermList) s_102);
          w_102 = (ATerm) ATgetNext((ATermList) s_102);
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
  ATerm a_33;
  a_33 = t;
  {
    ATerm b_103 = NULL;
    ATerm h_103 = NULL;
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        {
          ATerm f_103 = NULL;
          ATerm g_103 = NULL;
          g_103 = t;
          if(((f_103 != NULL) && (f_103 != g_103)))
            _fail(g_103);
          else
            f_103 = g_103;
          t = (ATerm) ATinsert(ATempty, not_null(f_103));
        }
      }
    {
      h_103 = t;
      if(((b_103 != NULL) && (b_103 != h_103)))
        _fail(h_103);
      else
        b_103 = h_103;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_28, not_null(b_103));
      t = printnl_0(t);
    }
  }
  t = a_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm k_103 (ATerm t)
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = Cons_2(t, s_98, k_103);
      }
    return(t);
  }
  t = k_103(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL;
  y_103 = t;
  v_103 :
  if(((ATgetType(y_103) == AT_LIST) && !(ATisEmpty(y_103))))
    {
      w_103 = ATgetFirst((ATermList) y_103);
      x_103 = (ATerm) ATgetNext((ATermList) y_103);
      {
        ATerm b_104 = NULL;
        t = not_null(x_103);
        {
          ATerm f_33;
          f_33 = t;
          {
            ATerm c_104 = NULL,e_104 = NULL,g_104 = NULL;
            ATerm g_33;
            g_33 = t;
            {
              ATerm d_104 = NULL;
              t = i_0(t);
              {
                d_104 = t;
                if(((c_104 != NULL) && (c_104 != d_104)))
                  _fail(d_104);
                else
                  c_104 = d_104;
              }
            }
            t = g_33;
            {
              ATerm f_104 = NULL;
              t = not_null(w_103);
              {
                t = h_0(t);
                {
                  f_104 = t;
                  if(((e_104 != NULL) && (e_104 != f_104)))
                    _fail(f_104);
                  else
                    e_104 = f_104;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_104)), not_null(e_104));
                {
                  g_104 = t;
                  if(((b_104 != NULL) && (b_104 != g_104)))
                    _fail(g_104);
                  else
                    b_104 = g_104;
                }
              }
            }
          }
          t = f_33;
          {
            ATerm u_5 (ATerm t)
            {
              t = not_null(b_104);
              return(t);
            }
            t = reverse_acc_2(t, h_0, u_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_103) == AT_LIST) && ATisEmpty(y_103)))
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
ATerm short_description_1 (ATerm t, ATerm x_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_89 (ATerm))
{
  ATerm r_104 = NULL,s_104 = NULL;
  r_104 = t;
  q_104 :
  if(match_cons(r_104, sym_Program_1))
    {
      s_104 = ATgetArgument(r_104, 0);
      {
        ATerm v_104 = NULL,x_104 = NULL;
        ATerm w_104 = NULL;
        t = SSLgetAnnotations(not_null(r_104));
        {
          w_104 = t;
          if(((v_104 != NULL) && (v_104 != w_104)))
            _fail(w_104);
          else
            v_104 = w_104;
        }
        {
          t = not_null(s_104);
          {
            ATerm z_104 = NULL;
            t = m_89(t);
            {
              x_104 = t;
              {
                ATerm a_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_104)), not_null(v_104));
                {
                  a_105 = t;
                  if(((z_104 != NULL) && (z_104 != a_105)))
                    _fail(a_105);
                  else
                    z_104 = a_105;
                }
                t = not_null(z_104);
              }
            }
          }
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
  ATerm r_105 = NULL;
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_105 = NULL;
      t = term_p_32;
      {
        t = get_config_0(t);
        {
          s_105 = t;
          if(((r_105 != NULL) && (r_105 != s_105)))
            _fail(s_105);
          else
            r_105 = s_105;
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
            ATerm t_105 = NULL;
            t_105 = t;
            if(((r_105 != NULL) && (r_105 != t_105)))
              _fail(t_105);
            else
              r_105 = t_105;
            return(t);
          }
          t = Program_1(t, x_5);
          return(t);
        }
        t = fetch_1(t, w_5);
      }
    }
  {
    t = term_n_33;
    {
      t = echo_0(t);
      {
        t = term_s_33;
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
                ATerm v_105 = NULL;
                ATerm w_105 = NULL;
                w_105 = t;
                if(((v_105 != NULL) && (v_105 != w_105)))
                  _fail(w_105);
                else
                  v_105 = w_105;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_105)), term_t_33);
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
    ATerm d_106 = NULL;
    ATerm e_106 = NULL;
    e_106 = t;
    if(((d_106 != NULL) && (d_106 != e_106)))
      _fail(e_106);
    else
      d_106 = e_106;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATempty, not_null(d_106)));
      t = printnl_0(t);
    }
  }
  t = u_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_119 (ATerm))
{
  ATerm v_33;
  v_33 = t;
  {
    t = e_119(t);
    t = debug_0(t);
  }
  t = v_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_89 (ATerm))
{
  ATerm l_106 = NULL,m_106 = NULL;
  l_106 = t;
  k_106 :
  if(match_cons(l_106, sym_Undefined_1))
    {
      m_106 = ATgetArgument(l_106, 0);
      {
        ATerm q_106 = NULL,s_106 = NULL;
        ATerm r_106 = NULL;
        t = SSLgetAnnotations(not_null(l_106));
        {
          r_106 = t;
          if(((q_106 != NULL) && (q_106 != r_106)))
            _fail(r_106);
          else
            q_106 = r_106;
        }
        {
          t = not_null(m_106);
          {
            ATerm u_106 = NULL;
            t = n_89(t);
            {
              s_106 = t;
              {
                ATerm v_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_106)), not_null(q_106));
                {
                  v_106 = t;
                  if(((u_106 != NULL) && (u_106 != v_106)))
                    _fail(v_106);
                  else
                    u_106 = v_106;
                }
                t = not_null(u_106);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_99 (ATerm))
{
  ATerm a_107 (ATerm t)
  {
    ATerm y_33 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_99, _id);
        LocalPopChoice(g_34);
      }
    else
      {
        t = y_33;
        t = Cons_2(t, _id, a_107);
      }
    return(t);
  }
  t = a_107(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_115 (ATerm))
{
  t = fetch_1(t, x_115);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_107 = NULL;
  f_107 = t;
  e_107 :
  if(match_cons(f_107, sym_Help_0))
    {
      ATerm l_107 = NULL,n_107 = NULL;
      ATerm h_34;
      h_34 = t;
      {
        ATerm m_107 = NULL;
        t = SSLgetAnnotations(not_null(f_107));
        {
          m_107 = t;
          if(((l_107 != NULL) && (l_107 != m_107)))
            _fail(m_107);
          else
            l_107 = m_107;
        }
      }
      t = h_34;
      {
        ATerm o_107 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_107));
        {
          o_107 = t;
          if(((n_107 != NULL) && (n_107 != o_107)))
            _fail(o_107);
          else
            n_107 = o_107;
        }
        t = not_null(n_107);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_95(t);
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
  ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL;
  u_107 = t;
  t_107 :
  if(match_cons(u_107, sym__2))
    {
      v_107 = ATgetArgument(u_107, 0);
      w_107 = ATgetArgument(u_107, 1);
      t = SSL_table_get(not_null(v_107), not_null(w_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL;
  d_108 = t;
  c_108 :
  if(match_cons(d_108, sym__3))
    {
      e_108 = ATgetArgument(d_108, 0);
      f_108 = ATgetArgument(d_108, 1);
      g_108 = ATgetArgument(d_108, 2);
      {
        ATerm k_34;
        k_34 = t;
        {
          ATerm k_108 = NULL;
          ATerm l_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_108), not_null(f_108));
          {
            ATerm l_34 = t;
            int q_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_34);
              }
            else
              {
                t = l_34;
                t = (ATerm) ATempty;
              }
            {
              l_108 = t;
              if(((k_108 != NULL) && (k_108 != l_108)))
                _fail(l_108);
              else
                k_108 = l_108;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_108), not_null(f_108), (ATerm) ATinsert(CheckATermList(not_null(k_108)), not_null(g_108)));
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
ATerm register_usage_1 (ATerm t, ATerm c_117 (ATerm))
{
  ATerm p_108 = NULL;
  ATerm q_108 = NULL;
  t = term_p_6;
  {
    t = c_117(t);
    {
      q_108 = t;
      if(((p_108 != NULL) && (p_108 != q_108)))
        _fail(q_108);
      else
        p_108 = q_108;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_33, term_r_33, not_null(p_108));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL;
  a_109 = t;
  z_108 :
  if(match_string(a_109, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(a_109) == AT_LIST) && !(ATisEmpty(a_109))))
        {
          b_109 = ATgetFirst((ATermList) a_109);
          c_109 = (ATerm) ATgetNext((ATermList) a_109);
          {
            ATerm f_109 = NULL;
            ATerm r_34;
            r_34 = t;
            {
              t = not_null(b_109);
              t = a_0(t);
            }
            t = r_34;
            {
              ATerm g_109 = NULL;
              t = term_p_6;
              {
                t = c_0(t);
                {
                  g_109 = t;
                  if(((f_109 != NULL) && (f_109 != g_109)))
                    _fail(g_109);
                  else
                    f_109 = g_109;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_109)), not_null(f_109));
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
    ATerm l_109 = NULL;
    l_109 = t;
    k_109 :
    if(!(match_string(l_109, "--help")))
      {
        if(!(match_string(l_109, "-h")))
          {
            if(!(match_string(l_109, "-?")))
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
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  u_109 = t;
  t_109 :
  if(((ATgetType(u_109) == AT_LIST) && !(ATisEmpty(u_109))))
    {
      v_109 = ATgetFirst((ATermList) u_109);
      w_109 = (ATerm) ATgetNext((ATermList) u_109);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_109)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_109)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm))
{
  ATerm g_110 = NULL,h_110 = NULL,i_110 = NULL;
  g_110 = t;
  f_110 :
  if(((ATgetType(g_110) == AT_LIST) && !(ATisEmpty(g_110))))
    {
      h_110 = ATgetFirst((ATermList) g_110);
      i_110 = (ATerm) ATgetNext((ATermList) g_110);
      {
        ATerm m_110 = NULL,o_110 = NULL;
        ATerm n_110 = NULL;
        t = SSLgetAnnotations(not_null(g_110));
        {
          n_110 = t;
          if(((m_110 != NULL) && (m_110 != n_110)))
            _fail(n_110);
          else
            m_110 = n_110;
        }
        {
          t = not_null(h_110);
          {
            ATerm q_110 = NULL;
            t = s_79(t);
            {
              o_110 = t;
              {
                t = not_null(i_110);
                {
                  ATerm s_110 = NULL;
                  t = t_79(t);
                  {
                    q_110 = t;
                    {
                      ATerm t_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_110)), not_null(o_110)), not_null(m_110));
                      {
                        t_110 = t;
                        if(((s_110 != NULL) && (s_110 != t_110)))
                          _fail(t_110);
                        else
                          s_110 = t_110;
                      }
                      t = not_null(s_110);
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
  ATerm d_111 = NULL;
  d_111 = t;
  c_111 :
  if(((ATgetType(d_111) == AT_LIST) && ATisEmpty(d_111)))
    {
      {
        ATerm f_111 = NULL,h_111 = NULL;
        ATerm b_35;
        b_35 = t;
        {
          ATerm g_111 = NULL;
          t = SSLgetAnnotations(not_null(d_111));
          {
            g_111 = t;
            if(((f_111 != NULL) && (f_111 != g_111)))
              _fail(g_111);
            else
              f_111 = g_111;
          }
        }
        t = b_35;
        {
          ATerm i_111 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_111));
          {
            i_111 = t;
            if(((h_111 != NULL) && (h_111 != i_111)))
              _fail(i_111);
            else
              h_111 = i_111;
          }
          t = not_null(h_111);
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
  ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL;
  o_111 = t;
  n_111 :
  if(match_cons(o_111, sym__2))
    {
      p_111 = ATgetArgument(o_111, 0);
      q_111 = ATgetArgument(o_111, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_27, not_null(p_111), not_null(q_111));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_117 (ATerm))
{
  ATerm c_35;
  c_35 = t;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_35;
        t = a_117(t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        {
        }
      }
  }
  t = c_35;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm y_111 = NULL;
      ATerm n_35;
      n_35 = t;
      {
        ATerm w_111 = NULL;
        ATerm x_111 = NULL;
        x_111 = t;
        if(((w_111 != NULL) && (w_111 != x_111)))
          _fail(x_111);
        else
          w_111 = x_111;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_32, not_null(w_111));
          t = set_config_0(t);
        }
      }
      t = n_35;
      {
        ATerm z_111 = NULL;
        z_111 = t;
        if(((y_111 != NULL) && (y_111 != z_111)))
          _fail(z_111);
        else
          y_111 = z_111;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_111));
      }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm t_35 = t;
      int u_35 = stack_ptr;
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
                t = a_117(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          LocalPopChoice(u_35);
        }
      else
        {
          t = t_35;
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
  ATerm f_112 = NULL,g_112 = NULL,m_112 = NULL;
  ATerm x_35;
  x_35 = t;
  {
    ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL;
    o_112 = t;
    e_112 :
    if(match_cons(o_112, sym__3))
      {
        p_112 = ATgetArgument(o_112, 0);
        q_112 = ATgetArgument(o_112, 1);
        r_112 = ATgetArgument(o_112, 2);
        {
          if(((f_112 != NULL) && (f_112 != p_112)))
            _fail(p_112);
          else
            f_112 = p_112;
          {
            if(((g_112 != NULL) && (g_112 != q_112)))
              _fail(q_112);
            else
              g_112 = q_112;
            {
              if(((m_112 != NULL) && (m_112 != r_112)))
                _fail(r_112);
              else
                m_112 = r_112;
              t = SSL_table_put(not_null(f_112), not_null(g_112), not_null(m_112));
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
ATerm parse_options_1 (ATerm t, ATerm z_116 (ATerm))
{
  ATerm u_112 = NULL;
  ATerm y_35;
  y_35 = t;
  {
    t = term_d_36;
    t = table_put_0(t);
  }
  t = y_35;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm e_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_116(t);
          LocalPopChoice(j_36);
        }
      else
        {
          t = e_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_6);
    {
      ATerm k_36 = t;
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
              t = term_q_30;
              t = exit_0(t);
            }
          }
          LocalPopChoice(l_36);
        }
      else
        {
          t = k_36;
          {
            ATerm r_36 = t;
            int u_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm v_112 = NULL;
                    v_112 = t;
                    if(((u_112 != NULL) && (u_112 != v_112)))
                      _fail(v_112);
                    else
                      u_112 = v_112;
                    return(t);
                  }
                  t = Undefined_1(t, h_6);
                  return(t);
                }
                t = fetch_1(t, g_6);
                {
                  ATerm i_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_112)), term_v_36);
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
                LocalPopChoice(u_36);
              }
            else
              {
                t = r_36;
                {
                }
              }
          }
        }
      {
        ATerm w_36;
        w_36 = t;
        {
          t = term_o_33;
          t = table_destroy_0(t);
        }
        t = w_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm))
{
  t = parse_options_1(t, c_113);
  {
    t = store_options_0(t);
    {
      t = e_113(t);
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_113);
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            {
              ATerm c_37 = t;
              int d_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_113(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_37);
                }
              else
                {
                  t = c_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_113(t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_113);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, k_6, v_113, w_113, l_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm p_113 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      ATerm g_37;
      g_37 = t;
      {
        ATerm a_113 = NULL;
        ATerm b_113 = NULL;
        t = term_p_32;
        {
          t = get_config_0(t);
          {
            b_113 = t;
            if(((a_113 != NULL) && (a_113 != b_113)))
              _fail(b_113);
            else
              a_113 = b_113;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATempty, not_null(a_113)));
          t = printnl_0(t);
        }
      }
      t = g_37;
      return(t);
    }
    t = if_verbose2_1(t, n_6);
    return(t);
  }
  t = iowrap_4(t, n_113, o_113, p_113, m_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_113 (ATerm), ATerm m_113 (ATerm))
{
  t = iowrap_3(t, l_113, m_113, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_113 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    t = _2(t, _id, i_113);
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
