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
Symbol sym_MatchOp_2;
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_j_14;
ATerm term_d_14;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_g_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_p_6;
ATerm term_q_5;
ATerm term_f_5;
ATerm term_m_4;
void init_constant_terms (void)
{
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_x_10);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_x_10);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_x_10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_x_10);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__3, term_v_12, term_w_12, (ATerm) ATempty);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm e_65 (ATerm));
ATerm Continue_1 (ATerm, ATerm l_48 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm o_48 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm p_48 (ATerm), ATerm q_48 (ATerm));
ATerm Alt_3 (ATerm, ATerm i_48 (ATerm), ATerm j_48 (ATerm), ATerm k_48 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm f_82 (ATerm));
ATerm Case_4 (ATerm, ATerm b_48 (ATerm), ATerm c_48 (ATerm), ATerm d_48 (ATerm), ATerm e_48 (ATerm));
ATerm Let_2 (ATerm, ATerm d_57 (ATerm), ATerm e_57 (ATerm));
ATerm Prim_2 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm Where_1 (ATerm, ATerm h_58 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm Build_1 (ATerm, ATerm c_58 (ATerm));
ATerm Op_2 (ATerm, ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm As_2 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm t_54 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm b_58 (ATerm));
ATerm Thread_1 (ATerm, ATerm y_57 (ATerm));
ATerm All_1 (ATerm, ATerm x_57 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm v_57 (ATerm));
ATerm Cong_2 (ATerm, ATerm t_57 (ATerm), ATerm u_57 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm SVar_1 (ATerm, ATerm a_57 (ATerm));
ATerm Call_2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm x_56 (ATerm), ATerm y_56 (ATerm));
ATerm GChoice_2 (ATerm, ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm LChoice_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm Choice_2 (ATerm, ATerm o_56 (ATerm), ATerm p_56 (ATerm));
ATerm Seq_2 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm Test_1 (ATerm, ATerm k_56 (ATerm));
ATerm Not_1 (ATerm, ATerm l_56 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm i_57 (ATerm), ATerm j_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm h_57 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm l_74 (ATerm));
ATerm Strategies_1 (ATerm, ATerm s_55 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_55 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm r_46 (ATerm), ATerm s_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm));
ATerm crush_2 (ATerm, ATerm p_70 (ATerm), ATerm q_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_64 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_67 (ATerm), ATerm q_67 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_64 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_62 (ATerm));
ATerm map_1 (ATerm, ATerm j_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_62 (ATerm));
ATerm Program_1 (ATerm, ATerm u_48 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_48 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_58 (ATerm), ATerm n_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_62 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm f_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_63 (ATerm), ATerm z_63 (ATerm));
ATerm iowrap_1 (ATerm, ATerm v_63 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm k_4;
  k_4 = t;
  {
    ATerm c_6 = NULL,u_10 = NULL;
    ATerm l_4;
    l_4 = t;
    {
      ATerm t_10 = NULL;
      t = e_65(t);
      {
        t_10 = t;
        if(((c_6 != NULL) && (c_6 != t_10)))
          _fail(t_10);
        else
          c_6 = t_10;
      }
    }
    t = l_4;
    {
      ATerm v_10 = NULL;
      v_10 = t;
      if(((u_10 != NULL) && (u_10 != v_10)))
        _fail(v_10);
      else
        u_10 = v_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_10)), not_null(c_6)));
        t = printnl_0(t);
      }
    }
  }
  t = k_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm l_48 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_Continue_1))
    {
      e_13 = ATgetArgument(d_13, 0);
      {
        ATerm r_13 = NULL,w_13 = NULL;
        ATerm v_13 = NULL;
        t = SSLgetAnnotations(not_null(d_13));
        {
          v_13 = t;
          if(((r_13 != NULL) && (r_13 != v_13)))
            _fail(v_13);
          else
            r_13 = v_13;
        }
        {
          t = not_null(e_13);
          {
            ATerm y_13 = NULL;
            t = l_48(t);
            {
              w_13 = t;
              {
                ATerm z_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(w_13)), not_null(r_13));
                {
                  z_13 = t;
                  if(((y_13 != NULL) && (y_13 != z_13)))
                    _fail(z_13);
                  else
                    y_13 = z_13;
                }
                t = not_null(y_13);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Var_1))
    {
      o_14 = ATgetArgument(n_14, 0);
      {
        ATerm n_4 = t;
        int o_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = NULL,t_14 = NULL;
            ATerm s_14 = NULL;
            t = SSLgetAnnotations(not_null(n_14));
            {
              s_14 = t;
              if(((r_14 != NULL) && (r_14 != s_14)))
                _fail(s_14);
              else
                r_14 = s_14;
            }
            {
              t = not_null(o_14);
              {
                ATerm v_14 = NULL;
                t = s_0(t);
                {
                  t_14 = t;
                  {
                    ATerm w_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_14)), not_null(r_14));
                    {
                      w_14 = t;
                      if(((v_14 != NULL) && (v_14 != w_14)))
                        _fail(w_14);
                      else
                        v_14 = w_14;
                    }
                    t = not_null(v_14);
                  }
                }
              }
            }
            LocalPopChoice(o_4);
          }
        else
          {
            t = n_4;
            {
              ATerm z_14 = NULL,b_15 = NULL;
              ATerm a_15 = NULL;
              t = SSLgetAnnotations(not_null(n_14));
              {
                a_15 = t;
                if(((z_14 != NULL) && (z_14 != a_15)))
                  _fail(a_15);
                else
                  z_14 = a_15;
              }
              {
                t = not_null(o_14);
                {
                  ATerm d_15 = NULL;
                  t = s_0(t);
                  {
                    b_15 = t;
                    {
                      ATerm e_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_15)), not_null(z_14));
                      {
                        e_15 = t;
                        if(((d_15 != NULL) && (d_15 != e_15)))
                          _fail(e_15);
                        else
                          d_15 = e_15;
                      }
                      t = not_null(d_15);
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
ATerm Assign_1 (ATerm t, ATerm o_48 (ATerm))
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_Assign_1))
    {
      t_15 = ATgetArgument(s_15, 0);
      {
        ATerm w_15 = NULL,y_15 = NULL;
        ATerm x_15 = NULL;
        t = SSLgetAnnotations(not_null(s_15));
        {
          x_15 = t;
          if(((w_15 != NULL) && (w_15 != x_15)))
            _fail(x_15);
          else
            w_15 = x_15;
        }
        {
          t = not_null(t_15);
          {
            ATerm a_16 = NULL;
            t = o_48(t);
            {
              y_15 = t;
              {
                ATerm b_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(y_15)), not_null(w_15));
                {
                  b_16 = t;
                  if(((a_16 != NULL) && (a_16 != b_16)))
                    _fail(b_16);
                  else
                    a_16 = b_16;
                }
                t = not_null(a_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm p_4 = t;
  int q_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(q_4);
    }
  else
    {
      t = p_4;
      {
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
            {
              ATerm t_4 = t;
              int u_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(u_4);
                }
              else
                {
                  t = t_4;
                  {
                    ATerm v_4 = t;
                    int w_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(w_4);
                      }
                    else
                      {
                        t = v_4;
                        {
                          ATerm x_4 = t;
                          int y_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(y_4);
                            }
                          else
                            {
                              t = x_4;
                              {
                                ATerm z_4 = t;
                                int a_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(a_5);
                                  }
                                else
                                  {
                                    t = z_4;
                                    {
                                      ATerm b_5 = t;
                                      int c_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          LocalPopChoice(c_5);
                                        }
                                      else
                                        {
                                          t = b_5;
                                          {
                                            ATerm d_5 = t;
                                            int e_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(e_5);
                                              }
                                            else
                                              {
                                                t = d_5;
                                                {
                                                  ATerm g_0 (ATerm t)
                                                  {
                                                    t = term_f_5;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, g_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Assign_2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      {
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_16 = NULL,a_17 = NULL;
            ATerm z_16 = NULL;
            t = SSLgetAnnotations(not_null(s_16));
            {
              z_16 = t;
              if(((y_16 != NULL) && (y_16 != z_16)))
                _fail(z_16);
              else
                y_16 = z_16;
            }
            {
              t = not_null(t_16);
              {
                ATerm c_17 = NULL;
                t = q_0(t);
                {
                  a_17 = t;
                  {
                    t = not_null(u_16);
                    {
                      ATerm e_17 = NULL;
                      t = r_0(t);
                      {
                        c_17 = t;
                        {
                          ATerm f_17 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(a_17), not_null(c_17)), not_null(y_16));
                          {
                            f_17 = t;
                            if(((e_17 != NULL) && (e_17 != f_17)))
                              _fail(f_17);
                            else
                              e_17 = f_17;
                          }
                          t = not_null(e_17);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(h_5);
          }
        else
          {
            t = g_5;
            {
              ATerm j_17 = NULL,l_17 = NULL;
              ATerm k_17 = NULL;
              t = SSLgetAnnotations(not_null(s_16));
              {
                k_17 = t;
                if(((j_17 != NULL) && (j_17 != k_17)))
                  _fail(k_17);
                else
                  j_17 = k_17;
              }
              {
                t = not_null(t_16);
                {
                  ATerm n_17 = NULL;
                  t = q_0(t);
                  {
                    l_17 = t;
                    {
                      t = not_null(u_16);
                      {
                        ATerm p_17 = NULL;
                        t = r_0(t);
                        {
                          n_17 = t;
                          {
                            ATerm q_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(l_17), not_null(n_17)), not_null(j_17));
                            {
                              q_17 = t;
                              if(((p_17 != NULL) && (p_17 != q_17)))
                                _fail(q_17);
                              else
                                p_17 = q_17;
                            }
                            t = not_null(p_17);
                          }
                        }
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
ATerm Fun_2 (ATerm t, ATerm p_48 (ATerm), ATerm q_48 (ATerm))
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym_Fun_2))
    {
      i_18 = ATgetArgument(h_18, 0);
      j_18 = ATgetArgument(h_18, 1);
      {
        ATerm n_18 = NULL,p_18 = NULL;
        ATerm o_18 = NULL;
        t = SSLgetAnnotations(not_null(h_18));
        {
          o_18 = t;
          if(((n_18 != NULL) && (n_18 != o_18)))
            _fail(o_18);
          else
            n_18 = o_18;
        }
        {
          t = not_null(i_18);
          {
            ATerm r_18 = NULL;
            t = p_48(t);
            {
              p_18 = t;
              {
                t = not_null(j_18);
                {
                  ATerm t_18 = NULL;
                  t = q_48(t);
                  {
                    r_18 = t;
                    {
                      ATerm u_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(p_18), not_null(r_18)), not_null(n_18));
                      {
                        u_18 = t;
                        if(((t_18 != NULL) && (t_18 != u_18)))
                          _fail(u_18);
                        else
                          t_18 = u_18;
                      }
                      t = not_null(t_18);
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
ATerm Alt_3 (ATerm t, ATerm i_48 (ATerm), ATerm j_48 (ATerm), ATerm k_48 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_Alt_3))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      k_19 = ATgetArgument(h_19, 2);
      {
        ATerm p_19 = NULL,r_19 = NULL;
        ATerm q_19 = NULL;
        t = SSLgetAnnotations(not_null(h_19));
        {
          q_19 = t;
          if(((p_19 != NULL) && (p_19 != q_19)))
            _fail(q_19);
          else
            p_19 = q_19;
        }
        {
          t = not_null(i_19);
          {
            ATerm t_19 = NULL;
            t = i_48(t);
            {
              r_19 = t;
              {
                t = not_null(j_19);
                {
                  ATerm v_19 = NULL;
                  t = j_48(t);
                  {
                    t_19 = t;
                    {
                      t = not_null(k_19);
                      {
                        ATerm x_19 = NULL;
                        t = k_48(t);
                        {
                          v_19 = t;
                          {
                            ATerm y_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(r_19), not_null(t_19), not_null(v_19)), not_null(p_19));
                            {
                              y_19 = t;
                              if(((x_19 != NULL) && (x_19 != y_19)))
                                _fail(y_19);
                              else
                                x_19 = y_19;
                            }
                            t = not_null(x_19);
                          }
                        }
                      }
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
ATerm case_alternative_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm i_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm k_5 = t;
        int l_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
            LocalPopChoice(l_5);
          }
        else
          {
            t = k_5;
            {
              ATerm m_5 = t;
              int n_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Str_1(t, is_string_0);
                  LocalPopChoice(n_5);
                }
              else
                {
                  t = m_5;
                  {
                    ATerm o_5 = t;
                    int p_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        LocalPopChoice(p_5);
                      }
                    else
                      {
                        t = o_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, u_0);
        return(t);
      }
      t = Alt_3(t, h_0, t_0, f_82);
      LocalPopChoice(j_5);
    }
  else
    {
      t = i_5;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_q_5;
          return(t);
        }
        t = debug_1(t, v_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm b_48 (ATerm), ATerm c_48 (ATerm), ATerm d_48 (ATerm), ATerm e_48 (ATerm))
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym_Case_4))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      q_20 = ATgetArgument(n_20, 2);
      r_20 = ATgetArgument(n_20, 3);
      {
        ATerm x_20 = NULL,z_20 = NULL;
        ATerm y_20 = NULL;
        t = SSLgetAnnotations(not_null(n_20));
        {
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
        }
        {
          t = not_null(o_20);
          {
            ATerm b_21 = NULL;
            t = b_48(t);
            {
              z_20 = t;
              {
                t = not_null(p_20);
                {
                  ATerm d_21 = NULL;
                  t = c_48(t);
                  {
                    b_21 = t;
                    {
                      t = not_null(q_20);
                      {
                        ATerm f_21 = NULL;
                        t = d_48(t);
                        {
                          d_21 = t;
                          {
                            t = not_null(r_20);
                            {
                              ATerm h_21 = NULL;
                              t = e_48(t);
                              {
                                f_21 = t;
                                {
                                  ATerm i_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(z_20), not_null(b_21), not_null(d_21), not_null(f_21)), not_null(x_20));
                                  {
                                    i_21 = t;
                                    if(((h_21 != NULL) && (h_21 != i_21)))
                                      _fail(i_21);
                                    else
                                      h_21 = i_21;
                                  }
                                  t = not_null(h_21);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm d_57 (ATerm), ATerm e_57 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_Let_2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        ATerm c_22 = NULL,e_22 = NULL;
        ATerm d_22 = NULL;
        t = SSLgetAnnotations(not_null(w_21));
        {
          d_22 = t;
          if(((c_22 != NULL) && (c_22 != d_22)))
            _fail(d_22);
          else
            c_22 = d_22;
        }
        {
          t = not_null(x_21);
          {
            ATerm g_22 = NULL;
            t = d_57(t);
            {
              e_22 = t;
              {
                t = not_null(y_21);
                {
                  ATerm i_22 = NULL;
                  t = e_57(t);
                  {
                    g_22 = t;
                    {
                      ATerm j_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(e_22), not_null(g_22)), not_null(c_22));
                      {
                        j_22 = t;
                        if(((i_22 != NULL) && (i_22 != j_22)))
                          _fail(j_22);
                        else
                          i_22 = j_22;
                      }
                      t = not_null(i_22);
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
ATerm Prim_2 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym_Prim_2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm b_23 = NULL,d_23 = NULL;
        ATerm c_23 = NULL;
        t = SSLgetAnnotations(not_null(v_22));
        {
          c_23 = t;
          if(((b_23 != NULL) && (b_23 != c_23)))
            _fail(c_23);
          else
            b_23 = c_23;
        }
        {
          t = not_null(w_22);
          {
            ATerm f_23 = NULL;
            t = i_58(t);
            {
              d_23 = t;
              {
                t = not_null(x_22);
                {
                  ATerm h_23 = NULL;
                  t = j_58(t);
                  {
                    f_23 = t;
                    {
                      ATerm i_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(d_23), not_null(f_23)), not_null(b_23));
                      {
                        i_23 = t;
                        if(((h_23 != NULL) && (h_23 != i_23)))
                          _fail(i_23);
                        else
                          h_23 = i_23;
                      }
                      t = not_null(h_23);
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
ATerm Where_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_Where_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      {
        ATerm h_24 = NULL,j_24 = NULL;
        ATerm i_24 = NULL;
        t = SSLgetAnnotations(not_null(a_24));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        {
          t = not_null(b_24);
          {
            ATerm l_24 = NULL;
            t = h_58(t);
            {
              j_24 = t;
              {
                ATerm m_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(j_24)), not_null(h_24));
                {
                  m_24 = t;
                  if(((l_24 != NULL) && (l_24 != m_24)))
                    _fail(m_24);
                  else
                    l_24 = m_24;
                }
                t = not_null(l_24);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL,a_25 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym_Scope_2))
    {
      y_24 = ATgetArgument(x_24, 0);
      a_25 = ATgetArgument(x_24, 1);
      {
        ATerm e_25 = NULL,g_25 = NULL;
        ATerm f_25 = NULL;
        t = SSLgetAnnotations(not_null(x_24));
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
        {
          t = not_null(y_24);
          {
            ATerm i_25 = NULL;
            t = f_58(t);
            {
              g_25 = t;
              {
                t = not_null(a_25);
                {
                  ATerm k_25 = NULL;
                  t = g_58(t);
                  {
                    i_25 = t;
                    {
                      ATerm l_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(g_25), not_null(i_25)), not_null(e_25));
                      {
                        l_25 = t;
                        if(((k_25 != NULL) && (k_25 != l_25)))
                          _fail(l_25);
                        else
                          k_25 = l_25;
                      }
                      t = not_null(k_25);
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
ATerm Build_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_Build_1))
    {
      g_26 = ATgetArgument(f_26, 0);
      {
        ATerm l_26 = NULL,p_26 = NULL;
        ATerm m_26 = NULL;
        t = SSLgetAnnotations(not_null(f_26));
        {
          m_26 = t;
          if(((l_26 != NULL) && (l_26 != m_26)))
            _fail(m_26);
          else
            l_26 = m_26;
        }
        {
          t = not_null(g_26);
          {
            ATerm r_26 = NULL;
            t = c_58(t);
            {
              p_26 = t;
              {
                ATerm s_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_26)), not_null(l_26));
                {
                  s_26 = t;
                  if(((r_26 != NULL) && (r_26 != s_26)))
                    _fail(s_26);
                  else
                    r_26 = s_26;
                }
                t = not_null(r_26);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  d_27 :
  if(match_cons(m_27, sym_Op_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm s_27 = NULL,u_27 = NULL;
        ATerm t_27 = NULL;
        t = SSLgetAnnotations(not_null(m_27));
        {
          t_27 = t;
          if(((s_27 != NULL) && (s_27 != t_27)))
            _fail(t_27);
          else
            s_27 = t_27;
        }
        {
          t = not_null(n_27);
          {
            ATerm x_27 = NULL;
            t = i_56(t);
            {
              u_27 = t;
              {
                t = not_null(o_27);
                {
                  ATerm z_27 = NULL;
                  t = j_56(t);
                  {
                    x_27 = t;
                    {
                      ATerm a_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_27), not_null(x_27)), not_null(s_27));
                      {
                        a_28 = t;
                        if(((z_27 != NULL) && (z_27 != a_28)))
                          _fail(a_28);
                        else
                          z_27 = a_28;
                      }
                      t = not_null(z_27);
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
ATerm As_2 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm))
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_As_2))
    {
      n_28 = ATgetArgument(m_28, 0);
      o_28 = ATgetArgument(m_28, 1);
      {
        ATerm s_28 = NULL,u_28 = NULL;
        ATerm t_28 = NULL;
        t = SSLgetAnnotations(not_null(m_28));
        {
          t_28 = t;
          if(((s_28 != NULL) && (s_28 != t_28)))
            _fail(t_28);
          else
            s_28 = t_28;
        }
        {
          t = not_null(n_28);
          {
            ATerm w_28 = NULL;
            t = r_54(t);
            {
              u_28 = t;
              {
                t = not_null(o_28);
                {
                  ATerm y_28 = NULL;
                  t = s_54(t);
                  {
                    w_28 = t;
                    {
                      ATerm z_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(u_28), not_null(w_28)), not_null(s_28));
                      {
                        z_28 = t;
                        if(((y_28 != NULL) && (y_28 != z_28)))
                          _fail(z_28);
                        else
                          y_28 = z_28;
                      }
                      t = not_null(y_28);
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
ATerm BuildDefault_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_BuildDefault_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm o_29 = NULL,q_29 = NULL;
        ATerm p_29 = NULL;
        t = SSLgetAnnotations(not_null(k_29));
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
        {
          t = not_null(l_29);
          {
            ATerm s_29 = NULL;
            t = t_54(t);
            {
              q_29 = t;
              {
                ATerm t_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(q_29)), not_null(o_29));
                {
                  t_29 = t;
                  if(((s_29 != NULL) && (s_29 != t_29)))
                    _fail(t_29);
                  else
                    s_29 = t_29;
                }
                t = not_null(s_29);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm p_30 = NULL,q_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym_Str_1))
    {
      q_30 = ATgetArgument(p_30, 0);
      {
        ATerm r_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_30 = NULL,v_30 = NULL;
            ATerm u_30 = NULL;
            t = SSLgetAnnotations(not_null(p_30));
            {
              u_30 = t;
              if(((t_30 != NULL) && (t_30 != u_30)))
                _fail(u_30);
              else
                t_30 = u_30;
            }
            {
              t = not_null(q_30);
              {
                ATerm x_30 = NULL;
                t = p_0(t);
                {
                  v_30 = t;
                  {
                    ATerm y_30 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(v_30)), not_null(t_30));
                    {
                      y_30 = t;
                      if(((x_30 != NULL) && (x_30 != y_30)))
                        _fail(y_30);
                      else
                        x_30 = y_30;
                    }
                    t = not_null(x_30);
                  }
                }
              }
            }
            LocalPopChoice(s_5);
          }
        else
          {
            t = r_5;
            {
              ATerm b_31 = NULL,d_31 = NULL;
              ATerm c_31 = NULL;
              t = SSLgetAnnotations(not_null(p_30));
              {
                c_31 = t;
                if(((b_31 != NULL) && (b_31 != c_31)))
                  _fail(c_31);
                else
                  b_31 = c_31;
              }
              {
                t = not_null(q_30);
                {
                  ATerm i_31 = NULL;
                  t = p_0(t);
                  {
                    d_31 = t;
                    {
                      ATerm j_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(d_31)), not_null(b_31));
                      {
                        j_31 = t;
                        if(((i_31 != NULL) && (i_31 != j_31)))
                          _fail(j_31);
                        else
                          i_31 = j_31;
                      }
                      t = not_null(i_31);
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
ATerm is_real_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  t = SSL_is_real(not_null(t_31));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Real_1))
    {
      g_32 = ATgetArgument(f_32, 0);
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 = NULL,l_32 = NULL;
            ATerm k_32 = NULL;
            t = SSLgetAnnotations(not_null(f_32));
            {
              k_32 = t;
              if(((j_32 != NULL) && (j_32 != k_32)))
                _fail(k_32);
              else
                j_32 = k_32;
            }
            {
              t = not_null(g_32);
              {
                ATerm n_32 = NULL;
                t = o_0(t);
                {
                  l_32 = t;
                  {
                    ATerm o_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(l_32)), not_null(j_32));
                    {
                      o_32 = t;
                      if(((n_32 != NULL) && (n_32 != o_32)))
                        _fail(o_32);
                      else
                        n_32 = o_32;
                    }
                    t = not_null(n_32);
                  }
                }
              }
            }
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm r_32 = NULL,t_32 = NULL;
              ATerm s_32 = NULL;
              t = SSLgetAnnotations(not_null(f_32));
              {
                s_32 = t;
                if(((r_32 != NULL) && (r_32 != s_32)))
                  _fail(s_32);
                else
                  r_32 = s_32;
              }
              {
                t = not_null(g_32);
                {
                  ATerm v_32 = NULL;
                  t = o_0(t);
                  {
                    t_32 = t;
                    {
                      ATerm w_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(t_32)), not_null(r_32));
                      {
                        w_32 = t;
                        if(((v_32 != NULL) && (v_32 != w_32)))
                          _fail(w_32);
                        else
                          v_32 = w_32;
                      }
                      t = not_null(v_32);
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm o_33 = NULL,p_33 = NULL;
  o_33 = t;
  n_33 :
  if(match_cons(o_33, sym_Int_1))
    {
      p_33 = ATgetArgument(o_33, 0);
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_33 = NULL,u_33 = NULL;
            ATerm t_33 = NULL;
            t = SSLgetAnnotations(not_null(o_33));
            {
              t_33 = t;
              if(((s_33 != NULL) && (s_33 != t_33)))
                _fail(t_33);
              else
                s_33 = t_33;
            }
            {
              t = not_null(p_33);
              {
                ATerm w_33 = NULL;
                t = n_0(t);
                {
                  u_33 = t;
                  {
                    ATerm x_33 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(u_33)), not_null(s_33));
                    {
                      x_33 = t;
                      if(((w_33 != NULL) && (w_33 != x_33)))
                        _fail(x_33);
                      else
                        w_33 = x_33;
                    }
                    t = not_null(w_33);
                  }
                }
              }
            }
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            {
              ATerm a_34 = NULL,f_34 = NULL;
              ATerm b_34 = NULL;
              t = SSLgetAnnotations(not_null(o_33));
              {
                b_34 = t;
                if(((a_34 != NULL) && (a_34 != b_34)))
                  _fail(b_34);
                else
                  a_34 = b_34;
              }
              {
                t = not_null(p_33);
                {
                  ATerm h_34 = NULL;
                  t = n_0(t);
                  {
                    f_34 = t;
                    {
                      ATerm i_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(f_34)), not_null(a_34));
                      {
                        i_34 = t;
                        if(((h_34 != NULL) && (h_34 != i_34)))
                          _fail(i_34);
                        else
                          h_34 = i_34;
                      }
                      t = not_null(h_34);
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
ATerm Wld_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym_Wld_0))
    {
      ATerm x_34 = NULL,z_34 = NULL;
      ATerm x_5;
      x_5 = t;
      {
        ATerm y_34 = NULL;
        t = SSLgetAnnotations(not_null(v_34));
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
      }
      t = x_5;
      {
        ATerm a_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(x_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        t = not_null(z_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm y_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(z_5);
    }
  else
    {
      t = y_5;
      {
        ATerm a_6 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(b_6);
          }
        else
          {
            t = a_6;
            {
              ATerm d_6 = t;
              int e_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(e_6);
                }
              else
                {
                  t = d_6;
                  {
                    ATerm f_6 = t;
                    int g_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(g_6);
                      }
                    else
                      {
                        t = f_6;
                        {
                          ATerm h_6 = t;
                          int i_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(i_6);
                            }
                          else
                            {
                              t = h_6;
                              {
                                ATerm j_6 = t;
                                int k_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    LocalPopChoice(k_6);
                                  }
                                else
                                  {
                                    t = j_6;
                                    {
                                      ATerm l_6 = t;
                                      int m_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, w_0, match_term_exp_0);
                                          LocalPopChoice(m_6);
                                        }
                                      else
                                        {
                                          t = l_6;
                                          {
                                            ATerm n_6 = t;
                                            int o_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, x_0);
                                                LocalPopChoice(o_6);
                                              }
                                            else
                                              {
                                                t = n_6;
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_p_6;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, y_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Match_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm k_35 = NULL,l_35 = NULL;
  k_35 = t;
  j_35 :
  if(match_cons(k_35, sym_Match_1))
    {
      l_35 = ATgetArgument(k_35, 0);
      {
        ATerm o_35 = NULL,q_35 = NULL;
        ATerm p_35 = NULL;
        t = SSLgetAnnotations(not_null(k_35));
        {
          p_35 = t;
          if(((o_35 != NULL) && (o_35 != p_35)))
            _fail(p_35);
          else
            o_35 = p_35;
        }
        {
          t = not_null(l_35);
          {
            ATerm s_35 = NULL;
            t = b_58(t);
            {
              q_35 = t;
              {
                ATerm t_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(q_35)), not_null(o_35));
                {
                  t_35 = t;
                  if(((s_35 != NULL) && (s_35 != t_35)))
                    _fail(t_35);
                  else
                    s_35 = t_35;
                }
                t = not_null(s_35);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm d_36 = NULL,e_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym_Thread_1))
    {
      e_36 = ATgetArgument(d_36, 0);
      {
        ATerm h_36 = NULL,j_36 = NULL;
        ATerm i_36 = NULL;
        t = SSLgetAnnotations(not_null(d_36));
        {
          i_36 = t;
          if(((h_36 != NULL) && (h_36 != i_36)))
            _fail(i_36);
          else
            h_36 = i_36;
        }
        {
          t = not_null(e_36);
          {
            ATerm l_36 = NULL;
            t = y_57(t);
            {
              j_36 = t;
              {
                ATerm m_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(j_36)), not_null(h_36));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym_All_1))
    {
      x_36 = ATgetArgument(w_36, 0);
      {
        ATerm a_37 = NULL,c_37 = NULL;
        ATerm b_37 = NULL;
        t = SSLgetAnnotations(not_null(w_36));
        {
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
        }
        {
          t = not_null(x_36);
          {
            ATerm e_37 = NULL;
            t = x_57(t);
            {
              c_37 = t;
              {
                ATerm f_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(c_37)), not_null(a_37));
                {
                  f_37 = t;
                  if(((e_37 != NULL) && (e_37 != f_37)))
                    _fail(f_37);
                  else
                    e_37 = f_37;
                }
                t = not_null(e_37);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm t_37 = NULL,u_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym_Some_1))
    {
      u_37 = ATgetArgument(t_37, 0);
      {
        ATerm q_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_37 = NULL,z_37 = NULL;
            ATerm y_37 = NULL;
            t = SSLgetAnnotations(not_null(t_37));
            {
              y_37 = t;
              if(((x_37 != NULL) && (x_37 != y_37)))
                _fail(y_37);
              else
                x_37 = y_37;
            }
            {
              t = not_null(u_37);
              {
                ATerm b_38 = NULL;
                t = m_0(t);
                {
                  z_37 = t;
                  {
                    ATerm c_38 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(z_37)), not_null(x_37));
                    {
                      c_38 = t;
                      if(((b_38 != NULL) && (b_38 != c_38)))
                        _fail(c_38);
                      else
                        b_38 = c_38;
                    }
                    t = not_null(b_38);
                  }
                }
              }
            }
            LocalPopChoice(r_6);
          }
        else
          {
            t = q_6;
            {
              ATerm f_38 = NULL,h_38 = NULL;
              ATerm g_38 = NULL;
              t = SSLgetAnnotations(not_null(t_37));
              {
                g_38 = t;
                if(((f_38 != NULL) && (f_38 != g_38)))
                  _fail(g_38);
                else
                  f_38 = g_38;
              }
              {
                t = not_null(u_37);
                {
                  ATerm j_38 = NULL;
                  t = m_0(t);
                  {
                    h_38 = t;
                    {
                      ATerm k_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(h_38)), not_null(f_38));
                      {
                        k_38 = t;
                        if(((j_38 != NULL) && (j_38 != k_38)))
                          _fail(k_38);
                        else
                          j_38 = k_38;
                      }
                      t = not_null(j_38);
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
ATerm One_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm a_39 = NULL,b_39 = NULL;
  a_39 = t;
  x_38 :
  if(match_cons(a_39, sym_One_1))
    {
      b_39 = ATgetArgument(a_39, 0);
      {
        ATerm e_39 = NULL,g_39 = NULL;
        ATerm f_39 = NULL;
        t = SSLgetAnnotations(not_null(a_39));
        {
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
        }
        {
          t = not_null(b_39);
          {
            ATerm i_39 = NULL;
            t = v_57(t);
            {
              g_39 = t;
              {
                ATerm j_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(g_39)), not_null(e_39));
                {
                  j_39 = t;
                  if(((i_39 != NULL) && (i_39 != j_39)))
                    _fail(j_39);
                  else
                    i_39 = j_39;
                }
                t = not_null(i_39);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm t_57 (ATerm), ATerm u_57 (ATerm))
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym_Cong_2))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      {
        ATerm a_40 = NULL,c_40 = NULL;
        ATerm b_40 = NULL;
        t = SSLgetAnnotations(not_null(u_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
        {
          t = not_null(v_39);
          {
            ATerm e_40 = NULL;
            t = t_57(t);
            {
              c_40 = t;
              {
                t = not_null(w_39);
                {
                  ATerm g_40 = NULL;
                  t = u_57(t);
                  {
                    e_40 = t;
                    {
                      ATerm h_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(c_40), not_null(e_40)), not_null(a_40));
                      {
                        h_40 = t;
                        if(((g_40 != NULL) && (g_40 != h_40)))
                          _fail(h_40);
                        else
                          g_40 = h_40;
                      }
                      t = not_null(g_40);
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
ATerm is_int_0 (ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  t = SSL_is_int(not_null(o_40));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_Path_2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      {
        ATerm e_41 = NULL,g_41 = NULL;
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(y_40));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        {
          t = not_null(z_40);
          {
            ATerm i_41 = NULL;
            t = r_57(t);
            {
              g_41 = t;
              {
                t = not_null(a_41);
                {
                  ATerm k_41 = NULL;
                  t = s_57(t);
                  {
                    i_41 = t;
                    {
                      ATerm l_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(g_41), not_null(i_41)), not_null(e_41));
                      {
                        l_41 = t;
                        if(((k_41 != NULL) && (k_41 != l_41)))
                          _fail(l_41);
                        else
                          k_41 = l_41;
                      }
                      t = not_null(k_41);
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
ATerm Rec_2 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym_Rec_2))
    {
      y_41 = ATgetArgument(x_41, 0);
      z_41 = ATgetArgument(x_41, 1);
      {
        ATerm d_42 = NULL,f_42 = NULL;
        ATerm e_42 = NULL;
        t = SSLgetAnnotations(not_null(x_41));
        {
          e_42 = t;
          if(((d_42 != NULL) && (d_42 != e_42)))
            _fail(e_42);
          else
            d_42 = e_42;
        }
        {
          t = not_null(y_41);
          {
            ATerm h_42 = NULL;
            t = b_57(t);
            {
              f_42 = t;
              {
                t = not_null(z_41);
                {
                  ATerm j_42 = NULL;
                  t = c_57(t);
                  {
                    h_42 = t;
                    {
                      ATerm k_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(f_42), not_null(h_42)), not_null(d_42));
                      {
                        k_42 = t;
                        if(((j_42 != NULL) && (j_42 != k_42)))
                          _fail(k_42);
                        else
                          j_42 = k_42;
                      }
                      t = not_null(j_42);
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
ATerm SVar_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm v_42 = NULL,w_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym_SVar_1))
    {
      w_42 = ATgetArgument(v_42, 0);
      {
        ATerm z_42 = NULL,b_43 = NULL;
        ATerm a_43 = NULL;
        t = SSLgetAnnotations(not_null(v_42));
        {
          a_43 = t;
          if(((z_42 != NULL) && (z_42 != a_43)))
            _fail(a_43);
          else
            z_42 = a_43;
        }
        {
          t = not_null(w_42);
          {
            ATerm d_43 = NULL;
            t = a_57(t);
            {
              b_43 = t;
              {
                ATerm e_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_43)), not_null(z_42));
                {
                  e_43 = t;
                  if(((d_43 != NULL) && (d_43 != e_43)))
                    _fail(e_43);
                  else
                    d_43 = e_43;
                }
                t = not_null(d_43);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  p_43 = t;
  o_43 :
  if(match_cons(p_43, sym_Call_2))
    {
      q_43 = ATgetArgument(p_43, 0);
      r_43 = ATgetArgument(p_43, 1);
      {
        ATerm v_43 = NULL,x_43 = NULL;
        ATerm w_43 = NULL;
        t = SSLgetAnnotations(not_null(p_43));
        {
          w_43 = t;
          if(((v_43 != NULL) && (v_43 != w_43)))
            _fail(w_43);
          else
            v_43 = w_43;
        }
        {
          t = not_null(q_43);
          {
            ATerm z_43 = NULL;
            t = p_57(t);
            {
              x_43 = t;
              {
                t = not_null(r_43);
                {
                  ATerm b_44 = NULL;
                  t = q_57(t);
                  {
                    z_43 = t;
                    {
                      ATerm c_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(x_43), not_null(z_43)), not_null(v_43));
                      {
                        c_44 = t;
                        if(((b_44 != NULL) && (b_44 != c_44)))
                          _fail(c_44);
                        else
                          b_44 = c_44;
                      }
                      t = not_null(b_44);
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
ATerm LGChoice_2 (ATerm t, ATerm x_56 (ATerm), ATerm y_56 (ATerm))
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_LGChoice_2))
    {
      p_44 = ATgetArgument(o_44, 0);
      q_44 = ATgetArgument(o_44, 1);
      {
        ATerm u_44 = NULL,w_44 = NULL;
        ATerm v_44 = NULL;
        t = SSLgetAnnotations(not_null(o_44));
        {
          v_44 = t;
          if(((u_44 != NULL) && (u_44 != v_44)))
            _fail(v_44);
          else
            u_44 = v_44;
        }
        {
          t = not_null(p_44);
          {
            ATerm y_44 = NULL;
            t = x_56(t);
            {
              w_44 = t;
              {
                t = not_null(q_44);
                {
                  ATerm a_45 = NULL;
                  t = y_56(t);
                  {
                    y_44 = t;
                    {
                      ATerm b_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(w_44), not_null(y_44)), not_null(u_44));
                      {
                        b_45 = t;
                        if(((a_45 != NULL) && (a_45 != b_45)))
                          _fail(b_45);
                        else
                          a_45 = b_45;
                      }
                      t = not_null(a_45);
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
ATerm GChoice_2 (ATerm t, ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
  q_45 = t;
  p_45 :
  if(match_cons(q_45, sym_GChoice_2))
    {
      r_45 = ATgetArgument(q_45, 0);
      s_45 = ATgetArgument(q_45, 1);
      {
        ATerm y_45 = NULL,a_46 = NULL;
        ATerm z_45 = NULL;
        t = SSLgetAnnotations(not_null(q_45));
        {
          z_45 = t;
          if(((y_45 != NULL) && (y_45 != z_45)))
            _fail(z_45);
          else
            y_45 = z_45;
        }
        {
          t = not_null(r_45);
          {
            ATerm c_46 = NULL;
            t = v_56(t);
            {
              a_46 = t;
              {
                t = not_null(s_45);
                {
                  ATerm e_46 = NULL;
                  t = w_56(t);
                  {
                    c_46 = t;
                    {
                      ATerm f_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(a_46), not_null(c_46)), not_null(y_45));
                      {
                        f_46 = t;
                        if(((e_46 != NULL) && (e_46 != f_46)))
                          _fail(f_46);
                        else
                          e_46 = f_46;
                      }
                      t = not_null(e_46);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  u_46 = t;
  t_46 :
  if(match_cons(u_46, sym_GuardedLChoice_3))
    {
      v_46 = ATgetArgument(u_46, 0);
      w_46 = ATgetArgument(u_46, 1);
      x_46 = ATgetArgument(u_46, 2);
      {
        ATerm c_47 = NULL,e_47 = NULL;
        ATerm d_47 = NULL;
        t = SSLgetAnnotations(not_null(u_46));
        {
          d_47 = t;
          if(((c_47 != NULL) && (c_47 != d_47)))
            _fail(d_47);
          else
            c_47 = d_47;
        }
        {
          t = not_null(v_46);
          {
            ATerm g_47 = NULL;
            t = s_56(t);
            {
              e_47 = t;
              {
                t = not_null(w_46);
                {
                  ATerm i_47 = NULL;
                  t = t_56(t);
                  {
                    g_47 = t;
                    {
                      t = not_null(x_46);
                      {
                        ATerm k_47 = NULL;
                        t = u_56(t);
                        {
                          i_47 = t;
                          {
                            ATerm l_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(e_47), not_null(g_47), not_null(i_47)), not_null(c_47));
                            {
                              l_47 = t;
                              if(((k_47 != NULL) && (k_47 != l_47)))
                                _fail(l_47);
                              else
                                k_47 = l_47;
                            }
                            t = not_null(k_47);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
  y_47 = t;
  x_47 :
  if(match_cons(y_47, sym_LChoice_2))
    {
      z_47 = ATgetArgument(y_47, 0);
      a_48 = ATgetArgument(y_47, 1);
      {
        ATerm m_48 = NULL,r_48 = NULL;
        ATerm n_48 = NULL;
        t = SSLgetAnnotations(not_null(y_47));
        {
          n_48 = t;
          if(((m_48 != NULL) && (m_48 != n_48)))
            _fail(n_48);
          else
            m_48 = n_48;
        }
        {
          t = not_null(z_47);
          {
            ATerm t_48 = NULL;
            t = q_56(t);
            {
              r_48 = t;
              {
                t = not_null(a_48);
                {
                  ATerm x_48 = NULL;
                  t = r_56(t);
                  {
                    t_48 = t;
                    {
                      ATerm y_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(r_48), not_null(t_48)), not_null(m_48));
                      {
                        y_48 = t;
                        if(((x_48 != NULL) && (x_48 != y_48)))
                          _fail(y_48);
                        else
                          x_48 = y_48;
                      }
                      t = not_null(x_48);
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
ATerm Choice_2 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
  k_49 = t;
  j_49 :
  if(match_cons(k_49, sym_Choice_2))
    {
      l_49 = ATgetArgument(k_49, 0);
      m_49 = ATgetArgument(k_49, 1);
      {
        ATerm q_49 = NULL,s_49 = NULL;
        ATerm r_49 = NULL;
        t = SSLgetAnnotations(not_null(k_49));
        {
          r_49 = t;
          if(((q_49 != NULL) && (q_49 != r_49)))
            _fail(r_49);
          else
            q_49 = r_49;
        }
        {
          t = not_null(l_49);
          {
            ATerm u_49 = NULL;
            t = o_56(t);
            {
              s_49 = t;
              {
                t = not_null(m_49);
                {
                  ATerm w_49 = NULL;
                  t = p_56(t);
                  {
                    u_49 = t;
                    {
                      ATerm x_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(s_49), not_null(u_49)), not_null(q_49));
                      {
                        x_49 = t;
                        if(((w_49 != NULL) && (w_49 != x_49)))
                          _fail(x_49);
                        else
                          w_49 = x_49;
                      }
                      t = not_null(w_49);
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
ATerm Seq_2 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_cons(j_50, sym_Seq_2))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      {
        ATerm p_50 = NULL,r_50 = NULL;
        ATerm q_50 = NULL;
        t = SSLgetAnnotations(not_null(j_50));
        {
          q_50 = t;
          if(((p_50 != NULL) && (p_50 != q_50)))
            _fail(q_50);
          else
            p_50 = q_50;
        }
        {
          t = not_null(k_50);
          {
            ATerm t_50 = NULL;
            t = m_56(t);
            {
              r_50 = t;
              {
                t = not_null(l_50);
                {
                  ATerm v_50 = NULL;
                  t = n_56(t);
                  {
                    t_50 = t;
                    {
                      ATerm w_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(r_50), not_null(t_50)), not_null(p_50));
                      {
                        w_50 = t;
                        if(((v_50 != NULL) && (v_50 != w_50)))
                          _fail(w_50);
                        else
                          v_50 = w_50;
                      }
                      t = not_null(v_50);
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
ATerm Test_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm h_51 = NULL,i_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym_Test_1))
    {
      i_51 = ATgetArgument(h_51, 0);
      {
        ATerm l_51 = NULL,n_51 = NULL;
        ATerm m_51 = NULL;
        t = SSLgetAnnotations(not_null(h_51));
        {
          m_51 = t;
          if(((l_51 != NULL) && (l_51 != m_51)))
            _fail(m_51);
          else
            l_51 = m_51;
        }
        {
          t = not_null(i_51);
          {
            ATerm p_51 = NULL;
            t = k_56(t);
            {
              n_51 = t;
              {
                ATerm q_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(n_51)), not_null(l_51));
                {
                  q_51 = t;
                  if(((p_51 != NULL) && (p_51 != q_51)))
                    _fail(q_51);
                  else
                    p_51 = q_51;
                }
                t = not_null(p_51);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm a_52 = NULL,b_52 = NULL;
  a_52 = t;
  z_51 :
  if(match_cons(a_52, sym_Not_1))
    {
      b_52 = ATgetArgument(a_52, 0);
      {
        ATerm e_52 = NULL,g_52 = NULL;
        ATerm f_52 = NULL;
        t = SSLgetAnnotations(not_null(a_52));
        {
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
        }
        {
          t = not_null(b_52);
          {
            ATerm i_52 = NULL;
            t = l_56(t);
            {
              g_52 = t;
              {
                ATerm j_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(g_52)), not_null(e_52));
                {
                  j_52 = t;
                  if(((i_52 != NULL) && (i_52 != j_52)))
                    _fail(j_52);
                  else
                    i_52 = j_52;
                }
                t = not_null(i_52);
              }
            }
          }
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
  ATerm s_52 = NULL;
  s_52 = t;
  r_52 :
  if(match_cons(s_52, sym_Fail_0))
    {
      ATerm u_52 = NULL,w_52 = NULL;
      ATerm s_6;
      s_6 = t;
      {
        ATerm v_52 = NULL;
        t = SSLgetAnnotations(not_null(s_52));
        {
          v_52 = t;
          if(((u_52 != NULL) && (u_52 != v_52)))
            _fail(v_52);
          else
            u_52 = v_52;
        }
      }
      t = s_6;
      {
        ATerm x_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(u_52));
        {
          x_52 = t;
          if(((w_52 != NULL) && (w_52 != x_52)))
            _fail(x_52);
          else
            w_52 = x_52;
        }
        t = not_null(w_52);
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
  ATerm f_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_Id_0))
    {
      ATerm h_53 = NULL,j_53 = NULL;
      ATerm t_6;
      t_6 = t;
      {
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(f_53));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
      }
      t = t_6;
      {
        ATerm k_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(h_53));
        {
          k_53 = t;
          if(((j_53 != NULL) && (j_53 != k_53)))
            _fail(k_53);
          else
            j_53 = k_53;
        }
        t = not_null(j_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm w_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(x_6);
          }
        else
          {
            t = w_6;
            {
              ATerm y_6 = t;
              int z_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(z_6);
                }
              else
                {
                  t = y_6;
                  {
                    ATerm a_7 = t;
                    int b_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(d_7);
                            }
                          else
                            {
                              t = c_7;
                              {
                                ATerm e_7 = t;
                                int f_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(f_7);
                                  }
                                else
                                  {
                                    t = e_7;
                                    {
                                      ATerm g_7 = t;
                                      int h_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(h_7);
                                        }
                                      else
                                        {
                                          t = g_7;
                                          {
                                            ATerm i_7 = t;
                                            int j_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(j_7);
                                              }
                                            else
                                              {
                                                t = i_7;
                                                {
                                                  ATerm k_7 = t;
                                                  int l_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(l_7);
                                                    }
                                                  else
                                                    {
                                                      t = k_7;
                                                      {
                                                        ATerm m_7 = t;
                                                        int n_7 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(n_7);
                                                          }
                                                        else
                                                          {
                                                            t = m_7;
                                                            {
                                                              ATerm o_7 = t;
                                                              int p_7 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm a_1 (ATerm t)
                                                                  {
                                                                    ATerm b_1 (ATerm t)
                                                                    {
                                                                      ATerm c_1 (ATerm t)
                                                                      {
                                                                        t = SVar_1(t, is_string_0);
                                                                        return(t);
                                                                      }
                                                                      t = Call_2(t, c_1, Nil_0);
                                                                      return(t);
                                                                    }
                                                                    t = list_1(t, b_1);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, z_0, a_1);
                                                                  LocalPopChoice(p_7);
                                                                }
                                                              else
                                                                {
                                                                  t = o_7;
                                                                  {
                                                                    ATerm q_7 = t;
                                                                    int r_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(t_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_7;
                                                                              {
                                                                                ATerm u_7 = t;
                                                                                int v_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, d_1);
                                                                                    LocalPopChoice(v_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_7;
                                                                                    {
                                                                                      ATerm w_7 = t;
                                                                                      int x_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(z_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = y_7;
                                                                                                {
                                                                                                  ATerm a_8 = t;
                                                                                                  int b_8 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(b_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_8;
                                                                                                      {
                                                                                                        ATerm c_8 = t;
                                                                                                        int d_8 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            LocalPopChoice(d_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_8;
                                                                                                            {
                                                                                                              ATerm e_8 = t;
                                                                                                              int f_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  LocalPopChoice(f_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_8;
                                                                                                                  {
                                                                                                                    ATerm g_8 = t;
                                                                                                                    int h_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(h_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = g_8;
                                                                                                                        {
                                                                                                                          ATerm i_8 = t;
                                                                                                                          int j_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, e_1, strategy_expression_0);
                                                                                                                              LocalPopChoice(j_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_8;
                                                                                                                              {
                                                                                                                                ATerm k_8 = t;
                                                                                                                                int l_8 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(l_8);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = k_8;
                                                                                                                                    {
                                                                                                                                      ATerm m_8 = t;
                                                                                                                                      int n_8 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm f_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, f_1);
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
                                                                                                                                                ATerm g_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm h_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm i_1 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = VarDec_2(t, is_string_0, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, j_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_3(t, is_string_0, i_1, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, h_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, g_1, strategy_expression_0);
                                                                                                                                                LocalPopChoice(p_8);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = o_8;
                                                                                                                                                {
                                                                                                                                                  ATerm q_8 = t;
                                                                                                                                                  int r_8 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm k_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      ATerm l_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm m_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = list_1(t, m_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Case_4(t, is_string_0, k_1, l_1, strategy_expression_0);
                                                                                                                                                      LocalPopChoice(r_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = q_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm s_8 = t;
                                                                                                                                                        int t_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm n_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, n_1, term_expression_0);
                                                                                                                                                            LocalPopChoice(t_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = s_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm u_8 = t;
                                                                                                                                                              int v_8 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm o_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, o_1);
                                                                                                                                                                  LocalPopChoice(v_8);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = u_8;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm w_8 = t;
                                                                                                                                                                    int x_8 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        LocalPopChoice(x_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = w_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm p_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_y_8;
                                                                                                                                                                            return(t);
                                                                                                                                                                          }
                                                                                                                                                                          t = debug_1(t, p_1);
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm is_string_0 (ATerm t)
{
  ATerm q_53 = NULL;
  q_53 = t;
  t = SSL_is_string(not_null(q_53));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm i_57 (ATerm), ATerm j_57 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_VarDec_2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      {
        ATerm f_54 = NULL,h_54 = NULL;
        ATerm g_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
        {
          t = not_null(a_54);
          {
            ATerm j_54 = NULL;
            t = i_57(t);
            {
              h_54 = t;
              {
                t = not_null(b_54);
                {
                  ATerm l_54 = NULL;
                  t = j_57(t);
                  {
                    j_54 = t;
                    {
                      ATerm m_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_54), not_null(j_54)), not_null(f_54));
                      {
                        m_54 = t;
                        if(((l_54 != NULL) && (l_54 != m_54)))
                          _fail(m_54);
                        else
                          l_54 = m_54;
                      }
                      t = not_null(l_54);
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
ATerm SDef_3 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL;
  c_55 = t;
  b_55 :
  if(match_cons(c_55, sym_SDef_3))
    {
      d_55 = ATgetArgument(c_55, 0);
      e_55 = ATgetArgument(c_55, 1);
      f_55 = ATgetArgument(c_55, 2);
      {
        ATerm k_55 = NULL,m_55 = NULL;
        ATerm l_55 = NULL;
        t = SSLgetAnnotations(not_null(c_55));
        {
          l_55 = t;
          if(((k_55 != NULL) && (k_55 != l_55)))
            _fail(l_55);
          else
            k_55 = l_55;
        }
        {
          t = not_null(d_55);
          {
            ATerm o_55 = NULL;
            t = f_57(t);
            {
              m_55 = t;
              {
                t = not_null(e_55);
                {
                  ATerm q_55 = NULL;
                  t = g_57(t);
                  {
                    o_55 = t;
                    {
                      t = not_null(f_55);
                      {
                        ATerm t_55 = NULL;
                        t = h_57(t);
                        {
                          q_55 = t;
                          {
                            ATerm v_55 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(m_55), not_null(o_55), not_null(q_55)), not_null(k_55));
                            {
                              v_55 = t;
                              if(((t_55 != NULL) && (t_55 != v_55)))
                                _fail(v_55);
                              else
                                t_55 = v_55;
                            }
                            t = not_null(t_55);
                          }
                        }
                      }
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, r_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, q_1, strategy_expression_0);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_b_9;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm c_56 (ATerm t)
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = Cons_2(t, l_74, c_56);
      }
    return(t);
  }
  t = c_56(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm z_56 = NULL,k_57 = NULL;
  z_56 = t;
  h_56 :
  if(match_cons(z_56, sym_Strategies_1))
    {
      k_57 = ATgetArgument(z_56, 0);
      {
        ATerm n_57 = NULL,w_57 = NULL;
        ATerm o_57 = NULL;
        t = SSLgetAnnotations(not_null(z_56));
        {
          o_57 = t;
          if(((n_57 != NULL) && (n_57 != o_57)))
            _fail(o_57);
          else
            n_57 = o_57;
        }
        {
          t = not_null(k_57);
          {
            ATerm a_58 = NULL;
            t = s_55(t);
            {
              w_57 = t;
              {
                ATerm d_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_57)), not_null(n_57));
                {
                  d_58 = t;
                  if(((a_58 != NULL) && (a_58 != d_58)))
                    _fail(d_58);
                  else
                    a_58 = d_58;
                }
                t = not_null(a_58);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm u_58 = NULL,v_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_Specification_1))
    {
      v_58 = ATgetArgument(u_58, 0);
      {
        ATerm y_58 = NULL,a_59 = NULL;
        ATerm z_58 = NULL;
        t = SSLgetAnnotations(not_null(u_58));
        {
          z_58 = t;
          if(((y_58 != NULL) && (y_58 != z_58)))
            _fail(z_58);
          else
            y_58 = z_58;
        }
        {
          t = not_null(v_58);
          {
            ATerm c_59 = NULL;
            t = u_55(t);
            {
              a_59 = t;
              {
                ATerm d_59 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(a_59)), not_null(y_58));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, w_1);
            return(t);
          }
          t = Cons_2(t, v_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, u_1);
        return(t);
      }
      t = Specification_1(t, t_1);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = debug_1(t, x_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_46 (ATerm), ATerm s_46 (ATerm))
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL;
  o_59 = t;
  n_59 :
  if(match_cons(o_59, sym__2))
    {
      p_59 = ATgetArgument(o_59, 0);
      q_59 = ATgetArgument(o_59, 1);
      {
        ATerm u_59 = NULL,w_59 = NULL;
        ATerm v_59 = NULL;
        t = SSLgetAnnotations(not_null(o_59));
        {
          v_59 = t;
          if(((u_59 != NULL) && (u_59 != v_59)))
            _fail(v_59);
          else
            u_59 = v_59;
        }
        {
          t = not_null(p_59);
          {
            ATerm y_59 = NULL;
            t = r_46(t);
            {
              w_59 = t;
              {
                t = not_null(q_59);
                {
                  ATerm a_60 = NULL;
                  t = s_46(t);
                  {
                    y_59 = t;
                    {
                      ATerm b_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_59), not_null(y_59)), not_null(u_59));
                      {
                        b_60 = t;
                        if(((a_60 != NULL) && (a_60 != b_60)))
                          _fail(b_60);
                        else
                          a_60 = b_60;
                      }
                      t = not_null(a_60);
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
  ATerm j_60 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm k_60 = NULL,l_60 = NULL;
      k_60 = t;
      i_60 :
      if(match_cons(k_60, sym_Program_1))
        {
          l_60 = ATgetArgument(k_60, 0);
          if(((j_60 != NULL) && (j_60 != l_60)))
            _fail(l_60);
          else
            j_60 = l_60;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_9), not_null(j_60)), term_i_9));
      {
        t = printnl_0(t);
        {
          t = term_k_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_9;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATempty, term_l_9));
  {
    t = printnl_0(t);
    {
      t = term_k_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_60 = NULL;
  o_60 = t;
  t = SSL_TicksToSeconds(not_null(o_60));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  s_60 :
  if(match_cons(t_60, sym__2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_60), not_null(v_60));
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            t = SSL_addr(not_null(u_60), not_null(v_60));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm))
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_69(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
        c_61 = t;
        b_61 :
        if(((ATgetType(c_61) == AT_LIST) && ((ATermList) c_61 != ATempty)))
          {
            d_61 = ATgetFirst((ATermList) c_61);
            e_61 = (ATerm) ATgetNext((ATermList) c_61);
            {
              ATerm h_61 = NULL;
              ATerm i_61 = NULL;
              t = not_null(e_61);
              {
                t = foldr_2(t, b_69, c_69);
                {
                  i_61 = t;
                  if(((h_61 != NULL) && (h_61 != i_61)))
                    _fail(i_61);
                  else
                    h_61 = i_61;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_61), not_null(h_61));
                t = c_69(t);
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
ATerm crush_2 (ATerm t, ATerm p_70 (ATerm), ATerm q_70 (ATerm))
{
  ATerm p_61 = NULL;
  ATerm r_61 = NULL;
  p_61 = t;
  {
    ATerm s_61 = NULL;
    ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
    t = not_null(p_61);
    {
      s_61 = t;
      {
        t = SSL_explode_term(not_null(s_61));
        {
          u_61 = t;
          o_61 :
          if(match_cons(u_61, sym__2))
            {
              v_61 = ATgetArgument(u_61, 0);
              w_61 = ATgetArgument(u_61, 1);
              if(((r_61 != NULL) && (r_61 != w_61)))
                _fail(w_61);
              else
                r_61 = w_61;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_61);
      t = foldr_2(t, p_70, q_70);
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
    ATerm z_1 (ATerm t)
    {
      t = term_q_9;
      return(t);
    }
    t = crush_2(t, z_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm t_62 = NULL;
    ATerm b_2 (ATerm t)
    {
      ATerm r_9 = t;
      if((PushChoice() == 0))
        {
          ATerm c_2 (ATerm t)
          {
            ATerm o_62 = NULL;
            o_62 = t;
            a_62 :
            if(!(match_cons(o_62, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, c_2);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_9;
        }
      return(t);
    }
    t = _2(t, b_2, _id);
    {
      ATerm d_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm p_62 = NULL,q_62 = NULL;
          p_62 = t;
          c_62 :
          if(match_cons(p_62, sym_Runtime_1))
            {
              q_62 = ATgetArgument(p_62, 0);
              if(((m_62 != NULL) && (m_62 != q_62)))
                _fail(q_62);
              else
                m_62 = q_62;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_2);
        return(t);
      }
      t = _2(t, d_2, _id);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            ATerm r_62 = NULL,s_62 = NULL;
            r_62 = t;
            e_62 :
            if(match_cons(r_62, sym_Program_1))
              {
                s_62 = ATgetArgument(r_62, 0);
                if(((n_62 != NULL) && (n_62 != s_62)))
                  _fail(s_62);
                else
                  n_62 = s_62;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_2);
          return(t);
        }
        t = _2(t, f_2, _id);
        {
          ATerm u_62 = NULL;
          t = run_time_0(t);
          {
            u_62 = t;
            if(((t_62 != NULL) && (t_62 != u_62)))
              _fail(u_62);
            else
              t_62 = u_62;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_9), not_null(t_62)), term_s_9), not_null(n_62)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_2);
  {
    t = term_q_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
  a_63 = t;
  z_62 :
  if(match_cons(a_63, sym__2))
    {
      b_63 = ATgetArgument(a_63, 0);
      c_63 = ATgetArgument(a_63, 1);
      t = SSL_WriteToTextFile(not_null(b_63), not_null(c_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  i_63 :
  if(match_cons(j_63, sym__2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      t = SSL_WriteToBinaryFile(not_null(k_63), not_null(l_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_63 = NULL;
  ATerm u_9;
  u_9 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            ATerm u_63 = NULL,w_63 = NULL;
            u_63 = t;
            q_63 :
            if(match_cons(u_63, sym_Output_1))
              {
                w_63 = ATgetArgument(u_63, 0);
                if(((t_63 != NULL) && (t_63 != w_63)))
                  _fail(w_63);
                else
                  t_63 = w_63;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_2);
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm x_63 = NULL;
            t = term_x_9;
            {
              x_63 = t;
              if(((t_63 != NULL) && (t_63 != x_63)))
                _fail(x_63);
              else
                t_63 = x_63;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_2, _id);
  }
  t = u_9;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        t = not_null(t_63);
        return(t);
      }
      t = split_2(t, k_2, _id);
      return(t);
    }
    t = _2(t, _id, j_2);
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              ATerm a_64 = NULL;
              a_64 = t;
              s_63 :
              if(!(match_cons(a_64, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, m_2);
            return(t);
          }
          t = _2(t, l_2, WriteToBinaryFile_0);
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm j_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  ATerm a_10;
  a_10 = t;
  t = dtime_0(t);
  t = a_10;
  {
    t = q_64(t);
    {
      ATerm b_10;
      b_10 = t;
      {
        ATerm k_64 = NULL;
        t = dtime_0(t);
        {
          k_64 = t;
          if(((j_64 != NULL) && (j_64 != k_64)))
            _fail(k_64);
          else
            j_64 = k_64;
        }
      }
      t = b_10;
      {
        l_64 = t;
        i_64 :
        if(match_cons(l_64, sym__2))
          {
            m_64 = ATgetArgument(l_64, 0);
            n_64 = ATgetArgument(l_64, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_64)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_64))), not_null(n_64));
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
  ATerm v_64 = NULL;
  v_64 = t;
  t = SSL_ReadFromFile(not_null(v_64));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_67 (ATerm), ATerm q_67 (ATerm))
{
  ATerm a_65 = NULL,c_65 = NULL;
  ATerm c_10;
  c_10 = t;
  {
    ATerm b_65 = NULL;
    t = p_67(t);
    {
      b_65 = t;
      if(((a_65 != NULL) && (a_65 != b_65)))
        _fail(b_65);
      else
        a_65 = b_65;
    }
  }
  t = c_10;
  {
    ATerm d_65 = NULL;
    t = q_67(t);
    {
      d_65 = t;
      if(((c_65 != NULL) && (c_65 != d_65)))
        _fail(d_65);
      else
        c_65 = d_65;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_65), not_null(c_65));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_65 = NULL;
  ATerm d_10;
  d_10 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          ATerm l_65 = NULL,m_65 = NULL;
          l_65 = t;
          i_65 :
          if(match_cons(l_65, sym_Input_1))
            {
              m_65 = ATgetArgument(l_65, 0);
              if(((k_65 != NULL) && (k_65 != m_65)))
                _fail(m_65);
              else
                k_65 = m_65;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_2);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm n_65 = NULL;
          t = term_g_10;
          {
            n_65 = t;
            if(((k_65 != NULL) && (k_65 != n_65)))
              _fail(n_65);
            else
              k_65 = n_65;
          }
        }
      }
  }
  t = d_10;
  {
    ATerm o_2 (ATerm t)
    {
      t = not_null(k_65);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_65 = NULL;
  u_65 = t;
  t_65 :
  if(match_cons(u_65, sym_Version_0))
    {
      ATerm w_65 = NULL,y_65 = NULL;
      ATerm h_10;
      h_10 = t;
      {
        ATerm x_65 = NULL;
        t = SSLgetAnnotations(not_null(u_65));
        {
          x_65 = t;
          if(((w_65 != NULL) && (w_65 != x_65)))
            _fail(x_65);
          else
            w_65 = x_65;
        }
      }
      t = h_10;
      {
        ATerm z_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_65));
        {
          z_65 = t;
          if(((y_65 != NULL) && (y_65 != z_65)))
            _fail(z_65);
          else
            y_65 = z_65;
        }
        t = not_null(y_65);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_2);
  t = o_64(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_66 = NULL;
  e_66 = t;
  t = SSL_table_create(not_null(e_66));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  {
    ATerm m_10;
    m_10 = t;
    {
      t = term_n_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_10, term_o_10, not_null(i_66));
          t = table_put_0(t);
        }
      }
    }
    t = m_10;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      p_66 = ATgetArgument(n_66, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_10, not_null(o_66), not_null(p_66));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  y_66 = t;
  w_66 :
  if(match_string(y_66, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_66) == AT_LIST) && ((ATermList) y_66 != ATempty)))
        {
          z_66 = ATgetFirst((ATermList) y_66);
          a_67 = (ATerm) ATgetNext((ATermList) y_66);
          x_66 :
          if(((ATgetType(a_67) == AT_LIST) && ((ATermList) a_67 != ATempty)))
            {
              b_67 = ATgetFirst((ATermList) a_67);
              c_67 = (ATerm) ATgetNext((ATermList) a_67);
              {
                ATerm g_67 = NULL;
                ATerm q_10;
                q_10 = t;
                {
                  t = not_null(z_66);
                  t = j_0(t);
                }
                t = q_10;
                {
                  ATerm h_67 = NULL;
                  t = not_null(b_67);
                  {
                    t = k_0(t);
                    {
                      h_67 = t;
                      if(((g_67 != NULL) && (g_67 != h_67)))
                        _fail(h_67);
                      else
                        g_67 = h_67;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_67)), not_null(g_67));
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
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm b_68 = NULL;
        b_68 = t;
        l_67 :
        if(!(match_string(b_68, "-S")))
          {
            if(!(match_string(b_68, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_y_10;
        t = set_config_0(t);
        t = term_z_10;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_a_11;
        return(t);
      }
      t = Option_3(t, q_2, r_2, s_2);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm c_68 = NULL;
              c_68 = t;
              m_67 :
              if(!(match_string(c_68, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              t = term_e_11;
              t = set_config_0(t);
              t = term_f_11;
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_g_11;
              return(t);
            }
            t = Option_3(t, t_2, u_2, v_2);
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm d_68 = NULL;
                    d_68 = t;
                    n_67 :
                    if(!(match_string(d_68, "-v")))
                      {
                        if(!(match_string(d_68, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_2 (ATerm t)
                  {
                    t = term_k_11;
                    t = set_config_0(t);
                    t = term_l_11;
                    return(t);
                  }
                  ATerm y_2 (ATerm t)
                  {
                    t = term_m_11;
                    return(t);
                  }
                  t = Option_3(t, w_2, x_2, y_2);
                  LocalPopChoice(i_11);
                }
              else
                {
                  t = h_11;
                  {
                    ATerm n_11 = t;
                    int o_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_2 (ATerm t)
                        {
                          ATerm e_68 = NULL;
                          e_68 = t;
                          o_67 :
                          if(!(match_string(e_68, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_3 (ATerm t)
                        {
                          ATerm h_68 = NULL;
                          ATerm p_11;
                          p_11 = t;
                          {
                            ATerm f_68 = NULL;
                            ATerm g_68 = NULL;
                            g_68 = t;
                            if(((f_68 != NULL) && (f_68 != g_68)))
                              _fail(g_68);
                            else
                              f_68 = g_68;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(f_68));
                              t = set_config_0(t);
                            }
                          }
                          t = p_11;
                          {
                            ATerm i_68 = NULL;
                            i_68 = t;
                            if(((h_68 != NULL) && (h_68 != i_68)))
                              _fail(i_68);
                            else
                              h_68 = i_68;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(h_68));
                          }
                          return(t);
                        }
                        ATerm b_3 (ATerm t)
                        {
                          t = term_r_11;
                          return(t);
                        }
                        t = ArgOption_3(t, z_2, a_3, b_3);
                        LocalPopChoice(o_11);
                      }
                    else
                      {
                        t = n_11;
                        {
                          ATerm s_11 = t;
                          int t_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_3 (ATerm t)
                              {
                                ATerm j_68 = NULL;
                                j_68 = t;
                                t_67 :
                                if(!(match_string(j_68, "-i")))
                                  {
                                    if(!(match_string(j_68, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_3 (ATerm t)
                              {
                                ATerm m_68 = NULL;
                                ATerm u_11;
                                u_11 = t;
                                {
                                  ATerm k_68 = NULL;
                                  ATerm l_68 = NULL;
                                  l_68 = t;
                                  if(((k_68 != NULL) && (k_68 != l_68)))
                                    _fail(l_68);
                                  else
                                    k_68 = l_68;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(k_68));
                                    t = set_config_0(t);
                                  }
                                }
                                t = u_11;
                                {
                                  ATerm n_68 = NULL;
                                  n_68 = t;
                                  if(((m_68 != NULL) && (m_68 != n_68)))
                                    _fail(n_68);
                                  else
                                    m_68 = n_68;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_68));
                                }
                                return(t);
                              }
                              ATerm e_3 (ATerm t)
                              {
                                t = term_w_11;
                                return(t);
                              }
                              t = ArgOption_3(t, c_3, d_3, e_3);
                              LocalPopChoice(t_11);
                            }
                          else
                            {
                              t = s_11;
                              {
                                ATerm x_11 = t;
                                int y_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_3 (ATerm t)
                                    {
                                      ATerm o_68 = NULL;
                                      o_68 = t;
                                      w_67 :
                                      if(!(match_string(o_68, "-o")))
                                        {
                                          if(!(match_string(o_68, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm g_3 (ATerm t)
                                    {
                                      ATerm r_68 = NULL;
                                      ATerm z_11;
                                      z_11 = t;
                                      {
                                        ATerm p_68 = NULL;
                                        ATerm q_68 = NULL;
                                        q_68 = t;
                                        if(((p_68 != NULL) && (p_68 != q_68)))
                                          _fail(q_68);
                                        else
                                          p_68 = q_68;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(p_68));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = z_11;
                                      {
                                        ATerm s_68 = NULL;
                                        s_68 = t;
                                        if(((r_68 != NULL) && (r_68 != s_68)))
                                          _fail(s_68);
                                        else
                                          r_68 = s_68;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_68));
                                      }
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_b_12;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, f_3, g_3, h_3);
                                    LocalPopChoice(y_11);
                                  }
                                else
                                  {
                                    t = x_11;
                                    {
                                      ATerm c_12 = t;
                                      int d_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_3 (ATerm t)
                                          {
                                            ATerm t_68 = NULL;
                                            t_68 = t;
                                            z_67 :
                                            if(!(match_string(t_68, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_3 (ATerm t)
                                          {
                                            t = term_f_12;
                                            t = set_config_0(t);
                                            t = term_g_12;
                                            return(t);
                                          }
                                          ATerm k_3 (ATerm t)
                                          {
                                            t = term_h_12;
                                            return(t);
                                          }
                                          t = Option_3(t, i_3, j_3, k_3);
                                          LocalPopChoice(d_12);
                                        }
                                      else
                                        {
                                          t = c_12;
                                          {
                                            ATerm l_3 (ATerm t)
                                            {
                                              ATerm u_68 = NULL;
                                              u_68 = t;
                                              a_68 :
                                              if(!(match_string(u_68, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm m_3 (ATerm t)
                                            {
                                              t = term_j_12;
                                              t = set_config_0(t);
                                              t = term_k_12;
                                              return(t);
                                            }
                                            ATerm n_3 (ATerm t)
                                            {
                                              t = term_l_12;
                                              return(t);
                                            }
                                            t = Option_3(t, l_3, m_3, n_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm e_69 = NULL;
  e_69 = t;
  t = SSL_table_destroy(not_null(e_69));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_69 = NULL;
  i_69 = t;
  t = SSL_exit(not_null(i_69));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_69 = NULL;
  m_69 = t;
  t = SSL_implode_string(not_null(m_69));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm p_69 (ATerm t)
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_69);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        {
          t = Nil_0(t);
          t = x_74(t);
        }
      }
    return(t);
  }
  t = p_69(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
        s_69 = t;
        r_69 :
        if(((ATgetType(s_69) == AT_LIST) && ((ATermList) s_69 != ATempty)))
          {
            t_69 = ATgetFirst((ATermList) s_69);
            u_69 = (ATerm) ATgetNext((ATermList) s_69);
            {
              t = not_null(t_69);
              {
                ATerm o_3 (ATerm t)
                {
                  t = not_null(u_69);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_3);
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
  ATerm a_70 = NULL;
  a_70 = t;
  t = SSL_explode_string(not_null(a_70));
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
ATerm long_description_1 (ATerm t, ATerm h_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm d_70 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = Cons_2(t, j_74, d_70);
      }
    return(t);
  }
  t = d_70(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  m_70 = t;
  j_70 :
  if(((ATgetType(m_70) == AT_LIST) && ((ATermList) m_70 != ATempty)))
    {
      k_70 = ATgetFirst((ATermList) m_70);
      l_70 = (ATerm) ATgetNext((ATermList) m_70);
      {
        ATerm r_70 = NULL;
        t = not_null(l_70);
        {
          ATerm s_12;
          s_12 = t;
          {
            ATerm s_70 = NULL,u_70 = NULL,w_70 = NULL;
            ATerm t_12;
            t_12 = t;
            {
              ATerm t_70 = NULL;
              t = i_0(t);
              {
                t_70 = t;
                if(((s_70 != NULL) && (s_70 != t_70)))
                  _fail(t_70);
                else
                  s_70 = t_70;
              }
            }
            t = t_12;
            {
              ATerm v_70 = NULL;
              t = not_null(k_70);
              {
                t = f_0(t);
                {
                  v_70 = t;
                  if(((u_70 != NULL) && (u_70 != v_70)))
                    _fail(v_70);
                  else
                    u_70 = v_70;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_70)), not_null(u_70));
                {
                  w_70 = t;
                  if(((r_70 != NULL) && (r_70 != w_70)))
                    _fail(w_70);
                  else
                    r_70 = w_70;
                }
              }
            }
          }
          t = s_12;
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(r_70);
              return(t);
            }
            t = reverse_acc_2(t, f_0, p_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) m_70 == ATempty))
        {
          {
            t = term_x_10;
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
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_48 (ATerm))
{
  ATerm h_71 = NULL,i_71 = NULL;
  h_71 = t;
  g_71 :
  if(match_cons(h_71, sym_Program_1))
    {
      i_71 = ATgetArgument(h_71, 0);
      {
        ATerm l_71 = NULL,n_71 = NULL;
        ATerm m_71 = NULL;
        t = SSLgetAnnotations(not_null(h_71));
        {
          m_71 = t;
          if(((l_71 != NULL) && (l_71 != m_71)))
            _fail(m_71);
          else
            l_71 = m_71;
        }
        {
          t = not_null(i_71);
          {
            ATerm p_71 = NULL;
            t = u_48(t);
            {
              n_71 = t;
              {
                ATerm q_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_71)), not_null(l_71));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_71 = NULL;
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      ATerm a_72 = NULL;
      a_72 = t;
      if(((z_71 != NULL) && (z_71 != a_72)))
        _fail(a_72);
      else
        z_71 = a_72;
      return(t);
    }
    t = Program_1(t, s_3);
    return(t);
  }
  t = option_defined_1(t, r_3);
  {
    ATerm t_3 (ATerm t)
    {
      ATerm b_72 = NULL;
      ATerm c_72 = NULL;
      t = term_x_10;
      {
        ATerm u_3 (ATerm t)
        {
          t = not_null(z_71);
          return(t);
        }
        t = short_description_1(t, u_3);
        {
          t = concat_strings_0(t);
          {
            c_72 = t;
            if(((b_72 != NULL) && (b_72 != c_72)))
              _fail(c_72);
            else
              b_72 = c_72;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATempty, not_null(b_72)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATempty, term_u_12));
      {
        t = printnl_0(t);
        {
          t = term_x_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm d_72 = NULL;
                  d_72 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_72)), term_y_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_3);
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm f_72 = NULL;
                    ATerm g_72 = NULL;
                    t = term_x_10;
                    {
                      ATerm x_3 (ATerm t)
                      {
                        t = not_null(z_71);
                        return(t);
                      }
                      t = long_description_1(t, x_3);
                      {
                        t = concat_strings_0(t);
                        {
                          g_72 = t;
                          if(((f_72 != NULL) && (f_72 != g_72)))
                            _fail(g_72);
                          else
                            f_72 = g_72;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_72)), term_z_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_3);
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
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
  n_72 = t;
  m_72 :
  if(match_cons(n_72, sym__2))
    {
      o_72 = ATgetArgument(n_72, 0);
      p_72 = ATgetArgument(n_72, 1);
      {
        ATerm a_13;
        a_13 = t;
        t = SSL_printnl(not_null(o_72), not_null(p_72));
        t = a_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_48 (ATerm))
{
  ATerm y_72 = NULL,z_72 = NULL;
  y_72 = t;
  x_72 :
  if(match_cons(y_72, sym_Undefined_1))
    {
      z_72 = ATgetArgument(y_72, 0);
      {
        ATerm c_73 = NULL,e_73 = NULL;
        ATerm d_73 = NULL;
        t = SSLgetAnnotations(not_null(y_72));
        {
          d_73 = t;
          if(((c_73 != NULL) && (c_73 != d_73)))
            _fail(d_73);
          else
            c_73 = d_73;
        }
        {
          t = not_null(z_72);
          {
            ATerm g_73 = NULL;
            t = v_48(t);
            {
              e_73 = t;
              {
                ATerm h_73 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_73)), not_null(c_73));
                {
                  h_73 = t;
                  if(((g_73 != NULL) && (g_73 != h_73)))
                    _fail(h_73);
                  else
                    g_73 = h_73;
                }
                t = not_null(g_73);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm m_73 (ATerm t)
  {
    ATerm b_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_74, _id);
        LocalPopChoice(f_13);
      }
    else
      {
        t = b_13;
        t = Cons_2(t, _id, m_73);
      }
    return(t);
  }
  t = m_73(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_63 (ATerm))
{
  t = fetch_1(t, f_63);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym_Help_0))
    {
      ATerm t_73 = NULL,v_73 = NULL;
      ATerm g_13;
      g_13 = t;
      {
        ATerm u_73 = NULL;
        t = SSLgetAnnotations(not_null(r_73));
        {
          u_73 = t;
          if(((t_73 != NULL) && (t_73 != u_73)))
            _fail(u_73);
          else
            t_73 = u_73;
        }
      }
      t = g_13;
      {
        ATerm w_73 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_73));
        {
          w_73 = t;
          if(((v_73 != NULL) && (v_73 != w_73)))
            _fail(w_73);
          else
            v_73 = w_73;
        }
        t = not_null(v_73);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_81(t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
  c_74 = t;
  b_74 :
  if(match_cons(c_74, sym__2))
    {
      d_74 = ATgetArgument(c_74, 0);
      e_74 = ATgetArgument(c_74, 1);
      t = SSL_table_get(not_null(d_74), not_null(e_74));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,t_74 = NULL,u_74 = NULL;
  p_74 = t;
  o_74 :
  if(match_cons(p_74, sym__3))
    {
      q_74 = ATgetArgument(p_74, 0);
      t_74 = ATgetArgument(p_74, 1);
      u_74 = ATgetArgument(p_74, 2);
      {
        ATerm j_13;
        j_13 = t;
        {
          ATerm a_75 = NULL;
          ATerm b_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_74), not_null(t_74));
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
                t = (ATerm) ATempty;
              }
            {
              b_75 = t;
              if(((a_75 != NULL) && (a_75 != b_75)))
                _fail(b_75);
              else
                a_75 = b_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_74), not_null(t_74), (ATerm) ATinsert(CheckATermList(not_null(a_75)), not_null(u_74)));
            t = table_put_0(t);
          }
        }
        t = j_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm f_75 = NULL;
  ATerm g_75 = NULL;
  t = term_x_10;
  {
    t = l_62(t);
    {
      g_75 = t;
      if(((f_75 != NULL) && (f_75 != g_75)))
        _fail(g_75);
      else
        f_75 = g_75;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_12, term_w_12, not_null(f_75));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  l_75 :
  if(match_string(m_75, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(m_75) == AT_LIST) && ((ATermList) m_75 != ATempty)))
        {
          n_75 = ATgetFirst((ATermList) m_75);
          o_75 = (ATerm) ATgetNext((ATermList) m_75);
          {
            ATerm r_75 = NULL;
            ATerm m_13;
            m_13 = t;
            {
              t = not_null(n_75);
              t = a_0(t);
            }
            t = m_13;
            {
              ATerm s_75 = NULL;
              t = term_x_10;
              {
                t = b_0(t);
                {
                  s_75 = t;
                  if(((r_75 != NULL) && (r_75 != s_75)))
                    _fail(s_75);
                  else
                    r_75 = s_75;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_75)), not_null(r_75));
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
  ATerm y_3 (ATerm t)
  {
    ATerm x_75 = NULL;
    x_75 = t;
    w_75 :
    if(!(match_string(x_75, "--help")))
      {
        if(!(match_string(x_75, "-h")))
          {
            if(!(match_string(x_75, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_o_13;
    return(t);
  }
  t = Option_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
  b_76 = t;
  z_75 :
  if(((ATgetType(b_76) == AT_LIST) && ((ATermList) b_76 != ATempty)))
    {
      c_76 = ATgetFirst((ATermList) b_76);
      d_76 = (ATerm) ATgetNext((ATermList) b_76);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_76)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_58 (ATerm), ATerm n_58 (ATerm))
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
  n_76 = t;
  m_76 :
  if(((ATgetType(n_76) == AT_LIST) && ((ATermList) n_76 != ATempty)))
    {
      o_76 = ATgetFirst((ATermList) n_76);
      p_76 = (ATerm) ATgetNext((ATermList) n_76);
      {
        ATerm t_76 = NULL,v_76 = NULL;
        ATerm u_76 = NULL;
        t = SSLgetAnnotations(not_null(n_76));
        {
          u_76 = t;
          if(((t_76 != NULL) && (t_76 != u_76)))
            _fail(u_76);
          else
            t_76 = u_76;
        }
        {
          t = not_null(o_76);
          {
            ATerm x_76 = NULL;
            t = m_58(t);
            {
              v_76 = t;
              {
                t = not_null(p_76);
                {
                  ATerm z_76 = NULL;
                  t = n_58(t);
                  {
                    x_76 = t;
                    {
                      ATerm a_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_76)), not_null(v_76)), not_null(t_76));
                      {
                        a_77 = t;
                        if(((z_76 != NULL) && (z_76 != a_77)))
                          _fail(a_77);
                        else
                          z_76 = a_77;
                      }
                      t = not_null(z_76);
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
  ATerm k_77 = NULL;
  k_77 = t;
  j_77 :
  if(((ATermList) k_77 == ATempty))
    {
      {
        ATerm m_77 = NULL,o_77 = NULL;
        ATerm p_13;
        p_13 = t;
        {
          ATerm n_77 = NULL;
          t = SSLgetAnnotations(not_null(k_77));
          {
            n_77 = t;
            if(((m_77 != NULL) && (m_77 != n_77)))
              _fail(n_77);
            else
              m_77 = n_77;
          }
        }
        t = p_13;
        {
          ATerm p_77 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_77));
          {
            p_77 = t;
            if(((o_77 != NULL) && (o_77 != p_77)))
              _fail(p_77);
            else
              o_77 = p_77;
          }
          t = not_null(o_77);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm q_13;
  q_13 = t;
  {
    ATerm b_4 (ATerm t)
    {
      t = term_s_13;
      t = j_62(t);
      return(t);
    }
    t = try_1(t, b_4);
  }
  t = q_13;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm u_77 = NULL;
      u_77 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_77));
      return(t);
    }
    ATerm d_4 (ATerm t)
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_14);
            }
          else
            {
              t = x_13;
              {
                t = j_62(t);
                t = Cons_2(t, _id, d_4);
              }
            }
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_4, d_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
    d_78 = t;
    z_77 :
    if(match_cons(d_78, sym__3))
      {
        e_78 = ATgetArgument(d_78, 0);
        f_78 = ATgetArgument(d_78, 1);
        g_78 = ATgetArgument(d_78, 2);
        {
          if(((a_78 != NULL) && (a_78 != e_78)))
            _fail(e_78);
          else
            a_78 = e_78;
          {
            if(((b_78 != NULL) && (b_78 != f_78)))
              _fail(f_78);
            else
              b_78 = f_78;
            {
              if(((c_78 != NULL) && (c_78 != g_78)))
                _fail(g_78);
              else
                c_78 = g_78;
              t = SSL_table_put(not_null(a_78), not_null(b_78), not_null(c_78));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm j_78 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    t = term_d_14;
    t = table_put_0(t);
  }
  t = c_14;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_62(t);
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_4);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            {
              ATerm g_4 (ATerm t)
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm k_78 = NULL;
                  k_78 = t;
                  if(((j_78 != NULL) && (j_78 != k_78)))
                    _fail(k_78);
                  else
                    j_78 = k_78;
                  return(t);
                }
                t = Undefined_1(t, h_4);
                return(t);
              }
              t = option_defined_1(t, g_4);
              {
                ATerm i_14;
                i_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_78)), term_j_14));
                  t = printnl_0(t);
                }
                t = i_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_4);
      {
        ATerm k_14;
        k_14 = t;
        {
          t = term_v_12;
          t = table_destroy_0(t);
        }
        t = k_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm f_64 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm l_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_64(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = l_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_4);
  {
    t = store_options_0(t);
    {
      ATerm q_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, f_64);
          LocalPopChoice(u_14);
        }
      else
        {
          t = q_14;
          {
            ATerm x_14 = t;
            int y_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, d_64);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(y_14);
              }
            else
              {
                t = x_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_63 (ATerm), ATerm z_63 (ATerm))
{
  t = iowrap_3(t, y_63, z_63, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    t = _2(t, _id, v_63);
    return(t);
  }
  t = iowrap_2(t, j_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
