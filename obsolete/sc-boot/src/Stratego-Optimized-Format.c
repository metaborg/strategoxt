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
Symbol sym_CUT_0;
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_q_12;
ATerm term_i_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_t_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_i_7;
ATerm term_v_4;
ATerm term_x_3;
void init_constant_terms (void)
{
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_h_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_h_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_h_9);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_h_9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__3, term_i_11, term_j_11, (ATerm) ATempty);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm a_65 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm f_53 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm r_54 (ATerm));
ATerm Op_2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm c_53 (ATerm));
ATerm Alt_3 (ATerm, ATerm z_52 (ATerm), ATerm a_53 (ATerm), ATerm b_53 (ATerm));
ATerm Case_4 (ATerm, ATerm s_52 (ATerm), ATerm t_52 (ATerm), ATerm u_52 (ATerm), ATerm v_52 (ATerm));
ATerm Let_2 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm Prim_2 (ATerm, ATerm g_58 (ATerm), ATerm h_58 (ATerm));
ATerm Where_1 (ATerm, ATerm f_58 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm Build_1 (ATerm, ATerm a_58 (ATerm));
ATerm Thread_1 (ATerm, ATerm w_57 (ATerm));
ATerm All_1 (ATerm, ATerm v_57 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm t_57 (ATerm));
ATerm Cong_2 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm));
ATerm Path_2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_56 (ATerm), ATerm a_57 (ATerm));
ATerm SVar_1 (ATerm, ATerm y_56 (ATerm));
ATerm Call_2 (ATerm, ATerm n_57 (ATerm), ATerm o_57 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm GChoice_2 (ATerm, ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm s_56 (ATerm));
ATerm LChoice_2 (ATerm, ATerm o_56 (ATerm), ATerm p_56 (ATerm));
ATerm Choice_2 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm Seq_2 (ATerm, ATerm k_56 (ATerm), ATerm l_56 (ATerm));
ATerm Test_1 (ATerm, ATerm i_56 (ATerm));
ATerm Not_1 (ATerm, ATerm j_56 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm m_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm h_74 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm p_46 (ATerm), ATerm q_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_68 (ATerm), ATerm y_68 (ATerm));
ATerm crush_2 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_64 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_67 (ATerm), ATerm m_67 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_64 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_62 (ATerm));
ATerm map_1 (ATerm, ATerm f_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_62 (ATerm));
ATerm Program_1 (ATerm, ATerm y_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_62 (ATerm));
ATerm iowrap_3 (ATerm, ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm b_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_63 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm v_3;
  v_3 = t;
  {
    ATerm w_2 = NULL,b_10 = NULL;
    ATerm w_3;
    w_3 = t;
    {
      ATerm a_10 = NULL;
      t = a_65(t);
      {
        a_10 = t;
        if(((w_2 != NULL) && (w_2 != a_10)))
          _fail(a_10);
        else
          w_2 = a_10;
      }
    }
    t = w_3;
    {
      ATerm c_10 = NULL;
      c_10 = t;
      if(((b_10 != NULL) && (b_10 != c_10)))
        _fail(c_10);
      else
        b_10 = c_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_10)), not_null(w_2)));
        t = printnl_0(t);
      }
    }
  }
  t = v_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm l_12 = NULL,w_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_Var_1))
    {
      w_12 = ATgetArgument(l_12, 0);
      {
        ATerm y_3 = t;
        int z_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL,e_13 = NULL;
            ATerm d_13 = NULL;
            t = SSLgetAnnotations(not_null(l_12));
            {
              d_13 = t;
              if(((c_13 != NULL) && (c_13 != d_13)))
                _fail(d_13);
              else
                c_13 = d_13;
            }
            {
              t = not_null(w_12);
              {
                ATerm g_13 = NULL;
                t = s_0(t);
                {
                  e_13 = t;
                  {
                    ATerm h_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_13)), not_null(c_13));
                    {
                      h_13 = t;
                      if(((g_13 != NULL) && (g_13 != h_13)))
                        _fail(h_13);
                      else
                        g_13 = h_13;
                    }
                    t = not_null(g_13);
                  }
                }
              }
            }
            LocalPopChoice(z_3);
          }
        else
          {
            t = y_3;
            {
              ATerm k_13 = NULL,m_13 = NULL;
              ATerm l_13 = NULL;
              t = SSLgetAnnotations(not_null(l_12));
              {
                l_13 = t;
                if(((k_13 != NULL) && (k_13 != l_13)))
                  _fail(l_13);
                else
                  k_13 = l_13;
              }
              {
                t = not_null(w_12);
                {
                  ATerm o_13 = NULL;
                  t = s_0(t);
                  {
                    m_13 = t;
                    {
                      ATerm p_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_13)), not_null(k_13));
                      {
                        p_13 = t;
                        if(((o_13 != NULL) && (o_13 != p_13)))
                          _fail(p_13);
                        else
                          o_13 = p_13;
                      }
                      t = not_null(o_13);
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
ATerm Assign_1 (ATerm t, ATerm f_53 (ATerm))
{
  ATerm d_14 = NULL,e_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym_Assign_1))
    {
      e_14 = ATgetArgument(d_14, 0);
      {
        ATerm h_14 = NULL,j_14 = NULL;
        ATerm i_14 = NULL;
        t = SSLgetAnnotations(not_null(d_14));
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
        {
          t = not_null(e_14);
          {
            ATerm l_14 = NULL;
            t = f_53(t);
            {
              j_14 = t;
              {
                ATerm m_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(j_14)), not_null(h_14));
                {
                  m_14 = t;
                  if(((l_14 != NULL) && (l_14 != m_14)))
                    _fail(m_14);
                  else
                    l_14 = m_14;
                }
                t = not_null(l_14);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_BuildDefault_1))
    {
      x_14 = ATgetArgument(w_14, 0);
      {
        ATerm a_15 = NULL,c_15 = NULL;
        ATerm b_15 = NULL;
        t = SSLgetAnnotations(not_null(w_14));
        {
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
        }
        {
          t = not_null(x_14);
          {
            ATerm e_15 = NULL;
            t = r_54(t);
            {
              c_15 = t;
              {
                ATerm f_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(c_15)), not_null(a_15));
                {
                  f_15 = t;
                  if(((e_15 != NULL) && (e_15 != f_15)))
                    _fail(f_15);
                  else
                    e_15 = f_15;
                }
                t = not_null(e_15);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_Op_2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      {
        ATerm w_15 = NULL,y_15 = NULL;
        ATerm x_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          x_15 = t;
          if(((w_15 != NULL) && (w_15 != x_15)))
            _fail(x_15);
          else
            w_15 = x_15;
        }
        {
          t = not_null(r_15);
          {
            ATerm a_16 = NULL;
            t = g_56(t);
            {
              y_15 = t;
              {
                t = not_null(s_15);
                {
                  ATerm c_16 = NULL;
                  t = h_56(t);
                  {
                    a_16 = t;
                    {
                      ATerm d_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(y_15), not_null(a_16)), not_null(w_15));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Str_1))
    {
      t_16 = ATgetArgument(s_16, 0);
      {
        ATerm a_4 = t;
        int b_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_16 = NULL,y_16 = NULL;
            ATerm x_16 = NULL;
            t = SSLgetAnnotations(not_null(s_16));
            {
              x_16 = t;
              if(((w_16 != NULL) && (w_16 != x_16)))
                _fail(x_16);
              else
                w_16 = x_16;
            }
            {
              t = not_null(t_16);
              {
                ATerm a_17 = NULL;
                t = r_0(t);
                {
                  y_16 = t;
                  {
                    ATerm b_17 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(y_16)), not_null(w_16));
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
            LocalPopChoice(b_4);
          }
        else
          {
            t = a_4;
            {
              ATerm e_17 = NULL,g_17 = NULL;
              ATerm f_17 = NULL;
              t = SSLgetAnnotations(not_null(s_16));
              {
                f_17 = t;
                if(((e_17 != NULL) && (e_17 != f_17)))
                  _fail(f_17);
                else
                  e_17 = f_17;
              }
              {
                t = not_null(t_16);
                {
                  ATerm i_17 = NULL;
                  t = r_0(t);
                  {
                    g_17 = t;
                    {
                      ATerm j_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(g_17)), not_null(e_17));
                      {
                        j_17 = t;
                        if(((i_17 != NULL) && (i_17 != j_17)))
                          _fail(j_17);
                        else
                          i_17 = j_17;
                      }
                      t = not_null(i_17);
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
  ATerm t_17 = NULL;
  t_17 = t;
  t = SSL_is_real(not_null(t_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_Real_1))
    {
      g_18 = ATgetArgument(f_18, 0);
      {
        ATerm c_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_18 = NULL,l_18 = NULL;
            ATerm k_18 = NULL;
            t = SSLgetAnnotations(not_null(f_18));
            {
              k_18 = t;
              if(((j_18 != NULL) && (j_18 != k_18)))
                _fail(k_18);
              else
                j_18 = k_18;
            }
            {
              t = not_null(g_18);
              {
                ATerm n_18 = NULL;
                t = q_0(t);
                {
                  l_18 = t;
                  {
                    ATerm o_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(l_18)), not_null(j_18));
                    {
                      o_18 = t;
                      if(((n_18 != NULL) && (n_18 != o_18)))
                        _fail(o_18);
                      else
                        n_18 = o_18;
                    }
                    t = not_null(n_18);
                  }
                }
              }
            }
            LocalPopChoice(d_4);
          }
        else
          {
            t = c_4;
            {
              ATerm r_18 = NULL,t_18 = NULL;
              ATerm s_18 = NULL;
              t = SSLgetAnnotations(not_null(f_18));
              {
                s_18 = t;
                if(((r_18 != NULL) && (r_18 != s_18)))
                  _fail(s_18);
                else
                  r_18 = s_18;
              }
              {
                t = not_null(g_18);
                {
                  ATerm v_18 = NULL;
                  t = q_0(t);
                  {
                    t_18 = t;
                    {
                      ATerm w_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(t_18)), not_null(r_18));
                      {
                        w_18 = t;
                        if(((v_18 != NULL) && (v_18 != w_18)))
                          _fail(w_18);
                        else
                          v_18 = w_18;
                      }
                      t = not_null(v_18);
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
ATerm Int_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Int_1))
    {
      p_19 = ATgetArgument(o_19, 0);
      {
        ATerm e_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19 = NULL,u_19 = NULL;
            ATerm t_19 = NULL;
            t = SSLgetAnnotations(not_null(o_19));
            {
              t_19 = t;
              if(((s_19 != NULL) && (s_19 != t_19)))
                _fail(t_19);
              else
                s_19 = t_19;
            }
            {
              t = not_null(p_19);
              {
                ATerm w_19 = NULL;
                t = p_0(t);
                {
                  u_19 = t;
                  {
                    ATerm x_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(u_19)), not_null(s_19));
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
            LocalPopChoice(f_4);
          }
        else
          {
            t = e_4;
            {
              ATerm a_20 = NULL,c_20 = NULL;
              ATerm b_20 = NULL;
              t = SSLgetAnnotations(not_null(o_19));
              {
                b_20 = t;
                if(((a_20 != NULL) && (a_20 != b_20)))
                  _fail(b_20);
                else
                  a_20 = b_20;
              }
              {
                t = not_null(p_19);
                {
                  ATerm e_20 = NULL;
                  t = p_0(t);
                  {
                    c_20 = t;
                    {
                      ATerm f_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(c_20)), not_null(a_20));
                      {
                        f_20 = t;
                        if(((e_20 != NULL) && (e_20 != f_20)))
                          _fail(f_20);
                        else
                          e_20 = f_20;
                      }
                      t = not_null(e_20);
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
  ATerm s_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym_Wld_0))
    {
      ATerm u_20 = NULL,w_20 = NULL;
      ATerm g_4;
      g_4 = t;
      {
        ATerm v_20 = NULL;
        t = SSLgetAnnotations(not_null(s_20));
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
      }
      t = g_4;
      {
        ATerm x_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(u_20));
        {
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
        }
        t = not_null(w_20);
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
  ATerm h_4 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(i_4);
    }
  else
    {
      t = h_4;
      {
        ATerm j_4 = t;
        int k_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(k_4);
          }
        else
          {
            t = j_4;
            {
              ATerm l_4 = t;
              int m_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(m_4);
                }
              else
                {
                  t = l_4;
                  {
                    ATerm n_4 = t;
                    int o_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(o_4);
                      }
                    else
                      {
                        t = n_4;
                        {
                          ATerm p_4 = t;
                          int q_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    ATerm c_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, c_0);
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
                                          t = BuildDefault_1(t, term_expression_0);
                                          LocalPopChoice(u_4);
                                        }
                                      else
                                        {
                                          t = t_4;
                                          {
                                            ATerm d_0 (ATerm t)
                                            {
                                              t = term_v_4;
                                              return(t);
                                            }
                                            t = debug_1(t, d_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym_Assign_2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      {
        ATerm w_4 = t;
        int x_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_21 = NULL,v_21 = NULL;
            ATerm u_21 = NULL;
            t = SSLgetAnnotations(not_null(n_21));
            {
              u_21 = t;
              if(((t_21 != NULL) && (t_21 != u_21)))
                _fail(u_21);
              else
                t_21 = u_21;
            }
            {
              t = not_null(o_21);
              {
                ATerm x_21 = NULL;
                t = n_0(t);
                {
                  v_21 = t;
                  {
                    t = not_null(p_21);
                    {
                      ATerm z_21 = NULL;
                      t = o_0(t);
                      {
                        x_21 = t;
                        {
                          ATerm a_22 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(v_21), not_null(x_21)), not_null(t_21));
                          {
                            a_22 = t;
                            if(((z_21 != NULL) && (z_21 != a_22)))
                              _fail(a_22);
                            else
                              z_21 = a_22;
                          }
                          t = not_null(z_21);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(x_4);
          }
        else
          {
            t = w_4;
            {
              ATerm e_22 = NULL,g_22 = NULL;
              ATerm f_22 = NULL;
              t = SSLgetAnnotations(not_null(n_21));
              {
                f_22 = t;
                if(((e_22 != NULL) && (e_22 != f_22)))
                  _fail(f_22);
                else
                  e_22 = f_22;
              }
              {
                t = not_null(o_21);
                {
                  ATerm i_22 = NULL;
                  t = n_0(t);
                  {
                    g_22 = t;
                    {
                      t = not_null(p_21);
                      {
                        ATerm k_22 = NULL;
                        t = o_0(t);
                        {
                          i_22 = t;
                          {
                            ATerm l_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(g_22), not_null(i_22)), not_null(e_22));
                            {
                              l_22 = t;
                              if(((k_22 != NULL) && (k_22 != l_22)))
                                _fail(l_22);
                              else
                                k_22 = l_22;
                            }
                            t = not_null(k_22);
                          }
                        }
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
ATerm Continue_1 (ATerm t, ATerm c_53 (ATerm))
{
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym_Continue_1))
    {
      c_23 = ATgetArgument(b_23, 0);
      {
        ATerm f_23 = NULL,h_23 = NULL;
        ATerm g_23 = NULL;
        t = SSLgetAnnotations(not_null(b_23));
        {
          g_23 = t;
          if(((f_23 != NULL) && (f_23 != g_23)))
            _fail(g_23);
          else
            f_23 = g_23;
        }
        {
          t = not_null(c_23);
          {
            ATerm q_23 = NULL;
            t = c_53(t);
            {
              h_23 = t;
              {
                ATerm r_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(h_23)), not_null(f_23));
                {
                  r_23 = t;
                  if(((q_23 != NULL) && (q_23 != r_23)))
                    _fail(r_23);
                  else
                    q_23 = r_23;
                }
                t = not_null(q_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm z_52 (ATerm), ATerm a_53 (ATerm), ATerm b_53 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_Alt_3))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      j_24 = ATgetArgument(g_24, 2);
      {
        ATerm o_24 = NULL,q_24 = NULL;
        ATerm p_24 = NULL;
        t = SSLgetAnnotations(not_null(g_24));
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
        {
          t = not_null(h_24);
          {
            ATerm s_24 = NULL;
            t = z_52(t);
            {
              q_24 = t;
              {
                t = not_null(i_24);
                {
                  ATerm u_24 = NULL;
                  t = a_53(t);
                  {
                    s_24 = t;
                    {
                      t = not_null(j_24);
                      {
                        ATerm w_24 = NULL;
                        t = b_53(t);
                        {
                          u_24 = t;
                          {
                            ATerm y_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(q_24), not_null(s_24), not_null(u_24)), not_null(o_24));
                            {
                              y_24 = t;
                              if(((w_24 != NULL) && (w_24 != y_24)))
                                _fail(y_24);
                              else
                                w_24 = y_24;
                            }
                            t = not_null(w_24);
                          }
                        }
                      }
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
ATerm Case_4 (ATerm t, ATerm s_52 (ATerm), ATerm t_52 (ATerm), ATerm u_52 (ATerm), ATerm v_52 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Case_4))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      q_25 = ATgetArgument(n_25, 2);
      r_25 = ATgetArgument(n_25, 3);
      {
        ATerm i_26 = NULL,k_26 = NULL;
        ATerm j_26 = NULL;
        t = SSLgetAnnotations(not_null(n_25));
        {
          j_26 = t;
          if(((i_26 != NULL) && (i_26 != j_26)))
            _fail(j_26);
          else
            i_26 = j_26;
        }
        {
          t = not_null(o_25);
          {
            ATerm o_26 = NULL;
            t = s_52(t);
            {
              k_26 = t;
              {
                t = not_null(p_25);
                {
                  ATerm q_26 = NULL;
                  t = t_52(t);
                  {
                    o_26 = t;
                    {
                      t = not_null(q_25);
                      {
                        ATerm s_26 = NULL;
                        t = u_52(t);
                        {
                          q_26 = t;
                          {
                            t = not_null(r_25);
                            {
                              ATerm u_26 = NULL;
                              t = v_52(t);
                              {
                                s_26 = t;
                                {
                                  ATerm v_26 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(k_26), not_null(o_26), not_null(q_26), not_null(s_26)), not_null(i_26));
                                  {
                                    v_26 = t;
                                    if(((u_26 != NULL) && (u_26 != v_26)))
                                      _fail(v_26);
                                    else
                                      u_26 = v_26;
                                  }
                                  t = not_null(u_26);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm s_27 = NULL,u_27 = NULL,v_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym_Let_2))
    {
      u_27 = ATgetArgument(s_27, 0);
      v_27 = ATgetArgument(s_27, 1);
      {
        ATerm z_27 = NULL,b_28 = NULL;
        ATerm a_28 = NULL;
        t = SSLgetAnnotations(not_null(s_27));
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
            t = b_57(t);
            {
              b_28 = t;
              {
                t = not_null(v_27);
                {
                  ATerm f_28 = NULL;
                  t = c_57(t);
                  {
                    d_28 = t;
                    {
                      ATerm g_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(b_28), not_null(d_28)), not_null(z_27));
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
ATerm Prim_2 (ATerm t, ATerm g_58 (ATerm), ATerm h_58 (ATerm))
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym_Prim_2))
    {
      t_28 = ATgetArgument(s_28, 0);
      u_28 = ATgetArgument(s_28, 1);
      {
        ATerm y_28 = NULL,a_29 = NULL;
        ATerm z_28 = NULL;
        t = SSLgetAnnotations(not_null(s_28));
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
        {
          t = not_null(t_28);
          {
            ATerm c_29 = NULL;
            t = g_58(t);
            {
              a_29 = t;
              {
                t = not_null(u_28);
                {
                  ATerm e_29 = NULL;
                  t = h_58(t);
                  {
                    c_29 = t;
                    {
                      ATerm f_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(a_29), not_null(c_29)), not_null(y_28));
                      {
                        f_29 = t;
                        if(((e_29 != NULL) && (e_29 != f_29)))
                          _fail(f_29);
                        else
                          e_29 = f_29;
                      }
                      t = not_null(e_29);
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
ATerm Where_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_Where_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      {
        ATerm w_29 = NULL,y_29 = NULL;
        ATerm x_29 = NULL;
        t = SSLgetAnnotations(not_null(q_29));
        {
          x_29 = t;
          if(((w_29 != NULL) && (w_29 != x_29)))
            _fail(x_29);
          else
            w_29 = x_29;
        }
        {
          t = not_null(r_29);
          {
            ATerm f_30 = NULL;
            t = f_58(t);
            {
              y_29 = t;
              {
                ATerm h_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(y_29)), not_null(w_29));
                {
                  h_30 = t;
                  if(((f_30 != NULL) && (f_30 != h_30)))
                    _fail(h_30);
                  else
                    f_30 = h_30;
                }
                t = not_null(f_30);
              }
            }
          }
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
  ATerm n_30 = NULL;
  n_30 = t;
  t = SSL_is_int(not_null(n_30));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Scope_2))
    {
      x_30 = ATgetArgument(w_30, 0);
      y_30 = ATgetArgument(w_30, 1);
      {
        ATerm c_31 = NULL,h_31 = NULL;
        ATerm g_31 = NULL;
        t = SSLgetAnnotations(not_null(w_30));
        {
          g_31 = t;
          if(((c_31 != NULL) && (c_31 != g_31)))
            _fail(g_31);
          else
            c_31 = g_31;
        }
        {
          t = not_null(x_30);
          {
            ATerm j_31 = NULL;
            t = d_58(t);
            {
              h_31 = t;
              {
                t = not_null(y_30);
                {
                  ATerm l_31 = NULL;
                  t = e_58(t);
                  {
                    j_31 = t;
                    {
                      ATerm m_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(h_31), not_null(j_31)), not_null(c_31));
                      {
                        m_31 = t;
                        if(((l_31 != NULL) && (l_31 != m_31)))
                          _fail(m_31);
                        else
                          l_31 = m_31;
                      }
                      t = not_null(l_31);
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
ATerm Build_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_Build_1))
    {
      y_31 = ATgetArgument(x_31, 0);
      {
        ATerm b_32 = NULL,d_32 = NULL;
        ATerm c_32 = NULL;
        t = SSLgetAnnotations(not_null(x_31));
        {
          c_32 = t;
          if(((b_32 != NULL) && (b_32 != c_32)))
            _fail(c_32);
          else
            b_32 = c_32;
        }
        {
          t = not_null(y_31);
          {
            ATerm f_32 = NULL;
            t = a_58(t);
            {
              d_32 = t;
              {
                ATerm g_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(d_32)), not_null(b_32));
                {
                  g_32 = t;
                  if(((f_32 != NULL) && (f_32 != g_32)))
                    _fail(g_32);
                  else
                    f_32 = g_32;
                }
                t = not_null(f_32);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm q_32 = NULL,r_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_Thread_1))
    {
      r_32 = ATgetArgument(q_32, 0);
      {
        ATerm u_32 = NULL,w_32 = NULL;
        ATerm v_32 = NULL;
        t = SSLgetAnnotations(not_null(q_32));
        {
          v_32 = t;
          if(((u_32 != NULL) && (u_32 != v_32)))
            _fail(v_32);
          else
            u_32 = v_32;
        }
        {
          t = not_null(r_32);
          {
            ATerm y_32 = NULL;
            t = w_57(t);
            {
              w_32 = t;
              {
                ATerm z_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(w_32)), not_null(u_32));
                {
                  z_32 = t;
                  if(((y_32 != NULL) && (y_32 != z_32)))
                    _fail(z_32);
                  else
                    y_32 = z_32;
                }
                t = not_null(y_32);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm j_33 = NULL,k_33 = NULL;
  j_33 = t;
  i_33 :
  if(match_cons(j_33, sym_All_1))
    {
      k_33 = ATgetArgument(j_33, 0);
      {
        ATerm n_33 = NULL,p_33 = NULL;
        ATerm o_33 = NULL;
        t = SSLgetAnnotations(not_null(j_33));
        {
          o_33 = t;
          if(((n_33 != NULL) && (n_33 != o_33)))
            _fail(o_33);
          else
            n_33 = o_33;
        }
        {
          t = not_null(k_33);
          {
            ATerm r_33 = NULL;
            t = v_57(t);
            {
              p_33 = t;
              {
                ATerm s_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(p_33)), not_null(n_33));
                {
                  s_33 = t;
                  if(((r_33 != NULL) && (r_33 != s_33)))
                    _fail(s_33);
                  else
                    r_33 = s_33;
                }
                t = not_null(r_33);
              }
            }
          }
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
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_Some_1))
    {
      k_34 = ATgetArgument(j_34, 0);
      {
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_34 = NULL,p_34 = NULL;
            ATerm o_34 = NULL;
            t = SSLgetAnnotations(not_null(j_34));
            {
              o_34 = t;
              if(((n_34 != NULL) && (n_34 != o_34)))
                _fail(o_34);
              else
                n_34 = o_34;
            }
            {
              t = not_null(k_34);
              {
                ATerm r_34 = NULL;
                t = m_0(t);
                {
                  p_34 = t;
                  {
                    ATerm s_34 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(p_34)), not_null(n_34));
                    {
                      s_34 = t;
                      if(((r_34 != NULL) && (r_34 != s_34)))
                        _fail(s_34);
                      else
                        r_34 = s_34;
                    }
                    t = not_null(r_34);
                  }
                }
              }
            }
            LocalPopChoice(z_4);
          }
        else
          {
            t = y_4;
            {
              ATerm v_34 = NULL,x_34 = NULL;
              ATerm w_34 = NULL;
              t = SSLgetAnnotations(not_null(j_34));
              {
                w_34 = t;
                if(((v_34 != NULL) && (v_34 != w_34)))
                  _fail(w_34);
                else
                  v_34 = w_34;
              }
              {
                t = not_null(k_34);
                {
                  ATerm z_34 = NULL;
                  t = m_0(t);
                  {
                    x_34 = t;
                    {
                      ATerm a_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(x_34)), not_null(v_34));
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
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm o_35 = NULL,p_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym_One_1))
    {
      p_35 = ATgetArgument(o_35, 0);
      {
        ATerm s_35 = NULL,u_35 = NULL;
        ATerm t_35 = NULL;
        t = SSLgetAnnotations(not_null(o_35));
        {
          t_35 = t;
          if(((s_35 != NULL) && (s_35 != t_35)))
            _fail(t_35);
          else
            s_35 = t_35;
        }
        {
          t = not_null(p_35);
          {
            ATerm w_35 = NULL;
            t = t_57(t);
            {
              u_35 = t;
              {
                ATerm x_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(u_35)), not_null(s_35));
                {
                  x_35 = t;
                  if(((w_35 != NULL) && (w_35 != x_35)))
                    _fail(x_35);
                  else
                    w_35 = x_35;
                }
                t = not_null(w_35);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm))
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
  i_36 = t;
  h_36 :
  if(match_cons(i_36, sym_Cong_2))
    {
      j_36 = ATgetArgument(i_36, 0);
      k_36 = ATgetArgument(i_36, 1);
      {
        ATerm o_36 = NULL,q_36 = NULL;
        ATerm p_36 = NULL;
        t = SSLgetAnnotations(not_null(i_36));
        {
          p_36 = t;
          if(((o_36 != NULL) && (o_36 != p_36)))
            _fail(p_36);
          else
            o_36 = p_36;
        }
        {
          t = not_null(j_36);
          {
            ATerm s_36 = NULL;
            t = r_57(t);
            {
              q_36 = t;
              {
                t = not_null(k_36);
                {
                  ATerm u_36 = NULL;
                  t = s_57(t);
                  {
                    s_36 = t;
                    {
                      ATerm v_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(q_36), not_null(s_36)), not_null(o_36));
                      {
                        v_36 = t;
                        if(((u_36 != NULL) && (u_36 != v_36)))
                          _fail(v_36);
                        else
                          u_36 = v_36;
                      }
                      t = not_null(u_36);
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
ATerm Path_2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym_Path_2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      {
        ATerm n_37 = NULL,p_37 = NULL;
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(h_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
        {
          t = not_null(i_37);
          {
            ATerm r_37 = NULL;
            t = p_57(t);
            {
              p_37 = t;
              {
                t = not_null(j_37);
                {
                  ATerm t_37 = NULL;
                  t = q_57(t);
                  {
                    r_37 = t;
                    {
                      ATerm u_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(p_37), not_null(r_37)), not_null(n_37));
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
ATerm Rec_2 (ATerm t, ATerm z_56 (ATerm), ATerm a_57 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Rec_2))
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
            t = z_56(t);
            {
              o_38 = t;
              {
                t = not_null(i_38);
                {
                  ATerm s_38 = NULL;
                  t = a_57(t);
                  {
                    q_38 = t;
                    {
                      ATerm t_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(o_38), not_null(q_38)), not_null(m_38));
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
ATerm SVar_1 (ATerm t, ATerm y_56 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_SVar_1))
    {
      h_39 = ATgetArgument(g_39, 0);
      {
        ATerm k_39 = NULL,m_39 = NULL;
        ATerm l_39 = NULL;
        t = SSLgetAnnotations(not_null(g_39));
        {
          l_39 = t;
          if(((k_39 != NULL) && (k_39 != l_39)))
            _fail(l_39);
          else
            k_39 = l_39;
        }
        {
          t = not_null(h_39);
          {
            ATerm o_39 = NULL;
            t = y_56(t);
            {
              m_39 = t;
              {
                ATerm p_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(m_39)), not_null(k_39));
                {
                  p_39 = t;
                  if(((o_39 != NULL) && (o_39 != p_39)))
                    _fail(p_39);
                  else
                    o_39 = p_39;
                }
                t = not_null(o_39);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm n_57 (ATerm), ATerm o_57 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Call_2))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      {
        ATerm g_40 = NULL,i_40 = NULL;
        ATerm h_40 = NULL;
        t = SSLgetAnnotations(not_null(a_40));
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
        {
          t = not_null(b_40);
          {
            ATerm k_40 = NULL;
            t = n_57(t);
            {
              i_40 = t;
              {
                t = not_null(c_40);
                {
                  ATerm m_40 = NULL;
                  t = o_57(t);
                  {
                    k_40 = t;
                    {
                      ATerm n_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(i_40), not_null(k_40)), not_null(g_40));
                      {
                        n_40 = t;
                        if(((m_40 != NULL) && (m_40 != n_40)))
                          _fail(n_40);
                        else
                          m_40 = n_40;
                      }
                      t = not_null(m_40);
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
ATerm LGChoice_2 (ATerm t, ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_LGChoice_2))
    {
      b_41 = ATgetArgument(a_41, 0);
      c_41 = ATgetArgument(a_41, 1);
      {
        ATerm g_41 = NULL,i_41 = NULL;
        ATerm h_41 = NULL;
        t = SSLgetAnnotations(not_null(a_41));
        {
          h_41 = t;
          if(((g_41 != NULL) && (g_41 != h_41)))
            _fail(h_41);
          else
            g_41 = h_41;
        }
        {
          t = not_null(b_41);
          {
            ATerm k_41 = NULL;
            t = v_56(t);
            {
              i_41 = t;
              {
                t = not_null(c_41);
                {
                  ATerm m_41 = NULL;
                  t = w_56(t);
                  {
                    k_41 = t;
                    {
                      ATerm n_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(i_41), not_null(k_41)), not_null(g_41));
                      {
                        n_41 = t;
                        if(((m_41 != NULL) && (m_41 != n_41)))
                          _fail(n_41);
                        else
                          m_41 = n_41;
                      }
                      t = not_null(m_41);
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
ATerm GChoice_2 (ATerm t, ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym_GChoice_2))
    {
      a_42 = ATgetArgument(z_41, 0);
      b_42 = ATgetArgument(z_41, 1);
      {
        ATerm f_42 = NULL,h_42 = NULL;
        ATerm g_42 = NULL;
        t = SSLgetAnnotations(not_null(z_41));
        {
          g_42 = t;
          if(((f_42 != NULL) && (f_42 != g_42)))
            _fail(g_42);
          else
            f_42 = g_42;
        }
        {
          t = not_null(a_42);
          {
            ATerm j_42 = NULL;
            t = t_56(t);
            {
              h_42 = t;
              {
                t = not_null(b_42);
                {
                  ATerm l_42 = NULL;
                  t = u_56(t);
                  {
                    j_42 = t;
                    {
                      ATerm m_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(h_42), not_null(j_42)), not_null(f_42));
                      {
                        m_42 = t;
                        if(((l_42 != NULL) && (l_42 != m_42)))
                          _fail(m_42);
                        else
                          l_42 = m_42;
                      }
                      t = not_null(l_42);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm s_56 (ATerm))
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_cons(z_42, sym_GuardedLChoice_3))
    {
      a_43 = ATgetArgument(z_42, 0);
      b_43 = ATgetArgument(z_42, 1);
      c_43 = ATgetArgument(z_42, 2);
      {
        ATerm h_43 = NULL,j_43 = NULL;
        ATerm i_43 = NULL;
        t = SSLgetAnnotations(not_null(z_42));
        {
          i_43 = t;
          if(((h_43 != NULL) && (h_43 != i_43)))
            _fail(i_43);
          else
            h_43 = i_43;
        }
        {
          t = not_null(a_43);
          {
            ATerm l_43 = NULL;
            t = q_56(t);
            {
              j_43 = t;
              {
                t = not_null(b_43);
                {
                  ATerm n_43 = NULL;
                  t = r_56(t);
                  {
                    l_43 = t;
                    {
                      t = not_null(c_43);
                      {
                        ATerm p_43 = NULL;
                        t = s_56(t);
                        {
                          n_43 = t;
                          {
                            ATerm q_43 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(j_43), not_null(l_43), not_null(n_43)), not_null(h_43));
                            {
                              q_43 = t;
                              if(((p_43 != NULL) && (p_43 != q_43)))
                                _fail(q_43);
                              else
                                p_43 = q_43;
                            }
                            t = not_null(p_43);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym_LChoice_2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      {
        ATerm j_44 = NULL,l_44 = NULL;
        ATerm k_44 = NULL;
        t = SSLgetAnnotations(not_null(d_44));
        {
          k_44 = t;
          if(((j_44 != NULL) && (j_44 != k_44)))
            _fail(k_44);
          else
            j_44 = k_44;
        }
        {
          t = not_null(e_44);
          {
            ATerm n_44 = NULL;
            t = o_56(t);
            {
              l_44 = t;
              {
                t = not_null(f_44);
                {
                  ATerm p_44 = NULL;
                  t = p_56(t);
                  {
                    n_44 = t;
                    {
                      ATerm q_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(l_44), not_null(n_44)), not_null(j_44));
                      {
                        q_44 = t;
                        if(((p_44 != NULL) && (p_44 != q_44)))
                          _fail(q_44);
                        else
                          p_44 = q_44;
                      }
                      t = not_null(p_44);
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
ATerm Choice_2 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym_Choice_2))
    {
      d_45 = ATgetArgument(c_45, 0);
      e_45 = ATgetArgument(c_45, 1);
      {
        ATerm i_45 = NULL,n_45 = NULL;
        ATerm m_45 = NULL;
        t = SSLgetAnnotations(not_null(c_45));
        {
          m_45 = t;
          if(((i_45 != NULL) && (i_45 != m_45)))
            _fail(m_45);
          else
            i_45 = m_45;
        }
        {
          t = not_null(d_45);
          {
            ATerm p_45 = NULL;
            t = m_56(t);
            {
              n_45 = t;
              {
                t = not_null(e_45);
                {
                  ATerm r_45 = NULL;
                  t = n_56(t);
                  {
                    p_45 = t;
                    {
                      ATerm s_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(n_45), not_null(p_45)), not_null(i_45));
                      {
                        s_45 = t;
                        if(((r_45 != NULL) && (r_45 != s_45)))
                          _fail(s_45);
                        else
                          r_45 = s_45;
                      }
                      t = not_null(r_45);
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
ATerm Seq_2 (ATerm t, ATerm k_56 (ATerm), ATerm l_56 (ATerm))
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym_Seq_2))
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
            ATerm s_46 = NULL;
            t = k_56(t);
            {
              o_46 = t;
              {
                t = not_null(i_46);
                {
                  ATerm u_46 = NULL;
                  t = l_56(t);
                  {
                    s_46 = t;
                    {
                      ATerm v_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(o_46), not_null(s_46)), not_null(m_46));
                      {
                        v_46 = t;
                        if(((u_46 != NULL) && (u_46 != v_46)))
                          _fail(v_46);
                        else
                          u_46 = v_46;
                      }
                      t = not_null(u_46);
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
ATerm Test_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm g_47 = NULL,h_47 = NULL;
  g_47 = t;
  f_47 :
  if(match_cons(g_47, sym_Test_1))
    {
      h_47 = ATgetArgument(g_47, 0);
      {
        ATerm k_47 = NULL,m_47 = NULL;
        ATerm l_47 = NULL;
        t = SSLgetAnnotations(not_null(g_47));
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
        {
          t = not_null(h_47);
          {
            ATerm o_47 = NULL;
            t = i_56(t);
            {
              m_47 = t;
              {
                ATerm p_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(m_47)), not_null(k_47));
                {
                  p_47 = t;
                  if(((o_47 != NULL) && (o_47 != p_47)))
                    _fail(p_47);
                  else
                    o_47 = p_47;
                }
                t = not_null(o_47);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm b_48 = NULL,c_48 = NULL;
  b_48 = t;
  a_48 :
  if(match_cons(b_48, sym_Not_1))
    {
      c_48 = ATgetArgument(b_48, 0);
      {
        ATerm f_48 = NULL,h_48 = NULL;
        ATerm g_48 = NULL;
        t = SSLgetAnnotations(not_null(b_48));
        {
          g_48 = t;
          if(((f_48 != NULL) && (f_48 != g_48)))
            _fail(g_48);
          else
            f_48 = g_48;
        }
        {
          t = not_null(c_48);
          {
            ATerm j_48 = NULL;
            t = j_56(t);
            {
              h_48 = t;
              {
                ATerm k_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(h_48)), not_null(f_48));
                {
                  k_48 = t;
                  if(((j_48 != NULL) && (j_48 != k_48)))
                    _fail(k_48);
                  else
                    j_48 = k_48;
                }
                t = not_null(j_48);
              }
            }
          }
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
  ATerm t_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_cons(t_48, sym_Fail_0))
    {
      ATerm v_48 = NULL,x_48 = NULL;
      ATerm a_5;
      a_5 = t;
      {
        ATerm w_48 = NULL;
        t = SSLgetAnnotations(not_null(t_48));
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
      }
      t = a_5;
      {
        ATerm y_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(v_48));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  f_49 :
  if(match_cons(g_49, sym_Id_0))
    {
      ATerm i_49 = NULL,k_49 = NULL;
      ATerm b_5;
      b_5 = t;
      {
        ATerm j_49 = NULL;
        t = SSLgetAnnotations(not_null(g_49));
        {
          j_49 = t;
          if(((i_49 != NULL) && (i_49 != j_49)))
            _fail(j_49);
          else
            i_49 = j_49;
        }
      }
      t = b_5;
      {
        ATerm l_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(i_49));
        {
          l_49 = t;
          if(((k_49 != NULL) && (k_49 != l_49)))
            _fail(l_49);
          else
            k_49 = l_49;
        }
        t = not_null(k_49);
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
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            {
              ATerm g_5 = t;
              int h_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(h_5);
                }
              else
                {
                  t = g_5;
                  {
                    ATerm i_5 = t;
                    int j_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(j_5);
                      }
                    else
                      {
                        t = i_5;
                        {
                          ATerm k_5 = t;
                          int l_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(p_5);
                                        }
                                      else
                                        {
                                          t = o_5;
                                          {
                                            ATerm q_5 = t;
                                            int r_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(r_5);
                                              }
                                            else
                                              {
                                                t = q_5;
                                                {
                                                  ATerm s_5 = t;
                                                  int t_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(t_5);
                                                    }
                                                  else
                                                    {
                                                      t = s_5;
                                                      {
                                                        ATerm u_5 = t;
                                                        int v_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(v_5);
                                                          }
                                                        else
                                                          {
                                                            t = u_5;
                                                            {
                                                              ATerm w_5 = t;
                                                              int x_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, g_0, Nil_0);
                                                                  LocalPopChoice(x_5);
                                                                }
                                                              else
                                                                {
                                                                  t = w_5;
                                                                  {
                                                                    ATerm y_5 = t;
                                                                    int z_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(b_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_6;
                                                                              {
                                                                                ATerm c_6 = t;
                                                                                int d_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm h_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, h_0);
                                                                                    LocalPopChoice(d_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_6;
                                                                                    {
                                                                                      ATerm e_6 = t;
                                                                                      int f_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(f_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_6;
                                                                                          {
                                                                                            ATerm g_6 = t;
                                                                                            int h_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(h_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_6;
                                                                                                {
                                                                                                  ATerm i_6 = t;
                                                                                                  int j_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(j_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_6;
                                                                                                      {
                                                                                                        ATerm k_6 = t;
                                                                                                        int l_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            LocalPopChoice(l_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_6;
                                                                                                            {
                                                                                                              ATerm m_6 = t;
                                                                                                              int n_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1(t, term_expression_0);
                                                                                                                  LocalPopChoice(n_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = m_6;
                                                                                                                  {
                                                                                                                    ATerm o_6 = t;
                                                                                                                    int p_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm t_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm q_6 = t;
                                                                                                                            int r_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                LocalPopChoice(r_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = q_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, u_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, t_0, strategy_expression_0);
                                                                                                                        LocalPopChoice(p_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_6;
                                                                                                                        {
                                                                                                                          ATerm s_6 = t;
                                                                                                                          int t_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
                                                                                                                              LocalPopChoice(t_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_6;
                                                                                                                              {
                                                                                                                                ATerm u_6 = t;
                                                                                                                                int v_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm v_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, v_0);
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
                                                                                                                                          ATerm w_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm x_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm y_6 = t;
                                                                                                                                              int z_6 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  LocalPopChoice(z_6);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = y_6;
                                                                                                                                                  {
                                                                                                                                                    ATerm y_0 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      t = list_1(t, _id);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_4(t, y_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1(t, x_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Let_2(t, w_0, strategy_expression_0);
                                                                                                                                          LocalPopChoice(x_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = w_6;
                                                                                                                                          {
                                                                                                                                            ATerm a_7 = t;
                                                                                                                                            int b_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm z_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                ATerm a_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm b_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, b_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Case_4(t, is_string_0, z_0, a_1, strategy_expression_0);
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
                                                                                                                                                      t = Continue_1(t, is_string_0);
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
                                                                                                                                                            ATerm c_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, c_1, term_expression_0);
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
                                                                                                                                                                  ATerm d_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, d_1);
                                                                                                                                                                  LocalPopChoice(h_7);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = g_7;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm e_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_i_7;
                                                                                                                                                                      return(t);
                                                                                                                                                                    }
                                                                                                                                                                    t = debug_1(t, e_1);
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm r_49 = NULL;
  r_49 = t;
  t = SSL_is_string(not_null(r_49));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm y_49 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym_DontInline_0))
    {
      ATerm a_50 = NULL,c_50 = NULL;
      ATerm j_7;
      j_7 = t;
      {
        ATerm b_50 = NULL;
        t = SSLgetAnnotations(not_null(y_49));
        {
          b_50 = t;
          if(((a_50 != NULL) && (a_50 != b_50)))
            _fail(b_50);
          else
            a_50 = b_50;
        }
      }
      t = j_7;
      {
        ATerm d_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DontInline_0), not_null(a_50));
        {
          d_50 = t;
          if(((c_50 != NULL) && (c_50 != d_50)))
            _fail(d_50);
          else
            c_50 = d_50;
        }
        t = not_null(c_50);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm m_57 (ATerm))
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  p_50 = t;
  o_50 :
  if(match_cons(p_50, sym_SDef_4))
    {
      q_50 = ATgetArgument(p_50, 0);
      r_50 = ATgetArgument(p_50, 1);
      s_50 = ATgetArgument(p_50, 2);
      t_50 = ATgetArgument(p_50, 3);
      {
        ATerm z_50 = NULL,b_51 = NULL;
        ATerm a_51 = NULL;
        t = SSLgetAnnotations(not_null(p_50));
        {
          a_51 = t;
          if(((z_50 != NULL) && (z_50 != a_51)))
            _fail(a_51);
          else
            z_50 = a_51;
        }
        {
          t = not_null(q_50);
          {
            ATerm d_51 = NULL;
            t = j_57(t);
            {
              b_51 = t;
              {
                t = not_null(r_50);
                {
                  ATerm f_51 = NULL;
                  t = k_57(t);
                  {
                    d_51 = t;
                    {
                      t = not_null(s_50);
                      {
                        ATerm h_51 = NULL;
                        t = l_57(t);
                        {
                          f_51 = t;
                          {
                            t = not_null(t_50);
                            {
                              ATerm j_51 = NULL;
                              t = m_57(t);
                              {
                                h_51 = t;
                                {
                                  ATerm k_51 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_4, not_null(b_51), not_null(d_51), not_null(f_51), not_null(h_51)), not_null(z_50));
                                  {
                                    k_51 = t;
                                    if(((j_51 != NULL) && (j_51 != k_51)))
                                      _fail(k_51);
                                    else
                                      j_51 = k_51;
                                  }
                                  t = not_null(j_51);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm d_57 (ATerm), ATerm e_57 (ATerm), ATerm f_57 (ATerm))
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  z_51 = t;
  y_51 :
  if(match_cons(z_51, sym_SDef_3))
    {
      a_52 = ATgetArgument(z_51, 0);
      b_52 = ATgetArgument(z_51, 1);
      c_52 = ATgetArgument(z_51, 2);
      {
        ATerm h_52 = NULL,j_52 = NULL;
        ATerm i_52 = NULL;
        t = SSLgetAnnotations(not_null(z_51));
        {
          i_52 = t;
          if(((h_52 != NULL) && (h_52 != i_52)))
            _fail(i_52);
          else
            h_52 = i_52;
        }
        {
          t = not_null(a_52);
          {
            ATerm l_52 = NULL;
            t = d_57(t);
            {
              j_52 = t;
              {
                t = not_null(b_52);
                {
                  ATerm n_52 = NULL;
                  t = e_57(t);
                  {
                    l_52 = t;
                    {
                      t = not_null(c_52);
                      {
                        ATerm p_52 = NULL;
                        t = f_57(t);
                        {
                          n_52 = t;
                          {
                            ATerm q_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(j_52), not_null(l_52), not_null(n_52)), not_null(h_52));
                            {
                              q_52 = t;
                              if(((p_52 != NULL) && (p_52 != q_52)))
                                _fail(q_52);
                              else
                                p_52 = q_52;
                            }
                            t = not_null(p_52);
                          }
                        }
                      }
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
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
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
            ATerm f_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, f_1, is_string_0, Nil_0, strategy_expression_0);
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            {
              ATerm g_1 (ATerm t)
              {
                t = term_o_7;
                return(t);
              }
              t = debug_1(t, g_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm g_53 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = Cons_2(t, h_74, g_53);
      }
    return(t);
  }
  t = g_53(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_t_7;
          return(t);
        }
        t = debug_1(t, h_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_46 (ATerm), ATerm q_46 (ATerm))
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  m_53 :
  if(match_cons(n_53, sym__2))
    {
      o_53 = ATgetArgument(n_53, 0);
      p_53 = ATgetArgument(n_53, 1);
      {
        ATerm t_53 = NULL,v_53 = NULL;
        ATerm u_53 = NULL;
        t = SSLgetAnnotations(not_null(n_53));
        {
          u_53 = t;
          if(((t_53 != NULL) && (t_53 != u_53)))
            _fail(u_53);
          else
            t_53 = u_53;
        }
        {
          t = not_null(o_53);
          {
            ATerm x_53 = NULL;
            t = p_46(t);
            {
              v_53 = t;
              {
                t = not_null(p_53);
                {
                  ATerm z_53 = NULL;
                  t = q_46(t);
                  {
                    x_53 = t;
                    {
                      ATerm a_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_53), not_null(x_53)), not_null(t_53));
                      {
                        a_54 = t;
                        if(((z_53 != NULL) && (z_53 != a_54)))
                          _fail(a_54);
                        else
                          z_53 = a_54;
                      }
                      t = not_null(z_53);
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
  ATerm i_54 = NULL;
  ATerm u_7;
  u_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm j_54 = NULL,k_54 = NULL;
      j_54 = t;
      h_54 :
      if(match_cons(j_54, sym_Program_1))
        {
          k_54 = ATgetArgument(j_54, 0);
          if(((i_54 != NULL) && (i_54 != k_54)))
            _fail(k_54);
          else
            i_54 = k_54;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(i_54)), term_v_7));
      {
        t = printnl_0(t);
        {
          t = term_x_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATempty, term_y_7));
  {
    t = printnl_0(t);
    {
      t = term_x_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_54 = NULL;
  n_54 = t;
  t = SSL_TicksToSeconds(not_null(n_54));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t_54 = t;
  s_54 :
  if(match_cons(t_54, sym__2))
    {
      u_54 = ATgetArgument(t_54, 0);
      v_54 = ATgetArgument(t_54, 1);
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_54), not_null(v_54));
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = SSL_addr(not_null(u_54), not_null(v_54));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_68 (ATerm), ATerm y_68 (ATerm))
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_68(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
        c_55 = t;
        b_55 :
        if(((ATgetType(c_55) == AT_LIST) && ((ATermList) c_55 != ATempty)))
          {
            d_55 = ATgetFirst((ATermList) c_55);
            e_55 = (ATerm) ATgetNext((ATermList) c_55);
            {
              ATerm h_55 = NULL;
              ATerm i_55 = NULL;
              t = not_null(e_55);
              {
                t = foldr_2(t, x_68, y_68);
                {
                  i_55 = t;
                  if(((h_55 != NULL) && (h_55 != i_55)))
                    _fail(i_55);
                  else
                    h_55 = i_55;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_55), not_null(h_55));
                t = y_68(t);
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
ATerm crush_2 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm p_55 = NULL;
  ATerm r_55 = NULL;
  p_55 = t;
  {
    ATerm s_55 = NULL;
    ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
    t = not_null(p_55);
    {
      s_55 = t;
      {
        t = SSL_explode_term(not_null(s_55));
        {
          u_55 = t;
          o_55 :
          if(match_cons(u_55, sym__2))
            {
              v_55 = ATgetArgument(u_55, 0);
              w_55 = ATgetArgument(u_55, 1);
              if(((r_55 != NULL) && (r_55 != w_55)))
                _fail(w_55);
              else
                r_55 = w_55;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_55);
      t = foldr_2(t, l_70, m_70);
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
    ATerm j_1 (ATerm t)
    {
      t = term_d_8;
      return(t);
    }
    t = crush_2(t, j_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_56 = NULL,g_57 = NULL;
  ATerm k_1 (ATerm t)
  {
    ATerm z_57 = NULL;
    ATerm l_1 (ATerm t)
    {
      ATerm e_8 = t;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm h_57 = NULL;
            h_57 = t;
            a_56 :
            if(!(match_cons(h_57, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, m_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_8;
        }
      return(t);
    }
    t = _2(t, l_1, _id);
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          ATerm i_57 = NULL,u_57 = NULL;
          i_57 = t;
          c_56 :
          if(match_cons(i_57, sym_Runtime_1))
            {
              u_57 = ATgetArgument(i_57, 0);
              if(((x_56 != NULL) && (x_56 != u_57)))
                _fail(u_57);
              else
                x_56 = u_57;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_1);
        return(t);
      }
      t = _2(t, n_1, _id);
      {
        ATerm p_1 (ATerm t)
        {
          ATerm q_1 (ATerm t)
          {
            ATerm x_57 = NULL,y_57 = NULL;
            x_57 = t;
            e_56 :
            if(match_cons(x_57, sym_Program_1))
              {
                y_57 = ATgetArgument(x_57, 0);
                if(((g_57 != NULL) && (g_57 != y_57)))
                  _fail(y_57);
                else
                  g_57 = y_57;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_1);
          return(t);
        }
        t = _2(t, p_1, _id);
        {
          ATerm b_58 = NULL;
          t = run_time_0(t);
          {
            b_58 = t;
            if(((z_57 != NULL) && (z_57 != b_58)))
              _fail(b_58);
            else
              z_57 = b_58;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_8), not_null(z_57)), term_f_8), not_null(g_57)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, k_1);
  {
    t = term_d_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
  o_58 = t;
  n_58 :
  if(match_cons(o_58, sym__2))
    {
      p_58 = ATgetArgument(o_58, 0);
      q_58 = ATgetArgument(o_58, 1);
      t = SSL_WriteToTextFile(not_null(p_58), not_null(q_58));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  v_58 :
  if(match_cons(w_58, sym__2))
    {
      x_58 = ATgetArgument(w_58, 0);
      y_58 = ATgetArgument(w_58, 1);
      t = SSL_WriteToBinaryFile(not_null(x_58), not_null(y_58));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_59 = NULL;
  ATerm h_8;
  h_8 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm h_59 = NULL,i_59 = NULL;
            h_59 = t;
            d_59 :
            if(match_cons(h_59, sym_Output_1))
              {
                i_59 = ATgetArgument(h_59, 0);
                if(((g_59 != NULL) && (g_59 != i_59)))
                  _fail(i_59);
                else
                  g_59 = i_59;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_1);
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm j_59 = NULL;
            t = term_k_8;
            {
              j_59 = t;
              if(((g_59 != NULL) && (g_59 != j_59)))
                _fail(j_59);
              else
                g_59 = j_59;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_1, _id);
  }
  t = h_8;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = not_null(g_59);
        return(t);
      }
      t = split_2(t, u_1, _id);
      return(t);
    }
    t = _2(t, _id, t_1);
    {
      ATerm l_8 = t;
      int m_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm k_59 = NULL;
              k_59 = t;
              f_59 :
              if(!(match_cons(k_59, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_1);
            return(t);
          }
          t = _2(t, v_1, WriteToBinaryFile_0);
          LocalPopChoice(m_8);
        }
      else
        {
          t = l_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm q_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
  ATerm n_8;
  n_8 = t;
  t = dtime_0(t);
  t = n_8;
  {
    t = m_64(t);
    {
      ATerm o_8;
      o_8 = t;
      {
        ATerm r_59 = NULL;
        t = dtime_0(t);
        {
          r_59 = t;
          if(((q_59 != NULL) && (q_59 != r_59)))
            _fail(r_59);
          else
            q_59 = r_59;
        }
      }
      t = o_8;
      {
        s_59 = t;
        p_59 :
        if(match_cons(s_59, sym__2))
          {
            t_59 = ATgetArgument(s_59, 0);
            u_59 = ATgetArgument(s_59, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_59)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_59))), not_null(u_59));
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
  ATerm a_60 = NULL;
  a_60 = t;
  t = SSL_ReadFromFile(not_null(a_60));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_67 (ATerm), ATerm m_67 (ATerm))
{
  ATerm f_60 = NULL,h_60 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm g_60 = NULL;
    t = l_67(t);
    {
      g_60 = t;
      if(((f_60 != NULL) && (f_60 != g_60)))
        _fail(g_60);
      else
        f_60 = g_60;
    }
  }
  t = p_8;
  {
    ATerm i_60 = NULL;
    t = m_67(t);
    {
      i_60 = t;
      if(((h_60 != NULL) && (h_60 != i_60)))
        _fail(i_60);
      else
        h_60 = i_60;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_60), not_null(h_60));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_60 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          ATerm p_60 = NULL,q_60 = NULL;
          p_60 = t;
          m_60 :
          if(match_cons(p_60, sym_Input_1))
            {
              q_60 = ATgetArgument(p_60, 0);
              if(((o_60 != NULL) && (o_60 != q_60)))
                _fail(q_60);
              else
                o_60 = q_60;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_1);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        {
          ATerm r_60 = NULL;
          t = term_t_8;
          {
            r_60 = t;
            if(((o_60 != NULL) && (o_60 != r_60)))
              _fail(r_60);
            else
              o_60 = r_60;
          }
        }
      }
  }
  t = q_8;
  {
    ATerm y_1 (ATerm t)
    {
      t = not_null(o_60);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_60 = NULL;
  y_60 = t;
  x_60 :
  if(match_cons(y_60, sym_Version_0))
    {
      ATerm a_61 = NULL,c_61 = NULL;
      ATerm u_8;
      u_8 = t;
      {
        ATerm b_61 = NULL;
        t = SSLgetAnnotations(not_null(y_60));
        {
          b_61 = t;
          if(((a_61 != NULL) && (a_61 != b_61)))
            _fail(b_61);
          else
            a_61 = b_61;
        }
      }
      t = u_8;
      {
        ATerm d_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_61));
        {
          d_61 = t;
          if(((c_61 != NULL) && (c_61 != d_61)))
            _fail(d_61);
          else
            c_61 = d_61;
        }
        t = not_null(c_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        {
          ATerm x_8 = t;
          int y_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_8);
            }
          else
            {
              t = x_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_1);
  t = k_64(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_61 = NULL;
  i_61 = t;
  t = SSL_table_create(not_null(i_61));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_61 = NULL;
  m_61 = t;
  {
    ATerm z_8;
    z_8 = t;
    {
      t = term_a_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_9, term_b_9, not_null(m_61));
          t = table_put_0(t);
        }
      }
    }
    t = z_8;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
  r_61 = t;
  q_61 :
  if(match_cons(r_61, sym__2))
    {
      s_61 = ATgetArgument(r_61, 0);
      t_61 = ATgetArgument(r_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_9, not_null(s_61), not_null(t_61));
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
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
  i_62 = t;
  a_62 :
  if(match_string(i_62, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_62) == AT_LIST) && ((ATermList) i_62 != ATempty)))
        {
          j_62 = ATgetFirst((ATermList) i_62);
          k_62 = (ATerm) ATgetNext((ATermList) i_62);
          b_62 :
          if(((ATgetType(k_62) == AT_LIST) && ((ATermList) k_62 != ATempty)))
            {
              l_62 = ATgetFirst((ATermList) k_62);
              m_62 = (ATerm) ATgetNext((ATermList) k_62);
              {
                ATerm q_62 = NULL;
                ATerm d_9;
                d_9 = t;
                {
                  t = not_null(j_62);
                  t = j_0(t);
                }
                t = d_9;
                {
                  ATerm r_62 = NULL;
                  t = not_null(l_62);
                  {
                    t = k_0(t);
                    {
                      r_62 = t;
                      if(((q_62 != NULL) && (q_62 != r_62)))
                        _fail(r_62);
                      else
                        q_62 = r_62;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_62)), not_null(q_62));
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
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm k_63 = NULL;
        k_63 = t;
        v_62 :
        if(!(match_string(k_63, "-S")))
          {
            if(!(match_string(k_63, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_i_9;
        t = set_config_0(t);
        t = term_j_9;
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_k_9;
        return(t);
      }
      t = Option_3(t, a_2, b_2, c_2);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm l_63 = NULL;
              l_63 = t;
              w_62 :
              if(!(match_string(l_63, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_o_9;
              t = set_config_0(t);
              t = term_p_9;
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = term_q_9;
              return(t);
            }
            t = Option_3(t, d_2, e_2, f_2);
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm r_9 = t;
              int s_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm m_63 = NULL;
                    m_63 = t;
                    x_62 :
                    if(!(match_string(m_63, "-v")))
                      {
                        if(!(match_string(m_63, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    t = term_u_9;
                    t = set_config_0(t);
                    t = term_v_9;
                    return(t);
                  }
                  ATerm i_2 (ATerm t)
                  {
                    t = term_w_9;
                    return(t);
                  }
                  t = Option_3(t, g_2, h_2, i_2);
                  LocalPopChoice(s_9);
                }
              else
                {
                  t = r_9;
                  {
                    ATerm x_9 = t;
                    int y_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_2 (ATerm t)
                        {
                          ATerm n_63 = NULL;
                          n_63 = t;
                          y_62 :
                          if(!(match_string(n_63, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_2 (ATerm t)
                        {
                          ATerm q_63 = NULL;
                          ATerm z_9;
                          z_9 = t;
                          {
                            ATerm o_63 = NULL;
                            ATerm p_63 = NULL;
                            p_63 = t;
                            if(((o_63 != NULL) && (o_63 != p_63)))
                              _fail(p_63);
                            else
                              o_63 = p_63;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(o_63));
                              t = set_config_0(t);
                            }
                          }
                          t = z_9;
                          {
                            ATerm s_63 = NULL;
                            s_63 = t;
                            if(((q_63 != NULL) && (q_63 != s_63)))
                              _fail(s_63);
                            else
                              q_63 = s_63;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_63));
                          }
                          return(t);
                        }
                        ATerm l_2 (ATerm t)
                        {
                          t = term_e_10;
                          return(t);
                        }
                        t = ArgOption_3(t, j_2, k_2, l_2);
                        LocalPopChoice(y_9);
                      }
                    else
                      {
                        t = x_9;
                        {
                          ATerm f_10 = t;
                          int g_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_2 (ATerm t)
                              {
                                ATerm t_63 = NULL;
                                t_63 = t;
                                c_63 :
                                if(!(match_string(t_63, "-i")))
                                  {
                                    if(!(match_string(t_63, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_2 (ATerm t)
                              {
                                ATerm y_63 = NULL;
                                ATerm h_10;
                                h_10 = t;
                                {
                                  ATerm w_63 = NULL;
                                  ATerm x_63 = NULL;
                                  x_63 = t;
                                  if(((w_63 != NULL) && (w_63 != x_63)))
                                    _fail(x_63);
                                  else
                                    w_63 = x_63;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(w_63));
                                    t = set_config_0(t);
                                  }
                                }
                                t = h_10;
                                {
                                  ATerm c_64 = NULL;
                                  c_64 = t;
                                  if(((y_63 != NULL) && (y_63 != c_64)))
                                    _fail(c_64);
                                  else
                                    y_63 = c_64;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_63));
                                }
                                return(t);
                              }
                              ATerm o_2 (ATerm t)
                              {
                                t = term_j_10;
                                return(t);
                              }
                              t = ArgOption_3(t, m_2, n_2, o_2);
                              LocalPopChoice(g_10);
                            }
                          else
                            {
                              t = f_10;
                              {
                                ATerm k_10 = t;
                                int l_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm d_64 = NULL;
                                      d_64 = t;
                                      f_63 :
                                      if(!(match_string(d_64, "-o")))
                                        {
                                          if(!(match_string(d_64, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_2 (ATerm t)
                                    {
                                      ATerm g_64 = NULL;
                                      ATerm m_10;
                                      m_10 = t;
                                      {
                                        ATerm e_64 = NULL;
                                        ATerm f_64 = NULL;
                                        f_64 = t;
                                        if(((e_64 != NULL) && (e_64 != f_64)))
                                          _fail(f_64);
                                        else
                                          e_64 = f_64;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_n_10, not_null(e_64));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = m_10;
                                      {
                                        ATerm h_64 = NULL;
                                        h_64 = t;
                                        if(((g_64 != NULL) && (g_64 != h_64)))
                                          _fail(h_64);
                                        else
                                          g_64 = h_64;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_64));
                                      }
                                      return(t);
                                    }
                                    ATerm r_2 (ATerm t)
                                    {
                                      t = term_o_10;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_2, q_2, r_2);
                                    LocalPopChoice(l_10);
                                  }
                                else
                                  {
                                    t = k_10;
                                    {
                                      ATerm p_10 = t;
                                      int q_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_2 (ATerm t)
                                          {
                                            ATerm i_64 = NULL;
                                            i_64 = t;
                                            i_63 :
                                            if(!(match_string(i_64, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_2 (ATerm t)
                                          {
                                            t = term_s_10;
                                            t = set_config_0(t);
                                            t = term_t_10;
                                            return(t);
                                          }
                                          ATerm u_2 (ATerm t)
                                          {
                                            t = term_u_10;
                                            return(t);
                                          }
                                          t = Option_3(t, s_2, t_2, u_2);
                                          LocalPopChoice(q_10);
                                        }
                                      else
                                        {
                                          t = p_10;
                                          {
                                            ATerm v_2 (ATerm t)
                                            {
                                              ATerm j_64 = NULL;
                                              j_64 = t;
                                              j_63 :
                                              if(!(match_string(j_64, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_2 (ATerm t)
                                            {
                                              t = term_w_10;
                                              t = set_config_0(t);
                                              t = term_x_10;
                                              return(t);
                                            }
                                            ATerm y_2 (ATerm t)
                                            {
                                              t = term_y_10;
                                              return(t);
                                            }
                                            t = Option_3(t, v_2, x_2, y_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm t_64 = NULL;
  t_64 = t;
  t = SSL_table_destroy(not_null(t_64));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  t = SSL_exit(not_null(x_64));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_65 = NULL;
  c_65 = t;
  t = SSL_implode_string(not_null(c_65));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm f_65 (ATerm t)
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_65);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          t = Nil_0(t);
          t = t_74(t);
        }
      }
    return(t);
  }
  t = f_65(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
        i_65 = t;
        h_65 :
        if(((ATgetType(i_65) == AT_LIST) && ((ATermList) i_65 != ATempty)))
          {
            j_65 = ATgetFirst((ATermList) i_65);
            k_65 = (ATerm) ATgetNext((ATermList) i_65);
            {
              t = not_null(j_65);
              {
                ATerm z_2 (ATerm t)
                {
                  t = not_null(k_65);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_2);
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
  ATerm q_65 = NULL;
  q_65 = t;
  t = SSL_explode_string(not_null(q_65));
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
ATerm long_description_1 (ATerm t, ATerm d_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm t_65 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = Cons_2(t, f_74, t_65);
      }
    return(t);
  }
  t = t_65(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  c_66 = t;
  z_65 :
  if(((ATgetType(c_66) == AT_LIST) && ((ATermList) c_66 != ATempty)))
    {
      a_66 = ATgetFirst((ATermList) c_66);
      b_66 = (ATerm) ATgetNext((ATermList) c_66);
      {
        ATerm f_66 = NULL;
        t = not_null(b_66);
        {
          ATerm f_11;
          f_11 = t;
          {
            ATerm g_66 = NULL,i_66 = NULL,k_66 = NULL;
            ATerm g_11;
            g_11 = t;
            {
              ATerm h_66 = NULL;
              t = i_0(t);
              {
                h_66 = t;
                if(((g_66 != NULL) && (g_66 != h_66)))
                  _fail(h_66);
                else
                  g_66 = h_66;
              }
            }
            t = g_11;
            {
              ATerm j_66 = NULL;
              t = not_null(a_66);
              {
                t = f_0(t);
                {
                  j_66 = t;
                  if(((i_66 != NULL) && (i_66 != j_66)))
                    _fail(j_66);
                  else
                    i_66 = j_66;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_66)), not_null(i_66));
                {
                  k_66 = t;
                  if(((f_66 != NULL) && (f_66 != k_66)))
                    _fail(k_66);
                  else
                    f_66 = k_66;
                }
              }
            }
          }
          t = f_11;
          {
            ATerm a_3 (ATerm t)
            {
              t = not_null(f_66);
              return(t);
            }
            t = reverse_acc_2(t, f_0, a_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) c_66 == ATempty))
        {
          {
            t = term_h_9;
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
  ATerm b_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_47 (ATerm))
{
  ATerm v_66 = NULL,w_66 = NULL;
  v_66 = t;
  u_66 :
  if(match_cons(v_66, sym_Program_1))
    {
      w_66 = ATgetArgument(v_66, 0);
      {
        ATerm z_66 = NULL,b_67 = NULL;
        ATerm a_67 = NULL;
        t = SSLgetAnnotations(not_null(v_66));
        {
          a_67 = t;
          if(((z_66 != NULL) && (z_66 != a_67)))
            _fail(a_67);
          else
            z_66 = a_67;
        }
        {
          t = not_null(w_66);
          {
            ATerm d_67 = NULL;
            t = y_47(t);
            {
              b_67 = t;
              {
                ATerm e_67 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_67)), not_null(z_66));
                {
                  e_67 = t;
                  if(((d_67 != NULL) && (d_67 != e_67)))
                    _fail(e_67);
                  else
                    d_67 = e_67;
                }
                t = not_null(d_67);
              }
            }
          }
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
  ATerm p_67 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      ATerm q_67 = NULL;
      q_67 = t;
      if(((p_67 != NULL) && (p_67 != q_67)))
        _fail(q_67);
      else
        p_67 = q_67;
      return(t);
    }
    t = Program_1(t, d_3);
    return(t);
  }
  t = option_defined_1(t, c_3);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm r_67 = NULL;
      ATerm s_67 = NULL;
      t = term_h_9;
      {
        ATerm f_3 (ATerm t)
        {
          t = not_null(p_67);
          return(t);
        }
        t = short_description_1(t, f_3);
        {
          t = concat_strings_0(t);
          {
            s_67 = t;
            if(((r_67 != NULL) && (r_67 != s_67)))
              _fail(s_67);
            else
              r_67 = s_67;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATempty, not_null(r_67)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATempty, term_h_11));
      {
        t = printnl_0(t);
        {
          t = term_k_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm t_67 = NULL;
                  t_67 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_67)), term_l_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_3);
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm v_67 = NULL;
                    ATerm w_67 = NULL;
                    t = term_h_9;
                    {
                      ATerm i_3 (ATerm t)
                      {
                        t = not_null(p_67);
                        return(t);
                      }
                      t = long_description_1(t, i_3);
                      {
                        t = concat_strings_0(t);
                        {
                          w_67 = t;
                          if(((v_67 != NULL) && (v_67 != w_67)))
                            _fail(w_67);
                          else
                            v_67 = w_67;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_67)), term_m_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_3);
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
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
  d_68 = t;
  c_68 :
  if(match_cons(d_68, sym__2))
    {
      e_68 = ATgetArgument(d_68, 0);
      f_68 = ATgetArgument(d_68, 1);
      {
        ATerm n_11;
        n_11 = t;
        t = SSL_printnl(not_null(e_68), not_null(f_68));
        t = n_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm o_68 = NULL,p_68 = NULL;
  o_68 = t;
  n_68 :
  if(match_cons(o_68, sym_Undefined_1))
    {
      p_68 = ATgetArgument(o_68, 0);
      {
        ATerm s_68 = NULL,u_68 = NULL;
        ATerm t_68 = NULL;
        t = SSLgetAnnotations(not_null(o_68));
        {
          t_68 = t;
          if(((s_68 != NULL) && (s_68 != t_68)))
            _fail(t_68);
          else
            s_68 = t_68;
        }
        {
          t = not_null(p_68);
          {
            ATerm w_68 = NULL;
            t = z_47(t);
            {
              u_68 = t;
              {
                ATerm z_68 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_68)), not_null(s_68));
                {
                  z_68 = t;
                  if(((w_68 != NULL) && (w_68 != z_68)))
                    _fail(z_68);
                  else
                    w_68 = z_68;
                }
                t = not_null(w_68);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm e_69 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_74, _id);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = Cons_2(t, _id, e_69);
      }
    return(t);
  }
  t = e_69(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_63 (ATerm))
{
  t = fetch_1(t, b_63);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym_Help_0))
    {
      ATerm l_69 = NULL,n_69 = NULL;
      ATerm q_11;
      q_11 = t;
      {
        ATerm m_69 = NULL;
        t = SSLgetAnnotations(not_null(j_69));
        {
          m_69 = t;
          if(((l_69 != NULL) && (l_69 != m_69)))
            _fail(m_69);
          else
            l_69 = m_69;
        }
      }
      t = q_11;
      {
        ATerm o_69 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_69));
        {
          o_69 = t;
          if(((n_69 != NULL) && (n_69 != o_69)))
            _fail(o_69);
          else
            n_69 = o_69;
        }
        t = not_null(n_69);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_81 (ATerm))
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_81(t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym__2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      t = SSL_table_get(not_null(v_69), not_null(w_69));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
  d_70 = t;
  c_70 :
  if(match_cons(d_70, sym__3))
    {
      e_70 = ATgetArgument(d_70, 0);
      f_70 = ATgetArgument(d_70, 1);
      g_70 = ATgetArgument(d_70, 2);
      {
        ATerm t_11;
        t_11 = t;
        {
          ATerm k_70 = NULL;
          ATerm n_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_70), not_null(f_70));
          {
            ATerm u_11 = t;
            int v_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_11);
              }
            else
              {
                t = u_11;
                t = (ATerm) ATempty;
              }
            {
              n_70 = t;
              if(((k_70 != NULL) && (k_70 != n_70)))
                _fail(n_70);
              else
                k_70 = n_70;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_70), not_null(f_70), (ATerm) ATinsert(CheckATermList(not_null(k_70)), not_null(g_70)));
            t = table_put_0(t);
          }
        }
        t = t_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm r_70 = NULL;
  ATerm s_70 = NULL;
  t = term_h_9;
  {
    t = h_62(t);
    {
      s_70 = t;
      if(((r_70 != NULL) && (r_70 != s_70)))
        _fail(s_70);
      else
        r_70 = s_70;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_11, term_j_11, not_null(r_70));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  x_70 :
  if(match_string(y_70, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(y_70) == AT_LIST) && ((ATermList) y_70 != ATempty)))
        {
          z_70 = ATgetFirst((ATermList) y_70);
          a_71 = (ATerm) ATgetNext((ATermList) y_70);
          {
            ATerm d_71 = NULL;
            ATerm w_11;
            w_11 = t;
            {
              t = not_null(z_70);
              t = a_0(t);
            }
            t = w_11;
            {
              ATerm e_71 = NULL;
              t = term_h_9;
              {
                t = b_0(t);
                {
                  e_71 = t;
                  if(((d_71 != NULL) && (d_71 != e_71)))
                    _fail(e_71);
                  else
                    d_71 = e_71;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_71)), not_null(d_71));
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
  ATerm j_3 (ATerm t)
  {
    ATerm j_71 = NULL;
    j_71 = t;
    i_71 :
    if(!(match_string(j_71, "--help")))
      {
        if(!(match_string(j_71, "-h")))
          {
            if(!(match_string(j_71, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_y_11;
    return(t);
  }
  t = Option_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  m_71 = t;
  l_71 :
  if(((ATgetType(m_71) == AT_LIST) && ((ATermList) m_71 != ATempty)))
    {
      n_71 = ATgetFirst((ATermList) m_71);
      o_71 = (ATerm) ATgetNext((ATermList) m_71);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_71)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_71)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm))
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  y_71 = t;
  x_71 :
  if(((ATgetType(y_71) == AT_LIST) && ((ATermList) y_71 != ATempty)))
    {
      z_71 = ATgetFirst((ATermList) y_71);
      a_72 = (ATerm) ATgetNext((ATermList) y_71);
      {
        ATerm e_72 = NULL,g_72 = NULL;
        ATerm f_72 = NULL;
        t = SSLgetAnnotations(not_null(y_71));
        {
          f_72 = t;
          if(((e_72 != NULL) && (e_72 != f_72)))
            _fail(f_72);
          else
            e_72 = f_72;
        }
        {
          t = not_null(z_71);
          {
            ATerm i_72 = NULL;
            t = i_58(t);
            {
              g_72 = t;
              {
                t = not_null(a_72);
                {
                  ATerm k_72 = NULL;
                  t = j_58(t);
                  {
                    i_72 = t;
                    {
                      ATerm l_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_72)), not_null(g_72)), not_null(e_72));
                      {
                        l_72 = t;
                        if(((k_72 != NULL) && (k_72 != l_72)))
                          _fail(l_72);
                        else
                          k_72 = l_72;
                      }
                      t = not_null(k_72);
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
  ATerm v_72 = NULL;
  v_72 = t;
  u_72 :
  if(((ATermList) v_72 == ATempty))
    {
      {
        ATerm x_72 = NULL,z_72 = NULL;
        ATerm z_11;
        z_11 = t;
        {
          ATerm y_72 = NULL;
          t = SSLgetAnnotations(not_null(v_72));
          {
            y_72 = t;
            if(((x_72 != NULL) && (x_72 != y_72)))
              _fail(y_72);
            else
              x_72 = y_72;
          }
        }
        t = z_11;
        {
          ATerm a_73 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_72));
          {
            a_73 = t;
            if(((z_72 != NULL) && (z_72 != a_73)))
              _fail(a_73);
            else
              z_72 = a_73;
          }
          t = not_null(z_72);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_62 (ATerm))
{
  ATerm a_12;
  a_12 = t;
  {
    ATerm m_3 (ATerm t)
    {
      t = term_b_12;
      t = f_62(t);
      return(t);
    }
    t = try_1(t, m_3);
  }
  t = a_12;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm f_73 = NULL;
      f_73 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_73));
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      ATerm c_12 = t;
      int d_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              {
                t = f_62(t);
                t = Cons_2(t, _id, o_3);
              }
            }
          LocalPopChoice(d_12);
        }
      else
        {
          t = c_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
  ATerm g_12;
  g_12 = t;
  {
    ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
    o_73 = t;
    k_73 :
    if(match_cons(o_73, sym__3))
      {
        p_73 = ATgetArgument(o_73, 0);
        q_73 = ATgetArgument(o_73, 1);
        r_73 = ATgetArgument(o_73, 2);
        {
          if(((l_73 != NULL) && (l_73 != p_73)))
            _fail(p_73);
          else
            l_73 = p_73;
          {
            if(((m_73 != NULL) && (m_73 != q_73)))
              _fail(q_73);
            else
              m_73 = q_73;
            {
              if(((n_73 != NULL) && (n_73 != r_73)))
                _fail(r_73);
              else
                n_73 = r_73;
              t = SSL_table_put(not_null(l_73), not_null(m_73), not_null(n_73));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm u_73 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    t = term_i_12;
    t = table_put_0(t);
  }
  t = h_12;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm j_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_62(t);
          LocalPopChoice(m_12);
        }
      else
        {
          t = j_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm v_73 = NULL;
                  v_73 = t;
                  if(((u_73 != NULL) && (u_73 != v_73)))
                    _fail(v_73);
                  else
                    u_73 = v_73;
                  return(t);
                }
                t = Undefined_1(t, s_3);
                return(t);
              }
              t = option_defined_1(t, r_3);
              {
                ATerm p_12;
                p_12 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_73)), term_q_12));
                  t = printnl_0(t);
                }
                t = p_12;
                {
                  t = system_usage_0(t);
                  {
                    t = term_x_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_3);
      {
        ATerm r_12;
        r_12 = t;
        {
          t = term_i_11;
          t = table_destroy_0(t);
        }
        t = r_12;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm z_63 (ATerm), ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_64(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, t_3);
  {
    t = store_options_0(t);
    {
      ATerm u_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, b_64);
          LocalPopChoice(v_12);
        }
      else
        {
          t = u_12;
          {
            ATerm x_12 = t;
            int y_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, z_63);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(y_12);
              }
            else
              {
                t = x_12;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  t = iowrap_3(t, u_63, v_63, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_63 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    t = _2(t, _id, r_63);
    return(t);
  }
  t = iowrap_2(t, u_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
