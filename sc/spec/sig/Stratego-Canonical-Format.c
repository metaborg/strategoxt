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
ATerm term_d_15;
ATerm term_x_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_k_6;
ATerm term_m_5;
ATerm term_b_5;
void init_constant_terms (void)
{
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_c_10);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_10);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_i_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_i_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__3, term_k_13, term_l_13, (ATerm) ATempty);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm v_49 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm y_49 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm z_49 (ATerm), ATerm a_50 (ATerm));
ATerm Alt_3 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm), ATerm u_49 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm m_86 (ATerm));
ATerm Case_4 (ATerm, ATerm l_49 (ATerm), ATerm m_49 (ATerm), ATerm n_49 (ATerm), ATerm o_49 (ATerm));
ATerm Let_2 (ATerm, ATerm t_58 (ATerm), ATerm u_58 (ATerm));
ATerm Prim_2 (ATerm, ATerm y_59 (ATerm), ATerm z_59 (ATerm));
ATerm Where_1 (ATerm, ATerm x_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm Build_1 (ATerm, ATerm s_59 (ATerm));
ATerm Op_2 (ATerm, ATerm y_57 (ATerm), ATerm z_57 (ATerm));
ATerm As_2 (ATerm, ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm j_56 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm r_59 (ATerm));
ATerm Thread_1 (ATerm, ATerm o_59 (ATerm));
ATerm All_1 (ATerm, ATerm n_59 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm l_59 (ATerm));
ATerm Cong_2 (ATerm, ATerm j_59 (ATerm), ATerm k_59 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm h_59 (ATerm), ATerm i_59 (ATerm));
ATerm Rec_2 (ATerm, ATerm r_58 (ATerm), ATerm s_58 (ATerm));
ATerm SVar_1 (ATerm, ATerm q_58 (ATerm));
ATerm Call_2 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm n_58 (ATerm), ATerm o_58 (ATerm));
ATerm GChoice_2 (ATerm, ATerm l_58 (ATerm), ATerm m_58 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm LChoice_2 (ATerm, ATerm g_58 (ATerm), ATerm h_58 (ATerm));
ATerm Choice_2 (ATerm, ATerm e_58 (ATerm), ATerm f_58 (ATerm));
ATerm Seq_2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm Test_1 (ATerm, ATerm a_58 (ATerm));
ATerm Not_1 (ATerm, ATerm b_58 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm SDef_3 (ATerm, ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm x_58 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm f_77 (ATerm));
ATerm Strategies_1 (ATerm, ATerm i_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm k_57 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm b_48 (ATerm), ATerm c_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_65 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm crush_2 (ATerm, ATerm g_73 (ATerm), ATerm h_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_65 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_67 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_67 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_77 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_64 (ATerm));
ATerm map_1 (ATerm, ATerm d_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_64 (ATerm));
ATerm Program_1 (ATerm, ATerm j_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_65 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_64 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_60 (ATerm), ATerm d_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_64 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_64 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm m_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_66 (ATerm));
ATerm main_0 (ATerm);
ATerm Continue_1 (ATerm t, ATerm v_49 (ATerm))
{
  ATerm v_10 = NULL,z_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_Continue_1))
    {
      z_10 = ATgetArgument(v_10, 0);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(z_10);
          {
            ATerm d_13 = NULL;
            t = v_49(t);
            {
              o_12 = t;
              {
                ATerm e_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(o_12)), not_null(m_12));
                {
                  e_13 = t;
                  if(((d_13 != NULL) && (d_13 != e_13)))
                    _fail(e_13);
                  else
                    d_13 = e_13;
                }
                t = not_null(d_13);
              }
            }
          }
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
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Var_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      {
        ATerm j_4 = t;
        int k_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_14 = NULL,l_14 = NULL;
            ATerm k_14 = NULL;
            t = SSLgetAnnotations(not_null(f_14));
            {
              k_14 = t;
              if(((j_14 != NULL) && (j_14 != k_14)))
                _fail(k_14);
              else
                j_14 = k_14;
            }
            {
              t = not_null(g_14);
              {
                ATerm n_14 = NULL;
                t = s_0(t);
                {
                  l_14 = t;
                  {
                    ATerm o_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_14)), not_null(j_14));
                    {
                      o_14 = t;
                      if(((n_14 != NULL) && (n_14 != o_14)))
                        _fail(o_14);
                      else
                        n_14 = o_14;
                    }
                    t = not_null(n_14);
                  }
                }
              }
            }
            LocalPopChoice(k_4);
          }
        else
          {
            t = j_4;
            {
              ATerm r_14 = NULL,t_14 = NULL;
              ATerm s_14 = NULL;
              t = SSLgetAnnotations(not_null(f_14));
              {
                s_14 = t;
                if(((r_14 != NULL) && (r_14 != s_14)))
                  _fail(s_14);
                else
                  r_14 = s_14;
              }
              {
                t = not_null(g_14);
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
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Assign_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm s_15 = NULL;
            t = y_49(t);
            {
              q_15 = t;
              {
                ATerm t_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(q_15)), not_null(o_15));
                {
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                }
                t = not_null(s_15);
              }
            }
          }
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
  ATerm l_4 = t;
  int m_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
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
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(a_5);
                                              }
                                            else
                                              {
                                                t = z_4;
                                                {
                                                  ATerm g_0 (ATerm t)
                                                  {
                                                    t = term_b_5;
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
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Assign_2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      {
        ATerm c_5 = t;
        int d_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL,s_16 = NULL;
            ATerm r_16 = NULL;
            t = SSLgetAnnotations(not_null(k_16));
            {
              r_16 = t;
              if(((q_16 != NULL) && (q_16 != r_16)))
                _fail(r_16);
              else
                q_16 = r_16;
            }
            {
              t = not_null(l_16);
              {
                ATerm u_16 = NULL;
                t = q_0(t);
                {
                  s_16 = t;
                  {
                    t = not_null(m_16);
                    {
                      ATerm w_16 = NULL;
                      t = r_0(t);
                      {
                        u_16 = t;
                        {
                          ATerm x_16 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(s_16), not_null(u_16)), not_null(q_16));
                          {
                            x_16 = t;
                            if(((w_16 != NULL) && (w_16 != x_16)))
                              _fail(x_16);
                            else
                              w_16 = x_16;
                          }
                          t = not_null(w_16);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(d_5);
          }
        else
          {
            t = c_5;
            {
              ATerm b_17 = NULL,d_17 = NULL;
              ATerm c_17 = NULL;
              t = SSLgetAnnotations(not_null(k_16));
              {
                c_17 = t;
                if(((b_17 != NULL) && (b_17 != c_17)))
                  _fail(c_17);
                else
                  b_17 = c_17;
              }
              {
                t = not_null(l_16);
                {
                  ATerm f_17 = NULL;
                  t = q_0(t);
                  {
                    d_17 = t;
                    {
                      t = not_null(m_16);
                      {
                        ATerm h_17 = NULL;
                        t = r_0(t);
                        {
                          f_17 = t;
                          {
                            ATerm i_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(d_17), not_null(f_17)), not_null(b_17));
                            {
                              i_17 = t;
                              if(((h_17 != NULL) && (h_17 != i_17)))
                                _fail(i_17);
                              else
                                h_17 = i_17;
                            }
                            t = not_null(h_17);
                          }
                        }
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
ATerm Fun_2 (ATerm t, ATerm z_49 (ATerm), ATerm a_50 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Fun_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm f_18 = NULL,h_18 = NULL;
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        {
          t = not_null(a_18);
          {
            ATerm j_18 = NULL;
            t = z_49(t);
            {
              h_18 = t;
              {
                t = not_null(b_18);
                {
                  ATerm l_18 = NULL;
                  t = a_50(t);
                  {
                    j_18 = t;
                    {
                      ATerm m_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(h_18), not_null(j_18)), not_null(f_18));
                      {
                        m_18 = t;
                        if(((l_18 != NULL) && (l_18 != m_18)))
                          _fail(m_18);
                        else
                          l_18 = m_18;
                      }
                      t = not_null(l_18);
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
ATerm Alt_3 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm), ATerm u_49 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Alt_3))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      c_19 = ATgetArgument(z_18, 2);
      {
        ATerm h_19 = NULL,j_19 = NULL;
        ATerm i_19 = NULL;
        t = SSLgetAnnotations(not_null(z_18));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        {
          t = not_null(a_19);
          {
            ATerm l_19 = NULL;
            t = s_49(t);
            {
              j_19 = t;
              {
                t = not_null(b_19);
                {
                  ATerm n_19 = NULL;
                  t = t_49(t);
                  {
                    l_19 = t;
                    {
                      t = not_null(c_19);
                      {
                        ATerm p_19 = NULL;
                        t = u_49(t);
                        {
                          n_19 = t;
                          {
                            ATerm q_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(j_19), not_null(l_19), not_null(n_19)), not_null(h_19));
                            {
                              q_19 = t;
                              if(((p_19 != NULL) && (p_19 != q_19)))
                                _fail(q_19);
                              else
                                p_19 = q_19;
                            }
                            t = not_null(p_19);
                          }
                        }
                      }
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
ATerm case_alternative_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
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
                  t = Str_1(t, is_string_0);
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
                        t = Int_1(t, is_int_0);
                        LocalPopChoice(l_5);
                      }
                    else
                      {
                        t = k_5;
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
      t = Alt_3(t, h_0, t_0, m_86);
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_m_5;
          return(t);
        }
        t = debug_1(t, v_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm l_49 (ATerm), ATerm m_49 (ATerm), ATerm n_49 (ATerm), ATerm o_49 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Case_4))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      i_20 = ATgetArgument(f_20, 2);
      j_20 = ATgetArgument(f_20, 3);
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm t_20 = NULL;
            t = l_49(t);
            {
              r_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm v_20 = NULL;
                  t = m_49(t);
                  {
                    t_20 = t;
                    {
                      t = not_null(i_20);
                      {
                        ATerm x_20 = NULL;
                        t = n_49(t);
                        {
                          v_20 = t;
                          {
                            t = not_null(j_20);
                            {
                              ATerm z_20 = NULL;
                              t = o_49(t);
                              {
                                x_20 = t;
                                {
                                  ATerm a_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(r_20), not_null(t_20), not_null(v_20), not_null(x_20)), not_null(p_20));
                                  {
                                    a_21 = t;
                                    if(((z_20 != NULL) && (z_20 != a_21)))
                                      _fail(a_21);
                                    else
                                      z_20 = a_21;
                                  }
                                  t = not_null(z_20);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm t_58 (ATerm), ATerm u_58 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Let_2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm u_21 = NULL,w_21 = NULL;
        ATerm v_21 = NULL;
        t = SSLgetAnnotations(not_null(o_21));
        {
          v_21 = t;
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
        }
        {
          t = not_null(p_21);
          {
            ATerm y_21 = NULL;
            t = t_58(t);
            {
              w_21 = t;
              {
                t = not_null(q_21);
                {
                  ATerm a_22 = NULL;
                  t = u_58(t);
                  {
                    y_21 = t;
                    {
                      ATerm b_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_21), not_null(y_21)), not_null(u_21));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm y_59 (ATerm), ATerm z_59 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Prim_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm t_22 = NULL,v_22 = NULL;
        ATerm u_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
        {
          t = not_null(o_22);
          {
            ATerm x_22 = NULL;
            t = y_59(t);
            {
              v_22 = t;
              {
                t = not_null(p_22);
                {
                  ATerm z_22 = NULL;
                  t = z_59(t);
                  {
                    x_22 = t;
                    {
                      ATerm a_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_22), not_null(x_22)), not_null(t_22));
                      {
                        a_23 = t;
                        if(((z_22 != NULL) && (z_22 != a_23)))
                          _fail(a_23);
                        else
                          z_22 = a_23;
                      }
                      t = not_null(z_22);
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
ATerm Where_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_Where_1))
    {
      m_23 = ATgetArgument(l_23, 0);
      {
        ATerm w_23 = NULL,y_23 = NULL;
        ATerm x_23 = NULL;
        t = SSLgetAnnotations(not_null(l_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
        {
          t = not_null(m_23);
          {
            ATerm a_24 = NULL;
            t = x_59(t);
            {
              y_23 = t;
              {
                ATerm b_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(y_23)), not_null(w_23));
                {
                  b_24 = t;
                  if(((a_24 != NULL) && (a_24 != b_24)))
                    _fail(b_24);
                  else
                    a_24 = b_24;
                }
                t = not_null(a_24);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_Scope_2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      {
        ATerm v_24 = NULL,x_24 = NULL;
        ATerm w_24 = NULL;
        t = SSLgetAnnotations(not_null(p_24));
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
        {
          t = not_null(q_24);
          {
            ATerm z_24 = NULL;
            t = v_59(t);
            {
              x_24 = t;
              {
                t = not_null(r_24);
                {
                  ATerm b_25 = NULL;
                  t = w_59(t);
                  {
                    z_24 = t;
                    {
                      ATerm c_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_24), not_null(z_24)), not_null(v_24));
                      {
                        c_25 = t;
                        if(((b_25 != NULL) && (b_25 != c_25)))
                          _fail(c_25);
                        else
                          b_25 = c_25;
                      }
                      t = not_null(b_25);
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
ATerm Build_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_Build_1))
    {
      p_25 = ATgetArgument(o_25, 0);
      {
        ATerm s_25 = NULL,u_25 = NULL;
        ATerm t_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
        }
        {
          t = not_null(p_25);
          {
            ATerm w_25 = NULL;
            t = s_59(t);
            {
              u_25 = t;
              {
                ATerm x_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(u_25)), not_null(s_25));
                {
                  x_25 = t;
                  if(((w_25 != NULL) && (w_25 != x_25)))
                    _fail(x_25);
                  else
                    w_25 = x_25;
                }
                t = not_null(w_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm y_57 (ATerm), ATerm z_57 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_Op_2))
    {
      j_26 = ATgetArgument(i_26, 0);
      k_26 = ATgetArgument(i_26, 1);
      {
        ATerm o_26 = NULL,y_26 = NULL;
        ATerm p_26 = NULL;
        t = SSLgetAnnotations(not_null(i_26));
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
        {
          t = not_null(j_26);
          {
            ATerm a_27 = NULL;
            t = y_57(t);
            {
              y_26 = t;
              {
                t = not_null(k_26);
                {
                  ATerm e_27 = NULL;
                  t = z_57(t);
                  {
                    a_27 = t;
                    {
                      ATerm f_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(y_26), not_null(a_27)), not_null(o_26));
                      {
                        f_27 = t;
                        if(((e_27 != NULL) && (e_27 != f_27)))
                          _fail(f_27);
                        else
                          e_27 = f_27;
                      }
                      t = not_null(e_27);
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
ATerm As_2 (ATerm t, ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL,b_28 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_As_2))
    {
      u_27 = ATgetArgument(t_27, 0);
      b_28 = ATgetArgument(t_27, 1);
      {
        ATerm l_28 = NULL,n_28 = NULL;
        ATerm m_28 = NULL;
        t = SSLgetAnnotations(not_null(t_27));
        {
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
        }
        {
          t = not_null(u_27);
          {
            ATerm p_28 = NULL;
            t = h_56(t);
            {
              n_28 = t;
              {
                t = not_null(b_28);
                {
                  ATerm r_28 = NULL;
                  t = i_56(t);
                  {
                    p_28 = t;
                    {
                      ATerm t_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(n_28), not_null(p_28)), not_null(l_28));
                      {
                        t_28 = t;
                        if(((r_28 != NULL) && (r_28 != t_28)))
                          _fail(t_28);
                        else
                          r_28 = t_28;
                      }
                      t = not_null(r_28);
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
ATerm BuildDefault_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm e_29 = NULL,f_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_BuildDefault_1))
    {
      f_29 = ATgetArgument(e_29, 0);
      {
        ATerm i_29 = NULL,k_29 = NULL;
        ATerm j_29 = NULL;
        t = SSLgetAnnotations(not_null(e_29));
        {
          j_29 = t;
          if(((i_29 != NULL) && (i_29 != j_29)))
            _fail(j_29);
          else
            i_29 = j_29;
        }
        {
          t = not_null(f_29);
          {
            ATerm m_29 = NULL;
            t = j_56(t);
            {
              k_29 = t;
              {
                ATerm n_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(k_29)), not_null(i_29));
                {
                  n_29 = t;
                  if(((m_29 != NULL) && (m_29 != n_29)))
                    _fail(n_29);
                  else
                    m_29 = n_29;
                }
                t = not_null(m_29);
              }
            }
          }
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
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_cons(b_30, sym_Str_1))
    {
      c_30 = ATgetArgument(b_30, 0);
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_30 = NULL,h_30 = NULL;
            ATerm g_30 = NULL;
            t = SSLgetAnnotations(not_null(b_30));
            {
              g_30 = t;
              if(((f_30 != NULL) && (f_30 != g_30)))
                _fail(g_30);
              else
                f_30 = g_30;
            }
            {
              t = not_null(c_30);
              {
                ATerm j_30 = NULL;
                t = p_0(t);
                {
                  h_30 = t;
                  {
                    ATerm k_30 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(h_30)), not_null(f_30));
                    {
                      k_30 = t;
                      if(((j_30 != NULL) && (j_30 != k_30)))
                        _fail(k_30);
                      else
                        j_30 = k_30;
                    }
                    t = not_null(j_30);
                  }
                }
              }
            }
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            {
              ATerm n_30 = NULL,p_30 = NULL;
              ATerm o_30 = NULL;
              t = SSLgetAnnotations(not_null(b_30));
              {
                o_30 = t;
                if(((n_30 != NULL) && (n_30 != o_30)))
                  _fail(o_30);
                else
                  n_30 = o_30;
              }
              {
                t = not_null(c_30);
                {
                  ATerm r_30 = NULL;
                  t = p_0(t);
                  {
                    p_30 = t;
                    {
                      ATerm s_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(p_30)), not_null(n_30));
                      {
                        s_30 = t;
                        if(((r_30 != NULL) && (r_30 != s_30)))
                          _fail(s_30);
                        else
                          r_30 = s_30;
                      }
                      t = not_null(r_30);
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
  ATerm k_31 = NULL;
  k_31 = t;
  t = SSL_is_real(not_null(k_31));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm w_31 = NULL,x_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_Real_1))
    {
      x_31 = ATgetArgument(w_31, 0);
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_32 = NULL,c_32 = NULL;
            ATerm b_32 = NULL;
            t = SSLgetAnnotations(not_null(w_31));
            {
              b_32 = t;
              if(((a_32 != NULL) && (a_32 != b_32)))
                _fail(b_32);
              else
                a_32 = b_32;
            }
            {
              t = not_null(x_31);
              {
                ATerm h_32 = NULL;
                t = o_0(t);
                {
                  c_32 = t;
                  {
                    ATerm i_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(c_32)), not_null(a_32));
                    {
                      i_32 = t;
                      if(((h_32 != NULL) && (h_32 != i_32)))
                        _fail(i_32);
                      else
                        h_32 = i_32;
                    }
                    t = not_null(h_32);
                  }
                }
              }
            }
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm l_32 = NULL,n_32 = NULL;
              ATerm m_32 = NULL;
              t = SSLgetAnnotations(not_null(w_31));
              {
                m_32 = t;
                if(((l_32 != NULL) && (l_32 != m_32)))
                  _fail(m_32);
                else
                  l_32 = m_32;
              }
              {
                t = not_null(x_31);
                {
                  ATerm p_32 = NULL;
                  t = o_0(t);
                  {
                    n_32 = t;
                    {
                      ATerm q_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(n_32)), not_null(l_32));
                      {
                        q_32 = t;
                        if(((p_32 != NULL) && (p_32 != q_32)))
                          _fail(q_32);
                        else
                          p_32 = q_32;
                      }
                      t = not_null(p_32);
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
  ATerm l_33 = NULL,m_33 = NULL;
  l_33 = t;
  j_33 :
  if(match_cons(l_33, sym_Int_1))
    {
      m_33 = ATgetArgument(l_33, 0);
      {
        ATerm r_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_33 = NULL,s_33 = NULL;
            ATerm r_33 = NULL;
            t = SSLgetAnnotations(not_null(l_33));
            {
              r_33 = t;
              if(((q_33 != NULL) && (q_33 != r_33)))
                _fail(r_33);
              else
                q_33 = r_33;
            }
            {
              t = not_null(m_33);
              {
                ATerm u_33 = NULL;
                t = n_0(t);
                {
                  s_33 = t;
                  {
                    ATerm v_33 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(s_33)), not_null(q_33));
                    {
                      v_33 = t;
                      if(((u_33 != NULL) && (u_33 != v_33)))
                        _fail(v_33);
                      else
                        u_33 = v_33;
                    }
                    t = not_null(u_33);
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
              ATerm y_33 = NULL,a_34 = NULL;
              ATerm z_33 = NULL;
              t = SSLgetAnnotations(not_null(l_33));
              {
                z_33 = t;
                if(((y_33 != NULL) && (y_33 != z_33)))
                  _fail(z_33);
                else
                  y_33 = z_33;
              }
              {
                t = not_null(m_33);
                {
                  ATerm c_34 = NULL;
                  t = n_0(t);
                  {
                    a_34 = t;
                    {
                      ATerm d_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(a_34)), not_null(y_33));
                      {
                        d_34 = t;
                        if(((c_34 != NULL) && (c_34 != d_34)))
                          _fail(d_34);
                        else
                          c_34 = d_34;
                      }
                      t = not_null(c_34);
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
  ATerm q_34 = NULL;
  q_34 = t;
  p_34 :
  if(match_cons(q_34, sym_Wld_0))
    {
      ATerm s_34 = NULL,u_34 = NULL;
      ATerm t_5;
      t_5 = t;
      {
        ATerm t_34 = NULL;
        t = SSLgetAnnotations(not_null(q_34));
        {
          t_34 = t;
          if(((s_34 != NULL) && (s_34 != t_34)))
            _fail(t_34);
          else
            s_34 = t_34;
        }
      }
      t = t_5;
      {
        ATerm v_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(s_34));
        {
          v_34 = t;
          if(((u_34 != NULL) && (u_34 != v_34)))
            _fail(v_34);
          else
            u_34 = v_34;
        }
        t = not_null(u_34);
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
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, match_term_exp_0);
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
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, w_0, match_term_exp_0);
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
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, x_0);
                                                LocalPopChoice(j_6);
                                              }
                                            else
                                              {
                                                t = i_6;
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_k_6;
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
ATerm Match_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym_Match_1))
    {
      j_35 = ATgetArgument(i_35, 0);
      {
        ATerm m_35 = NULL,o_35 = NULL;
        ATerm n_35 = NULL;
        t = SSLgetAnnotations(not_null(i_35));
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
        {
          t = not_null(j_35);
          {
            ATerm q_35 = NULL;
            t = r_59(t);
            {
              o_35 = t;
              {
                ATerm r_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(o_35)), not_null(m_35));
                {
                  r_35 = t;
                  if(((q_35 != NULL) && (q_35 != r_35)))
                    _fail(r_35);
                  else
                    q_35 = r_35;
                }
                t = not_null(q_35);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm b_36 = NULL,c_36 = NULL;
  b_36 = t;
  a_36 :
  if(match_cons(b_36, sym_Thread_1))
    {
      c_36 = ATgetArgument(b_36, 0);
      {
        ATerm f_36 = NULL,h_36 = NULL;
        ATerm g_36 = NULL;
        t = SSLgetAnnotations(not_null(b_36));
        {
          g_36 = t;
          if(((f_36 != NULL) && (f_36 != g_36)))
            _fail(g_36);
          else
            f_36 = g_36;
        }
        {
          t = not_null(c_36);
          {
            ATerm j_36 = NULL;
            t = o_59(t);
            {
              h_36 = t;
              {
                ATerm k_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(h_36)), not_null(f_36));
                {
                  k_36 = t;
                  if(((j_36 != NULL) && (j_36 != k_36)))
                    _fail(k_36);
                  else
                    j_36 = k_36;
                }
                t = not_null(j_36);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym_All_1))
    {
      v_36 = ATgetArgument(u_36, 0);
      {
        ATerm y_36 = NULL,a_37 = NULL;
        ATerm z_36 = NULL;
        t = SSLgetAnnotations(not_null(u_36));
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
        {
          t = not_null(v_36);
          {
            ATerm c_37 = NULL;
            t = n_59(t);
            {
              a_37 = t;
              {
                ATerm d_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(a_37)), not_null(y_36));
                {
                  d_37 = t;
                  if(((c_37 != NULL) && (c_37 != d_37)))
                    _fail(d_37);
                  else
                    c_37 = d_37;
                }
                t = not_null(c_37);
              }
            }
          }
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
  ATerm r_37 = NULL,s_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym_Some_1))
    {
      s_37 = ATgetArgument(r_37, 0);
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_37 = NULL,x_37 = NULL;
            ATerm w_37 = NULL;
            t = SSLgetAnnotations(not_null(r_37));
            {
              w_37 = t;
              if(((v_37 != NULL) && (v_37 != w_37)))
                _fail(w_37);
              else
                v_37 = w_37;
            }
            {
              t = not_null(s_37);
              {
                ATerm z_37 = NULL;
                t = m_0(t);
                {
                  x_37 = t;
                  {
                    ATerm a_38 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(x_37)), not_null(v_37));
                    {
                      a_38 = t;
                      if(((z_37 != NULL) && (z_37 != a_38)))
                        _fail(a_38);
                      else
                        z_37 = a_38;
                    }
                    t = not_null(z_37);
                  }
                }
              }
            }
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            {
              ATerm d_38 = NULL,f_38 = NULL;
              ATerm e_38 = NULL;
              t = SSLgetAnnotations(not_null(r_37));
              {
                e_38 = t;
                if(((d_38 != NULL) && (d_38 != e_38)))
                  _fail(e_38);
                else
                  d_38 = e_38;
              }
              {
                t = not_null(s_37);
                {
                  ATerm h_38 = NULL;
                  t = m_0(t);
                  {
                    f_38 = t;
                    {
                      ATerm i_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(f_38)), not_null(d_38));
                      {
                        i_38 = t;
                        if(((h_38 != NULL) && (h_38 != i_38)))
                          _fail(i_38);
                        else
                          h_38 = i_38;
                      }
                      t = not_null(h_38);
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
ATerm One_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm w_38 = NULL,x_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym_One_1))
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
            t = l_59(t);
            {
              c_39 = t;
              {
                ATerm f_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(c_39)), not_null(a_39));
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
ATerm Cong_2 (ATerm t, ATerm j_59 (ATerm), ATerm k_59 (ATerm))
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym_Cong_2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      {
        ATerm y_39 = NULL,a_40 = NULL;
        ATerm z_39 = NULL;
        t = SSLgetAnnotations(not_null(q_39));
        {
          z_39 = t;
          if(((y_39 != NULL) && (y_39 != z_39)))
            _fail(z_39);
          else
            y_39 = z_39;
        }
        {
          t = not_null(r_39);
          {
            ATerm c_40 = NULL;
            t = j_59(t);
            {
              a_40 = t;
              {
                t = not_null(s_39);
                {
                  ATerm e_40 = NULL;
                  t = k_59(t);
                  {
                    c_40 = t;
                    {
                      ATerm f_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(a_40), not_null(c_40)), not_null(y_39));
                      {
                        f_40 = t;
                        if(((e_40 != NULL) && (e_40 != f_40)))
                          _fail(f_40);
                        else
                          e_40 = f_40;
                      }
                      t = not_null(e_40);
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
  ATerm m_40 = NULL;
  m_40 = t;
  t = SSL_is_int(not_null(m_40));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm h_59 (ATerm), ATerm i_59 (ATerm))
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_Path_2))
    {
      w_40 = ATgetArgument(v_40, 0);
      x_40 = ATgetArgument(v_40, 1);
      {
        ATerm b_41 = NULL,d_41 = NULL;
        ATerm c_41 = NULL;
        t = SSLgetAnnotations(not_null(v_40));
        {
          c_41 = t;
          if(((b_41 != NULL) && (b_41 != c_41)))
            _fail(c_41);
          else
            b_41 = c_41;
        }
        {
          t = not_null(w_40);
          {
            ATerm f_41 = NULL;
            t = h_59(t);
            {
              d_41 = t;
              {
                t = not_null(x_40);
                {
                  ATerm h_41 = NULL;
                  t = i_59(t);
                  {
                    f_41 = t;
                    {
                      ATerm i_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(d_41), not_null(f_41)), not_null(b_41));
                      {
                        i_41 = t;
                        if(((h_41 != NULL) && (h_41 != i_41)))
                          _fail(i_41);
                        else
                          h_41 = i_41;
                      }
                      t = not_null(h_41);
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
ATerm Rec_2 (ATerm t, ATerm r_58 (ATerm), ATerm s_58 (ATerm))
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Rec_2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        ATerm b_42 = NULL,d_42 = NULL;
        ATerm c_42 = NULL;
        t = SSLgetAnnotations(not_null(v_41));
        {
          c_42 = t;
          if(((b_42 != NULL) && (b_42 != c_42)))
            _fail(c_42);
          else
            b_42 = c_42;
        }
        {
          t = not_null(w_41);
          {
            ATerm f_42 = NULL;
            t = r_58(t);
            {
              d_42 = t;
              {
                t = not_null(x_41);
                {
                  ATerm h_42 = NULL;
                  t = s_58(t);
                  {
                    f_42 = t;
                    {
                      ATerm i_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(d_42), not_null(f_42)), not_null(b_42));
                      {
                        i_42 = t;
                        if(((h_42 != NULL) && (h_42 != i_42)))
                          _fail(i_42);
                        else
                          h_42 = i_42;
                      }
                      t = not_null(h_42);
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
ATerm SVar_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm t_42 = NULL,u_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym_SVar_1))
    {
      u_42 = ATgetArgument(t_42, 0);
      {
        ATerm x_42 = NULL,z_42 = NULL;
        ATerm y_42 = NULL;
        t = SSLgetAnnotations(not_null(t_42));
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
        {
          t = not_null(u_42);
          {
            ATerm b_43 = NULL;
            t = q_58(t);
            {
              z_42 = t;
              {
                ATerm c_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(z_42)), not_null(x_42));
                {
                  c_43 = t;
                  if(((b_43 != NULL) && (b_43 != c_43)))
                    _fail(c_43);
                  else
                    b_43 = c_43;
                }
                t = not_null(b_43);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm))
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym_Call_2))
    {
      o_43 = ATgetArgument(n_43, 0);
      p_43 = ATgetArgument(n_43, 1);
      {
        ATerm t_43 = NULL,v_43 = NULL;
        ATerm u_43 = NULL;
        t = SSLgetAnnotations(not_null(n_43));
        {
          u_43 = t;
          if(((t_43 != NULL) && (t_43 != u_43)))
            _fail(u_43);
          else
            t_43 = u_43;
        }
        {
          t = not_null(o_43);
          {
            ATerm x_43 = NULL;
            t = f_59(t);
            {
              v_43 = t;
              {
                t = not_null(p_43);
                {
                  ATerm z_43 = NULL;
                  t = g_59(t);
                  {
                    x_43 = t;
                    {
                      ATerm a_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(v_43), not_null(x_43)), not_null(t_43));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LGChoice_2 (ATerm t, ATerm n_58 (ATerm), ATerm o_58 (ATerm))
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_LGChoice_2))
    {
      n_44 = ATgetArgument(m_44, 0);
      o_44 = ATgetArgument(m_44, 1);
      {
        ATerm s_44 = NULL,u_44 = NULL;
        ATerm t_44 = NULL;
        t = SSLgetAnnotations(not_null(m_44));
        {
          t_44 = t;
          if(((s_44 != NULL) && (s_44 != t_44)))
            _fail(t_44);
          else
            s_44 = t_44;
        }
        {
          t = not_null(n_44);
          {
            ATerm w_44 = NULL;
            t = n_58(t);
            {
              u_44 = t;
              {
                t = not_null(o_44);
                {
                  ATerm y_44 = NULL;
                  t = o_58(t);
                  {
                    w_44 = t;
                    {
                      ATerm z_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(u_44), not_null(w_44)), not_null(s_44));
                      {
                        z_44 = t;
                        if(((y_44 != NULL) && (y_44 != z_44)))
                          _fail(z_44);
                        else
                          y_44 = z_44;
                      }
                      t = not_null(y_44);
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
ATerm GChoice_2 (ATerm t, ATerm l_58 (ATerm), ATerm m_58 (ATerm))
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym_GChoice_2))
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
            t = l_58(t);
            {
              t_45 = t;
              {
                t = not_null(n_45);
                {
                  ATerm x_45 = NULL;
                  t = m_58(t);
                  {
                    v_45 = t;
                    {
                      ATerm y_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(t_45), not_null(v_45)), not_null(r_45));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,v_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym_GuardedLChoice_3))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      v_46 = ATgetArgument(o_46, 2);
      {
        ATerm a_47 = NULL,c_47 = NULL;
        ATerm b_47 = NULL;
        t = SSLgetAnnotations(not_null(o_46));
        {
          b_47 = t;
          if(((a_47 != NULL) && (a_47 != b_47)))
            _fail(b_47);
          else
            a_47 = b_47;
        }
        {
          t = not_null(p_46);
          {
            ATerm e_47 = NULL;
            t = i_58(t);
            {
              c_47 = t;
              {
                t = not_null(q_46);
                {
                  ATerm g_47 = NULL;
                  t = j_58(t);
                  {
                    e_47 = t;
                    {
                      t = not_null(v_46);
                      {
                        ATerm i_47 = NULL;
                        t = k_58(t);
                        {
                          g_47 = t;
                          {
                            ATerm j_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(c_47), not_null(e_47), not_null(g_47)), not_null(a_47));
                            {
                              j_47 = t;
                              if(((i_47 != NULL) && (i_47 != j_47)))
                                _fail(j_47);
                              else
                                i_47 = j_47;
                            }
                            t = not_null(i_47);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm g_58 (ATerm), ATerm h_58 (ATerm))
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
  w_47 = t;
  v_47 :
  if(match_cons(w_47, sym_LChoice_2))
    {
      x_47 = ATgetArgument(w_47, 0);
      y_47 = ATgetArgument(w_47, 1);
      {
        ATerm e_48 = NULL,g_48 = NULL;
        ATerm f_48 = NULL;
        t = SSLgetAnnotations(not_null(w_47));
        {
          f_48 = t;
          if(((e_48 != NULL) && (e_48 != f_48)))
            _fail(f_48);
          else
            e_48 = f_48;
        }
        {
          t = not_null(x_47);
          {
            ATerm i_48 = NULL;
            t = g_58(t);
            {
              g_48 = t;
              {
                t = not_null(y_47);
                {
                  ATerm k_48 = NULL;
                  t = h_58(t);
                  {
                    i_48 = t;
                    {
                      ATerm l_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(g_48), not_null(i_48)), not_null(e_48));
                      {
                        l_48 = t;
                        if(((k_48 != NULL) && (k_48 != l_48)))
                          _fail(l_48);
                        else
                          k_48 = l_48;
                      }
                      t = not_null(k_48);
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
ATerm Choice_2 (ATerm t, ATerm e_58 (ATerm), ATerm f_58 (ATerm))
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  w_48 :
  if(match_cons(x_48, sym_Choice_2))
    {
      y_48 = ATgetArgument(x_48, 0);
      z_48 = ATgetArgument(x_48, 1);
      {
        ATerm d_49 = NULL,f_49 = NULL;
        ATerm e_49 = NULL;
        t = SSLgetAnnotations(not_null(x_48));
        {
          e_49 = t;
          if(((d_49 != NULL) && (d_49 != e_49)))
            _fail(e_49);
          else
            d_49 = e_49;
        }
        {
          t = not_null(y_48);
          {
            ATerm h_49 = NULL;
            t = e_58(t);
            {
              f_49 = t;
              {
                t = not_null(z_48);
                {
                  ATerm j_49 = NULL;
                  t = f_58(t);
                  {
                    h_49 = t;
                    {
                      ATerm k_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(f_49), not_null(h_49)), not_null(d_49));
                      {
                        k_49 = t;
                        if(((j_49 != NULL) && (j_49 != k_49)))
                          _fail(k_49);
                        else
                          j_49 = k_49;
                      }
                      t = not_null(j_49);
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
ATerm Seq_2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  ATerm h_50 = NULL,i_50 = NULL,l_50 = NULL;
  h_50 = t;
  g_50 :
  if(match_cons(h_50, sym_Seq_2))
    {
      i_50 = ATgetArgument(h_50, 0);
      l_50 = ATgetArgument(h_50, 1);
      {
        ATerm p_50 = NULL,r_50 = NULL;
        ATerm q_50 = NULL;
        t = SSLgetAnnotations(not_null(h_50));
        {
          q_50 = t;
          if(((p_50 != NULL) && (p_50 != q_50)))
            _fail(q_50);
          else
            p_50 = q_50;
        }
        {
          t = not_null(i_50);
          {
            ATerm t_50 = NULL;
            t = c_58(t);
            {
              r_50 = t;
              {
                t = not_null(l_50);
                {
                  ATerm v_50 = NULL;
                  t = d_58(t);
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
ATerm Test_1 (ATerm t, ATerm a_58 (ATerm))
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
            t = a_58(t);
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
ATerm Not_1 (ATerm t, ATerm b_58 (ATerm))
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
            t = b_58(t);
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
      ATerm n_6;
      n_6 = t;
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
      t = n_6;
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
      ATerm o_6;
      o_6 = t;
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
      t = o_6;
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
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            {
              ATerm t_6 = t;
              int u_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(u_6);
                }
              else
                {
                  t = t_6;
                  {
                    ATerm v_6 = t;
                    int w_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(e_7);
                                              }
                                            else
                                              {
                                                t = d_7;
                                                {
                                                  ATerm f_7 = t;
                                                  int g_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(m_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_7;
                                                                        {
                                                                          ATerm n_7 = t;
                                                                          int o_7 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(o_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_7;
                                                                              {
                                                                                ATerm p_7 = t;
                                                                                int q_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, d_1);
                                                                                    LocalPopChoice(q_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_7;
                                                                                    {
                                                                                      ATerm r_7 = t;
                                                                                      int s_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(s_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_7;
                                                                                          {
                                                                                            ATerm t_7 = t;
                                                                                            int u_7 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(u_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = t_7;
                                                                                                {
                                                                                                  ATerm v_7 = t;
                                                                                                  int w_7 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(w_7);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_7;
                                                                                                      {
                                                                                                        ATerm x_7 = t;
                                                                                                        int y_7 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  LocalPopChoice(a_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_7;
                                                                                                                  {
                                                                                                                    ATerm b_8 = t;
                                                                                                                    int c_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(c_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = b_8;
                                                                                                                        {
                                                                                                                          ATerm d_8 = t;
                                                                                                                          int e_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, e_1, strategy_expression_0);
                                                                                                                              LocalPopChoice(e_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = d_8;
                                                                                                                              {
                                                                                                                                ATerm f_8 = t;
                                                                                                                                int g_8 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(g_8);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = f_8;
                                                                                                                                    {
                                                                                                                                      ATerm h_8 = t;
                                                                                                                                      int i_8 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm f_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, f_1);
                                                                                                                                          LocalPopChoice(i_8);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = h_8;
                                                                                                                                          {
                                                                                                                                            ATerm j_8 = t;
                                                                                                                                            int k_8 = stack_ptr;
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
                                                                                                                                                LocalPopChoice(k_8);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = j_8;
                                                                                                                                                {
                                                                                                                                                  ATerm l_8 = t;
                                                                                                                                                  int m_8 = stack_ptr;
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
                                                                                                                                                      LocalPopChoice(m_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = l_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm n_8 = t;
                                                                                                                                                        int o_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm n_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, n_1, term_expression_0);
                                                                                                                                                            LocalPopChoice(o_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = n_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm p_8 = t;
                                                                                                                                                              int q_8 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm o_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, o_1);
                                                                                                                                                                  LocalPopChoice(q_8);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = p_8;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm r_8 = t;
                                                                                                                                                                    int s_8 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        LocalPopChoice(s_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = r_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm p_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_t_8;
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
ATerm VarDec_2 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_VarDec_2))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      {
        ATerm b_54 = NULL,d_54 = NULL;
        ATerm c_54 = NULL;
        t = SSLgetAnnotations(not_null(v_53));
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
        {
          t = not_null(w_53);
          {
            ATerm f_54 = NULL;
            t = y_58(t);
            {
              d_54 = t;
              {
                t = not_null(x_53);
                {
                  ATerm h_54 = NULL;
                  t = z_58(t);
                  {
                    f_54 = t;
                    {
                      ATerm i_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_54), not_null(f_54)), not_null(b_54));
                      {
                        i_54 = t;
                        if(((h_54 != NULL) && (h_54 != i_54)))
                          _fail(i_54);
                        else
                          h_54 = i_54;
                      }
                      t = not_null(h_54);
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
ATerm SDef_3 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm x_58 (ATerm))
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  v_54 = t;
  u_54 :
  if(match_cons(v_54, sym_SDef_3))
    {
      w_54 = ATgetArgument(v_54, 0);
      x_54 = ATgetArgument(v_54, 1);
      y_54 = ATgetArgument(v_54, 2);
      {
        ATerm d_55 = NULL,f_55 = NULL;
        ATerm e_55 = NULL;
        t = SSLgetAnnotations(not_null(v_54));
        {
          e_55 = t;
          if(((d_55 != NULL) && (d_55 != e_55)))
            _fail(e_55);
          else
            d_55 = e_55;
        }
        {
          t = not_null(w_54);
          {
            ATerm h_55 = NULL;
            t = v_58(t);
            {
              f_55 = t;
              {
                t = not_null(x_54);
                {
                  ATerm j_55 = NULL;
                  t = w_58(t);
                  {
                    h_55 = t;
                    {
                      t = not_null(y_54);
                      {
                        ATerm l_55 = NULL;
                        t = x_58(t);
                        {
                          j_55 = t;
                          {
                            ATerm m_55 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_55), not_null(h_55), not_null(j_55)), not_null(d_55));
                            {
                              m_55 = t;
                              if(((l_55 != NULL) && (l_55 != m_55)))
                                _fail(m_55);
                              else
                                l_55 = m_55;
                            }
                            t = not_null(l_55);
                          }
                        }
                      }
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
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
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_w_8;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm t_55 (ATerm t)
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = Cons_2(t, f_77, t_55);
      }
    return(t);
  }
  t = t_55(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm z_55 = NULL,a_56 = NULL;
  z_55 = t;
  y_55 :
  if(match_cons(z_55, sym_Strategies_1))
    {
      a_56 = ATgetArgument(z_55, 0);
      {
        ATerm d_56 = NULL,f_56 = NULL;
        ATerm e_56 = NULL;
        t = SSLgetAnnotations(not_null(z_55));
        {
          e_56 = t;
          if(((d_56 != NULL) && (d_56 != e_56)))
            _fail(e_56);
          else
            d_56 = e_56;
        }
        {
          t = not_null(a_56);
          {
            ATerm k_56 = NULL;
            t = i_57(t);
            {
              f_56 = t;
              {
                ATerm l_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(f_56)), not_null(d_56));
                {
                  l_56 = t;
                  if(((k_56 != NULL) && (k_56 != l_56)))
                    _fail(l_56);
                  else
                    k_56 = l_56;
                }
                t = not_null(k_56);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm v_56 = NULL,w_56 = NULL;
  v_56 = t;
  u_56 :
  if(match_cons(v_56, sym_Specification_1))
    {
      w_56 = ATgetArgument(v_56, 0);
      {
        ATerm z_56 = NULL,b_57 = NULL;
        ATerm a_57 = NULL;
        t = SSLgetAnnotations(not_null(v_56));
        {
          a_57 = t;
          if(((z_56 != NULL) && (z_56 != a_57)))
            _fail(a_57);
          else
            z_56 = a_57;
        }
        {
          t = not_null(w_56);
          {
            ATerm d_57 = NULL;
            t = k_57(t);
            {
              b_57 = t;
              {
                ATerm e_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(b_57)), not_null(z_56));
                {
                  e_57 = t;
                  if(((d_57 != NULL) && (d_57 != e_57)))
                    _fail(e_57);
                  else
                    d_57 = e_57;
                }
                t = not_null(d_57);
              }
            }
          }
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
  ATerm z_8 = t;
  int a_9 = stack_ptr;
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
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_b_9;
          return(t);
        }
        t = debug_1(t, x_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_48 (ATerm), ATerm c_48 (ATerm))
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_cons(r_57, sym__2))
    {
      s_57 = ATgetArgument(r_57, 0);
      t_57 = ATgetArgument(r_57, 1);
      {
        ATerm x_57 = NULL,a_59 = NULL;
        ATerm p_58 = NULL;
        t = SSLgetAnnotations(not_null(r_57));
        {
          p_58 = t;
          if(((x_57 != NULL) && (x_57 != p_58)))
            _fail(p_58);
          else
            x_57 = p_58;
        }
        {
          t = not_null(s_57);
          {
            ATerm c_59 = NULL;
            t = b_48(t);
            {
              a_59 = t;
              {
                t = not_null(t_57);
                {
                  ATerm e_59 = NULL;
                  t = c_48(t);
                  {
                    c_59 = t;
                    {
                      ATerm m_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_59), not_null(c_59)), not_null(x_57));
                      {
                        m_59 = t;
                        if(((e_59 != NULL) && (e_59 != m_59)))
                          _fail(m_59);
                        else
                          e_59 = m_59;
                      }
                      t = not_null(e_59);
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
  ATerm f_60 = NULL;
  ATerm c_9;
  c_9 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm g_60 = NULL,h_60 = NULL;
      g_60 = t;
      e_60 :
      if(match_cons(g_60, sym_Program_1))
        {
          h_60 = ATgetArgument(g_60, 0);
          if(((f_60 != NULL) && (f_60 != h_60)))
            _fail(h_60);
          else
            f_60 = h_60;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), not_null(f_60)), term_e_9));
      {
        t = printnl_0(t);
        {
          t = term_g_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
  l_60 = t;
  k_60 :
  if(match_cons(l_60, sym__2))
    {
      m_60 = ATgetArgument(l_60, 0);
      n_60 = ATgetArgument(l_60, 1);
      {
        ATerm h_9;
        h_9 = t;
        t = SSL_printnl(not_null(m_60), not_null(n_60));
        t = h_9;
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
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  s_60 :
  if(match_cons(t_60, sym__2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      {
        t = not_null(u_60);
        {
          ATerm z_1 (ATerm t)
          {
            t = not_null(v_60);
            return(t);
          }
          t = at_end_1(t, z_1);
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
ATerm debug_1 (ATerm t, ATerm u_67 (ATerm))
{
  ATerm i_9;
  i_9 = t;
  {
    ATerm b_61 = NULL,d_61 = NULL;
    ATerm j_9;
    j_9 = t;
    {
      ATerm c_61 = NULL;
      t = u_67(t);
      {
        c_61 = t;
        if(((b_61 != NULL) && (b_61 != c_61)))
          _fail(c_61);
        else
          b_61 = c_61;
      }
    }
    t = j_9;
    {
      ATerm e_61 = NULL;
      e_61 = t;
      if(((d_61 != NULL) && (d_61 != e_61)))
        _fail(e_61);
      else
        d_61 = e_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_61)), not_null(b_61)));
        t = printnl_0(t);
      }
    }
  }
  t = i_9;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_61 = NULL;
  i_61 = t;
  t = SSL_is_string(not_null(i_61));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_2);
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
              r_61 = t;
              q_61 :
              if(match_cons(r_61, sym_Path_1))
                {
                  s_61 = ATgetArgument(r_61, 0);
                  t = not_null(s_61);
                }
              else
                {
                  if(match_cons(r_61, sym_Var_1))
                    {
                      s_61 = ATgetArgument(r_61, 0);
                      {
                        t = not_null(s_61);
                        {
                          ATerm o_9 = t;
                          int p_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_9);
                            }
                          else
                            {
                              t = o_9;
                              {
                                ATerm b_2 (ATerm t)
                                {
                                  t = term_q_9;
                                  return(t);
                                }
                                t = debug_1(t, b_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_61, sym_Prefix_2))
                        {
                          s_61 = ATgetArgument(r_61, 0);
                          t_61 = ATgetArgument(r_61, 1);
                          {
                            ATerm y_61 = NULL,a_62 = NULL;
                            ATerm r_9;
                            r_9 = t;
                            {
                              ATerm z_61 = NULL;
                              t = not_null(s_61);
                              {
                                t = eval_config_0(t);
                                {
                                  z_61 = t;
                                  if(((y_61 != NULL) && (y_61 != z_61)))
                                    _fail(z_61);
                                  else
                                    y_61 = z_61;
                                }
                              }
                            }
                            t = r_9;
                            {
                              ATerm b_62 = NULL;
                              t = not_null(t_61);
                              {
                                t = eval_config_0(t);
                                {
                                  b_62 = t;
                                  if(((a_62 != NULL) && (a_62 != b_62)))
                                    _fail(b_62);
                                  else
                                    a_62 = b_62;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_61), not_null(a_62));
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
  ATerm j_62 = NULL;
  j_62 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(j_62));
    {
      t = table_get_0(t);
      {
        ATerm c_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_9;
            t_9 = t;
            {
              ATerm l_62 = NULL;
              ATerm m_62 = NULL;
              m_62 = t;
              if(((l_62 != NULL) && (l_62 != m_62)))
                _fail(m_62);
              else
                l_62 = m_62;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_9, not_null(j_62), not_null(l_62));
                t = table_put_0(t);
              }
            }
            t = t_9;
          }
          return(t);
        }
        t = try_1(t, c_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm u_9;
    u_9 = t;
    {
      ATerm q_62 = NULL;
      ATerm r_62 = NULL;
      t = term_v_9;
      {
        t = get_config_0(t);
        {
          r_62 = t;
          if(((q_62 != NULL) && (q_62 != r_62)))
            _fail(r_62);
          else
            q_62 = r_62;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_62), term_w_9);
        t = geq_0(t);
      }
    }
    t = u_9;
    t = e_65(t);
    return(t);
  }
  t = try_1(t, d_2);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATempty, term_x_9));
  {
    t = printnl_0(t);
    {
      t = term_g_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_62 = NULL;
  u_62 = t;
  t = SSL_TicksToSeconds(not_null(u_62));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
  z_62 = t;
  y_62 :
  if(match_cons(z_62, sym__2))
    {
      a_63 = ATgetArgument(z_62, 0);
      b_63 = ATgetArgument(z_62, 1);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_63), not_null(b_63));
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            t = SSL_addr(not_null(a_63), not_null(b_63));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm))
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_71(t);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
        i_63 = t;
        h_63 :
        if(((ATgetType(i_63) == AT_LIST) && ((ATermList) i_63 != ATempty)))
          {
            j_63 = ATgetFirst((ATermList) i_63);
            k_63 = (ATerm) ATgetNext((ATermList) i_63);
            {
              ATerm n_63 = NULL;
              ATerm o_63 = NULL;
              t = not_null(k_63);
              {
                t = foldr_2(t, r_71, s_71);
                {
                  o_63 = t;
                  if(((n_63 != NULL) && (n_63 != o_63)))
                    _fail(o_63);
                  else
                    n_63 = o_63;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_63), not_null(n_63));
                t = s_71(t);
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
ATerm crush_2 (ATerm t, ATerm g_73 (ATerm), ATerm h_73 (ATerm))
{
  ATerm v_63 = NULL;
  ATerm x_63 = NULL;
  v_63 = t;
  {
    ATerm y_63 = NULL;
    ATerm a_64 = NULL,b_64 = NULL,i_64 = NULL;
    t = not_null(v_63);
    {
      y_63 = t;
      {
        t = SSL_explode_term(not_null(y_63));
        {
          a_64 = t;
          u_63 :
          if(match_cons(a_64, sym__2))
            {
              b_64 = ATgetArgument(a_64, 0);
              i_64 = ATgetArgument(a_64, 1);
              if(((x_63 != NULL) && (x_63 != i_64)))
                _fail(i_64);
              else
                x_63 = i_64;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_63);
      t = foldr_2(t, g_73, h_73);
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
    ATerm e_2 (ATerm t)
    {
      t = term_c_10;
      return(t);
    }
    t = crush_2(t, e_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  n_64 :
  if(match_cons(o_64, sym__2))
    {
      p_64 = ATgetArgument(o_64, 0);
      q_64 = ATgetArgument(o_64, 1);
      {
        ATerm d_10;
        d_10 = t;
        {
          ATerm e_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_64), not_null(q_64));
              LocalPopChoice(f_10);
            }
          else
            {
              t = e_10;
              t = SSL_gtr(not_null(p_64), not_null(q_64));
            }
        }
        t = d_10;
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
  ATerm w_64 = NULL;
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
      x_64 = t;
      v_64 :
      if(match_cons(x_64, sym__2))
        {
          y_64 = ATgetArgument(x_64, 0);
          z_64 = ATgetArgument(x_64, 1);
          {
            if(((w_64 != NULL) && (w_64 != y_64)))
              _fail(y_64);
            else
              w_64 = y_64;
            if(((w_64 != NULL) && (w_64 != z_64)))
              _fail(z_64);
            else
              w_64 = z_64;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm i_10;
    i_10 = t;
    {
      ATerm f_65 = NULL;
      ATerm g_65 = NULL;
      t = term_v_9;
      {
        t = get_config_0(t);
        {
          g_65 = t;
          if(((f_65 != NULL) && (f_65 != g_65)))
            _fail(g_65);
          else
            f_65 = g_65;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_65), term_g_9);
        t = geq_0(t);
      }
    }
    t = i_10;
    t = d_65(t);
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm k_65 = NULL,m_65 = NULL;
    ATerm j_10;
    j_10 = t;
    {
      ATerm l_65 = NULL;
      t = run_time_0(t);
      {
        l_65 = t;
        if(((k_65 != NULL) && (k_65 != l_65)))
          _fail(l_65);
        else
          k_65 = l_65;
      }
    }
    t = j_10;
    {
      ATerm n_65 = NULL;
      t = term_k_10;
      {
        t = get_config_0(t);
        {
          n_65 = t;
          if(((m_65 != NULL) && (m_65 != n_65)))
            _fail(n_65);
          else
            m_65 = n_65;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_10), not_null(k_65)), term_l_10), not_null(m_65)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, g_2);
  {
    t = term_c_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  r_65 :
  if(match_cons(s_65, sym__2))
    {
      t_65 = ATgetArgument(s_65, 0);
      u_65 = ATgetArgument(s_65, 1);
      t = SSL_WriteToTextFile(not_null(t_65), not_null(u_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  a_66 = t;
  z_65 :
  if(match_cons(a_66, sym__2))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      t = SSL_WriteToBinaryFile(not_null(b_66), not_null(c_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_66 = NULL;
  ATerm n_10;
  n_10 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm o_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            ATerm v_66 = NULL,w_66 = NULL;
            v_66 = t;
            n_66 :
            if(match_cons(v_66, sym_Output_1))
              {
                w_66 = ATgetArgument(v_66, 0);
                if(((u_66 != NULL) && (u_66 != w_66)))
                  _fail(w_66);
                else
                  u_66 = w_66;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_2);
          LocalPopChoice(p_10);
        }
      else
        {
          t = o_10;
          {
            ATerm x_66 = NULL;
            t = term_q_10;
            {
              x_66 = t;
              if(((u_66 != NULL) && (u_66 != x_66)))
                _fail(x_66);
              else
                u_66 = x_66;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_2, _id);
  }
  t = n_10;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        t = not_null(u_66);
        return(t);
      }
      t = split_2(t, k_2, _id);
      return(t);
    }
    t = _2(t, _id, j_2);
    {
      ATerm r_10 = t;
      int s_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              ATerm y_66 = NULL;
              y_66 = t;
              p_66 :
              if(!(match_cons(y_66, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, m_2);
            return(t);
          }
          t = _2(t, l_2, WriteToBinaryFile_0);
          LocalPopChoice(s_10);
        }
      else
        {
          t = r_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm g_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL;
  ATerm t_10;
  t_10 = t;
  t = dtime_0(t);
  t = t_10;
  {
    t = e_67(t);
    {
      ATerm w_10;
      w_10 = t;
      {
        ATerm h_67 = NULL;
        t = dtime_0(t);
        {
          h_67 = t;
          if(((g_67 != NULL) && (g_67 != h_67)))
            _fail(h_67);
          else
            g_67 = h_67;
        }
      }
      t = w_10;
      {
        i_67 = t;
        f_67 :
        if(match_cons(i_67, sym__2))
          {
            j_67 = ATgetArgument(i_67, 0);
            k_67 = ATgetArgument(i_67, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_67)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_67))), not_null(k_67));
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
  ATerm q_67 = NULL;
  q_67 = t;
  t = SSL_ReadFromFile(not_null(q_67));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm w_67 = NULL,y_67 = NULL;
  ATerm x_10;
  x_10 = t;
  {
    ATerm x_67 = NULL;
    t = f_70(t);
    {
      x_67 = t;
      if(((w_67 != NULL) && (w_67 != x_67)))
        _fail(x_67);
      else
        w_67 = x_67;
    }
  }
  t = x_10;
  {
    ATerm z_67 = NULL;
    t = g_70(t);
    {
      z_67 = t;
      if(((y_67 != NULL) && (y_67 != z_67)))
        _fail(z_67);
      else
        y_67 = z_67;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_67), not_null(y_67));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_68 = NULL;
  ATerm y_10;
  y_10 = t;
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          ATerm g_68 = NULL,h_68 = NULL;
          g_68 = t;
          d_68 :
          if(match_cons(g_68, sym_Input_1))
            {
              h_68 = ATgetArgument(g_68, 0);
              if(((f_68 != NULL) && (f_68 != h_68)))
                _fail(h_68);
              else
                f_68 = h_68;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_2);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        {
          ATerm i_68 = NULL;
          t = term_c_11;
          {
            i_68 = t;
            if(((f_68 != NULL) && (f_68 != i_68)))
              _fail(i_68);
            else
              f_68 = i_68;
          }
        }
      }
  }
  t = y_10;
  {
    ATerm o_2 (ATerm t)
    {
      t = not_null(f_68);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_68 = NULL;
  p_68 = t;
  o_68 :
  if(match_cons(p_68, sym_Version_0))
    {
      ATerm r_68 = NULL,t_68 = NULL;
      ATerm d_11;
      d_11 = t;
      {
        ATerm s_68 = NULL;
        t = SSLgetAnnotations(not_null(p_68));
        {
          s_68 = t;
          if(((r_68 != NULL) && (r_68 != s_68)))
            _fail(s_68);
          else
            r_68 = s_68;
        }
      }
      t = d_11;
      {
        ATerm u_68 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_68));
        {
          u_68 = t;
          if(((t_68 != NULL) && (t_68 != u_68)))
            _fail(u_68);
          else
            t_68 = u_68;
        }
        t = not_null(t_68);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_2);
  t = c_67(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_68 = NULL;
  z_68 = t;
  t = SSL_table_create(not_null(z_68));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_69 = NULL;
  d_69 = t;
  {
    ATerm i_11;
    i_11 = t;
    {
      t = term_j_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_11, term_k_11, not_null(d_69));
          t = table_put_0(t);
        }
      }
    }
    t = i_11;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_69 = NULL;
  h_69 = t;
  t = SSL_string_to_int(not_null(h_69));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  p_69 = t;
  n_69 :
  if(match_string(p_69, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(p_69) == AT_LIST) && ((ATermList) p_69 != ATempty)))
        {
          q_69 = ATgetFirst((ATermList) p_69);
          r_69 = (ATerm) ATgetNext((ATermList) p_69);
          o_69 :
          if(((ATgetType(r_69) == AT_LIST) && ((ATermList) r_69 != ATempty)))
            {
              s_69 = ATgetFirst((ATermList) r_69);
              t_69 = (ATerm) ATgetNext((ATermList) r_69);
              {
                ATerm x_69 = NULL;
                ATerm l_11;
                l_11 = t;
                {
                  t = not_null(q_69);
                  t = j_0(t);
                }
                t = l_11;
                {
                  ATerm y_69 = NULL;
                  t = not_null(s_69);
                  {
                    t = k_0(t);
                    {
                      y_69 = t;
                      if(((x_69 != NULL) && (x_69 != y_69)))
                        _fail(y_69);
                      else
                        x_69 = y_69;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_69)), not_null(x_69));
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm r_70 = NULL;
        r_70 = t;
        c_70 :
        if(!(match_string(r_70, "-i")))
          {
            if(!(match_string(r_70, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        ATerm u_70 = NULL;
        ATerm o_11;
        o_11 = t;
        {
          ATerm s_70 = NULL;
          ATerm t_70 = NULL;
          t_70 = t;
          if(((s_70 != NULL) && (s_70 != t_70)))
            _fail(t_70);
          else
            s_70 = t_70;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(s_70));
            t = set_config_0(t);
          }
        }
        t = o_11;
        {
          ATerm v_70 = NULL;
          v_70 = t;
          if(((u_70 != NULL) && (u_70 != v_70)))
            _fail(v_70);
          else
            u_70 = v_70;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_70));
        }
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_q_11;
        return(t);
      }
      t = ArgOption_3(t, q_2, r_2, s_2);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm w_70 = NULL;
              w_70 = t;
              h_70 :
              if(!(match_string(w_70, "-o")))
                {
                  if(!(match_string(w_70, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              ATerm z_70 = NULL;
              ATerm t_11;
              t_11 = t;
              {
                ATerm x_70 = NULL;
                ATerm y_70 = NULL;
                y_70 = t;
                if(((x_70 != NULL) && (x_70 != y_70)))
                  _fail(y_70);
                else
                  x_70 = y_70;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(x_70));
                  t = set_config_0(t);
                }
              }
              t = t_11;
              {
                ATerm a_71 = NULL;
                a_71 = t;
                if(((z_70 != NULL) && (z_70 != a_71)))
                  _fail(a_71);
                else
                  z_70 = a_71;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_70));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = ArgOption_3(t, t_2, u_2, v_2);
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm w_11 = t;
              int x_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm b_71 = NULL;
                    b_71 = t;
                    k_70 :
                    if(!(match_string(b_71, "-S")))
                      {
                        if(!(match_string(b_71, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_2 (ATerm t)
                  {
                    t = term_y_11;
                    t = set_config_0(t);
                    t = term_z_11;
                    return(t);
                  }
                  ATerm y_2 (ATerm t)
                  {
                    t = term_a_12;
                    return(t);
                  }
                  t = Option_3(t, w_2, x_2, y_2);
                  LocalPopChoice(x_11);
                }
              else
                {
                  t = w_11;
                  {
                    ATerm b_12 = t;
                    int c_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_2 (ATerm t)
                        {
                          ATerm c_71 = NULL;
                          c_71 = t;
                          l_70 :
                          if(!(match_string(c_71, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_3 (ATerm t)
                        {
                          ATerm f_71 = NULL;
                          ATerm d_12;
                          d_12 = t;
                          {
                            ATerm d_71 = NULL;
                            ATerm e_71 = NULL;
                            t = string_to_int_0(t);
                            {
                              e_71 = t;
                              if(((d_71 != NULL) && (d_71 != e_71)))
                                _fail(e_71);
                              else
                                d_71 = e_71;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(d_71));
                              t = set_config_0(t);
                            }
                          }
                          t = d_12;
                          {
                            ATerm g_71 = NULL;
                            g_71 = t;
                            if(((f_71 != NULL) && (f_71 != g_71)))
                              _fail(g_71);
                            else
                              f_71 = g_71;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_71));
                          }
                          return(t);
                        }
                        ATerm b_3 (ATerm t)
                        {
                          t = term_e_12;
                          return(t);
                        }
                        t = ArgOption_3(t, z_2, a_3, b_3);
                        LocalPopChoice(c_12);
                      }
                    else
                      {
                        t = b_12;
                        {
                          ATerm f_12 = t;
                          int g_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_3 (ATerm t)
                              {
                                ATerm h_71 = NULL;
                                h_71 = t;
                                o_70 :
                                if(!(match_string(h_71, "-v")))
                                  {
                                    if(!(match_string(h_71, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_3 (ATerm t)
                              {
                                t = term_j_12;
                                t = set_config_0(t);
                                t = term_k_12;
                                return(t);
                              }
                              ATerm e_3 (ATerm t)
                              {
                                t = term_l_12;
                                return(t);
                              }
                              t = Option_3(t, c_3, d_3, e_3);
                              LocalPopChoice(g_12);
                            }
                          else
                            {
                              t = f_12;
                              {
                                ATerm p_12 = t;
                                int q_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_3 (ATerm t)
                                    {
                                      ATerm i_71 = NULL;
                                      i_71 = t;
                                      p_70 :
                                      if(!(match_string(i_71, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm g_3 (ATerm t)
                                    {
                                      t = term_s_12;
                                      t = set_config_0(t);
                                      t = term_t_12;
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_u_12;
                                      return(t);
                                    }
                                    t = Option_3(t, f_3, g_3, h_3);
                                    LocalPopChoice(q_12);
                                  }
                                else
                                  {
                                    t = p_12;
                                    {
                                      ATerm i_3 (ATerm t)
                                      {
                                        ATerm j_71 = NULL;
                                        j_71 = t;
                                        q_70 :
                                        if(!(match_string(j_71, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm j_3 (ATerm t)
                                      {
                                        t = term_w_12;
                                        t = set_config_0(t);
                                        t = term_x_12;
                                        return(t);
                                      }
                                      ATerm k_3 (ATerm t)
                                      {
                                        t = term_y_12;
                                        return(t);
                                      }
                                      t = Option_3(t, i_3, j_3, k_3);
                                    }
                                  }
                              }
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
  ATerm t_71 = NULL;
  t_71 = t;
  t = SSL_table_destroy(not_null(t_71));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_71 = NULL;
  x_71 = t;
  t = SSL_exit(not_null(x_71));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_72 = NULL;
  b_72 = t;
  t = SSL_implode_string(not_null(b_72));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm e_72 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_72);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        {
          t = Nil_0(t);
          t = r_77(t);
        }
      }
    return(t);
  }
  t = e_72(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
        h_72 = t;
        g_72 :
        if(((ATgetType(h_72) == AT_LIST) && ((ATermList) h_72 != ATempty)))
          {
            i_72 = ATgetFirst((ATermList) h_72);
            j_72 = (ATerm) ATgetNext((ATermList) h_72);
            {
              t = not_null(i_72);
              {
                ATerm l_3 (ATerm t)
                {
                  t = not_null(j_72);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_3);
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
  ATerm p_72 = NULL;
  p_72 = t;
  t = SSL_explode_string(not_null(p_72));
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
ATerm long_description_1 (ATerm t, ATerm d_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm s_72 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = Cons_2(t, d_77, s_72);
      }
    return(t);
  }
  t = s_72(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL;
  b_73 = t;
  y_72 :
  if(((ATgetType(b_73) == AT_LIST) && ((ATermList) b_73 != ATempty)))
    {
      z_72 = ATgetFirst((ATermList) b_73);
      a_73 = (ATerm) ATgetNext((ATermList) b_73);
      {
        ATerm e_73 = NULL;
        t = not_null(a_73);
        {
          ATerm h_13;
          h_13 = t;
          {
            ATerm f_73 = NULL,j_73 = NULL,l_73 = NULL;
            ATerm i_13;
            i_13 = t;
            {
              ATerm i_73 = NULL;
              t = i_0(t);
              {
                i_73 = t;
                if(((f_73 != NULL) && (f_73 != i_73)))
                  _fail(i_73);
                else
                  f_73 = i_73;
              }
            }
            t = i_13;
            {
              ATerm k_73 = NULL;
              t = not_null(z_72);
              {
                t = f_0(t);
                {
                  k_73 = t;
                  if(((j_73 != NULL) && (j_73 != k_73)))
                    _fail(k_73);
                  else
                    j_73 = k_73;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_73)), not_null(j_73));
                {
                  l_73 = t;
                  if(((e_73 != NULL) && (e_73 != l_73)))
                    _fail(l_73);
                  else
                    e_73 = l_73;
                }
              }
            }
          }
          t = h_13;
          {
            ATerm m_3 (ATerm t)
            {
              t = not_null(e_73);
              return(t);
            }
            t = reverse_acc_2(t, f_0, m_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) b_73 == ATempty))
        {
          {
            t = term_i_12;
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
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_50 (ATerm))
{
  ATerm w_73 = NULL,x_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_cons(w_73, sym_Program_1))
    {
      x_73 = ATgetArgument(w_73, 0);
      {
        ATerm a_74 = NULL,c_74 = NULL;
        ATerm b_74 = NULL;
        t = SSLgetAnnotations(not_null(w_73));
        {
          b_74 = t;
          if(((a_74 != NULL) && (a_74 != b_74)))
            _fail(b_74);
          else
            a_74 = b_74;
        }
        {
          t = not_null(x_73);
          {
            ATerm e_74 = NULL;
            t = j_50(t);
            {
              c_74 = t;
              {
                ATerm f_74 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_74)), not_null(a_74));
                {
                  f_74 = t;
                  if(((e_74 != NULL) && (e_74 != f_74)))
                    _fail(f_74);
                  else
                    e_74 = f_74;
                }
                t = not_null(e_74);
              }
            }
          }
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
  ATerm o_74 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm p_74 = NULL;
      p_74 = t;
      if(((o_74 != NULL) && (o_74 != p_74)))
        _fail(p_74);
      else
        o_74 = p_74;
      return(t);
    }
    t = Program_1(t, p_3);
    return(t);
  }
  t = option_defined_1(t, o_3);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm q_74 = NULL;
      ATerm r_74 = NULL;
      t = term_i_12;
      {
        ATerm r_3 (ATerm t)
        {
          t = not_null(o_74);
          return(t);
        }
        t = short_description_1(t, r_3);
        {
          t = concat_strings_0(t);
          {
            r_74 = t;
            if(((q_74 != NULL) && (q_74 != r_74)))
              _fail(r_74);
            else
              q_74 = r_74;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATempty, not_null(q_74)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATempty, term_j_13));
      {
        t = printnl_0(t);
        {
          t = term_m_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm s_74 = NULL;
                  s_74 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_74)), term_n_13));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm u_74 = NULL;
                    ATerm v_74 = NULL;
                    t = term_i_12;
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(o_74);
                        return(t);
                      }
                      t = long_description_1(t, u_3);
                      {
                        t = concat_strings_0(t);
                        {
                          v_74 = t;
                          if(((u_74 != NULL) && (u_74 != v_74)))
                            _fail(v_74);
                          else
                            u_74 = v_74;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_74)), term_o_13));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_3);
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
ATerm Undefined_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm f_75 = NULL,g_75 = NULL;
  f_75 = t;
  e_75 :
  if(match_cons(f_75, sym_Undefined_1))
    {
      g_75 = ATgetArgument(f_75, 0);
      {
        ATerm j_75 = NULL,l_75 = NULL;
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
            ATerm n_75 = NULL;
            t = k_50(t);
            {
              l_75 = t;
              {
                ATerm o_75 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_75)), not_null(j_75));
                {
                  o_75 = t;
                  if(((n_75 != NULL) && (n_75 != o_75)))
                    _fail(o_75);
                  else
                    n_75 = o_75;
                }
                t = not_null(n_75);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm t_75 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_77, _id);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = Cons_2(t, _id, t_75);
      }
    return(t);
  }
  t = t_75(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_65 (ATerm))
{
  t = fetch_1(t, b_65);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_75 = NULL;
  y_75 = t;
  x_75 :
  if(match_cons(y_75, sym_Help_0))
    {
      ATerm a_76 = NULL,c_76 = NULL;
      ATerm r_13;
      r_13 = t;
      {
        ATerm b_76 = NULL;
        t = SSLgetAnnotations(not_null(y_75));
        {
          b_76 = t;
          if(((a_76 != NULL) && (a_76 != b_76)))
            _fail(b_76);
          else
            a_76 = b_76;
        }
      }
      t = r_13;
      {
        ATerm d_76 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_76));
        {
          d_76 = t;
          if(((c_76 != NULL) && (c_76 != d_76)))
            _fail(d_76);
          else
            c_76 = d_76;
        }
        t = not_null(c_76);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_85(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  i_76 :
  if(match_cons(j_76, sym__2))
    {
      k_76 = ATgetArgument(j_76, 0);
      l_76 = ATgetArgument(j_76, 1);
      t = SSL_table_get(not_null(k_76), not_null(l_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  s_76 = t;
  r_76 :
  if(match_cons(s_76, sym__3))
    {
      t_76 = ATgetArgument(s_76, 0);
      u_76 = ATgetArgument(s_76, 1);
      v_76 = ATgetArgument(s_76, 2);
      {
        ATerm u_13;
        u_13 = t;
        {
          ATerm z_76 = NULL;
          ATerm a_77 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_76), not_null(u_76));
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                t = (ATerm) ATempty;
              }
            {
              a_77 = t;
              if(((z_76 != NULL) && (z_76 != a_77)))
                _fail(a_77);
              else
                z_76 = a_77;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_76), not_null(u_76), (ATerm) ATinsert(CheckATermList(not_null(z_76)), not_null(v_76)));
            t = table_put_0(t);
          }
        }
        t = u_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm i_77 = NULL;
  ATerm j_77 = NULL;
  t = term_i_12;
  {
    t = h_64(t);
    {
      j_77 = t;
      if(((i_77 != NULL) && (i_77 != j_77)))
        _fail(j_77);
      else
        i_77 = j_77;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_13, term_l_13, not_null(i_77));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL;
  t_77 = t;
  q_77 :
  if(match_string(t_77, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(t_77) == AT_LIST) && ((ATermList) t_77 != ATempty)))
        {
          u_77 = ATgetFirst((ATermList) t_77);
          v_77 = (ATerm) ATgetNext((ATermList) t_77);
          {
            ATerm y_77 = NULL;
            ATerm x_13;
            x_13 = t;
            {
              t = not_null(u_77);
              t = a_0(t);
            }
            t = x_13;
            {
              ATerm z_77 = NULL;
              t = term_i_12;
              {
                t = b_0(t);
                {
                  z_77 = t;
                  if(((y_77 != NULL) && (y_77 != z_77)))
                    _fail(z_77);
                  else
                    y_77 = z_77;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_77)), not_null(y_77));
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
  ATerm v_3 (ATerm t)
  {
    ATerm e_78 = NULL;
    e_78 = t;
    d_78 :
    if(!(match_string(e_78, "--help")))
      {
        if(!(match_string(e_78, "-h")))
          {
            if(!(match_string(e_78, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_y_13;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_z_13;
    return(t);
  }
  t = Option_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  h_78 = t;
  g_78 :
  if(((ATgetType(h_78) == AT_LIST) && ((ATermList) h_78 != ATempty)))
    {
      i_78 = ATgetFirst((ATermList) h_78);
      j_78 = (ATerm) ATgetNext((ATermList) h_78);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_78)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_78)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_60 (ATerm), ATerm d_60 (ATerm))
{
  ATerm t_78 = NULL,v_78 = NULL,w_78 = NULL;
  t_78 = t;
  s_78 :
  if(((ATgetType(t_78) == AT_LIST) && ((ATermList) t_78 != ATempty)))
    {
      v_78 = ATgetFirst((ATermList) t_78);
      w_78 = (ATerm) ATgetNext((ATermList) t_78);
      {
        ATerm a_79 = NULL,c_79 = NULL;
        ATerm b_79 = NULL;
        t = SSLgetAnnotations(not_null(t_78));
        {
          b_79 = t;
          if(((a_79 != NULL) && (a_79 != b_79)))
            _fail(b_79);
          else
            a_79 = b_79;
        }
        {
          t = not_null(v_78);
          {
            ATerm e_79 = NULL;
            t = c_60(t);
            {
              c_79 = t;
              {
                t = not_null(w_78);
                {
                  ATerm g_79 = NULL;
                  t = d_60(t);
                  {
                    e_79 = t;
                    {
                      ATerm h_79 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_79)), not_null(c_79)), not_null(a_79));
                      {
                        h_79 = t;
                        if(((g_79 != NULL) && (g_79 != h_79)))
                          _fail(h_79);
                        else
                          g_79 = h_79;
                      }
                      t = not_null(g_79);
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
  ATerm r_79 = NULL;
  r_79 = t;
  q_79 :
  if(((ATermList) r_79 == ATempty))
    {
      {
        ATerm t_79 = NULL,v_79 = NULL;
        ATerm a_14;
        a_14 = t;
        {
          ATerm u_79 = NULL;
          t = SSLgetAnnotations(not_null(r_79));
          {
            u_79 = t;
            if(((t_79 != NULL) && (t_79 != u_79)))
              _fail(u_79);
            else
              t_79 = u_79;
          }
        }
        t = a_14;
        {
          ATerm w_79 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_79));
          {
            w_79 = t;
            if(((v_79 != NULL) && (v_79 != w_79)))
              _fail(w_79);
            else
              v_79 = w_79;
          }
          t = not_null(v_79);
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
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL;
  c_80 = t;
  b_80 :
  if(match_cons(c_80, sym__2))
    {
      d_80 = ATgetArgument(c_80, 0);
      e_80 = ATgetArgument(c_80, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_9, not_null(d_80), not_null(e_80));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm b_14;
  b_14 = t;
  {
    ATerm y_3 (ATerm t)
    {
      t = term_c_14;
      t = f_64(t);
      return(t);
    }
    t = try_1(t, y_3);
  }
  t = b_14;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm m_80 = NULL;
      ATerm d_14;
      d_14 = t;
      {
        ATerm k_80 = NULL;
        ATerm l_80 = NULL;
        l_80 = t;
        if(((k_80 != NULL) && (k_80 != l_80)))
          _fail(l_80);
        else
          k_80 = l_80;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(k_80));
          t = set_config_0(t);
        }
      }
      t = d_14;
      {
        ATerm n_80 = NULL;
        n_80 = t;
        if(((m_80 != NULL) && (m_80 != n_80)))
          _fail(n_80);
        else
          m_80 = n_80;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_80));
      }
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = m_14;
              {
                t = f_64(t);
                t = Cons_2(t, _id, a_4);
              }
            }
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_3, a_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
  ATerm q_14;
  q_14 = t;
  {
    ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
    w_80 = t;
    s_80 :
    if(match_cons(w_80, sym__3))
      {
        x_80 = ATgetArgument(w_80, 0);
        y_80 = ATgetArgument(w_80, 1);
        z_80 = ATgetArgument(w_80, 2);
        {
          if(((t_80 != NULL) && (t_80 != x_80)))
            _fail(x_80);
          else
            t_80 = x_80;
          {
            if(((u_80 != NULL) && (u_80 != y_80)))
              _fail(y_80);
            else
              u_80 = y_80;
            {
              if(((v_80 != NULL) && (v_80 != z_80)))
                _fail(z_80);
              else
                v_80 = z_80;
              t = SSL_table_put(not_null(t_80), not_null(u_80), not_null(v_80));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm c_81 = NULL;
  ATerm u_14;
  u_14 = t;
  {
    t = term_x_14;
    t = table_put_0(t);
  }
  t = u_14;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_64(t);
          LocalPopChoice(z_14);
        }
      else
        {
          t = y_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_4);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_c_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm d_81 = NULL;
                  d_81 = t;
                  if(((c_81 != NULL) && (c_81 != d_81)))
                    _fail(d_81);
                  else
                    c_81 = d_81;
                  return(t);
                }
                t = Undefined_1(t, e_4);
                return(t);
              }
              t = option_defined_1(t, d_4);
              {
                ATerm c_15;
                c_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_81)), term_d_15));
                  t = printnl_0(t);
                }
                t = c_15;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_4);
      {
        ATerm e_15;
        e_15 = t;
        {
          t = term_k_13;
          t = table_destroy_0(t);
        }
        t = e_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_66(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_4);
  {
    t = store_options_0(t);
    {
      t = t_66(t);
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_66);
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, q_66);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = m_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm m_66 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm r_15;
      r_15 = t;
      {
        ATerm g_81 = NULL;
        ATerm h_81 = NULL;
        t = term_k_10;
        {
          t = get_config_0(t);
          {
            h_81 = t;
            if(((g_81 != NULL) && (g_81 != h_81)))
              _fail(h_81);
            else
              g_81 = h_81;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_9, (ATerm) ATinsert(ATempty, not_null(g_81)));
          t = printnl_0(t);
        }
      }
      t = r_15;
      return(t);
    }
    t = if_verbose2_1(t, h_4);
    return(t);
  }
  t = iowrap_4(t, k_66, l_66, m_66, g_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  t = iowrap_3(t, i_66, j_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_66 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    t = _2(t, _id, f_66);
    return(t);
  }
  t = iowrap_2(t, i_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
