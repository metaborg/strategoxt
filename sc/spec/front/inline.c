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
ATerm term_m_34;
ATerm term_b_34;
ATerm term_t_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_l_29;
ATerm term_c_29;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_n_27;
ATerm term_o_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_s_19;
ATerm term_z_17;
ATerm term_f_17;
ATerm term_f_15;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_o_13;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
void init_constant_terms (void)
{
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_o_26);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_26);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_r_6);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_r_6);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_r_6);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_y_32, term_z_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__3, term_y_32, term_z_32, (ATerm) ATempty);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm g_94 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_110 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm m_114 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_86 (ATerm), ATerm l_86 (ATerm));
ATerm Let_2 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm));
ATerm sboundin_3 (ATerm, ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm i_114 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm a_85 (ATerm));
ATerm tboundin_3 (ATerm, ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm j_97 (ATerm), ATerm k_97 (ATerm));
ATerm for_3 (ATerm, ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm));
ATerm HdMember_1 (ATerm, ATerm e_103 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm r_100 (ATerm), ATerm s_100 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm x_100 (ATerm), ATerm y_100 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm l_100 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm q_99 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_99 (ATerm));
ATerm rename_4 (ATerm, ATerm z_100 (ATerm, ATerm (ATerm)), ATerm a_101 (ATerm), ATerm b_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_101 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm b_94 (ATerm));
ATerm restore_always_2 (ATerm, ATerm k_110 (ATerm), ATerm l_110 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm a_94 (ATerm));
ATerm scope_2 (ATerm, ATerm c_94 (ATerm), ATerm d_94 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm e_94 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm c_102 (ATerm));
ATerm crush_3 (ATerm, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm Choice_2 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm Cong_2 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm));
ATerm Match_1 (ATerm, ATerm k_87 (ATerm));
ATerm Seq_2 (ATerm, ATerm v_85 (ATerm), ATerm w_85 (ATerm));
ATerm Scope_2 (ATerm, ATerm o_87 (ATerm), ATerm p_87 (ATerm));
ATerm Build_1 (ATerm, ATerm l_87 (ATerm));
ATerm SVar_1 (ATerm, ATerm j_86 (ATerm));
ATerm Call_2 (ATerm, ATerm y_86 (ATerm), ATerm z_86 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm c_112 (ATerm));
ATerm SDef_3 (ATerm, ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm));
ATerm zip_1 (ATerm, ATerm x_107 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm r_87 (ATerm), ATerm s_87 (ATerm));
ATerm Explode_2 (ATerm, ATerm f_84 (ATerm), ATerm g_84 (ATerm));
ATerm Op_2 (ATerm, ATerm r_85 (ATerm), ATerm s_85 (ATerm));
ATerm pat_td_1 (ATerm, ATerm v_88 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm s_96 (ATerm), ATerm t_96 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_96 (ATerm));
ATerm downup_1 (ATerm, ATerm o_110 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm k_85 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_85 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_88 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_91 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm y_101 (ATerm), ATerm z_101 (ATerm));
ATerm crush_2 (ATerm, ATerm n_103 (ATerm), ATerm o_103 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_93 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_109 (ATerm), ATerm g_109 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_93 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_106 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_90 (ATerm));
ATerm map_1 (ATerm, ATerm u_105 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_90 (ATerm));
ATerm Program_1 (ATerm, ATerm c_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_106 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_109 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_90 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm m_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_87 (ATerm), ATerm u_87 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_90 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm x_92 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_92 (ATerm), ATerm u_92 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_92 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,c_6 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      c_6 = ATgetArgument(c_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(c_6));
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
ATerm rewrite_1 (ATerm t, ATerm g_94 (ATerm))
{
  ATerm f_7 = NULL;
  ATerm h_7 = NULL;
  f_7 = t;
  {
    ATerm l_7 = NULL;
    t = term_r_6;
    {
      t = g_94(t);
      {
        l_7 = t;
        if(((h_7 != NULL) && (h_7 != l_7)))
          _fail(l_7);
        else
          h_7 = l_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(f_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  u_7 = t;
  s_7 :
  if(match_cons(u_7, sym_Call_2))
    {
      v_7 = ATgetArgument(u_7, 0);
      x_7 = ATgetArgument(u_7, 1);
      t_7 :
      if(match_cons(v_7, sym_SVar_1))
        {
          w_7 = ATgetArgument(v_7, 0);
          {
            ATerm a_8 = NULL;
            ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_7));
            {
              ATerm a_0 (ATerm t)
              {
                t = term_s_6;
                return(t);
              }
              t = rewrite_1(t, a_0);
              {
                b_8 = t;
                q_7 :
                if(match_cons(b_8, sym_Defined_2))
                  {
                    c_8 = ATgetArgument(b_8, 0);
                    d_8 = ATgetArgument(b_8, 1);
                    r_7 :
                    if(match_string(c_8, "l_0"))
                      {
                        if(((a_8 != NULL) && (a_8 != d_8)))
                          _fail(d_8);
                        else
                          a_8 = d_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_8)), not_null(x_7));
          }
        }
      else
        {
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
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  n_8 = t;
  k_8 :
  if(match_cons(n_8, sym_Call_2))
    {
      o_8 = ATgetArgument(n_8, 0);
      q_8 = ATgetArgument(n_8, 1);
      l_8 :
      if(match_cons(o_8, sym_SVar_1))
        {
          p_8 = ATgetArgument(o_8, 0);
          m_8 :
          if(((ATermList) q_8 == ATempty))
            {
              {
                ATerm s_8 = NULL;
                ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_8));
                {
                  ATerm b_0 (ATerm t)
                  {
                    t = term_t_6;
                    return(t);
                  }
                  t = rewrite_1(t, b_0);
                  {
                    t_8 = t;
                    i_8 :
                    if(match_cons(t_8, sym_Defined_2))
                      {
                        u_8 = ATgetArgument(t_8, 0);
                        v_8 = ATgetArgument(t_8, 1);
                        j_8 :
                        if(match_string(u_8, "k_0"))
                          {
                            if(((s_8 != NULL) && (s_8 != v_8)))
                              _fail(v_8);
                            else
                              s_8 = v_8;
                          }
                        else
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
                  t = not_null(s_8);
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
ATerm topdown_1 (ATerm t, ATerm m_110 (ATerm))
{
  t = m_110(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, m_110);
      return(t);
    }
    t = _all(t, e_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  n_9 = t;
  a_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      v_9 = ATgetArgument(n_9, 1);
      b_9 :
      if(match_cons(o_9, sym_VarDec_2))
        {
          p_9 = ATgetArgument(o_9, 0);
          q_9 = ATgetArgument(o_9, 1);
          c_9 :
          if(match_cons(q_9, sym_FunType_2))
            {
              r_9 = ATgetArgument(q_9, 0);
              u_9 = ATgetArgument(q_9, 1);
              d_9 :
              if(((ATgetType(r_9) == AT_LIST) && ((ATermList) r_9 != ATempty)))
                {
                  s_9 = ATgetFirst((ATermList) r_9);
                  t_9 = (ATerm) ATgetNext((ATermList) r_9);
                  e_9 :
                  if(((ATgetType(t_9) == AT_LIST) && ((ATermList) t_9 != ATempty)))
                    {
                      i_9 = ATgetFirst((ATermList) t_9);
                      j_9 = (ATerm) ATgetNext((ATermList) t_9);
                      f_9 :
                      if(match_cons(v_9, sym_Call_2))
                        {
                          k_9 = ATgetArgument(v_9, 0);
                          m_9 = ATgetArgument(v_9, 1);
                          g_9 :
                          if(match_cons(k_9, sym_SVar_1))
                            {
                              l_9 = ATgetArgument(k_9, 0);
                              h_9 :
                              if(((ATermList) m_9 == ATempty))
                                {
                                  {
                                    ATerm u_6;
                                    u_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_6, not_null(l_9)));
                                      {
                                        ATerm f_0 (ATerm t)
                                        {
                                          t = term_s_6;
                                          return(t);
                                        }
                                        t = assert_1(t, f_0);
                                      }
                                    }
                                    t = u_6;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATermList) t_9 == ATempty))
                        {
                          {
                            ATerm w_6;
                            w_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_6, not_null(v_9)));
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_t_6;
                                  return(t);
                                }
                                t = assert_1(t, g_0);
                              }
                            }
                            t = w_6;
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  ATerm h_0 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_s_6;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
      h_10 = t;
      d_10 :
      if(match_cons(h_10, sym__3))
        {
          i_10 = ATgetArgument(h_10, 0);
          j_10 = ATgetArgument(h_10, 1);
          k_10 = ATgetArgument(h_10, 2);
          {
            if(((e_10 != NULL) && (e_10 != i_10)))
              _fail(i_10);
            else
              e_10 = i_10;
            {
              if(((f_10 != NULL) && (f_10 != j_10)))
                _fail(j_10);
              else
                f_10 = j_10;
              {
                if(((g_10 != NULL) && (g_10 != k_10)))
                  _fail(k_10);
                else
                  g_10 = k_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(f_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(g_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm y_6 = t;
                            int z_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(z_6);
                              }
                            else
                              {
                                t = y_6;
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && ((ATermList) o_10 != ATempty)))
    {
      p_10 = ATgetFirst((ATermList) o_10);
      q_10 = (ATerm) ATgetNext((ATermList) o_10);
      t = not_null(p_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm m_114 (ATerm))
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, m_114);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
            a_11 = t;
            v_10 :
            if(match_cons(a_11, sym__2))
              {
                b_11 = ATgetArgument(a_11, 0);
                f_11 = ATgetArgument(a_11, 1);
                w_10 :
                if(match_cons(b_11, sym_SDef_3))
                  {
                    c_11 = ATgetArgument(b_11, 0);
                    d_11 = ATgetArgument(b_11, 1);
                    e_11 = ATgetArgument(b_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_11), not_null(d_11), not_null(e_11));
                  }
                else
                  {
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
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, m_114);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
                  j_11 = t;
                  y_10 :
                  if(match_cons(j_11, sym__2))
                    {
                      k_11 = ATgetArgument(j_11, 0);
                      n_11 = ATgetArgument(j_11, 1);
                      z_10 :
                      if(match_cons(k_11, sym_VarDec_2))
                        {
                          l_11 = ATgetArgument(k_11, 0);
                          m_11 = ATgetArgument(k_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_11), not_null(m_11));
                        }
                      else
                        {
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
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = m_114(t);
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
ATerm Rec_2 (ATerm t, ATerm k_86 (ATerm), ATerm l_86 (ATerm))
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym_Rec_2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        ATerm f_12 = NULL,h_12 = NULL;
        ATerm g_12 = NULL;
        t = SSLgetAnnotations(not_null(z_11));
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
        {
          t = not_null(a_12);
          {
            ATerm j_12 = NULL;
            t = k_86(t);
            {
              h_12 = t;
              {
                t = not_null(b_12);
                {
                  ATerm l_12 = NULL;
                  t = l_86(t);
                  {
                    j_12 = t;
                    {
                      ATerm m_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(h_12), not_null(j_12)), not_null(f_12));
                      {
                        m_12 = t;
                        if(((l_12 != NULL) && (l_12 != m_12)))
                          _fail(m_12);
                        else
                          l_12 = m_12;
                      }
                      t = not_null(l_12);
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
ATerm Let_2 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_Let_2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(y_12));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
        {
          t = not_null(z_12);
          {
            ATerm i_13 = NULL;
            t = m_86(t);
            {
              g_13 = t;
              {
                t = not_null(a_13);
                {
                  ATerm k_13 = NULL;
                  t = n_86(t);
                  {
                    i_13 = t;
                    {
                      ATerm l_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(g_13), not_null(i_13)), not_null(e_13));
                      {
                        l_13 = t;
                        if(((k_13 != NULL) && (k_13 != l_13)))
                          _fail(l_13);
                        else
                          k_13 = l_13;
                      }
                      t = not_null(k_13);
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
ATerm sboundin_3 (ATerm t, ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm))
{
  ATerm e_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, n_114, n_114);
      LocalPopChoice(g_7);
    }
  else
    {
      t = e_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, p_114, p_114, n_114);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = Rec_2(t, p_114, n_114);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_Rec_2))
    {
      u_13 = ATgetArgument(t_13, 0);
      v_13 = ATgetArgument(t_13, 1);
      t = (ATerm) ATinsert(ATempty, not_null(u_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym_SDef_3))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      g_14 = ATgetArgument(d_14, 2);
      {
        t = not_null(f_14);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
            k_14 = t;
            b_14 :
            if(match_cons(k_14, sym_VarDec_2))
              {
                l_14 = ATgetArgument(k_14, 0);
                m_14 = ATgetArgument(k_14, 1);
                t = not_null(l_14);
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
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym_Let_2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        t = not_null(v_14);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
            z_14 = t;
            s_14 :
            if(match_cons(z_14, sym_SDef_3))
              {
                a_15 = ATgetArgument(z_14, 0);
                b_15 = ATgetArgument(z_14, 1);
                c_15 = ATgetArgument(z_14, 2);
                t = not_null(a_15);
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
    ATerm k_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = k_7;
        {
          ATerm n_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm i_114 (ATerm))
{
  t = Scope_2(t, i_114, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm a_85 (ATerm))
{
  ATerm n_15 = NULL,o_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_DynamicRules_1))
    {
      o_15 = ATgetArgument(n_15, 0);
      {
        ATerm r_15 = NULL,t_15 = NULL;
        ATerm s_15 = NULL;
        t = SSLgetAnnotations(not_null(n_15));
        {
          s_15 = t;
          if(((r_15 != NULL) && (r_15 != s_15)))
            _fail(s_15);
          else
            r_15 = s_15;
        }
        {
          t = not_null(o_15);
          {
            ATerm v_15 = NULL;
            t = a_85(t);
            {
              t_15 = t;
              {
                ATerm w_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(t_15)), not_null(r_15));
                {
                  w_15 = t;
                  if(((v_15 != NULL) && (v_15 != w_15)))
                    _fail(w_15);
                  else
                    v_15 = w_15;
                }
                t = not_null(v_15);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm))
{
  ATerm p_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, l_114, j_114);
      LocalPopChoice(y_7);
    }
  else
    {
      t = p_7;
      t = DynamicRules_1(t, j_114);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_DynamicRules_1))
    {
      e_16 = ATgetArgument(d_16, 0);
      {
        t = not_null(e_16);
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
  ATerm j_16 = NULL,k_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_Var_1))
    {
      k_16 = ATgetArgument(j_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(k_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm v_16 (ATerm t)
          {
            ATerm z_7 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                LocalPopChoice(e_8);
              }
            else
              {
                t = z_7;
                {
                  ATerm f_8 = t;
                  int g_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_1(t, g_1);
                      t = v_16(t);
                      LocalPopChoice(g_8);
                    }
                  else
                    {
                      t = f_8;
                      t = Cons_2(t, _id, v_16);
                    }
                }
              }
            return(t);
          }
          t = v_16(t);
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  z_16 = t;
  x_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      y_16 :
      if(((ATgetType(b_17) == AT_LIST) && ((ATermList) b_17 != ATempty)))
        {
          c_17 = ATgetFirst((ATermList) b_17);
          d_17 = (ATerm) ATgetNext((ATermList) b_17);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_17)), not_null(c_17)), not_null(d_17));
        }
      else
        {
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
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  s_17 = t;
  q_17 :
  if(((ATgetType(s_17) == AT_LIST) && ((ATermList) s_17 != ATempty)))
    {
      t_17 = ATgetFirst((ATermList) s_17);
      w_17 = (ATerm) ATgetNext((ATermList) s_17);
      r_17 :
      if(match_cons(t_17, sym__2))
        {
          u_17 = ATgetArgument(t_17, 0);
          v_17 = ATgetArgument(t_17, 1);
          {
            ATerm a_18 = NULL,b_18 = NULL,h_18 = NULL,n_18 = NULL;
            ATerm h_8;
            h_8 = t;
            {
              ATerm c_18 = NULL;
              ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
              t = not_null(v_17);
              {
                c_18 = t;
                {
                  t = SSL_explode_term(not_null(c_18));
                  {
                    e_18 = t;
                    l_17 :
                    if(match_cons(e_18, sym__2))
                      {
                        f_18 = ATgetArgument(e_18, 0);
                        g_18 = ATgetArgument(e_18, 1);
                        {
                          if(((a_18 != NULL) && (a_18 != f_18)))
                            _fail(f_18);
                          else
                            a_18 = f_18;
                          if(((b_18 != NULL) && (b_18 != g_18)))
                            _fail(g_18);
                          else
                            b_18 = g_18;
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
            t = h_8;
            {
              ATerm r_8;
              r_8 = t;
              {
                ATerm i_18 = NULL;
                ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
                t = not_null(u_17);
                {
                  i_18 = t;
                  {
                    t = SSL_explode_term(not_null(i_18));
                    {
                      k_18 = t;
                      o_17 :
                      if(match_cons(k_18, sym__2))
                        {
                          l_18 = ATgetArgument(k_18, 0);
                          m_18 = ATgetArgument(k_18, 1);
                          {
                            if(((a_18 != NULL) && (a_18 != l_18)))
                              _fail(l_18);
                            else
                              a_18 = l_18;
                            if(((h_18 != NULL) && (h_18 != m_18)))
                              _fail(m_18);
                            else
                              h_18 = m_18;
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
              t = r_8;
              {
                ATerm o_18 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(b_18));
                {
                  t = zip_1(t, _id);
                  {
                    o_18 = t;
                    if(((n_18 != NULL) && (n_18 != o_18)))
                      _fail(o_18);
                    else
                      n_18 = o_18;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(w_17));
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
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  y_18 = t;
  w_18 :
  if(((ATgetType(y_18) == AT_LIST) && ((ATermList) y_18 != ATempty)))
    {
      z_18 = ATgetFirst((ATermList) y_18);
      c_19 = (ATerm) ATgetNext((ATermList) y_18);
      x_18 :
      if(match_cons(z_18, sym__2))
        {
          a_19 = ATgetArgument(z_18, 0);
          b_19 = ATgetArgument(z_18, 1);
          {
            ATerm e_19 = NULL;
            if(((a_19 != NULL) && (a_19 != b_19)))
              _fail(b_19);
            else
              a_19 = b_19;
            {
              if(((e_19 != NULL) && (e_19 != c_19)))
                _fail(c_19);
              else
                e_19 = c_19;
              t = not_null(e_19);
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
ATerm while_not_2 (ATerm t, ATerm j_97 (ATerm), ATerm k_97 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_97(t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        {
          t = k_97(t);
          t = g_19(t);
        }
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm))
{
  t = m_97(t);
  t = while_not_2(t, n_97, o_97);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm e_103 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(((ATgetType(k_19) == AT_LIST) && ((ATermList) k_19 != ATempty)))
    {
      l_19 = ATgetFirst((ATermList) k_19);
      m_19 = (ATerm) ATgetNext((ATermList) k_19);
      {
        t = e_103(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm p_19 = NULL;
            p_19 = t;
            if(((l_19 != NULL) && (l_19 != p_19)))
              _fail(p_19);
            else
              l_19 = p_19;
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(m_19);
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
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
      v_19 = t;
      t_19 :
      if(match_cons(v_19, sym__2))
        {
          w_19 = ATgetArgument(v_19, 0);
          x_19 = ATgetArgument(v_19, 1);
          {
            t = not_null(w_19);
            {
              ATerm d_20 (ATerm t)
              {
                ATerm w_9 = t;
                int x_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(x_9);
                  }
                else
                  {
                    t = w_9;
                    {
                      ATerm y_9 = t;
                      int z_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_1 (ATerm t)
                          {
                            t = not_null(x_19);
                            return(t);
                          }
                          t = HdMember_1(t, i_1);
                          t = d_20(t);
                          LocalPopChoice(z_9);
                        }
                      else
                        {
                          t = y_9;
                          t = Cons_2(t, _id, d_20);
                        }
                    }
                  }
                return(t);
              }
              t = d_20(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm a_20 = NULL;
          a_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_20));
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          ATerm a_10 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                ATerm c_10 = t;
                int l_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(l_10);
                  }
                else
                  {
                    t = c_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, m_1);
              LocalPopChoice(b_10);
            }
          else
            {
              t = a_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, j_1, k_1, l_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_20 (ATerm t)
  {
    ATerm m_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_98(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = m_10;
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_20 = NULL;
              ATerm u_10;
              u_10 = t;
              {
                ATerm h_20 = NULL;
                t = w_98(t);
                {
                  h_20 = t;
                  if(((g_20 != NULL) && (g_20 != h_20)))
                    _fail(h_20);
                  else
                    g_20 = h_20;
                }
              }
              t = u_10;
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = not_null(g_20);
                    return(t);
                  }
                  t = split_2(t, i_20, p_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_98(t, n_1, i_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, r_1, union_0, i_20);
              }
            }
        }
      }
    return(t);
  }
  t = i_20(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm x_10 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = x_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  m_20 :
  if(match_cons(r_20, sym_LRule_1))
    {
      s_20 = ATgetArgument(r_20, 0);
      n_20 :
      if(match_cons(s_20, sym_Rule_3))
        {
          o_20 = ATgetArgument(s_20, 0);
          p_20 = ATgetArgument(s_20, 1);
          q_20 = ATgetArgument(s_20, 2);
          {
            t = not_null(o_20);
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
      if(match_cons(r_20, sym_Scope_2))
        {
          s_20 = ATgetArgument(r_20, 0);
          t_20 = ATgetArgument(r_20, 1);
          t = not_null(s_20);
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
  ATerm k_21 = NULL,l_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym_Var_1))
    {
      l_21 = ATgetArgument(k_21, 0);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_21 = NULL,q_21 = NULL;
            ATerm p_21 = NULL;
            t = SSLgetAnnotations(not_null(k_21));
            {
              p_21 = t;
              if(((o_21 != NULL) && (o_21 != p_21)))
                _fail(p_21);
              else
                o_21 = p_21;
            }
            {
              t = not_null(l_21);
              {
                ATerm s_21 = NULL;
                t = s_0(t);
                {
                  q_21 = t;
                  {
                    ATerm t_21 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_21)), not_null(o_21));
                    {
                      t_21 = t;
                      if(((s_21 != NULL) && (s_21 != t_21)))
                        _fail(t_21);
                      else
                        s_21 = t_21;
                    }
                    t = not_null(s_21);
                  }
                }
              }
            }
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm w_21 = NULL,y_21 = NULL;
              ATerm x_21 = NULL;
              t = SSLgetAnnotations(not_null(k_21));
              {
                x_21 = t;
                if(((w_21 != NULL) && (w_21 != x_21)))
                  _fail(x_21);
                else
                  w_21 = x_21;
              }
              {
                t = not_null(l_21);
                {
                  ATerm a_22 = NULL;
                  t = s_0(t);
                  {
                    y_21 = t;
                    {
                      ATerm b_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_21)), not_null(w_21));
                      {
                        b_22 = t;
                        if(((a_22 != NULL) && (a_22 != b_22)))
                          _fail(b_22);
                        else
                          a_22 = b_22;
                      }
                      t = not_null(a_22);
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
ATerm DistBinding_2 (ATerm t, ATerm r_100 (ATerm), ATerm s_100 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  o_22 = t;
  n_22 :
  if(match_cons(o_22, sym__3))
    {
      p_22 = ATgetArgument(o_22, 0);
      q_22 = ATgetArgument(o_22, 1);
      r_22 = ATgetArgument(o_22, 2);
      {
        t = not_null(p_22);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm v_22 = NULL;
            v_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_22), not_null(r_22));
              t = r_100(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm x_22 = NULL;
            x_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), not_null(q_22));
              t = r_100(t);
            }
            return(t);
          }
          t = s_100(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm x_100 (ATerm), ATerm y_100 (ATerm, ATerm (ATerm)))
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym__2))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      {
        ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,w_23 = NULL;
        ATerm o_11;
        o_11 = t;
        {
          ATerm r_23 = NULL;
          t = not_null(k_23);
          {
            ATerm s_23 = NULL;
            t = x_100(t);
            {
              r_23 = t;
              {
                if(((o_23 != NULL) && (o_23 != r_23)))
                  _fail(r_23);
                else
                  o_23 = r_23;
                {
                  ATerm t_23 = NULL,v_23 = NULL;
                  t = map_1(t, new_0);
                  {
                    s_23 = t;
                    {
                      if(((p_23 != NULL) && (p_23 != s_23)))
                        _fail(s_23);
                      else
                        p_23 = s_23;
                      {
                        ATerm u_23 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(p_23));
                        {
                          t = zip_1(t, _id);
                          {
                            u_23 = t;
                            if(((t_23 != NULL) && (t_23 != u_23)))
                              _fail(u_23);
                            else
                              t_23 = u_23;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), not_null(l_23));
                          {
                            t = conc_0(t);
                            {
                              v_23 = t;
                              if(((q_23 != NULL) && (q_23 != v_23)))
                                _fail(v_23);
                              else
                                q_23 = v_23;
                            }
                          }
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
          ATerm x_23 = NULL;
          t = not_null(k_23);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(p_23);
              return(t);
            }
            t = y_100(t, v_1);
            {
              x_23 = t;
              if(((w_23 != NULL) && (w_23 != x_23)))
                _fail(x_23);
              else
                w_23 = x_23;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(w_23), not_null(l_23), not_null(q_23));
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
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  h_24 = t;
  f_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      g_24 :
      if(((ATgetType(j_24) == AT_LIST) && ((ATermList) j_24 != ATempty)))
        {
          k_24 = ATgetFirst((ATermList) j_24);
          l_24 = (ATerm) ATgetNext((ATermList) j_24);
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(l_24));
        }
      else
        {
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
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  t_24 = t;
  q_24 :
  if(match_cons(t_24, sym__2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      r_24 :
      if(((ATgetType(v_24) == AT_LIST) && ((ATermList) v_24 != ATempty)))
        {
          w_24 = ATgetFirst((ATermList) v_24);
          z_24 = (ATerm) ATgetNext((ATermList) v_24);
          s_24 :
          if(match_cons(w_24, sym__2))
            {
              x_24 = ATgetArgument(w_24, 0);
              y_24 = ATgetArgument(w_24, 1);
              {
                ATerm b_25 = NULL;
                if(((u_24 != NULL) && (u_24 != x_24)))
                  _fail(x_24);
                else
                  u_24 = x_24;
                {
                  if(((b_25 != NULL) && (b_25 != y_24)))
                    _fail(y_24);
                  else
                    b_25 = y_24;
                  t = not_null(b_25);
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
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(q_11);
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
ATerm RnVar_1 (ATerm t, ATerm l_100 (ATerm, ATerm (ATerm)))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym__2))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      {
        t = not_null(h_25);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(i_25);
              return(t);
            }
            t = split_2(t, _id, x_1);
            t = lookup_0(t);
            return(t);
          }
          t = l_100(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm q_99 (ATerm))
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym__2))
    {
      q_25 = ATgetArgument(p_25, 0);
      r_25 = ATgetArgument(p_25, 1);
      {
        t = not_null(q_25);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm u_25 = NULL;
            u_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), not_null(r_25));
              t = q_99(t);
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
ATerm env_alltd_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm y_25 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_99(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = all_dist_1(t, y_25);
      }
    return(t);
  }
  t = y_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm z_100 (ATerm, ATerm (ATerm)), ATerm a_101 (ATerm), ATerm b_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_101 (ATerm, ATerm (ATerm)))
{
  ATerm a_26 = NULL;
  a_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), (ATerm) ATempty);
    {
      ATerm d_26 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, z_100);
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              {
                t = RnBinding_2(t, a_101, c_101);
                t = DistBinding_2(t, d_26, b_101);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_1);
        return(t);
      }
      t = d_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm e_26 (ATerm t, ATerm f_26 (ATerm))
  {
    t = Scope_2(t, f_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, e_26);
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
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  ATerm x_28 (ATerm t)
  {
    ATerm m_27 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_27));
    {
      ATerm a_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        m_27 = t;
        m_26 :
        if(match_cons(m_27, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_r_6;
    return(t);
  }
  ATerm y_28 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
    ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_27));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        s_27 = t;
        s_26 :
        if(match_cons(s_27, sym_Defined_3))
          {
            t_27 = ATgetArgument(s_27, 0);
            u_27 = ATgetArgument(s_27, 1);
            v_27 = ATgetArgument(s_27, 2);
            t_26 :
            if(match_string(t_27, "j_0"))
              {
                ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
                if(((o_27 != NULL) && (o_27 != u_27)))
                  _fail(u_27);
                else
                  o_27 = u_27;
                {
                  if(((j_27 != NULL) && (j_27 != v_27)))
                    _fail(v_27);
                  else
                    j_27 = v_27;
                  {
                    t = not_null(o_27);
                    {
                      t = strename_0(t);
                      {
                        w_27 = t;
                        q_26 :
                        if(match_cons(w_27, sym_SDef_3))
                          {
                            x_27 = ATgetArgument(w_27, 0);
                            y_27 = ATgetArgument(w_27, 1);
                            b_28 = ATgetArgument(w_27, 2);
                            r_26 :
                            if(((ATgetType(y_27) == AT_LIST) && ((ATermList) y_27 != ATempty)))
                              {
                                z_27 = ATgetFirst((ATermList) y_27);
                                a_28 = (ATerm) ATgetNext((ATermList) y_27);
                                {
                                  ATerm c_28 = NULL;
                                  if(((j_27 != NULL) && (j_27 != x_27)))
                                    _fail(x_27);
                                  else
                                    j_27 = x_27;
                                  {
                                    if(((p_27 != NULL) && (p_27 != y_27)))
                                      _fail(y_27);
                                    else
                                      p_27 = y_27;
                                    {
                                      if(((q_27 != NULL) && (q_27 != b_28)))
                                        _fail(b_28);
                                      else
                                        q_27 = b_28;
                                      {
                                        t = new_0(t);
                                        {
                                          c_28 = t;
                                          {
                                            if(((r_27 != NULL) && (r_27 != c_28)))
                                              _fail(c_28);
                                            else
                                              r_27 = c_28;
                                            {
                                              ATerm w_11;
                                              w_11 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_27)), term_x_11);
                                                {
                                                  ATerm c_2 (ATerm t)
                                                  {
                                                    t = term_v_11;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, c_2);
                                                }
                                              }
                                              t = w_11;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_27), not_null(p_27), not_null(q_27))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_27)), (ATerm) ATempty));
    return(t);
  }
  ATerm z_28 (ATerm t)
  {
    ATerm e_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_27));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        e_28 = t;
        v_26 :
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
    t = term_r_6;
    return(t);
  }
  ATerm a_29 (ATerm t)
  {
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
    ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_27));
    {
      ATerm e_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        l_28 = t;
        a_27 :
        if(match_cons(l_28, sym_Defined_3))
          {
            m_28 = ATgetArgument(l_28, 0);
            n_28 = ATgetArgument(l_28, 1);
            o_28 = ATgetArgument(l_28, 2);
            b_27 :
            if(match_string(m_28, "i_0"))
              {
                ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
                if(((h_28 != NULL) && (h_28 != n_28)))
                  _fail(n_28);
                else
                  h_28 = n_28;
                {
                  if(((j_27 != NULL) && (j_27 != o_28)))
                    _fail(o_28);
                  else
                    j_27 = o_28;
                  {
                    t = not_null(h_28);
                    {
                      t = strename_0(t);
                      {
                        p_28 = t;
                        z_26 :
                        if(match_cons(p_28, sym_SDef_3))
                          {
                            q_28 = ATgetArgument(p_28, 0);
                            r_28 = ATgetArgument(p_28, 1);
                            s_28 = ATgetArgument(p_28, 2);
                            {
                              ATerm t_28 = NULL;
                              if(((j_27 != NULL) && (j_27 != q_28)))
                                _fail(q_28);
                              else
                                j_27 = q_28;
                              {
                                if(((i_28 != NULL) && (i_28 != r_28)))
                                  _fail(r_28);
                                else
                                  i_28 = r_28;
                                {
                                  if(((j_28 != NULL) && (j_28 != s_28)))
                                    _fail(s_28);
                                  else
                                    j_28 = s_28;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(i_28), not_null(k_27), not_null(j_28));
                                    {
                                      t = substitute_args_0(t);
                                      {
                                        t_28 = t;
                                        {
                                          if(((k_28 != NULL) && (k_28 != t_28)))
                                            _fail(t_28);
                                          else
                                            k_28 = t_28;
                                          {
                                            ATerm c_12;
                                            c_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_27)), term_x_11);
                                              {
                                                ATerm f_2 (ATerm t)
                                                {
                                                  t = term_v_11;
                                                  return(t);
                                                }
                                                t = assert_1(t, f_2);
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
    t = not_null(k_28);
    return(t);
  }
  ATerm b_29 (ATerm t)
  {
    ATerm w_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_27));
    {
      ATerm g_2 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = rewrite_1(t, g_2);
      {
        w_28 = t;
        d_27 :
        if(match_cons(w_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_r_6;
    return(t);
  }
  h_27 = t;
  e_27 :
  if(match_cons(h_27, sym_Call_2))
    {
      i_27 = ATgetArgument(h_27, 0);
      k_27 = ATgetArgument(h_27, 1);
      f_27 :
      if(match_cons(i_27, sym_SVar_1))
        {
          j_27 = ATgetArgument(i_27, 0);
          g_27 :
          if(((ATermList) k_27 == ATempty))
            {
              {
                ATerm d_12 = t;
                int e_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_28(t);
                    LocalPopChoice(e_12);
                  }
                else
                  {
                    t = d_12;
                    {
                      ATerm i_12 = t;
                      int k_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_28(t);
                          LocalPopChoice(k_12);
                        }
                      else
                        {
                          t = i_12;
                          {
                            ATerm n_12 = t;
                            int o_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_28(t);
                                LocalPopChoice(o_12);
                              }
                            else
                              {
                                t = n_12;
                                {
                                  ATerm p_12 = t;
                                  int q_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_29(t);
                                      LocalPopChoice(q_12);
                                    }
                                  else
                                    {
                                      t = p_12;
                                      t = b_29(t);
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
              ATerm r_12 = t;
              int s_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_28(t);
                  LocalPopChoice(s_12);
                }
              else
                {
                  t = r_12;
                  {
                    ATerm t_12 = t;
                    int u_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = z_28(t);
                        LocalPopChoice(u_12);
                      }
                    else
                      {
                        t = t_12;
                        {
                          ATerm v_12 = t;
                          int w_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = a_29(t);
                              LocalPopChoice(w_12);
                            }
                          else
                            {
                              t = v_12;
                              t = b_29(t);
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
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_SDef_3))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      q_29 = ATgetArgument(n_29, 2);
      {
        ATerm b_13;
        b_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_29)), term_x_11);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = assert_1(t, h_2);
          }
        }
        t = b_13;
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
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(((ATgetType(v_29) == AT_LIST) && ((ATermList) v_29 != ATempty)))
    {
      w_29 = ATgetFirst((ATermList) v_29);
      x_29 = (ATerm) ATgetNext((ATermList) v_29);
      t = not_null(x_29);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm g_30 = NULL,m_30 = NULL,n_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym__2))
    {
      m_30 = ATgetArgument(g_30, 0);
      n_30 = ATgetArgument(g_30, 1);
      {
        ATerm c_13;
        c_13 = t;
        {
          ATerm q_30 = NULL;
          ATerm r_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_30), not_null(n_30));
          {
            ATerm d_13 = t;
            int h_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(h_13);
              }
            else
              {
                t = d_13;
                t = (ATerm) ATempty;
              }
            {
              r_30 = t;
              if(((q_30 != NULL) && (q_30 != r_30)))
                _fail(r_30);
              else
                q_30 = r_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_30), not_null(n_30), not_null(q_30));
            t = table_put_0(t);
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
ATerm end_scope_1 (ATerm t, ATerm b_94 (ATerm))
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  ATerm j_13;
  j_13 = t;
  {
    ATerm b_31 = NULL;
    ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
    t = b_94(t);
    {
      b_31 = t;
      {
        if(((z_30 != NULL) && (z_30 != b_31)))
          _fail(b_31);
        else
          z_30 = b_31;
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), term_o_13);
              t = table_get_0(t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_31 = t;
            x_30 :
            if(((ATgetType(c_31) == AT_LIST) && ((ATermList) c_31 != ATempty)))
              {
                d_31 = ATgetFirst((ATermList) c_31);
                e_31 = (ATerm) ATgetNext((ATermList) c_31);
                {
                  if(((a_31 != NULL) && (a_31 != d_31)))
                    _fail(d_31);
                  else
                    a_31 = d_31;
                  {
                    if(((y_30 != NULL) && (y_30 != e_31)))
                      _fail(e_31);
                    else
                      y_30 = e_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_30), term_o_13, not_null(y_30));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_31);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm f_31 = NULL;
                              f_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), not_null(f_31));
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
  t = j_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_110 (ATerm), ATerm l_110 (ATerm))
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_110(t);
      t = l_110(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        t = l_110(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm a_94 (ATerm))
{
  ATerm m_31 = NULL;
  ATerm r_13;
  r_13 = t;
  {
    ATerm n_31 = NULL;
    ATerm o_31 = NULL;
    t = a_94(t);
    {
      n_31 = t;
      {
        if(((m_31 != NULL) && (m_31 != n_31)))
          _fail(n_31);
        else
          m_31 = n_31;
        {
          ATerm p_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), term_o_13);
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                t = (ATerm) ATempty;
              }
            {
              p_31 = t;
              if(((o_31 != NULL) && (o_31 != p_31)))
                _fail(p_31);
              else
                o_31 = p_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_31), term_o_13, (ATerm) ATinsert(CheckATermList(not_null(o_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = r_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm c_94 (ATerm), ATerm d_94 (ATerm))
{
  t = begin_scope_1(t, c_94);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, c_94);
      return(t);
    }
    t = restore_always_2(t, d_94, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym__2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      {
        ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
        ATerm a_14;
        a_14 = t;
        {
          ATerm g_32 = NULL;
          ATerm l_33 = NULL,m_33 = NULL,r_33 = NULL;
          t = e_94(t);
          {
            g_32 = t;
            {
              if(((d_32 != NULL) && (d_32 != g_32)))
                _fail(g_32);
              else
                d_32 = g_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_32), not_null(z_31), not_null(a_32));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_14 = t;
                    int i_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), term_o_13);
                        t = table_get_0(t);
                        LocalPopChoice(i_14);
                      }
                    else
                      {
                        t = h_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_33 = t;
                      w_31 :
                      if(((ATgetType(l_33) == AT_LIST) && ((ATermList) l_33 != ATempty)))
                        {
                          m_33 = ATgetFirst((ATermList) l_33);
                          r_33 = (ATerm) ATgetNext((ATermList) l_33);
                          {
                            if(((e_32 != NULL) && (e_32 != m_33)))
                              _fail(m_33);
                            else
                              e_32 = m_33;
                            {
                              if(((f_32 != NULL) && (f_32 != r_33)))
                                _fail(r_33);
                              else
                                f_32 = r_33;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_32), term_o_13, (ATerm) ATinsert(CheckATermList(not_null(f_32)), (ATerm) ATinsert(CheckATermList(not_null(e_32)), not_null(z_31))));
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
        t = a_14;
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
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym_SDef_3))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      j_34 = ATgetArgument(g_34, 2);
      {
        ATerm j_14;
        j_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_n_14, not_null(g_34), not_null(h_34)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = j_14;
        {
          ATerm o_14;
          o_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_p_14, not_null(g_34), not_null(h_34)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_v_11;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = o_14;
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
  ATerm q_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm c_102 (ATerm))
{
  ATerm r_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_102(t);
      LocalPopChoice(x_14);
    }
  else
    {
      t = r_14;
      {
        ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
        r_34 = t;
        q_34 :
        if(((ATgetType(r_34) == AT_LIST) && ((ATermList) r_34 != ATempty)))
          {
            s_34 = ATgetFirst((ATermList) r_34);
            t_34 = (ATerm) ATgetNext((ATermList) r_34);
            {
              ATerm w_34 = NULL,y_34 = NULL;
              ATerm y_14;
              y_14 = t;
              {
                ATerm x_34 = NULL;
                t = not_null(s_34);
                {
                  t = c_102(t);
                  {
                    x_34 = t;
                    if(((w_34 != NULL) && (w_34 != x_34)))
                      _fail(x_34);
                    else
                      w_34 = x_34;
                  }
                }
              }
              t = y_14;
              {
                ATerm z_34 = NULL;
                t = not_null(t_34);
                {
                  t = foldr_3(t, a_102, b_102, c_102);
                  {
                    z_34 = t;
                    if(((y_34 != NULL) && (y_34 != z_34)))
                      _fail(z_34);
                    else
                      y_34 = z_34;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), not_null(y_34));
                  t = b_102(t);
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
ATerm crush_3 (ATerm t, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm))
{
  ATerm h_35 = NULL;
  ATerm j_35 = NULL;
  h_35 = t;
  {
    ATerm k_35 = NULL;
    ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
    t = not_null(h_35);
    {
      k_35 = t;
      {
        t = SSL_explode_term(not_null(k_35));
        {
          m_35 = t;
          g_35 :
          if(match_cons(m_35, sym__2))
            {
              n_35 = ATgetArgument(m_35, 0);
              o_35 = ATgetArgument(m_35, 1);
              if(((j_35 != NULL) && (j_35 != o_35)))
                _fail(o_35);
              else
                j_35 = o_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_35);
      t = foldr_3(t, p_103, q_103, r_103);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_f_15;
          return(t);
        }
        t = crush_3(t, o_2, add_0, s_35);
        return(t);
      }
      t = s_35(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm p_2 (ATerm t)
        {
          t = term_f_15;
          return(t);
        }
        t = crush_3(t, p_2, add_0, term_size_0);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym_LChoice_2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      {
        ATerm f_36 = NULL,h_36 = NULL;
        ATerm g_36 = NULL;
        t = SSLgetAnnotations(not_null(z_35));
        {
          g_36 = t;
          if(((f_36 != NULL) && (f_36 != g_36)))
            _fail(g_36);
          else
            f_36 = g_36;
        }
        {
          t = not_null(a_36);
          {
            ATerm j_36 = NULL;
            t = z_85(t);
            {
              h_36 = t;
              {
                t = not_null(b_36);
                {
                  ATerm l_36 = NULL;
                  t = a_86(t);
                  {
                    j_36 = t;
                    {
                      ATerm m_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(h_36), not_null(j_36)), not_null(f_36));
                      {
                        m_36 = t;
                        if(((l_36 != NULL) && (l_36 != m_36)))
                          _fail(m_36);
                        else
                          l_36 = m_36;
                      }
                      t = not_null(l_36);
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
ATerm Choice_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym_Choice_2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      {
        ATerm e_37 = NULL,g_37 = NULL;
        ATerm f_37 = NULL;
        t = SSLgetAnnotations(not_null(y_36));
        {
          f_37 = t;
          if(((e_37 != NULL) && (e_37 != f_37)))
            _fail(f_37);
          else
            e_37 = f_37;
        }
        {
          t = not_null(z_36);
          {
            ATerm i_37 = NULL;
            t = x_85(t);
            {
              g_37 = t;
              {
                t = not_null(a_37);
                {
                  ATerm l_37 = NULL;
                  t = y_85(t);
                  {
                    i_37 = t;
                    {
                      ATerm m_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(g_37), not_null(i_37)), not_null(e_37));
                      {
                        m_37 = t;
                        if(((l_37 != NULL) && (l_37 != m_37)))
                          _fail(m_37);
                        else
                          l_37 = m_37;
                      }
                      t = not_null(l_37);
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
ATerm Cong_2 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym_Cong_2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        ATerm e_38 = NULL,g_38 = NULL;
        ATerm f_38 = NULL;
        t = SSLgetAnnotations(not_null(y_37));
        {
          f_38 = t;
          if(((e_38 != NULL) && (e_38 != f_38)))
            _fail(f_38);
          else
            e_38 = f_38;
        }
        {
          t = not_null(z_37);
          {
            ATerm i_38 = NULL;
            t = c_87(t);
            {
              g_38 = t;
              {
                t = not_null(a_38);
                {
                  ATerm k_38 = NULL;
                  t = d_87(t);
                  {
                    i_38 = t;
                    {
                      ATerm l_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(g_38), not_null(i_38)), not_null(e_38));
                      {
                        l_38 = t;
                        if(((k_38 != NULL) && (k_38 != l_38)))
                          _fail(l_38);
                        else
                          k_38 = l_38;
                      }
                      t = not_null(k_38);
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
ATerm Match_1 (ATerm t, ATerm k_87 (ATerm))
{
  ATerm w_38 = NULL,x_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym_Match_1))
    {
      x_38 = ATgetArgument(w_38, 0);
      {
        ATerm a_39 = NULL,c_39 = NULL;
        ATerm b_39 = NULL;
        t = SSLgetAnnotations(not_null(w_38));
        {
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
        }
        {
          t = not_null(x_38);
          {
            ATerm e_39 = NULL;
            t = k_87(t);
            {
              c_39 = t;
              {
                ATerm f_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(c_39)), not_null(a_39));
                {
                  f_39 = t;
                  if(((e_39 != NULL) && (e_39 != f_39)))
                    _fail(f_39);
                  else
                    e_39 = f_39;
                }
                t = not_null(e_39);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm v_85 (ATerm), ATerm w_85 (ATerm))
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym_Seq_2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      {
        ATerm w_39 = NULL,y_39 = NULL;
        ATerm x_39 = NULL;
        t = SSLgetAnnotations(not_null(q_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        {
          t = not_null(r_39);
          {
            ATerm a_40 = NULL;
            t = v_85(t);
            {
              y_39 = t;
              {
                t = not_null(s_39);
                {
                  ATerm c_40 = NULL;
                  t = w_85(t);
                  {
                    a_40 = t;
                    {
                      ATerm d_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(y_39), not_null(a_40)), not_null(w_39));
                      {
                        d_40 = t;
                        if(((c_40 != NULL) && (c_40 != d_40)))
                          _fail(d_40);
                        else
                          c_40 = d_40;
                      }
                      t = not_null(c_40);
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
ATerm Scope_2 (ATerm t, ATerm o_87 (ATerm), ATerm p_87 (ATerm))
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Scope_2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        ATerm d_41 = NULL,r_41 = NULL;
        ATerm q_41 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          q_41 = t;
          if(((d_41 != NULL) && (d_41 != q_41)))
            _fail(q_41);
          else
            d_41 = q_41;
        }
        {
          t = not_null(q_40);
          {
            ATerm t_41 = NULL;
            t = o_87(t);
            {
              r_41 = t;
              {
                t = not_null(r_40);
                {
                  ATerm v_41 = NULL;
                  t = p_87(t);
                  {
                    t_41 = t;
                    {
                      ATerm w_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_41), not_null(t_41)), not_null(d_41));
                      {
                        w_41 = t;
                        if(((v_41 != NULL) && (v_41 != w_41)))
                          _fail(w_41);
                        else
                          v_41 = w_41;
                      }
                      t = not_null(v_41);
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
ATerm Build_1 (ATerm t, ATerm l_87 (ATerm))
{
  ATerm m_42 = NULL,w_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_cons(m_42, sym_Build_1))
    {
      w_42 = ATgetArgument(m_42, 0);
      {
        ATerm e_43 = NULL,g_43 = NULL;
        ATerm f_43 = NULL;
        t = SSLgetAnnotations(not_null(m_42));
        {
          f_43 = t;
          if(((e_43 != NULL) && (e_43 != f_43)))
            _fail(f_43);
          else
            e_43 = f_43;
        }
        {
          t = not_null(w_42);
          {
            ATerm r_43 = NULL;
            t = l_87(t);
            {
              g_43 = t;
              {
                ATerm s_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(g_43)), not_null(e_43));
                {
                  s_43 = t;
                  if(((r_43 != NULL) && (r_43 != s_43)))
                    _fail(s_43);
                  else
                    r_43 = s_43;
                }
                t = not_null(r_43);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm c_44 = NULL,d_44 = NULL;
  c_44 = t;
  b_44 :
  if(match_cons(c_44, sym_SVar_1))
    {
      d_44 = ATgetArgument(c_44, 0);
      {
        ATerm g_44 = NULL,i_44 = NULL;
        ATerm h_44 = NULL;
        t = SSLgetAnnotations(not_null(c_44));
        {
          h_44 = t;
          if(((g_44 != NULL) && (g_44 != h_44)))
            _fail(h_44);
          else
            g_44 = h_44;
        }
        {
          t = not_null(d_44);
          {
            ATerm k_44 = NULL;
            t = j_86(t);
            {
              i_44 = t;
              {
                ATerm l_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(i_44)), not_null(g_44));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm y_86 (ATerm), ATerm z_86 (ATerm))
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  v_44 :
  if(match_cons(w_44, sym_Call_2))
    {
      x_44 = ATgetArgument(w_44, 0);
      y_44 = ATgetArgument(w_44, 1);
      {
        ATerm c_45 = NULL,e_45 = NULL;
        ATerm d_45 = NULL;
        t = SSLgetAnnotations(not_null(w_44));
        {
          d_45 = t;
          if(((c_45 != NULL) && (c_45 != d_45)))
            _fail(d_45);
          else
            c_45 = d_45;
        }
        {
          t = not_null(x_44);
          {
            ATerm g_45 = NULL;
            t = y_86(t);
            {
              e_45 = t;
              {
                t = not_null(y_44);
                {
                  ATerm i_45 = NULL;
                  t = z_86(t);
                  {
                    g_45 = t;
                    {
                      ATerm j_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(e_45), not_null(g_45)), not_null(c_45));
                      {
                        j_45 = t;
                        if(((i_45 != NULL) && (i_45 != j_45)))
                          _fail(j_45);
                        else
                          i_45 = j_45;
                      }
                      t = not_null(i_45);
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
  ATerm t_45 = NULL;
  t_45 = t;
  s_45 :
  if(match_cons(t_45, sym_Fail_0))
    {
      ATerm v_45 = NULL,x_45 = NULL;
      ATerm g_15;
      g_15 = t;
      {
        ATerm w_45 = NULL;
        t = SSLgetAnnotations(not_null(t_45));
        {
          w_45 = t;
          if(((v_45 != NULL) && (v_45 != w_45)))
            _fail(w_45);
          else
            v_45 = w_45;
        }
      }
      t = g_15;
      {
        ATerm y_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(v_45));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  g_47 :
  if(match_cons(h_47, sym_Id_0))
    {
      ATerm j_47 = NULL,l_47 = NULL;
      ATerm h_15;
      h_15 = t;
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
      t = h_15;
      {
        ATerm m_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(j_47));
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
ATerm body_to_inline_0 (ATerm t)
{
  ATerm q_47 (ATerm t)
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              {
                ATerm p_15 = t;
                int q_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    LocalPopChoice(q_15);
                  }
                else
                  {
                    t = p_15;
                    {
                      ATerm u_15 = t;
                      int x_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(x_15);
                        }
                      else
                        {
                          t = u_15;
                          {
                            ATerm y_15 = t;
                            int z_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(z_15);
                              }
                            else
                              {
                                t = y_15;
                                {
                                  ATerm a_16 = t;
                                  int b_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      LocalPopChoice(b_16);
                                    }
                                  else
                                    {
                                      t = a_16;
                                      {
                                        ATerm f_16 = t;
                                        int g_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            LocalPopChoice(g_16);
                                          }
                                        else
                                          {
                                            t = f_16;
                                            {
                                              ATerm h_16 = t;
                                              int l_16 = stack_ptr;
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
                                                  LocalPopChoice(l_16);
                                                }
                                              else
                                                {
                                                  t = h_16;
                                                  {
                                                    ATerm m_16 = t;
                                                    int n_16 = stack_ptr;
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
                                                        LocalPopChoice(n_16);
                                                      }
                                                    else
                                                      {
                                                        t = m_16;
                                                        {
                                                          ATerm s_16 = t;
                                                          int t_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(t_16);
                                                            }
                                                          else
                                                            {
                                                              t = s_16;
                                                              {
                                                                ATerm u_16 = t;
                                                                int w_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, q_47, q_47);
                                                                    LocalPopChoice(w_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = u_16;
                                                                    t = LChoice_2(t, q_47, q_47);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = q_47(t);
  {
    ATerm e_17;
    e_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_f_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = e_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm c_112 (ATerm))
{
  ATerm r_47 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_112(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = _one(t, r_47);
      }
    return(t);
  }
  t = r_47(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm z_47 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym_SDef_3))
    {
      h_48 = ATgetArgument(z_47, 0);
      i_48 = ATgetArgument(z_47, 1);
      j_48 = ATgetArgument(z_47, 2);
      {
        ATerm o_48 = NULL,q_48 = NULL;
        ATerm p_48 = NULL;
        t = SSLgetAnnotations(not_null(z_47));
        {
          p_48 = t;
          if(((o_48 != NULL) && (o_48 != p_48)))
            _fail(p_48);
          else
            o_48 = p_48;
        }
        {
          t = not_null(h_48);
          {
            ATerm s_48 = NULL;
            t = o_86(t);
            {
              q_48 = t;
              {
                t = not_null(i_48);
                {
                  ATerm z_48 = NULL;
                  t = p_86(t);
                  {
                    s_48 = t;
                    {
                      t = not_null(j_48);
                      {
                        ATerm b_49 = NULL;
                        t = q_86(t);
                        {
                          z_48 = t;
                          {
                            ATerm c_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(q_48), not_null(s_48), not_null(z_48)), not_null(o_48));
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
  ATerm s_49 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm u_49 = NULL;
    ATerm i_17 = t;
    if((PushChoice() == 0))
      {
        ATerm t_49 = NULL;
        t_49 = t;
        l_49 :
        if(!(match_string(t_49, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_17;
      }
    {
      u_49 = t;
      if(((s_49 != NULL) && (s_49 != u_49)))
        _fail(u_49);
      else
        s_49 = u_49;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm j_17;
    j_17 = t;
    {
      ATerm k_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
            v_49 = t;
            o_49 :
            if(match_cons(v_49, sym_Call_2))
              {
                w_49 = ATgetArgument(v_49, 0);
                y_49 = ATgetArgument(v_49, 1);
                q_49 :
                if(match_cons(w_49, sym_SVar_1))
                  {
                    x_49 = ATgetArgument(w_49, 0);
                    r_49 :
                    if(((ATermList) y_49 == ATempty))
                      {
                        if(((s_49 != NULL) && (s_49 != x_49)))
                          _fail(x_49);
                        else
                          s_49 = x_49;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          t = k_17;
        }
    }
    t = j_17;
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
        ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,k_51 = NULL,i_52 = NULL,k_52 = NULL,m_52 = NULL;
        ATerm m_17;
        m_17 = t;
        {
          ATerm l_51 = NULL;
          t = not_null(u_50);
          {
            ATerm q_51 = NULL;
            t = map_1(t, new_0);
            {
              l_51 = t;
              {
                if(((a_51 != NULL) && (a_51 != l_51)))
                  _fail(l_51);
                else
                  a_51 = l_51;
                {
                  t = not_null(a_51);
                  {
                    ATerm s_51 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm m_51 = NULL;
                      ATerm n_51 = NULL;
                      n_51 = t;
                      if(((m_51 != NULL) && (m_51 != n_51)))
                        _fail(n_51);
                      else
                        m_51 = n_51;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_51));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      q_51 = t;
                      {
                        if(((x_50 != NULL) && (x_50 != q_51)))
                          _fail(q_51);
                        else
                          x_50 = q_51;
                        {
                          ATerm t_51 = NULL;
                          t = new_0(t);
                          {
                            s_51 = t;
                            {
                              if(((y_50 != NULL) && (y_50 != s_51)))
                                _fail(s_51);
                              else
                                y_50 = s_51;
                              {
                                t = not_null(u_50);
                                {
                                  ATerm w_51 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    t_51 = t;
                                    {
                                      if(((b_51 != NULL) && (b_51 != t_51)))
                                        _fail(t_51);
                                      else
                                        b_51 = t_51;
                                      {
                                        t = not_null(b_51);
                                        {
                                          ATerm x_51 = NULL,h_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm u_51 = NULL;
                                            ATerm v_51 = NULL;
                                            v_51 = t;
                                            if(((u_51 != NULL) && (u_51 != v_51)))
                                              _fail(v_51);
                                            else
                                              u_51 = v_51;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_51));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            w_51 = t;
                                            {
                                              if(((z_50 != NULL) && (z_50 != w_51)))
                                                _fail(w_51);
                                              else
                                                z_50 = w_51;
                                              {
                                                ATerm y_51 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_51), not_null(b_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    y_51 = t;
                                                    if(((x_51 != NULL) && (x_51 != y_51)))
                                                      _fail(y_51);
                                                    else
                                                      x_51 = y_51;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_51), not_null(u_50));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
                                                      z_51 = t;
                                                      l_50 :
                                                      if(match_cons(z_51, sym__2))
                                                        {
                                                          a_52 = ATgetArgument(z_51, 0);
                                                          d_52 = ATgetArgument(z_51, 1);
                                                          m_50 :
                                                          if(match_cons(a_52, sym__2))
                                                            {
                                                              b_52 = ATgetArgument(a_52, 0);
                                                              c_52 = ATgetArgument(a_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_52)))));
                                                            }
                                                          else
                                                            {
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
                                                      h_52 = t;
                                                      if(((k_51 != NULL) && (k_51 != h_52)))
                                                        _fail(h_52);
                                                      else
                                                        k_51 = h_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = m_17;
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm j_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_51), not_null(b_51));
            {
              t = conc_0(t);
              {
                j_52 = t;
                if(((i_52 != NULL) && (i_52 != j_52)))
                  _fail(j_52);
                else
                  i_52 = j_52;
              }
            }
          }
          t = n_17;
          {
            ATerm p_17;
            p_17 = t;
            {
              ATerm l_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_50), not_null(x_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50))));
              {
                t = Mapp2_0(t);
                {
                  l_52 = t;
                  if(((k_52 != NULL) && (k_52 != l_52)))
                    _fail(l_52);
                  else
                    k_52 = l_52;
                }
              }
            }
            t = p_17;
            {
              ATerm n_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_50), not_null(z_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50))));
              {
                t = Bapp2_0(t);
                {
                  n_52 = t;
                  if(((m_52 != NULL) && (m_52 != n_52)))
                    _fail(n_52);
                  else
                    m_52 = n_52;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(i_52)), not_null(y_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(k_51)), not_null(m_52))));
            }
          }
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
  ATerm s_53 = NULL,t_53 = NULL;
  s_53 = t;
  r_53 :
  if(match_cons(s_53, sym_Build_1))
    {
      t_53 = ATgetArgument(s_53, 0);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
            ATerm b_54 = NULL;
            ATerm r_54 = NULL;
            t = new_0(t);
            {
              b_54 = t;
              {
                if(((z_53 != NULL) && (z_53 != b_54)))
                  _fail(b_54);
                else
                  z_53 = b_54;
                {
                  t = not_null(t_53);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm c_54 = NULL,j_54 = NULL,k_54 = NULL;
                      c_54 = t;
                      h_53 :
                      if(match_cons(c_54, sym_Anno_2))
                        {
                          j_54 = ATgetArgument(c_54, 0);
                          k_54 = ATgetArgument(c_54, 1);
                          {
                            if(((x_53 != NULL) && (x_53 != j_54)))
                              _fail(j_54);
                            else
                              x_53 = j_54;
                            {
                              if(((y_53 != NULL) && (y_53 != k_54)))
                                _fail(k_54);
                              else
                                y_53 = k_54;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53));
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
                      r_54 = t;
                      if(((a_54 != NULL) && (a_54 != r_54)))
                        _fail(r_54);
                      else
                        a_54 = r_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_53)), not_null(x_53))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_54))));
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            {
              ATerm d_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
                  ATerm w_54 = NULL;
                  ATerm z_54 = NULL;
                  t = new_0(t);
                  {
                    w_54 = t;
                    {
                      if(((u_54 != NULL) && (u_54 != w_54)))
                        _fail(w_54);
                      else
                        u_54 = w_54;
                      {
                        t = not_null(t_53);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm x_54 = NULL,y_54 = NULL;
                            x_54 = t;
                            l_53 :
                            if(match_cons(x_54, sym_RootApp_1))
                              {
                                y_54 = ATgetArgument(x_54, 0);
                                {
                                  if(((t_54 != NULL) && (t_54 != y_54)))
                                    _fail(y_54);
                                  else
                                    t_54 = y_54;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_54));
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
                            if(((v_54 != NULL) && (v_54 != z_54)))
                              _fail(z_54);
                            else
                              v_54 = z_54;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_54))));
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = d_18;
                  {
                    ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
                    ATerm f_55 = NULL;
                    ATerm t_55 = NULL;
                    t = new_0(t);
                    {
                      f_55 = t;
                      {
                        if(((d_55 != NULL) && (d_55 != f_55)))
                          _fail(f_55);
                        else
                          d_55 = f_55;
                        {
                          t = not_null(t_53);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm g_55 = NULL,h_55 = NULL,s_55 = NULL;
                              g_55 = t;
                              p_53 :
                              if(match_cons(g_55, sym_App_2))
                                {
                                  h_55 = ATgetArgument(g_55, 0);
                                  s_55 = ATgetArgument(g_55, 1);
                                  {
                                    if(((b_55 != NULL) && (b_55 != h_55)))
                                      _fail(h_55);
                                    else
                                      b_55 = h_55;
                                    {
                                      if(((c_55 != NULL) && (c_55 != s_55)))
                                        _fail(s_55);
                                      else
                                        c_55 = s_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_55));
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
                              t_55 = t;
                              if(((e_55 != NULL) && (e_55 != t_55)))
                                _fail(t_55);
                              else
                                e_55 = t_55;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_55), not_null(c_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_55)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_55))));
                  }
                }
            }
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
  ATerm v_56 = NULL,w_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,e_57 = NULL;
  v_56 = t;
  s_56 :
  if(match_cons(v_56, sym__2))
    {
      w_56 = ATgetArgument(v_56, 0);
      b_57 = ATgetArgument(v_56, 1);
      t_56 :
      if(((ATgetType(w_56) == AT_LIST) && ((ATermList) w_56 != ATempty)))
        {
          z_56 = ATgetFirst((ATermList) w_56);
          a_57 = (ATerm) ATgetNext((ATermList) w_56);
          u_56 :
          if(((ATgetType(b_57) == AT_LIST) && ((ATermList) b_57 != ATempty)))
            {
              c_57 = ATgetFirst((ATermList) b_57);
              e_57 = (ATerm) ATgetNext((ATermList) b_57);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_56), not_null(c_57)), (ATerm) ATmakeAppl(sym__2, not_null(a_57), not_null(e_57)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  m_57 :
  if(match_cons(p_57, sym__2))
    {
      q_57 = ATgetArgument(p_57, 0);
      r_57 = ATgetArgument(p_57, 1);
      n_57 :
      if(((ATermList) q_57 == ATempty))
        {
          o_57 :
          if(((ATermList) r_57 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm))
{
  ATerm t_57 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_107(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          t = t_107(t);
          {
            t = _2(t, v_107, t_57);
            t = u_107(t);
          }
        }
      }
    return(t);
  }
  t = t_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm x_107 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, x_107);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  v_58 = t;
  l_58 :
  if(match_cons(v_58, sym_Call_2))
    {
      w_58 = ATgetArgument(v_58, 0);
      y_58 = ATgetArgument(v_58, 1);
      m_58 :
      if(match_cons(w_58, sym_SVar_1))
        {
          x_58 = ATgetArgument(w_58, 0);
          n_58 :
          if(match_string(x_58, "Anno_Cong__"))
            {
              o_58 :
              if(((ATgetType(y_58) == AT_LIST) && ((ATermList) y_58 != ATempty)))
                {
                  z_58 = ATgetFirst((ATermList) y_58);
                  c_59 = (ATerm) ATgetNext((ATermList) y_58);
                  s_58 :
                  if(match_cons(z_58, sym_Cong_2))
                    {
                      a_59 = ATgetArgument(z_58, 0);
                      b_59 = ATgetArgument(z_58, 1);
                      t_58 :
                      if(((ATgetType(c_59) == AT_LIST) && ((ATermList) c_59 != ATempty)))
                        {
                          d_59 = ATgetFirst((ATermList) c_59);
                          e_59 = (ATerm) ATgetNext((ATermList) c_59);
                          u_58 :
                          if(((ATermList) e_59 == ATempty))
                            {
                              {
                                ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,m_60 = NULL,o_60 = NULL,q_60 = NULL;
                                ATerm r_18;
                                r_18 = t;
                                {
                                  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(b_59)), not_null(d_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      p_59 = t;
                                      h_58 :
                                      if(((ATgetType(p_59) == AT_LIST) && ((ATermList) p_59 != ATempty)))
                                        {
                                          q_59 = ATgetFirst((ATermList) p_59);
                                          r_59 = (ATerm) ATgetNext((ATermList) p_59);
                                          {
                                            ATerm u_59 = NULL;
                                            if(((i_59 != NULL) && (i_59 != q_59)))
                                              _fail(q_59);
                                            else
                                              i_59 = q_59;
                                            {
                                              if(((m_59 != NULL) && (m_59 != r_59)))
                                                _fail(r_59);
                                              else
                                                m_59 = r_59;
                                              {
                                                ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
                                                ATerm i_3 (ATerm t)
                                                {
                                                  ATerm s_59 = NULL;
                                                  ATerm t_59 = NULL;
                                                  t_59 = t;
                                                  if(((s_59 != NULL) && (s_59 != t_59)))
                                                    _fail(t_59);
                                                  else
                                                    s_59 = t_59;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_59));
                                                  return(t);
                                                }
                                                t = map_1(t, i_3);
                                                {
                                                  u_59 = t;
                                                  {
                                                    if(((j_59 != NULL) && (j_59 != u_59)))
                                                      _fail(u_59);
                                                    else
                                                      j_59 = u_59;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(b_59)), not_null(d_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          v_59 = t;
                                                          g_58 :
                                                          if(((ATgetType(v_59) == AT_LIST) && ((ATermList) v_59 != ATempty)))
                                                            {
                                                              w_59 = ATgetFirst((ATermList) v_59);
                                                              x_59 = (ATerm) ATgetNext((ATermList) v_59);
                                                              {
                                                                ATerm a_60 = NULL;
                                                                if(((k_59 != NULL) && (k_59 != w_59)))
                                                                  _fail(w_59);
                                                                else
                                                                  k_59 = w_59;
                                                                {
                                                                  if(((n_59 != NULL) && (n_59 != x_59)))
                                                                    _fail(x_59);
                                                                  else
                                                                    n_59 = x_59;
                                                                  {
                                                                    ATerm b_60 = NULL,l_60 = NULL;
                                                                    ATerm j_3 (ATerm t)
                                                                    {
                                                                      ATerm y_59 = NULL;
                                                                      ATerm z_59 = NULL;
                                                                      z_59 = t;
                                                                      if(((y_59 != NULL) && (y_59 != z_59)))
                                                                        _fail(z_59);
                                                                      else
                                                                        y_59 = z_59;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      a_60 = t;
                                                                      {
                                                                        if(((l_59 != NULL) && (l_59 != a_60)))
                                                                          _fail(a_60);
                                                                        else
                                                                          l_59 = a_60;
                                                                        {
                                                                          ATerm c_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_59), not_null(n_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              c_60 = t;
                                                                              if(((b_60 != NULL) && (b_60 != c_60)))
                                                                                _fail(c_60);
                                                                              else
                                                                                b_60 = c_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_60), (ATerm) ATinsert(CheckATermList(not_null(b_59)), not_null(d_59)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
                                                                                d_60 = t;
                                                                                d_58 :
                                                                                if(match_cons(d_60, sym__2))
                                                                                  {
                                                                                    e_60 = ATgetArgument(d_60, 0);
                                                                                    h_60 = ATgetArgument(d_60, 1);
                                                                                    e_58 :
                                                                                    if(match_cons(e_60, sym__2))
                                                                                      {
                                                                                        f_60 = ATgetArgument(e_60, 0);
                                                                                        g_60 = ATgetArgument(e_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_60)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                l_60 = t;
                                                                                if(((o_59 != NULL) && (o_59 != l_60)))
                                                                                  _fail(l_60);
                                                                                else
                                                                                  o_59 = l_60;
                                                                              }
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
                                t = r_18;
                                {
                                  ATerm s_18;
                                  s_18 = t;
                                  {
                                    ATerm n_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_59), not_null(n_59));
                                    {
                                      t = conc_0(t);
                                      {
                                        n_60 = t;
                                        if(((m_60 != NULL) && (m_60 != n_60)))
                                          _fail(n_60);
                                        else
                                          m_60 = n_60;
                                      }
                                    }
                                  }
                                  t = s_18;
                                  {
                                    ATerm t_18;
                                    t_18 = t;
                                    {
                                      ATerm p_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_59), not_null(j_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          p_60 = t;
                                          if(((o_60 != NULL) && (o_60 != p_60)))
                                            _fail(p_60);
                                          else
                                            o_60 = p_60;
                                        }
                                      }
                                    }
                                    t = t_18;
                                    {
                                      ATerm r_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_59), not_null(l_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          r_60 = t;
                                          if(((q_60 != NULL) && (q_60 != r_60)))
                                            _fail(r_60);
                                          else
                                            q_60 = r_60;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(m_60)), not_null(k_59)), not_null(i_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(o_59)), not_null(q_60))));
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
ATerm Prim_2 (ATerm t, ATerm r_87 (ATerm), ATerm s_87 (ATerm))
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
  l_61 = t;
  k_61 :
  if(match_cons(l_61, sym_Prim_2))
    {
      m_61 = ATgetArgument(l_61, 0);
      n_61 = ATgetArgument(l_61, 1);
      {
        ATerm r_61 = NULL,t_61 = NULL;
        ATerm s_61 = NULL;
        t = SSLgetAnnotations(not_null(l_61));
        {
          s_61 = t;
          if(((r_61 != NULL) && (r_61 != s_61)))
            _fail(s_61);
          else
            r_61 = s_61;
        }
        {
          t = not_null(m_61);
          {
            ATerm v_61 = NULL;
            t = r_87(t);
            {
              t_61 = t;
              {
                t = not_null(n_61);
                {
                  ATerm x_61 = NULL;
                  t = s_87(t);
                  {
                    v_61 = t;
                    {
                      ATerm y_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(t_61), not_null(v_61)), not_null(r_61));
                      {
                        y_61 = t;
                        if(((x_61 != NULL) && (x_61 != y_61)))
                          _fail(y_61);
                        else
                          x_61 = y_61;
                      }
                      t = not_null(x_61);
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
ATerm Explode_2 (ATerm t, ATerm f_84 (ATerm), ATerm g_84 (ATerm))
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
  o_62 = t;
  n_62 :
  if(match_cons(o_62, sym_Explode_2))
    {
      p_62 = ATgetArgument(o_62, 0);
      q_62 = ATgetArgument(o_62, 1);
      {
        ATerm u_62 = NULL,w_62 = NULL;
        ATerm v_62 = NULL;
        t = SSLgetAnnotations(not_null(o_62));
        {
          v_62 = t;
          if(((u_62 != NULL) && (u_62 != v_62)))
            _fail(v_62);
          else
            u_62 = v_62;
        }
        {
          t = not_null(p_62);
          {
            ATerm a_63 = NULL;
            t = f_84(t);
            {
              w_62 = t;
              {
                t = not_null(q_62);
                {
                  ATerm c_63 = NULL;
                  t = g_84(t);
                  {
                    a_63 = t;
                    {
                      ATerm d_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(w_62), not_null(a_63)), not_null(u_62));
                      {
                        d_63 = t;
                        if(((c_63 != NULL) && (c_63 != d_63)))
                          _fail(d_63);
                        else
                          c_63 = d_63;
                      }
                      t = not_null(c_63);
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
ATerm Op_2 (ATerm t, ATerm r_85 (ATerm), ATerm s_85 (ATerm))
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  z_63 :
  if(match_cons(a_64, sym_Op_2))
    {
      b_64 = ATgetArgument(a_64, 0);
      c_64 = ATgetArgument(a_64, 1);
      {
        ATerm g_64 = NULL,i_64 = NULL;
        ATerm h_64 = NULL;
        t = SSLgetAnnotations(not_null(a_64));
        {
          h_64 = t;
          if(((g_64 != NULL) && (g_64 != h_64)))
            _fail(h_64);
          else
            g_64 = h_64;
        }
        {
          t = not_null(b_64);
          {
            ATerm k_64 = NULL;
            t = r_85(t);
            {
              i_64 = t;
              {
                t = not_null(c_64);
                {
                  ATerm q_64 = NULL;
                  t = s_85(t);
                  {
                    k_64 = t;
                    {
                      ATerm r_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_64), not_null(k_64)), not_null(g_64));
                      {
                        r_64 = t;
                        if(((q_64 != NULL) && (q_64 != r_64)))
                          _fail(r_64);
                        else
                          q_64 = r_64;
                      }
                      t = not_null(q_64);
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
ATerm pat_td_1 (ATerm t, ATerm v_88 (ATerm))
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_88(t);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm d_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, v_88);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
            LocalPopChoice(f_19);
          }
        else
          {
            t = d_19;
            {
              ATerm h_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, v_88);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = h_19;
                  {
                    ATerm n_19 = t;
                    int o_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, v_88);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        LocalPopChoice(o_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm p_3 (ATerm t)
                          {
                            ATerm q_3 (ATerm t)
                            {
                              t = pat_td_1(t, v_88);
                              return(t);
                            }
                            t = fetch_1(t, q_3);
                            return(t);
                          }
                          t = Prim_2(t, _id, p_3);
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
  ATerm r_65 = NULL,s_65 = NULL;
  r_65 = t;
  q_65 :
  if(match_cons(r_65, sym_Match_1))
    {
      s_65 = ATgetArgument(r_65, 0);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
            ATerm a_66 = NULL;
            ATerm i_66 = NULL;
            t = new_0(t);
            {
              a_66 = t;
              {
                if(((w_65 != NULL) && (w_65 != a_66)))
                  _fail(a_66);
                else
                  w_65 = a_66;
                {
                  t = not_null(s_65);
                  {
                    ATerm r_3 (ATerm t)
                    {
                      ATerm b_66 = NULL,c_66 = NULL,h_66 = NULL;
                      b_66 = t;
                      c_65 :
                      if(match_cons(b_66, sym_Anno_2))
                        {
                          c_66 = ATgetArgument(b_66, 0);
                          h_66 = ATgetArgument(b_66, 1);
                          {
                            if(((u_65 != NULL) && (u_65 != c_66)))
                              _fail(c_66);
                            else
                              u_65 = c_66;
                            {
                              if(((v_65 != NULL) && (v_65 != h_66)))
                                _fail(h_66);
                              else
                                v_65 = h_66;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_65)), not_null(u_65));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, r_3);
                    {
                      i_66 = t;
                      if(((x_65 != NULL) && (x_65 != i_66)))
                        _fail(i_66);
                      else
                        x_65 = i_66;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_65)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_65)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_s_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_65)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_65))))));
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm u_19 = t;
              int y_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_66 = NULL,n_66 = NULL,o_66 = NULL;
                  ATerm p_66 = NULL;
                  ATerm s_66 = NULL;
                  t = new_0(t);
                  {
                    p_66 = t;
                    {
                      if(((n_66 != NULL) && (n_66 != p_66)))
                        _fail(p_66);
                      else
                        n_66 = p_66;
                      {
                        t = not_null(s_65);
                        {
                          ATerm s_3 (ATerm t)
                          {
                            ATerm q_66 = NULL,r_66 = NULL;
                            q_66 = t;
                            g_65 :
                            if(match_cons(q_66, sym_RootApp_1))
                              {
                                r_66 = ATgetArgument(q_66, 0);
                                {
                                  if(((k_66 != NULL) && (k_66 != r_66)))
                                    _fail(r_66);
                                  else
                                    k_66 = r_66;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_66));
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
                            s_66 = t;
                            if(((o_66 != NULL) && (o_66 != s_66)))
                              _fail(s_66);
                            else
                              o_66 = s_66;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_66))), not_null(k_66))));
                  LocalPopChoice(y_19);
                }
              else
                {
                  t = u_19;
                  {
                    ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL;
                    ATerm y_66 = NULL;
                    ATerm c_67 = NULL;
                    t = new_0(t);
                    {
                      y_66 = t;
                      {
                        if(((w_66 != NULL) && (w_66 != y_66)))
                          _fail(y_66);
                        else
                          w_66 = y_66;
                        {
                          t = not_null(s_65);
                          {
                            ATerm t_3 (ATerm t)
                            {
                              ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
                              z_66 = t;
                              o_65 :
                              if(match_cons(z_66, sym_App_2))
                                {
                                  a_67 = ATgetArgument(z_66, 0);
                                  b_67 = ATgetArgument(z_66, 1);
                                  {
                                    if(((v_66 != NULL) && (v_66 != a_67)))
                                      _fail(a_67);
                                    else
                                      v_66 = a_67;
                                    {
                                      if(((u_66 != NULL) && (u_66 != b_67)))
                                        _fail(b_67);
                                      else
                                        u_66 = b_67;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66));
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
                              c_67 = t;
                              if(((x_66 != NULL) && (x_66 != c_67)))
                                _fail(c_67);
                              else
                                x_66 = c_67;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_66)), not_null(v_66)))));
                  }
                }
            }
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
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym_Cong_2))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      {
        ATerm h_68 = NULL;
        ATerm p_68 = NULL;
        t = not_null(b_68);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm i_68 = NULL,j_68 = NULL;
            j_68 = t;
            w_67 :
            if(match_cons(j_68, sym_Match_1))
              {
                i_68 = ATgetArgument(j_68, 0);
                t = not_null(i_68);
              }
            else
              {
                if(match_cons(j_68, sym_Id_0))
                  {
                    t = term_z_19;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, u_3);
          {
            p_68 = t;
            if(((h_68 != NULL) && (h_68 != p_68)))
              _fail(p_68);
            else
              h_68 = p_68;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(a_68), not_null(h_68)));
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
  ATerm b_69 = NULL,c_69 = NULL,f_69 = NULL;
  b_69 = t;
  z_68 :
  if(match_cons(b_69, sym_Scope_2))
    {
      c_69 = ATgetArgument(b_69, 0);
      f_69 = ATgetArgument(b_69, 1);
      a_69 :
      if(((ATermList) c_69 == ATempty))
        {
          t = not_null(f_69);
        }
      else
        {
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
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
  b_70 = t;
  o_69 :
  if(match_cons(b_70, sym_Where_1))
    {
      c_70 = ATgetArgument(b_70, 0);
      p_69 :
      if(match_cons(c_70, sym_Seq_2))
        {
          a_70 = ATgetArgument(c_70, 0);
          w_69 = ATgetArgument(c_70, 1);
          q_69 :
          if(match_cons(a_70, sym_Where_1))
            {
              v_69 = ATgetArgument(a_70, 0);
              r_69 :
              if(match_cons(w_69, sym_Seq_2))
                {
                  x_69 = ATgetArgument(w_69, 0);
                  z_69 = ATgetArgument(w_69, 1);
                  s_69 :
                  if(match_cons(x_69, sym_Build_1))
                    {
                      y_69 = ATgetArgument(x_69, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_69), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_69)), not_null(z_69))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_70, sym_Where_1))
            {
              a_70 = ATgetArgument(c_70, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(a_70));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(b_70, sym_Test_1))
        {
          c_70 = ATgetArgument(b_70, 0);
          t_69 :
          if(match_cons(c_70, sym_Test_1))
            {
              a_70 = ATgetArgument(c_70, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_70));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(b_70, sym_Not_1))
            {
              c_70 = ATgetArgument(b_70, 0);
              u_69 :
              if(match_cons(c_70, sym_Not_1))
                {
                  a_70 = ATgetArgument(c_70, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_70));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(b_70, sym_LChoice_2))
                {
                  c_70 = ATgetArgument(b_70, 0);
                  d_70 = ATgetArgument(b_70, 1);
                  {
                    if(((c_70 != NULL) && (c_70 != d_70)))
                      _fail(d_70);
                    else
                      c_70 = d_70;
                    t = not_null(c_70);
                  }
                }
              else
                {
                  if(match_cons(b_70, sym_Choice_2))
                    {
                      c_70 = ATgetArgument(b_70, 0);
                      d_70 = ATgetArgument(b_70, 1);
                      {
                        if(((c_70 != NULL) && (c_70 != d_70)))
                          _fail(d_70);
                        else
                          c_70 = d_70;
                        t = not_null(c_70);
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
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL;
  z_70 = t;
  v_70 :
  if(match_cons(z_70, sym_LChoice_2))
    {
      a_71 = ATgetArgument(z_70, 0);
      d_71 = ATgetArgument(z_70, 1);
      w_70 :
      if(match_cons(a_71, sym_LChoice_2))
        {
          b_71 = ATgetArgument(a_71, 0);
          c_71 = ATgetArgument(a_71, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_71), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_71), not_null(d_71)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(z_70, sym_Seq_2))
        {
          a_71 = ATgetArgument(z_70, 0);
          d_71 = ATgetArgument(z_70, 1);
          x_70 :
          if(match_cons(a_71, sym_Seq_2))
            {
              b_71 = ATgetArgument(a_71, 0);
              c_71 = ATgetArgument(a_71, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_71), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_71), not_null(d_71)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(z_70, sym_Choice_2))
            {
              a_71 = ATgetArgument(z_70, 0);
              d_71 = ATgetArgument(z_70, 1);
              y_70 :
              if(match_cons(a_71, sym_Choice_2))
                {
                  b_71 = ATgetArgument(a_71, 0);
                  c_71 = ATgetArgument(a_71, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_71), (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_71), not_null(d_71)));
                }
              else
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
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  k_72 = t;
  c_72 :
  if(match_cons(k_72, sym_InfixApp_3))
    {
      l_72 = ATgetArgument(k_72, 0);
      h_72 = ATgetArgument(k_72, 1);
      g_72 = ATgetArgument(k_72, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_72), (ATerm) ATmakeAppl(sym_Op_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_72)), not_null(l_72))));
    }
  else
    {
      if(match_cons(k_72, sym_BAM_3))
        {
          l_72 = ATgetArgument(k_72, 0);
          h_72 = ATgetArgument(k_72, 1);
          g_72 = ATgetArgument(k_72, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(g_72))), not_null(l_72)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_72))));
        }
      else
        {
          if(match_cons(k_72, sym_AM_2))
            {
              l_72 = ATgetArgument(k_72, 0);
              h_72 = ATgetArgument(k_72, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_72), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_72)));
            }
          else
            {
              if(match_cons(k_72, sym_MA_2))
                {
                  l_72 = ATgetArgument(k_72, 0);
                  h_72 = ATgetArgument(k_72, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_72)), not_null(h_72));
                }
              else
                {
                  if(match_cons(k_72, sym_BA_2))
                    {
                      l_72 = ATgetArgument(k_72, 0);
                      h_72 = ATgetArgument(k_72, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_72)), not_null(l_72));
                    }
                  else
                    {
                      if(match_cons(k_72, sym_Lets_2))
                        {
                          l_72 = ATgetArgument(k_72, 0);
                          h_72 = ATgetArgument(k_72, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_72), not_null(h_72));
                        }
                      else
                        {
                          if(match_cons(k_72, sym_LChoices_1))
                            {
                              l_72 = ATgetArgument(k_72, 0);
                              d_72 :
                              if(((ATgetType(l_72) == AT_LIST) && ((ATermList) l_72 != ATempty)))
                                {
                                  i_72 = ATgetFirst((ATermList) l_72);
                                  j_72 = (ATerm) ATgetNext((ATermList) l_72);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_72), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_72)));
                                }
                              else
                                {
                                  if(((ATermList) l_72 == ATempty))
                                    {
                                      t = term_c_20;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(k_72, sym_Choices_1))
                                {
                                  l_72 = ATgetArgument(k_72, 0);
                                  e_72 :
                                  if(((ATgetType(l_72) == AT_LIST) && ((ATermList) l_72 != ATempty)))
                                    {
                                      i_72 = ATgetFirst((ATermList) l_72);
                                      j_72 = (ATerm) ATgetNext((ATermList) l_72);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_72), (ATerm) ATmakeAppl(sym_Choices_1, not_null(j_72)));
                                    }
                                  else
                                    {
                                      if(((ATermList) l_72 == ATempty))
                                        {
                                          t = term_c_20;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(k_72, sym_Seqs_1))
                                    {
                                      l_72 = ATgetArgument(k_72, 0);
                                      f_72 :
                                      if(((ATgetType(l_72) == AT_LIST) && ((ATermList) l_72 != ATempty)))
                                        {
                                          i_72 = ATgetFirst((ATermList) l_72);
                                          j_72 = (ATerm) ATgetNext((ATermList) l_72);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_72), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_72)));
                                        }
                                      else
                                        {
                                          if(((ATermList) l_72 == ATempty))
                                            {
                                              t = term_e_20;
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
  ATerm a_76 = NULL,b_76 = NULL;
  a_76 = t;
  y_75 :
  if(match_cons(a_76, sym_Where_1))
    {
      b_76 = ATgetArgument(a_76, 0);
      z_75 :
      if(match_cons(b_76, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  e_76 :
  if(match_cons(g_76, sym_LChoice_2))
    {
      h_76 = ATgetArgument(g_76, 0);
      i_76 = ATgetArgument(g_76, 1);
      f_76 :
      if(match_cons(i_76, sym_Fail_0))
        {
          t = not_null(h_76);
        }
      else
        {
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
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  o_76 = t;
  m_76 :
  if(match_cons(o_76, sym_LChoice_2))
    {
      p_76 = ATgetArgument(o_76, 0);
      q_76 = ATgetArgument(o_76, 1);
      n_76 :
      if(match_cons(p_76, sym_Fail_0))
        {
          t = not_null(q_76);
        }
      else
        {
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
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
  w_76 = t;
  u_76 :
  if(match_cons(w_76, sym_Choice_2))
    {
      x_76 = ATgetArgument(w_76, 0);
      y_76 = ATgetArgument(w_76, 1);
      v_76 :
      if(match_cons(y_76, sym_Fail_0))
        {
          t = not_null(x_76);
        }
      else
        {
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
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  c_77 :
  if(match_cons(e_77, sym_Choice_2))
    {
      f_77 = ATgetArgument(e_77, 0);
      g_77 = ATgetArgument(e_77, 1);
      d_77 :
      if(match_cons(f_77, sym_Fail_0))
        {
          t = not_null(g_77);
        }
      else
        {
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
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
  m_77 = t;
  l_77 :
  if(match_cons(m_77, sym_Cong_2))
    {
      n_77 = ATgetArgument(m_77, 0);
      o_77 = ATgetArgument(m_77, 1);
      {
        t = not_null(o_77);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm r_77 = NULL;
            r_77 = t;
            k_77 :
            if(!(match_cons(r_77, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        t = term_c_20;
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
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
  w_77 = t;
  u_77 :
  if(match_cons(w_77, sym_Path_2))
    {
      x_77 = ATgetArgument(w_77, 0);
      y_77 = ATgetArgument(w_77, 1);
      v_77 :
      if(match_cons(y_77, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm g_78 = NULL,h_78 = NULL;
  g_78 = t;
  e_78 :
  if(match_cons(g_78, sym_One_1))
    {
      h_78 = ATgetArgument(g_78, 0);
      f_78 :
      if(match_cons(h_78, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm m_78 = NULL,n_78 = NULL;
  m_78 = t;
  k_78 :
  if(match_cons(m_78, sym_Some_1))
    {
      n_78 = ATgetArgument(m_78, 0);
      l_78 :
      if(match_cons(n_78, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
  s_78 = t;
  q_78 :
  if(match_cons(s_78, sym_Rec_2))
    {
      t_78 = ATgetArgument(s_78, 0);
      u_78 = ATgetArgument(s_78, 1);
      r_78 :
      if(match_cons(u_78, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  a_79 = t;
  y_78 :
  if(match_cons(a_79, sym_Scope_2))
    {
      b_79 = ATgetArgument(a_79, 0);
      c_79 = ATgetArgument(a_79, 1);
      z_78 :
      if(match_cons(c_79, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  i_79 = t;
  g_79 :
  if(match_cons(i_79, sym_Seq_2))
    {
      j_79 = ATgetArgument(i_79, 0);
      k_79 = ATgetArgument(i_79, 1);
      h_79 :
      if(match_cons(j_79, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm q_79 = NULL,r_79 = NULL;
  q_79 = t;
  o_79 :
  if(match_cons(q_79, sym_Not_1))
    {
      r_79 = ATgetArgument(q_79, 0);
      p_79 :
      if(match_cons(r_79, sym_Fail_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm w_79 = NULL,x_79 = NULL;
  w_79 = t;
  u_79 :
  if(match_cons(w_79, sym_Test_1))
    {
      x_79 = ATgetArgument(w_79, 0);
      v_79 :
      if(match_cons(x_79, sym_Fail_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm f_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = f_20;
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            {
              ATerm u_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(v_20);
                }
              else
                {
                  t = u_20;
                  {
                    ATerm w_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = w_20;
                        {
                          ATerm y_20 = t;
                          int z_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
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
                                    t = F7_0(t);
                                    LocalPopChoice(b_21);
                                  }
                                else
                                  {
                                    t = a_21;
                                    {
                                      ATerm c_21 = t;
                                      int d_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(d_21);
                                        }
                                      else
                                        {
                                          t = c_21;
                                          {
                                            ATerm e_21 = t;
                                            int f_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(f_21);
                                              }
                                            else
                                              {
                                                t = e_21;
                                                {
                                                  ATerm g_21 = t;
                                                  int h_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(h_21);
                                                    }
                                                  else
                                                    {
                                                      t = g_21;
                                                      {
                                                        ATerm i_21 = t;
                                                        int m_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(m_21);
                                                          }
                                                        else
                                                          {
                                                            t = i_21;
                                                            {
                                                              ATerm n_21 = t;
                                                              int r_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(r_21);
                                                                }
                                                              else
                                                                {
                                                                  t = n_21;
                                                                  {
                                                                    ATerm u_21 = t;
                                                                    int v_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(v_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_21;
                                                                        {
                                                                          ATerm z_21 = t;
                                                                          int c_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(c_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_21;
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
  ATerm c_80 = NULL,d_80 = NULL;
  c_80 = t;
  a_80 :
  if(match_cons(c_80, sym_Match_1))
    {
      d_80 = ATgetArgument(c_80, 0);
      b_80 :
      if(match_cons(d_80, sym_Wld_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm i_80 = NULL,j_80 = NULL;
  i_80 = t;
  g_80 :
  if(match_cons(i_80, sym_Where_1))
    {
      j_80 = ATgetArgument(i_80, 0);
      h_80 :
      if(match_cons(j_80, sym_Id_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm o_80 = NULL,p_80 = NULL;
  o_80 = t;
  m_80 :
  if(match_cons(o_80, sym_All_1))
    {
      p_80 = ATgetArgument(o_80, 0);
      n_80 :
      if(match_cons(p_80, sym_Id_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  s_80 :
  if(match_cons(u_80, sym_Rec_2))
    {
      v_80 = ATgetArgument(u_80, 0);
      w_80 = ATgetArgument(u_80, 1);
      t_80 :
      if(match_cons(w_80, sym_Id_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
  c_81 = t;
  a_81 :
  if(match_cons(c_81, sym_Scope_2))
    {
      d_81 = ATgetArgument(c_81, 0);
      e_81 = ATgetArgument(c_81, 1);
      b_81 :
      if(match_cons(e_81, sym_Id_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
  k_81 = t;
  i_81 :
  if(match_cons(k_81, sym_LChoice_2))
    {
      l_81 = ATgetArgument(k_81, 0);
      m_81 = ATgetArgument(k_81, 1);
      j_81 :
      if(match_cons(l_81, sym_Id_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
  s_81 = t;
  q_81 :
  if(match_cons(s_81, sym_Seq_2))
    {
      t_81 = ATgetArgument(s_81, 0);
      u_81 = ATgetArgument(s_81, 1);
      r_81 :
      if(match_cons(u_81, sym_Id_0))
        {
          t = not_null(t_81);
        }
      else
        {
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
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  a_82 = t;
  y_81 :
  if(match_cons(a_82, sym_Seq_2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      z_81 :
      if(match_cons(b_82, sym_Id_0))
        {
          t = not_null(c_82);
        }
      else
        {
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
  ATerm i_82 = NULL,j_82 = NULL;
  i_82 = t;
  g_82 :
  if(match_cons(i_82, sym_Not_1))
    {
      j_82 = ATgetArgument(i_82, 0);
      h_82 :
      if(match_cons(j_82, sym_Id_0))
        {
          t = term_c_20;
        }
      else
        {
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
  ATerm o_82 = NULL,p_82 = NULL;
  o_82 = t;
  m_82 :
  if(match_cons(o_82, sym_Test_1))
    {
      p_82 = ATgetArgument(o_82, 0);
      n_82 :
      if(match_cons(p_82, sym_Id_0))
        {
          t = term_e_20;
        }
      else
        {
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
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
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
            t = I2_0(t);
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm h_22 = t;
              int i_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(i_22);
                }
              else
                {
                  t = h_22;
                  {
                    ATerm j_22 = t;
                    int k_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(k_22);
                      }
                    else
                      {
                        t = j_22;
                        {
                          ATerm l_22 = t;
                          int m_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(m_22);
                            }
                          else
                            {
                              t = l_22;
                              {
                                ATerm s_22 = t;
                                int t_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(t_22);
                                  }
                                else
                                  {
                                    t = s_22;
                                    {
                                      ATerm u_22 = t;
                                      int w_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(w_22);
                                        }
                                      else
                                        {
                                          t = u_22;
                                          {
                                            ATerm y_22 = t;
                                            int z_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      LocalPopChoice(b_23);
                                                    }
                                                  else
                                                    {
                                                      t = a_23;
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
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
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
                  t = HL_0(t);
                  LocalPopChoice(h_23);
                }
              else
                {
                  t = g_23;
                  {
                    ATerm m_23 = t;
                    int n_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(n_23);
                      }
                    else
                      {
                        t = m_23;
                        {
                          ATerm y_23 = t;
                          int z_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
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
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(b_24);
                                  }
                                else
                                  {
                                    t = a_24;
                                    {
                                      ATerm c_24 = t;
                                      int d_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(d_24);
                                        }
                                      else
                                        {
                                          t = c_24;
                                          {
                                            ATerm e_24 = t;
                                            int m_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(m_24);
                                              }
                                            else
                                              {
                                                t = e_24;
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
ATerm repeat_2 (ATerm t, ATerm s_96 (ATerm), ATerm t_96 (ATerm))
{
  ATerm r_82 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_96(t);
        t = r_82(t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = t_96(t);
      }
    return(t);
  }
  t = r_82(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_96 (ATerm))
{
  t = repeat_2(t, v_96, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm o_110 (ATerm))
{
  ATerm s_82 (ATerm t)
  {
    t = o_110(t);
    {
      t = _all(t, s_82);
      t = o_110(t);
    }
    return(t);
  }
  t = s_82(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, w_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm y_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, y_3);
    }
    return(t);
  }
  t = map_1(t, x_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm y_82 = NULL,z_82 = NULL;
  y_82 = t;
  x_82 :
  if(match_cons(y_82, sym_Strategies_1))
    {
      z_82 = ATgetArgument(y_82, 0);
      {
        ATerm c_83 = NULL,e_83 = NULL;
        ATerm d_83 = NULL;
        t = SSLgetAnnotations(not_null(y_82));
        {
          d_83 = t;
          if(((c_83 != NULL) && (c_83 != d_83)))
            _fail(d_83);
          else
            c_83 = d_83;
        }
        {
          t = not_null(z_82);
          {
            ATerm g_83 = NULL;
            t = k_85(t);
            {
              e_83 = t;
              {
                ATerm h_83 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(e_83)), not_null(c_83));
                {
                  h_83 = t;
                  if(((g_83 != NULL) && (g_83 != h_83)))
                    _fail(h_83);
                  else
                    g_83 = h_83;
                }
                t = not_null(g_83);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm r_83 = NULL,s_83 = NULL;
  r_83 = t;
  q_83 :
  if(match_cons(r_83, sym_Specification_1))
    {
      s_83 = ATgetArgument(r_83, 0);
      {
        ATerm v_83 = NULL,x_83 = NULL;
        ATerm w_83 = NULL;
        t = SSLgetAnnotations(not_null(r_83));
        {
          w_83 = t;
          if(((v_83 != NULL) && (v_83 != w_83)))
            _fail(w_83);
          else
            v_83 = w_83;
        }
        {
          t = not_null(s_83);
          {
            ATerm z_83 = NULL;
            t = m_85(t);
            {
              x_83 = t;
              {
                ATerm a_84 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(x_83)), not_null(v_83));
                {
                  a_84 = t;
                  if(((z_83 != NULL) && (z_83 != a_84)))
                    _fail(a_84);
                  else
                    z_83 = a_84;
                }
                t = not_null(z_83);
              }
            }
          }
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
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm e_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, e_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, a_4);
    return(t);
  }
  t = Specification_1(t, z_3);
  return(t);
}
ATerm _2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
  n_84 = t;
  m_84 :
  if(match_cons(n_84, sym__2))
    {
      o_84 = ATgetArgument(n_84, 0);
      p_84 = ATgetArgument(n_84, 1);
      {
        ATerm t_84 = NULL,v_84 = NULL;
        ATerm u_84 = NULL;
        t = SSLgetAnnotations(not_null(n_84));
        {
          u_84 = t;
          if(((t_84 != NULL) && (t_84 != u_84)))
            _fail(u_84);
          else
            t_84 = u_84;
        }
        {
          t = not_null(o_84);
          {
            ATerm x_84 = NULL;
            t = u_75(t);
            {
              v_84 = t;
              {
                t = not_null(p_84);
                {
                  ATerm z_84 = NULL;
                  t = v_75(t);
                  {
                    x_84 = t;
                    {
                      ATerm b_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_84), not_null(x_84)), not_null(t_84));
                      {
                        b_85 = t;
                        if(((z_84 != NULL) && (z_84 != b_85)))
                          _fail(b_85);
                        else
                          z_84 = b_85;
                      }
                      t = not_null(z_84);
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
  ATerm j_85 = NULL;
  ATerm p_24;
  p_24 = t;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm l_85 = NULL,n_85 = NULL;
      l_85 = t;
      i_85 :
      if(match_cons(l_85, sym_Program_1))
        {
          n_85 = ATgetArgument(l_85, 0);
          if(((j_85 != NULL) && (j_85 != n_85)))
            _fail(n_85);
          else
            j_85 = n_85;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_25), not_null(j_85)), term_c_25));
      {
        t = printnl_0(t);
        {
          t = term_f_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_24;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,b_86 = NULL;
  t_85 = t;
  q_85 :
  if(match_cons(t_85, sym__2))
    {
      u_85 = ATgetArgument(t_85, 0);
      b_86 = ATgetArgument(t_85, 1);
      {
        ATerm e_25;
        e_25 = t;
        t = SSL_printnl(not_null(u_85), not_null(b_86));
        t = e_25;
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
  ATerm h_86 = NULL,i_86 = NULL,r_86 = NULL;
  h_86 = t;
  g_86 :
  if(match_cons(h_86, sym__2))
    {
      i_86 = ATgetArgument(h_86, 0);
      r_86 = ATgetArgument(h_86, 1);
      {
        t = not_null(i_86);
        {
          ATerm g_4 (ATerm t)
          {
            t = not_null(r_86);
            return(t);
          }
          t = at_end_1(t, g_4);
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
ATerm debug_1 (ATerm t, ATerm c_88 (ATerm))
{
  ATerm j_25;
  j_25 = t;
  {
    ATerm x_86 = NULL,b_87 = NULL;
    ATerm k_25;
    k_25 = t;
    {
      ATerm a_87 = NULL;
      t = c_88(t);
      {
        a_87 = t;
        if(((x_86 != NULL) && (x_86 != a_87)))
          _fail(a_87);
        else
          x_86 = a_87;
      }
    }
    t = k_25;
    {
      ATerm e_87 = NULL;
      e_87 = t;
      if(((b_87 != NULL) && (b_87 != e_87)))
        _fail(e_87);
      else
        b_87 = e_87;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_87)), not_null(x_86)));
        t = printnl_0(t);
      }
    }
  }
  t = j_25;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_87 = NULL;
  i_87 = t;
  t = SSL_is_string(not_null(i_87));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm n_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_4);
            LocalPopChoice(s_25);
          }
        else
          {
            t = n_25;
            {
              ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
              z_87 = t;
              y_87 :
              if(match_cons(z_87, sym_Path_1))
                {
                  a_88 = ATgetArgument(z_87, 0);
                  t = not_null(a_88);
                }
              else
                {
                  if(match_cons(z_87, sym_Var_1))
                    {
                      a_88 = ATgetArgument(z_87, 0);
                      {
                        t = not_null(a_88);
                        {
                          ATerm t_25 = t;
                          int v_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_25);
                            }
                          else
                            {
                              t = t_25;
                              {
                                ATerm i_4 (ATerm t)
                                {
                                  t = term_w_25;
                                  return(t);
                                }
                                t = debug_1(t, i_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_87, sym_Prefix_2))
                        {
                          a_88 = ATgetArgument(z_87, 0);
                          b_88 = ATgetArgument(z_87, 1);
                          {
                            ATerm h_88 = NULL,j_88 = NULL;
                            ATerm x_25;
                            x_25 = t;
                            {
                              ATerm i_88 = NULL;
                              t = not_null(a_88);
                              {
                                t = eval_config_0(t);
                                {
                                  i_88 = t;
                                  if(((h_88 != NULL) && (h_88 != i_88)))
                                    _fail(i_88);
                                  else
                                    h_88 = i_88;
                                }
                              }
                            }
                            t = x_25;
                            {
                              ATerm k_88 = NULL;
                              t = not_null(b_88);
                              {
                                t = eval_config_0(t);
                                {
                                  k_88 = t;
                                  if(((j_88 != NULL) && (j_88 != k_88)))
                                    _fail(k_88);
                                  else
                                    j_88 = k_88;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_88), not_null(j_88));
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
  ATerm s_88 = NULL;
  s_88 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_25, not_null(s_88));
    {
      t = table_get_0(t);
      {
        ATerm j_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_26;
            b_26 = t;
            {
              ATerm u_88 = NULL;
              ATerm w_88 = NULL;
              w_88 = t;
              if(((u_88 != NULL) && (u_88 != w_88)))
                _fail(w_88);
              else
                u_88 = w_88;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_25, not_null(s_88), not_null(u_88));
                t = table_put_0(t);
              }
            }
            t = b_26;
          }
          return(t);
        }
        t = try_1(t, j_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_91 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm c_26;
    c_26 = t;
    {
      ATerm a_89 = NULL;
      ATerm b_89 = NULL;
      t = term_g_26;
      {
        t = get_config_0(t);
        {
          b_89 = t;
          if(((a_89 != NULL) && (a_89 != b_89)))
            _fail(b_89);
          else
            a_89 = b_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_89), term_h_26);
        t = geq_0(t);
      }
    }
    t = c_26;
    t = l_91(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATempty, term_i_26));
  {
    t = printnl_0(t);
    {
      t = term_f_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_89 = NULL;
  e_89 = t;
  t = SSL_TicksToSeconds(not_null(e_89));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
  j_89 = t;
  i_89 :
  if(match_cons(j_89, sym__2))
    {
      k_89 = ATgetArgument(j_89, 0);
      l_89 = ATgetArgument(j_89, 1);
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_89), not_null(l_89));
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            t = SSL_addr(not_null(k_89), not_null(l_89));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_101 (ATerm), ATerm z_101 (ATerm))
{
  ATerm l_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_101(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = l_26;
      {
        ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL;
        s_89 = t;
        r_89 :
        if(((ATgetType(s_89) == AT_LIST) && ((ATermList) s_89 != ATempty)))
          {
            t_89 = ATgetFirst((ATermList) s_89);
            u_89 = (ATerm) ATgetNext((ATermList) s_89);
            {
              ATerm x_89 = NULL;
              ATerm y_89 = NULL;
              t = not_null(u_89);
              {
                t = foldr_2(t, y_101, z_101);
                {
                  y_89 = t;
                  if(((x_89 != NULL) && (x_89 != y_89)))
                    _fail(y_89);
                  else
                    x_89 = y_89;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_89), not_null(x_89));
                t = z_101(t);
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
ATerm crush_2 (ATerm t, ATerm n_103 (ATerm), ATerm o_103 (ATerm))
{
  ATerm f_90 = NULL;
  ATerm h_90 = NULL;
  f_90 = t;
  {
    ATerm i_90 = NULL;
    ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL;
    t = not_null(f_90);
    {
      i_90 = t;
      {
        t = SSL_explode_term(not_null(i_90));
        {
          q_90 = t;
          e_90 :
          if(match_cons(q_90, sym__2))
            {
              r_90 = ATgetArgument(q_90, 0);
              s_90 = ATgetArgument(q_90, 1);
              if(((h_90 != NULL) && (h_90 != s_90)))
                _fail(s_90);
              else
                h_90 = s_90;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_90);
      t = foldr_2(t, n_103, o_103);
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
    ATerm l_4 (ATerm t)
    {
      t = term_o_26;
      return(t);
    }
    t = crush_2(t, l_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL;
  y_90 = t;
  x_90 :
  if(match_cons(y_90, sym__2))
    {
      z_90 = ATgetArgument(y_90, 0);
      a_91 = ATgetArgument(y_90, 1);
      {
        ATerm p_26;
        p_26 = t;
        {
          ATerm u_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_90), not_null(a_91));
              LocalPopChoice(w_26);
            }
          else
            {
              t = u_26;
              t = SSL_gtr(not_null(z_90), not_null(a_91));
            }
        }
        t = p_26;
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
  ATerm g_91 = NULL;
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_91 = NULL,j_91 = NULL,m_91 = NULL;
      h_91 = t;
      f_91 :
      if(match_cons(h_91, sym__2))
        {
          j_91 = ATgetArgument(h_91, 0);
          m_91 = ATgetArgument(h_91, 1);
          {
            if(((g_91 != NULL) && (g_91 != j_91)))
              _fail(j_91);
            else
              g_91 = j_91;
            if(((g_91 != NULL) && (g_91 != m_91)))
              _fail(m_91);
            else
              g_91 = m_91;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_91 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm c_27;
    c_27 = t;
    {
      ATerm p_91 = NULL;
      ATerm q_91 = NULL;
      t = term_g_26;
      {
        t = get_config_0(t);
        {
          q_91 = t;
          if(((p_91 != NULL) && (p_91 != q_91)))
            _fail(q_91);
          else
            p_91 = q_91;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_91), term_f_15);
        t = geq_0(t);
      }
    }
    t = c_27;
    t = k_91(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm u_91 = NULL,w_91 = NULL;
    ATerm l_27;
    l_27 = t;
    {
      ATerm v_91 = NULL;
      t = run_time_0(t);
      {
        v_91 = t;
        if(((u_91 != NULL) && (u_91 != v_91)))
          _fail(v_91);
        else
          u_91 = v_91;
      }
    }
    t = l_27;
    {
      ATerm x_91 = NULL;
      t = term_n_27;
      {
        t = get_config_0(t);
        {
          x_91 = t;
          if(((w_91 != NULL) && (w_91 != x_91)))
            _fail(x_91);
          else
            w_91 = x_91;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_28), not_null(u_91)), term_d_28), not_null(w_91)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_4);
  {
    t = term_o_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL;
  c_92 = t;
  b_92 :
  if(match_cons(c_92, sym__2))
    {
      d_92 = ATgetArgument(c_92, 0);
      e_92 = ATgetArgument(c_92, 1);
      t = SSL_WriteToTextFile(not_null(d_92), not_null(e_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
  k_92 = t;
  j_92 :
  if(match_cons(k_92, sym__2))
    {
      l_92 = ATgetArgument(k_92, 0);
      m_92 = ATgetArgument(k_92, 1);
      t = SSL_WriteToBinaryFile(not_null(l_92), not_null(m_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_93 = NULL;
  ATerm g_28;
  g_28 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_4 (ATerm t)
          {
            ATerm f_93 = NULL,g_93 = NULL;
            f_93 = t;
            s_92 :
            if(match_cons(f_93, sym_Output_1))
              {
                g_93 = ATgetArgument(f_93, 0);
                if(((a_93 != NULL) && (a_93 != g_93)))
                  _fail(g_93);
                else
                  a_93 = g_93;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_4);
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
          {
            ATerm h_93 = NULL;
            t = term_c_29;
            {
              h_93 = t;
              if(((a_93 != NULL) && (a_93 != h_93)))
                _fail(h_93);
              else
                a_93 = h_93;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_4, _id);
  }
  t = g_28;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm r_4 (ATerm t)
      {
        t = not_null(a_93);
        return(t);
      }
      t = split_2(t, r_4, _id);
      return(t);
    }
    t = _2(t, _id, q_4);
    {
      ATerm d_29 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 (ATerm t)
          {
            ATerm t_4 (ATerm t)
            {
              ATerm i_93 = NULL;
              i_93 = t;
              z_92 :
              if(!(match_cons(i_93, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_4);
            return(t);
          }
          t = _2(t, s_4, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm p_93 (ATerm))
{
  ATerm q_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL;
  ATerm f_29;
  f_29 = t;
  t = dtime_0(t);
  t = f_29;
  {
    t = p_93(t);
    {
      ATerm g_29;
      g_29 = t;
      {
        ATerm r_93 = NULL;
        t = dtime_0(t);
        {
          r_93 = t;
          if(((q_93 != NULL) && (q_93 != r_93)))
            _fail(r_93);
          else
            q_93 = r_93;
        }
      }
      t = g_29;
      {
        s_93 = t;
        o_93 :
        if(match_cons(s_93, sym__2))
          {
            t_93 = ATgetArgument(s_93, 0);
            u_93 = ATgetArgument(s_93, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_93)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_93))), not_null(u_93));
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
  ATerm f_94 = NULL;
  f_94 = t;
  t = SSL_ReadFromFile(not_null(f_94));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_109 (ATerm), ATerm g_109 (ATerm))
{
  ATerm l_94 = NULL,n_94 = NULL;
  ATerm h_29;
  h_29 = t;
  {
    ATerm m_94 = NULL;
    t = f_109(t);
    {
      m_94 = t;
      if(((l_94 != NULL) && (l_94 != m_94)))
        _fail(m_94);
      else
        l_94 = m_94;
    }
  }
  t = h_29;
  {
    ATerm o_94 = NULL;
    t = g_109(t);
    {
      o_94 = t;
      if(((n_94 != NULL) && (n_94 != o_94)))
        _fail(o_94);
      else
        n_94 = o_94;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_94), not_null(n_94));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_94 = NULL;
  ATerm i_29;
  i_29 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 (ATerm t)
        {
          ATerm v_94 = NULL,w_94 = NULL;
          v_94 = t;
          s_94 :
          if(match_cons(v_94, sym_Input_1))
            {
              w_94 = ATgetArgument(v_94, 0);
              if(((u_94 != NULL) && (u_94 != w_94)))
                _fail(w_94);
              else
                u_94 = w_94;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_4);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        {
          ATerm x_94 = NULL;
          t = term_l_29;
          {
            x_94 = t;
            if(((u_94 != NULL) && (u_94 != x_94)))
              _fail(x_94);
            else
              u_94 = x_94;
          }
        }
      }
  }
  t = i_29;
  {
    ATerm v_4 (ATerm t)
    {
      t = not_null(u_94);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_95 = NULL;
  e_95 = t;
  d_95 :
  if(match_cons(e_95, sym_Version_0))
    {
      ATerm g_95 = NULL,i_95 = NULL;
      ATerm r_29;
      r_29 = t;
      {
        ATerm h_95 = NULL;
        t = SSLgetAnnotations(not_null(e_95));
        {
          h_95 = t;
          if(((g_95 != NULL) && (g_95 != h_95)))
            _fail(h_95);
          else
            g_95 = h_95;
        }
      }
      t = r_29;
      {
        ATerm j_95 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_95));
        {
          j_95 = t;
          if(((i_95 != NULL) && (i_95 != j_95)))
            _fail(j_95);
          else
            i_95 = j_95;
        }
        t = not_null(i_95);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_93 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_4);
  t = n_93(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_95 = NULL;
  o_95 = t;
  t = SSL_table_create(not_null(o_95));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_95 = NULL;
  s_95 = t;
  {
    ATerm a_30;
    a_30 = t;
    {
      t = term_b_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_30, term_c_30, not_null(s_95));
          t = table_put_0(t);
        }
      }
    }
    t = a_30;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_95 = NULL;
  w_95 = t;
  t = SSL_string_to_int(not_null(w_95));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL;
  e_96 = t;
  c_96 :
  if(match_string(e_96, "register-usage-info"))
    {
      t = register_usage_1(t, r_0);
    }
  else
    {
      if(((ATgetType(e_96) == AT_LIST) && ((ATermList) e_96 != ATempty)))
        {
          f_96 = ATgetFirst((ATermList) e_96);
          g_96 = (ATerm) ATgetNext((ATermList) e_96);
          d_96 :
          if(((ATgetType(g_96) == AT_LIST) && ((ATermList) g_96 != ATempty)))
            {
              h_96 = ATgetFirst((ATermList) g_96);
              i_96 = (ATerm) ATgetNext((ATermList) g_96);
              {
                ATerm m_96 = NULL;
                ATerm d_30;
                d_30 = t;
                {
                  t = not_null(f_96);
                  t = p_0(t);
                }
                t = d_30;
                {
                  ATerm n_96 = NULL;
                  t = not_null(h_96);
                  {
                    t = q_0(t);
                    {
                      n_96 = t;
                      if(((m_96 != NULL) && (m_96 != n_96)))
                        _fail(n_96);
                      else
                        m_96 = n_96;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_96)), not_null(m_96));
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
  ATerm e_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 (ATerm t)
      {
        ATerm i_97 = NULL;
        i_97 = t;
        r_96 :
        if(!(match_string(i_97, "-i")))
          {
            if(!(match_string(i_97, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        ATerm r_97 = NULL;
        ATerm i_30;
        i_30 = t;
        {
          ATerm p_97 = NULL;
          ATerm q_97 = NULL;
          q_97 = t;
          if(((p_97 != NULL) && (p_97 != q_97)))
            _fail(q_97);
          else
            p_97 = q_97;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_30, not_null(p_97));
            t = set_config_0(t);
          }
        }
        t = i_30;
        {
          ATerm s_97 = NULL;
          s_97 = t;
          if(((r_97 != NULL) && (r_97 != s_97)))
            _fail(s_97);
          else
            r_97 = s_97;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_97));
        }
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_k_30;
        return(t);
      }
      t = ArgOption_3(t, x_4, y_4, z_4);
      LocalPopChoice(h_30);
    }
  else
    {
      t = e_30;
      {
        ATerm l_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              ATerm t_97 = NULL;
              t_97 = t;
              y_96 :
              if(!(match_string(t_97, "-o")))
                {
                  if(!(match_string(t_97, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              ATerm w_97 = NULL;
              ATerm p_30;
              p_30 = t;
              {
                ATerm u_97 = NULL;
                ATerm v_97 = NULL;
                v_97 = t;
                if(((u_97 != NULL) && (u_97 != v_97)))
                  _fail(v_97);
                else
                  u_97 = v_97;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_30, not_null(u_97));
                  t = set_config_0(t);
                }
              }
              t = p_30;
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
            ATerm c_5 (ATerm t)
            {
              t = term_t_30;
              return(t);
            }
            t = ArgOption_3(t, a_5, b_5, c_5);
            LocalPopChoice(o_30);
          }
        else
          {
            t = l_30;
            {
              ATerm u_30 = t;
              int v_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_5 (ATerm t)
                  {
                    ATerm y_97 = NULL;
                    y_97 = t;
                    b_97 :
                    if(!(match_string(y_97, "-S")))
                      {
                        if(!(match_string(y_97, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_5 (ATerm t)
                  {
                    t = term_w_30;
                    t = set_config_0(t);
                    t = term_g_31;
                    return(t);
                  }
                  ATerm f_5 (ATerm t)
                  {
                    t = term_h_31;
                    return(t);
                  }
                  t = Option_3(t, d_5, e_5, f_5);
                  LocalPopChoice(v_30);
                }
              else
                {
                  t = u_30;
                  {
                    ATerm i_31 = t;
                    int j_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_5 (ATerm t)
                        {
                          ATerm z_97 = NULL;
                          z_97 = t;
                          c_97 :
                          if(!(match_string(z_97, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_5 (ATerm t)
                        {
                          ATerm c_98 = NULL;
                          ATerm k_31;
                          k_31 = t;
                          {
                            ATerm a_98 = NULL;
                            ATerm b_98 = NULL;
                            t = string_to_int_0(t);
                            {
                              b_98 = t;
                              if(((a_98 != NULL) && (a_98 != b_98)))
                                _fail(b_98);
                              else
                                a_98 = b_98;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_26, not_null(a_98));
                              t = set_config_0(t);
                            }
                          }
                          t = k_31;
                          {
                            ATerm d_98 = NULL;
                            d_98 = t;
                            if(((c_98 != NULL) && (c_98 != d_98)))
                              _fail(d_98);
                            else
                              c_98 = d_98;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_98));
                          }
                          return(t);
                        }
                        ATerm i_5 (ATerm t)
                        {
                          t = term_l_31;
                          return(t);
                        }
                        t = ArgOption_3(t, g_5, h_5, i_5);
                        LocalPopChoice(j_31);
                      }
                    else
                      {
                        t = i_31;
                        {
                          ATerm q_31 = t;
                          int r_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_5 (ATerm t)
                              {
                                ATerm e_98 = NULL;
                                e_98 = t;
                                f_97 :
                                if(!(match_string(e_98, "-v")))
                                  {
                                    if(!(match_string(e_98, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm k_5 (ATerm t)
                              {
                                t = term_t_31;
                                t = set_config_0(t);
                                t = term_u_31;
                                return(t);
                              }
                              ATerm l_5 (ATerm t)
                              {
                                t = term_v_31;
                                return(t);
                              }
                              t = Option_3(t, j_5, k_5, l_5);
                              LocalPopChoice(r_31);
                            }
                          else
                            {
                              t = q_31;
                              {
                                ATerm b_32 = t;
                                int c_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_5 (ATerm t)
                                    {
                                      ATerm f_98 = NULL;
                                      f_98 = t;
                                      g_97 :
                                      if(!(match_string(f_98, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_5 (ATerm t)
                                    {
                                      t = term_i_32;
                                      t = set_config_0(t);
                                      t = term_j_32;
                                      return(t);
                                    }
                                    ATerm o_5 (ATerm t)
                                    {
                                      t = term_k_32;
                                      return(t);
                                    }
                                    t = Option_3(t, m_5, n_5, o_5);
                                    LocalPopChoice(c_32);
                                  }
                                else
                                  {
                                    t = b_32;
                                    {
                                      ATerm p_5 (ATerm t)
                                      {
                                        ATerm g_98 = NULL;
                                        g_98 = t;
                                        h_97 :
                                        if(!(match_string(g_98, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm q_5 (ATerm t)
                                      {
                                        t = term_m_32;
                                        t = set_config_0(t);
                                        t = term_n_32;
                                        return(t);
                                      }
                                      ATerm r_5 (ATerm t)
                                      {
                                        t = term_o_32;
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
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_98 = NULL;
  o_98 = t;
  t = SSL_table_destroy(not_null(o_98));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_98 = NULL;
  s_98 = t;
  t = SSL_exit(not_null(s_98));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_99 = NULL;
  a_99 = t;
  t = SSL_implode_string(not_null(a_99));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_106 (ATerm))
{
  ATerm d_99 (ATerm t)
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_99);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        {
          t = Nil_0(t);
          t = i_106(t);
        }
      }
    return(t);
  }
  t = d_99(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
        g_99 = t;
        f_99 :
        if(((ATgetType(g_99) == AT_LIST) && ((ATermList) g_99 != ATempty)))
          {
            h_99 = ATgetFirst((ATermList) g_99);
            i_99 = (ATerm) ATgetNext((ATermList) g_99);
            {
              t = not_null(h_99);
              {
                ATerm s_5 (ATerm t)
                {
                  t = not_null(i_99);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_5);
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
  ATerm o_99 = NULL;
  o_99 = t;
  t = SSL_explode_string(not_null(o_99));
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
ATerm long_description_1 (ATerm t, ATerm k_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_105 (ATerm))
{
  ATerm s_99 (ATerm t)
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = Cons_2(t, u_105, s_99);
      }
    return(t);
  }
  t = s_99(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
  d_100 = t;
  a_100 :
  if(((ATgetType(d_100) == AT_LIST) && ((ATermList) d_100 != ATempty)))
    {
      b_100 = ATgetFirst((ATermList) d_100);
      c_100 = (ATerm) ATgetNext((ATermList) d_100);
      {
        ATerm g_100 = NULL;
        t = not_null(c_100);
        {
          ATerm v_32;
          v_32 = t;
          {
            ATerm h_100 = NULL,j_100 = NULL,m_100 = NULL;
            ATerm w_32;
            w_32 = t;
            {
              ATerm i_100 = NULL;
              t = o_0(t);
              {
                i_100 = t;
                if(((h_100 != NULL) && (h_100 != i_100)))
                  _fail(i_100);
                else
                  h_100 = i_100;
              }
            }
            t = w_32;
            {
              ATerm k_100 = NULL;
              t = not_null(b_100);
              {
                t = n_0(t);
                {
                  k_100 = t;
                  if(((j_100 != NULL) && (j_100 != k_100)))
                    _fail(k_100);
                  else
                    j_100 = k_100;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_100)), not_null(j_100));
                {
                  m_100 = t;
                  if(((g_100 != NULL) && (g_100 != m_100)))
                    _fail(m_100);
                  else
                    g_100 = m_100;
                }
              }
            }
          }
          t = v_32;
          {
            ATerm t_5 (ATerm t)
            {
              t = not_null(g_100);
              return(t);
            }
            t = reverse_acc_2(t, n_0, t_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) d_100 == ATempty))
        {
          {
            t = term_r_6;
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
  ATerm u_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm g_101 = NULL,h_101 = NULL;
  g_101 = t;
  f_101 :
  if(match_cons(g_101, sym_Program_1))
    {
      h_101 = ATgetArgument(g_101, 0);
      {
        ATerm k_101 = NULL,m_101 = NULL;
        ATerm l_101 = NULL;
        t = SSLgetAnnotations(not_null(g_101));
        {
          l_101 = t;
          if(((k_101 != NULL) && (k_101 != l_101)))
            _fail(l_101);
          else
            k_101 = l_101;
        }
        {
          t = not_null(h_101);
          {
            ATerm o_101 = NULL;
            t = c_78(t);
            {
              m_101 = t;
              {
                ATerm p_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_101)), not_null(k_101));
                {
                  p_101 = t;
                  if(((o_101 != NULL) && (o_101 != p_101)))
                    _fail(p_101);
                  else
                    o_101 = p_101;
                }
                t = not_null(o_101);
              }
            }
          }
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
  ATerm d_102 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      ATerm e_102 = NULL;
      e_102 = t;
      if(((d_102 != NULL) && (d_102 != e_102)))
        _fail(e_102);
      else
        d_102 = e_102;
      return(t);
    }
    t = Program_1(t, w_5);
    return(t);
  }
  t = option_defined_1(t, v_5);
  {
    ATerm x_5 (ATerm t)
    {
      ATerm f_102 = NULL;
      ATerm g_102 = NULL;
      t = term_r_6;
      {
        ATerm y_5 (ATerm t)
        {
          t = not_null(d_102);
          return(t);
        }
        t = short_description_1(t, y_5);
        {
          t = concat_strings_0(t);
          {
            g_102 = t;
            if(((f_102 != NULL) && (f_102 != g_102)))
              _fail(g_102);
            else
              f_102 = g_102;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATempty, not_null(f_102)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATempty, term_x_32));
      {
        t = printnl_0(t);
        {
          t = term_a_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_5 (ATerm t)
                {
                  ATerm h_102 = NULL;
                  h_102 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_102)), term_b_33));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_5);
                {
                  ATerm a_6 (ATerm t)
                  {
                    ATerm j_102 = NULL;
                    ATerm k_102 = NULL;
                    t = term_r_6;
                    {
                      ATerm b_6 (ATerm t)
                      {
                        t = not_null(d_102);
                        return(t);
                      }
                      t = long_description_1(t, b_6);
                      {
                        t = concat_strings_0(t);
                        {
                          k_102 = t;
                          if(((j_102 != NULL) && (j_102 != k_102)))
                            _fail(k_102);
                          else
                            j_102 = k_102;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_102)), term_c_33));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_6);
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
ATerm Undefined_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm u_102 = NULL,v_102 = NULL;
  u_102 = t;
  t_102 :
  if(match_cons(u_102, sym_Undefined_1))
    {
      v_102 = ATgetArgument(u_102, 0);
      {
        ATerm y_102 = NULL,b_103 = NULL;
        ATerm a_103 = NULL;
        t = SSLgetAnnotations(not_null(u_102));
        {
          a_103 = t;
          if(((y_102 != NULL) && (y_102 != a_103)))
            _fail(a_103);
          else
            y_102 = a_103;
        }
        {
          t = not_null(v_102);
          {
            ATerm d_103 = NULL;
            t = d_78(t);
            {
              b_103 = t;
              {
                ATerm f_103 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_103)), not_null(y_102));
                {
                  f_103 = t;
                  if(((d_103 != NULL) && (d_103 != f_103)))
                    _fail(f_103);
                  else
                    d_103 = f_103;
                }
                t = not_null(d_103);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm c_106 (ATerm))
{
  ATerm m_103 (ATerm t)
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_106, _id);
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = Cons_2(t, _id, m_103);
      }
    return(t);
  }
  t = m_103(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_91 (ATerm))
{
  t = fetch_1(t, i_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_103 = NULL;
  w_103 = t;
  v_103 :
  if(match_cons(w_103, sym_Help_0))
    {
      ATerm y_103 = NULL,a_104 = NULL;
      ATerm f_33;
      f_33 = t;
      {
        ATerm z_103 = NULL;
        t = SSLgetAnnotations(not_null(w_103));
        {
          z_103 = t;
          if(((y_103 != NULL) && (y_103 != z_103)))
            _fail(z_103);
          else
            y_103 = z_103;
        }
      }
      t = f_33;
      {
        ATerm b_104 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_103));
        {
          b_104 = t;
          if(((a_104 != NULL) && (a_104 != b_104)))
            _fail(b_104);
          else
            a_104 = b_104;
        }
        t = not_null(a_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_109 (ATerm))
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_109(t);
      LocalPopChoice(h_33);
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
  ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL;
  h_104 = t;
  g_104 :
  if(match_cons(h_104, sym__2))
    {
      i_104 = ATgetArgument(h_104, 0);
      j_104 = ATgetArgument(h_104, 1);
      t = SSL_table_get(not_null(i_104), not_null(j_104));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL,t_104 = NULL;
  q_104 = t;
  p_104 :
  if(match_cons(q_104, sym__3))
    {
      r_104 = ATgetArgument(q_104, 0);
      s_104 = ATgetArgument(q_104, 1);
      t_104 = ATgetArgument(q_104, 2);
      {
        ATerm i_33;
        i_33 = t;
        {
          ATerm x_104 = NULL;
          ATerm y_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_104), not_null(s_104));
          {
            ATerm j_33 = t;
            int k_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_33);
              }
            else
              {
                t = j_33;
                t = (ATerm) ATempty;
              }
            {
              y_104 = t;
              if(((x_104 != NULL) && (x_104 != y_104)))
                _fail(y_104);
              else
                x_104 = y_104;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_104), not_null(s_104), (ATerm) ATinsert(CheckATermList(not_null(x_104)), not_null(t_104)));
            t = table_put_0(t);
          }
        }
        t = i_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm c_105 = NULL;
  ATerm d_105 = NULL;
  t = term_r_6;
  {
    t = o_90(t);
    {
      d_105 = t;
      if(((c_105 != NULL) && (c_105 != d_105)))
        _fail(d_105);
      else
        c_105 = d_105;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_32, term_z_32, not_null(c_105));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL;
  j_105 = t;
  i_105 :
  if(match_string(j_105, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(j_105) == AT_LIST) && ((ATermList) j_105 != ATempty)))
        {
          k_105 = ATgetFirst((ATermList) j_105);
          l_105 = (ATerm) ATgetNext((ATermList) j_105);
          {
            ATerm o_105 = NULL;
            ATerm n_33;
            n_33 = t;
            {
              t = not_null(k_105);
              t = c_0(t);
            }
            t = n_33;
            {
              ATerm p_105 = NULL;
              t = term_r_6;
              {
                t = d_0(t);
                {
                  p_105 = t;
                  if(((o_105 != NULL) && (o_105 != p_105)))
                    _fail(p_105);
                  else
                    o_105 = p_105;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_105)), not_null(o_105));
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
  ATerm d_6 (ATerm t)
  {
    ATerm w_105 = NULL;
    w_105 = t;
    t_105 :
    if(!(match_string(w_105, "--help")))
      {
        if(!(match_string(w_105, "-h")))
          {
            if(!(match_string(w_105, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_o_33;
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_p_33;
    return(t);
  }
  t = Option_3(t, d_6, e_6, f_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL,b_106 = NULL;
  z_105 = t;
  y_105 :
  if(((ATgetType(z_105) == AT_LIST) && ((ATermList) z_105 != ATempty)))
    {
      a_106 = ATgetFirst((ATermList) z_105);
      b_106 = (ATerm) ATgetNext((ATermList) z_105);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_106)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_106)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_87 (ATerm), ATerm u_87 (ATerm))
{
  ATerm p_106 = NULL,q_106 = NULL,r_106 = NULL;
  p_106 = t;
  o_106 :
  if(((ATgetType(p_106) == AT_LIST) && ((ATermList) p_106 != ATempty)))
    {
      q_106 = ATgetFirst((ATermList) p_106);
      r_106 = (ATerm) ATgetNext((ATermList) p_106);
      {
        ATerm v_106 = NULL,x_106 = NULL;
        ATerm w_106 = NULL;
        t = SSLgetAnnotations(not_null(p_106));
        {
          w_106 = t;
          if(((v_106 != NULL) && (v_106 != w_106)))
            _fail(w_106);
          else
            v_106 = w_106;
        }
        {
          t = not_null(q_106);
          {
            ATerm z_106 = NULL;
            t = t_87(t);
            {
              x_106 = t;
              {
                t = not_null(r_106);
                {
                  ATerm b_107 = NULL;
                  t = u_87(t);
                  {
                    z_106 = t;
                    {
                      ATerm c_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_106)), not_null(x_106)), not_null(v_106));
                      {
                        c_107 = t;
                        if(((b_107 != NULL) && (b_107 != c_107)))
                          _fail(c_107);
                        else
                          b_107 = c_107;
                      }
                      t = not_null(b_107);
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
  ATerm n_107 = NULL;
  n_107 = t;
  m_107 :
  if(((ATermList) n_107 == ATempty))
    {
      {
        ATerm p_107 = NULL,r_107 = NULL;
        ATerm q_33;
        q_33 = t;
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
        t = q_33;
        {
          ATerm y_107 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_107));
          {
            y_107 = t;
            if(((r_107 != NULL) && (r_107 != y_107)))
              _fail(y_107);
            else
              r_107 = y_107;
          }
          t = not_null(r_107);
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
  ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
  e_108 = t;
  d_108 :
  if(match_cons(e_108, sym__2))
    {
      f_108 = ATgetArgument(e_108, 0);
      g_108 = ATgetArgument(e_108, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_25, not_null(f_108), not_null(g_108));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm s_33;
  s_33 = t;
  {
    ATerm g_6 (ATerm t)
    {
      t = term_t_33;
      t = m_90(t);
      return(t);
    }
    t = try_1(t, g_6);
  }
  t = s_33;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm o_108 = NULL;
      ATerm u_33;
      u_33 = t;
      {
        ATerm m_108 = NULL;
        ATerm n_108 = NULL;
        n_108 = t;
        if(((m_108 != NULL) && (m_108 != n_108)))
          _fail(n_108);
        else
          m_108 = n_108;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_27, not_null(m_108));
          t = set_config_0(t);
        }
      }
      t = u_33;
      {
        ATerm p_108 = NULL;
        p_108 = t;
        if(((o_108 != NULL) && (o_108 != p_108)))
          _fail(p_108);
        else
          o_108 = p_108;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_108));
      }
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm v_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              {
                t = m_90(t);
                t = Cons_2(t, _id, i_6);
              }
            }
          LocalPopChoice(w_33);
        }
      else
        {
          t = v_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_6, i_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL;
  ATerm z_33;
  z_33 = t;
  {
    ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL;
    y_108 = t;
    u_108 :
    if(match_cons(y_108, sym__3))
      {
        z_108 = ATgetArgument(y_108, 0);
        a_109 = ATgetArgument(y_108, 1);
        b_109 = ATgetArgument(y_108, 2);
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
              if(((x_108 != NULL) && (x_108 != b_109)))
                _fail(b_109);
              else
                x_108 = b_109;
              t = SSL_table_put(not_null(v_108), not_null(w_108), not_null(x_108));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm e_109 = NULL;
  ATerm a_34;
  a_34 = t;
  {
    t = term_b_34;
    t = table_put_0(t);
  }
  t = a_34;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm c_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_90(t);
          LocalPopChoice(d_34);
        }
      else
        {
          t = c_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_6);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm e_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_o_26;
                t = exit_0(t);
              }
            }
            LocalPopChoice(k_34);
          }
        else
          {
            t = e_34;
            {
              ATerm l_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm h_109 = NULL;
                  h_109 = t;
                  if(((e_109 != NULL) && (e_109 != h_109)))
                    _fail(h_109);
                  else
                    e_109 = h_109;
                  return(t);
                }
                t = Undefined_1(t, m_6);
                return(t);
              }
              t = option_defined_1(t, l_6);
              {
                ATerm l_34;
                l_34 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_109)), term_m_34));
                  t = printnl_0(t);
                }
                t = l_34;
                {
                  t = system_usage_0(t);
                  {
                    t = term_f_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_6);
      {
        ATerm n_34;
        n_34 = t;
        {
          t = term_y_32;
          t = table_destroy_0(t);
        }
        t = n_34;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_93(t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_6);
  {
    t = store_options_0(t);
    {
      t = e_93(t);
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_93);
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            {
              ATerm a_35 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, b_93);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(b_35);
                }
              else
                {
                  t = a_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm x_92 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    ATerm p_6 (ATerm t)
    {
      ATerm c_35;
      c_35 = t;
      {
        ATerm k_109 = NULL;
        ATerm l_109 = NULL;
        t = term_n_27;
        {
          t = get_config_0(t);
          {
            l_109 = t;
            if(((k_109 != NULL) && (k_109 != l_109)))
              _fail(l_109);
            else
              k_109 = l_109;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATempty, not_null(k_109)));
          t = printnl_0(t);
        }
      }
      t = c_35;
      return(t);
    }
    t = if_verbose2_1(t, p_6);
    return(t);
  }
  t = iowrap_4(t, v_92, w_92, x_92, o_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_92 (ATerm), ATerm u_92 (ATerm))
{
  t = iowrap_3(t, t_92, u_92, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_92 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    t = _2(t, _id, q_92);
    return(t);
  }
  t = iowrap_2(t, q_6, _fail);
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
