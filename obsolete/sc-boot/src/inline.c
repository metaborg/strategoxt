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
ATerm term_y_33;
ATerm term_s_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_b_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_y_26;
ATerm term_j_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_u_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_c_20;
ATerm term_r_18;
ATerm term_k_17;
ATerm term_k_15;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_q_13;
ATerm term_d_12;
ATerm term_x_11;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
void init_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_t_6);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_t_6);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_t_6);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_t_6);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_t_6);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_q_32);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, (ATerm) ATempty);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_91 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_106 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm l_110 (ATerm));
ATerm Rec_2 (ATerm, ATerm a_85 (ATerm), ATerm b_85 (ATerm));
ATerm Let_2 (ATerm, ATerm c_85 (ATerm), ATerm d_85 (ATerm));
ATerm sboundin_3 (ATerm, ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm h_110 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm q_83 (ATerm));
ATerm tboundin_3 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm));
ATerm for_3 (ATerm, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm));
ATerm HdMember_1 (ATerm, ATerm g_99 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm u_96 (ATerm), ATerm v_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm a_97 (ATerm), ATerm b_97 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm o_96 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm w_95 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm b_96 (ATerm));
ATerm rename_4 (ATerm, ATerm c_97 (ATerm, ATerm (ATerm)), ATerm d_97 (ATerm), ATerm e_97 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_97 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm r_91 (ATerm));
ATerm restore_always_2 (ATerm, ATerm j_106 (ATerm), ATerm k_106 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm q_91 (ATerm));
ATerm scope_2 (ATerm, ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm u_91 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm));
ATerm crush_3 (ATerm, ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm p_84 (ATerm), ATerm q_84 (ATerm));
ATerm Choice_2 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm));
ATerm Cong_2 (ATerm, ATerm s_85 (ATerm), ATerm t_85 (ATerm));
ATerm Match_1 (ATerm, ATerm a_86 (ATerm));
ATerm Seq_2 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm Scope_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm Build_1 (ATerm, ATerm b_86 (ATerm));
ATerm SVar_1 (ATerm, ATerm z_84 (ATerm));
ATerm Call_2 (ATerm, ATerm o_85 (ATerm), ATerm p_85 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm b_108 (ATerm));
ATerm SDef_3 (ATerm, ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm));
ATerm zip_1 (ATerm, ATerm w_103 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm));
ATerm Explode_2 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm));
ATerm Op_2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
ATerm pat_td_1 (ATerm, ATerm l_87 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm y_92 (ATerm), ATerm z_92 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_93 (ATerm));
ATerm downup_1 (ATerm, ATerm n_106 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_84 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_84 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_98 (ATerm), ATerm c_98 (ATerm));
ATerm crush_2 (ATerm, ATerm p_99 (ATerm), ATerm q_99 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_105 (ATerm), ATerm f_105 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_91 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_102 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_88 (ATerm));
ATerm map_1 (ATerm, ATerm t_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_88 (ATerm));
ATerm Program_1 (ATerm, ATerm t_76 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_76 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_102 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_105 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_88 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm m_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_88 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_90 (ATerm), ATerm o_90 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_90 (ATerm));
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
ATerm rewrite_1 (ATerm t, ATerm w_91 (ATerm))
{
  ATerm f_7 = NULL;
  ATerm h_7 = NULL;
  f_7 = t;
  {
    ATerm l_7 = NULL;
    t = term_t_6;
    {
      t = w_91(t);
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
              ATerm c_0 (ATerm t)
              {
                t = term_u_6;
                return(t);
              }
              t = rewrite_1(t, c_0);
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
                  ATerm d_0 (ATerm t)
                  {
                    t = term_v_6;
                    return(t);
                  }
                  t = rewrite_1(t, d_0);
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
ATerm topdown_1 (ATerm t, ATerm l_106 (ATerm))
{
  t = l_106(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, l_106);
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
                                    ATerm w_6;
                                    w_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_6, not_null(l_9)));
                                      {
                                        ATerm f_0 (ATerm t)
                                        {
                                          t = term_u_6;
                                          return(t);
                                        }
                                        t = assert_1(t, f_0);
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
                          else
                            {
                              _fail(t);
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
                            ATerm y_6;
                            y_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_z_6, not_null(v_9)));
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_v_6;
                                  return(t);
                                }
                                t = assert_1(t, g_0);
                              }
                            }
                            t = y_6;
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
    t = term_v_6;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_u_6;
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
                            ATerm a_7 = t;
                            int b_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(b_7);
                              }
                            else
                              {
                                t = a_7;
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
ATerm spaste_1 (ATerm t, ATerm l_110 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, l_110);
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
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm e_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, l_110);
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
            LocalPopChoice(g_7);
          }
        else
          {
            t = e_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = l_110(t);
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
ATerm Rec_2 (ATerm t, ATerm a_85 (ATerm), ATerm b_85 (ATerm))
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
            t = a_85(t);
            {
              h_12 = t;
              {
                t = not_null(b_12);
                {
                  ATerm l_12 = NULL;
                  t = b_85(t);
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
ATerm Let_2 (ATerm t, ATerm c_85 (ATerm), ATerm d_85 (ATerm))
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
            t = c_85(t);
            {
              g_13 = t;
              {
                t = not_null(a_13);
                {
                  ATerm k_13 = NULL;
                  t = d_85(t);
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
ATerm sboundin_3 (ATerm t, ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm))
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, m_110, m_110);
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm k_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, o_110, o_110, m_110);
            LocalPopChoice(m_7);
          }
        else
          {
            t = k_7;
            t = Rec_2(t, o_110, m_110);
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
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          ATerm p_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(y_7);
            }
          else
            {
              t = p_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm h_110 (ATerm))
{
  t = Scope_2(t, h_110, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm q_83 (ATerm))
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
            t = q_83(t);
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
ATerm tboundin_3 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm))
{
  ATerm z_7 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, k_110, i_110);
      LocalPopChoice(e_8);
    }
  else
    {
      t = z_7;
      t = DynamicRules_1(t, i_110);
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
            ATerm f_8 = t;
            int g_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                LocalPopChoice(g_8);
              }
            else
              {
                t = f_8;
                {
                  ATerm h_8 = t;
                  int r_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_1(t, g_1);
                      t = v_16(t);
                      LocalPopChoice(r_8);
                    }
                  else
                    {
                      t = h_8;
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
            ATerm w_8;
            w_8 = t;
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
            t = w_8;
            {
              ATerm x_8;
              x_8 = t;
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
              t = x_8;
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
ATerm while_not_2 (ATerm t, ATerm p_93 (ATerm), ATerm q_93 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_93(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          t = q_93(t);
          t = g_19(t);
        }
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm))
{
  t = s_93(t);
  t = while_not_2(t, t_93, u_93);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm g_99 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(((ATgetType(k_19) == AT_LIST) && ((ATermList) k_19 != ATempty)))
    {
      l_19 = ATgetFirst((ATermList) k_19);
      m_19 = (ATerm) ATgetNext((ATermList) k_19);
      {
        t = g_99(t);
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
  ATerm w_9 = t;
  int x_9 = stack_ptr;
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
                ATerm y_9 = t;
                int z_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(z_9);
                  }
                else
                  {
                    t = y_9;
                    {
                      ATerm a_10 = t;
                      int b_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_1 (ATerm t)
                          {
                            t = not_null(x_19);
                            return(t);
                          }
                          t = HdMember_1(t, i_1);
                          t = d_20(t);
                          LocalPopChoice(b_10);
                        }
                      else
                        {
                          t = a_10;
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
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
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
          ATerm c_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                ATerm m_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = m_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, m_1);
              LocalPopChoice(l_10);
            }
          else
            {
              t = c_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, j_1, k_1, l_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_20 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_95(t);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm u_10 = t;
          int x_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_20 = NULL;
              ATerm g_11;
              g_11 = t;
              {
                ATerm h_20 = NULL;
                t = c_95(t);
                {
                  h_20 = t;
                  if(((g_20 != NULL) && (g_20 != h_20)))
                    _fail(h_20);
                  else
                    g_20 = h_20;
                }
              }
              t = g_11;
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
                t = d_95(t, n_1, i_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              LocalPopChoice(x_10);
            }
          else
            {
              t = u_10;
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
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
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
        ATerm o_11 = t;
        int p_11 = stack_ptr;
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
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
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
ATerm DistBinding_2 (ATerm t, ATerm u_96 (ATerm), ATerm v_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
              t = u_96(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm x_22 = NULL;
            x_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), not_null(q_22));
              t = u_96(t);
            }
            return(t);
          }
          t = v_96(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm a_97 (ATerm), ATerm b_97 (ATerm, ATerm (ATerm)))
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
        ATerm q_11;
        q_11 = t;
        {
          ATerm r_23 = NULL;
          t = not_null(k_23);
          {
            ATerm s_23 = NULL;
            t = a_97(t);
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
        t = q_11;
        {
          ATerm x_23 = NULL;
          t = not_null(k_23);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(p_23);
              return(t);
            }
            t = b_97(t, v_1);
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
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(s_11);
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
ATerm RnVar_1 (ATerm t, ATerm o_96 (ATerm, ATerm (ATerm)))
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
          t = o_96(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm w_95 (ATerm))
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
              t = w_95(t);
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
ATerm env_alltd_1 (ATerm t, ATerm b_96 (ATerm))
{
  ATerm y_25 (ATerm t)
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_96(t);
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = all_dist_1(t, y_25);
      }
    return(t);
  }
  t = y_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm c_97 (ATerm, ATerm (ATerm)), ATerm d_97 (ATerm), ATerm e_97 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_97 (ATerm, ATerm (ATerm)))
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
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, c_97);
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              {
                t = RnBinding_2(t, d_97, f_97);
                t = DistBinding_2(t, d_26, e_97);
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
        t = term_x_11;
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
    t = term_t_6;
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
        t = term_x_11;
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
                                              ATerm c_12;
                                              c_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_27)), term_d_12);
                                                {
                                                  ATerm c_2 (ATerm t)
                                                  {
                                                    t = term_x_11;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, c_2);
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
              }
            else
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
        t = term_x_11;
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
    t = term_t_6;
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
        t = term_x_11;
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
                                            ATerm e_12;
                                            e_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_27)), term_d_12);
                                              {
                                                ATerm f_2 (ATerm t)
                                                {
                                                  t = term_x_11;
                                                  return(t);
                                                }
                                                t = assert_1(t, f_2);
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
        t = term_x_11;
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
    t = term_t_6;
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
                ATerm i_12 = t;
                int k_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_28(t);
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
                          t = y_28(t);
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
                                t = z_28(t);
                                LocalPopChoice(q_12);
                              }
                            else
                              {
                                t = p_12;
                                {
                                  ATerm r_12 = t;
                                  int s_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_29(t);
                                      LocalPopChoice(s_12);
                                    }
                                  else
                                    {
                                      t = r_12;
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
              ATerm t_12 = t;
              int u_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_28(t);
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
                        t = z_28(t);
                        LocalPopChoice(w_12);
                      }
                    else
                      {
                        t = v_12;
                        {
                          ATerm b_13 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = a_29(t);
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = b_13;
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
        ATerm d_13;
        d_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_29)), term_d_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_x_11;
              return(t);
            }
            t = assert_1(t, h_2);
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
        ATerm h_13;
        h_13 = t;
        {
          ATerm q_30 = NULL;
          ATerm r_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_30), not_null(n_30));
          {
            ATerm j_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(m_13);
              }
            else
              {
                t = j_13;
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
        t = h_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  ATerm n_13;
  n_13 = t;
  {
    ATerm b_31 = NULL;
    ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
    t = r_91(t);
    {
      b_31 = t;
      {
        if(((z_30 != NULL) && (z_30 != b_31)))
          _fail(b_31);
        else
          z_30 = b_31;
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), term_q_13);
              t = table_get_0(t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_30), term_q_13, not_null(y_30));
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
  t = n_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_106 (ATerm), ATerm k_106 (ATerm))
{
  ATerm r_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_106(t);
      t = k_106(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = r_13;
      {
        t = k_106(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm m_31 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm n_31 = NULL;
    ATerm o_31 = NULL;
    t = q_91(t);
    {
      n_31 = t;
      {
        if(((m_31 != NULL) && (m_31 != n_31)))
          _fail(n_31);
        else
          m_31 = n_31;
        {
          ATerm p_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), term_q_13);
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_31), term_q_13, (ATerm) ATinsert(CheckATermList(not_null(o_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = x_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  t = begin_scope_1(t, s_91);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, s_91);
      return(t);
    }
    t = restore_always_2(t, t_91, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm a_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = a_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_91 (ATerm))
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
        ATerm i_14;
        i_14 = t;
        {
          ATerm g_32 = NULL;
          ATerm l_33 = NULL,m_33 = NULL,r_33 = NULL;
          t = u_91(t);
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
                    ATerm j_14 = t;
                    int n_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), term_q_13);
                        t = table_get_0(t);
                        LocalPopChoice(n_14);
                      }
                    else
                      {
                        t = j_14;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_32), term_q_13, (ATerm) ATinsert(CheckATermList(not_null(f_32)), (ATerm) ATinsert(CheckATermList(not_null(e_32)), not_null(z_31))));
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
        t = i_14;
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
        ATerm o_14;
        o_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_p_14, not_null(g_34), not_null(h_34)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_x_11;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_r_14, not_null(g_34), not_null(h_34)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_x_11;
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
ATerm gt_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      {
        ATerm x_14;
        x_14 = t;
        {
          ATerm y_14 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_34), not_null(r_34));
              LocalPopChoice(d_15);
            }
          else
            {
              t = y_14;
              t = SSL_gtr(not_null(q_34), not_null(r_34));
            }
        }
        t = x_14;
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
  ATerm e_15 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm))
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_98(t);
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      {
        ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
        z_34 = t;
        y_34 :
        if(((ATgetType(z_34) == AT_LIST) && ((ATermList) z_34 != ATempty)))
          {
            a_35 = ATgetFirst((ATermList) z_34);
            b_35 = (ATerm) ATgetNext((ATermList) z_34);
            {
              ATerm e_35 = NULL,g_35 = NULL;
              ATerm h_15;
              h_15 = t;
              {
                ATerm f_35 = NULL;
                t = not_null(a_35);
                {
                  t = f_98(t);
                  {
                    f_35 = t;
                    if(((e_35 != NULL) && (e_35 != f_35)))
                      _fail(f_35);
                    else
                      e_35 = f_35;
                  }
                }
              }
              t = h_15;
              {
                ATerm h_35 = NULL;
                t = not_null(b_35);
                {
                  t = foldr_3(t, d_98, e_98, f_98);
                  {
                    h_35 = t;
                    if(((g_35 != NULL) && (g_35 != h_35)))
                      _fail(h_35);
                    else
                      g_35 = h_35;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_35), not_null(g_35));
                  t = e_98(t);
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
ATerm crush_3 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm))
{
  ATerm p_35 = NULL;
  ATerm r_35 = NULL;
  p_35 = t;
  {
    ATerm s_35 = NULL;
    ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
    t = not_null(p_35);
    {
      s_35 = t;
      {
        t = SSL_explode_term(not_null(s_35));
        {
          u_35 = t;
          o_35 :
          if(match_cons(u_35, sym__2))
            {
              v_35 = ATgetArgument(u_35, 0);
              w_35 = ATgetArgument(u_35, 1);
              if(((r_35 != NULL) && (r_35 != w_35)))
                _fail(w_35);
              else
                r_35 = w_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_35);
      t = foldr_3(t, r_99, s_99, t_99);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_k_15;
          return(t);
        }
        t = crush_3(t, o_2, add_0, a_36);
        return(t);
      }
      t = a_36(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
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
ATerm LChoice_2 (ATerm t, ATerm p_84 (ATerm), ATerm q_84 (ATerm))
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_LChoice_2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      {
        ATerm n_36 = NULL,p_36 = NULL;
        ATerm o_36 = NULL;
        t = SSLgetAnnotations(not_null(h_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
        {
          t = not_null(i_36);
          {
            ATerm r_36 = NULL;
            t = p_84(t);
            {
              p_36 = t;
              {
                t = not_null(j_36);
                {
                  ATerm t_36 = NULL;
                  t = q_84(t);
                  {
                    r_36 = t;
                    {
                      ATerm u_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(p_36), not_null(r_36)), not_null(n_36));
                      {
                        u_36 = t;
                        if(((t_36 != NULL) && (t_36 != u_36)))
                          _fail(u_36);
                        else
                          t_36 = u_36;
                      }
                      t = not_null(t_36);
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
ATerm Choice_2 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_Choice_2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      {
        ATerm n_37 = NULL,p_37 = NULL;
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(g_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
        {
          t = not_null(h_37);
          {
            ATerm r_37 = NULL;
            t = n_84(t);
            {
              p_37 = t;
              {
                t = not_null(i_37);
                {
                  ATerm t_37 = NULL;
                  t = o_84(t);
                  {
                    r_37 = t;
                    {
                      ATerm u_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_37), not_null(r_37)), not_null(n_37));
                      {
                        u_37 = t;
                        if(((t_37 != NULL) && (t_37 != u_37)))
                          _fail(u_37);
                        else
                          t_37 = u_37;
                      }
                      t = not_null(t_37);
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
ATerm Cong_2 (ATerm t, ATerm s_85 (ATerm), ATerm t_85 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Cong_2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      {
        ATerm m_38 = NULL,o_38 = NULL;
        ATerm n_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
        {
          t = not_null(h_38);
          {
            ATerm q_38 = NULL;
            t = s_85(t);
            {
              o_38 = t;
              {
                t = not_null(i_38);
                {
                  ATerm s_38 = NULL;
                  t = t_85(t);
                  {
                    q_38 = t;
                    {
                      ATerm t_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(o_38), not_null(q_38)), not_null(m_38));
                      {
                        t_38 = t;
                        if(((s_38 != NULL) && (s_38 != t_38)))
                          _fail(t_38);
                        else
                          s_38 = t_38;
                      }
                      t = not_null(s_38);
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
ATerm Match_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym_Match_1))
    {
      f_39 = ATgetArgument(e_39, 0);
      {
        ATerm i_39 = NULL,k_39 = NULL;
        ATerm j_39 = NULL;
        t = SSLgetAnnotations(not_null(e_39));
        {
          j_39 = t;
          if(((i_39 != NULL) && (i_39 != j_39)))
            _fail(j_39);
          else
            i_39 = j_39;
        }
        {
          t = not_null(f_39);
          {
            ATerm m_39 = NULL;
            t = a_86(t);
            {
              k_39 = t;
              {
                ATerm n_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(k_39)), not_null(i_39));
                {
                  n_39 = t;
                  if(((m_39 != NULL) && (m_39 != n_39)))
                    _fail(n_39);
                  else
                    m_39 = n_39;
                }
                t = not_null(m_39);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_Seq_2))
    {
      z_39 = ATgetArgument(y_39, 0);
      a_40 = ATgetArgument(y_39, 1);
      {
        ATerm e_40 = NULL,g_40 = NULL;
        ATerm f_40 = NULL;
        t = SSLgetAnnotations(not_null(y_39));
        {
          f_40 = t;
          if(((e_40 != NULL) && (e_40 != f_40)))
            _fail(f_40);
          else
            e_40 = f_40;
        }
        {
          t = not_null(z_39);
          {
            ATerm i_40 = NULL;
            t = l_84(t);
            {
              g_40 = t;
              {
                t = not_null(a_40);
                {
                  ATerm k_40 = NULL;
                  t = m_84(t);
                  {
                    i_40 = t;
                    {
                      ATerm l_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(g_40), not_null(i_40)), not_null(e_40));
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
ATerm Scope_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_cons(r_41, sym_Scope_2))
    {
      s_41 = ATgetArgument(r_41, 0);
      t_41 = ATgetArgument(r_41, 1);
      {
        ATerm x_41 = NULL,z_41 = NULL;
        ATerm y_41 = NULL;
        t = SSLgetAnnotations(not_null(r_41));
        {
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
        }
        {
          t = not_null(s_41);
          {
            ATerm g_42 = NULL;
            t = e_86(t);
            {
              z_41 = t;
              {
                t = not_null(t_41);
                {
                  ATerm i_42 = NULL;
                  t = f_86(t);
                  {
                    g_42 = t;
                    {
                      ATerm j_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_41), not_null(g_42)), not_null(x_41));
                      {
                        j_42 = t;
                        if(((i_42 != NULL) && (i_42 != j_42)))
                          _fail(j_42);
                        else
                          i_42 = j_42;
                      }
                      t = not_null(i_42);
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
ATerm Build_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm r_43 = NULL,s_43 = NULL;
  r_43 = t;
  q_43 :
  if(match_cons(r_43, sym_Build_1))
    {
      s_43 = ATgetArgument(r_43, 0);
      {
        ATerm v_43 = NULL,x_43 = NULL;
        ATerm w_43 = NULL;
        t = SSLgetAnnotations(not_null(r_43));
        {
          w_43 = t;
          if(((v_43 != NULL) && (v_43 != w_43)))
            _fail(w_43);
          else
            v_43 = w_43;
        }
        {
          t = not_null(s_43);
          {
            ATerm z_43 = NULL;
            t = b_86(t);
            {
              x_43 = t;
              {
                ATerm a_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_43)), not_null(v_43));
                {
                  a_44 = t;
                  if(((z_43 != NULL) && (z_43 != a_44)))
                    _fail(a_44);
                  else
                    z_43 = a_44;
                }
                t = not_null(z_43);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm k_44 = NULL,l_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_SVar_1))
    {
      l_44 = ATgetArgument(k_44, 0);
      {
        ATerm o_44 = NULL,q_44 = NULL;
        ATerm p_44 = NULL;
        t = SSLgetAnnotations(not_null(k_44));
        {
          p_44 = t;
          if(((o_44 != NULL) && (o_44 != p_44)))
            _fail(p_44);
          else
            o_44 = p_44;
        }
        {
          t = not_null(l_44);
          {
            ATerm s_44 = NULL;
            t = z_84(t);
            {
              q_44 = t;
              {
                ATerm t_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_44)), not_null(o_44));
                {
                  t_44 = t;
                  if(((s_44 != NULL) && (s_44 != t_44)))
                    _fail(t_44);
                  else
                    s_44 = t_44;
                }
                t = not_null(s_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm o_85 (ATerm), ATerm p_85 (ATerm))
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym_Call_2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      {
        ATerm k_45 = NULL,m_45 = NULL;
        ATerm l_45 = NULL;
        t = SSLgetAnnotations(not_null(e_45));
        {
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
        {
          t = not_null(f_45);
          {
            ATerm o_45 = NULL;
            t = o_85(t);
            {
              m_45 = t;
              {
                t = not_null(g_45);
                {
                  ATerm q_45 = NULL;
                  t = p_85(t);
                  {
                    o_45 = t;
                    {
                      ATerm r_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(m_45), not_null(o_45)), not_null(k_45));
                      {
                        r_45 = t;
                        if(((q_45 != NULL) && (q_45 != r_45)))
                          _fail(r_45);
                        else
                          q_45 = r_45;
                      }
                      t = not_null(q_45);
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
  ATerm b_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym_Fail_0))
    {
      ATerm m_46 = NULL,o_46 = NULL;
      ATerm l_15;
      l_15 = t;
      {
        ATerm n_46 = NULL;
        t = SSLgetAnnotations(not_null(b_46));
        {
          n_46 = t;
          if(((m_46 != NULL) && (m_46 != n_46)))
            _fail(n_46);
          else
            m_46 = n_46;
        }
      }
      t = l_15;
      {
        ATerm h_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(m_46));
        {
          h_47 = t;
          if(((o_46 != NULL) && (o_46 != h_47)))
            _fail(h_47);
          else
            o_46 = h_47;
        }
        t = not_null(o_46);
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
  ATerm p_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_Id_0))
    {
      ATerm r_47 = NULL,t_47 = NULL;
      ATerm p_15;
      p_15 = t;
      {
        ATerm s_47 = NULL;
        t = SSLgetAnnotations(not_null(p_47));
        {
          s_47 = t;
          if(((r_47 != NULL) && (r_47 != s_47)))
            _fail(s_47);
          else
            r_47 = s_47;
        }
      }
      t = p_15;
      {
        ATerm u_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(r_47));
        {
          u_47 = t;
          if(((t_47 != NULL) && (t_47 != u_47)))
            _fail(u_47);
          else
            t_47 = u_47;
        }
        t = not_null(t_47);
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
  ATerm y_47 (ATerm t)
  {
    ATerm q_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = q_15;
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              {
                ATerm z_15 = t;
                int a_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    LocalPopChoice(a_16);
                  }
                else
                  {
                    t = z_15;
                    {
                      ATerm b_16 = t;
                      int f_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(f_16);
                        }
                      else
                        {
                          t = b_16;
                          {
                            ATerm g_16 = t;
                            int h_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(h_16);
                              }
                            else
                              {
                                t = g_16;
                                {
                                  ATerm l_16 = t;
                                  int m_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      LocalPopChoice(m_16);
                                    }
                                  else
                                    {
                                      t = l_16;
                                      {
                                        ATerm n_16 = t;
                                        int s_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            LocalPopChoice(s_16);
                                          }
                                        else
                                          {
                                            t = n_16;
                                            {
                                              ATerm t_16 = t;
                                              int u_16 = stack_ptr;
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
                                                  LocalPopChoice(u_16);
                                                }
                                              else
                                                {
                                                  t = t_16;
                                                  {
                                                    ATerm w_16 = t;
                                                    int e_17 = stack_ptr;
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
                                                        LocalPopChoice(e_17);
                                                      }
                                                    else
                                                      {
                                                        t = w_16;
                                                        {
                                                          ATerm f_17 = t;
                                                          int g_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(g_17);
                                                            }
                                                          else
                                                            {
                                                              t = f_17;
                                                              {
                                                                ATerm h_17 = t;
                                                                int i_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, y_47, y_47);
                                                                    LocalPopChoice(i_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = h_17;
                                                                    t = LChoice_2(t, y_47, y_47);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = y_47(t);
  {
    ATerm j_17;
    j_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_k_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = j_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm b_108 (ATerm))
{
  ATerm z_47 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_108(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = _one(t, z_47);
      }
    return(t);
  }
  t = z_47(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  o_48 = t;
  n_48 :
  if(match_cons(o_48, sym_SDef_3))
    {
      p_48 = ATgetArgument(o_48, 0);
      q_48 = ATgetArgument(o_48, 1);
      r_48 = ATgetArgument(o_48, 2);
      {
        ATerm b_49 = NULL,d_49 = NULL;
        ATerm c_49 = NULL;
        t = SSLgetAnnotations(not_null(o_48));
        {
          c_49 = t;
          if(((b_49 != NULL) && (b_49 != c_49)))
            _fail(c_49);
          else
            b_49 = c_49;
        }
        {
          t = not_null(p_48);
          {
            ATerm h_49 = NULL;
            t = e_85(t);
            {
              d_49 = t;
              {
                t = not_null(q_48);
                {
                  ATerm j_49 = NULL;
                  t = f_85(t);
                  {
                    h_49 = t;
                    {
                      t = not_null(r_48);
                      {
                        ATerm l_49 = NULL;
                        t = g_85(t);
                        {
                          j_49 = t;
                          {
                            ATerm m_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(d_49), not_null(h_49), not_null(j_49)), not_null(b_49));
                            {
                              m_49 = t;
                              if(((l_49 != NULL) && (l_49 != m_49)))
                                _fail(m_49);
                              else
                                l_49 = m_49;
                            }
                            t = not_null(l_49);
                          }
                        }
                      }
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
  ATerm a_50 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm c_50 = NULL;
    ATerm p_17 = t;
    if((PushChoice() == 0))
      {
        ATerm b_50 = NULL;
        b_50 = t;
        u_49 :
        if(!(match_string(b_50, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_17;
      }
    {
      c_50 = t;
      if(((a_50 != NULL) && (a_50 != c_50)))
        _fail(c_50);
      else
        a_50 = c_50;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm x_17;
    x_17 = t;
    {
      ATerm y_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
            d_50 = t;
            x_49 :
            if(match_cons(d_50, sym_Call_2))
              {
                e_50 = ATgetArgument(d_50, 0);
                g_50 = ATgetArgument(d_50, 1);
                y_49 :
                if(match_cons(e_50, sym_SVar_1))
                  {
                    f_50 = ATgetArgument(e_50, 0);
                    z_49 :
                    if(((ATermList) g_50 == ATempty))
                      {
                        if(((a_50 != NULL) && (a_50 != f_50)))
                          _fail(f_50);
                        else
                          a_50 = f_50;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          t = y_17;
        }
    }
    t = x_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  l_51 :
  if(match_cons(m_51, sym_Cong_2))
    {
      n_51 = ATgetArgument(m_51, 0);
      o_51 = ATgetArgument(m_51, 1);
      {
        ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,r_52 = NULL,t_52 = NULL,v_52 = NULL;
        ATerm z_17;
        z_17 = t;
        {
          ATerm x_51 = NULL;
          t = not_null(o_51);
          {
            ATerm a_52 = NULL;
            t = map_1(t, new_0);
            {
              x_51 = t;
              {
                if(((u_51 != NULL) && (u_51 != x_51)))
                  _fail(x_51);
                else
                  u_51 = x_51;
                {
                  t = not_null(u_51);
                  {
                    ATerm b_52 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm y_51 = NULL;
                      ATerm z_51 = NULL;
                      z_51 = t;
                      if(((y_51 != NULL) && (y_51 != z_51)))
                        _fail(z_51);
                      else
                        y_51 = z_51;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_51));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      a_52 = t;
                      {
                        if(((r_51 != NULL) && (r_51 != a_52)))
                          _fail(a_52);
                        else
                          r_51 = a_52;
                        {
                          ATerm c_52 = NULL;
                          t = new_0(t);
                          {
                            b_52 = t;
                            {
                              if(((s_51 != NULL) && (s_51 != b_52)))
                                _fail(b_52);
                              else
                                s_51 = b_52;
                              {
                                t = not_null(o_51);
                                {
                                  ATerm f_52 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    c_52 = t;
                                    {
                                      if(((v_51 != NULL) && (v_51 != c_52)))
                                        _fail(c_52);
                                      else
                                        v_51 = c_52;
                                      {
                                        t = not_null(v_51);
                                        {
                                          ATerm g_52 = NULL,q_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm d_52 = NULL;
                                            ATerm e_52 = NULL;
                                            e_52 = t;
                                            if(((d_52 != NULL) && (d_52 != e_52)))
                                              _fail(e_52);
                                            else
                                              d_52 = e_52;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_52));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            f_52 = t;
                                            {
                                              if(((t_51 != NULL) && (t_51 != f_52)))
                                                _fail(f_52);
                                              else
                                                t_51 = f_52;
                                              {
                                                ATerm h_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_51), not_null(v_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    h_52 = t;
                                                    if(((g_52 != NULL) && (g_52 != h_52)))
                                                      _fail(h_52);
                                                    else
                                                      g_52 = h_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_52), not_null(o_51));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
                                                      i_52 = t;
                                                      f_51 :
                                                      if(match_cons(i_52, sym__2))
                                                        {
                                                          j_52 = ATgetArgument(i_52, 0);
                                                          m_52 = ATgetArgument(i_52, 1);
                                                          g_51 :
                                                          if(match_cons(j_52, sym__2))
                                                            {
                                                              k_52 = ATgetArgument(j_52, 0);
                                                              l_52 = ATgetArgument(j_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_52)))));
                                                            }
                                                          else
                                                            {
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
                                                      q_52 = t;
                                                      if(((w_51 != NULL) && (w_51 != q_52)))
                                                        _fail(q_52);
                                                      else
                                                        w_51 = q_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_17;
        {
          ATerm d_18;
          d_18 = t;
          {
            ATerm s_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_51), not_null(v_51));
            {
              t = conc_0(t);
              {
                s_52 = t;
                if(((r_52 != NULL) && (r_52 != s_52)))
                  _fail(s_52);
                else
                  r_52 = s_52;
              }
            }
          }
          t = d_18;
          {
            ATerm j_18;
            j_18 = t;
            {
              ATerm u_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_51), not_null(r_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_51))));
              {
                t = Mapp2_0(t);
                {
                  u_52 = t;
                  if(((t_52 != NULL) && (t_52 != u_52)))
                    _fail(u_52);
                  else
                    t_52 = u_52;
                }
              }
            }
            t = j_18;
            {
              ATerm w_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_51), not_null(t_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_51))));
              {
                t = Bapp2_0(t);
                {
                  w_52 = t;
                  if(((v_52 != NULL) && (v_52 != w_52)))
                    _fail(w_52);
                  else
                    v_52 = w_52;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(r_52)), not_null(s_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_51)), not_null(v_52))));
            }
          }
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
  ATerm m_54 = NULL,n_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym_Build_1))
    {
      n_54 = ATgetArgument(m_54, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
            ATerm e_55 = NULL;
            ATerm k_55 = NULL;
            t = new_0(t);
            {
              e_55 = t;
              {
                if(((b_55 != NULL) && (b_55 != e_55)))
                  _fail(e_55);
                else
                  b_55 = e_55;
                {
                  t = not_null(n_54);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
                      h_55 = t;
                      b_54 :
                      if(match_cons(h_55, sym_Anno_2))
                        {
                          i_55 = ATgetArgument(h_55, 0);
                          j_55 = ATgetArgument(h_55, 1);
                          {
                            if(((p_54 != NULL) && (p_54 != i_55)))
                              _fail(i_55);
                            else
                              p_54 = i_55;
                            {
                              if(((a_55 != NULL) && (a_55 != j_55)))
                                _fail(j_55);
                              else
                                a_55 = j_55;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_55));
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
                      k_55 = t;
                      if(((c_55 != NULL) && (c_55 != k_55)))
                        _fail(k_55);
                      else
                        c_55 = k_55;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_55)), not_null(p_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_55))));
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm s_18 = t;
              int t_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
                  ATerm p_55 = NULL;
                  ATerm s_55 = NULL;
                  t = new_0(t);
                  {
                    p_55 = t;
                    {
                      if(((n_55 != NULL) && (n_55 != p_55)))
                        _fail(p_55);
                      else
                        n_55 = p_55;
                      {
                        t = not_null(n_54);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm q_55 = NULL,r_55 = NULL;
                            q_55 = t;
                            f_54 :
                            if(match_cons(q_55, sym_RootApp_1))
                              {
                                r_55 = ATgetArgument(q_55, 0);
                                {
                                  if(((m_55 != NULL) && (m_55 != r_55)))
                                    _fail(r_55);
                                  else
                                    m_55 = r_55;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_55));
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
                            s_55 = t;
                            if(((o_55 != NULL) && (o_55 != s_55)))
                              _fail(s_55);
                            else
                              o_55 = s_55;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_55), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_55))));
                  LocalPopChoice(t_18);
                }
              else
                {
                  t = s_18;
                  {
                    ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
                    ATerm y_55 = NULL;
                    ATerm c_56 = NULL;
                    t = new_0(t);
                    {
                      y_55 = t;
                      {
                        if(((w_55 != NULL) && (w_55 != y_55)))
                          _fail(y_55);
                        else
                          w_55 = y_55;
                        {
                          t = not_null(n_54);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
                              z_55 = t;
                              j_54 :
                              if(match_cons(z_55, sym_App_2))
                                {
                                  a_56 = ATgetArgument(z_55, 0);
                                  b_56 = ATgetArgument(z_55, 1);
                                  {
                                    if(((u_55 != NULL) && (u_55 != a_56)))
                                      _fail(a_56);
                                    else
                                      u_55 = a_56;
                                    {
                                      if(((v_55 != NULL) && (v_55 != b_56)))
                                        _fail(b_56);
                                      else
                                        v_55 = b_56;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_55));
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
                              c_56 = t;
                              if(((x_55 != NULL) && (x_55 != c_56)))
                                _fail(c_56);
                              else
                                x_55 = c_56;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_55), not_null(v_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_55)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_55))));
                  }
                }
            }
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
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym__2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      {
        t = not_null(u_56);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(v_56);
            return(t);
          }
          t = at_end_1(t, i_3);
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
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  b_57 = t;
  a_57 :
  if(match_cons(b_57, sym__2))
    {
      c_57 = ATgetArgument(b_57, 0);
      d_57 = ATgetArgument(b_57, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_57)), not_null(c_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
  l_57 = t;
  i_57 :
  if(match_cons(l_57, sym__2))
    {
      m_57 = ATgetArgument(l_57, 0);
      p_57 = ATgetArgument(l_57, 1);
      j_57 :
      if(((ATgetType(m_57) == AT_LIST) && ((ATermList) m_57 != ATempty)))
        {
          n_57 = ATgetFirst((ATermList) m_57);
          o_57 = (ATerm) ATgetNext((ATermList) m_57);
          k_57 :
          if(((ATgetType(p_57) == AT_LIST) && ((ATermList) p_57 != ATempty)))
            {
              q_57 = ATgetFirst((ATermList) p_57);
              r_57 = (ATerm) ATgetNext((ATermList) p_57);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_57), not_null(q_57)), (ATerm) ATmakeAppl(sym__2, not_null(o_57), not_null(r_57)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  d_58 = t;
  a_58 :
  if(match_cons(d_58, sym__2))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      b_58 :
      if(((ATermList) e_58 == ATempty))
        {
          c_58 :
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
ATerm genzip_4 (ATerm t, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm))
{
  ATerm h_58 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_103(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          t = s_103(t);
          {
            t = _2(t, u_103, h_58);
            t = t_103(t);
          }
        }
      }
    return(t);
  }
  t = h_58(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_103 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_103);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
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
                          o_59 = ATgetFirst((ATermList) n_59);
                          p_59 = (ATerm) ATgetNext((ATermList) n_59);
                          f_59 :
                          if(((ATermList) p_59 == ATempty))
                            {
                              {
                                ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,x_60 = NULL,z_60 = NULL,b_61 = NULL;
                                ATerm d_19;
                                d_19 = t;
                                {
                                  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(o_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      a_60 = t;
                                      v_58 :
                                      if(((ATgetType(a_60) == AT_LIST) && ((ATermList) a_60 != ATempty)))
                                        {
                                          b_60 = ATgetFirst((ATermList) a_60);
                                          c_60 = (ATerm) ATgetNext((ATermList) a_60);
                                          {
                                            ATerm f_60 = NULL;
                                            if(((t_59 != NULL) && (t_59 != b_60)))
                                              _fail(b_60);
                                            else
                                              t_59 = b_60;
                                            {
                                              if(((x_59 != NULL) && (x_59 != c_60)))
                                                _fail(c_60);
                                              else
                                                x_59 = c_60;
                                              {
                                                ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL;
                                                ATerm j_3 (ATerm t)
                                                {
                                                  ATerm d_60 = NULL;
                                                  ATerm e_60 = NULL;
                                                  e_60 = t;
                                                  if(((d_60 != NULL) && (d_60 != e_60)))
                                                    _fail(e_60);
                                                  else
                                                    d_60 = e_60;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_60));
                                                  return(t);
                                                }
                                                t = map_1(t, j_3);
                                                {
                                                  f_60 = t;
                                                  {
                                                    if(((u_59 != NULL) && (u_59 != f_60)))
                                                      _fail(f_60);
                                                    else
                                                      u_59 = f_60;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(o_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          g_60 = t;
                                                          u_58 :
                                                          if(((ATgetType(g_60) == AT_LIST) && ((ATermList) g_60 != ATempty)))
                                                            {
                                                              h_60 = ATgetFirst((ATermList) g_60);
                                                              i_60 = (ATerm) ATgetNext((ATermList) g_60);
                                                              {
                                                                ATerm l_60 = NULL;
                                                                if(((v_59 != NULL) && (v_59 != h_60)))
                                                                  _fail(h_60);
                                                                else
                                                                  v_59 = h_60;
                                                                {
                                                                  if(((y_59 != NULL) && (y_59 != i_60)))
                                                                    _fail(i_60);
                                                                  else
                                                                    y_59 = i_60;
                                                                  {
                                                                    ATerm m_60 = NULL,w_60 = NULL;
                                                                    ATerm k_3 (ATerm t)
                                                                    {
                                                                      ATerm j_60 = NULL;
                                                                      ATerm k_60 = NULL;
                                                                      k_60 = t;
                                                                      if(((j_60 != NULL) && (j_60 != k_60)))
                                                                        _fail(k_60);
                                                                      else
                                                                        j_60 = k_60;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_60));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, k_3);
                                                                    {
                                                                      l_60 = t;
                                                                      {
                                                                        if(((w_59 != NULL) && (w_59 != l_60)))
                                                                          _fail(l_60);
                                                                        else
                                                                          w_59 = l_60;
                                                                        {
                                                                          ATerm n_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_59), not_null(y_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              n_60 = t;
                                                                              if(((m_60 != NULL) && (m_60 != n_60)))
                                                                                _fail(n_60);
                                                                              else
                                                                                m_60 = n_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_60), (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(o_59)));
                                                                            {
                                                                              ATerm l_3 (ATerm t)
                                                                              {
                                                                                ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
                                                                                o_60 = t;
                                                                                r_58 :
                                                                                if(match_cons(o_60, sym__2))
                                                                                  {
                                                                                    p_60 = ATgetArgument(o_60, 0);
                                                                                    s_60 = ATgetArgument(o_60, 1);
                                                                                    s_58 :
                                                                                    if(match_cons(p_60, sym__2))
                                                                                      {
                                                                                        q_60 = ATgetArgument(p_60, 0);
                                                                                        r_60 = ATgetArgument(p_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_60)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                w_60 = t;
                                                                                if(((z_59 != NULL) && (z_59 != w_60)))
                                                                                  _fail(w_60);
                                                                                else
                                                                                  z_59 = w_60;
                                                                              }
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
                                t = d_19;
                                {
                                  ATerm f_19;
                                  f_19 = t;
                                  {
                                    ATerm y_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_59), not_null(y_59));
                                    {
                                      t = conc_0(t);
                                      {
                                        y_60 = t;
                                        if(((x_60 != NULL) && (x_60 != y_60)))
                                          _fail(y_60);
                                        else
                                          x_60 = y_60;
                                      }
                                    }
                                  }
                                  t = f_19;
                                  {
                                    ATerm h_19;
                                    h_19 = t;
                                    {
                                      ATerm a_61 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_59), not_null(u_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          a_61 = t;
                                          if(((z_60 != NULL) && (z_60 != a_61)))
                                            _fail(a_61);
                                          else
                                            z_60 = a_61;
                                        }
                                      }
                                    }
                                    t = h_19;
                                    {
                                      ATerm c_61 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_59), not_null(w_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          c_61 = t;
                                          if(((b_61 != NULL) && (b_61 != c_61)))
                                            _fail(c_61);
                                          else
                                            b_61 = c_61;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(x_60)), not_null(v_59)), not_null(t_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(z_59)), not_null(b_61))));
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
ATerm Prim_2 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm))
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
  a_62 = t;
  z_61 :
  if(match_cons(a_62, sym_Prim_2))
    {
      b_62 = ATgetArgument(a_62, 0);
      c_62 = ATgetArgument(a_62, 1);
      {
        ATerm i_62 = NULL,k_62 = NULL;
        ATerm j_62 = NULL;
        t = SSLgetAnnotations(not_null(a_62));
        {
          j_62 = t;
          if(((i_62 != NULL) && (i_62 != j_62)))
            _fail(j_62);
          else
            i_62 = j_62;
        }
        {
          t = not_null(b_62);
          {
            ATerm m_62 = NULL;
            t = h_86(t);
            {
              k_62 = t;
              {
                t = not_null(c_62);
                {
                  ATerm o_62 = NULL;
                  t = i_86(t);
                  {
                    m_62 = t;
                    {
                      ATerm p_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(k_62), not_null(m_62)), not_null(i_62));
                      {
                        p_62 = t;
                        if(((o_62 != NULL) && (o_62 != p_62)))
                          _fail(p_62);
                        else
                          o_62 = p_62;
                      }
                      t = not_null(o_62);
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
ATerm Explode_2 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm))
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym_Explode_2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      {
        ATerm s_63 = NULL,y_63 = NULL;
        ATerm x_63 = NULL;
        t = SSLgetAnnotations(not_null(m_63));
        {
          x_63 = t;
          if(((s_63 != NULL) && (s_63 != x_63)))
            _fail(x_63);
          else
            s_63 = x_63;
        }
        {
          t = not_null(n_63);
          {
            ATerm a_64 = NULL;
            t = v_82(t);
            {
              y_63 = t;
              {
                t = not_null(o_63);
                {
                  ATerm c_64 = NULL;
                  t = w_82(t);
                  {
                    a_64 = t;
                    {
                      ATerm d_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(y_63), not_null(a_64)), not_null(s_63));
                      {
                        d_64 = t;
                        if(((c_64 != NULL) && (c_64 != d_64)))
                          _fail(d_64);
                        else
                          c_64 = d_64;
                      }
                      t = not_null(c_64);
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
ATerm Op_2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  ATerm p_64 = NULL,q_64 = NULL,v_64 = NULL;
  p_64 = t;
  o_64 :
  if(match_cons(p_64, sym_Op_2))
    {
      q_64 = ATgetArgument(p_64, 0);
      v_64 = ATgetArgument(p_64, 1);
      {
        ATerm z_64 = NULL,b_65 = NULL;
        ATerm a_65 = NULL;
        t = SSLgetAnnotations(not_null(p_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
        {
          t = not_null(q_64);
          {
            ATerm d_65 = NULL;
            t = h_84(t);
            {
              b_65 = t;
              {
                t = not_null(v_64);
                {
                  ATerm f_65 = NULL;
                  t = i_84(t);
                  {
                    d_65 = t;
                    {
                      ATerm i_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_65), not_null(d_65)), not_null(z_64));
                      {
                        i_65 = t;
                        if(((f_65 != NULL) && (f_65 != i_65)))
                          _fail(i_65);
                        else
                          f_65 = i_65;
                      }
                      t = not_null(f_65);
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
ATerm pat_td_1 (ATerm t, ATerm l_87 (ATerm))
{
  ATerm i_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_87(t);
      LocalPopChoice(n_19);
    }
  else
    {
      t = i_19;
      {
        ATerm o_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              ATerm n_3 (ATerm t)
              {
                t = pat_td_1(t, l_87);
                return(t);
              }
              t = fetch_1(t, n_3);
              return(t);
            }
            t = Op_2(t, _id, m_3);
            LocalPopChoice(q_19);
          }
        else
          {
            t = o_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_3 (ATerm t)
                  {
                    t = pat_td_1(t, l_87);
                    return(t);
                  }
                  t = Explode_2(t, _id, o_3);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  {
                    ATerm u_19 = t;
                    int y_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_3 (ATerm t)
                        {
                          t = pat_td_1(t, l_87);
                          return(t);
                        }
                        t = Explode_2(t, p_3, _id);
                        LocalPopChoice(y_19);
                      }
                    else
                      {
                        t = u_19;
                        {
                          ATerm q_3 (ATerm t)
                          {
                            ATerm r_3 (ATerm t)
                            {
                              t = pat_td_1(t, l_87);
                              return(t);
                            }
                            t = fetch_1(t, r_3);
                            return(t);
                          }
                          t = Prim_2(t, _id, q_3);
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
  ATerm k_66 = NULL,l_66 = NULL;
  k_66 = t;
  j_66 :
  if(match_cons(k_66, sym_Match_1))
    {
      l_66 = ATgetArgument(k_66, 0);
      {
        ATerm z_19 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
            ATerm r_66 = NULL;
            ATerm v_66 = NULL;
            t = new_0(t);
            {
              r_66 = t;
              {
                if(((p_66 != NULL) && (p_66 != r_66)))
                  _fail(r_66);
                else
                  p_66 = r_66;
                {
                  t = not_null(l_66);
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
                      s_66 = t;
                      z_65 :
                      if(match_cons(s_66, sym_Anno_2))
                        {
                          t_66 = ATgetArgument(s_66, 0);
                          u_66 = ATgetArgument(s_66, 1);
                          {
                            if(((n_66 != NULL) && (n_66 != t_66)))
                              _fail(t_66);
                            else
                              n_66 = t_66;
                            {
                              if(((o_66 != NULL) && (o_66 != u_66)))
                                _fail(u_66);
                              else
                                o_66 = u_66;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_66)), not_null(n_66));
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
                      v_66 = t;
                      if(((q_66 != NULL) && (q_66 != v_66)))
                        _fail(v_66);
                      else
                        q_66 = v_66;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_66)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_66)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_66))))));
            LocalPopChoice(b_20);
          }
        else
          {
            t = z_19;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
                  ATerm e_67 = NULL;
                  ATerm h_67 = NULL;
                  t = new_0(t);
                  {
                    e_67 = t;
                    {
                      if(((c_67 != NULL) && (c_67 != e_67)))
                        _fail(e_67);
                      else
                        c_67 = e_67;
                      {
                        t = not_null(l_66);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm f_67 = NULL,g_67 = NULL;
                            f_67 = t;
                            d_66 :
                            if(match_cons(f_67, sym_RootApp_1))
                              {
                                g_67 = ATgetArgument(f_67, 0);
                                {
                                  if(((b_67 != NULL) && (b_67 != g_67)))
                                    _fail(g_67);
                                  else
                                    b_67 = g_67;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_67));
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
                            h_67 = t;
                            if(((d_67 != NULL) && (d_67 != h_67)))
                              _fail(h_67);
                            else
                              d_67 = h_67;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_67))), not_null(b_67))));
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  {
                    ATerm j_67 = NULL,k_67 = NULL,o_67 = NULL,p_67 = NULL;
                    ATerm q_67 = NULL;
                    ATerm y_67 = NULL;
                    t = new_0(t);
                    {
                      q_67 = t;
                      {
                        if(((o_67 != NULL) && (o_67 != q_67)))
                          _fail(q_67);
                        else
                          o_67 = q_67;
                        {
                          t = not_null(l_66);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              ATerm r_67 = NULL,s_67 = NULL,x_67 = NULL;
                              r_67 = t;
                              h_66 :
                              if(match_cons(r_67, sym_App_2))
                                {
                                  s_67 = ATgetArgument(r_67, 0);
                                  x_67 = ATgetArgument(r_67, 1);
                                  {
                                    if(((k_67 != NULL) && (k_67 != s_67)))
                                      _fail(s_67);
                                    else
                                      k_67 = s_67;
                                    {
                                      if(((j_67 != NULL) && (j_67 != x_67)))
                                        _fail(x_67);
                                      else
                                        j_67 = x_67;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_67));
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
                              y_67 = t;
                              if(((p_67 != NULL) && (p_67 != y_67)))
                                _fail(y_67);
                              else
                                p_67 = y_67;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_67))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_67)), not_null(k_67)))));
                  }
                }
            }
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
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
  x_68 = t;
  w_68 :
  if(match_cons(x_68, sym_Cong_2))
    {
      y_68 = ATgetArgument(x_68, 0);
      z_68 = ATgetArgument(x_68, 1);
      {
        ATerm c_69 = NULL;
        ATerm g_69 = NULL;
        t = not_null(z_68);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm d_69 = NULL,e_69 = NULL;
            e_69 = t;
            u_68 :
            if(match_cons(e_69, sym_Match_1))
              {
                d_69 = ATgetArgument(e_69, 0);
                t = not_null(d_69);
              }
            else
              {
                if(match_cons(e_69, sym_Id_0))
                  {
                    t = term_j_20;
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
            g_69 = t;
            if(((c_69 != NULL) && (c_69 != g_69)))
              _fail(g_69);
            else
              c_69 = g_69;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(y_68), not_null(c_69)));
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
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  m_69 :
  if(match_cons(o_69, sym_Scope_2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
      n_69 :
      if(((ATermList) p_69 == ATempty))
        {
          t = not_null(q_69);
        }
      else
        {
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
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  z_69 :
  if(match_cons(m_70, sym_Where_1))
    {
      n_70 = ATgetArgument(m_70, 0);
      a_70 :
      if(match_cons(n_70, sym_Seq_2))
        {
          l_70 = ATgetArgument(n_70, 0);
          h_70 = ATgetArgument(n_70, 1);
          b_70 :
          if(match_cons(l_70, sym_Where_1))
            {
              g_70 = ATgetArgument(l_70, 0);
              c_70 :
              if(match_cons(h_70, sym_Seq_2))
                {
                  i_70 = ATgetArgument(h_70, 0);
                  k_70 = ATgetArgument(h_70, 1);
                  d_70 :
                  if(match_cons(i_70, sym_Build_1))
                    {
                      j_70 = ATgetArgument(i_70, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_70)), not_null(k_70))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(n_70, sym_Where_1))
            {
              l_70 = ATgetArgument(n_70, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(l_70));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(m_70, sym_Test_1))
        {
          n_70 = ATgetArgument(m_70, 0);
          e_70 :
          if(match_cons(n_70, sym_Test_1))
            {
              l_70 = ATgetArgument(n_70, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_70));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_70, sym_Not_1))
            {
              n_70 = ATgetArgument(m_70, 0);
              f_70 :
              if(match_cons(n_70, sym_Not_1))
                {
                  l_70 = ATgetArgument(n_70, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_70));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(m_70, sym_LChoice_2))
                {
                  n_70 = ATgetArgument(m_70, 0);
                  o_70 = ATgetArgument(m_70, 1);
                  {
                    if(((n_70 != NULL) && (n_70 != o_70)))
                      _fail(o_70);
                    else
                      n_70 = o_70;
                    t = not_null(n_70);
                  }
                }
              else
                {
                  if(match_cons(m_70, sym_Choice_2))
                    {
                      n_70 = ATgetArgument(m_70, 0);
                      o_70 = ATgetArgument(m_70, 1);
                      {
                        if(((n_70 != NULL) && (n_70 != o_70)))
                          _fail(o_70);
                        else
                          n_70 = o_70;
                        t = not_null(n_70);
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
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  k_71 = t;
  g_71 :
  if(match_cons(k_71, sym_LChoice_2))
    {
      l_71 = ATgetArgument(k_71, 0);
      o_71 = ATgetArgument(k_71, 1);
      h_71 :
      if(match_cons(l_71, sym_LChoice_2))
        {
          m_71 = ATgetArgument(l_71, 0);
          n_71 = ATgetArgument(l_71, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_71), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_71), not_null(o_71)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(k_71, sym_Seq_2))
        {
          l_71 = ATgetArgument(k_71, 0);
          o_71 = ATgetArgument(k_71, 1);
          i_71 :
          if(match_cons(l_71, sym_Seq_2))
            {
              m_71 = ATgetArgument(l_71, 0);
              n_71 = ATgetArgument(l_71, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_71), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_71), not_null(o_71)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(k_71, sym_Choice_2))
            {
              l_71 = ATgetArgument(k_71, 0);
              o_71 = ATgetArgument(k_71, 1);
              j_71 :
              if(match_cons(l_71, sym_Choice_2))
                {
                  m_71 = ATgetArgument(l_71, 0);
                  n_71 = ATgetArgument(l_71, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_71), (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_71), not_null(o_71)));
                }
              else
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
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  a_75 = t;
  s_74 :
  if(match_cons(a_75, sym_InfixApp_3))
    {
      b_75 = ATgetArgument(a_75, 0);
      x_74 = ATgetArgument(a_75, 1);
      w_74 = ATgetArgument(a_75, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_74), (ATerm) ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_74)), not_null(b_75))));
    }
  else
    {
      if(match_cons(a_75, sym_BAM_3))
        {
          b_75 = ATgetArgument(a_75, 0);
          x_74 = ATgetArgument(a_75, 1);
          w_74 = ATgetArgument(a_75, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(w_74))), not_null(b_75)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_74))));
        }
      else
        {
          if(match_cons(a_75, sym_AM_2))
            {
              b_75 = ATgetArgument(a_75, 0);
              x_74 = ATgetArgument(a_75, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_75), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_74)));
            }
          else
            {
              if(match_cons(a_75, sym_MA_2))
                {
                  b_75 = ATgetArgument(a_75, 0);
                  x_74 = ATgetArgument(a_75, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_75)), not_null(x_74));
                }
              else
                {
                  if(match_cons(a_75, sym_BA_2))
                    {
                      b_75 = ATgetArgument(a_75, 0);
                      x_74 = ATgetArgument(a_75, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_74)), not_null(b_75));
                    }
                  else
                    {
                      if(match_cons(a_75, sym_Lets_2))
                        {
                          b_75 = ATgetArgument(a_75, 0);
                          x_74 = ATgetArgument(a_75, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(b_75), not_null(x_74));
                        }
                      else
                        {
                          if(match_cons(a_75, sym_LChoices_1))
                            {
                              b_75 = ATgetArgument(a_75, 0);
                              t_74 :
                              if(((ATgetType(b_75) == AT_LIST) && ((ATermList) b_75 != ATempty)))
                                {
                                  y_74 = ATgetFirst((ATermList) b_75);
                                  z_74 = (ATerm) ATgetNext((ATermList) b_75);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_74), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(z_74)));
                                }
                              else
                                {
                                  if(((ATermList) b_75 == ATempty))
                                    {
                                      t = term_l_20;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(a_75, sym_Choices_1))
                                {
                                  b_75 = ATgetArgument(a_75, 0);
                                  u_74 :
                                  if(((ATgetType(b_75) == AT_LIST) && ((ATermList) b_75 != ATempty)))
                                    {
                                      y_74 = ATgetFirst((ATermList) b_75);
                                      z_74 = (ATerm) ATgetNext((ATermList) b_75);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_74), (ATerm) ATmakeAppl(sym_Choices_1, not_null(z_74)));
                                    }
                                  else
                                    {
                                      if(((ATermList) b_75 == ATempty))
                                        {
                                          t = term_l_20;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(a_75, sym_Seqs_1))
                                    {
                                      b_75 = ATgetArgument(a_75, 0);
                                      v_74 :
                                      if(((ATgetType(b_75) == AT_LIST) && ((ATermList) b_75 != ATempty)))
                                        {
                                          y_74 = ATgetFirst((ATermList) b_75);
                                          z_74 = (ATerm) ATgetNext((ATermList) b_75);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_74), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_74)));
                                        }
                                      else
                                        {
                                          if(((ATermList) b_75 == ATempty))
                                            {
                                              t = term_u_20;
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
  ATerm l_76 = NULL,m_76 = NULL;
  l_76 = t;
  j_76 :
  if(match_cons(l_76, sym_Where_1))
    {
      m_76 = ATgetArgument(l_76, 0);
      k_76 :
      if(match_cons(m_76, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm r_76 = NULL,s_76 = NULL,v_76 = NULL;
  r_76 = t;
  p_76 :
  if(match_cons(r_76, sym_LChoice_2))
    {
      s_76 = ATgetArgument(r_76, 0);
      v_76 = ATgetArgument(r_76, 1);
      q_76 :
      if(match_cons(v_76, sym_Fail_0))
        {
          t = not_null(s_76);
        }
      else
        {
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
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  z_76 :
  if(match_cons(b_77, sym_LChoice_2))
    {
      c_77 = ATgetArgument(b_77, 0);
      d_77 = ATgetArgument(b_77, 1);
      a_77 :
      if(match_cons(c_77, sym_Fail_0))
        {
          t = not_null(d_77);
        }
      else
        {
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
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
  j_77 = t;
  h_77 :
  if(match_cons(j_77, sym_Choice_2))
    {
      k_77 = ATgetArgument(j_77, 0);
      l_77 = ATgetArgument(j_77, 1);
      i_77 :
      if(match_cons(l_77, sym_Fail_0))
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
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL;
  r_77 = t;
  p_77 :
  if(match_cons(r_77, sym_Choice_2))
    {
      s_77 = ATgetArgument(r_77, 0);
      t_77 = ATgetArgument(r_77, 1);
      q_77 :
      if(match_cons(s_77, sym_Fail_0))
        {
          t = not_null(t_77);
        }
      else
        {
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
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  y_77 :
  if(match_cons(z_77, sym_Cong_2))
    {
      a_78 = ATgetArgument(z_77, 0);
      b_78 = ATgetArgument(z_77, 1);
      {
        t = not_null(b_78);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm e_78 = NULL;
            e_78 = t;
            x_77 :
            if(!(match_cons(e_78, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        t = term_l_20;
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
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
  j_78 = t;
  h_78 :
  if(match_cons(j_78, sym_Path_2))
    {
      k_78 = ATgetArgument(j_78, 0);
      l_78 = ATgetArgument(j_78, 1);
      i_78 :
      if(match_cons(l_78, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm r_78 = NULL,s_78 = NULL;
  r_78 = t;
  p_78 :
  if(match_cons(r_78, sym_One_1))
    {
      s_78 = ATgetArgument(r_78, 0);
      q_78 :
      if(match_cons(s_78, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm x_78 = NULL,y_78 = NULL;
  x_78 = t;
  v_78 :
  if(match_cons(x_78, sym_Some_1))
    {
      y_78 = ATgetArgument(x_78, 0);
      w_78 :
      if(match_cons(y_78, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  d_79 = t;
  b_79 :
  if(match_cons(d_79, sym_Rec_2))
    {
      e_79 = ATgetArgument(d_79, 0);
      f_79 = ATgetArgument(d_79, 1);
      c_79 :
      if(match_cons(f_79, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
  l_79 = t;
  j_79 :
  if(match_cons(l_79, sym_Scope_2))
    {
      m_79 = ATgetArgument(l_79, 0);
      n_79 = ATgetArgument(l_79, 1);
      k_79 :
      if(match_cons(n_79, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t_79 = t;
  r_79 :
  if(match_cons(t_79, sym_Seq_2))
    {
      u_79 = ATgetArgument(t_79, 0);
      v_79 = ATgetArgument(t_79, 1);
      s_79 :
      if(match_cons(u_79, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm b_80 = NULL,c_80 = NULL;
  b_80 = t;
  z_79 :
  if(match_cons(b_80, sym_Not_1))
    {
      c_80 = ATgetArgument(b_80, 0);
      a_80 :
      if(match_cons(c_80, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm h_80 = NULL,i_80 = NULL;
  h_80 = t;
  f_80 :
  if(match_cons(h_80, sym_Test_1))
    {
      i_80 = ATgetArgument(h_80, 0);
      g_80 :
      if(match_cons(i_80, sym_Fail_0))
        {
          t = term_l_20;
        }
      else
        {
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
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            {
              ATerm z_20 = t;
              int a_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(a_21);
                }
              else
                {
                  t = z_20;
                  {
                    ATerm b_21 = t;
                    int c_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(c_21);
                      }
                    else
                      {
                        t = b_21;
                        {
                          ATerm d_21 = t;
                          int e_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(e_21);
                            }
                          else
                            {
                              t = d_21;
                              {
                                ATerm f_21 = t;
                                int g_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(g_21);
                                  }
                                else
                                  {
                                    t = f_21;
                                    {
                                      ATerm h_21 = t;
                                      int i_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(i_21);
                                        }
                                      else
                                        {
                                          t = h_21;
                                          {
                                            ATerm m_21 = t;
                                            int n_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(n_21);
                                              }
                                            else
                                              {
                                                t = m_21;
                                                {
                                                  ATerm r_21 = t;
                                                  int u_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(u_21);
                                                    }
                                                  else
                                                    {
                                                      t = r_21;
                                                      {
                                                        ATerm v_21 = t;
                                                        int z_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(z_21);
                                                          }
                                                        else
                                                          {
                                                            t = v_21;
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
                                                                    ATerm e_22 = t;
                                                                    int f_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
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
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(h_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_22;
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
  ATerm n_80 = NULL,o_80 = NULL;
  n_80 = t;
  l_80 :
  if(match_cons(n_80, sym_Match_1))
    {
      o_80 = ATgetArgument(n_80, 0);
      m_80 :
      if(match_cons(o_80, sym_Wld_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm t_80 = NULL,u_80 = NULL;
  t_80 = t;
  r_80 :
  if(match_cons(t_80, sym_Where_1))
    {
      u_80 = ATgetArgument(t_80, 0);
      s_80 :
      if(match_cons(u_80, sym_Id_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm z_80 = NULL,a_81 = NULL;
  z_80 = t;
  x_80 :
  if(match_cons(z_80, sym_All_1))
    {
      a_81 = ATgetArgument(z_80, 0);
      y_80 :
      if(match_cons(a_81, sym_Id_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
  f_81 = t;
  d_81 :
  if(match_cons(f_81, sym_Rec_2))
    {
      g_81 = ATgetArgument(f_81, 0);
      h_81 = ATgetArgument(f_81, 1);
      e_81 :
      if(match_cons(h_81, sym_Id_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
  n_81 = t;
  l_81 :
  if(match_cons(n_81, sym_Scope_2))
    {
      o_81 = ATgetArgument(n_81, 0);
      p_81 = ATgetArgument(n_81, 1);
      m_81 :
      if(match_cons(p_81, sym_Id_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
  v_81 = t;
  t_81 :
  if(match_cons(v_81, sym_LChoice_2))
    {
      w_81 = ATgetArgument(v_81, 0);
      x_81 = ATgetArgument(v_81, 1);
      u_81 :
      if(match_cons(w_81, sym_Id_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
  d_82 = t;
  b_82 :
  if(match_cons(d_82, sym_Seq_2))
    {
      e_82 = ATgetArgument(d_82, 0);
      f_82 = ATgetArgument(d_82, 1);
      c_82 :
      if(match_cons(f_82, sym_Id_0))
        {
          t = not_null(e_82);
        }
      else
        {
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
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
  l_82 = t;
  j_82 :
  if(match_cons(l_82, sym_Seq_2))
    {
      m_82 = ATgetArgument(l_82, 0);
      n_82 = ATgetArgument(l_82, 1);
      k_82 :
      if(match_cons(m_82, sym_Id_0))
        {
          t = not_null(n_82);
        }
      else
        {
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
  ATerm t_82 = NULL,u_82 = NULL;
  t_82 = t;
  r_82 :
  if(match_cons(t_82, sym_Not_1))
    {
      u_82 = ATgetArgument(t_82, 0);
      s_82 :
      if(match_cons(u_82, sym_Id_0))
        {
          t = term_l_20;
        }
      else
        {
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
  ATerm b_83 = NULL,c_83 = NULL;
  b_83 = t;
  z_82 :
  if(match_cons(b_83, sym_Test_1))
    {
      c_83 = ATgetArgument(b_83, 0);
      a_83 :
      if(match_cons(c_83, sym_Id_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm m_22 = t;
              int s_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(s_22);
                }
              else
                {
                  t = m_22;
                  {
                    ATerm t_22 = t;
                    int u_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(u_22);
                      }
                    else
                      {
                        t = t_22;
                        {
                          ATerm w_22 = t;
                          int y_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(y_22);
                            }
                          else
                            {
                              t = w_22;
                              {
                                ATerm z_22 = t;
                                int a_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
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
                                          t = I9_0(t);
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
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      LocalPopChoice(g_23);
                                                    }
                                                  else
                                                    {
                                                      t = f_23;
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
  ATerm h_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = h_23;
      {
        ATerm n_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(y_23);
          }
        else
          {
            t = n_23;
            {
              ATerm z_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  {
                    ATerm b_24 = t;
                    int c_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(c_24);
                      }
                    else
                      {
                        t = b_24;
                        {
                          ATerm d_24 = t;
                          int e_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(e_24);
                            }
                          else
                            {
                              t = d_24;
                              {
                                ATerm m_24 = t;
                                int n_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(n_24);
                                  }
                                else
                                  {
                                    t = m_24;
                                    {
                                      ATerm o_24 = t;
                                      int p_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(p_24);
                                        }
                                      else
                                        {
                                          t = o_24;
                                          {
                                            ATerm a_25 = t;
                                            int c_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(c_25);
                                              }
                                            else
                                              {
                                                t = a_25;
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
ATerm repeat_2 (ATerm t, ATerm y_92 (ATerm), ATerm z_92 (ATerm))
{
  ATerm e_83 (ATerm t)
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_92(t);
        t = e_83(t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = z_92(t);
      }
    return(t);
  }
  t = e_83(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_93 (ATerm))
{
  t = repeat_2(t, b_93, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm f_83 (ATerm t)
  {
    t = n_106(t);
    {
      t = _all(t, f_83);
      t = n_106(t);
    }
    return(t);
  }
  t = f_83(t);
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
ATerm Strategies_1 (ATerm t, ATerm a_84 (ATerm))
{
  ATerm l_83 = NULL,m_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym_Strategies_1))
    {
      m_83 = ATgetArgument(l_83, 0);
      {
        ATerm p_83 = NULL,s_83 = NULL;
        ATerm r_83 = NULL;
        t = SSLgetAnnotations(not_null(l_83));
        {
          r_83 = t;
          if(((p_83 != NULL) && (p_83 != r_83)))
            _fail(r_83);
          else
            p_83 = r_83;
        }
        {
          t = not_null(m_83);
          {
            ATerm u_83 = NULL;
            t = a_84(t);
            {
              s_83 = t;
              {
                ATerm v_83 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(s_83)), not_null(p_83));
                {
                  v_83 = t;
                  if(((u_83 != NULL) && (u_83 != v_83)))
                    _fail(v_83);
                  else
                    u_83 = v_83;
                }
                t = not_null(u_83);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm j_84 = NULL,k_84 = NULL;
  j_84 = t;
  g_84 :
  if(match_cons(j_84, sym_Specification_1))
    {
      k_84 = ATgetArgument(j_84, 0);
      {
        ATerm t_84 = NULL,v_84 = NULL;
        ATerm u_84 = NULL;
        t = SSLgetAnnotations(not_null(j_84));
        {
          u_84 = t;
          if(((t_84 != NULL) && (t_84 != u_84)))
            _fail(u_84);
          else
            t_84 = u_84;
        }
        {
          t = not_null(k_84);
          {
            ATerm x_84 = NULL;
            t = c_84(t);
            {
              v_84 = t;
              {
                ATerm y_84 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(v_84)), not_null(t_84));
                {
                  y_84 = t;
                  if(((x_84 != NULL) && (x_84 != y_84)))
                    _fail(y_84);
                  else
                    x_84 = y_84;
                }
                t = not_null(x_84);
              }
            }
          }
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
ATerm _2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
  v_85 = t;
  u_85 :
  if(match_cons(v_85, sym__2))
    {
      w_85 = ATgetArgument(v_85, 0);
      x_85 = ATgetArgument(v_85, 1);
      {
        ATerm d_86 = NULL,l_86 = NULL;
        ATerm g_86 = NULL;
        t = SSLgetAnnotations(not_null(v_85));
        {
          g_86 = t;
          if(((d_86 != NULL) && (d_86 != g_86)))
            _fail(g_86);
          else
            d_86 = g_86;
        }
        {
          t = not_null(w_85);
          {
            ATerm n_86 = NULL;
            t = q_74(t);
            {
              l_86 = t;
              {
                t = not_null(x_85);
                {
                  ATerm p_86 = NULL;
                  t = r_74(t);
                  {
                    n_86 = t;
                    {
                      ATerm q_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_86), not_null(n_86)), not_null(d_86));
                      {
                        q_86 = t;
                        if(((p_86 != NULL) && (p_86 != q_86)))
                          _fail(q_86);
                        else
                          p_86 = q_86;
                      }
                      t = not_null(p_86);
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
  ATerm y_86 = NULL;
  ATerm j_25;
  j_25 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm z_86 = NULL,a_87 = NULL;
      z_86 = t;
      x_86 :
      if(match_cons(z_86, sym_Program_1))
        {
          a_87 = ATgetArgument(z_86, 0);
          if(((y_86 != NULL) && (y_86 != a_87)))
            _fail(a_87);
          else
            y_86 = a_87;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_25), not_null(y_86)), term_l_25));
      {
        t = printnl_0(t);
        {
          t = term_k_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_25;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATempty, term_n_25));
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
  ATerm d_87 = NULL;
  d_87 = t;
  t = SSL_TicksToSeconds(not_null(d_87));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym__2))
    {
      j_87 = ATgetArgument(i_87, 0);
      k_87 = ATgetArgument(i_87, 1);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_87), not_null(k_87));
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = SSL_addr(not_null(j_87), not_null(k_87));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_98 (ATerm), ATerm c_98 (ATerm))
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_98(t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL;
        s_87 = t;
        r_87 :
        if(((ATgetType(s_87) == AT_LIST) && ((ATermList) s_87 != ATempty)))
          {
            t_87 = ATgetFirst((ATermList) s_87);
            u_87 = (ATerm) ATgetNext((ATermList) s_87);
            {
              ATerm x_87 = NULL;
              ATerm y_87 = NULL;
              t = not_null(u_87);
              {
                t = foldr_2(t, b_98, c_98);
                {
                  y_87 = t;
                  if(((x_87 != NULL) && (x_87 != y_87)))
                    _fail(y_87);
                  else
                    x_87 = y_87;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_87), not_null(x_87));
                t = c_98(t);
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
ATerm crush_2 (ATerm t, ATerm p_99 (ATerm), ATerm q_99 (ATerm))
{
  ATerm f_88 = NULL;
  ATerm h_88 = NULL;
  f_88 = t;
  {
    ATerm i_88 = NULL;
    ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
    t = not_null(f_88);
    {
      i_88 = t;
      {
        t = SSL_explode_term(not_null(i_88));
        {
          k_88 = t;
          e_88 :
          if(match_cons(k_88, sym__2))
            {
              l_88 = ATgetArgument(k_88, 0);
              m_88 = ATgetArgument(k_88, 1);
              if(((h_88 != NULL) && (h_88 != m_88)))
                _fail(m_88);
              else
                h_88 = m_88;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_88);
      t = foldr_2(t, p_99, q_99);
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
    ATerm h_4 (ATerm t)
    {
      t = term_x_25;
      return(t);
    }
    t = crush_2(t, h_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm j_89 = NULL;
    ATerm j_4 (ATerm t)
    {
      ATerm z_25 = t;
      if((PushChoice() == 0))
        {
          ATerm k_4 (ATerm t)
          {
            ATerm e_89 = NULL;
            e_89 = t;
            q_88 :
            if(!(match_cons(e_89, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_4);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_25;
        }
      return(t);
    }
    t = _2(t, j_4, _id);
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          ATerm f_89 = NULL,g_89 = NULL;
          f_89 = t;
          s_88 :
          if(match_cons(f_89, sym_Runtime_1))
            {
              g_89 = ATgetArgument(f_89, 0);
              if(((c_89 != NULL) && (c_89 != g_89)))
                _fail(g_89);
              else
                c_89 = g_89;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_4);
        return(t);
      }
      t = _2(t, l_4, _id);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            ATerm h_89 = NULL,i_89 = NULL;
            h_89 = t;
            a_89 :
            if(match_cons(h_89, sym_Program_1))
              {
                i_89 = ATgetArgument(h_89, 0);
                if(((d_89 != NULL) && (d_89 != i_89)))
                  _fail(i_89);
                else
                  d_89 = i_89;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_4);
          return(t);
        }
        t = _2(t, n_4, _id);
        {
          ATerm k_89 = NULL;
          t = run_time_0(t);
          {
            k_89 = t;
            if(((j_89 != NULL) && (j_89 != k_89)))
              _fail(k_89);
            else
              j_89 = k_89;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_26), not_null(j_89)), term_b_26), not_null(d_89)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, i_4);
  {
    t = term_x_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_89 = NULL,r_89 = NULL,t_89 = NULL;
  q_89 = t;
  p_89 :
  if(match_cons(q_89, sym__2))
    {
      r_89 = ATgetArgument(q_89, 0);
      t_89 = ATgetArgument(q_89, 1);
      t = SSL_WriteToTextFile(not_null(r_89), not_null(t_89));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
  z_89 = t;
  y_89 :
  if(match_cons(z_89, sym__2))
    {
      a_90 = ATgetArgument(z_89, 0);
      b_90 = ATgetArgument(z_89, 1);
      t = SSL_WriteToBinaryFile(not_null(a_90), not_null(b_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_90 = NULL;
  ATerm g_26;
  g_26 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm h_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            ATerm l_90 = NULL,m_90 = NULL;
            l_90 = t;
            g_90 :
            if(match_cons(l_90, sym_Output_1))
              {
                m_90 = ATgetArgument(l_90, 0);
                if(((j_90 != NULL) && (j_90 != m_90)))
                  _fail(m_90);
                else
                  j_90 = m_90;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_4);
          LocalPopChoice(i_26);
        }
      else
        {
          t = h_26;
          {
            ATerm p_90 = NULL;
            t = term_j_26;
            {
              p_90 = t;
              if(((j_90 != NULL) && (j_90 != p_90)))
                _fail(p_90);
              else
                j_90 = p_90;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_4, _id);
  }
  t = g_26;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm s_4 (ATerm t)
      {
        t = not_null(j_90);
        return(t);
      }
      t = split_2(t, s_4, _id);
      return(t);
    }
    t = _2(t, _id, r_4);
    {
      ATerm k_26 = t;
      int l_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm q_90 = NULL;
              q_90 = t;
              i_90 :
              if(!(match_cons(q_90, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_4);
            return(t);
          }
          t = _2(t, t_4, WriteToBinaryFile_0);
          LocalPopChoice(l_26);
        }
      else
        {
          t = k_26;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm z_90 = NULL,b_91 = NULL,c_91 = NULL,e_91 = NULL;
  ATerm n_26;
  n_26 = t;
  t = dtime_0(t);
  t = n_26;
  {
    t = f_91(t);
    {
      ATerm o_26;
      o_26 = t;
      {
        ATerm a_91 = NULL;
        t = dtime_0(t);
        {
          a_91 = t;
          if(((z_90 != NULL) && (z_90 != a_91)))
            _fail(a_91);
          else
            z_90 = a_91;
        }
      }
      t = o_26;
      {
        b_91 = t;
        y_90 :
        if(match_cons(b_91, sym__2))
          {
            c_91 = ATgetArgument(b_91, 0);
            e_91 = ATgetArgument(b_91, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_91)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_90))), not_null(e_91));
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
  ATerm l_91 = NULL;
  l_91 = t;
  t = SSL_ReadFromFile(not_null(l_91));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_105 (ATerm), ATerm f_105 (ATerm))
{
  ATerm v_91 = NULL,y_91 = NULL;
  ATerm p_26;
  p_26 = t;
  {
    ATerm x_91 = NULL;
    t = e_105(t);
    {
      x_91 = t;
      if(((v_91 != NULL) && (v_91 != x_91)))
        _fail(x_91);
      else
        v_91 = x_91;
    }
  }
  t = p_26;
  {
    ATerm z_91 = NULL;
    t = f_105(t);
    {
      z_91 = t;
      if(((y_91 != NULL) && (y_91 != z_91)))
        _fail(z_91);
      else
        y_91 = z_91;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_91), not_null(y_91));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_92 = NULL;
  ATerm u_26;
  u_26 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 (ATerm t)
        {
          ATerm g_92 = NULL,h_92 = NULL;
          g_92 = t;
          d_92 :
          if(match_cons(g_92, sym_Input_1))
            {
              h_92 = ATgetArgument(g_92, 0);
              if(((f_92 != NULL) && (f_92 != h_92)))
                _fail(h_92);
              else
                f_92 = h_92;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_4);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        {
          ATerm i_92 = NULL;
          t = term_y_26;
          {
            i_92 = t;
            if(((f_92 != NULL) && (f_92 != i_92)))
              _fail(i_92);
            else
              f_92 = i_92;
          }
        }
      }
  }
  t = u_26;
  {
    ATerm w_4 (ATerm t)
    {
      t = not_null(f_92);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_92 = NULL;
  p_92 = t;
  o_92 :
  if(match_cons(p_92, sym_Version_0))
    {
      ATerm r_92 = NULL,t_92 = NULL;
      ATerm c_27;
      c_27 = t;
      {
        ATerm s_92 = NULL;
        t = SSLgetAnnotations(not_null(p_92));
        {
          s_92 = t;
          if(((r_92 != NULL) && (r_92 != s_92)))
            _fail(s_92);
          else
            r_92 = s_92;
        }
      }
      t = c_27;
      {
        ATerm u_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_92));
        {
          u_92 = t;
          if(((t_92 != NULL) && (t_92 != u_92)))
            _fail(u_92);
          else
            t_92 = u_92;
        }
        t = not_null(t_92);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_91 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = l_27;
        {
          ATerm d_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_28);
            }
          else
            {
              t = d_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_4);
  t = d_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_93 = NULL;
  d_93 = t;
  t = SSL_table_create(not_null(d_93));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_93 = NULL;
  h_93 = t;
  {
    ATerm g_28;
    g_28 = t;
    {
      t = term_u_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_28, term_v_28, not_null(h_93));
          t = table_put_0(t);
        }
      }
    }
    t = g_28;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
  m_93 = t;
  l_93 :
  if(match_cons(m_93, sym__2))
    {
      n_93 = ATgetArgument(m_93, 0);
      o_93 = ATgetArgument(m_93, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_29, not_null(n_93), not_null(o_93));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  d_94 = t;
  b_94 :
  if(match_string(d_94, "register-usage-info"))
    {
      t = register_usage_1(t, r_0);
    }
  else
    {
      if(((ATgetType(d_94) == AT_LIST) && ((ATermList) d_94 != ATempty)))
        {
          e_94 = ATgetFirst((ATermList) d_94);
          f_94 = (ATerm) ATgetNext((ATermList) d_94);
          c_94 :
          if(((ATgetType(f_94) == AT_LIST) && ((ATermList) f_94 != ATempty)))
            {
              g_94 = ATgetFirst((ATermList) f_94);
              h_94 = (ATerm) ATgetNext((ATermList) f_94);
              {
                ATerm l_94 = NULL;
                ATerm d_29;
                d_29 = t;
                {
                  t = not_null(e_94);
                  t = p_0(t);
                }
                t = d_29;
                {
                  ATerm m_94 = NULL;
                  t = not_null(g_94);
                  {
                    t = q_0(t);
                    {
                      m_94 = t;
                      if(((l_94 != NULL) && (l_94 != m_94)))
                        _fail(m_94);
                      else
                        l_94 = m_94;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_94)), not_null(l_94));
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
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        ATerm i_95 = NULL;
        i_95 = t;
        q_94 :
        if(!(match_string(i_95, "-S")))
          {
            if(!(match_string(i_95, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_h_29;
        t = set_config_0(t);
        t = term_i_29;
        return(t);
      }
      ATerm a_5 (ATerm t)
      {
        t = term_j_29;
        return(t);
      }
      t = Option_3(t, y_4, z_4, a_5);
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_5 (ATerm t)
            {
              ATerm j_95 = NULL;
              j_95 = t;
              r_94 :
              if(!(match_string(j_95, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_5 (ATerm t)
            {
              t = term_s_29;
              t = set_config_0(t);
              t = term_t_29;
              return(t);
            }
            ATerm d_5 (ATerm t)
            {
              t = term_y_29;
              return(t);
            }
            t = Option_3(t, b_5, c_5, d_5);
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm k_95 = NULL;
                    k_95 = t;
                    s_94 :
                    if(!(match_string(k_95, "-v")))
                      {
                        if(!(match_string(k_95, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm f_5 (ATerm t)
                  {
                    t = term_c_30;
                    t = set_config_0(t);
                    t = term_d_30;
                    return(t);
                  }
                  ATerm g_5 (ATerm t)
                  {
                    t = term_e_30;
                    return(t);
                  }
                  t = Option_3(t, e_5, f_5, g_5);
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  {
                    ATerm h_30 = t;
                    int i_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_5 (ATerm t)
                        {
                          ATerm l_95 = NULL;
                          l_95 = t;
                          t_94 :
                          if(!(match_string(l_95, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm i_5 (ATerm t)
                        {
                          ATerm o_95 = NULL;
                          ATerm j_30;
                          j_30 = t;
                          {
                            ATerm m_95 = NULL;
                            ATerm n_95 = NULL;
                            n_95 = t;
                            if(((m_95 != NULL) && (m_95 != n_95)))
                              _fail(n_95);
                            else
                              m_95 = n_95;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_30, not_null(m_95));
                              t = set_config_0(t);
                            }
                          }
                          t = j_30;
                          {
                            ATerm p_95 = NULL;
                            p_95 = t;
                            if(((o_95 != NULL) && (o_95 != p_95)))
                              _fail(p_95);
                            else
                              o_95 = p_95;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_95));
                          }
                          return(t);
                        }
                        ATerm j_5 (ATerm t)
                        {
                          t = term_l_30;
                          return(t);
                        }
                        t = ArgOption_3(t, h_5, i_5, j_5);
                        LocalPopChoice(i_30);
                      }
                    else
                      {
                        t = h_30;
                        {
                          ATerm o_30 = t;
                          int p_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_5 (ATerm t)
                              {
                                ATerm q_95 = NULL;
                                q_95 = t;
                                w_94 :
                                if(!(match_string(q_95, "-i")))
                                  {
                                    if(!(match_string(q_95, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm l_5 (ATerm t)
                              {
                                ATerm t_95 = NULL;
                                ATerm s_30;
                                s_30 = t;
                                {
                                  ATerm r_95 = NULL;
                                  ATerm s_95 = NULL;
                                  s_95 = t;
                                  if(((r_95 != NULL) && (r_95 != s_95)))
                                    _fail(s_95);
                                  else
                                    r_95 = s_95;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_t_30, not_null(r_95));
                                    t = set_config_0(t);
                                  }
                                }
                                t = s_30;
                                {
                                  ATerm u_95 = NULL;
                                  u_95 = t;
                                  if(((t_95 != NULL) && (t_95 != u_95)))
                                    _fail(u_95);
                                  else
                                    t_95 = u_95;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_95));
                                }
                                return(t);
                              }
                              ATerm m_5 (ATerm t)
                              {
                                t = term_u_30;
                                return(t);
                              }
                              t = ArgOption_3(t, k_5, l_5, m_5);
                              LocalPopChoice(p_30);
                            }
                          else
                            {
                              t = o_30;
                              {
                                ATerm v_30 = t;
                                int w_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_5 (ATerm t)
                                    {
                                      ATerm v_95 = NULL;
                                      v_95 = t;
                                      z_94 :
                                      if(!(match_string(v_95, "-o")))
                                        {
                                          if(!(match_string(v_95, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_5 (ATerm t)
                                    {
                                      ATerm z_95 = NULL;
                                      ATerm g_31;
                                      g_31 = t;
                                      {
                                        ATerm x_95 = NULL;
                                        ATerm y_95 = NULL;
                                        y_95 = t;
                                        if(((x_95 != NULL) && (x_95 != y_95)))
                                          _fail(y_95);
                                        else
                                          x_95 = y_95;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_h_31, not_null(x_95));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = g_31;
                                      {
                                        ATerm a_96 = NULL;
                                        a_96 = t;
                                        if(((z_95 != NULL) && (z_95 != a_96)))
                                          _fail(a_96);
                                        else
                                          z_95 = a_96;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_95));
                                      }
                                      return(t);
                                    }
                                    ATerm p_5 (ATerm t)
                                    {
                                      t = term_i_31;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, n_5, o_5, p_5);
                                    LocalPopChoice(w_30);
                                  }
                                else
                                  {
                                    t = v_30;
                                    {
                                      ATerm j_31 = t;
                                      int k_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_5 (ATerm t)
                                          {
                                            ATerm d_96 = NULL;
                                            d_96 = t;
                                            g_95 :
                                            if(!(match_string(d_96, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_5 (ATerm t)
                                          {
                                            t = term_q_31;
                                            t = set_config_0(t);
                                            t = term_r_31;
                                            return(t);
                                          }
                                          ATerm s_5 (ATerm t)
                                          {
                                            t = term_s_31;
                                            return(t);
                                          }
                                          t = Option_3(t, q_5, r_5, s_5);
                                          LocalPopChoice(k_31);
                                        }
                                      else
                                        {
                                          t = j_31;
                                          {
                                            ATerm t_5 (ATerm t)
                                            {
                                              ATerm e_96 = NULL;
                                              e_96 = t;
                                              h_95 :
                                              if(!(match_string(e_96, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_5 (ATerm t)
                                            {
                                              t = term_u_31;
                                              t = set_config_0(t);
                                              t = term_v_31;
                                              return(t);
                                            }
                                            ATerm v_5 (ATerm t)
                                            {
                                              t = term_b_32;
                                              return(t);
                                            }
                                            t = Option_3(t, t_5, u_5, v_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_96 = NULL;
  m_96 = t;
  t = SSL_table_destroy(not_null(m_96));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_96 = NULL;
  r_96 = t;
  t = SSL_exit(not_null(r_96));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_96 = NULL;
  x_96 = t;
  t = SSL_implode_string(not_null(x_96));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm h_97 (ATerm t)
  {
    ATerm c_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_97);
        LocalPopChoice(h_32);
      }
    else
      {
        t = c_32;
        {
          t = Nil_0(t);
          t = h_102(t);
        }
      }
    return(t);
  }
  t = h_97(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      {
        ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
        k_97 = t;
        j_97 :
        if(((ATgetType(k_97) == AT_LIST) && ((ATermList) k_97 != ATempty)))
          {
            l_97 = ATgetFirst((ATermList) k_97);
            m_97 = (ATerm) ATgetNext((ATermList) k_97);
            {
              t = not_null(l_97);
              {
                ATerm w_5 (ATerm t)
                {
                  t = not_null(m_97);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_5);
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
  ATerm s_97 = NULL;
  s_97 = t;
  t = SSL_explode_string(not_null(s_97));
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
ATerm long_description_1 (ATerm t, ATerm u_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_101 (ATerm))
{
  ATerm v_97 (ATerm t)
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = Cons_2(t, t_101, v_97);
      }
    return(t);
  }
  t = v_97(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
  j_98 = t;
  g_98 :
  if(((ATgetType(j_98) == AT_LIST) && ((ATermList) j_98 != ATempty)))
    {
      h_98 = ATgetFirst((ATermList) j_98);
      i_98 = (ATerm) ATgetNext((ATermList) j_98);
      {
        ATerm m_98 = NULL;
        t = not_null(i_98);
        {
          ATerm m_32;
          m_32 = t;
          {
            ATerm n_98 = NULL,p_98 = NULL,r_98 = NULL;
            ATerm n_32;
            n_32 = t;
            {
              ATerm o_98 = NULL;
              t = o_0(t);
              {
                o_98 = t;
                if(((n_98 != NULL) && (n_98 != o_98)))
                  _fail(o_98);
                else
                  n_98 = o_98;
              }
            }
            t = n_32;
            {
              ATerm q_98 = NULL;
              t = not_null(h_98);
              {
                t = n_0(t);
                {
                  q_98 = t;
                  if(((p_98 != NULL) && (p_98 != q_98)))
                    _fail(q_98);
                  else
                    p_98 = q_98;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_98)), not_null(p_98));
                {
                  r_98 = t;
                  if(((m_98 != NULL) && (m_98 != r_98)))
                    _fail(r_98);
                  else
                    m_98 = r_98;
                }
              }
            }
          }
          t = m_32;
          {
            ATerm x_5 (ATerm t)
            {
              t = not_null(m_98);
              return(t);
            }
            t = reverse_acc_2(t, n_0, x_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_98 == ATempty))
        {
          {
            t = term_t_6;
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
  ATerm y_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm d_99 = NULL,e_99 = NULL;
  d_99 = t;
  c_99 :
  if(match_cons(d_99, sym_Program_1))
    {
      e_99 = ATgetArgument(d_99, 0);
      {
        ATerm i_99 = NULL,m_99 = NULL;
        ATerm l_99 = NULL;
        t = SSLgetAnnotations(not_null(d_99));
        {
          l_99 = t;
          if(((i_99 != NULL) && (i_99 != l_99)))
            _fail(l_99);
          else
            i_99 = l_99;
        }
        {
          t = not_null(e_99);
          {
            ATerm o_99 = NULL;
            t = t_76(t);
            {
              m_99 = t;
              {
                ATerm u_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_99)), not_null(i_99));
                {
                  u_99 = t;
                  if(((o_99 != NULL) && (o_99 != u_99)))
                    _fail(u_99);
                  else
                    o_99 = u_99;
                }
                t = not_null(o_99);
              }
            }
          }
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
  ATerm d_100 = NULL;
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm e_100 = NULL;
      e_100 = t;
      if(((d_100 != NULL) && (d_100 != e_100)))
        _fail(e_100);
      else
        d_100 = e_100;
      return(t);
    }
    t = Program_1(t, a_6);
    return(t);
  }
  t = option_defined_1(t, z_5);
  {
    ATerm b_6 (ATerm t)
    {
      ATerm f_100 = NULL;
      ATerm g_100 = NULL;
      t = term_t_6;
      {
        ATerm d_6 (ATerm t)
        {
          t = not_null(d_100);
          return(t);
        }
        t = short_description_1(t, d_6);
        {
          t = concat_strings_0(t);
          {
            g_100 = t;
            if(((f_100 != NULL) && (f_100 != g_100)))
              _fail(g_100);
            else
              f_100 = g_100;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATempty, not_null(f_100)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATempty, term_o_32));
      {
        t = printnl_0(t);
        {
          t = term_r_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_6 (ATerm t)
                {
                  ATerm h_100 = NULL;
                  h_100 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_100)), term_s_32));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_6);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm j_100 = NULL;
                    ATerm k_100 = NULL;
                    t = term_t_6;
                    {
                      ATerm g_6 (ATerm t)
                      {
                        t = not_null(d_100);
                        return(t);
                      }
                      t = long_description_1(t, g_6);
                      {
                        t = concat_strings_0(t);
                        {
                          k_100 = t;
                          if(((j_100 != NULL) && (j_100 != k_100)))
                            _fail(k_100);
                          else
                            j_100 = k_100;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_100)), term_t_32));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_6);
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
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  r_100 = t;
  q_100 :
  if(match_cons(r_100, sym__2))
    {
      s_100 = ATgetArgument(r_100, 0);
      t_100 = ATgetArgument(r_100, 1);
      {
        ATerm u_32;
        u_32 = t;
        t = SSL_printnl(not_null(s_100), not_null(t_100));
        t = u_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_76 (ATerm))
{
  ATerm c_101 = NULL,d_101 = NULL;
  c_101 = t;
  b_101 :
  if(match_cons(c_101, sym_Undefined_1))
    {
      d_101 = ATgetArgument(c_101, 0);
      {
        ATerm g_101 = NULL,i_101 = NULL;
        ATerm h_101 = NULL;
        t = SSLgetAnnotations(not_null(c_101));
        {
          h_101 = t;
          if(((g_101 != NULL) && (g_101 != h_101)))
            _fail(h_101);
          else
            g_101 = h_101;
        }
        {
          t = not_null(d_101);
          {
            ATerm k_101 = NULL;
            t = u_76(t);
            {
              i_101 = t;
              {
                ATerm l_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_101)), not_null(g_101));
                {
                  l_101 = t;
                  if(((k_101 != NULL) && (k_101 != l_101)))
                    _fail(l_101);
                  else
                    k_101 = l_101;
                }
                t = not_null(k_101);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_102 (ATerm))
{
  ATerm q_101 (ATerm t)
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_102, _id);
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = Cons_2(t, _id, q_101);
      }
    return(t);
  }
  t = q_101(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_89 (ATerm))
{
  t = fetch_1(t, s_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_101 = NULL;
  x_101 = t;
  w_101 :
  if(match_cons(x_101, sym_Help_0))
    {
      ATerm z_101 = NULL,d_102 = NULL;
      ATerm x_32;
      x_32 = t;
      {
        ATerm a_102 = NULL;
        t = SSLgetAnnotations(not_null(x_101));
        {
          a_102 = t;
          if(((z_101 != NULL) && (z_101 != a_102)))
            _fail(a_102);
          else
            z_101 = a_102;
        }
      }
      t = x_32;
      {
        ATerm e_102 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_101));
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
ATerm try_1 (ATerm t, ATerm w_105 (ATerm))
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_105(t);
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL;
  m_102 = t;
  l_102 :
  if(match_cons(m_102, sym__2))
    {
      n_102 = ATgetArgument(m_102, 0);
      o_102 = ATgetArgument(m_102, 1);
      t = SSL_table_get(not_null(n_102), not_null(o_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL;
  v_102 = t;
  u_102 :
  if(match_cons(v_102, sym__3))
    {
      w_102 = ATgetArgument(v_102, 0);
      x_102 = ATgetArgument(v_102, 1);
      y_102 = ATgetArgument(v_102, 2);
      {
        ATerm a_33;
        a_33 = t;
        {
          ATerm c_103 = NULL;
          ATerm d_103 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_102), not_null(x_102));
          {
            ATerm b_33 = t;
            int c_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_33);
              }
            else
              {
                t = b_33;
                t = (ATerm) ATempty;
              }
            {
              d_103 = t;
              if(((c_103 != NULL) && (c_103 != d_103)))
                _fail(d_103);
              else
                c_103 = d_103;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_102), not_null(x_102), (ATerm) ATinsert(CheckATermList(not_null(c_103)), not_null(y_102)));
            t = table_put_0(t);
          }
        }
        t = a_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm h_103 = NULL;
  ATerm i_103 = NULL;
  t = term_t_6;
  {
    t = y_88(t);
    {
      i_103 = t;
      if(((h_103 != NULL) && (h_103 != i_103)))
        _fail(i_103);
      else
        h_103 = i_103;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, not_null(h_103));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm p_103 = NULL,q_103 = NULL,x_103 = NULL;
  p_103 = t;
  o_103 :
  if(match_string(p_103, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(p_103) == AT_LIST) && ((ATermList) p_103 != ATempty)))
        {
          q_103 = ATgetFirst((ATermList) p_103);
          x_103 = (ATerm) ATgetNext((ATermList) p_103);
          {
            ATerm a_104 = NULL;
            ATerm d_33;
            d_33 = t;
            {
              t = not_null(q_103);
              t = a_0(t);
            }
            t = d_33;
            {
              ATerm b_104 = NULL;
              t = term_t_6;
              {
                t = b_0(t);
                {
                  b_104 = t;
                  if(((a_104 != NULL) && (a_104 != b_104)))
                    _fail(b_104);
                  else
                    a_104 = b_104;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_103)), not_null(a_104));
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
  ATerm h_6 (ATerm t)
  {
    ATerm g_104 = NULL;
    g_104 = t;
    f_104 :
    if(!(match_string(g_104, "--help")))
      {
        if(!(match_string(g_104, "-h")))
          {
            if(!(match_string(g_104, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_e_33;
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_f_33;
    return(t);
  }
  t = Option_3(t, h_6, i_6, j_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL;
  j_104 = t;
  i_104 :
  if(((ATgetType(j_104) == AT_LIST) && ((ATermList) j_104 != ATempty)))
    {
      k_104 = ATgetFirst((ATermList) j_104);
      l_104 = (ATerm) ATgetNext((ATermList) j_104);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_104)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_104)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  v_104 = t;
  u_104 :
  if(((ATgetType(v_104) == AT_LIST) && ((ATermList) v_104 != ATempty)))
    {
      w_104 = ATgetFirst((ATermList) v_104);
      x_104 = (ATerm) ATgetNext((ATermList) v_104);
      {
        ATerm b_105 = NULL,d_105 = NULL;
        ATerm c_105 = NULL;
        t = SSLgetAnnotations(not_null(v_104));
        {
          c_105 = t;
          if(((b_105 != NULL) && (b_105 != c_105)))
            _fail(c_105);
          else
            b_105 = c_105;
        }
        {
          t = not_null(w_104);
          {
            ATerm h_105 = NULL;
            t = j_86(t);
            {
              d_105 = t;
              {
                t = not_null(x_104);
                {
                  ATerm j_105 = NULL;
                  t = k_86(t);
                  {
                    h_105 = t;
                    {
                      ATerm k_105 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_105)), not_null(d_105)), not_null(b_105));
                      {
                        k_105 = t;
                        if(((j_105 != NULL) && (j_105 != k_105)))
                          _fail(k_105);
                        else
                          j_105 = k_105;
                      }
                      t = not_null(j_105);
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
  ATerm u_105 = NULL;
  u_105 = t;
  t_105 :
  if(((ATermList) u_105 == ATempty))
    {
      {
        ATerm x_105 = NULL,z_105 = NULL;
        ATerm g_33;
        g_33 = t;
        {
          ATerm y_105 = NULL;
          t = SSLgetAnnotations(not_null(u_105));
          {
            y_105 = t;
            if(((x_105 != NULL) && (x_105 != y_105)))
              _fail(y_105);
            else
              x_105 = y_105;
          }
        }
        t = g_33;
        {
          ATerm a_106 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_105));
          {
            a_106 = t;
            if(((z_105 != NULL) && (z_105 != a_106)))
              _fail(a_106);
            else
              z_105 = a_106;
          }
          t = not_null(z_105);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_88 (ATerm))
{
  ATerm h_33;
  h_33 = t;
  {
    ATerm k_6 (ATerm t)
    {
      t = term_i_33;
      t = w_88(t);
      return(t);
    }
    t = try_1(t, k_6);
  }
  t = h_33;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm f_106 = NULL;
      f_106 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_106));
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm j_33 = t;
      int k_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
              {
                t = w_88(t);
                t = Cons_2(t, _id, m_6);
              }
            }
          LocalPopChoice(k_33);
        }
      else
        {
          t = j_33;
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
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL;
  ATerm p_33;
  p_33 = t;
  {
    ATerm t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL;
    t_106 = t;
    p_106 :
    if(match_cons(t_106, sym__3))
      {
        u_106 = ATgetArgument(t_106, 0);
        v_106 = ATgetArgument(t_106, 1);
        w_106 = ATgetArgument(t_106, 2);
        {
          if(((q_106 != NULL) && (q_106 != u_106)))
            _fail(u_106);
          else
            q_106 = u_106;
          {
            if(((r_106 != NULL) && (r_106 != v_106)))
              _fail(v_106);
            else
              r_106 = v_106;
            {
              if(((s_106 != NULL) && (s_106 != w_106)))
                _fail(w_106);
              else
                s_106 = w_106;
              t = SSL_table_put(not_null(q_106), not_null(r_106), not_null(s_106));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_88 (ATerm))
{
  ATerm z_106 = NULL;
  ATerm q_33;
  q_33 = t;
  {
    t = term_s_33;
    t = table_put_0(t);
  }
  t = q_33;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_88(t);
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_6);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_x_25;
                t = exit_0(t);
              }
            }
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm a_107 = NULL;
                  a_107 = t;
                  if(((z_106 != NULL) && (z_106 != a_107)))
                    _fail(a_107);
                  else
                    z_106 = a_107;
                  return(t);
                }
                t = Undefined_1(t, q_6);
                return(t);
              }
              t = option_defined_1(t, p_6);
              {
                ATerm x_33;
                x_33 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_106)), term_y_33));
                  t = printnl_0(t);
                }
                t = x_33;
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
        ATerm z_33;
        z_33 = t;
        {
          t = term_p_32;
          t = table_destroy_0(t);
        }
        t = z_33;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_90(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_6);
  {
    t = store_options_0(t);
    {
      ATerm c_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, u_90);
          LocalPopChoice(d_34);
        }
      else
        {
          t = c_34;
          {
            ATerm e_34 = t;
            int k_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, s_90);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(k_34);
              }
            else
              {
                t = e_34;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_90 (ATerm), ATerm o_90 (ATerm))
{
  t = iowrap_3(t, n_90, o_90, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    t = _2(t, _id, k_90);
    return(t);
  }
  t = iowrap_2(t, s_6, _fail);
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
