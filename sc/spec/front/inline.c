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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_e_35;
ATerm term_t_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_n_27;
ATerm term_y_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_e_18;
ATerm term_d_17;
ATerm term_k_15;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_t_13;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
void init_constant_terms (void)
{
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_w_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_w_6);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_w_6);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_w_6);
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
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_i_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__3, term_h_33, term_i_33, (ATerm) ATempty);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_96 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_113 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm b_117 (ATerm));
ATerm Rec_2 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm Let_2 (ATerm, ATerm r_87 (ATerm), ATerm s_87 (ATerm));
ATerm sboundin_3 (ATerm, ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm x_116 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm f_86 (ATerm));
ATerm tboundin_3 (ATerm, ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm a_117 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm r_105 (ATerm));
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm for_3 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_105 (ATerm), ATerm q_105 (ATerm));
ATerm diff_1 (ATerm, ATerm u_105 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm b_103 (ATerm), ATerm c_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm h_103 (ATerm), ATerm i_103 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_102 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm a_102 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm f_102 (ATerm));
ATerm rename_4 (ATerm, ATerm j_103 (ATerm, ATerm (ATerm)), ATerm k_103 (ATerm), ATerm l_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_103 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm h_96 (ATerm));
ATerm restore_always_2 (ATerm, ATerm z_112 (ATerm), ATerm a_113 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm g_96 (ATerm));
ATerm scope_2 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm k_96 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm));
ATerm crush_3 (ATerm, ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm Choice_2 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm));
ATerm Cong_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm Match_1 (ATerm, ATerm p_88 (ATerm));
ATerm Seq_2 (ATerm, ATerm a_87 (ATerm), ATerm b_87 (ATerm));
ATerm Scope_2 (ATerm, ATerm t_88 (ATerm), ATerm u_88 (ATerm));
ATerm Build_1 (ATerm, ATerm q_88 (ATerm));
ATerm SVar_1 (ATerm, ATerm o_87 (ATerm));
ATerm Call_2 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm r_114 (ATerm));
ATerm SDef_3 (ATerm, ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm));
ATerm zip_1 (ATerm, ATerm l_110 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm o_85 (ATerm), ATerm p_85 (ATerm));
ATerm Prim_2 (ATerm, ATerm w_88 (ATerm), ATerm x_88 (ATerm));
ATerm Explode_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm Op_2 (ATerm, ATerm w_86 (ATerm), ATerm x_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm a_90 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm a_99 (ATerm), ATerm b_99 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_99 (ATerm));
ATerm downup_1 (ATerm, ATerm d_113 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm p_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm r_86 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_95 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_111 (ATerm), ATerm v_111 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_104 (ATerm), ATerm j_104 (ATerm));
ATerm crush_2 (ATerm, ATerm a_106 (ATerm), ATerm b_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_95 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_91 (ATerm));
ATerm map_1 (ATerm, ATerm h_108 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_108 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_91 (ATerm));
ATerm Program_1 (ATerm, ATerm h_79 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_108 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_112 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm m_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_88 (ATerm), ATerm z_88 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_94 (ATerm));
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
ATerm rewrite_1 (ATerm t, ATerm m_96 (ATerm))
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm s_7 = NULL;
    t = term_w_6;
    {
      t = m_96(t);
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
            ATerm h_8 = NULL;
            ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_8));
            {
              ATerm c_0 (ATerm t)
              {
                t = term_x_6;
                return(t);
              }
              t = rewrite_1(t, c_0);
              {
                i_8 = t;
                x_7 :
                if(match_cons(i_8, sym_Defined_2))
                  {
                    j_8 = ATgetArgument(i_8, 0);
                    k_8 = ATgetArgument(i_8, 1);
                    y_7 :
                    if(match_string(j_8, "l_0"))
                      {
                        if(((h_8 != NULL) && (h_8 != k_8)))
                          _fail(k_8);
                        else
                          h_8 = k_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_8)), not_null(e_8));
          }
        }
      else
        {
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
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  u_8 = t;
  r_8 :
  if(match_cons(u_8, sym_Call_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      x_8 = ATgetArgument(u_8, 1);
      s_8 :
      if(match_cons(v_8, sym_SVar_1))
        {
          w_8 = ATgetArgument(v_8, 0);
          t_8 :
          if(((ATermList) x_8 == ATempty))
            {
              {
                ATerm z_8 = NULL;
                ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_8));
                {
                  ATerm d_0 (ATerm t)
                  {
                    t = term_y_6;
                    return(t);
                  }
                  t = rewrite_1(t, d_0);
                  {
                    a_9 = t;
                    p_8 :
                    if(match_cons(a_9, sym_Defined_2))
                      {
                        b_9 = ATgetArgument(a_9, 0);
                        c_9 = ATgetArgument(a_9, 1);
                        q_8 :
                        if(match_string(b_9, "k_0"))
                          {
                            if(((z_8 != NULL) && (z_8 != c_9)))
                              _fail(c_9);
                            else
                              z_8 = c_9;
                          }
                        else
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
                  t = not_null(z_8);
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
ATerm topdown_1 (ATerm t, ATerm b_113 (ATerm))
{
  t = b_113(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, b_113);
      return(t);
    }
    t = _all(t, e_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  u_9 = t;
  h_9 :
  if(match_cons(u_9, sym__2))
    {
      v_9 = ATgetArgument(u_9, 0);
      c_10 = ATgetArgument(u_9, 1);
      i_9 :
      if(match_cons(v_9, sym_VarDec_2))
        {
          w_9 = ATgetArgument(v_9, 0);
          x_9 = ATgetArgument(v_9, 1);
          j_9 :
          if(match_cons(x_9, sym_FunType_2))
            {
              y_9 = ATgetArgument(x_9, 0);
              b_10 = ATgetArgument(x_9, 1);
              k_9 :
              if(((ATgetType(y_9) == AT_LIST) && ((ATermList) y_9 != ATempty)))
                {
                  z_9 = ATgetFirst((ATermList) y_9);
                  a_10 = (ATerm) ATgetNext((ATermList) y_9);
                  l_9 :
                  if(((ATgetType(a_10) == AT_LIST) && ((ATermList) a_10 != ATempty)))
                    {
                      p_9 = ATgetFirst((ATermList) a_10);
                      q_9 = (ATerm) ATgetNext((ATermList) a_10);
                      m_9 :
                      if(match_cons(c_10, sym_Call_2))
                        {
                          r_9 = ATgetArgument(c_10, 0);
                          t_9 = ATgetArgument(c_10, 1);
                          n_9 :
                          if(match_cons(r_9, sym_SVar_1))
                            {
                              s_9 = ATgetArgument(r_9, 0);
                              o_9 :
                              if(((ATermList) t_9 == ATempty))
                                {
                                  {
                                    ATerm z_6;
                                    z_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_7, not_null(s_9)));
                                      {
                                        ATerm f_0 (ATerm t)
                                        {
                                          t = term_x_6;
                                          return(t);
                                        }
                                        t = assert_1(t, f_0);
                                      }
                                    }
                                    t = z_6;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATermList) a_10 == ATempty))
                        {
                          {
                            ATerm b_7;
                            b_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_7, not_null(c_10)));
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_y_6;
                                  return(t);
                                }
                                t = assert_1(t, g_0);
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
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  ATerm h_0 (ATerm t)
  {
    t = term_y_6;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_x_6;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      o_10 = t;
      k_10 :
      if(match_cons(o_10, sym__3))
        {
          p_10 = ATgetArgument(o_10, 0);
          q_10 = ATgetArgument(o_10, 1);
          r_10 = ATgetArgument(o_10, 2);
          {
            if(((l_10 != NULL) && (l_10 != p_10)))
              _fail(p_10);
            else
              l_10 = p_10;
            {
              if(((m_10 != NULL) && (m_10 != q_10)))
                _fail(q_10);
              else
                m_10 = q_10;
              {
                if(((n_10 != NULL) && (n_10 != r_10)))
                  _fail(r_10);
                else
                  n_10 = r_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), not_null(m_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(n_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm d_7 = t;
                            int e_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(e_7);
                              }
                            else
                              {
                                t = d_7;
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
    t = scope_2(t, u_0, v_0);
    return(t);
  }
  t = scope_2(t, h_0, t_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(((ATgetType(v_10) == AT_LIST) && ((ATermList) v_10 != ATempty)))
    {
      w_10 = ATgetFirst((ATermList) v_10);
      x_10 = (ATerm) ATgetNext((ATermList) v_10);
      t = not_null(w_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm b_117 (ATerm))
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, b_117);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
            h_11 = t;
            c_11 :
            if(match_cons(h_11, sym__2))
              {
                i_11 = ATgetArgument(h_11, 0);
                m_11 = ATgetArgument(h_11, 1);
                d_11 :
                if(match_cons(i_11, sym_SDef_3))
                  {
                    j_11 = ATgetArgument(i_11, 0);
                    k_11 = ATgetArgument(i_11, 1);
                    l_11 = ATgetArgument(i_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_11), not_null(k_11), not_null(l_11));
                  }
                else
                  {
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
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, b_117);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
                  q_11 = t;
                  f_11 :
                  if(match_cons(q_11, sym__2))
                    {
                      r_11 = ATgetArgument(q_11, 0);
                      u_11 = ATgetArgument(q_11, 1);
                      g_11 :
                      if(match_cons(r_11, sym_VarDec_2))
                        {
                          s_11 = ATgetArgument(r_11, 0);
                          t_11 = ATgetArgument(r_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_11), not_null(t_11));
                        }
                      else
                        {
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
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = b_117(t);
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
ATerm Rec_2 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym_Rec_2))
    {
      h_12 = ATgetArgument(g_12, 0);
      i_12 = ATgetArgument(g_12, 1);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(g_12));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(h_12);
          {
            ATerm q_12 = NULL;
            t = p_87(t);
            {
              o_12 = t;
              {
                t = not_null(i_12);
                {
                  ATerm s_12 = NULL;
                  t = q_87(t);
                  {
                    q_12 = t;
                    {
                      ATerm t_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(o_12), not_null(q_12)), not_null(m_12));
                      {
                        t_12 = t;
                        if(((s_12 != NULL) && (s_12 != t_12)))
                          _fail(t_12);
                        else
                          s_12 = t_12;
                      }
                      t = not_null(s_12);
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
ATerm Let_2 (ATerm t, ATerm r_87 (ATerm), ATerm s_87 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym_Let_2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      {
        ATerm l_13 = NULL,n_13 = NULL;
        ATerm m_13 = NULL;
        t = SSLgetAnnotations(not_null(f_13));
        {
          m_13 = t;
          if(((l_13 != NULL) && (l_13 != m_13)))
            _fail(m_13);
          else
            l_13 = m_13;
        }
        {
          t = not_null(g_13);
          {
            ATerm p_13 = NULL;
            t = r_87(t);
            {
              n_13 = t;
              {
                t = not_null(h_13);
                {
                  ATerm r_13 = NULL;
                  t = s_87(t);
                  {
                    p_13 = t;
                    {
                      ATerm s_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_13), not_null(p_13)), not_null(l_13));
                      {
                        s_13 = t;
                        if(((r_13 != NULL) && (r_13 != s_13)))
                          _fail(s_13);
                        else
                          r_13 = s_13;
                      }
                      t = not_null(r_13);
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
ATerm sboundin_3 (ATerm t, ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, c_117, c_117);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm l_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, e_117, e_117, c_117);
            LocalPopChoice(n_7);
          }
        else
          {
            t = l_7;
            t = Rec_2(t, e_117, c_117);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_Rec_2))
    {
      b_14 = ATgetArgument(a_14, 0);
      c_14 = ATgetArgument(a_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(b_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_SDef_3))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      n_14 = ATgetArgument(k_14, 2);
      {
        t = not_null(m_14);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
            r_14 = t;
            i_14 :
            if(match_cons(r_14, sym_VarDec_2))
              {
                s_14 = ATgetArgument(r_14, 0);
                t_14 = ATgetArgument(r_14, 1);
                t = not_null(s_14);
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
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_Let_2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        t = not_null(c_15);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
            g_15 = t;
            z_14 :
            if(match_cons(g_15, sym_SDef_3))
              {
                h_15 = ATgetArgument(g_15, 0);
                i_15 = ATgetArgument(g_15, 1);
                j_15 = ATgetArgument(g_15, 2);
                t = not_null(h_15);
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
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        {
          ATerm r_7 = t;
          int t_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(t_7);
            }
          else
            {
              t = r_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm x_116 (ATerm))
{
  t = Scope_2(t, x_116, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym_DynamicRules_1))
    {
      v_15 = ATgetArgument(u_15, 0);
      {
        ATerm y_15 = NULL,a_16 = NULL;
        ATerm z_15 = NULL;
        t = SSLgetAnnotations(not_null(u_15));
        {
          z_15 = t;
          if(((y_15 != NULL) && (y_15 != z_15)))
            _fail(z_15);
          else
            y_15 = z_15;
        }
        {
          t = not_null(v_15);
          {
            ATerm c_16 = NULL;
            t = f_86(t);
            {
              a_16 = t;
              {
                ATerm d_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(a_16)), not_null(y_15));
                {
                  d_16 = t;
                  if(((c_16 != NULL) && (c_16 != d_16)))
                    _fail(d_16);
                  else
                    c_16 = d_16;
                }
                t = not_null(c_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm a_117 (ATerm))
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, a_117, y_116);
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      t = DynamicRules_1(t, y_116);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_DynamicRules_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        t = not_null(l_16);
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
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym_Var_1))
    {
      r_16 = ATgetArgument(q_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(r_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_105 (ATerm))
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      {
        t = not_null(x_16);
        {
          ATerm c_17 (ATerm t)
          {
            ATerm w_7 = t;
            int f_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_16);
                LocalPopChoice(f_8);
              }
            else
              {
                t = w_7;
                {
                  ATerm g_8 = t;
                  int l_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(y_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_105, g_1);
                      t = c_17(t);
                      LocalPopChoice(l_8);
                    }
                  else
                    {
                      t = g_8;
                      t = Cons_2(t, _id, c_17);
                    }
                }
              }
            return(t);
          }
          t = c_17(t);
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
ATerm UfShift_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  g_17 = t;
  e_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      f_17 :
      if(((ATgetType(i_17) == AT_LIST) && ((ATermList) i_17 != ATempty)))
        {
          j_17 = ATgetFirst((ATermList) i_17);
          k_17 = (ATerm) ATgetNext((ATermList) i_17);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_17)), not_null(j_17)), not_null(k_17));
        }
      else
        {
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  z_17 = t;
  x_17 :
  if(((ATgetType(z_17) == AT_LIST) && ((ATermList) z_17 != ATempty)))
    {
      a_18 = ATgetFirst((ATermList) z_17);
      d_18 = (ATerm) ATgetNext((ATermList) z_17);
      y_17 :
      if(match_cons(a_18, sym__2))
        {
          b_18 = ATgetArgument(a_18, 0);
          c_18 = ATgetArgument(a_18, 1);
          {
            ATerm h_18 = NULL,i_18 = NULL,o_18 = NULL,u_18 = NULL;
            ATerm m_8;
            m_8 = t;
            {
              ATerm j_18 = NULL;
              ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
              t = not_null(c_18);
              {
                j_18 = t;
                {
                  t = SSL_explode_term(not_null(j_18));
                  {
                    l_18 = t;
                    s_17 :
                    if(match_cons(l_18, sym__2))
                      {
                        m_18 = ATgetArgument(l_18, 0);
                        n_18 = ATgetArgument(l_18, 1);
                        {
                          if(((h_18 != NULL) && (h_18 != m_18)))
                            _fail(m_18);
                          else
                            h_18 = m_18;
                          if(((i_18 != NULL) && (i_18 != n_18)))
                            _fail(n_18);
                          else
                            i_18 = n_18;
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
            t = m_8;
            {
              ATerm n_8;
              n_8 = t;
              {
                ATerm p_18 = NULL;
                ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
                t = not_null(b_18);
                {
                  p_18 = t;
                  {
                    t = SSL_explode_term(not_null(p_18));
                    {
                      r_18 = t;
                      v_17 :
                      if(match_cons(r_18, sym__2))
                        {
                          s_18 = ATgetArgument(r_18, 0);
                          t_18 = ATgetArgument(r_18, 1);
                          {
                            if(((h_18 != NULL) && (h_18 != s_18)))
                              _fail(s_18);
                            else
                              h_18 = s_18;
                            if(((o_18 != NULL) && (o_18 != t_18)))
                              _fail(t_18);
                            else
                              o_18 = t_18;
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
              t = n_8;
              {
                ATerm v_18 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(i_18));
                {
                  t = zip_1(t, _id);
                  {
                    v_18 = t;
                    if(((u_18 != NULL) && (u_18 != v_18)))
                      _fail(v_18);
                    else
                      u_18 = v_18;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(d_18));
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
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  f_19 = t;
  d_19 :
  if(((ATgetType(f_19) == AT_LIST) && ((ATermList) f_19 != ATempty)))
    {
      g_19 = ATgetFirst((ATermList) f_19);
      j_19 = (ATerm) ATgetNext((ATermList) f_19);
      e_19 :
      if(match_cons(g_19, sym__2))
        {
          h_19 = ATgetArgument(g_19, 0);
          i_19 = ATgetArgument(g_19, 1);
          {
            ATerm l_19 = NULL;
            if(((h_19 != NULL) && (h_19 != i_19)))
              _fail(i_19);
            else
              h_19 = i_19;
            {
              if(((l_19 != NULL) && (l_19 != j_19)))
                _fail(j_19);
              else
                l_19 = j_19;
              t = not_null(l_19);
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
ATerm while_not_2 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm n_19 (ATerm t)
  {
    ATerm o_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = o_8;
        {
          t = s_99(t);
          t = n_19(t);
        }
      }
    return(t);
  }
  t = n_19(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm))
{
  t = u_99(t);
  t = while_not_2(t, v_99, w_99);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym__2))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      if(((r_19 != NULL) && (r_19 != s_19)))
        _fail(s_19);
      else
        r_19 = s_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_105 (ATerm), ATerm q_105 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(((ATgetType(y_19) == AT_LIST) && ((ATermList) y_19 != ATempty)))
    {
      z_19 = ATgetFirst((ATermList) y_19);
      a_20 = (ATerm) ATgetNext((ATermList) y_19);
      {
        t = q_105(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm d_20 = NULL;
            d_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(d_20));
              t = p_105(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(a_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm u_105 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        t = not_null(k_20);
        {
          ATerm p_20 (ATerm t)
          {
            ATerm d_9 = t;
            int e_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(e_9);
              }
            else
              {
                t = d_9;
                {
                  ATerm f_9 = t;
                  int g_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(l_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_105, i_1);
                      t = p_20(t);
                      LocalPopChoice(g_9);
                    }
                  else
                    {
                      t = f_9;
                      t = Cons_2(t, _id, p_20);
                    }
                }
              }
            return(t);
          }
          t = p_20(t);
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
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm r_20 = NULL;
          r_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_20));
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          ATerm f_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                ATerm h_10 = t;
                int i_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(i_10);
                  }
                else
                  {
                    t = h_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, m_1);
              LocalPopChoice(g_10);
            }
          else
            {
              t = f_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, j_1, k_1, l_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_20 (ATerm t)
  {
    ATerm j_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_101(t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = j_10;
        {
          ATerm t_10 = t;
          int y_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_20 = NULL;
              ATerm z_10;
              z_10 = t;
              {
                ATerm w_20 = NULL;
                t = g_101(t);
                {
                  w_20 = t;
                  if(((v_20 != NULL) && (v_20 != w_20)))
                    _fail(w_20);
                  else
                    v_20 = w_20;
                }
              }
              t = z_10;
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = not_null(v_20);
                    return(t);
                  }
                  t = split_2(t, x_20, p_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = h_101(t, n_1, x_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              LocalPopChoice(y_10);
            }
          else
            {
              t = t_10;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, r_1, union_0, x_20);
              }
            }
        }
      }
    return(t);
  }
  t = x_20(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  b_21 :
  if(match_cons(g_21, sym_LRule_1))
    {
      h_21 = ATgetArgument(g_21, 0);
      c_21 :
      if(match_cons(h_21, sym_Rule_3))
        {
          d_21 = ATgetArgument(h_21, 0);
          e_21 = ATgetArgument(h_21, 1);
          f_21 = ATgetArgument(h_21, 2);
          {
            t = not_null(d_21);
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
      if(match_cons(g_21, sym_Scope_2))
        {
          h_21 = ATgetArgument(g_21, 0);
          i_21 = ATgetArgument(g_21, 1);
          t = not_null(h_21);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm z_21 = NULL,a_22 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym_Var_1))
    {
      a_22 = ATgetArgument(z_21, 0);
      {
        ATerm e_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_22 = NULL,f_22 = NULL;
            ATerm e_22 = NULL;
            t = SSLgetAnnotations(not_null(z_21));
            {
              e_22 = t;
              if(((d_22 != NULL) && (d_22 != e_22)))
                _fail(e_22);
              else
                d_22 = e_22;
            }
            {
              t = not_null(a_22);
              {
                ATerm h_22 = NULL;
                t = s_0(t);
                {
                  f_22 = t;
                  {
                    ATerm i_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_22)), not_null(d_22));
                    {
                      i_22 = t;
                      if(((h_22 != NULL) && (h_22 != i_22)))
                        _fail(i_22);
                      else
                        h_22 = i_22;
                    }
                    t = not_null(h_22);
                  }
                }
              }
            }
            LocalPopChoice(n_11);
          }
        else
          {
            t = e_11;
            {
              ATerm l_22 = NULL,n_22 = NULL;
              ATerm m_22 = NULL;
              t = SSLgetAnnotations(not_null(z_21));
              {
                m_22 = t;
                if(((l_22 != NULL) && (l_22 != m_22)))
                  _fail(m_22);
                else
                  l_22 = m_22;
              }
              {
                t = not_null(a_22);
                {
                  ATerm p_22 = NULL;
                  t = s_0(t);
                  {
                    n_22 = t;
                    {
                      ATerm q_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_22)), not_null(l_22));
                      {
                        q_22 = t;
                        if(((p_22 != NULL) && (p_22 != q_22)))
                          _fail(q_22);
                        else
                          p_22 = q_22;
                      }
                      t = not_null(p_22);
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
ATerm DistBinding_2 (ATerm t, ATerm b_103 (ATerm), ATerm c_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym__3))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      g_23 = ATgetArgument(d_23, 2);
      {
        t = not_null(e_23);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm k_23 = NULL;
            k_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), not_null(g_23));
              t = b_103(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm m_23 = NULL;
            m_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(f_23));
              t = b_103(t);
            }
            return(t);
          }
          t = c_103(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm h_103 (ATerm), ATerm i_103 (ATerm, ATerm (ATerm)))
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym__2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      {
        ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,l_24 = NULL;
        ATerm o_11;
        o_11 = t;
        {
          ATerm g_24 = NULL;
          t = not_null(z_23);
          {
            ATerm h_24 = NULL;
            t = h_103(t);
            {
              g_24 = t;
              {
                if(((d_24 != NULL) && (d_24 != g_24)))
                  _fail(g_24);
                else
                  d_24 = g_24;
                {
                  ATerm i_24 = NULL,k_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    h_24 = t;
                    {
                      if(((e_24 != NULL) && (e_24 != h_24)))
                        _fail(h_24);
                      else
                        e_24 = h_24;
                      {
                        ATerm j_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), not_null(e_24));
                        {
                          t = zip_1(t, _id);
                          {
                            j_24 = t;
                            if(((i_24 != NULL) && (i_24 != j_24)))
                              _fail(j_24);
                            else
                              i_24 = j_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(a_24));
                          {
                            t = conc_0(t);
                            {
                              k_24 = t;
                              if(((f_24 != NULL) && (f_24 != k_24)))
                                _fail(k_24);
                              else
                                f_24 = k_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = o_11;
        {
          ATerm m_24 = NULL;
          t = not_null(z_23);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(e_24);
              return(t);
            }
            t = i_103(t, v_1);
            {
              m_24 = t;
              if(((l_24 != NULL) && (l_24 != m_24)))
                _fail(m_24);
              else
                l_24 = m_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_24), not_null(a_24), not_null(f_24));
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
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  w_24 = t;
  u_24 :
  if(match_cons(w_24, sym__2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      v_24 :
      if(((ATgetType(y_24) == AT_LIST) && ((ATermList) y_24 != ATempty)))
        {
          z_24 = ATgetFirst((ATermList) y_24);
          a_25 = (ATerm) ATgetNext((ATermList) y_24);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), not_null(a_25));
        }
      else
        {
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
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  i_25 = t;
  f_25 :
  if(match_cons(i_25, sym__2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      g_25 :
      if(((ATgetType(k_25) == AT_LIST) && ((ATermList) k_25 != ATempty)))
        {
          l_25 = ATgetFirst((ATermList) k_25);
          o_25 = (ATerm) ATgetNext((ATermList) k_25);
          h_25 :
          if(match_cons(l_25, sym__2))
            {
              m_25 = ATgetArgument(l_25, 0);
              n_25 = ATgetArgument(l_25, 1);
              {
                ATerm q_25 = NULL;
                if(((j_25 != NULL) && (j_25 != m_25)))
                  _fail(m_25);
                else
                  j_25 = m_25;
                {
                  if(((q_25 != NULL) && (q_25 != n_25)))
                    _fail(n_25);
                  else
                    q_25 = n_25;
                  t = not_null(q_25);
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
  ATerm p_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = p_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_102 (ATerm, ATerm (ATerm)))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        t = not_null(w_25);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(x_25);
              return(t);
            }
            t = split_2(t, _id, x_1);
            t = lookup_0(t);
            return(t);
          }
          t = v_102(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm a_102 (ATerm))
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      {
        t = not_null(f_26);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm j_26 = NULL;
            j_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(g_26));
              t = a_102(t);
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
ATerm env_alltd_1 (ATerm t, ATerm f_102 (ATerm))
{
  ATerm n_26 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_102(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = all_dist_1(t, n_26);
      }
    return(t);
  }
  t = n_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_103 (ATerm, ATerm (ATerm)), ATerm k_103 (ATerm), ATerm l_103 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_103 (ATerm, ATerm (ATerm)))
{
  ATerm p_26 = NULL;
  p_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), (ATerm) ATempty);
    {
      ATerm s_26 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm y_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, j_103);
              LocalPopChoice(z_11);
            }
          else
            {
              t = y_11;
              {
                t = RnBinding_2(t, k_103, m_103);
                t = DistBinding_2(t, s_26, l_103);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_1);
        return(t);
      }
      t = s_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm t_26 (ATerm t, ATerm u_26 (ATerm))
  {
    t = Scope_2(t, u_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, t_26);
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
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  ATerm m_29 (ATerm t)
  {
    ATerm b_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm a_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        b_28 = t;
        b_27 :
        if(match_cons(b_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_w_6;
    return(t);
  }
  ATerm n_29 (ATerm t)
  {
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        h_28 = t;
        h_27 :
        if(match_cons(h_28, sym_Defined_3))
          {
            i_28 = ATgetArgument(h_28, 0);
            j_28 = ATgetArgument(h_28, 1);
            k_28 = ATgetArgument(h_28, 2);
            i_27 :
            if(match_string(i_28, "j_0"))
              {
                ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
                if(((d_28 != NULL) && (d_28 != j_28)))
                  _fail(j_28);
                else
                  d_28 = j_28;
                {
                  if(((y_27 != NULL) && (y_27 != k_28)))
                    _fail(k_28);
                  else
                    y_27 = k_28;
                  {
                    t = not_null(d_28);
                    {
                      t = strename_0(t);
                      {
                        l_28 = t;
                        f_27 :
                        if(match_cons(l_28, sym_SDef_3))
                          {
                            m_28 = ATgetArgument(l_28, 0);
                            n_28 = ATgetArgument(l_28, 1);
                            q_28 = ATgetArgument(l_28, 2);
                            g_27 :
                            if(((ATgetType(n_28) == AT_LIST) && ((ATermList) n_28 != ATempty)))
                              {
                                o_28 = ATgetFirst((ATermList) n_28);
                                p_28 = (ATerm) ATgetNext((ATermList) n_28);
                                {
                                  ATerm r_28 = NULL;
                                  if(((y_27 != NULL) && (y_27 != m_28)))
                                    _fail(m_28);
                                  else
                                    y_27 = m_28;
                                  {
                                    if(((e_28 != NULL) && (e_28 != n_28)))
                                      _fail(n_28);
                                    else
                                      e_28 = n_28;
                                    {
                                      if(((f_28 != NULL) && (f_28 != q_28)))
                                        _fail(q_28);
                                      else
                                        f_28 = q_28;
                                      {
                                        t = new_0(t);
                                        {
                                          r_28 = t;
                                          {
                                            if(((g_28 != NULL) && (g_28 != r_28)))
                                              _fail(r_28);
                                            else
                                              g_28 = r_28;
                                            {
                                              ATerm b_12;
                                              b_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(y_27)), term_c_12);
                                                {
                                                  ATerm c_2 (ATerm t)
                                                  {
                                                    t = term_a_12;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, c_2);
                                                }
                                              }
                                              t = b_12;
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
              }
            else
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_28), not_null(e_28), not_null(f_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_28)), (ATerm) ATempty));
    return(t);
  }
  ATerm o_29 (ATerm t)
  {
    ATerm t_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        t_28 = t;
        k_27 :
        if(match_cons(t_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_w_6;
    return(t);
  }
  ATerm p_29 (ATerm t)
  {
    ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
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
        if(match_cons(a_29, sym_Defined_3))
          {
            b_29 = ATgetArgument(a_29, 0);
            c_29 = ATgetArgument(a_29, 1);
            d_29 = ATgetArgument(a_29, 2);
            q_27 :
            if(match_string(b_29, "i_0"))
              {
                ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
                if(((w_28 != NULL) && (w_28 != c_29)))
                  _fail(c_29);
                else
                  w_28 = c_29;
                {
                  if(((y_27 != NULL) && (y_27 != d_29)))
                    _fail(d_29);
                  else
                    y_27 = d_29;
                  {
                    t = not_null(w_28);
                    {
                      t = strename_0(t);
                      {
                        e_29 = t;
                        o_27 :
                        if(match_cons(e_29, sym_SDef_3))
                          {
                            f_29 = ATgetArgument(e_29, 0);
                            g_29 = ATgetArgument(e_29, 1);
                            h_29 = ATgetArgument(e_29, 2);
                            {
                              ATerm i_29 = NULL;
                              if(((y_27 != NULL) && (y_27 != f_29)))
                                _fail(f_29);
                              else
                                y_27 = f_29;
                              {
                                if(((x_28 != NULL) && (x_28 != g_29)))
                                  _fail(g_29);
                                else
                                  x_28 = g_29;
                                {
                                  if(((y_28 != NULL) && (y_28 != h_29)))
                                    _fail(h_29);
                                  else
                                    y_28 = h_29;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(x_28), not_null(z_27), not_null(y_28));
                                    {
                                      t = substitute_args_0(t);
                                      {
                                        i_29 = t;
                                        {
                                          if(((z_28 != NULL) && (z_28 != i_29)))
                                            _fail(i_29);
                                          else
                                            z_28 = i_29;
                                          {
                                            ATerm d_12;
                                            d_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(y_27)), term_c_12);
                                              {
                                                ATerm f_2 (ATerm t)
                                                {
                                                  t = term_a_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, f_2);
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
              }
            else
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
    t = not_null(z_28);
    return(t);
  }
  ATerm q_29 (ATerm t)
  {
    ATerm l_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm g_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = rewrite_1(t, g_2);
      {
        l_29 = t;
        s_27 :
        if(match_cons(l_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_w_6;
    return(t);
  }
  w_27 = t;
  t_27 :
  if(match_cons(w_27, sym_Call_2))
    {
      x_27 = ATgetArgument(w_27, 0);
      z_27 = ATgetArgument(w_27, 1);
      u_27 :
      if(match_cons(x_27, sym_SVar_1))
        {
          y_27 = ATgetArgument(x_27, 0);
          v_27 :
          if(((ATermList) z_27 == ATempty))
            {
              {
                ATerm e_12 = t;
                int j_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_29(t);
                    LocalPopChoice(j_12);
                  }
                else
                  {
                    t = e_12;
                    {
                      ATerm k_12 = t;
                      int l_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_29(t);
                          LocalPopChoice(l_12);
                        }
                      else
                        {
                          t = k_12;
                          {
                            ATerm p_12 = t;
                            int r_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = o_29(t);
                                LocalPopChoice(r_12);
                              }
                            else
                              {
                                t = p_12;
                                {
                                  ATerm u_12 = t;
                                  int v_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_29(t);
                                      LocalPopChoice(v_12);
                                    }
                                  else
                                    {
                                      t = u_12;
                                      t = q_29(t);
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
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_29(t);
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  {
                    ATerm y_12 = t;
                    int z_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_29(t);
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
                              t = p_29(t);
                              LocalPopChoice(b_13);
                            }
                          else
                            {
                              t = a_13;
                              t = q_29(t);
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
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,h_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_SDef_3))
    {
      d_30 = ATgetArgument(c_30, 0);
      e_30 = ATgetArgument(c_30, 1);
      h_30 = ATgetArgument(c_30, 2);
      {
        ATerm c_13;
        c_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_30)), term_c_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_a_12;
              return(t);
            }
            t = assert_1(t, h_2);
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
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(((ATgetType(r_30) == AT_LIST) && ((ATermList) r_30 != ATempty)))
    {
      s_30 = ATgetFirst((ATermList) r_30);
      t_30 = (ATerm) ATgetNext((ATermList) r_30);
      t = not_null(t_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym__2))
    {
      b_31 = ATgetArgument(a_31, 0);
      c_31 = ATgetArgument(a_31, 1);
      {
        ATerm d_13;
        d_13 = t;
        {
          ATerm f_31 = NULL;
          ATerm g_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(c_31));
          {
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
                t = (ATerm) ATempty;
              }
            {
              g_31 = t;
              if(((f_31 != NULL) && (f_31 != g_31)))
                _fail(g_31);
              else
                f_31 = g_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_31), not_null(c_31), not_null(f_31));
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
ATerm end_scope_1 (ATerm t, ATerm h_96 (ATerm))
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  ATerm k_13;
  k_13 = t;
  {
    ATerm q_31 = NULL;
    ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
    t = h_96(t);
    {
      q_31 = t;
      {
        if(((o_31 != NULL) && (o_31 != q_31)))
          _fail(q_31);
        else
          o_31 = q_31;
        {
          ATerm o_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), term_t_13);
              t = table_get_0(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = o_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_31 = t;
            m_31 :
            if(((ATgetType(r_31) == AT_LIST) && ((ATermList) r_31 != ATempty)))
              {
                s_31 = ATgetFirst((ATermList) r_31);
                t_31 = (ATerm) ATgetNext((ATermList) r_31);
                {
                  if(((p_31 != NULL) && (p_31 != s_31)))
                    _fail(s_31);
                  else
                    p_31 = s_31;
                  {
                    if(((n_31 != NULL) && (n_31 != t_31)))
                      _fail(t_31);
                    else
                      n_31 = t_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_31), term_t_13, not_null(n_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(p_31);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm u_31 = NULL;
                              u_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), not_null(u_31));
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
  t = k_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_112 (ATerm), ATerm a_113 (ATerm))
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_112(t);
      t = a_113(t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        t = a_113(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_96 (ATerm))
{
  ATerm b_32 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm c_32 = NULL;
    ATerm d_32 = NULL;
    t = g_96(t);
    {
      c_32 = t;
      {
        if(((b_32 != NULL) && (b_32 != c_32)))
          _fail(c_32);
        else
          b_32 = c_32;
        {
          ATerm e_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), term_t_13);
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
                t = (ATerm) ATempty;
              }
            {
              e_32 = t;
              if(((d_32 != NULL) && (d_32 != e_32)))
                _fail(e_32);
              else
                d_32 = e_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_32), term_t_13, (ATerm) ATinsert(CheckATermList(not_null(d_32)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = w_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  t = begin_scope_1(t, i_96);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, i_96);
      return(t);
    }
    t = restore_always_2(t, j_96, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_a_12;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_96 (ATerm))
{
  ATerm v_33 = NULL,f_34 = NULL,g_34 = NULL;
  v_33 = t;
  q_33 :
  if(match_cons(v_33, sym__2))
    {
      f_34 = ATgetArgument(v_33, 0);
      g_34 = ATgetArgument(v_33, 1);
      {
        ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
        ATerm f_14;
        f_14 = t;
        {
          ATerm m_34 = NULL;
          ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
          t = k_96(t);
          {
            m_34 = t;
            {
              if(((j_34 != NULL) && (j_34 != m_34)))
                _fail(m_34);
              else
                j_34 = m_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_34), not_null(f_34), not_null(g_34));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_14 = t;
                    int h_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_34), term_t_13);
                        t = table_get_0(t);
                        LocalPopChoice(h_14);
                      }
                    else
                      {
                        t = g_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_34 = t;
                      p_33 :
                      if(((ATgetType(n_34) == AT_LIST) && ((ATermList) n_34 != ATempty)))
                        {
                          o_34 = ATgetFirst((ATermList) n_34);
                          p_34 = (ATerm) ATgetNext((ATermList) n_34);
                          {
                            if(((k_34 != NULL) && (k_34 != o_34)))
                              _fail(o_34);
                            else
                              k_34 = o_34;
                            {
                              if(((l_34 != NULL) && (l_34 != p_34)))
                                _fail(p_34);
                              else
                                l_34 = p_34;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_34), term_t_13, (ATerm) ATinsert(CheckATermList(not_null(l_34)), (ATerm) ATinsert(CheckATermList(not_null(k_34)), not_null(f_34))));
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
        t = f_14;
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
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym_SDef_3))
    {
      w_34 = ATgetArgument(v_34, 0);
      x_34 = ATgetArgument(v_34, 1);
      y_34 = ATgetArgument(v_34, 2);
      {
        ATerm o_14;
        o_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_p_14, not_null(v_34), not_null(w_34)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_a_12;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = o_14;
        {
          ATerm q_14;
          q_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_u_14, not_null(v_34), not_null(w_34)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_a_12;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = q_14;
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
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm))
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_104(t);
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
        g_35 = t;
        f_35 :
        if(((ATgetType(g_35) == AT_LIST) && ((ATermList) g_35 != ATempty)))
          {
            h_35 = ATgetFirst((ATermList) g_35);
            i_35 = (ATerm) ATgetNext((ATermList) g_35);
            {
              ATerm l_35 = NULL,n_35 = NULL;
              ATerm y_14;
              y_14 = t;
              {
                ATerm m_35 = NULL;
                t = not_null(h_35);
                {
                  t = m_104(t);
                  {
                    m_35 = t;
                    if(((l_35 != NULL) && (l_35 != m_35)))
                      _fail(m_35);
                    else
                      l_35 = m_35;
                  }
                }
              }
              t = y_14;
              {
                ATerm o_35 = NULL;
                t = not_null(i_35);
                {
                  t = foldr_3(t, k_104, l_104, m_104);
                  {
                    o_35 = t;
                    if(((n_35 != NULL) && (n_35 != o_35)))
                      _fail(o_35);
                    else
                      n_35 = o_35;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), not_null(n_35));
                  t = l_104(t);
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
  ATerm w_35 = NULL;
  ATerm y_35 = NULL;
  w_35 = t;
  {
    ATerm z_35 = NULL;
    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
    t = not_null(w_35);
    {
      z_35 = t;
      {
        t = SSL_explode_term(not_null(z_35));
        {
          b_36 = t;
          v_35 :
          if(match_cons(b_36, sym__2))
            {
              c_36 = ATgetArgument(b_36, 0);
              d_36 = ATgetArgument(b_36, 1);
              if(((y_35 != NULL) && (y_35 != d_36)))
                _fail(d_36);
              else
                y_35 = d_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_35);
      t = foldr_3(t, c_106, d_106, e_106);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_36 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_k_15;
          return(t);
        }
        t = crush_3(t, o_2, add_0, h_36);
        return(t);
      }
      t = h_36(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm p_2 (ATerm t)
        {
          t = term_k_15;
          return(t);
        }
        t = crush_3(t, p_2, add_0, term_size_0);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym_LChoice_2))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      {
        ATerm u_36 = NULL,w_36 = NULL;
        ATerm v_36 = NULL;
        t = SSLgetAnnotations(not_null(o_36));
        {
          v_36 = t;
          if(((u_36 != NULL) && (u_36 != v_36)))
            _fail(v_36);
          else
            u_36 = v_36;
        }
        {
          t = not_null(p_36);
          {
            ATerm y_36 = NULL;
            t = e_87(t);
            {
              w_36 = t;
              {
                t = not_null(q_36);
                {
                  ATerm a_37 = NULL;
                  t = f_87(t);
                  {
                    y_36 = t;
                    {
                      ATerm b_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(w_36), not_null(y_36)), not_null(u_36));
                      {
                        b_37 = t;
                        if(((a_37 != NULL) && (a_37 != b_37)))
                          _fail(b_37);
                        else
                          a_37 = b_37;
                      }
                      t = not_null(a_37);
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
ATerm Choice_2 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm))
{
  ATerm n_37 = NULL,p_37 = NULL,q_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym_Choice_2))
    {
      p_37 = ATgetArgument(n_37, 0);
      q_37 = ATgetArgument(n_37, 1);
      {
        ATerm u_37 = NULL,w_37 = NULL;
        ATerm v_37 = NULL;
        t = SSLgetAnnotations(not_null(n_37));
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
            t = c_87(t);
            {
              w_37 = t;
              {
                t = not_null(q_37);
                {
                  ATerm a_38 = NULL;
                  t = d_87(t);
                  {
                    y_37 = t;
                    {
                      ATerm b_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(w_37), not_null(y_37)), not_null(u_37));
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
ATerm Cong_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Cong_2))
    {
      o_38 = ATgetArgument(n_38, 0);
      p_38 = ATgetArgument(n_38, 1);
      {
        ATerm t_38 = NULL,v_38 = NULL;
        ATerm u_38 = NULL;
        t = SSLgetAnnotations(not_null(n_38));
        {
          u_38 = t;
          if(((t_38 != NULL) && (t_38 != u_38)))
            _fail(u_38);
          else
            t_38 = u_38;
        }
        {
          t = not_null(o_38);
          {
            ATerm x_38 = NULL;
            t = h_88(t);
            {
              v_38 = t;
              {
                t = not_null(p_38);
                {
                  ATerm z_38 = NULL;
                  t = i_88(t);
                  {
                    x_38 = t;
                    {
                      ATerm a_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(v_38), not_null(x_38)), not_null(t_38));
                      {
                        a_39 = t;
                        if(((z_38 != NULL) && (z_38 != a_39)))
                          _fail(a_39);
                        else
                          z_38 = a_39;
                      }
                      t = not_null(z_38);
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
ATerm Match_1 (ATerm t, ATerm p_88 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_Match_1))
    {
      m_39 = ATgetArgument(l_39, 0);
      {
        ATerm p_39 = NULL,r_39 = NULL;
        ATerm q_39 = NULL;
        t = SSLgetAnnotations(not_null(l_39));
        {
          q_39 = t;
          if(((p_39 != NULL) && (p_39 != q_39)))
            _fail(q_39);
          else
            p_39 = q_39;
        }
        {
          t = not_null(m_39);
          {
            ATerm t_39 = NULL;
            t = p_88(t);
            {
              r_39 = t;
              {
                ATerm u_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(r_39)), not_null(p_39));
                {
                  u_39 = t;
                  if(((t_39 != NULL) && (t_39 != u_39)))
                    _fail(u_39);
                  else
                    t_39 = u_39;
                }
                t = not_null(t_39);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm a_87 (ATerm), ATerm b_87 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_Seq_2))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      {
        ATerm l_40 = NULL,n_40 = NULL;
        ATerm m_40 = NULL;
        t = SSLgetAnnotations(not_null(f_40));
        {
          m_40 = t;
          if(((l_40 != NULL) && (l_40 != m_40)))
            _fail(m_40);
          else
            l_40 = m_40;
        }
        {
          t = not_null(g_40);
          {
            ATerm p_40 = NULL;
            t = a_87(t);
            {
              n_40 = t;
              {
                t = not_null(h_40);
                {
                  ATerm r_40 = NULL;
                  t = b_87(t);
                  {
                    p_40 = t;
                    {
                      ATerm s_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(n_40), not_null(p_40)), not_null(l_40));
                      {
                        s_40 = t;
                        if(((r_40 != NULL) && (r_40 != s_40)))
                          _fail(s_40);
                        else
                          r_40 = s_40;
                      }
                      t = not_null(r_40);
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
ATerm Scope_2 (ATerm t, ATerm t_88 (ATerm), ATerm u_88 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym_Scope_2))
    {
      z_41 = ATgetArgument(y_41, 0);
      a_42 = ATgetArgument(y_41, 1);
      {
        ATerm e_42 = NULL,g_42 = NULL;
        ATerm f_42 = NULL;
        t = SSLgetAnnotations(not_null(y_41));
        {
          f_42 = t;
          if(((e_42 != NULL) && (e_42 != f_42)))
            _fail(f_42);
          else
            e_42 = f_42;
        }
        {
          t = not_null(z_41);
          {
            ATerm n_42 = NULL;
            t = t_88(t);
            {
              g_42 = t;
              {
                t = not_null(a_42);
                {
                  ATerm p_42 = NULL;
                  t = u_88(t);
                  {
                    n_42 = t;
                    {
                      ATerm q_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(g_42), not_null(n_42)), not_null(e_42));
                      {
                        q_42 = t;
                        if(((p_42 != NULL) && (p_42 != q_42)))
                          _fail(q_42);
                        else
                          p_42 = q_42;
                      }
                      t = not_null(p_42);
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
ATerm Build_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym_Build_1))
    {
      z_43 = ATgetArgument(y_43, 0);
      {
        ATerm c_44 = NULL,e_44 = NULL;
        ATerm d_44 = NULL;
        t = SSLgetAnnotations(not_null(y_43));
        {
          d_44 = t;
          if(((c_44 != NULL) && (c_44 != d_44)))
            _fail(d_44);
          else
            c_44 = d_44;
        }
        {
          t = not_null(z_43);
          {
            ATerm g_44 = NULL;
            t = q_88(t);
            {
              e_44 = t;
              {
                ATerm h_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(e_44)), not_null(c_44));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm r_44 = NULL,s_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym_SVar_1))
    {
      s_44 = ATgetArgument(r_44, 0);
      {
        ATerm v_44 = NULL,x_44 = NULL;
        ATerm w_44 = NULL;
        t = SSLgetAnnotations(not_null(r_44));
        {
          w_44 = t;
          if(((v_44 != NULL) && (v_44 != w_44)))
            _fail(w_44);
          else
            v_44 = w_44;
        }
        {
          t = not_null(s_44);
          {
            ATerm z_44 = NULL;
            t = o_87(t);
            {
              x_44 = t;
              {
                ATerm a_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(x_44)), not_null(v_44));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm))
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym_Call_2))
    {
      m_45 = ATgetArgument(l_45, 0);
      n_45 = ATgetArgument(l_45, 1);
      {
        ATerm r_45 = NULL,t_45 = NULL;
        ATerm s_45 = NULL;
        t = SSLgetAnnotations(not_null(l_45));
        {
          s_45 = t;
          if(((r_45 != NULL) && (r_45 != s_45)))
            _fail(s_45);
          else
            r_45 = s_45;
        }
        {
          t = not_null(m_45);
          {
            ATerm v_45 = NULL;
            t = d_88(t);
            {
              t_45 = t;
              {
                t = not_null(n_45);
                {
                  ATerm x_45 = NULL;
                  t = e_88(t);
                  {
                    v_45 = t;
                    {
                      ATerm y_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(t_45), not_null(v_45)), not_null(r_45));
                      {
                        y_45 = t;
                        if(((x_45 != NULL) && (x_45 != y_45)))
                          _fail(y_45);
                        else
                          x_45 = y_45;
                      }
                      t = not_null(x_45);
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
  ATerm j_47 = NULL;
  j_47 = t;
  q_46 :
  if(match_cons(j_47, sym_Fail_0))
    {
      ATerm l_47 = NULL,n_47 = NULL;
      ATerm l_15;
      l_15 = t;
      {
        ATerm m_47 = NULL;
        t = SSLgetAnnotations(not_null(j_47));
        {
          m_47 = t;
          if(((l_47 != NULL) && (l_47 != m_47)))
            _fail(m_47);
          else
            l_47 = m_47;
        }
      }
      t = l_15;
      {
        ATerm o_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(l_47));
        {
          o_47 = t;
          if(((n_47 != NULL) && (n_47 != o_47)))
            _fail(o_47);
          else
            n_47 = o_47;
        }
        t = not_null(n_47);
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
  ATerm w_47 = NULL;
  w_47 = t;
  v_47 :
  if(match_cons(w_47, sym_Id_0))
    {
      ATerm y_47 = NULL,a_48 = NULL;
      ATerm m_15;
      m_15 = t;
      {
        ATerm z_47 = NULL;
        t = SSLgetAnnotations(not_null(w_47));
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
      }
      t = m_15;
      {
        ATerm b_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(y_47));
        {
          b_48 = t;
          if(((a_48 != NULL) && (a_48 != b_48)))
            _fail(b_48);
          else
            a_48 = b_48;
        }
        t = not_null(a_48);
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
  ATerm m_48 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
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
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = r_15;
                    {
                      ATerm w_15 = t;
                      int x_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(x_15);
                        }
                      else
                        {
                          t = w_15;
                          {
                            ATerm b_16 = t;
                            int e_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(e_16);
                              }
                            else
                              {
                                t = b_16;
                                {
                                  ATerm f_16 = t;
                                  int g_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      LocalPopChoice(g_16);
                                    }
                                  else
                                    {
                                      t = f_16;
                                      {
                                        ATerm h_16 = t;
                                        int i_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            LocalPopChoice(i_16);
                                          }
                                        else
                                          {
                                            t = h_16;
                                            {
                                              ATerm m_16 = t;
                                              int n_16 = stack_ptr;
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
                                                  LocalPopChoice(n_16);
                                                }
                                              else
                                                {
                                                  t = m_16;
                                                  {
                                                    ATerm o_16 = t;
                                                    int s_16 = stack_ptr;
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
                                                        LocalPopChoice(s_16);
                                                      }
                                                    else
                                                      {
                                                        t = o_16;
                                                        {
                                                          ATerm t_16 = t;
                                                          int u_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(u_16);
                                                            }
                                                          else
                                                            {
                                                              t = t_16;
                                                              {
                                                                ATerm z_16 = t;
                                                                int a_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, m_48, m_48);
                                                                    LocalPopChoice(a_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_16;
                                                                    t = LChoice_2(t, m_48, m_48);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = m_48(t);
  {
    ATerm b_17;
    b_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_d_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = b_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm r_114 (ATerm))
{
  ATerm n_48 (ATerm t)
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_114(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = _one(t, n_48);
      }
    return(t);
  }
  t = n_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  v_48 = t;
  u_48 :
  if(match_cons(v_48, sym_SDef_3))
    {
      w_48 = ATgetArgument(v_48, 0);
      x_48 = ATgetArgument(v_48, 1);
      y_48 = ATgetArgument(v_48, 2);
      {
        ATerm i_49 = NULL,k_49 = NULL;
        ATerm j_49 = NULL;
        t = SSLgetAnnotations(not_null(v_48));
        {
          j_49 = t;
          if(((i_49 != NULL) && (i_49 != j_49)))
            _fail(j_49);
          else
            i_49 = j_49;
        }
        {
          t = not_null(w_48);
          {
            ATerm o_49 = NULL;
            t = t_87(t);
            {
              k_49 = t;
              {
                t = not_null(x_48);
                {
                  ATerm q_49 = NULL;
                  t = u_87(t);
                  {
                    o_49 = t;
                    {
                      t = not_null(y_48);
                      {
                        ATerm s_49 = NULL;
                        t = v_87(t);
                        {
                          q_49 = t;
                          {
                            ATerm t_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(k_49), not_null(o_49), not_null(q_49)), not_null(i_49));
                            {
                              t_49 = t;
                              if(((s_49 != NULL) && (s_49 != t_49)))
                                _fail(t_49);
                              else
                                s_49 = t_49;
                            }
                            t = not_null(s_49);
                          }
                        }
                      }
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
  ATerm h_50 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm j_50 = NULL;
    ATerm n_17 = t;
    if((PushChoice() == 0))
      {
        ATerm i_50 = NULL;
        i_50 = t;
        b_50 :
        if(!(match_string(i_50, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_17;
      }
    {
      j_50 = t;
      if(((h_50 != NULL) && (h_50 != j_50)))
        _fail(j_50);
      else
        h_50 = j_50;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm o_17;
    o_17 = t;
    {
      ATerm p_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
            k_50 = t;
            e_50 :
            if(match_cons(k_50, sym_Call_2))
              {
                l_50 = ATgetArgument(k_50, 0);
                n_50 = ATgetArgument(k_50, 1);
                f_50 :
                if(match_cons(l_50, sym_SVar_1))
                  {
                    m_50 = ATgetArgument(l_50, 0);
                    g_50 :
                    if(((ATermList) n_50 == ATempty))
                      {
                        if(((h_50 != NULL) && (h_50 != m_50)))
                          _fail(m_50);
                        else
                          h_50 = m_50;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          t = p_17;
        }
    }
    t = o_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym_Cong_2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      {
        ATerm m_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,w_52 = NULL,y_52 = NULL,a_53 = NULL;
        ATerm q_17;
        q_17 = t;
        {
          ATerm z_51 = NULL;
          t = not_null(j_51);
          {
            ATerm e_52 = NULL;
            t = map_1(t, new_0);
            {
              z_51 = t;
              {
                if(((w_51 != NULL) && (w_51 != z_51)))
                  _fail(z_51);
                else
                  w_51 = z_51;
                {
                  t = not_null(w_51);
                  {
                    ATerm g_52 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm a_52 = NULL;
                      ATerm b_52 = NULL;
                      b_52 = t;
                      if(((a_52 != NULL) && (a_52 != b_52)))
                        _fail(b_52);
                      else
                        a_52 = b_52;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_52));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      e_52 = t;
                      {
                        if(((m_51 != NULL) && (m_51 != e_52)))
                          _fail(e_52);
                        else
                          m_51 = e_52;
                        {
                          ATerm h_52 = NULL;
                          t = new_0(t);
                          {
                            g_52 = t;
                            {
                              if(((u_51 != NULL) && (u_51 != g_52)))
                                _fail(g_52);
                              else
                                u_51 = g_52;
                              {
                                t = not_null(j_51);
                                {
                                  ATerm k_52 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    h_52 = t;
                                    {
                                      if(((x_51 != NULL) && (x_51 != h_52)))
                                        _fail(h_52);
                                      else
                                        x_51 = h_52;
                                      {
                                        t = not_null(x_51);
                                        {
                                          ATerm l_52 = NULL,v_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm i_52 = NULL;
                                            ATerm j_52 = NULL;
                                            j_52 = t;
                                            if(((i_52 != NULL) && (i_52 != j_52)))
                                              _fail(j_52);
                                            else
                                              i_52 = j_52;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_52));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            k_52 = t;
                                            {
                                              if(((v_51 != NULL) && (v_51 != k_52)))
                                                _fail(k_52);
                                              else
                                                v_51 = k_52;
                                              {
                                                ATerm m_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_51), not_null(x_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    m_52 = t;
                                                    if(((l_52 != NULL) && (l_52 != m_52)))
                                                      _fail(m_52);
                                                    else
                                                      l_52 = m_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_52), not_null(j_51));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
                                                      n_52 = t;
                                                      a_51 :
                                                      if(match_cons(n_52, sym__2))
                                                        {
                                                          o_52 = ATgetArgument(n_52, 0);
                                                          r_52 = ATgetArgument(n_52, 1);
                                                          b_51 :
                                                          if(match_cons(o_52, sym__2))
                                                            {
                                                              p_52 = ATgetArgument(o_52, 0);
                                                              q_52 = ATgetArgument(o_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_52)))));
                                                            }
                                                          else
                                                            {
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
                                                      v_52 = t;
                                                      if(((y_51 != NULL) && (y_51 != v_52)))
                                                        _fail(v_52);
                                                      else
                                                        y_51 = v_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = q_17;
        {
          ATerm r_17;
          r_17 = t;
          {
            ATerm x_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_51), not_null(x_51));
            {
              t = conc_0(t);
              {
                x_52 = t;
                if(((w_52 != NULL) && (w_52 != x_52)))
                  _fail(x_52);
                else
                  w_52 = x_52;
              }
            }
          }
          t = r_17;
          {
            ATerm t_17;
            t_17 = t;
            {
              ATerm z_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_51), not_null(m_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_51))));
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
            t = t_17;
            {
              ATerm b_53 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_51), not_null(v_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_51))));
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
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_52)), not_null(u_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_51)), not_null(a_53))));
            }
          }
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
  ATerm g_54 = NULL,h_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym_Build_1))
    {
      h_54 = ATgetArgument(g_54, 0);
      {
        ATerm u_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
            ATerm n_54 = NULL;
            ATerm t_54 = NULL;
            t = new_0(t);
            {
              n_54 = t;
              {
                if(((l_54 != NULL) && (l_54 != n_54)))
                  _fail(n_54);
                else
                  l_54 = n_54;
                {
                  t = not_null(h_54);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm o_54 = NULL,r_54 = NULL,s_54 = NULL;
                      o_54 = t;
                      v_53 :
                      if(match_cons(o_54, sym_Anno_2))
                        {
                          r_54 = ATgetArgument(o_54, 0);
                          s_54 = ATgetArgument(o_54, 1);
                          {
                            if(((j_54 != NULL) && (j_54 != r_54)))
                              _fail(r_54);
                            else
                              j_54 = r_54;
                            {
                              if(((k_54 != NULL) && (k_54 != s_54)))
                                _fail(s_54);
                              else
                                k_54 = s_54;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_54));
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
                      t_54 = t;
                      if(((m_54 != NULL) && (m_54 != t_54)))
                        _fail(t_54);
                      else
                        m_54 = t_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_54)), not_null(j_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_54))));
            LocalPopChoice(w_17);
          }
        else
          {
            t = u_17;
            {
              ATerm f_18 = t;
              int g_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
                  ATerm e_55 = NULL;
                  ATerm n_55 = NULL;
                  t = new_0(t);
                  {
                    e_55 = t;
                    {
                      if(((w_54 != NULL) && (w_54 != e_55)))
                        _fail(e_55);
                      else
                        w_54 = e_55;
                      {
                        t = not_null(h_54);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm f_55 = NULL,m_55 = NULL;
                            f_55 = t;
                            z_53 :
                            if(match_cons(f_55, sym_RootApp_1))
                              {
                                m_55 = ATgetArgument(f_55, 0);
                                {
                                  if(((v_54 != NULL) && (v_54 != m_55)))
                                    _fail(m_55);
                                  else
                                    v_54 = m_55;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_54));
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
                            n_55 = t;
                            if(((x_54 != NULL) && (x_54 != n_55)))
                              _fail(n_55);
                            else
                              x_54 = n_55;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_54))));
                  LocalPopChoice(g_18);
                }
              else
                {
                  t = f_18;
                  {
                    ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
                    ATerm t_55 = NULL;
                    ATerm x_55 = NULL;
                    t = new_0(t);
                    {
                      t_55 = t;
                      {
                        if(((r_55 != NULL) && (r_55 != t_55)))
                          _fail(t_55);
                        else
                          r_55 = t_55;
                        {
                          t = not_null(h_54);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
                              u_55 = t;
                              d_54 :
                              if(match_cons(u_55, sym_App_2))
                                {
                                  v_55 = ATgetArgument(u_55, 0);
                                  w_55 = ATgetArgument(u_55, 1);
                                  {
                                    if(((p_55 != NULL) && (p_55 != v_55)))
                                      _fail(v_55);
                                    else
                                      p_55 = v_55;
                                    {
                                      if(((q_55 != NULL) && (q_55 != w_55)))
                                        _fail(w_55);
                                      else
                                        q_55 = w_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_55));
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
                              x_55 = t;
                              if(((s_55 != NULL) && (s_55 != x_55)))
                                _fail(x_55);
                              else
                                s_55 = x_55;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_55), not_null(q_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_55)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_55))));
                  }
                }
            }
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
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  y_56 :
  if(match_cons(z_56, sym__2))
    {
      a_57 = ATgetArgument(z_56, 0);
      b_57 = ATgetArgument(z_56, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_57)), not_null(a_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  j_57 = t;
  g_57 :
  if(match_cons(j_57, sym__2))
    {
      k_57 = ATgetArgument(j_57, 0);
      n_57 = ATgetArgument(j_57, 1);
      h_57 :
      if(((ATgetType(k_57) == AT_LIST) && ((ATermList) k_57 != ATempty)))
        {
          l_57 = ATgetFirst((ATermList) k_57);
          m_57 = (ATerm) ATgetNext((ATermList) k_57);
          i_57 :
          if(((ATgetType(n_57) == AT_LIST) && ((ATermList) n_57 != ATempty)))
            {
              o_57 = ATgetFirst((ATermList) n_57);
              p_57 = (ATerm) ATgetNext((ATermList) n_57);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_57), not_null(o_57)), (ATerm) ATmakeAppl(sym__2, not_null(m_57), not_null(p_57)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm c_58 = NULL,d_58 = NULL,f_58 = NULL;
  c_58 = t;
  z_57 :
  if(match_cons(c_58, sym__2))
    {
      d_58 = ATgetArgument(c_58, 0);
      f_58 = ATgetArgument(c_58, 1);
      a_58 :
      if(((ATermList) d_58 == ATempty))
        {
          b_58 :
          if(((ATermList) f_58 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm))
{
  ATerm h_58 (ATerm t)
  {
    ATerm k_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_110(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = k_18;
        {
          t = h_110(t);
          {
            t = _2(t, j_110, h_58);
            t = i_110(t);
          }
        }
      }
    return(t);
  }
  t = h_58(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm l_110 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, l_110);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,r_59 = NULL,s_59 = NULL;
  g_59 = t;
  z_58 :
  if(match_cons(g_59, sym_Call_2))
    {
      h_59 = ATgetArgument(g_59, 0);
      j_59 = ATgetArgument(g_59, 1);
      a_59 :
      if(match_cons(h_59, sym_SVar_1))
        {
          i_59 = ATgetArgument(h_59, 0);
          b_59 :
          if(match_string(i_59, "Anno_Cong__"))
            {
              c_59 :
              if(((ATgetType(j_59) == AT_LIST) && ((ATermList) j_59 != ATempty)))
                {
                  k_59 = ATgetFirst((ATermList) j_59);
                  n_59 = (ATerm) ATgetNext((ATermList) j_59);
                  d_59 :
                  if(match_cons(k_59, sym_Cong_2))
                    {
                      l_59 = ATgetArgument(k_59, 0);
                      m_59 = ATgetArgument(k_59, 1);
                      e_59 :
                      if(((ATgetType(n_59) == AT_LIST) && ((ATermList) n_59 != ATempty)))
                        {
                          r_59 = ATgetFirst((ATermList) n_59);
                          s_59 = (ATerm) ATgetNext((ATermList) n_59);
                          f_59 :
                          if(((ATermList) s_59 == ATempty))
                            {
                              {
                                ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,a_61 = NULL,c_61 = NULL,e_61 = NULL;
                                ATerm w_18;
                                w_18 = t;
                                {
                                  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(r_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      d_60 = t;
                                      v_58 :
                                      if(((ATgetType(d_60) == AT_LIST) && ((ATermList) d_60 != ATempty)))
                                        {
                                          e_60 = ATgetFirst((ATermList) d_60);
                                          f_60 = (ATerm) ATgetNext((ATermList) d_60);
                                          {
                                            ATerm i_60 = NULL;
                                            if(((w_59 != NULL) && (w_59 != e_60)))
                                              _fail(e_60);
                                            else
                                              w_59 = e_60;
                                            {
                                              if(((a_60 != NULL) && (a_60 != f_60)))
                                                _fail(f_60);
                                              else
                                                a_60 = f_60;
                                              {
                                                ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
                                                ATerm i_3 (ATerm t)
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
                                                t = map_1(t, i_3);
                                                {
                                                  i_60 = t;
                                                  {
                                                    if(((x_59 != NULL) && (x_59 != i_60)))
                                                      _fail(i_60);
                                                    else
                                                      x_59 = i_60;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(r_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          j_60 = t;
                                                          u_58 :
                                                          if(((ATgetType(j_60) == AT_LIST) && ((ATermList) j_60 != ATempty)))
                                                            {
                                                              k_60 = ATgetFirst((ATermList) j_60);
                                                              l_60 = (ATerm) ATgetNext((ATermList) j_60);
                                                              {
                                                                ATerm o_60 = NULL;
                                                                if(((y_59 != NULL) && (y_59 != k_60)))
                                                                  _fail(k_60);
                                                                else
                                                                  y_59 = k_60;
                                                                {
                                                                  if(((b_60 != NULL) && (b_60 != l_60)))
                                                                    _fail(l_60);
                                                                  else
                                                                    b_60 = l_60;
                                                                  {
                                                                    ATerm p_60 = NULL,z_60 = NULL;
                                                                    ATerm j_3 (ATerm t)
                                                                    {
                                                                      ATerm m_60 = NULL;
                                                                      ATerm n_60 = NULL;
                                                                      n_60 = t;
                                                                      if(((m_60 != NULL) && (m_60 != n_60)))
                                                                        _fail(n_60);
                                                                      else
                                                                        m_60 = n_60;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_60));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      o_60 = t;
                                                                      {
                                                                        if(((z_59 != NULL) && (z_59 != o_60)))
                                                                          _fail(o_60);
                                                                        else
                                                                          z_59 = o_60;
                                                                        {
                                                                          ATerm q_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(b_60));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              q_60 = t;
                                                                              if(((p_60 != NULL) && (p_60 != q_60)))
                                                                                _fail(q_60);
                                                                              else
                                                                                p_60 = q_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_60), (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(r_59)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
                                                                                r_60 = t;
                                                                                r_58 :
                                                                                if(match_cons(r_60, sym__2))
                                                                                  {
                                                                                    s_60 = ATgetArgument(r_60, 0);
                                                                                    v_60 = ATgetArgument(r_60, 1);
                                                                                    s_58 :
                                                                                    if(match_cons(s_60, sym__2))
                                                                                      {
                                                                                        t_60 = ATgetArgument(s_60, 0);
                                                                                        u_60 = ATgetArgument(s_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_60)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                z_60 = t;
                                                                                if(((c_60 != NULL) && (c_60 != z_60)))
                                                                                  _fail(z_60);
                                                                                else
                                                                                  c_60 = z_60;
                                                                              }
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
                                t = w_18;
                                {
                                  ATerm x_18;
                                  x_18 = t;
                                  {
                                    ATerm b_61 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(b_60));
                                    {
                                      t = conc_0(t);
                                      {
                                        b_61 = t;
                                        if(((a_61 != NULL) && (a_61 != b_61)))
                                          _fail(b_61);
                                        else
                                          a_61 = b_61;
                                      }
                                    }
                                  }
                                  t = x_18;
                                  {
                                    ATerm y_18;
                                    y_18 = t;
                                    {
                                      ATerm d_61 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_59), not_null(x_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          d_61 = t;
                                          if(((c_61 != NULL) && (c_61 != d_61)))
                                            _fail(d_61);
                                          else
                                            c_61 = d_61;
                                        }
                                      }
                                    }
                                    t = y_18;
                                    {
                                      ATerm f_61 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_59), not_null(z_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          f_61 = t;
                                          if(((e_61 != NULL) && (e_61 != f_61)))
                                            _fail(f_61);
                                          else
                                            e_61 = f_61;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(a_61)), not_null(y_59)), not_null(w_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_60)), not_null(e_61))));
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
ATerm As_2 (ATerm t, ATerm o_85 (ATerm), ATerm p_85 (ATerm))
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
  z_61 = t;
  y_61 :
  if(match_cons(z_61, sym_As_2))
    {
      a_62 = ATgetArgument(z_61, 0);
      b_62 = ATgetArgument(z_61, 1);
      {
        ATerm f_62 = NULL,h_62 = NULL;
        ATerm g_62 = NULL;
        t = SSLgetAnnotations(not_null(z_61));
        {
          g_62 = t;
          if(((f_62 != NULL) && (f_62 != g_62)))
            _fail(g_62);
          else
            f_62 = g_62;
        }
        {
          t = not_null(a_62);
          {
            ATerm j_62 = NULL;
            t = o_85(t);
            {
              h_62 = t;
              {
                t = not_null(b_62);
                {
                  ATerm l_62 = NULL;
                  t = p_85(t);
                  {
                    j_62 = t;
                    {
                      ATerm m_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(h_62), not_null(j_62)), not_null(f_62));
                      {
                        m_62 = t;
                        if(((l_62 != NULL) && (l_62 != m_62)))
                          _fail(m_62);
                        else
                          l_62 = m_62;
                      }
                      t = not_null(l_62);
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
ATerm Prim_2 (ATerm t, ATerm w_88 (ATerm), ATerm x_88 (ATerm))
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  y_62 = t;
  x_62 :
  if(match_cons(y_62, sym_Prim_2))
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
            ATerm j_63 = NULL;
            t = w_88(t);
            {
              g_63 = t;
              {
                t = not_null(a_63);
                {
                  ATerm o_63 = NULL;
                  t = x_88(t);
                  {
                    j_63 = t;
                    {
                      ATerm p_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(g_63), not_null(j_63)), not_null(e_63));
                      {
                        p_63 = t;
                        if(((o_63 != NULL) && (o_63 != p_63)))
                          _fail(p_63);
                        else
                          o_63 = p_63;
                      }
                      t = not_null(o_63);
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
ATerm Explode_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
  d_64 = t;
  c_64 :
  if(match_cons(d_64, sym_Explode_2))
    {
      e_64 = ATgetArgument(d_64, 0);
      f_64 = ATgetArgument(d_64, 1);
      {
        ATerm j_64 = NULL,q_64 = NULL;
        ATerm k_64 = NULL;
        t = SSLgetAnnotations(not_null(d_64));
        {
          k_64 = t;
          if(((j_64 != NULL) && (j_64 != k_64)))
            _fail(k_64);
          else
            j_64 = k_64;
        }
        {
          t = not_null(e_64);
          {
            ATerm y_64 = NULL;
            t = k_85(t);
            {
              q_64 = t;
              {
                t = not_null(f_64);
                {
                  ATerm a_65 = NULL;
                  t = l_85(t);
                  {
                    y_64 = t;
                    {
                      ATerm b_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(q_64), not_null(y_64)), not_null(j_64));
                      {
                        b_65 = t;
                        if(((a_65 != NULL) && (a_65 != b_65)))
                          _fail(b_65);
                        else
                          a_65 = b_65;
                      }
                      t = not_null(a_65);
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
ATerm Op_2 (ATerm t, ATerm w_86 (ATerm), ATerm x_86 (ATerm))
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  q_65 :
  if(match_cons(r_65, sym_Op_2))
    {
      s_65 = ATgetArgument(r_65, 0);
      t_65 = ATgetArgument(r_65, 1);
      {
        ATerm x_65 = NULL,z_65 = NULL;
        ATerm y_65 = NULL;
        t = SSLgetAnnotations(not_null(r_65));
        {
          y_65 = t;
          if(((x_65 != NULL) && (x_65 != y_65)))
            _fail(y_65);
          else
            x_65 = y_65;
        }
        {
          t = not_null(s_65);
          {
            ATerm b_66 = NULL;
            t = w_86(t);
            {
              z_65 = t;
              {
                t = not_null(t_65);
                {
                  ATerm d_66 = NULL;
                  t = x_86(t);
                  {
                    b_66 = t;
                    {
                      ATerm e_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(z_65), not_null(b_66)), not_null(x_65));
                      {
                        e_66 = t;
                        if(((d_66 != NULL) && (d_66 != e_66)))
                          _fail(e_66);
                        else
                          d_66 = e_66;
                      }
                      t = not_null(d_66);
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
ATerm pat_td_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_90(t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, a_90);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            {
              ATerm k_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, a_90);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = k_19;
                  {
                    ATerm o_19 = t;
                    int t_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, a_90);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        LocalPopChoice(t_19);
                      }
                    else
                      {
                        t = o_19;
                        {
                          ATerm u_19 = t;
                          int v_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_3 (ATerm t)
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = pat_td_1(t, a_90);
                                  return(t);
                                }
                                t = fetch_1(t, q_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, p_3);
                              LocalPopChoice(v_19);
                            }
                          else
                            {
                              t = u_19;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, a_90);
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
  ATerm n_67 = NULL,o_67 = NULL;
  n_67 = t;
  m_67 :
  if(match_cons(n_67, sym_Match_1))
    {
      o_67 = ATgetArgument(n_67, 0);
      {
        ATerm w_19 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
            ATerm u_67 = NULL;
            ATerm y_67 = NULL;
            t = new_0(t);
            {
              u_67 = t;
              {
                if(((s_67 != NULL) && (s_67 != u_67)))
                  _fail(u_67);
                else
                  s_67 = u_67;
                {
                  t = not_null(o_67);
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL;
                      v_67 = t;
                      t_66 :
                      if(match_cons(v_67, sym_Anno_2))
                        {
                          w_67 = ATgetArgument(v_67, 0);
                          x_67 = ATgetArgument(v_67, 1);
                          {
                            if(((q_67 != NULL) && (q_67 != w_67)))
                              _fail(w_67);
                            else
                              q_67 = w_67;
                            {
                              if(((r_67 != NULL) && (r_67 != x_67)))
                                _fail(x_67);
                              else
                                r_67 = x_67;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_67)), not_null(q_67));
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
                      y_67 = t;
                      if(((t_67 != NULL) && (t_67 != y_67)))
                        _fail(y_67);
                      else
                        t_67 = y_67;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_67)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_67)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_67))))));
            LocalPopChoice(b_20);
          }
        else
          {
            t = w_19;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
                  ATerm d_68 = NULL;
                  ATerm g_68 = NULL;
                  t = new_0(t);
                  {
                    d_68 = t;
                    {
                      if(((b_68 != NULL) && (b_68 != d_68)))
                        _fail(d_68);
                      else
                        b_68 = d_68;
                      {
                        t = not_null(o_67);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm e_68 = NULL,f_68 = NULL;
                            e_68 = t;
                            x_66 :
                            if(match_cons(e_68, sym_RootApp_1))
                              {
                                f_68 = ATgetArgument(e_68, 0);
                                {
                                  if(((a_68 != NULL) && (a_68 != f_68)))
                                    _fail(f_68);
                                  else
                                    a_68 = f_68;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_68));
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
                            g_68 = t;
                            if(((c_68 != NULL) && (c_68 != g_68)))
                              _fail(g_68);
                            else
                              c_68 = g_68;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_68))), not_null(a_68))));
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  {
                    ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
                    ATerm m_68 = NULL;
                    ATerm u_68 = NULL;
                    t = new_0(t);
                    {
                      m_68 = t;
                      {
                        if(((k_68 != NULL) && (k_68 != m_68)))
                          _fail(m_68);
                        else
                          k_68 = m_68;
                        {
                          t = not_null(o_67);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              ATerm n_68 = NULL,s_68 = NULL,t_68 = NULL;
                              n_68 = t;
                              i_67 :
                              if(match_cons(n_68, sym_App_2))
                                {
                                  s_68 = ATgetArgument(n_68, 0);
                                  t_68 = ATgetArgument(n_68, 1);
                                  {
                                    if(((j_68 != NULL) && (j_68 != s_68)))
                                      _fail(s_68);
                                    else
                                      j_68 = s_68;
                                    {
                                      if(((i_68 != NULL) && (i_68 != t_68)))
                                        _fail(t_68);
                                      else
                                        i_68 = t_68;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_68));
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
                              u_68 = t;
                              if(((l_68 != NULL) && (l_68 != u_68)))
                                _fail(u_68);
                              else
                                l_68 = u_68;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_68))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_68)), not_null(j_68)))));
                  }
                }
            }
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
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  z_69 = t;
  u_69 :
  if(match_cons(z_69, sym_Cong_2))
    {
      a_70 = ATgetArgument(z_69, 0);
      b_70 = ATgetArgument(z_69, 1);
      {
        ATerm e_70 = NULL;
        ATerm k_70 = NULL;
        t = not_null(b_70);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm h_70 = NULL,i_70 = NULL;
            i_70 = t;
            s_69 :
            if(match_cons(i_70, sym_Match_1))
              {
                h_70 = ATgetArgument(i_70, 0);
                t = not_null(h_70);
              }
            else
              {
                if(match_cons(i_70, sym_Id_0))
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
          t = map_1(t, v_3);
          {
            k_70 = t;
            if(((e_70 != NULL) && (e_70 != k_70)))
              _fail(k_70);
            else
              e_70 = k_70;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(a_70), not_null(e_70)));
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
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  q_70 :
  if(match_cons(s_70, sym_Scope_2))
    {
      t_70 = ATgetArgument(s_70, 0);
      u_70 = ATgetArgument(s_70, 1);
      r_70 :
      if(((ATermList) t_70 == ATempty))
        {
          t = not_null(u_70);
        }
      else
        {
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
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
  q_71 = t;
  d_71 :
  if(match_cons(q_71, sym_Where_1))
    {
      r_71 = ATgetArgument(q_71, 0);
      e_71 :
      if(match_cons(r_71, sym_Seq_2))
        {
          p_71 = ATgetArgument(r_71, 0);
          l_71 = ATgetArgument(r_71, 1);
          f_71 :
          if(match_cons(p_71, sym_Where_1))
            {
              k_71 = ATgetArgument(p_71, 0);
              g_71 :
              if(match_cons(l_71, sym_Seq_2))
                {
                  m_71 = ATgetArgument(l_71, 0);
                  o_71 = ATgetArgument(l_71, 1);
                  h_71 :
                  if(match_cons(m_71, sym_Build_1))
                    {
                      n_71 = ATgetArgument(m_71, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_71)), not_null(o_71))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(r_71, sym_Where_1))
            {
              p_71 = ATgetArgument(r_71, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_71));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(q_71, sym_Test_1))
        {
          r_71 = ATgetArgument(q_71, 0);
          i_71 :
          if(match_cons(r_71, sym_Test_1))
            {
              p_71 = ATgetArgument(r_71, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_71));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(q_71, sym_Not_1))
            {
              r_71 = ATgetArgument(q_71, 0);
              j_71 :
              if(match_cons(r_71, sym_Not_1))
                {
                  p_71 = ATgetArgument(r_71, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_71));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_71, sym_LChoice_2))
                {
                  r_71 = ATgetArgument(q_71, 0);
                  s_71 = ATgetArgument(q_71, 1);
                  {
                    if(((r_71 != NULL) && (r_71 != s_71)))
                      _fail(s_71);
                    else
                      r_71 = s_71;
                    t = not_null(r_71);
                  }
                }
              else
                {
                  if(match_cons(q_71, sym_Choice_2))
                    {
                      r_71 = ATgetArgument(q_71, 0);
                      s_71 = ATgetArgument(q_71, 1);
                      {
                        if(((r_71 != NULL) && (r_71 != s_71)))
                          _fail(s_71);
                        else
                          r_71 = s_71;
                        t = not_null(r_71);
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
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  o_72 = t;
  k_72 :
  if(match_cons(o_72, sym_LChoice_2))
    {
      p_72 = ATgetArgument(o_72, 0);
      s_72 = ATgetArgument(o_72, 1);
      l_72 :
      if(match_cons(p_72, sym_LChoice_2))
        {
          q_72 = ATgetArgument(p_72, 0);
          r_72 = ATgetArgument(p_72, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_72), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_72), not_null(s_72)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(o_72, sym_Seq_2))
        {
          p_72 = ATgetArgument(o_72, 0);
          s_72 = ATgetArgument(o_72, 1);
          m_72 :
          if(match_cons(p_72, sym_Seq_2))
            {
              q_72 = ATgetArgument(p_72, 0);
              r_72 = ATgetArgument(p_72, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_72), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_72), not_null(s_72)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(o_72, sym_Choice_2))
            {
              p_72 = ATgetArgument(o_72, 0);
              s_72 = ATgetArgument(o_72, 1);
              n_72 :
              if(match_cons(p_72, sym_Choice_2))
                {
                  q_72 = ATgetArgument(p_72, 0);
                  r_72 = ATgetArgument(p_72, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_72), (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_72), not_null(s_72)));
                }
              else
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
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,a_74 = NULL,b_74 = NULL;
  a_74 = t;
  r_73 :
  if(match_cons(a_74, sym_InfixApp_3))
    {
      b_74 = ATgetArgument(a_74, 0);
      w_73 = ATgetArgument(a_74, 1);
      v_73 = ATgetArgument(a_74, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_73), (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_73)), not_null(b_74))));
    }
  else
    {
      if(match_cons(a_74, sym_BAM_3))
        {
          b_74 = ATgetArgument(a_74, 0);
          w_73 = ATgetArgument(a_74, 1);
          v_73 = ATgetArgument(a_74, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_73))), not_null(b_74)), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_73))));
        }
      else
        {
          if(match_cons(a_74, sym_AM_2))
            {
              b_74 = ATgetArgument(a_74, 0);
              w_73 = ATgetArgument(a_74, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_74), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_73)));
            }
          else
            {
              if(match_cons(a_74, sym_MA_2))
                {
                  b_74 = ATgetArgument(a_74, 0);
                  w_73 = ATgetArgument(a_74, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_74)), not_null(w_73));
                }
              else
                {
                  if(match_cons(a_74, sym_BA_2))
                    {
                      b_74 = ATgetArgument(a_74, 0);
                      w_73 = ATgetArgument(a_74, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_73)), not_null(b_74));
                    }
                  else
                    {
                      if(match_cons(a_74, sym_Lets_2))
                        {
                          b_74 = ATgetArgument(a_74, 0);
                          w_73 = ATgetArgument(a_74, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(b_74), not_null(w_73));
                        }
                      else
                        {
                          if(match_cons(a_74, sym_LChoices_1))
                            {
                              b_74 = ATgetArgument(a_74, 0);
                              s_73 :
                              if(((ATgetType(b_74) == AT_LIST) && ((ATermList) b_74 != ATempty)))
                                {
                                  x_73 = ATgetFirst((ATermList) b_74);
                                  y_73 = (ATerm) ATgetNext((ATermList) b_74);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_73), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_73)));
                                }
                              else
                                {
                                  if(((ATermList) b_74 == ATempty))
                                    {
                                      t = term_m_20;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(a_74, sym_Choices_1))
                                {
                                  b_74 = ATgetArgument(a_74, 0);
                                  t_73 :
                                  if(((ATgetType(b_74) == AT_LIST) && ((ATermList) b_74 != ATempty)))
                                    {
                                      x_73 = ATgetFirst((ATermList) b_74);
                                      y_73 = (ATerm) ATgetNext((ATermList) b_74);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_73), (ATerm) ATmakeAppl(sym_Choices_1, not_null(y_73)));
                                    }
                                  else
                                    {
                                      if(((ATermList) b_74 == ATempty))
                                        {
                                          t = term_m_20;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(a_74, sym_Seqs_1))
                                    {
                                      b_74 = ATgetArgument(a_74, 0);
                                      u_73 :
                                      if(((ATgetType(b_74) == AT_LIST) && ((ATermList) b_74 != ATempty)))
                                        {
                                          x_73 = ATgetFirst((ATermList) b_74);
                                          y_73 = (ATerm) ATgetNext((ATermList) b_74);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_73), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_73)));
                                        }
                                      else
                                        {
                                          if(((ATermList) b_74 == ATempty))
                                            {
                                              t = term_n_20;
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
ATerm F15_0 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  q_77 = t;
  o_77 :
  if(match_cons(q_77, sym_Where_1))
    {
      r_77 = ATgetArgument(q_77, 0);
      p_77 :
      if(match_cons(r_77, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
  w_77 = t;
  u_77 :
  if(match_cons(w_77, sym_LChoice_2))
    {
      x_77 = ATgetArgument(w_77, 0);
      y_77 = ATgetArgument(w_77, 1);
      v_77 :
      if(match_cons(y_77, sym_Fail_0))
        {
          t = not_null(x_77);
        }
      else
        {
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
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL;
  e_78 = t;
  c_78 :
  if(match_cons(e_78, sym_LChoice_2))
    {
      f_78 = ATgetArgument(e_78, 0);
      g_78 = ATgetArgument(e_78, 1);
      d_78 :
      if(match_cons(f_78, sym_Fail_0))
        {
          t = not_null(g_78);
        }
      else
        {
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
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
  m_78 = t;
  k_78 :
  if(match_cons(m_78, sym_Choice_2))
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
ATerm F11_0 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
  u_78 = t;
  s_78 :
  if(match_cons(u_78, sym_Choice_2))
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
ATerm F10_0 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  b_79 :
  if(match_cons(c_79, sym_Cong_2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      {
        t = not_null(e_79);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm j_79 = NULL;
            j_79 = t;
            a_79 :
            if(!(match_cons(j_79, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        t = term_m_20;
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
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  m_79 :
  if(match_cons(o_79, sym_Path_2))
    {
      p_79 = ATgetArgument(o_79, 0);
      q_79 = ATgetArgument(o_79, 1);
      n_79 :
      if(match_cons(q_79, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm w_79 = NULL,x_79 = NULL;
  w_79 = t;
  u_79 :
  if(match_cons(w_79, sym_One_1))
    {
      x_79 = ATgetArgument(w_79, 0);
      v_79 :
      if(match_cons(x_79, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm c_80 = NULL,d_80 = NULL;
  c_80 = t;
  a_80 :
  if(match_cons(c_80, sym_Some_1))
    {
      d_80 = ATgetArgument(c_80, 0);
      b_80 :
      if(match_cons(d_80, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL;
  i_80 = t;
  g_80 :
  if(match_cons(i_80, sym_Rec_2))
    {
      j_80 = ATgetArgument(i_80, 0);
      k_80 = ATgetArgument(i_80, 1);
      h_80 :
      if(match_cons(k_80, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
  q_80 = t;
  o_80 :
  if(match_cons(q_80, sym_Scope_2))
    {
      r_80 = ATgetArgument(q_80, 0);
      s_80 = ATgetArgument(q_80, 1);
      p_80 :
      if(match_cons(s_80, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
  y_80 = t;
  w_80 :
  if(match_cons(y_80, sym_Seq_2))
    {
      z_80 = ATgetArgument(y_80, 0);
      a_81 = ATgetArgument(y_80, 1);
      x_80 :
      if(match_cons(z_80, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm g_81 = NULL,h_81 = NULL;
  g_81 = t;
  e_81 :
  if(match_cons(g_81, sym_Not_1))
    {
      h_81 = ATgetArgument(g_81, 0);
      f_81 :
      if(match_cons(h_81, sym_Fail_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm m_81 = NULL,n_81 = NULL;
  m_81 = t;
  k_81 :
  if(match_cons(m_81, sym_Test_1))
    {
      n_81 = ATgetArgument(m_81, 0);
      l_81 :
      if(match_cons(n_81, sym_Fail_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm o_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(q_20);
    }
  else
    {
      t = o_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm u_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = u_20;
                  {
                    ATerm z_20 = t;
                    int a_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(a_21);
                      }
                    else
                      {
                        t = z_20;
                        {
                          ATerm j_21 = t;
                          int k_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(k_21);
                            }
                          else
                            {
                              t = j_21;
                              {
                                ATerm l_21 = t;
                                int m_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(m_21);
                                  }
                                else
                                  {
                                    t = l_21;
                                    {
                                      ATerm n_21 = t;
                                      int o_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(o_21);
                                        }
                                      else
                                        {
                                          t = n_21;
                                          {
                                            ATerm p_21 = t;
                                            int q_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
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
                                                      t = F10_0(t);
                                                      LocalPopChoice(s_21);
                                                    }
                                                  else
                                                    {
                                                      t = r_21;
                                                      {
                                                        ATerm t_21 = t;
                                                        int u_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
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
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(w_21);
                                                                }
                                                              else
                                                                {
                                                                  t = v_21;
                                                                  {
                                                                    ATerm x_21 = t;
                                                                    int b_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(b_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_21;
                                                                        {
                                                                          ATerm c_22 = t;
                                                                          int g_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(g_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_22;
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
  ATerm s_81 = NULL,t_81 = NULL;
  s_81 = t;
  q_81 :
  if(match_cons(s_81, sym_Match_1))
    {
      t_81 = ATgetArgument(s_81, 0);
      r_81 :
      if(match_cons(t_81, sym_Wld_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm y_81 = NULL,z_81 = NULL;
  y_81 = t;
  w_81 :
  if(match_cons(y_81, sym_Where_1))
    {
      z_81 = ATgetArgument(y_81, 0);
      x_81 :
      if(match_cons(z_81, sym_Id_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm e_82 = NULL,f_82 = NULL;
  e_82 = t;
  c_82 :
  if(match_cons(e_82, sym_All_1))
    {
      f_82 = ATgetArgument(e_82, 0);
      d_82 :
      if(match_cons(f_82, sym_Id_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  i_82 :
  if(match_cons(k_82, sym_Rec_2))
    {
      l_82 = ATgetArgument(k_82, 0);
      m_82 = ATgetArgument(k_82, 1);
      j_82 :
      if(match_cons(m_82, sym_Id_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
  s_82 = t;
  q_82 :
  if(match_cons(s_82, sym_Scope_2))
    {
      t_82 = ATgetArgument(s_82, 0);
      u_82 = ATgetArgument(s_82, 1);
      r_82 :
      if(match_cons(u_82, sym_Id_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
  a_83 = t;
  y_82 :
  if(match_cons(a_83, sym_LChoice_2))
    {
      b_83 = ATgetArgument(a_83, 0);
      c_83 = ATgetArgument(a_83, 1);
      z_82 :
      if(match_cons(b_83, sym_Id_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
  i_83 = t;
  g_83 :
  if(match_cons(i_83, sym_Seq_2))
    {
      j_83 = ATgetArgument(i_83, 0);
      k_83 = ATgetArgument(i_83, 1);
      h_83 :
      if(match_cons(k_83, sym_Id_0))
        {
          t = not_null(j_83);
        }
      else
        {
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
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  o_83 :
  if(match_cons(q_83, sym_Seq_2))
    {
      r_83 = ATgetArgument(q_83, 0);
      s_83 = ATgetArgument(q_83, 1);
      p_83 :
      if(match_cons(r_83, sym_Id_0))
        {
          t = not_null(s_83);
        }
      else
        {
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
  ATerm y_83 = NULL,z_83 = NULL;
  y_83 = t;
  w_83 :
  if(match_cons(y_83, sym_Not_1))
    {
      z_83 = ATgetArgument(y_83, 0);
      x_83 :
      if(match_cons(z_83, sym_Id_0))
        {
          t = term_m_20;
        }
      else
        {
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
  ATerm e_84 = NULL,f_84 = NULL;
  e_84 = t;
  c_84 :
  if(match_cons(e_84, sym_Test_1))
    {
      f_84 = ATgetArgument(e_84, 0);
      d_84 :
      if(match_cons(f_84, sym_Id_0))
        {
          t = term_n_20;
        }
      else
        {
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
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm o_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(r_22);
          }
        else
          {
            t = o_22;
            {
              ATerm s_22 = t;
              int t_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(t_22);
                }
              else
                {
                  t = s_22;
                  {
                    ATerm u_22 = t;
                    int v_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(v_22);
                      }
                    else
                      {
                        t = u_22;
                        {
                          ATerm w_22 = t;
                          int x_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(x_22);
                            }
                          else
                            {
                              t = w_22;
                              {
                                ATerm y_22 = t;
                                int z_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(z_22);
                                  }
                                else
                                  {
                                    t = y_22;
                                    {
                                      ATerm a_23 = t;
                                      int b_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(b_23);
                                        }
                                      else
                                        {
                                          t = a_23;
                                          {
                                            ATerm h_23 = t;
                                            int i_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(i_23);
                                              }
                                            else
                                              {
                                                t = h_23;
                                                {
                                                  ATerm j_23 = t;
                                                  int l_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(l_23);
                                                    }
                                                  else
                                                    {
                                                      t = j_23;
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
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            {
              ATerm r_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = r_23;
                  {
                    ATerm t_23 = t;
                    int u_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(u_23);
                      }
                    else
                      {
                        t = t_23;
                        {
                          ATerm v_23 = t;
                          int w_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(w_23);
                            }
                          else
                            {
                              t = v_23;
                              {
                                ATerm b_24 = t;
                                int c_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(c_24);
                                  }
                                else
                                  {
                                    t = b_24;
                                    {
                                      ATerm n_24 = t;
                                      int o_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(o_24);
                                        }
                                      else
                                        {
                                          t = n_24;
                                          {
                                            ATerm p_24 = t;
                                            int q_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(q_24);
                                              }
                                            else
                                              {
                                                t = p_24;
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
ATerm repeat_2 (ATerm t, ATerm a_99 (ATerm), ATerm b_99 (ATerm))
{
  ATerm h_84 (ATerm t)
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        t = h_84(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = b_99(t);
      }
    return(t);
  }
  t = h_84(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_99 (ATerm))
{
  t = repeat_2(t, d_99, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm d_113 (ATerm))
{
  ATerm i_84 (ATerm t)
  {
    t = d_113(t);
    {
      t = _all(t, i_84);
      t = d_113(t);
    }
    return(t);
  }
  t = i_84(t);
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
ATerm Strategies_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm o_84 = NULL,p_84 = NULL;
  o_84 = t;
  n_84 :
  if(match_cons(o_84, sym_Strategies_1))
    {
      p_84 = ATgetArgument(o_84, 0);
      {
        ATerm s_84 = NULL,u_84 = NULL;
        ATerm t_84 = NULL;
        t = SSLgetAnnotations(not_null(o_84));
        {
          t_84 = t;
          if(((s_84 != NULL) && (s_84 != t_84)))
            _fail(t_84);
          else
            s_84 = t_84;
        }
        {
          t = not_null(p_84);
          {
            ATerm w_84 = NULL;
            t = p_86(t);
            {
              u_84 = t;
              {
                ATerm x_84 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(u_84)), not_null(s_84));
                {
                  x_84 = t;
                  if(((w_84 != NULL) && (w_84 != x_84)))
                    _fail(x_84);
                  else
                    w_84 = x_84;
                }
                t = not_null(w_84);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm h_85 = NULL,i_85 = NULL;
  h_85 = t;
  g_85 :
  if(match_cons(h_85, sym_Specification_1))
    {
      i_85 = ATgetArgument(h_85, 0);
      {
        ATerm n_85 = NULL,r_85 = NULL;
        ATerm q_85 = NULL;
        t = SSLgetAnnotations(not_null(h_85));
        {
          q_85 = t;
          if(((n_85 != NULL) && (n_85 != q_85)))
            _fail(q_85);
          else
            n_85 = q_85;
        }
        {
          t = not_null(i_85);
          {
            ATerm t_85 = NULL;
            t = r_86(t);
            {
              r_85 = t;
              {
                ATerm u_85 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_85)), not_null(n_85));
                {
                  u_85 = t;
                  if(((t_85 != NULL) && (t_85 != u_85)))
                    _fail(u_85);
                  else
                    t_85 = u_85;
                }
                t = not_null(t_85);
              }
            }
          }
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
ATerm _2 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  g_86 = t;
  e_86 :
  if(match_cons(g_86, sym__2))
    {
      h_86 = ATgetArgument(g_86, 0);
      i_86 = ATgetArgument(g_86, 1);
      {
        ATerm m_86 = NULL,o_86 = NULL;
        ATerm n_86 = NULL;
        t = SSLgetAnnotations(not_null(g_86));
        {
          n_86 = t;
          if(((m_86 != NULL) && (m_86 != n_86)))
            _fail(n_86);
          else
            m_86 = n_86;
        }
        {
          t = not_null(h_86);
          {
            ATerm s_86 = NULL;
            t = z_76(t);
            {
              o_86 = t;
              {
                t = not_null(i_86);
                {
                  ATerm u_86 = NULL;
                  t = a_77(t);
                  {
                    s_86 = t;
                    {
                      ATerm v_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_86), not_null(s_86)), not_null(m_86));
                      {
                        v_86 = t;
                        if(((u_86 != NULL) && (u_86 != v_86)))
                          _fail(v_86);
                        else
                          u_86 = v_86;
                      }
                      t = not_null(u_86);
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
  ATerm l_87 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm m_87 = NULL,n_87 = NULL;
      m_87 = t;
      k_87 :
      if(match_cons(m_87, sym_Program_1))
        {
          n_87 = ATgetArgument(m_87, 0);
          if(((l_87 != NULL) && (l_87 != n_87)))
            _fail(n_87);
          else
            l_87 = n_87;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_25), not_null(l_87)), term_c_25));
      {
        t = printnl_0(t);
        {
          t = term_k_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_24;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  y_87 :
  if(match_cons(z_87, sym__2))
    {
      a_88 = ATgetArgument(z_87, 0);
      b_88 = ATgetArgument(z_87, 1);
      {
        ATerm e_25;
        e_25 = t;
        t = SSL_printnl(not_null(a_88), not_null(b_88));
        t = e_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm o_88 = NULL;
  ATerm s_88 = NULL;
  o_88 = t;
  {
    ATerm v_88 = NULL;
    ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
    t = not_null(o_88);
    {
      v_88 = t;
      {
        t = SSL_explode_term(not_null(v_88));
        {
          b_89 = t;
          m_88 :
          if(match_cons(b_89, sym__2))
            {
              c_89 = ATgetArgument(b_89, 0);
              d_89 = ATgetArgument(b_89, 1);
              n_88 :
              if(match_string(c_89, ""))
                {
                  if(((s_88 != NULL) && (s_88 != d_89)))
                    _fail(d_89);
                  else
                    s_88 = d_89;
                }
              else
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
      t = not_null(s_88);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL;
  k_89 = t;
  j_89 :
  if(match_cons(k_89, sym__2))
    {
      l_89 = ATgetArgument(k_89, 0);
      m_89 = ATgetArgument(k_89, 1);
      {
        t = not_null(l_89);
        {
          ATerm h_4 (ATerm t)
          {
            t = not_null(m_89);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm p_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(r_25);
    }
  else
    {
      t = p_25;
      t = conc_more_lists_0(t);
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
ATerm debug_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm s_25;
  s_25 = t;
  {
    ATerm s_89 = NULL,u_89 = NULL;
    ATerm t_25;
    t_25 = t;
    {
      ATerm t_89 = NULL;
      t = h_89(t);
      {
        t_89 = t;
        if(((s_89 != NULL) && (s_89 != t_89)))
          _fail(t_89);
        else
          s_89 = t_89;
      }
    }
    t = t_25;
    {
      ATerm v_89 = NULL;
      v_89 = t;
      if(((u_89 != NULL) && (u_89 != v_89)))
        _fail(v_89);
      else
        u_89 = v_89;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_89)), not_null(s_89)));
        t = printnl_0(t);
      }
    }
  }
  t = s_25;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_89 = NULL;
  z_89 = t;
  t = SSL_is_string(not_null(z_89));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_4);
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            {
              ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL;
              j_90 = t;
              i_90 :
              if(match_cons(j_90, sym_Path_1))
                {
                  k_90 = ATgetArgument(j_90, 0);
                  t = not_null(k_90);
                }
              else
                {
                  if(match_cons(j_90, sym_Var_1))
                    {
                      k_90 = ATgetArgument(j_90, 0);
                      {
                        t = not_null(k_90);
                        {
                          ATerm c_26 = t;
                          int h_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_26);
                            }
                          else
                            {
                              t = c_26;
                              {
                                ATerm j_4 (ATerm t)
                                {
                                  t = term_i_26;
                                  return(t);
                                }
                                t = debug_1(t, j_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_90, sym_Prefix_2))
                        {
                          k_90 = ATgetArgument(j_90, 0);
                          l_90 = ATgetArgument(j_90, 1);
                          {
                            ATerm q_90 = NULL,s_90 = NULL;
                            ATerm k_26;
                            k_26 = t;
                            {
                              ATerm r_90 = NULL;
                              t = not_null(k_90);
                              {
                                t = eval_config_0(t);
                                {
                                  r_90 = t;
                                  if(((q_90 != NULL) && (q_90 != r_90)))
                                    _fail(r_90);
                                  else
                                    q_90 = r_90;
                                }
                              }
                            }
                            t = k_26;
                            {
                              ATerm t_90 = NULL;
                              t = not_null(l_90);
                              {
                                t = eval_config_0(t);
                                {
                                  t_90 = t;
                                  if(((s_90 != NULL) && (s_90 != t_90)))
                                    _fail(t_90);
                                  else
                                    s_90 = t_90;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_90), not_null(s_90));
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
  ATerm b_91 = NULL;
  b_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_26, not_null(b_91));
    {
      t = table_get_0(t);
      {
        ATerm k_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_26;
            m_26 = t;
            {
              ATerm d_91 = NULL;
              ATerm e_91 = NULL;
              e_91 = t;
              if(((d_91 != NULL) && (d_91 != e_91)))
                _fail(e_91);
              else
                d_91 = e_91;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_26, not_null(b_91), not_null(d_91));
                t = table_put_0(t);
              }
            }
            t = m_26;
          }
          return(t);
        }
        t = try_1(t, k_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_92 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm o_26;
    o_26 = t;
    {
      ATerm i_91 = NULL;
      ATerm j_91 = NULL;
      t = term_q_26;
      {
        t = get_config_0(t);
        {
          j_91 = t;
          if(((i_91 != NULL) && (i_91 != j_91)))
            _fail(j_91);
          else
            i_91 = j_91;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_91), term_r_26);
        t = geq_0(t);
      }
    }
    t = o_26;
    t = x_92(t);
    return(t);
  }
  t = try_1(t, l_4);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL,v_91 = NULL;
  n_91 = t;
  m_91 :
  if(match_cons(n_91, sym__2))
    {
      o_91 = ATgetArgument(n_91, 0);
      v_91 = ATgetArgument(n_91, 1);
      t = SSL_WriteToTextFile(not_null(o_91), not_null(v_91));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL;
  b_92 = t;
  a_92 :
  if(match_cons(b_92, sym__2))
    {
      c_92 = ATgetArgument(b_92, 0);
      d_92 = ATgetArgument(b_92, 1);
      t = SSL_WriteToBinaryFile(not_null(c_92), not_null(d_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_92 = NULL;
  ATerm v_26;
  v_26 = t;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_4 (ATerm t)
          {
            ATerm m_92 = NULL,n_92 = NULL;
            m_92 = t;
            i_92 :
            if(match_cons(m_92, sym_Output_1))
              {
                n_92 = ATgetArgument(m_92, 0);
                if(((l_92 != NULL) && (l_92 != n_92)))
                  _fail(n_92);
                else
                  l_92 = n_92;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_4);
          LocalPopChoice(x_26);
        }
      else
        {
          t = w_26;
          {
            ATerm o_92 = NULL;
            t = term_y_26;
            {
              o_92 = t;
              if(((l_92 != NULL) && (l_92 != o_92)))
                _fail(o_92);
              else
                l_92 = o_92;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_4, _id);
  }
  t = v_26;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm p_4 (ATerm t)
      {
        t = not_null(l_92);
        return(t);
      }
      t = split_2(t, p_4, _id);
      return(t);
    }
    t = _2(t, _id, o_4);
    {
      ATerm z_26 = t;
      int a_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            ATerm r_4 (ATerm t)
            {
              ATerm p_92 = NULL;
              p_92 = t;
              k_92 :
              if(!(match_cons(p_92, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_4);
            return(t);
          }
          t = _2(t, q_4, WriteToBinaryFile_0);
          LocalPopChoice(a_27);
        }
      else
        {
          t = z_26;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_95 (ATerm))
{
  ATerm y_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  ATerm c_27;
  c_27 = t;
  t = dtime_0(t);
  t = c_27;
  {
    t = v_95(t);
    {
      ATerm d_27;
      d_27 = t;
      {
        ATerm z_92 = NULL;
        t = dtime_0(t);
        {
          z_92 = t;
          if(((y_92 != NULL) && (y_92 != z_92)))
            _fail(z_92);
          else
            y_92 = z_92;
        }
      }
      t = d_27;
      {
        a_93 = t;
        v_92 :
        if(match_cons(a_93, sym__2))
          {
            b_93 = ATgetArgument(a_93, 0);
            c_93 = ATgetArgument(a_93, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_93)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_92))), not_null(c_93));
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
  ATerm i_93 = NULL;
  i_93 = t;
  t = SSL_ReadFromFile(not_null(i_93));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_111 (ATerm), ATerm v_111 (ATerm))
{
  ATerm n_93 = NULL,p_93 = NULL;
  ATerm e_27;
  e_27 = t;
  {
    ATerm o_93 = NULL;
    t = u_111(t);
    {
      o_93 = t;
      if(((n_93 != NULL) && (n_93 != o_93)))
        _fail(o_93);
      else
        n_93 = o_93;
    }
  }
  t = e_27;
  {
    ATerm q_93 = NULL;
    t = v_111(t);
    {
      q_93 = t;
      if(((p_93 != NULL) && (p_93 != q_93)))
        _fail(q_93);
      else
        p_93 = q_93;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_93), not_null(p_93));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_93 = NULL;
  ATerm j_27;
  j_27 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 (ATerm t)
        {
          ATerm x_93 = NULL,y_93 = NULL;
          x_93 = t;
          u_93 :
          if(match_cons(x_93, sym_Input_1))
            {
              y_93 = ATgetArgument(x_93, 0);
              if(((w_93 != NULL) && (w_93 != y_93)))
                _fail(y_93);
              else
                w_93 = y_93;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, s_4);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm z_93 = NULL;
          t = term_n_27;
          {
            z_93 = t;
            if(((w_93 != NULL) && (w_93 != z_93)))
              _fail(z_93);
            else
              w_93 = z_93;
          }
        }
      }
  }
  t = j_27;
  {
    ATerm t_4 (ATerm t)
    {
      t = not_null(w_93);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_4);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_94 = NULL;
  d_94 = t;
  t = SSL_string_to_int(not_null(d_94));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
  l_94 = t;
  j_94 :
  if(match_string(l_94, "register-usage-info"))
    {
      t = register_usage_1(t, r_0);
    }
  else
    {
      if(((ATgetType(l_94) == AT_LIST) && ((ATermList) l_94 != ATempty)))
        {
          m_94 = ATgetFirst((ATermList) l_94);
          n_94 = (ATerm) ATgetNext((ATermList) l_94);
          k_94 :
          if(((ATgetType(n_94) == AT_LIST) && ((ATermList) n_94 != ATempty)))
            {
              o_94 = ATgetFirst((ATermList) n_94);
              p_94 = (ATerm) ATgetNext((ATermList) n_94);
              {
                ATerm y_94 = NULL;
                ATerm r_27;
                r_27 = t;
                {
                  t = not_null(m_94);
                  t = p_0(t);
                }
                t = r_27;
                {
                  ATerm e_95 = NULL;
                  t = not_null(o_94);
                  {
                    t = q_0(t);
                    {
                      e_95 = t;
                      if(((y_94 != NULL) && (y_94 != e_95)))
                        _fail(e_95);
                      else
                        y_94 = e_95;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_94)), not_null(y_94));
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
  ATerm a_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_4 (ATerm t)
      {
        ATerm d_96 = NULL;
        d_96 = t;
        m_95 :
        if(!(match_string(d_96, "-i")))
          {
            if(!(match_string(d_96, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm l_96 = NULL;
        ATerm s_28;
        s_28 = t;
        {
          ATerm e_96 = NULL;
          ATerm f_96 = NULL;
          f_96 = t;
          if(((e_96 != NULL) && (e_96 != f_96)))
            _fail(f_96);
          else
            e_96 = f_96;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_u_28, not_null(e_96));
            t = set_config_0(t);
          }
        }
        t = s_28;
        {
          ATerm n_96 = NULL;
          n_96 = t;
          if(((l_96 != NULL) && (l_96 != n_96)))
            _fail(n_96);
          else
            l_96 = n_96;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_96));
        }
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        t = term_v_28;
        return(t);
      }
      t = ArgOption_3(t, u_4, v_4, w_4);
      LocalPopChoice(c_28);
    }
  else
    {
      t = a_28;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_4 (ATerm t)
            {
              ATerm o_96 = NULL;
              o_96 = t;
              p_95 :
              if(!(match_string(o_96, "-o")))
                {
                  if(!(match_string(o_96, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm y_4 (ATerm t)
            {
              ATerm r_96 = NULL;
              ATerm r_29;
              r_29 = t;
              {
                ATerm p_96 = NULL;
                ATerm q_96 = NULL;
                q_96 = t;
                if(((p_96 != NULL) && (p_96 != q_96)))
                  _fail(q_96);
                else
                  p_96 = q_96;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_29, not_null(p_96));
                  t = set_config_0(t);
                }
              }
              t = r_29;
              {
                ATerm s_96 = NULL;
                s_96 = t;
                if(((r_96 != NULL) && (r_96 != s_96)))
                  _fail(s_96);
                else
                  r_96 = s_96;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_96));
              }
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              t = term_t_29;
              return(t);
            }
            t = ArgOption_3(t, x_4, y_4, z_4);
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm u_29 = t;
              int v_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm t_96 = NULL;
                    t_96 = t;
                    s_95 :
                    if(!(match_string(t_96, "-S")))
                      {
                        if(!(match_string(t_96, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_5 (ATerm t)
                  {
                    t = term_x_29;
                    t = set_config_0(t);
                    t = term_y_29;
                    return(t);
                  }
                  ATerm c_5 (ATerm t)
                  {
                    t = term_z_29;
                    return(t);
                  }
                  t = Option_3(t, a_5, b_5, c_5);
                  LocalPopChoice(v_29);
                }
              else
                {
                  t = u_29;
                  {
                    ATerm a_30 = t;
                    int f_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_5 (ATerm t)
                        {
                          ATerm u_96 = NULL;
                          u_96 = t;
                          u_95 :
                          if(!(match_string(u_96, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_5 (ATerm t)
                        {
                          ATerm x_96 = NULL;
                          ATerm g_30;
                          g_30 = t;
                          {
                            ATerm v_96 = NULL;
                            ATerm w_96 = NULL;
                            t = string_to_int_0(t);
                            {
                              w_96 = t;
                              if(((v_96 != NULL) && (v_96 != w_96)))
                                _fail(w_96);
                              else
                                v_96 = w_96;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(v_96));
                              t = set_config_0(t);
                            }
                          }
                          t = g_30;
                          {
                            ATerm y_96 = NULL;
                            y_96 = t;
                            if(((x_96 != NULL) && (x_96 != y_96)))
                              _fail(y_96);
                            else
                              x_96 = y_96;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_96));
                          }
                          return(t);
                        }
                        ATerm f_5 (ATerm t)
                        {
                          t = term_i_30;
                          return(t);
                        }
                        t = ArgOption_3(t, d_5, e_5, f_5);
                        LocalPopChoice(f_30);
                      }
                    else
                      {
                        t = a_30;
                        {
                          ATerm j_30 = t;
                          int k_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_5 (ATerm t)
                              {
                                ATerm z_96 = NULL;
                                z_96 = t;
                                y_95 :
                                if(!(match_string(z_96, "-k")))
                                  {
                                    if(!(match_string(z_96, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm h_5 (ATerm t)
                              {
                                ATerm l_30;
                                l_30 = t;
                                {
                                  ATerm a_97 = NULL;
                                  ATerm b_97 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    b_97 = t;
                                    if(((a_97 != NULL) && (a_97 != b_97)))
                                      _fail(b_97);
                                    else
                                      a_97 = b_97;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_30, not_null(a_97));
                                    t = set_config_0(t);
                                  }
                                }
                                t = l_30;
                                return(t);
                              }
                              ATerm i_5 (ATerm t)
                              {
                                t = term_n_30;
                                return(t);
                              }
                              t = ArgOption_3(t, g_5, h_5, i_5);
                              LocalPopChoice(k_30);
                            }
                          else
                            {
                              t = j_30;
                              {
                                ATerm o_30 = t;
                                int p_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_5 (ATerm t)
                                    {
                                      ATerm c_97 = NULL;
                                      c_97 = t;
                                      a_96 :
                                      if(!(match_string(c_97, "-v")))
                                        {
                                          if(!(match_string(c_97, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm k_5 (ATerm t)
                                    {
                                      t = term_v_30;
                                      t = set_config_0(t);
                                      t = term_w_30;
                                      return(t);
                                    }
                                    ATerm l_5 (ATerm t)
                                    {
                                      t = term_x_30;
                                      return(t);
                                    }
                                    t = Option_3(t, j_5, k_5, l_5);
                                    LocalPopChoice(p_30);
                                  }
                                else
                                  {
                                    t = o_30;
                                    {
                                      ATerm y_30 = t;
                                      int d_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_5 (ATerm t)
                                          {
                                            ATerm d_97 = NULL;
                                            d_97 = t;
                                            b_96 :
                                            if(!(match_string(d_97, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm n_5 (ATerm t)
                                          {
                                            t = term_h_31;
                                            t = set_config_0(t);
                                            t = term_i_31;
                                            return(t);
                                          }
                                          ATerm o_5 (ATerm t)
                                          {
                                            t = term_j_31;
                                            return(t);
                                          }
                                          t = Option_3(t, m_5, n_5, o_5);
                                          LocalPopChoice(d_31);
                                        }
                                      else
                                        {
                                          t = y_30;
                                          {
                                            ATerm p_5 (ATerm t)
                                            {
                                              ATerm e_97 = NULL;
                                              e_97 = t;
                                              c_96 :
                                              if(!(match_string(e_97, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm q_5 (ATerm t)
                                            {
                                              t = term_l_31;
                                              t = set_config_0(t);
                                              t = term_v_31;
                                              return(t);
                                            }
                                            ATerm r_5 (ATerm t)
                                            {
                                              t = term_w_31;
                                              return(t);
                                            }
                                            t = Option_3(t, p_5, q_5, r_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATempty, term_x_31));
  {
    t = printnl_0(t);
    {
      t = term_k_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_97 = NULL;
  n_97 = t;
  t = SSL_TicksToSeconds(not_null(n_97));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL;
  s_97 = t;
  r_97 :
  if(match_cons(s_97, sym__2))
    {
      t_97 = ATgetArgument(s_97, 0);
      u_97 = ATgetArgument(s_97, 1);
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_97), not_null(u_97));
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = SSL_addr(not_null(t_97), not_null(u_97));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_104 (ATerm), ATerm j_104 (ATerm))
{
  ATerm a_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_104(t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = a_32;
      {
        ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
        b_98 = t;
        a_98 :
        if(((ATgetType(b_98) == AT_LIST) && ((ATermList) b_98 != ATempty)))
          {
            c_98 = ATgetFirst((ATermList) b_98);
            d_98 = (ATerm) ATgetNext((ATermList) b_98);
            {
              ATerm g_98 = NULL;
              ATerm h_98 = NULL;
              t = not_null(d_98);
              {
                t = foldr_2(t, i_104, j_104);
                {
                  h_98 = t;
                  if(((g_98 != NULL) && (g_98 != h_98)))
                    _fail(h_98);
                  else
                    g_98 = h_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_98), not_null(g_98));
                t = j_104(t);
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
  ATerm o_98 = NULL;
  ATerm q_98 = NULL;
  o_98 = t;
  {
    ATerm r_98 = NULL;
    ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
    t = not_null(o_98);
    {
      r_98 = t;
      {
        t = SSL_explode_term(not_null(r_98));
        {
          t_98 = t;
          n_98 :
          if(match_cons(t_98, sym__2))
            {
              u_98 = ATgetArgument(t_98, 0);
              v_98 = ATgetArgument(t_98, 1);
              if(((q_98 != NULL) && (q_98 != v_98)))
                _fail(v_98);
              else
                q_98 = v_98;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_98);
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
    ATerm s_5 (ATerm t)
    {
      t = term_w_29;
      return(t);
    }
    t = crush_2(t, s_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
  f_99 = t;
  e_99 :
  if(match_cons(f_99, sym__2))
    {
      g_99 = ATgetArgument(f_99, 0);
      h_99 = ATgetArgument(f_99, 1);
      {
        ATerm g_32;
        g_32 = t;
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_99), not_null(h_99));
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              t = SSL_gtr(not_null(g_99), not_null(h_99));
            }
        }
        t = g_32;
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
  ATerm n_99 = NULL;
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL;
      o_99 = t;
      m_99 :
      if(match_cons(o_99, sym__2))
        {
          p_99 = ATgetArgument(o_99, 0);
          q_99 = ATgetArgument(o_99, 1);
          {
            if(((n_99 != NULL) && (n_99 != p_99)))
              _fail(p_99);
            else
              n_99 = p_99;
            if(((n_99 != NULL) && (n_99 != q_99)))
              _fail(q_99);
            else
              n_99 = q_99;
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
ATerm if_verbose1_1 (ATerm t, ATerm w_92 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm l_32;
    l_32 = t;
    {
      ATerm z_99 = NULL;
      ATerm a_100 = NULL;
      t = term_q_26;
      {
        t = get_config_0(t);
        {
          a_100 = t;
          if(((z_99 != NULL) && (z_99 != a_100)))
            _fail(a_100);
          else
            z_99 = a_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_99), term_k_15);
        t = geq_0(t);
      }
    }
    t = l_32;
    t = w_92(t);
    return(t);
  }
  t = try_1(t, t_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm e_100 = NULL,g_100 = NULL;
    ATerm m_32;
    m_32 = t;
    {
      ATerm f_100 = NULL;
      t = run_time_0(t);
      {
        f_100 = t;
        if(((e_100 != NULL) && (e_100 != f_100)))
          _fail(f_100);
        else
          e_100 = f_100;
      }
    }
    t = m_32;
    {
      ATerm h_100 = NULL;
      t = term_n_32;
      {
        t = get_config_0(t);
        {
          h_100 = t;
          if(((g_100 != NULL) && (g_100 != h_100)))
            _fail(h_100);
          else
            g_100 = h_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_32), not_null(e_100)), term_o_32), not_null(g_100)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_5);
  {
    t = term_w_29;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_100 = NULL;
  o_100 = t;
  n_100 :
  if(match_cons(o_100, sym_Version_0))
    {
      ATerm q_100 = NULL,s_100 = NULL;
      ATerm q_32;
      q_32 = t;
      {
        ATerm r_100 = NULL;
        t = SSLgetAnnotations(not_null(o_100));
        {
          r_100 = t;
          if(((q_100 != NULL) && (q_100 != r_100)))
            _fail(r_100);
          else
            q_100 = r_100;
        }
      }
      t = q_32;
      {
        ATerm t_100 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_100));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_95 (ATerm))
{
  ATerm v_5 (ATerm t)
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
  t = option_defined_1(t, v_5);
  t = t_95(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_100 = NULL;
  y_100 = t;
  t = SSL_table_create(not_null(y_100));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_101 = NULL;
  c_101 = t;
  {
    ATerm v_32;
    v_32 = t;
    {
      t = term_w_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_32, term_x_32, not_null(c_101));
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
  ATerm k_101 = NULL;
  k_101 = t;
  t = SSL_table_destroy(not_null(k_101));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_101 = NULL;
  o_101 = t;
  t = SSL_exit(not_null(o_101));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm r_101 (ATerm t)
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = Cons_2(t, h_108, r_101);
      }
    return(t);
  }
  t = r_101(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm y_101 = NULL,z_101 = NULL,b_102 = NULL;
  b_102 = t;
  x_101 :
  if(((ATgetType(b_102) == AT_LIST) && ((ATermList) b_102 != ATempty)))
    {
      y_101 = ATgetFirst((ATermList) b_102);
      z_101 = (ATerm) ATgetNext((ATermList) b_102);
      {
        ATerm e_102 = NULL;
        t = not_null(z_101);
        {
          ATerm a_33;
          a_33 = t;
          {
            ATerm h_102 = NULL,j_102 = NULL,l_102 = NULL;
            ATerm b_33;
            b_33 = t;
            {
              ATerm i_102 = NULL;
              t = o_0(t);
              {
                i_102 = t;
                if(((h_102 != NULL) && (h_102 != i_102)))
                  _fail(i_102);
                else
                  h_102 = i_102;
              }
            }
            t = b_33;
            {
              ATerm k_102 = NULL;
              t = not_null(y_101);
              {
                t = n_0(t);
                {
                  k_102 = t;
                  if(((j_102 != NULL) && (j_102 != k_102)))
                    _fail(k_102);
                  else
                    j_102 = k_102;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_102)), not_null(j_102));
                {
                  l_102 = t;
                  if(((e_102 != NULL) && (e_102 != l_102)))
                    _fail(l_102);
                  else
                    e_102 = l_102;
                }
              }
            }
          }
          t = a_33;
          {
            ATerm w_5 (ATerm t)
            {
              t = not_null(e_102);
              return(t);
            }
            t = reverse_acc_2(t, n_0, w_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) b_102 == ATempty))
        {
          {
            t = term_w_6;
            t = o_0(t);
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
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_5);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm s_102 = NULL;
  s_102 = t;
  t = SSL_implode_string(not_null(s_102));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_108 (ATerm))
{
  ATerm w_102 (ATerm t)
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_102);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        {
          t = Nil_0(t);
          t = w_108(t);
        }
      }
    return(t);
  }
  t = w_102(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm z_102 = NULL,a_103 = NULL,d_103 = NULL;
        z_102 = t;
        y_102 :
        if(((ATgetType(z_102) == AT_LIST) && ((ATermList) z_102 != ATempty)))
          {
            a_103 = ATgetFirst((ATermList) z_102);
            d_103 = (ATerm) ATgetNext((ATermList) z_102);
            {
              t = not_null(a_103);
              {
                ATerm y_5 (ATerm t)
                {
                  t = not_null(d_103);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_5);
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
  ATerm q_103 = NULL;
  q_103 = t;
  t = SSL_explode_string(not_null(q_103));
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
ATerm short_description_1 (ATerm t, ATerm p_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm y_103 = NULL,z_103 = NULL;
  y_103 = t;
  x_103 :
  if(match_cons(y_103, sym_Program_1))
    {
      z_103 = ATgetArgument(y_103, 0);
      {
        ATerm c_104 = NULL,e_104 = NULL;
        ATerm d_104 = NULL;
        t = SSLgetAnnotations(not_null(y_103));
        {
          d_104 = t;
          if(((c_104 != NULL) && (c_104 != d_104)))
            _fail(d_104);
          else
            c_104 = d_104;
        }
        {
          t = not_null(z_103);
          {
            ATerm g_104 = NULL;
            t = h_79(t);
            {
              e_104 = t;
              {
                ATerm h_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_104)), not_null(c_104));
                {
                  h_104 = t;
                  if(((g_104 != NULL) && (g_104 != h_104)))
                    _fail(h_104);
                  else
                    g_104 = h_104;
                }
                t = not_null(g_104);
              }
            }
          }
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
  ATerm v_104 = NULL;
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm w_104 = NULL;
      w_104 = t;
      if(((v_104 != NULL) && (v_104 != w_104)))
        _fail(w_104);
      else
        v_104 = w_104;
      return(t);
    }
    t = Program_1(t, a_6);
    return(t);
  }
  t = option_defined_1(t, z_5);
  {
    ATerm b_6 (ATerm t)
    {
      ATerm x_104 = NULL;
      ATerm y_104 = NULL;
      t = term_w_6;
      {
        ATerm c_6 (ATerm t)
        {
          t = not_null(v_104);
          return(t);
        }
        t = short_description_1(t, c_6);
        {
          t = concat_strings_0(t);
          {
            y_104 = t;
            if(((x_104 != NULL) && (x_104 != y_104)))
              _fail(y_104);
            else
              x_104 = y_104;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATinsert(ATempty, not_null(x_104)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATinsert(ATempty, term_g_33));
      {
        t = printnl_0(t);
        {
          t = term_j_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_6 (ATerm t)
                {
                  ATerm z_104 = NULL;
                  ATerm a_105 = NULL;
                  a_105 = t;
                  if(((z_104 != NULL) && (z_104 != a_105)))
                    _fail(a_105);
                  else
                    z_104 = a_105;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_104)), term_k_33));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_6);
                {
                  ATerm e_6 (ATerm t)
                  {
                    ATerm b_105 = NULL;
                    ATerm c_105 = NULL;
                    ATerm f_6 (ATerm t)
                    {
                      t = not_null(v_104);
                      return(t);
                    }
                    t = long_description_1(t, f_6);
                    {
                      c_105 = t;
                      if(((b_105 != NULL) && (b_105 != c_105)))
                        _fail(c_105);
                      else
                        b_105 = c_105;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_26, (ATerm) ATinsert(CheckATermList(not_null(b_105)), term_l_33));
                      t = printnl_0(t);
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
ATerm Undefined_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm n_105 = NULL,o_105 = NULL;
  n_105 = t;
  m_105 :
  if(match_cons(n_105, sym_Undefined_1))
    {
      o_105 = ATgetArgument(n_105, 0);
      {
        ATerm x_105 = NULL,z_105 = NULL;
        ATerm y_105 = NULL;
        t = SSLgetAnnotations(not_null(n_105));
        {
          y_105 = t;
          if(((x_105 != NULL) && (x_105 != y_105)))
            _fail(y_105);
          else
            x_105 = y_105;
        }
        {
          t = not_null(o_105);
          {
            ATerm g_106 = NULL;
            t = i_79(t);
            {
              z_105 = t;
              {
                ATerm h_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_105)), not_null(x_105));
                {
                  h_106 = t;
                  if(((g_106 != NULL) && (g_106 != h_106)))
                    _fail(h_106);
                  else
                    g_106 = h_106;
                }
                t = not_null(g_106);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_108 (ATerm))
{
  ATerm m_106 (ATerm t)
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_108, _id);
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        t = Cons_2(t, _id, m_106);
      }
    return(t);
  }
  t = m_106(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_92 (ATerm))
{
  t = fetch_1(t, u_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_106 = NULL;
  r_106 = t;
  q_106 :
  if(match_cons(r_106, sym_Help_0))
    {
      ATerm t_106 = NULL,v_106 = NULL;
      ATerm o_33;
      o_33 = t;
      {
        ATerm u_106 = NULL;
        t = SSLgetAnnotations(not_null(r_106));
        {
          u_106 = t;
          if(((t_106 != NULL) && (t_106 != u_106)))
            _fail(u_106);
          else
            t_106 = u_106;
        }
      }
      t = o_33;
      {
        ATerm w_106 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_106));
        {
          w_106 = t;
          if(((v_106 != NULL) && (v_106 != w_106)))
            _fail(w_106);
          else
            v_106 = w_106;
        }
        t = not_null(v_106);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_112 (ATerm))
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_112(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL;
  c_107 = t;
  b_107 :
  if(match_cons(c_107, sym__2))
    {
      d_107 = ATgetArgument(c_107, 0);
      e_107 = ATgetArgument(c_107, 1);
      t = SSL_table_get(not_null(d_107), not_null(e_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL;
  l_107 = t;
  k_107 :
  if(match_cons(l_107, sym__3))
    {
      m_107 = ATgetArgument(l_107, 0);
      n_107 = ATgetArgument(l_107, 1);
      o_107 = ATgetArgument(l_107, 2);
      {
        ATerm t_33;
        t_33 = t;
        {
          ATerm s_107 = NULL;
          ATerm t_107 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_107), not_null(n_107));
          {
            ATerm u_33 = t;
            int w_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_33);
              }
            else
              {
                t = u_33;
                t = (ATerm) ATempty;
              }
            {
              t_107 = t;
              if(((s_107 != NULL) && (s_107 != t_107)))
                _fail(t_107);
              else
                s_107 = t_107;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_107), not_null(n_107), (ATerm) ATinsert(CheckATermList(not_null(s_107)), not_null(o_107)));
            t = table_put_0(t);
          }
        }
        t = t_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm x_107 = NULL;
  ATerm y_107 = NULL;
  t = term_w_6;
  {
    t = u_91(t);
    {
      y_107 = t;
      if(((x_107 != NULL) && (x_107 != y_107)))
        _fail(y_107);
      else
        x_107 = y_107;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_33, term_i_33, not_null(x_107));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
  e_108 = t;
  d_108 :
  if(match_string(e_108, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(e_108) == AT_LIST) && ((ATermList) e_108 != ATempty)))
        {
          f_108 = ATgetFirst((ATermList) e_108);
          g_108 = (ATerm) ATgetNext((ATermList) e_108);
          {
            ATerm l_108 = NULL;
            ATerm x_33;
            x_33 = t;
            {
              t = not_null(f_108);
              t = a_0(t);
            }
            t = x_33;
            {
              ATerm m_108 = NULL;
              t = term_w_6;
              {
                t = b_0(t);
                {
                  m_108 = t;
                  if(((l_108 != NULL) && (l_108 != m_108)))
                    _fail(m_108);
                  else
                    l_108 = m_108;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_108)), not_null(l_108));
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
    ATerm t_108 = NULL;
    t_108 = t;
    s_108 :
    if(!(match_string(t_108, "--help")))
      {
        if(!(match_string(t_108, "-h")))
          {
            if(!(match_string(t_108, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_y_33;
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_z_33;
    return(t);
  }
  t = Option_3(t, g_6, h_6, i_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
  y_108 = t;
  v_108 :
  if(((ATgetType(y_108) == AT_LIST) && ((ATermList) y_108 != ATempty)))
    {
      z_108 = ATgetFirst((ATermList) y_108);
      a_109 = (ATerm) ATgetNext((ATermList) y_108);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_109)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_108)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_88 (ATerm), ATerm z_88 (ATerm))
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  k_109 = t;
  j_109 :
  if(((ATgetType(k_109) == AT_LIST) && ((ATermList) k_109 != ATempty)))
    {
      l_109 = ATgetFirst((ATermList) k_109);
      m_109 = (ATerm) ATgetNext((ATermList) k_109);
      {
        ATerm q_109 = NULL,s_109 = NULL;
        ATerm r_109 = NULL;
        t = SSLgetAnnotations(not_null(k_109));
        {
          r_109 = t;
          if(((q_109 != NULL) && (q_109 != r_109)))
            _fail(r_109);
          else
            q_109 = r_109;
        }
        {
          t = not_null(l_109);
          {
            ATerm u_109 = NULL;
            t = y_88(t);
            {
              s_109 = t;
              {
                t = not_null(m_109);
                {
                  ATerm w_109 = NULL;
                  t = z_88(t);
                  {
                    u_109 = t;
                    {
                      ATerm x_109 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_109)), not_null(s_109)), not_null(q_109));
                      {
                        x_109 = t;
                        if(((w_109 != NULL) && (w_109 != x_109)))
                          _fail(x_109);
                        else
                          w_109 = x_109;
                      }
                      t = not_null(w_109);
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
  ATerm o_110 = NULL;
  o_110 = t;
  n_110 :
  if(((ATermList) o_110 == ATempty))
    {
      {
        ATerm q_110 = NULL,s_110 = NULL;
        ATerm a_34;
        a_34 = t;
        {
          ATerm r_110 = NULL;
          t = SSLgetAnnotations(not_null(o_110));
          {
            r_110 = t;
            if(((q_110 != NULL) && (q_110 != r_110)))
              _fail(r_110);
            else
              q_110 = r_110;
          }
        }
        t = a_34;
        {
          ATerm t_110 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_110));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL;
  z_110 = t;
  y_110 :
  if(match_cons(z_110, sym__2))
    {
      a_111 = ATgetArgument(z_110, 0);
      b_111 = ATgetArgument(z_110, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_26, not_null(a_111), not_null(b_111));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm b_34;
  b_34 = t;
  {
    ATerm k_6 (ATerm t)
    {
      t = term_c_34;
      t = s_91(t);
      return(t);
    }
    t = try_1(t, k_6);
  }
  t = b_34;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm j_111 = NULL;
      ATerm d_34;
      d_34 = t;
      {
        ATerm h_111 = NULL;
        ATerm i_111 = NULL;
        i_111 = t;
        if(((h_111 != NULL) && (h_111 != i_111)))
          _fail(i_111);
        else
          h_111 = i_111;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_32, not_null(h_111));
          t = set_config_0(t);
        }
      }
      t = d_34;
      {
        ATerm k_111 = NULL;
        k_111 = t;
        if(((j_111 != NULL) && (j_111 != k_111)))
          _fail(k_111);
        else
          j_111 = k_111;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_111));
      }
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm e_34 = t;
      int h_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_34);
            }
          else
            {
              t = i_34;
              {
                t = s_91(t);
                t = Cons_2(t, _id, m_6);
              }
            }
          LocalPopChoice(h_34);
        }
      else
        {
          t = e_34;
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
  ATerm q_111 = NULL,r_111 = NULL,s_111 = NULL;
  ATerm r_34;
  r_34 = t;
  {
    ATerm t_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL;
    t_111 = t;
    p_111 :
    if(match_cons(t_111, sym__3))
      {
        w_111 = ATgetArgument(t_111, 0);
        x_111 = ATgetArgument(t_111, 1);
        y_111 = ATgetArgument(t_111, 2);
        {
          if(((q_111 != NULL) && (q_111 != w_111)))
            _fail(w_111);
          else
            q_111 = w_111;
          {
            if(((r_111 != NULL) && (r_111 != x_111)))
              _fail(x_111);
            else
              r_111 = x_111;
            {
              if(((s_111 != NULL) && (s_111 != y_111)))
                _fail(y_111);
              else
                s_111 = y_111;
              t = SSL_table_put(not_null(q_111), not_null(r_111), not_null(s_111));
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
ATerm parse_options_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm b_112 = NULL;
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
          t = r_91(t);
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
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_w_29;
                t = exit_0(t);
              }
            }
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm c_112 = NULL;
                  c_112 = t;
                  if(((b_112 != NULL) && (b_112 != c_112)))
                    _fail(c_112);
                  else
                    b_112 = c_112;
                  return(t);
                }
                t = Undefined_1(t, q_6);
                return(t);
              }
              t = option_defined_1(t, p_6);
              {
                ATerm d_35;
                d_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_112)), term_e_35));
                  t = printnl_0(t);
                }
                t = d_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_15;
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
        ATerm j_35;
        j_35 = t;
        {
          t = term_h_33;
          t = table_destroy_0(t);
        }
        t = j_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm))
{
  t = parse_options_1(t, q_94);
  {
    t = store_options_0(t);
    {
      t = s_94(t);
      {
        ATerm k_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_94);
            LocalPopChoice(p_35);
          }
        else
          {
            t = k_35;
            {
              ATerm q_35 = t;
              int r_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_94(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_35);
                }
              else
                {
                  t = q_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_95(t);
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, h_95);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, r_6, j_95, k_95, s_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      ATerm u_35;
      u_35 = t;
      {
        ATerm f_112 = NULL;
        ATerm g_112 = NULL;
        t = term_n_32;
        {
          t = get_config_0(t);
          {
            g_112 = t;
            if(((f_112 != NULL) && (f_112 != g_112)))
              _fail(g_112);
            else
              f_112 = g_112;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATempty, not_null(f_112)));
          t = printnl_0(t);
        }
      }
      t = u_35;
      return(t);
    }
    t = if_verbose2_1(t, u_6);
    return(t);
  }
  t = iowrap_4(t, b_95, c_95, d_95, t_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  t = iowrap_3(t, z_94, a_95, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_94 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    t = _2(t, _id, w_94);
    return(t);
  }
  t = iowrap_2(t, v_6, _fail);
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
