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
ATerm term_i_13;
ATerm term_x_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_m_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_d_7;
ATerm term_q_4;
void init_constant_terms (void)
{
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__2, term_i_8, term_p_8);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_v_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_v_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_t_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__3, term_s_11, term_t_11, (ATerm) ATempty);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm e_53 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm q_54 (ATerm));
ATerm Op_2 (ATerm, ATerm f_56 (ATerm), ATerm g_56 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm b_53 (ATerm));
ATerm Alt_3 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm));
ATerm Case_4 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm), ATerm t_52 (ATerm), ATerm u_52 (ATerm));
ATerm Let_2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm Prim_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm Where_1 (ATerm, ATerm e_58 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm Build_1 (ATerm, ATerm z_57 (ATerm));
ATerm Thread_1 (ATerm, ATerm v_57 (ATerm));
ATerm All_1 (ATerm, ATerm u_57 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm s_57 (ATerm));
ATerm Cong_2 (ATerm, ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm Path_2 (ATerm, ATerm o_57 (ATerm), ATerm p_57 (ATerm));
ATerm Rec_2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm SVar_1 (ATerm, ATerm x_56 (ATerm));
ATerm Call_2 (ATerm, ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm GChoice_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm LChoice_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm Choice_2 (ATerm, ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm Seq_2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
ATerm Test_1 (ATerm, ATerm h_56 (ATerm));
ATerm Not_1 (ATerm, ATerm i_56 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm l_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm e_57 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_75 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm n_46 (ATerm), ATerm o_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_65 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_63 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm crush_2 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_63 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_68 (ATerm), ATerm f_68 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_62 (ATerm));
ATerm map_1 (ATerm, ATerm y_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_62 (ATerm));
ATerm Program_1 (ATerm, ATerm w_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_62 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_64 (ATerm), ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm l_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_64 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  i_10 :
  if(match_cons(m_10, sym_Var_1))
    {
      n_10 = ATgetArgument(m_10, 0);
      {
        ATerm t_3 = t;
        int u_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_11 = NULL,j_12 = NULL;
            ATerm v_11 = NULL;
            t = SSLgetAnnotations(not_null(m_10));
            {
              v_11 = t;
              if(((u_11 != NULL) && (u_11 != v_11)))
                _fail(v_11);
              else
                u_11 = v_11;
            }
            {
              t = not_null(n_10);
              {
                ATerm l_12 = NULL;
                t = s_0(t);
                {
                  j_12 = t;
                  {
                    ATerm w_12 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), not_null(u_11));
                    {
                      w_12 = t;
                      if(((l_12 != NULL) && (l_12 != w_12)))
                        _fail(w_12);
                      else
                        l_12 = w_12;
                    }
                    t = not_null(l_12);
                  }
                }
              }
            }
            LocalPopChoice(u_3);
          }
        else
          {
            t = t_3;
            {
              ATerm c_13 = NULL,e_13 = NULL;
              ATerm d_13 = NULL;
              t = SSLgetAnnotations(not_null(m_10));
              {
                d_13 = t;
                if(((c_13 != NULL) && (c_13 != d_13)))
                  _fail(d_13);
                else
                  c_13 = d_13;
              }
              {
                t = not_null(n_10);
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
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm e_53 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym_Assign_1))
    {
      w_13 = ATgetArgument(v_13, 0);
      {
        ATerm z_13 = NULL,b_14 = NULL;
        ATerm a_14 = NULL;
        t = SSLgetAnnotations(not_null(v_13));
        {
          a_14 = t;
          if(((z_13 != NULL) && (z_13 != a_14)))
            _fail(a_14);
          else
            z_13 = a_14;
        }
        {
          t = not_null(w_13);
          {
            ATerm d_14 = NULL;
            t = e_53(t);
            {
              b_14 = t;
              {
                ATerm e_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(b_14)), not_null(z_13));
                {
                  e_14 = t;
                  if(((d_14 != NULL) && (d_14 != e_14)))
                    _fail(e_14);
                  else
                    d_14 = e_14;
                }
                t = not_null(d_14);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm o_14 = NULL,p_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym_BuildDefault_1))
    {
      p_14 = ATgetArgument(o_14, 0);
      {
        ATerm s_14 = NULL,u_14 = NULL;
        ATerm t_14 = NULL;
        t = SSLgetAnnotations(not_null(o_14));
        {
          t_14 = t;
          if(((s_14 != NULL) && (s_14 != t_14)))
            _fail(t_14);
          else
            s_14 = t_14;
        }
        {
          t = not_null(p_14);
          {
            ATerm w_14 = NULL;
            t = q_54(t);
            {
              u_14 = t;
              {
                ATerm x_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(u_14)), not_null(s_14));
                {
                  x_14 = t;
                  if(((w_14 != NULL) && (w_14 != x_14)))
                    _fail(x_14);
                  else
                    w_14 = x_14;
                }
                t = not_null(w_14);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm f_56 (ATerm), ATerm g_56 (ATerm))
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_Op_2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(j_15);
          {
            ATerm s_15 = NULL;
            t = f_56(t);
            {
              q_15 = t;
              {
                t = not_null(k_15);
                {
                  ATerm u_15 = NULL;
                  t = g_56(t);
                  {
                    s_15 = t;
                    {
                      ATerm v_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_15), not_null(s_15)), not_null(o_15));
                      {
                        v_15 = t;
                        if(((u_15 != NULL) && (u_15 != v_15)))
                          _fail(v_15);
                        else
                          u_15 = v_15;
                      }
                      t = not_null(u_15);
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
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Str_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        ATerm v_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_16 = NULL,q_16 = NULL;
            ATerm p_16 = NULL;
            t = SSLgetAnnotations(not_null(k_16));
            {
              p_16 = t;
              if(((o_16 != NULL) && (o_16 != p_16)))
                _fail(p_16);
              else
                o_16 = p_16;
            }
            {
              t = not_null(l_16);
              {
                ATerm s_16 = NULL;
                t = r_0(t);
                {
                  q_16 = t;
                  {
                    ATerm t_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(q_16)), not_null(o_16));
                    {
                      t_16 = t;
                      if(((s_16 != NULL) && (s_16 != t_16)))
                        _fail(t_16);
                      else
                        s_16 = t_16;
                    }
                    t = not_null(s_16);
                  }
                }
              }
            }
            LocalPopChoice(w_3);
          }
        else
          {
            t = v_3;
            {
              ATerm w_16 = NULL,y_16 = NULL;
              ATerm x_16 = NULL;
              t = SSLgetAnnotations(not_null(k_16));
              {
                x_16 = t;
                if(((w_16 != NULL) && (w_16 != x_16)))
                  _fail(x_16);
                else
                  w_16 = x_16;
              }
              {
                t = not_null(l_16);
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
            }
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
  ATerm l_17 = NULL;
  l_17 = t;
  t = SSL_is_real(not_null(l_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym_Real_1))
    {
      y_17 = ATgetArgument(x_17, 0);
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_18 = NULL,d_18 = NULL;
            ATerm c_18 = NULL;
            t = SSLgetAnnotations(not_null(x_17));
            {
              c_18 = t;
              if(((b_18 != NULL) && (b_18 != c_18)))
                _fail(c_18);
              else
                b_18 = c_18;
            }
            {
              t = not_null(y_17);
              {
                ATerm f_18 = NULL;
                t = q_0(t);
                {
                  d_18 = t;
                  {
                    ATerm g_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(d_18)), not_null(b_18));
                    {
                      g_18 = t;
                      if(((f_18 != NULL) && (f_18 != g_18)))
                        _fail(g_18);
                      else
                        f_18 = g_18;
                    }
                    t = not_null(f_18);
                  }
                }
              }
            }
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
            {
              ATerm j_18 = NULL,l_18 = NULL;
              ATerm k_18 = NULL;
              t = SSLgetAnnotations(not_null(x_17));
              {
                k_18 = t;
                if(((j_18 != NULL) && (j_18 != k_18)))
                  _fail(k_18);
                else
                  j_18 = k_18;
              }
              {
                t = not_null(y_17);
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
            }
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
  ATerm g_19 = NULL,h_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_Int_1))
    {
      h_19 = ATgetArgument(g_19, 0);
      {
        ATerm z_3 = t;
        int a_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_19 = NULL,m_19 = NULL;
            ATerm l_19 = NULL;
            t = SSLgetAnnotations(not_null(g_19));
            {
              l_19 = t;
              if(((k_19 != NULL) && (k_19 != l_19)))
                _fail(l_19);
              else
                k_19 = l_19;
            }
            {
              t = not_null(h_19);
              {
                ATerm o_19 = NULL;
                t = p_0(t);
                {
                  m_19 = t;
                  {
                    ATerm p_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(m_19)), not_null(k_19));
                    {
                      p_19 = t;
                      if(((o_19 != NULL) && (o_19 != p_19)))
                        _fail(p_19);
                      else
                        o_19 = p_19;
                    }
                    t = not_null(o_19);
                  }
                }
              }
            }
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
            {
              ATerm s_19 = NULL,u_19 = NULL;
              ATerm t_19 = NULL;
              t = SSLgetAnnotations(not_null(g_19));
              {
                t_19 = t;
                if(((s_19 != NULL) && (s_19 != t_19)))
                  _fail(t_19);
                else
                  s_19 = t_19;
              }
              {
                t = not_null(h_19);
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
            }
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
  ATerm k_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_Wld_0))
    {
      ATerm m_20 = NULL,o_20 = NULL;
      ATerm b_4;
      b_4 = t;
      {
        ATerm n_20 = NULL;
        t = SSLgetAnnotations(not_null(k_20));
        {
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
        }
      }
      t = b_4;
      {
        ATerm p_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(m_20));
        {
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
        }
        t = not_null(o_20);
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
  ATerm c_4 = t;
  int d_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(d_4);
    }
  else
    {
      t = c_4;
      {
        ATerm e_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(f_4);
          }
        else
          {
            t = e_4;
            {
              ATerm g_4 = t;
              int h_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(h_4);
                }
              else
                {
                  t = g_4;
                  {
                    ATerm i_4 = t;
                    int j_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(j_4);
                      }
                    else
                      {
                        t = i_4;
                        {
                          ATerm k_4 = t;
                          int l_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(l_4);
                            }
                          else
                            {
                              t = k_4;
                              {
                                ATerm m_4 = t;
                                int n_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, c_0);
                                    LocalPopChoice(n_4);
                                  }
                                else
                                  {
                                    t = m_4;
                                    {
                                      ATerm o_4 = t;
                                      int p_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          LocalPopChoice(p_4);
                                        }
                                      else
                                        {
                                          t = o_4;
                                          {
                                            ATerm d_0 (ATerm t)
                                            {
                                              t = term_q_4;
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
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_Assign_2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      {
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 = NULL,n_21 = NULL;
            ATerm m_21 = NULL;
            t = SSLgetAnnotations(not_null(f_21));
            {
              m_21 = t;
              if(((l_21 != NULL) && (l_21 != m_21)))
                _fail(m_21);
              else
                l_21 = m_21;
            }
            {
              t = not_null(g_21);
              {
                ATerm p_21 = NULL;
                t = n_0(t);
                {
                  n_21 = t;
                  {
                    t = not_null(h_21);
                    {
                      ATerm r_21 = NULL;
                      t = o_0(t);
                      {
                        p_21 = t;
                        {
                          ATerm s_21 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(n_21), not_null(p_21)), not_null(l_21));
                          {
                            s_21 = t;
                            if(((r_21 != NULL) && (r_21 != s_21)))
                              _fail(s_21);
                            else
                              r_21 = s_21;
                          }
                          t = not_null(r_21);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
            {
              ATerm w_21 = NULL,y_21 = NULL;
              ATerm x_21 = NULL;
              t = SSLgetAnnotations(not_null(f_21));
              {
                x_21 = t;
                if(((w_21 != NULL) && (w_21 != x_21)))
                  _fail(x_21);
                else
                  w_21 = x_21;
              }
              {
                t = not_null(g_21);
                {
                  ATerm a_22 = NULL;
                  t = n_0(t);
                  {
                    y_21 = t;
                    {
                      t = not_null(h_21);
                      {
                        ATerm c_22 = NULL;
                        t = o_0(t);
                        {
                          a_22 = t;
                          {
                            ATerm d_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(y_21), not_null(a_22)), not_null(w_21));
                            {
                              d_22 = t;
                              if(((c_22 != NULL) && (c_22 != d_22)))
                                _fail(d_22);
                              else
                                c_22 = d_22;
                            }
                            t = not_null(c_22);
                          }
                        }
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
ATerm Continue_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_Continue_1))
    {
      u_22 = ATgetArgument(t_22, 0);
      {
        ATerm x_22 = NULL,z_22 = NULL;
        ATerm y_22 = NULL;
        t = SSLgetAnnotations(not_null(t_22));
        {
          y_22 = t;
          if(((x_22 != NULL) && (x_22 != y_22)))
            _fail(y_22);
          else
            x_22 = y_22;
        }
        {
          t = not_null(u_22);
          {
            ATerm b_23 = NULL;
            t = b_53(t);
            {
              z_22 = t;
              {
                ATerm c_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(z_22)), not_null(x_22));
                {
                  c_23 = t;
                  if(((b_23 != NULL) && (b_23 != c_23)))
                    _fail(c_23);
                  else
                    b_23 = c_23;
                }
                t = not_null(b_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_Alt_3))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      y_23 = ATgetArgument(v_23, 2);
      {
        ATerm g_24 = NULL,i_24 = NULL;
        ATerm h_24 = NULL;
        t = SSLgetAnnotations(not_null(v_23));
        {
          h_24 = t;
          if(((g_24 != NULL) && (g_24 != h_24)))
            _fail(h_24);
          else
            g_24 = h_24;
        }
        {
          t = not_null(w_23);
          {
            ATerm k_24 = NULL;
            t = y_52(t);
            {
              i_24 = t;
              {
                t = not_null(x_23);
                {
                  ATerm m_24 = NULL;
                  t = z_52(t);
                  {
                    k_24 = t;
                    {
                      t = not_null(y_23);
                      {
                        ATerm o_24 = NULL;
                        t = a_53(t);
                        {
                          m_24 = t;
                          {
                            ATerm p_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(i_24), not_null(k_24), not_null(m_24)), not_null(g_24));
                            {
                              p_24 = t;
                              if(((o_24 != NULL) && (o_24 != p_24)))
                                _fail(p_24);
                              else
                                o_24 = p_24;
                            }
                            t = not_null(o_24);
                          }
                        }
                      }
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
ATerm Case_4 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm), ATerm t_52 (ATerm), ATerm u_52 (ATerm))
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym_Case_4))
    {
      g_25 = ATgetArgument(f_25, 0);
      h_25 = ATgetArgument(f_25, 1);
      i_25 = ATgetArgument(f_25, 2);
      j_25 = ATgetArgument(f_25, 3);
      {
        ATerm p_25 = NULL,r_25 = NULL;
        ATerm q_25 = NULL;
        t = SSLgetAnnotations(not_null(f_25));
        {
          q_25 = t;
          if(((p_25 != NULL) && (p_25 != q_25)))
            _fail(q_25);
          else
            p_25 = q_25;
        }
        {
          t = not_null(g_25);
          {
            ATerm b_26 = NULL;
            t = r_52(t);
            {
              r_25 = t;
              {
                t = not_null(h_25);
                {
                  ATerm d_26 = NULL;
                  t = s_52(t);
                  {
                    b_26 = t;
                    {
                      t = not_null(i_25);
                      {
                        ATerm h_26 = NULL;
                        t = t_52(t);
                        {
                          d_26 = t;
                          {
                            t = not_null(j_25);
                            {
                              ATerm j_26 = NULL;
                              t = u_52(t);
                              {
                                h_26 = t;
                                {
                                  ATerm m_26 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(r_25), not_null(b_26), not_null(d_26), not_null(h_26)), not_null(p_25));
                                  {
                                    m_26 = t;
                                    if(((j_26 != NULL) && (j_26 != m_26)))
                                      _fail(m_26);
                                    else
                                      j_26 = m_26;
                                  }
                                  t = not_null(j_26);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym_Let_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm t_27 = NULL,v_27 = NULL;
        ATerm u_27 = NULL;
        t = SSLgetAnnotations(not_null(m_27));
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
        {
          t = not_null(n_27);
          {
            ATerm x_27 = NULL;
            t = a_57(t);
            {
              v_27 = t;
              {
                t = not_null(o_27);
                {
                  ATerm z_27 = NULL;
                  t = b_57(t);
                  {
                    x_27 = t;
                    {
                      ATerm a_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(v_27), not_null(x_27)), not_null(t_27));
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
ATerm Prim_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Prim_2))
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
            t = f_58(t);
            {
              u_28 = t;
              {
                t = not_null(o_28);
                {
                  ATerm y_28 = NULL;
                  t = g_58(t);
                  {
                    w_28 = t;
                    {
                      ATerm z_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(u_28), not_null(w_28)), not_null(s_28));
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
ATerm Where_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Where_1))
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
            ATerm u_29 = NULL;
            t = e_58(t);
            {
              q_29 = t;
              {
                ATerm v_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(q_29)), not_null(o_29));
                {
                  v_29 = t;
                  if(((u_29 != NULL) && (u_29 != v_29)))
                    _fail(v_29);
                  else
                    u_29 = v_29;
                }
                t = not_null(u_29);
              }
            }
          }
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
  ATerm h_30 = NULL;
  h_30 = t;
  t = SSL_is_int(not_null(h_30));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym_Scope_2))
    {
      r_30 = ATgetArgument(q_30, 0);
      s_30 = ATgetArgument(q_30, 1);
      {
        ATerm w_30 = NULL,y_30 = NULL;
        ATerm x_30 = NULL;
        t = SSLgetAnnotations(not_null(q_30));
        {
          x_30 = t;
          if(((w_30 != NULL) && (w_30 != x_30)))
            _fail(x_30);
          else
            w_30 = x_30;
        }
        {
          t = not_null(r_30);
          {
            ATerm a_31 = NULL;
            t = c_58(t);
            {
              y_30 = t;
              {
                t = not_null(s_30);
                {
                  ATerm f_31 = NULL;
                  t = d_58(t);
                  {
                    a_31 = t;
                    {
                      ATerm g_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(y_30), not_null(a_31)), not_null(w_30));
                      {
                        g_31 = t;
                        if(((f_31 != NULL) && (f_31 != g_31)))
                          _fail(g_31);
                        else
                          f_31 = g_31;
                      }
                      t = not_null(f_31);
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
ATerm Build_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym_Build_1))
    {
      s_31 = ATgetArgument(r_31, 0);
      {
        ATerm v_31 = NULL,x_31 = NULL;
        ATerm w_31 = NULL;
        t = SSLgetAnnotations(not_null(r_31));
        {
          w_31 = t;
          if(((v_31 != NULL) && (v_31 != w_31)))
            _fail(w_31);
          else
            v_31 = w_31;
        }
        {
          t = not_null(s_31);
          {
            ATerm z_31 = NULL;
            t = z_57(t);
            {
              x_31 = t;
              {
                ATerm a_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_31)), not_null(v_31));
                {
                  a_32 = t;
                  if(((z_31 != NULL) && (z_31 != a_32)))
                    _fail(a_32);
                  else
                    z_31 = a_32;
                }
                t = not_null(z_31);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm o_32 = NULL,p_32 = NULL;
  o_32 = t;
  n_32 :
  if(match_cons(o_32, sym_Thread_1))
    {
      p_32 = ATgetArgument(o_32, 0);
      {
        ATerm s_32 = NULL,u_32 = NULL;
        ATerm t_32 = NULL;
        t = SSLgetAnnotations(not_null(o_32));
        {
          t_32 = t;
          if(((s_32 != NULL) && (s_32 != t_32)))
            _fail(t_32);
          else
            s_32 = t_32;
        }
        {
          t = not_null(p_32);
          {
            ATerm w_32 = NULL;
            t = v_57(t);
            {
              u_32 = t;
              {
                ATerm x_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(u_32)), not_null(s_32));
                {
                  x_32 = t;
                  if(((w_32 != NULL) && (w_32 != x_32)))
                    _fail(x_32);
                  else
                    w_32 = x_32;
                }
                t = not_null(w_32);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym_All_1))
    {
      i_33 = ATgetArgument(h_33, 0);
      {
        ATerm l_33 = NULL,n_33 = NULL;
        ATerm m_33 = NULL;
        t = SSLgetAnnotations(not_null(h_33));
        {
          m_33 = t;
          if(((l_33 != NULL) && (l_33 != m_33)))
            _fail(m_33);
          else
            l_33 = m_33;
        }
        {
          t = not_null(i_33);
          {
            ATerm p_33 = NULL;
            t = u_57(t);
            {
              n_33 = t;
              {
                ATerm q_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(n_33)), not_null(l_33));
                {
                  q_33 = t;
                  if(((p_33 != NULL) && (p_33 != q_33)))
                    _fail(q_33);
                  else
                    p_33 = q_33;
                }
                t = not_null(p_33);
              }
            }
          }
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
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym_Some_1))
    {
      i_34 = ATgetArgument(h_34, 0);
      {
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_34 = NULL,n_34 = NULL;
            ATerm m_34 = NULL;
            t = SSLgetAnnotations(not_null(h_34));
            {
              m_34 = t;
              if(((l_34 != NULL) && (l_34 != m_34)))
                _fail(m_34);
              else
                l_34 = m_34;
            }
            {
              t = not_null(i_34);
              {
                ATerm p_34 = NULL;
                t = m_0(t);
                {
                  n_34 = t;
                  {
                    ATerm q_34 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(n_34)), not_null(l_34));
                    {
                      q_34 = t;
                      if(((p_34 != NULL) && (p_34 != q_34)))
                        _fail(q_34);
                      else
                        p_34 = q_34;
                    }
                    t = not_null(p_34);
                  }
                }
              }
            }
            LocalPopChoice(u_4);
          }
        else
          {
            t = t_4;
            {
              ATerm t_34 = NULL,v_34 = NULL;
              ATerm u_34 = NULL;
              t = SSLgetAnnotations(not_null(h_34));
              {
                u_34 = t;
                if(((t_34 != NULL) && (t_34 != u_34)))
                  _fail(u_34);
                else
                  t_34 = u_34;
              }
              {
                t = not_null(i_34);
                {
                  ATerm x_34 = NULL;
                  t = m_0(t);
                  {
                    v_34 = t;
                    {
                      ATerm y_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(v_34)), not_null(t_34));
                      {
                        y_34 = t;
                        if(((x_34 != NULL) && (x_34 != y_34)))
                          _fail(y_34);
                        else
                          x_34 = y_34;
                      }
                      t = not_null(x_34);
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
ATerm One_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym_One_1))
    {
      n_35 = ATgetArgument(m_35, 0);
      {
        ATerm q_35 = NULL,s_35 = NULL;
        ATerm r_35 = NULL;
        t = SSLgetAnnotations(not_null(m_35));
        {
          r_35 = t;
          if(((q_35 != NULL) && (q_35 != r_35)))
            _fail(r_35);
          else
            q_35 = r_35;
        }
        {
          t = not_null(n_35);
          {
            ATerm u_35 = NULL;
            t = s_57(t);
            {
              s_35 = t;
              {
                ATerm v_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(s_35)), not_null(q_35));
                {
                  v_35 = t;
                  if(((u_35 != NULL) && (u_35 != v_35)))
                    _fail(v_35);
                  else
                    u_35 = v_35;
                }
                t = not_null(u_35);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  f_36 :
  if(match_cons(g_36, sym_Cong_2))
    {
      h_36 = ATgetArgument(g_36, 0);
      i_36 = ATgetArgument(g_36, 1);
      {
        ATerm m_36 = NULL,o_36 = NULL;
        ATerm n_36 = NULL;
        t = SSLgetAnnotations(not_null(g_36));
        {
          n_36 = t;
          if(((m_36 != NULL) && (m_36 != n_36)))
            _fail(n_36);
          else
            m_36 = n_36;
        }
        {
          t = not_null(h_36);
          {
            ATerm q_36 = NULL;
            t = q_57(t);
            {
              o_36 = t;
              {
                t = not_null(i_36);
                {
                  ATerm s_36 = NULL;
                  t = r_57(t);
                  {
                    q_36 = t;
                    {
                      ATerm t_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(o_36), not_null(q_36)), not_null(m_36));
                      {
                        t_36 = t;
                        if(((s_36 != NULL) && (s_36 != t_36)))
                          _fail(t_36);
                        else
                          s_36 = t_36;
                      }
                      t = not_null(s_36);
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
ATerm Path_2 (ATerm t, ATerm o_57 (ATerm), ATerm p_57 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_Path_2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm l_37 = NULL,n_37 = NULL;
        ATerm m_37 = NULL;
        t = SSLgetAnnotations(not_null(f_37));
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
        {
          t = not_null(g_37);
          {
            ATerm p_37 = NULL;
            t = o_57(t);
            {
              n_37 = t;
              {
                t = not_null(h_37);
                {
                  ATerm r_37 = NULL;
                  t = p_57(t);
                  {
                    p_37 = t;
                    {
                      ATerm s_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(n_37), not_null(p_37)), not_null(l_37));
                      {
                        s_37 = t;
                        if(((r_37 != NULL) && (r_37 != s_37)))
                          _fail(s_37);
                        else
                          r_37 = s_37;
                      }
                      t = not_null(r_37);
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
ATerm Rec_2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym_Rec_2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      {
        ATerm k_38 = NULL,m_38 = NULL;
        ATerm l_38 = NULL;
        t = SSLgetAnnotations(not_null(e_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
        {
          t = not_null(f_38);
          {
            ATerm o_38 = NULL;
            t = y_56(t);
            {
              m_38 = t;
              {
                t = not_null(g_38);
                {
                  ATerm q_38 = NULL;
                  t = z_56(t);
                  {
                    o_38 = t;
                    {
                      ATerm r_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(m_38), not_null(o_38)), not_null(k_38));
                      {
                        r_38 = t;
                        if(((q_38 != NULL) && (q_38 != r_38)))
                          _fail(r_38);
                        else
                          q_38 = r_38;
                      }
                      t = not_null(q_38);
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
ATerm SVar_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym_SVar_1))
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
            t = x_56(t);
            {
              k_39 = t;
              {
                ATerm n_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(k_39)), not_null(i_39));
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
ATerm Call_2 (ATerm t, ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_Call_2))
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
            t = m_57(t);
            {
              g_40 = t;
              {
                t = not_null(a_40);
                {
                  ATerm k_40 = NULL;
                  t = n_57(t);
                  {
                    i_40 = t;
                    {
                      ATerm l_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(g_40), not_null(i_40)), not_null(e_40));
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
ATerm LGChoice_2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_LGChoice_2))
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
            t = u_56(t);
            {
              g_41 = t;
              {
                t = not_null(a_41);
                {
                  ATerm k_41 = NULL;
                  t = v_56(t);
                  {
                    i_41 = t;
                    {
                      ATerm l_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(g_41), not_null(i_41)), not_null(e_41));
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
ATerm GChoice_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym_GChoice_2))
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
            t = s_56(t);
            {
              f_42 = t;
              {
                t = not_null(z_41);
                {
                  ATerm j_42 = NULL;
                  t = t_56(t);
                  {
                    h_42 = t;
                    {
                      ATerm k_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(f_42), not_null(h_42)), not_null(d_42));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym_GuardedLChoice_3))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
      a_43 = ATgetArgument(x_42, 2);
      {
        ATerm f_43 = NULL,h_43 = NULL;
        ATerm g_43 = NULL;
        t = SSLgetAnnotations(not_null(x_42));
        {
          g_43 = t;
          if(((f_43 != NULL) && (f_43 != g_43)))
            _fail(g_43);
          else
            f_43 = g_43;
        }
        {
          t = not_null(y_42);
          {
            ATerm j_43 = NULL;
            t = p_56(t);
            {
              h_43 = t;
              {
                t = not_null(z_42);
                {
                  ATerm l_43 = NULL;
                  t = q_56(t);
                  {
                    j_43 = t;
                    {
                      t = not_null(a_43);
                      {
                        ATerm n_43 = NULL;
                        t = r_56(t);
                        {
                          l_43 = t;
                          {
                            ATerm o_43 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(h_43), not_null(j_43), not_null(l_43)), not_null(f_43));
                            {
                              o_43 = t;
                              if(((n_43 != NULL) && (n_43 != o_43)))
                                _fail(o_43);
                              else
                                n_43 = o_43;
                            }
                            t = not_null(n_43);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym_LChoice_2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      {
        ATerm h_44 = NULL,j_44 = NULL;
        ATerm i_44 = NULL;
        t = SSLgetAnnotations(not_null(b_44));
        {
          i_44 = t;
          if(((h_44 != NULL) && (h_44 != i_44)))
            _fail(i_44);
          else
            h_44 = i_44;
        }
        {
          t = not_null(c_44);
          {
            ATerm l_44 = NULL;
            t = n_56(t);
            {
              j_44 = t;
              {
                t = not_null(d_44);
                {
                  ATerm n_44 = NULL;
                  t = o_56(t);
                  {
                    l_44 = t;
                    {
                      ATerm o_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(j_44), not_null(l_44)), not_null(h_44));
                      {
                        o_44 = t;
                        if(((n_44 != NULL) && (n_44 != o_44)))
                          _fail(o_44);
                        else
                          n_44 = o_44;
                      }
                      t = not_null(n_44);
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
ATerm Choice_2 (ATerm t, ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  z_44 :
  if(match_cons(a_45, sym_Choice_2))
    {
      b_45 = ATgetArgument(a_45, 0);
      c_45 = ATgetArgument(a_45, 1);
      {
        ATerm g_45 = NULL,l_45 = NULL;
        ATerm k_45 = NULL;
        t = SSLgetAnnotations(not_null(a_45));
        {
          k_45 = t;
          if(((g_45 != NULL) && (g_45 != k_45)))
            _fail(k_45);
          else
            g_45 = k_45;
        }
        {
          t = not_null(b_45);
          {
            ATerm n_45 = NULL;
            t = l_56(t);
            {
              l_45 = t;
              {
                t = not_null(c_45);
                {
                  ATerm t_45 = NULL;
                  t = m_56(t);
                  {
                    n_45 = t;
                    {
                      ATerm u_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_45), not_null(n_45)), not_null(g_45));
                      {
                        u_45 = t;
                        if(((t_45 != NULL) && (t_45 != u_45)))
                          _fail(u_45);
                        else
                          t_45 = u_45;
                      }
                      t = not_null(t_45);
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
ATerm Seq_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym_Seq_2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      {
        ATerm m_46 = NULL,q_46 = NULL;
        ATerm p_46 = NULL;
        t = SSLgetAnnotations(not_null(g_46));
        {
          p_46 = t;
          if(((m_46 != NULL) && (m_46 != p_46)))
            _fail(p_46);
          else
            m_46 = p_46;
        }
        {
          t = not_null(h_46);
          {
            ATerm s_46 = NULL;
            t = j_56(t);
            {
              q_46 = t;
              {
                t = not_null(i_46);
                {
                  ATerm u_46 = NULL;
                  t = k_56(t);
                  {
                    s_46 = t;
                    {
                      ATerm v_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(q_46), not_null(s_46)), not_null(m_46));
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
ATerm Test_1 (ATerm t, ATerm h_56 (ATerm))
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
            t = h_56(t);
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
ATerm Not_1 (ATerm t, ATerm i_56 (ATerm))
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
            t = i_56(t);
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
      ATerm v_4;
      v_4 = t;
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
      t = v_4;
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
      ATerm w_4;
      w_4 = t;
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
      t = w_4;
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
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(e_5);
                      }
                    else
                      {
                        t = d_5;
                        {
                          ATerm f_5 = t;
                          int g_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(g_5);
                            }
                          else
                            {
                              t = f_5;
                              {
                                ATerm h_5 = t;
                                int i_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(i_5);
                                  }
                                else
                                  {
                                    t = h_5;
                                    {
                                      ATerm j_5 = t;
                                      int k_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(k_5);
                                        }
                                      else
                                        {
                                          t = j_5;
                                          {
                                            ATerm l_5 = t;
                                            int m_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(m_5);
                                              }
                                            else
                                              {
                                                t = l_5;
                                                {
                                                  ATerm n_5 = t;
                                                  int o_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(o_5);
                                                    }
                                                  else
                                                    {
                                                      t = n_5;
                                                      {
                                                        ATerm p_5 = t;
                                                        int q_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(q_5);
                                                          }
                                                        else
                                                          {
                                                            t = p_5;
                                                            {
                                                              ATerm r_5 = t;
                                                              int s_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, g_0, Nil_0);
                                                                  LocalPopChoice(s_5);
                                                                }
                                                              else
                                                                {
                                                                  t = r_5;
                                                                  {
                                                                    ATerm t_5 = t;
                                                                    int u_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(u_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_5;
                                                                        {
                                                                          ATerm v_5 = t;
                                                                          int w_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(w_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_5;
                                                                              {
                                                                                ATerm x_5 = t;
                                                                                int y_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm h_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, h_0);
                                                                                    LocalPopChoice(y_5);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_5;
                                                                                    {
                                                                                      ATerm z_5 = t;
                                                                                      int a_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(a_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_5;
                                                                                          {
                                                                                            ATerm b_6 = t;
                                                                                            int c_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(c_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_6;
                                                                                                {
                                                                                                  ATerm d_6 = t;
                                                                                                  int e_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Build_1(t, term_expression_0);
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
                                                                                                                        ATerm t_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm l_6 = t;
                                                                                                                            int m_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                LocalPopChoice(m_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = l_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, u_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, t_0, strategy_expression_0);
                                                                                                                        LocalPopChoice(k_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = j_6;
                                                                                                                        {
                                                                                                                          ATerm n_6 = t;
                                                                                                                          int o_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
                                                                                                                              LocalPopChoice(o_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = n_6;
                                                                                                                              {
                                                                                                                                ATerm p_6 = t;
                                                                                                                                int q_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm v_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, v_0);
                                                                                                                                    LocalPopChoice(q_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = p_6;
                                                                                                                                    {
                                                                                                                                      ATerm r_6 = t;
                                                                                                                                      int s_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm w_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm x_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm t_6 = t;
                                                                                                                                              int u_6 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  LocalPopChoice(u_6);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = t_6;
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
                                                                                                                                          LocalPopChoice(s_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = r_6;
                                                                                                                                          {
                                                                                                                                            ATerm v_6 = t;
                                                                                                                                            int w_6 = stack_ptr;
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
                                                                                                                                                LocalPopChoice(w_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = v_6;
                                                                                                                                                {
                                                                                                                                                  ATerm x_6 = t;
                                                                                                                                                  int y_6 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Continue_1(t, is_string_0);
                                                                                                                                                      LocalPopChoice(y_6);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = x_6;
                                                                                                                                                      {
                                                                                                                                                        ATerm z_6 = t;
                                                                                                                                                        int a_7 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm c_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, c_1, term_expression_0);
                                                                                                                                                            LocalPopChoice(a_7);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = z_6;
                                                                                                                                                            {
                                                                                                                                                              ATerm b_7 = t;
                                                                                                                                                              int c_7 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm d_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, d_1);
                                                                                                                                                                  LocalPopChoice(c_7);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = b_7;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm e_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_d_7;
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
ATerm DontInline_0 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  t_49 :
  if(match_cons(u_49, sym_DontInline_0))
    {
      ATerm w_49 = NULL,y_49 = NULL;
      ATerm e_7;
      e_7 = t;
      {
        ATerm x_49 = NULL;
        t = SSLgetAnnotations(not_null(u_49));
        {
          x_49 = t;
          if(((w_49 != NULL) && (w_49 != x_49)))
            _fail(x_49);
          else
            w_49 = x_49;
        }
      }
      t = e_7;
      {
        ATerm z_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DontInline_0), not_null(w_49));
        {
          z_49 = t;
          if(((y_49 != NULL) && (y_49 != z_49)))
            _fail(z_49);
          else
            y_49 = z_49;
        }
        t = not_null(y_49);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm l_57 (ATerm))
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym_SDef_4))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      o_50 = ATgetArgument(l_50, 2);
      p_50 = ATgetArgument(l_50, 3);
      {
        ATerm v_50 = NULL,x_50 = NULL;
        ATerm w_50 = NULL;
        t = SSLgetAnnotations(not_null(l_50));
        {
          w_50 = t;
          if(((v_50 != NULL) && (v_50 != w_50)))
            _fail(w_50);
          else
            v_50 = w_50;
        }
        {
          t = not_null(m_50);
          {
            ATerm z_50 = NULL;
            t = i_57(t);
            {
              x_50 = t;
              {
                t = not_null(n_50);
                {
                  ATerm b_51 = NULL;
                  t = j_57(t);
                  {
                    z_50 = t;
                    {
                      t = not_null(o_50);
                      {
                        ATerm d_51 = NULL;
                        t = k_57(t);
                        {
                          b_51 = t;
                          {
                            t = not_null(p_50);
                            {
                              ATerm f_51 = NULL;
                              t = l_57(t);
                              {
                                d_51 = t;
                                {
                                  ATerm g_51 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_4, not_null(x_50), not_null(z_50), not_null(b_51), not_null(d_51)), not_null(v_50));
                                  {
                                    g_51 = t;
                                    if(((f_51 != NULL) && (f_51 != g_51)))
                                      _fail(g_51);
                                    else
                                      f_51 = g_51;
                                  }
                                  t = not_null(f_51);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm e_57 (ATerm))
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym_SDef_3))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      y_51 = ATgetArgument(v_51, 2);
      {
        ATerm d_52 = NULL,f_52 = NULL;
        ATerm e_52 = NULL;
        t = SSLgetAnnotations(not_null(v_51));
        {
          e_52 = t;
          if(((d_52 != NULL) && (d_52 != e_52)))
            _fail(e_52);
          else
            d_52 = e_52;
        }
        {
          t = not_null(w_51);
          {
            ATerm h_52 = NULL;
            t = c_57(t);
            {
              f_52 = t;
              {
                t = not_null(x_51);
                {
                  ATerm j_52 = NULL;
                  t = d_57(t);
                  {
                    h_52 = t;
                    {
                      t = not_null(y_51);
                      {
                        ATerm l_52 = NULL;
                        t = e_57(t);
                        {
                          j_52 = t;
                          {
                            ATerm m_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_52), not_null(h_52), not_null(j_52)), not_null(d_52));
                            {
                              m_52 = t;
                              if(((l_52 != NULL) && (l_52 != m_52)))
                                _fail(m_52);
                              else
                                l_52 = m_52;
                            }
                            t = not_null(l_52);
                          }
                        }
                      }
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
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
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
            ATerm f_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, f_1, is_string_0, Nil_0, strategy_expression_0);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            {
              ATerm g_1 (ATerm t)
              {
                t = term_j_7;
                return(t);
              }
              t = debug_1(t, g_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm x_52 (ATerm t)
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        t = Cons_2(t, a_75, x_52);
      }
    return(t);
  }
  t = x_52(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_o_7;
          return(t);
        }
        t = debug_1(t, h_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_46 (ATerm), ATerm o_46 (ATerm))
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  i_53 :
  if(match_cons(j_53, sym__2))
    {
      k_53 = ATgetArgument(j_53, 0);
      l_53 = ATgetArgument(j_53, 1);
      {
        ATerm p_53 = NULL,r_53 = NULL;
        ATerm q_53 = NULL;
        t = SSLgetAnnotations(not_null(j_53));
        {
          q_53 = t;
          if(((p_53 != NULL) && (p_53 != q_53)))
            _fail(q_53);
          else
            p_53 = q_53;
        }
        {
          t = not_null(k_53);
          {
            ATerm t_53 = NULL;
            t = n_46(t);
            {
              r_53 = t;
              {
                t = not_null(l_53);
                {
                  ATerm v_53 = NULL;
                  t = o_46(t);
                  {
                    t_53 = t;
                    {
                      ATerm w_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_53), not_null(t_53)), not_null(p_53));
                      {
                        w_53 = t;
                        if(((v_53 != NULL) && (v_53 != w_53)))
                          _fail(w_53);
                        else
                          v_53 = w_53;
                      }
                      t = not_null(v_53);
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
  ATerm e_54 = NULL;
  ATerm p_7;
  p_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm f_54 = NULL,g_54 = NULL;
      f_54 = t;
      d_54 :
      if(match_cons(f_54, sym_Program_1))
        {
          g_54 = ATgetArgument(f_54, 0);
          if(((e_54 != NULL) && (e_54 != g_54)))
            _fail(g_54);
          else
            e_54 = g_54;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), not_null(e_54)), term_r_7));
      {
        t = printnl_0(t);
        {
          t = term_t_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym__2))
    {
      l_54 = ATgetArgument(k_54, 0);
      m_54 = ATgetArgument(k_54, 1);
      {
        ATerm u_7;
        u_7 = t;
        t = SSL_printnl(not_null(l_54), not_null(m_54));
        t = u_7;
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
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t_54 = t;
  s_54 :
  if(match_cons(t_54, sym__2))
    {
      u_54 = ATgetArgument(t_54, 0);
      v_54 = ATgetArgument(t_54, 1);
      {
        t = not_null(u_54);
        {
          ATerm j_1 (ATerm t)
          {
            t = not_null(v_54);
            return(t);
          }
          t = at_end_1(t, j_1);
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
ATerm debug_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm v_7;
  v_7 = t;
  {
    ATerm b_55 = NULL,d_55 = NULL;
    ATerm w_7;
    w_7 = t;
    {
      ATerm c_55 = NULL;
      t = t_65(t);
      {
        c_55 = t;
        if(((b_55 != NULL) && (b_55 != c_55)))
          _fail(c_55);
        else
          b_55 = c_55;
      }
    }
    t = w_7;
    {
      ATerm e_55 = NULL;
      e_55 = t;
      if(((d_55 != NULL) && (d_55 != e_55)))
        _fail(e_55);
      else
        d_55 = e_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_55)), not_null(b_55)));
        t = printnl_0(t);
      }
    }
  }
  t = v_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_55 = NULL;
  i_55 = t;
  t = SSL_is_string(not_null(i_55));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_1);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            {
              ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
              r_55 = t;
              q_55 :
              if(match_cons(r_55, sym_Path_1))
                {
                  s_55 = ATgetArgument(r_55, 0);
                  t = not_null(s_55);
                }
              else
                {
                  if(match_cons(r_55, sym_Var_1))
                    {
                      s_55 = ATgetArgument(r_55, 0);
                      {
                        t = not_null(s_55);
                        {
                          ATerm b_8 = t;
                          int c_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_8);
                            }
                          else
                            {
                              t = b_8;
                              {
                                ATerm l_1 (ATerm t)
                                {
                                  t = term_d_8;
                                  return(t);
                                }
                                t = debug_1(t, l_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_55, sym_Prefix_2))
                        {
                          s_55 = ATgetArgument(r_55, 0);
                          t_55 = ATgetArgument(r_55, 1);
                          {
                            ATerm y_55 = NULL,a_56 = NULL;
                            ATerm e_8;
                            e_8 = t;
                            {
                              ATerm z_55 = NULL;
                              t = not_null(s_55);
                              {
                                t = eval_config_0(t);
                                {
                                  z_55 = t;
                                  if(((y_55 != NULL) && (y_55 != z_55)))
                                    _fail(z_55);
                                  else
                                    y_55 = z_55;
                                }
                              }
                            }
                            t = e_8;
                            {
                              ATerm b_56 = NULL;
                              t = not_null(t_55);
                              {
                                t = eval_config_0(t);
                                {
                                  b_56 = t;
                                  if(((a_56 != NULL) && (a_56 != b_56)))
                                    _fail(b_56);
                                  else
                                    a_56 = b_56;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_55), not_null(a_56));
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
  ATerm t_57 = NULL;
  t_57 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(t_57));
    {
      t = table_get_0(t);
      {
        ATerm m_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_8;
            g_8 = t;
            {
              ATerm x_57 = NULL;
              ATerm y_57 = NULL;
              y_57 = t;
              if(((x_57 != NULL) && (x_57 != y_57)))
                _fail(y_57);
              else
                x_57 = y_57;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_8, not_null(t_57), not_null(x_57));
                t = table_put_0(t);
              }
            }
            t = g_8;
          }
          return(t);
        }
        t = try_1(t, m_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm h_8;
    h_8 = t;
    {
      ATerm k_58 = NULL;
      ATerm l_58 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          l_58 = t;
          if(((k_58 != NULL) && (k_58 != l_58)))
            _fail(l_58);
          else
            k_58 = l_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_58), term_j_8);
        t = geq_0(t);
      }
    }
    t = h_8;
    t = d_63(t);
    return(t);
  }
  t = try_1(t, n_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATempty, term_k_8));
  {
    t = printnl_0(t);
    {
      t = term_t_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_58 = NULL;
  o_58 = t;
  t = SSL_TicksToSeconds(not_null(o_58));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
  t_58 = t;
  s_58 :
  if(match_cons(t_58, sym__2))
    {
      u_58 = ATgetArgument(t_58, 0);
      v_58 = ATgetArgument(t_58, 1);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_58), not_null(v_58));
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            t = SSL_addr(not_null(u_58), not_null(v_58));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_69(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
        c_59 = t;
        b_59 :
        if(((ATgetType(c_59) == AT_LIST) && ((ATermList) c_59 != ATempty)))
          {
            d_59 = ATgetFirst((ATermList) c_59);
            e_59 = (ATerm) ATgetNext((ATermList) c_59);
            {
              ATerm h_59 = NULL;
              ATerm i_59 = NULL;
              t = not_null(e_59);
              {
                t = foldr_2(t, q_69, r_69);
                {
                  i_59 = t;
                  if(((h_59 != NULL) && (h_59 != i_59)))
                    _fail(i_59);
                  else
                    h_59 = i_59;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_59), not_null(h_59));
                t = r_69(t);
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
ATerm crush_2 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm))
{
  ATerm p_59 = NULL;
  ATerm r_59 = NULL;
  p_59 = t;
  {
    ATerm s_59 = NULL;
    ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL;
    t = not_null(p_59);
    {
      s_59 = t;
      {
        t = SSL_explode_term(not_null(s_59));
        {
          u_59 = t;
          o_59 :
          if(match_cons(u_59, sym__2))
            {
              v_59 = ATgetArgument(u_59, 0);
              w_59 = ATgetArgument(u_59, 1);
              if(((r_59 != NULL) && (r_59 != w_59)))
                _fail(w_59);
              else
                r_59 = w_59;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_59);
      t = foldr_2(t, e_71, f_71);
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
    ATerm o_1 (ATerm t)
    {
      t = term_p_8;
      return(t);
    }
    t = crush_2(t, o_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  c_60 = t;
  b_60 :
  if(match_cons(c_60, sym__2))
    {
      d_60 = ATgetArgument(c_60, 0);
      e_60 = ATgetArgument(c_60, 1);
      {
        ATerm q_8;
        q_8 = t;
        {
          ATerm r_8 = t;
          int s_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_60), not_null(e_60));
              LocalPopChoice(s_8);
            }
          else
            {
              t = r_8;
              t = SSL_gtr(not_null(d_60), not_null(e_60));
            }
        }
        t = q_8;
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
  ATerm k_60 = NULL;
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
      l_60 = t;
      j_60 :
      if(match_cons(l_60, sym__2))
        {
          m_60 = ATgetArgument(l_60, 0);
          n_60 = ATgetArgument(l_60, 1);
          {
            if(((k_60 != NULL) && (k_60 != m_60)))
              _fail(m_60);
            else
              k_60 = m_60;
            if(((k_60 != NULL) && (k_60 != n_60)))
              _fail(n_60);
            else
              k_60 = n_60;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm v_8;
    v_8 = t;
    {
      ATerm q_60 = NULL;
      ATerm r_60 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          r_60 = t;
          if(((q_60 != NULL) && (q_60 != r_60)))
            _fail(r_60);
          else
            q_60 = r_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_60), term_t_7);
        t = geq_0(t);
      }
    }
    t = v_8;
    t = c_63(t);
    return(t);
  }
  t = try_1(t, p_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm v_60 = NULL,x_60 = NULL;
    ATerm w_8;
    w_8 = t;
    {
      ATerm w_60 = NULL;
      t = run_time_0(t);
      {
        w_60 = t;
        if(((v_60 != NULL) && (v_60 != w_60)))
          _fail(w_60);
        else
          v_60 = w_60;
      }
    }
    t = w_8;
    {
      ATerm y_60 = NULL;
      t = term_x_8;
      {
        t = get_config_0(t);
        {
          y_60 = t;
          if(((x_60 != NULL) && (x_60 != y_60)))
            _fail(y_60);
          else
            x_60 = y_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_8), not_null(v_60)), term_y_8), not_null(x_60)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_1);
  {
    t = term_p_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  d_61 = t;
  c_61 :
  if(match_cons(d_61, sym__2))
    {
      e_61 = ATgetArgument(d_61, 0);
      f_61 = ATgetArgument(d_61, 1);
      t = SSL_WriteToTextFile(not_null(e_61), not_null(f_61));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
  l_61 = t;
  k_61 :
  if(match_cons(l_61, sym__2))
    {
      m_61 = ATgetArgument(l_61, 0);
      n_61 = ATgetArgument(l_61, 1);
      t = SSL_WriteToBinaryFile(not_null(m_61), not_null(n_61));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_61 = NULL;
  ATerm a_9;
  a_9 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm w_61 = NULL,x_61 = NULL;
            w_61 = t;
            s_61 :
            if(match_cons(w_61, sym_Output_1))
              {
                x_61 = ATgetArgument(w_61, 0);
                if(((v_61 != NULL) && (v_61 != x_61)))
                  _fail(x_61);
                else
                  v_61 = x_61;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_1);
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
          {
            ATerm y_61 = NULL;
            t = term_d_9;
            {
              y_61 = t;
              if(((v_61 != NULL) && (v_61 != y_61)))
                _fail(y_61);
              else
                v_61 = y_61;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_1, _id);
  }
  t = a_9;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = not_null(v_61);
        return(t);
      }
      t = split_2(t, u_1, _id);
      return(t);
    }
    t = _2(t, _id, t_1);
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm z_61 = NULL;
              z_61 = t;
              u_61 :
              if(!(match_cons(z_61, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_1);
            return(t);
          }
          t = _2(t, v_1, WriteToBinaryFile_0);
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm l_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
  ATerm g_9;
  g_9 = t;
  t = dtime_0(t);
  t = g_9;
  {
    t = d_65(t);
    {
      ATerm h_9;
      h_9 = t;
      {
        ATerm m_62 = NULL;
        t = dtime_0(t);
        {
          m_62 = t;
          if(((l_62 != NULL) && (l_62 != m_62)))
            _fail(m_62);
          else
            l_62 = m_62;
        }
      }
      t = h_9;
      {
        n_62 = t;
        k_62 :
        if(match_cons(n_62, sym__2))
          {
            o_62 = ATgetArgument(n_62, 0);
            p_62 = ATgetArgument(n_62, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_62)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_62))), not_null(p_62));
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
  ATerm v_62 = NULL;
  v_62 = t;
  t = SSL_ReadFromFile(not_null(v_62));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_68 (ATerm), ATerm f_68 (ATerm))
{
  ATerm b_63 = NULL,f_63 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm e_63 = NULL;
    t = e_68(t);
    {
      e_63 = t;
      if(((b_63 != NULL) && (b_63 != e_63)))
        _fail(e_63);
      else
        b_63 = e_63;
    }
  }
  t = i_9;
  {
    ATerm g_63 = NULL;
    t = f_68(t);
    {
      g_63 = t;
      if(((f_63 != NULL) && (f_63 != g_63)))
        _fail(g_63);
      else
        f_63 = g_63;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_63), not_null(f_63));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_63 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          ATerm n_63 = NULL,o_63 = NULL;
          n_63 = t;
          k_63 :
          if(match_cons(n_63, sym_Input_1))
            {
              o_63 = ATgetArgument(n_63, 0);
              if(((m_63 != NULL) && (m_63 != o_63)))
                _fail(o_63);
              else
                m_63 = o_63;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_1);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        {
          ATerm p_63 = NULL;
          t = term_m_9;
          {
            p_63 = t;
            if(((m_63 != NULL) && (m_63 != p_63)))
              _fail(p_63);
            else
              m_63 = p_63;
          }
        }
      }
  }
  t = j_9;
  {
    ATerm y_1 (ATerm t)
    {
      t = not_null(m_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_63 = NULL;
  w_63 = t;
  v_63 :
  if(match_cons(w_63, sym_Version_0))
    {
      ATerm y_63 = NULL,a_64 = NULL;
      ATerm n_9;
      n_9 = t;
      {
        ATerm z_63 = NULL;
        t = SSLgetAnnotations(not_null(w_63));
        {
          z_63 = t;
          if(((y_63 != NULL) && (y_63 != z_63)))
            _fail(z_63);
          else
            y_63 = z_63;
        }
      }
      t = n_9;
      {
        ATerm b_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_63));
        {
          b_64 = t;
          if(((a_64 != NULL) && (a_64 != b_64)))
            _fail(b_64);
          else
            a_64 = b_64;
        }
        t = not_null(a_64);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_1);
  t = b_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_64 = NULL;
  m_64 = t;
  t = SSL_table_create(not_null(m_64));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_64 = NULL;
  u_64 = t;
  {
    ATerm s_9;
    s_9 = t;
    {
      t = term_t_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_9, term_u_9, not_null(u_64));
          t = table_put_0(t);
        }
      }
    }
    t = s_9;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_64 = NULL;
  y_64 = t;
  t = SSL_string_to_int(not_null(y_64));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  i_65 = t;
  g_65 :
  if(match_string(i_65, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_65) == AT_LIST) && ((ATermList) i_65 != ATempty)))
        {
          j_65 = ATgetFirst((ATermList) i_65);
          k_65 = (ATerm) ATgetNext((ATermList) i_65);
          h_65 :
          if(((ATgetType(k_65) == AT_LIST) && ((ATermList) k_65 != ATempty)))
            {
              l_65 = ATgetFirst((ATermList) k_65);
              m_65 = (ATerm) ATgetNext((ATermList) k_65);
              {
                ATerm q_65 = NULL;
                ATerm v_9;
                v_9 = t;
                {
                  t = not_null(j_65);
                  t = j_0(t);
                }
                t = v_9;
                {
                  ATerm r_65 = NULL;
                  t = not_null(l_65);
                  {
                    t = k_0(t);
                    {
                      r_65 = t;
                      if(((q_65 != NULL) && (q_65 != r_65)))
                        _fail(r_65);
                      else
                        q_65 = r_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_65)), not_null(q_65));
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
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm j_66 = NULL;
        j_66 = t;
        w_65 :
        if(!(match_string(j_66, "-i")))
          {
            if(!(match_string(j_66, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm m_66 = NULL;
        ATerm y_9;
        y_9 = t;
        {
          ATerm k_66 = NULL;
          ATerm l_66 = NULL;
          l_66 = t;
          if(((k_66 != NULL) && (k_66 != l_66)))
            _fail(l_66);
          else
            k_66 = l_66;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(k_66));
            t = set_config_0(t);
          }
        }
        t = y_9;
        {
          ATerm n_66 = NULL;
          n_66 = t;
          if(((m_66 != NULL) && (m_66 != n_66)))
            _fail(n_66);
          else
            m_66 = n_66;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_66));
        }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_a_10;
        return(t);
      }
      t = ArgOption_3(t, a_2, b_2, c_2);
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm o_66 = NULL;
              o_66 = t;
              z_65 :
              if(!(match_string(o_66, "-o")))
                {
                  if(!(match_string(o_66, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm r_66 = NULL;
              ATerm d_10;
              d_10 = t;
              {
                ATerm p_66 = NULL;
                ATerm q_66 = NULL;
                q_66 = t;
                if(((p_66 != NULL) && (p_66 != q_66)))
                  _fail(q_66);
                else
                  p_66 = q_66;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(p_66));
                  t = set_config_0(t);
                }
              }
              t = d_10;
              {
                ATerm s_66 = NULL;
                s_66 = t;
                if(((r_66 != NULL) && (r_66 != s_66)))
                  _fail(s_66);
                else
                  r_66 = s_66;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_66));
              }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = term_f_10;
              return(t);
            }
            t = ArgOption_3(t, d_2, e_2, f_2);
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm g_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm t_66 = NULL;
                    t_66 = t;
                    c_66 :
                    if(!(match_string(t_66, "-S")))
                      {
                        if(!(match_string(t_66, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    t = term_j_10;
                    t = set_config_0(t);
                    t = term_k_10;
                    return(t);
                  }
                  ATerm i_2 (ATerm t)
                  {
                    t = term_l_10;
                    return(t);
                  }
                  t = Option_3(t, g_2, h_2, i_2);
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = g_10;
                  {
                    ATerm o_10 = t;
                    int p_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_2 (ATerm t)
                        {
                          ATerm u_66 = NULL;
                          u_66 = t;
                          d_66 :
                          if(!(match_string(u_66, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_2 (ATerm t)
                        {
                          ATerm x_66 = NULL;
                          ATerm q_10;
                          q_10 = t;
                          {
                            ATerm v_66 = NULL;
                            ATerm w_66 = NULL;
                            t = string_to_int_0(t);
                            {
                              w_66 = t;
                              if(((v_66 != NULL) && (v_66 != w_66)))
                                _fail(w_66);
                              else
                                v_66 = w_66;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_8, not_null(v_66));
                              t = set_config_0(t);
                            }
                          }
                          t = q_10;
                          {
                            ATerm y_66 = NULL;
                            y_66 = t;
                            if(((x_66 != NULL) && (x_66 != y_66)))
                              _fail(y_66);
                            else
                              x_66 = y_66;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_66));
                          }
                          return(t);
                        }
                        ATerm l_2 (ATerm t)
                        {
                          t = term_r_10;
                          return(t);
                        }
                        t = ArgOption_3(t, j_2, k_2, l_2);
                        LocalPopChoice(p_10);
                      }
                    else
                      {
                        t = o_10;
                        {
                          ATerm s_10 = t;
                          int t_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_2 (ATerm t)
                              {
                                ATerm z_66 = NULL;
                                z_66 = t;
                                g_66 :
                                if(!(match_string(z_66, "-v")))
                                  {
                                    if(!(match_string(z_66, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_2 (ATerm t)
                              {
                                t = term_w_10;
                                t = set_config_0(t);
                                t = term_x_10;
                                return(t);
                              }
                              ATerm o_2 (ATerm t)
                              {
                                t = term_y_10;
                                return(t);
                              }
                              t = Option_3(t, m_2, n_2, o_2);
                              LocalPopChoice(t_10);
                            }
                          else
                            {
                              t = s_10;
                              {
                                ATerm z_10 = t;
                                int a_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm a_67 = NULL;
                                      a_67 = t;
                                      h_66 :
                                      if(!(match_string(a_67, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_2 (ATerm t)
                                    {
                                      t = term_c_11;
                                      t = set_config_0(t);
                                      t = term_d_11;
                                      return(t);
                                    }
                                    ATerm r_2 (ATerm t)
                                    {
                                      t = term_e_11;
                                      return(t);
                                    }
                                    t = Option_3(t, p_2, q_2, r_2);
                                    LocalPopChoice(a_11);
                                  }
                                else
                                  {
                                    t = z_10;
                                    {
                                      ATerm s_2 (ATerm t)
                                      {
                                        ATerm b_67 = NULL;
                                        b_67 = t;
                                        i_66 :
                                        if(!(match_string(b_67, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm t_2 (ATerm t)
                                      {
                                        t = term_g_11;
                                        t = set_config_0(t);
                                        t = term_h_11;
                                        return(t);
                                      }
                                      ATerm u_2 (ATerm t)
                                      {
                                        t = term_i_11;
                                        return(t);
                                      }
                                      t = Option_3(t, s_2, t_2, u_2);
                                    }
                                  }
                              }
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
  ATerm j_67 = NULL;
  j_67 = t;
  t = SSL_table_destroy(not_null(j_67));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_67 = NULL;
  n_67 = t;
  t = SSL_exit(not_null(n_67));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_67 = NULL;
  r_67 = t;
  t = SSL_implode_string(not_null(r_67));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm u_67 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_67);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          t = Nil_0(t);
          t = m_75(t);
        }
      }
    return(t);
  }
  t = u_67(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
        x_67 = t;
        w_67 :
        if(((ATgetType(x_67) == AT_LIST) && ((ATermList) x_67 != ATempty)))
          {
            y_67 = ATgetFirst((ATermList) x_67);
            z_67 = (ATerm) ATgetNext((ATermList) x_67);
            {
              t = not_null(y_67);
              {
                ATerm v_2 (ATerm t)
                {
                  t = not_null(z_67);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_2);
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
  ATerm h_68 = NULL;
  h_68 = t;
  t = SSL_explode_string(not_null(h_68));
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
ATerm long_description_1 (ATerm t, ATerm c_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm k_68 (ATerm t)
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = Cons_2(t, y_74, k_68);
      }
    return(t);
  }
  t = k_68(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  t_68 = t;
  q_68 :
  if(((ATgetType(t_68) == AT_LIST) && ((ATermList) t_68 != ATempty)))
    {
      r_68 = ATgetFirst((ATermList) t_68);
      s_68 = (ATerm) ATgetNext((ATermList) t_68);
      {
        ATerm w_68 = NULL;
        t = not_null(s_68);
        {
          ATerm p_11;
          p_11 = t;
          {
            ATerm x_68 = NULL,z_68 = NULL,b_69 = NULL;
            ATerm q_11;
            q_11 = t;
            {
              ATerm y_68 = NULL;
              t = i_0(t);
              {
                y_68 = t;
                if(((x_68 != NULL) && (x_68 != y_68)))
                  _fail(y_68);
                else
                  x_68 = y_68;
              }
            }
            t = q_11;
            {
              ATerm a_69 = NULL;
              t = not_null(r_68);
              {
                t = f_0(t);
                {
                  a_69 = t;
                  if(((z_68 != NULL) && (z_68 != a_69)))
                    _fail(a_69);
                  else
                    z_68 = a_69;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_68)), not_null(z_68));
                {
                  b_69 = t;
                  if(((w_68 != NULL) && (w_68 != b_69)))
                    _fail(b_69);
                  else
                    w_68 = b_69;
                }
              }
            }
          }
          t = p_11;
          {
            ATerm w_2 (ATerm t)
            {
              t = not_null(w_68);
              return(t);
            }
            t = reverse_acc_2(t, f_0, w_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_68 == ATempty))
        {
          {
            t = term_v_10;
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
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_47 (ATerm))
{
  ATerm m_69 = NULL,n_69 = NULL;
  m_69 = t;
  l_69 :
  if(match_cons(m_69, sym_Program_1))
    {
      n_69 = ATgetArgument(m_69, 0);
      {
        ATerm s_69 = NULL,u_69 = NULL;
        ATerm t_69 = NULL;
        t = SSLgetAnnotations(not_null(m_69));
        {
          t_69 = t;
          if(((s_69 != NULL) && (s_69 != t_69)))
            _fail(t_69);
          else
            s_69 = t_69;
        }
        {
          t = not_null(n_69);
          {
            ATerm w_69 = NULL;
            t = w_47(t);
            {
              u_69 = t;
              {
                ATerm x_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_69)), not_null(s_69));
                {
                  x_69 = t;
                  if(((w_69 != NULL) && (w_69 != x_69)))
                    _fail(x_69);
                  else
                    w_69 = x_69;
                }
                t = not_null(w_69);
              }
            }
          }
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
  ATerm g_70 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      ATerm h_70 = NULL;
      h_70 = t;
      if(((g_70 != NULL) && (g_70 != h_70)))
        _fail(h_70);
      else
        g_70 = h_70;
      return(t);
    }
    t = Program_1(t, z_2);
    return(t);
  }
  t = option_defined_1(t, y_2);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm i_70 = NULL;
      ATerm j_70 = NULL;
      t = term_v_10;
      {
        ATerm b_3 (ATerm t)
        {
          t = not_null(g_70);
          return(t);
        }
        t = short_description_1(t, b_3);
        {
          t = concat_strings_0(t);
          {
            j_70 = t;
            if(((i_70 != NULL) && (i_70 != j_70)))
              _fail(j_70);
            else
              i_70 = j_70;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATempty, not_null(i_70)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, a_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATempty, term_r_11));
      {
        t = printnl_0(t);
        {
          t = term_w_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm k_70 = NULL;
                  k_70 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_70)), term_x_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_3);
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm m_70 = NULL;
                    ATerm n_70 = NULL;
                    t = term_v_10;
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(g_70);
                        return(t);
                      }
                      t = long_description_1(t, e_3);
                      {
                        t = concat_strings_0(t);
                        {
                          n_70 = t;
                          if(((m_70 != NULL) && (m_70 != n_70)))
                            _fail(n_70);
                          else
                            m_70 = n_70;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_70)), term_y_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_3);
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
ATerm Undefined_1 (ATerm t, ATerm x_47 (ATerm))
{
  ATerm x_70 = NULL,y_70 = NULL;
  x_70 = t;
  w_70 :
  if(match_cons(x_70, sym_Undefined_1))
    {
      y_70 = ATgetArgument(x_70, 0);
      {
        ATerm b_71 = NULL,d_71 = NULL;
        ATerm c_71 = NULL;
        t = SSLgetAnnotations(not_null(x_70));
        {
          c_71 = t;
          if(((b_71 != NULL) && (b_71 != c_71)))
            _fail(c_71);
          else
            b_71 = c_71;
        }
        {
          t = not_null(y_70);
          {
            ATerm h_71 = NULL;
            t = x_47(t);
            {
              d_71 = t;
              {
                ATerm i_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_71)), not_null(b_71));
                {
                  i_71 = t;
                  if(((h_71 != NULL) && (h_71 != i_71)))
                    _fail(i_71);
                  else
                    h_71 = i_71;
                }
                t = not_null(h_71);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm n_71 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_75, _id);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = Cons_2(t, _id, n_71);
      }
    return(t);
  }
  t = n_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_63 (ATerm))
{
  t = fetch_1(t, a_63);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_71 = NULL;
  s_71 = t;
  r_71 :
  if(match_cons(s_71, sym_Help_0))
    {
      ATerm u_71 = NULL,w_71 = NULL;
      ATerm b_12;
      b_12 = t;
      {
        ATerm v_71 = NULL;
        t = SSLgetAnnotations(not_null(s_71));
        {
          v_71 = t;
          if(((u_71 != NULL) && (u_71 != v_71)))
            _fail(v_71);
          else
            u_71 = v_71;
        }
      }
      t = b_12;
      {
        ATerm x_71 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_71));
        {
          x_71 = t;
          if(((w_71 != NULL) && (w_71 != x_71)))
            _fail(x_71);
          else
            w_71 = x_71;
        }
        t = not_null(w_71);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_82(t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  d_72 = t;
  c_72 :
  if(match_cons(d_72, sym__2))
    {
      e_72 = ATgetArgument(d_72, 0);
      f_72 = ATgetArgument(d_72, 1);
      t = SSL_table_get(not_null(e_72), not_null(f_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  m_72 = t;
  l_72 :
  if(match_cons(m_72, sym__3))
    {
      n_72 = ATgetArgument(m_72, 0);
      o_72 = ATgetArgument(m_72, 1);
      p_72 = ATgetArgument(m_72, 2);
      {
        ATerm e_12;
        e_12 = t;
        {
          ATerm t_72 = NULL;
          ATerm u_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_72), not_null(o_72));
          {
            ATerm f_12 = t;
            int g_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_12);
              }
            else
              {
                t = f_12;
                t = (ATerm) ATempty;
              }
            {
              u_72 = t;
              if(((t_72 != NULL) && (t_72 != u_72)))
                _fail(u_72);
              else
                t_72 = u_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_72), not_null(o_72), (ATerm) ATinsert(CheckATermList(not_null(t_72)), not_null(p_72)));
            t = table_put_0(t);
          }
        }
        t = e_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm y_72 = NULL;
  ATerm z_72 = NULL;
  t = term_v_10;
  {
    t = g_62(t);
    {
      z_72 = t;
      if(((y_72 != NULL) && (y_72 != z_72)))
        _fail(z_72);
      else
        y_72 = z_72;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_11, term_t_11, not_null(y_72));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  e_73 :
  if(match_string(f_73, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(f_73) == AT_LIST) && ((ATermList) f_73 != ATempty)))
        {
          g_73 = ATgetFirst((ATermList) f_73);
          h_73 = (ATerm) ATgetNext((ATermList) f_73);
          {
            ATerm k_73 = NULL;
            ATerm h_12;
            h_12 = t;
            {
              t = not_null(g_73);
              t = a_0(t);
            }
            t = h_12;
            {
              ATerm l_73 = NULL;
              t = term_v_10;
              {
                t = b_0(t);
                {
                  l_73 = t;
                  if(((k_73 != NULL) && (k_73 != l_73)))
                    _fail(l_73);
                  else
                    k_73 = l_73;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_73)), not_null(k_73));
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
  ATerm f_3 (ATerm t)
  {
    ATerm q_73 = NULL;
    q_73 = t;
    p_73 :
    if(!(match_string(q_73, "--help")))
      {
        if(!(match_string(q_73, "-h")))
          {
            if(!(match_string(q_73, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_i_12;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_k_12;
    return(t);
  }
  t = Option_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  s_73 :
  if(((ATgetType(t_73) == AT_LIST) && ((ATermList) t_73 != ATempty)))
    {
      u_73 = ATgetFirst((ATermList) t_73);
      v_73 = (ATerm) ATgetNext((ATermList) t_73);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_73)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_73)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm))
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  e_74 :
  if(((ATgetType(f_74) == AT_LIST) && ((ATermList) f_74 != ATempty)))
    {
      g_74 = ATgetFirst((ATermList) f_74);
      h_74 = (ATerm) ATgetNext((ATermList) f_74);
      {
        ATerm l_74 = NULL,n_74 = NULL;
        ATerm m_74 = NULL;
        t = SSLgetAnnotations(not_null(f_74));
        {
          m_74 = t;
          if(((l_74 != NULL) && (l_74 != m_74)))
            _fail(m_74);
          else
            l_74 = m_74;
        }
        {
          t = not_null(g_74);
          {
            ATerm p_74 = NULL;
            t = h_58(t);
            {
              n_74 = t;
              {
                t = not_null(h_74);
                {
                  ATerm r_74 = NULL;
                  t = i_58(t);
                  {
                    p_74 = t;
                    {
                      ATerm s_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_74)), not_null(n_74)), not_null(l_74));
                      {
                        s_74 = t;
                        if(((r_74 != NULL) && (r_74 != s_74)))
                          _fail(s_74);
                        else
                          r_74 = s_74;
                      }
                      t = not_null(r_74);
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
  ATerm i_75 = NULL;
  i_75 = t;
  f_75 :
  if(((ATermList) i_75 == ATempty))
    {
      {
        ATerm k_75 = NULL,o_75 = NULL;
        ATerm m_12;
        m_12 = t;
        {
          ATerm l_75 = NULL;
          t = SSLgetAnnotations(not_null(i_75));
          {
            l_75 = t;
            if(((k_75 != NULL) && (k_75 != l_75)))
              _fail(l_75);
            else
              k_75 = l_75;
          }
        }
        t = m_12;
        {
          ATerm p_75 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_75));
          {
            p_75 = t;
            if(((o_75 != NULL) && (o_75 != p_75)))
              _fail(p_75);
            else
              o_75 = p_75;
          }
          t = not_null(o_75);
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
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
  v_75 = t;
  u_75 :
  if(match_cons(v_75, sym__2))
    {
      w_75 = ATgetArgument(v_75, 0);
      x_75 = ATgetArgument(v_75, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_8, not_null(w_75), not_null(x_75));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm n_12;
  n_12 = t;
  {
    ATerm i_3 (ATerm t)
    {
      t = term_o_12;
      t = e_62(t);
      return(t);
    }
    t = try_1(t, i_3);
  }
  t = n_12;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm f_76 = NULL;
      ATerm p_12;
      p_12 = t;
      {
        ATerm d_76 = NULL;
        ATerm e_76 = NULL;
        e_76 = t;
        if(((d_76 != NULL) && (d_76 != e_76)))
          _fail(e_76);
        else
          d_76 = e_76;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(d_76));
          t = set_config_0(t);
        }
      }
      t = p_12;
      {
        ATerm g_76 = NULL;
        g_76 = t;
        if(((f_76 != NULL) && (f_76 != g_76)))
          _fail(g_76);
        else
          f_76 = g_76;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_76));
      }
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm q_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
              {
                t = e_62(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          LocalPopChoice(r_12);
        }
      else
        {
          t = q_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_3, k_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
  ATerm u_12;
  u_12 = t;
  {
    ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
    q_76 = t;
    l_76 :
    if(match_cons(q_76, sym__3))
      {
        r_76 = ATgetArgument(q_76, 0);
        s_76 = ATgetArgument(q_76, 1);
        t_76 = ATgetArgument(q_76, 2);
        {
          if(((m_76 != NULL) && (m_76 != r_76)))
            _fail(r_76);
          else
            m_76 = r_76;
          {
            if(((n_76 != NULL) && (n_76 != s_76)))
              _fail(s_76);
            else
              n_76 = s_76;
            {
              if(((o_76 != NULL) && (o_76 != t_76)))
                _fail(t_76);
              else
                o_76 = t_76;
              t = SSL_table_put(not_null(m_76), not_null(n_76), not_null(o_76));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm w_76 = NULL;
  ATerm v_12;
  v_12 = t;
  {
    t = term_x_12;
    t = table_put_0(t);
  }
  t = v_12;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_62(t);
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_3);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_p_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm x_76 = NULL;
                  x_76 = t;
                  if(((w_76 != NULL) && (w_76 != x_76)))
                    _fail(x_76);
                  else
                    w_76 = x_76;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, n_3);
              {
                ATerm f_13;
                f_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_76)), term_i_13));
                  t = printnl_0(t);
                }
                t = f_13;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, m_3);
      {
        ATerm j_13;
        j_13 = t;
        {
          t = term_s_11;
          t = table_destroy_0(t);
        }
        t = j_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_64 (ATerm), ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_64(t);
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_3);
  {
    t = store_options_0(t);
    {
      t = s_64(t);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_64);
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, p_64);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm l_64 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm q_13;
      q_13 = t;
      {
        ATerm a_77 = NULL;
        ATerm b_77 = NULL;
        t = term_x_8;
        {
          t = get_config_0(t);
          {
            b_77 = t;
            if(((a_77 != NULL) && (a_77 != b_77)))
              _fail(b_77);
            else
              a_77 = b_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATempty, not_null(a_77)));
          t = printnl_0(t);
        }
      }
      t = q_13;
      return(t);
    }
    t = if_verbose2_1(t, r_3);
    return(t);
  }
  t = iowrap_4(t, j_64, k_64, l_64, q_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  t = iowrap_3(t, h_64, i_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    t = _2(t, _id, e_64);
    return(t);
  }
  t = iowrap_2(t, s_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
