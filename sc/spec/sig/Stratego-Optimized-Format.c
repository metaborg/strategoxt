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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  init_constant_terms();
}
ATerm term_v_14;
ATerm term_g_14;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_f_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_g_7;
ATerm term_a_7;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_j_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_j_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_j_9);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_j_9);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, (ATerm) ATempty);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm b_58 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm s_56 (ATerm));
ATerm Op_2 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm y_57 (ATerm));
ATerm Alt_3 (ATerm, ATerm v_57 (ATerm), ATerm w_57 (ATerm), ATerm x_57 (ATerm));
ATerm Case_4 (ATerm, ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm Let_2 (ATerm, ATerm z_53 (ATerm), ATerm a_54 (ATerm));
ATerm Prim_2 (ATerm, ATerm n_52 (ATerm), ATerm o_52 (ATerm));
ATerm Where_1 (ATerm, ATerm x_52 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm v_52 (ATerm), ATerm w_52 (ATerm));
ATerm Build_1 (ATerm, ATerm s_52 (ATerm));
ATerm Thread_1 (ATerm, ATerm f_53 (ATerm));
ATerm All_1 (ATerm, ATerm e_53 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm c_53 (ATerm));
ATerm Cong_2 (ATerm, ATerm a_53 (ATerm), ATerm b_53 (ATerm));
ATerm Path_2 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm Rec_2 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm SVar_1 (ATerm, ATerm w_53 (ATerm));
ATerm Call_2 (ATerm, ATerm l_54 (ATerm), ATerm m_54 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm GChoice_2 (ATerm, ATerm r_53 (ATerm), ATerm s_53 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm o_53 (ATerm), ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm LChoice_2 (ATerm, ATerm m_53 (ATerm), ATerm n_53 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_53 (ATerm), ATerm l_53 (ATerm));
ATerm Seq_2 (ATerm, ATerm i_53 (ATerm), ATerm j_53 (ATerm));
ATerm Test_1 (ATerm, ATerm g_53 (ATerm));
ATerm Not_1 (ATerm, ATerm h_53 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm j_54 (ATerm), ATerm k_54 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_54 (ATerm), ATerm c_54 (ATerm), ATerm d_54 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm f_71 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_82 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_84 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_83 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm crush_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_83 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_87 (ATerm));
ATerm map_1 (ATerm, ATerm d_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_87 (ATerm));
ATerm Program_1 (ATerm, ATerm z_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_82 (ATerm));
ATerm Undefined_1 (ATerm, ATerm a_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_83 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  o_10 :
  if(match_cons(t_11, sym_Var_1))
    {
      u_11 = ATgetArgument(t_11, 0);
      {
        ATerm q_3 = t;
        int r_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_12 = NULL,x_12 = NULL;
            ATerm w_12 = NULL;
            t = SSLgetAnnotations(not_null(t_11));
            {
              w_12 = t;
              if(((l_12 != NULL) && (l_12 != w_12)))
                _fail(w_12);
              else
                l_12 = w_12;
            }
            {
              t = not_null(u_11);
              {
                ATerm c_13 = NULL;
                t = s_0(t);
                {
                  x_12 = t;
                  {
                    ATerm d_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_12)), not_null(l_12));
                    {
                      d_13 = t;
                      if(((c_13 != NULL) && (c_13 != d_13)))
                        _fail(d_13);
                      else
                        c_13 = d_13;
                    }
                    t = not_null(c_13);
                  }
                }
              }
            }
            LocalPopChoice(r_3);
          }
        else
          {
            t = q_3;
            {
              ATerm g_13 = NULL,i_13 = NULL;
              ATerm h_13 = NULL;
              t = SSLgetAnnotations(not_null(t_11));
              {
                h_13 = t;
                if(((g_13 != NULL) && (g_13 != h_13)))
                  _fail(h_13);
                else
                  g_13 = h_13;
              }
              {
                t = not_null(u_11);
                {
                  ATerm k_13 = NULL;
                  t = s_0(t);
                  {
                    i_13 = t;
                    {
                      ATerm l_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_13)), not_null(g_13));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_Assign_1))
    {
      a_14 = ATgetArgument(z_13, 0);
      {
        ATerm d_14 = NULL,f_14 = NULL;
        ATerm e_14 = NULL;
        t = SSLgetAnnotations(not_null(z_13));
        {
          e_14 = t;
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
        }
        {
          t = not_null(a_14);
          {
            ATerm h_14 = NULL;
            t = b_58(t);
            {
              f_14 = t;
              {
                ATerm i_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(f_14)), not_null(d_14));
                {
                  i_14 = t;
                  if(((h_14 != NULL) && (h_14 != i_14)))
                    _fail(i_14);
                  else
                    h_14 = i_14;
                }
                t = not_null(h_14);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm s_14 = NULL,t_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym_BuildDefault_1))
    {
      t_14 = ATgetArgument(s_14, 0);
      {
        ATerm w_14 = NULL,y_14 = NULL;
        ATerm x_14 = NULL;
        t = SSLgetAnnotations(not_null(s_14));
        {
          x_14 = t;
          if(((w_14 != NULL) && (w_14 != x_14)))
            _fail(x_14);
          else
            w_14 = x_14;
        }
        {
          t = not_null(t_14);
          {
            ATerm a_15 = NULL;
            t = s_56(t);
            {
              y_14 = t;
              {
                ATerm b_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(y_14)), not_null(w_14));
                {
                  b_15 = t;
                  if(((a_15 != NULL) && (a_15 != b_15)))
                    _fail(b_15);
                  else
                    a_15 = b_15;
                }
                t = not_null(a_15);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm))
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym_Op_2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        ATerm s_15 = NULL,u_15 = NULL;
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(m_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
        {
          t = not_null(n_15);
          {
            ATerm w_15 = NULL;
            t = r_54(t);
            {
              u_15 = t;
              {
                t = not_null(o_15);
                {
                  ATerm y_15 = NULL;
                  t = s_54(t);
                  {
                    w_15 = t;
                    {
                      ATerm z_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_15), not_null(w_15)), not_null(s_15));
                      {
                        z_15 = t;
                        if(((y_15 != NULL) && (y_15 != z_15)))
                          _fail(z_15);
                        else
                          y_15 = z_15;
                      }
                      t = not_null(y_15);
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
  ATerm o_16 = NULL,p_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Str_1))
    {
      p_16 = ATgetArgument(o_16, 0);
      {
        ATerm s_3 = t;
        int t_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_16 = NULL,u_16 = NULL;
            ATerm t_16 = NULL;
            t = SSLgetAnnotations(not_null(o_16));
            {
              t_16 = t;
              if(((s_16 != NULL) && (s_16 != t_16)))
                _fail(t_16);
              else
                s_16 = t_16;
            }
            {
              t = not_null(p_16);
              {
                ATerm w_16 = NULL;
                t = r_0(t);
                {
                  u_16 = t;
                  {
                    ATerm x_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(u_16)), not_null(s_16));
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
            LocalPopChoice(t_3);
          }
        else
          {
            t = s_3;
            {
              ATerm a_17 = NULL,c_17 = NULL;
              ATerm b_17 = NULL;
              t = SSLgetAnnotations(not_null(o_16));
              {
                b_17 = t;
                if(((a_17 != NULL) && (a_17 != b_17)))
                  _fail(b_17);
                else
                  a_17 = b_17;
              }
              {
                t = not_null(p_16);
                {
                  ATerm e_17 = NULL;
                  t = r_0(t);
                  {
                    c_17 = t;
                    {
                      ATerm f_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(c_17)), not_null(a_17));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  t = SSL_is_real(not_null(p_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_Real_1))
    {
      c_18 = ATgetArgument(b_18, 0);
      {
        ATerm u_3 = t;
        int v_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL,h_18 = NULL;
            ATerm g_18 = NULL;
            t = SSLgetAnnotations(not_null(b_18));
            {
              g_18 = t;
              if(((f_18 != NULL) && (f_18 != g_18)))
                _fail(g_18);
              else
                f_18 = g_18;
            }
            {
              t = not_null(c_18);
              {
                ATerm j_18 = NULL;
                t = q_0(t);
                {
                  h_18 = t;
                  {
                    ATerm k_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(h_18)), not_null(f_18));
                    {
                      k_18 = t;
                      if(((j_18 != NULL) && (j_18 != k_18)))
                        _fail(k_18);
                      else
                        j_18 = k_18;
                    }
                    t = not_null(j_18);
                  }
                }
              }
            }
            LocalPopChoice(v_3);
          }
        else
          {
            t = u_3;
            {
              ATerm n_18 = NULL,p_18 = NULL;
              ATerm o_18 = NULL;
              t = SSLgetAnnotations(not_null(b_18));
              {
                o_18 = t;
                if(((n_18 != NULL) && (n_18 != o_18)))
                  _fail(o_18);
                else
                  n_18 = o_18;
              }
              {
                t = not_null(c_18);
                {
                  ATerm r_18 = NULL;
                  t = q_0(t);
                  {
                    p_18 = t;
                    {
                      ATerm s_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(p_18)), not_null(n_18));
                      {
                        s_18 = t;
                        if(((r_18 != NULL) && (r_18 != s_18)))
                          _fail(s_18);
                        else
                          r_18 = s_18;
                      }
                      t = not_null(r_18);
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
  ATerm k_19 = NULL,l_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym_Int_1))
    {
      l_19 = ATgetArgument(k_19, 0);
      {
        ATerm w_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_19 = NULL,q_19 = NULL;
            ATerm p_19 = NULL;
            t = SSLgetAnnotations(not_null(k_19));
            {
              p_19 = t;
              if(((o_19 != NULL) && (o_19 != p_19)))
                _fail(p_19);
              else
                o_19 = p_19;
            }
            {
              t = not_null(l_19);
              {
                ATerm s_19 = NULL;
                t = p_0(t);
                {
                  q_19 = t;
                  {
                    ATerm t_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_19)), not_null(o_19));
                    {
                      t_19 = t;
                      if(((s_19 != NULL) && (s_19 != t_19)))
                        _fail(t_19);
                      else
                        s_19 = t_19;
                    }
                    t = not_null(s_19);
                  }
                }
              }
            }
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm w_19 = NULL,y_19 = NULL;
              ATerm x_19 = NULL;
              t = SSLgetAnnotations(not_null(k_19));
              {
                x_19 = t;
                if(((w_19 != NULL) && (w_19 != x_19)))
                  _fail(x_19);
                else
                  w_19 = x_19;
              }
              {
                t = not_null(l_19);
                {
                  ATerm a_20 = NULL;
                  t = p_0(t);
                  {
                    y_19 = t;
                    {
                      ATerm b_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(y_19)), not_null(w_19));
                      {
                        b_20 = t;
                        if(((a_20 != NULL) && (a_20 != b_20)))
                          _fail(b_20);
                        else
                          a_20 = b_20;
                      }
                      t = not_null(a_20);
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
  ATerm o_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Wld_0))
    {
      ATerm q_20 = NULL,s_20 = NULL;
      ATerm y_3;
      y_3 = t;
      {
        ATerm r_20 = NULL;
        t = SSLgetAnnotations(not_null(o_20));
        {
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
        }
      }
      t = y_3;
      {
        ATerm t_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(q_20));
        {
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
        }
        t = not_null(s_20);
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
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(a_4);
    }
  else
    {
      t = z_3;
      {
        ATerm b_4 = t;
        int c_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(c_4);
          }
        else
          {
            t = b_4;
            {
              ATerm d_4 = t;
              int e_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(e_4);
                }
              else
                {
                  t = d_4;
                  {
                    ATerm f_4 = t;
                    int g_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(g_4);
                      }
                    else
                      {
                        t = f_4;
                        {
                          ATerm h_4 = t;
                          int i_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    ATerm b_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, b_0);
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
                                          t = BuildDefault_1(t, term_expression_0);
                                          LocalPopChoice(m_4);
                                        }
                                      else
                                        {
                                          t = l_4;
                                          {
                                            ATerm c_0 (ATerm t)
                                            {
                                              t = term_n_4;
                                              return(t);
                                            }
                                            t = debug_1(t, c_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_Assign_2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL,r_21 = NULL;
            ATerm q_21 = NULL;
            t = SSLgetAnnotations(not_null(j_21));
            {
              q_21 = t;
              if(((p_21 != NULL) && (p_21 != q_21)))
                _fail(q_21);
              else
                p_21 = q_21;
            }
            {
              t = not_null(k_21);
              {
                ATerm t_21 = NULL;
                t = n_0(t);
                {
                  r_21 = t;
                  {
                    t = not_null(l_21);
                    {
                      ATerm v_21 = NULL;
                      t = o_0(t);
                      {
                        t_21 = t;
                        {
                          ATerm w_21 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(r_21), not_null(t_21)), not_null(p_21));
                          {
                            w_21 = t;
                            if(((v_21 != NULL) && (v_21 != w_21)))
                              _fail(w_21);
                            else
                              v_21 = w_21;
                          }
                          t = not_null(v_21);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            {
              ATerm a_22 = NULL,c_22 = NULL;
              ATerm b_22 = NULL;
              t = SSLgetAnnotations(not_null(j_21));
              {
                b_22 = t;
                if(((a_22 != NULL) && (a_22 != b_22)))
                  _fail(b_22);
                else
                  a_22 = b_22;
              }
              {
                t = not_null(k_21);
                {
                  ATerm e_22 = NULL;
                  t = n_0(t);
                  {
                    c_22 = t;
                    {
                      t = not_null(l_21);
                      {
                        ATerm g_22 = NULL;
                        t = o_0(t);
                        {
                          e_22 = t;
                          {
                            ATerm h_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(c_22), not_null(e_22)), not_null(a_22));
                            {
                              h_22 = t;
                              if(((g_22 != NULL) && (g_22 != h_22)))
                                _fail(h_22);
                              else
                                g_22 = h_22;
                            }
                            t = not_null(g_22);
                          }
                        }
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
ATerm Continue_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  w_22 :
  if(match_cons(c_23, sym_Continue_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm g_23 = NULL,i_23 = NULL;
        ATerm h_23 = NULL;
        t = SSLgetAnnotations(not_null(c_23));
        {
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
        }
        {
          t = not_null(d_23);
          {
            ATerm k_23 = NULL;
            t = y_57(t);
            {
              i_23 = t;
              {
                ATerm l_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(i_23)), not_null(g_23));
                {
                  l_23 = t;
                  if(((k_23 != NULL) && (k_23 != l_23)))
                    _fail(l_23);
                  else
                    k_23 = l_23;
                }
                t = not_null(k_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm v_57 (ATerm), ATerm w_57 (ATerm), ATerm x_57 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_Alt_3))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      d_24 = ATgetArgument(a_24, 2);
      {
        ATerm i_24 = NULL,k_24 = NULL;
        ATerm j_24 = NULL;
        t = SSLgetAnnotations(not_null(a_24));
        {
          j_24 = t;
          if(((i_24 != NULL) && (i_24 != j_24)))
            _fail(j_24);
          else
            i_24 = j_24;
        }
        {
          t = not_null(b_24);
          {
            ATerm m_24 = NULL;
            t = v_57(t);
            {
              k_24 = t;
              {
                t = not_null(c_24);
                {
                  ATerm o_24 = NULL;
                  t = w_57(t);
                  {
                    m_24 = t;
                    {
                      t = not_null(d_24);
                      {
                        ATerm q_24 = NULL;
                        t = x_57(t);
                        {
                          o_24 = t;
                          {
                            ATerm r_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(k_24), not_null(m_24), not_null(o_24)), not_null(i_24));
                            {
                              r_24 = t;
                              if(((q_24 != NULL) && (q_24 != r_24)))
                                _fail(r_24);
                              else
                                q_24 = r_24;
                            }
                            t = not_null(q_24);
                          }
                        }
                      }
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
ATerm Case_4 (ATerm t, ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym_Case_4))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      j_25 = ATgetArgument(g_25, 2);
      k_25 = ATgetArgument(g_25, 3);
      {
        ATerm q_25 = NULL,s_25 = NULL;
        ATerm r_25 = NULL;
        t = SSLgetAnnotations(not_null(g_25));
        {
          r_25 = t;
          if(((q_25 != NULL) && (q_25 != r_25)))
            _fail(r_25);
          else
            q_25 = r_25;
        }
        {
          t = not_null(h_25);
          {
            ATerm u_25 = NULL;
            t = o_57(t);
            {
              s_25 = t;
              {
                t = not_null(i_25);
                {
                  ATerm w_25 = NULL;
                  t = p_57(t);
                  {
                    u_25 = t;
                    {
                      t = not_null(j_25);
                      {
                        ATerm y_25 = NULL;
                        t = q_57(t);
                        {
                          w_25 = t;
                          {
                            t = not_null(k_25);
                            {
                              ATerm a_26 = NULL;
                              t = r_57(t);
                              {
                                y_25 = t;
                                {
                                  ATerm b_26 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(s_25), not_null(u_25), not_null(w_25), not_null(y_25)), not_null(q_25));
                                  {
                                    b_26 = t;
                                    if(((a_26 != NULL) && (a_26 != b_26)))
                                      _fail(b_26);
                                    else
                                      a_26 = b_26;
                                  }
                                  t = not_null(a_26);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm z_53 (ATerm), ATerm a_54 (ATerm))
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  o_26 :
  if(match_cons(p_26, sym_Let_2))
    {
      q_26 = ATgetArgument(p_26, 0);
      r_26 = ATgetArgument(p_26, 1);
      {
        ATerm v_26 = NULL,x_26 = NULL;
        ATerm w_26 = NULL;
        t = SSLgetAnnotations(not_null(p_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
        {
          t = not_null(q_26);
          {
            ATerm z_26 = NULL;
            t = z_53(t);
            {
              x_26 = t;
              {
                t = not_null(r_26);
                {
                  ATerm b_27 = NULL;
                  t = a_54(t);
                  {
                    z_26 = t;
                    {
                      ATerm c_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(x_26), not_null(z_26)), not_null(v_26));
                      {
                        c_27 = t;
                        if(((b_27 != NULL) && (b_27 != c_27)))
                          _fail(c_27);
                        else
                          b_27 = c_27;
                      }
                      t = not_null(b_27);
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
ATerm Prim_2 (ATerm t, ATerm n_52 (ATerm), ATerm o_52 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym_Prim_2))
    {
      p_27 = ATgetArgument(o_27, 0);
      q_27 = ATgetArgument(o_27, 1);
      {
        ATerm u_27 = NULL,w_27 = NULL;
        ATerm v_27 = NULL;
        t = SSLgetAnnotations(not_null(o_27));
        {
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
        }
        {
          t = not_null(p_27);
          {
            ATerm y_27 = NULL;
            t = n_52(t);
            {
              w_27 = t;
              {
                t = not_null(q_27);
                {
                  ATerm a_28 = NULL;
                  t = o_52(t);
                  {
                    y_27 = t;
                    {
                      ATerm b_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_27), not_null(y_27)), not_null(u_27));
                      {
                        b_28 = t;
                        if(((a_28 != NULL) && (a_28 != b_28)))
                          _fail(b_28);
                        else
                          a_28 = b_28;
                      }
                      t = not_null(a_28);
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
ATerm Where_1 (ATerm t, ATerm x_52 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym_Where_1))
    {
      o_28 = ATgetArgument(n_28, 0);
      {
        ATerm r_28 = NULL,t_28 = NULL;
        ATerm s_28 = NULL;
        t = SSLgetAnnotations(not_null(n_28));
        {
          s_28 = t;
          if(((r_28 != NULL) && (r_28 != s_28)))
            _fail(s_28);
          else
            r_28 = s_28;
        }
        {
          t = not_null(o_28);
          {
            ATerm v_28 = NULL;
            t = x_52(t);
            {
              t_28 = t;
              {
                ATerm w_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(t_28)), not_null(r_28));
                {
                  w_28 = t;
                  if(((v_28 != NULL) && (v_28 != w_28)))
                    _fail(w_28);
                  else
                    v_28 = w_28;
                }
                t = not_null(v_28);
              }
            }
          }
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
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_is_int(not_null(e_29));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm v_52 (ATerm), ATerm w_52 (ATerm))
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_Scope_2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      {
        ATerm t_29 = NULL,v_29 = NULL;
        ATerm u_29 = NULL;
        t = SSLgetAnnotations(not_null(n_29));
        {
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
        }
        {
          t = not_null(o_29);
          {
            ATerm x_29 = NULL;
            t = v_52(t);
            {
              v_29 = t;
              {
                t = not_null(p_29);
                {
                  ATerm z_29 = NULL;
                  t = w_52(t);
                  {
                    x_29 = t;
                    {
                      ATerm a_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_29), not_null(x_29)), not_null(t_29));
                      {
                        a_30 = t;
                        if(((z_29 != NULL) && (z_29 != a_30)))
                          _fail(a_30);
                        else
                          z_29 = a_30;
                      }
                      t = not_null(z_29);
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
ATerm Build_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym_Build_1))
    {
      m_30 = ATgetArgument(l_30, 0);
      {
        ATerm p_30 = NULL,r_30 = NULL;
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(l_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
        {
          t = not_null(m_30);
          {
            ATerm t_30 = NULL;
            t = s_52(t);
            {
              r_30 = t;
              {
                ATerm u_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(r_30)), not_null(p_30));
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
                t = not_null(t_30);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm f_53 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym_Thread_1))
    {
      f_31 = ATgetArgument(e_31, 0);
      {
        ATerm i_31 = NULL,k_31 = NULL;
        ATerm j_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
        {
          t = not_null(f_31);
          {
            ATerm m_31 = NULL;
            t = f_53(t);
            {
              k_31 = t;
              {
                ATerm n_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(k_31)), not_null(i_31));
                {
                  n_31 = t;
                  if(((m_31 != NULL) && (m_31 != n_31)))
                    _fail(n_31);
                  else
                    m_31 = n_31;
                }
                t = not_null(m_31);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm e_53 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_All_1))
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
            t = e_53(t);
            {
              d_32 = t;
              {
                ATerm g_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(d_32)), not_null(b_32));
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym_Some_1))
    {
      v_32 = ATgetArgument(u_32, 0);
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_32 = NULL,a_33 = NULL;
            ATerm z_32 = NULL;
            t = SSLgetAnnotations(not_null(u_32));
            {
              z_32 = t;
              if(((y_32 != NULL) && (y_32 != z_32)))
                _fail(z_32);
              else
                y_32 = z_32;
            }
            {
              t = not_null(v_32);
              {
                ATerm c_33 = NULL;
                t = m_0(t);
                {
                  a_33 = t;
                  {
                    ATerm d_33 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(a_33)), not_null(y_32));
                    {
                      d_33 = t;
                      if(((c_33 != NULL) && (c_33 != d_33)))
                        _fail(d_33);
                      else
                        c_33 = d_33;
                    }
                    t = not_null(c_33);
                  }
                }
              }
            }
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
            {
              ATerm g_33 = NULL,i_33 = NULL;
              ATerm h_33 = NULL;
              t = SSLgetAnnotations(not_null(u_32));
              {
                h_33 = t;
                if(((g_33 != NULL) && (g_33 != h_33)))
                  _fail(h_33);
                else
                  g_33 = h_33;
              }
              {
                t = not_null(v_32);
                {
                  ATerm k_33 = NULL;
                  t = m_0(t);
                  {
                    i_33 = t;
                    {
                      ATerm l_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(i_33)), not_null(g_33));
                      {
                        l_33 = t;
                        if(((k_33 != NULL) && (k_33 != l_33)))
                          _fail(l_33);
                        else
                          k_33 = l_33;
                      }
                      t = not_null(k_33);
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
ATerm One_1 (ATerm t, ATerm c_53 (ATerm))
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym_One_1))
    {
      a_34 = ATgetArgument(z_33, 0);
      {
        ATerm d_34 = NULL,f_34 = NULL;
        ATerm e_34 = NULL;
        t = SSLgetAnnotations(not_null(z_33));
        {
          e_34 = t;
          if(((d_34 != NULL) && (d_34 != e_34)))
            _fail(e_34);
          else
            d_34 = e_34;
        }
        {
          t = not_null(a_34);
          {
            ATerm h_34 = NULL;
            t = c_53(t);
            {
              f_34 = t;
              {
                ATerm i_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(f_34)), not_null(d_34));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm a_53 (ATerm), ATerm b_53 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_Cong_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      {
        ATerm z_34 = NULL,b_35 = NULL;
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(t_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        {
          t = not_null(u_34);
          {
            ATerm d_35 = NULL;
            t = a_53(t);
            {
              b_35 = t;
              {
                t = not_null(v_34);
                {
                  ATerm f_35 = NULL;
                  t = b_53(t);
                  {
                    d_35 = t;
                    {
                      ATerm g_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(b_35), not_null(d_35)), not_null(z_34));
                      {
                        g_35 = t;
                        if(((f_35 != NULL) && (f_35 != g_35)))
                          _fail(g_35);
                        else
                          f_35 = g_35;
                      }
                      t = not_null(f_35);
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
ATerm Path_2 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym_Path_2))
    {
      w_35 = ATgetArgument(v_35, 0);
      x_35 = ATgetArgument(v_35, 1);
      {
        ATerm b_36 = NULL,d_36 = NULL;
        ATerm c_36 = NULL;
        t = SSLgetAnnotations(not_null(v_35));
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
        {
          t = not_null(w_35);
          {
            ATerm f_36 = NULL;
            t = y_52(t);
            {
              d_36 = t;
              {
                t = not_null(x_35);
                {
                  ATerm h_36 = NULL;
                  t = z_52(t);
                  {
                    f_36 = t;
                    {
                      ATerm i_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(d_36), not_null(f_36)), not_null(b_36));
                      {
                        i_36 = t;
                        if(((h_36 != NULL) && (h_36 != i_36)))
                          _fail(i_36);
                        else
                          h_36 = i_36;
                      }
                      t = not_null(h_36);
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
ATerm Rec_2 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym_Rec_2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      {
        ATerm a_37 = NULL,c_37 = NULL;
        ATerm b_37 = NULL;
        t = SSLgetAnnotations(not_null(u_36));
        {
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
        }
        {
          t = not_null(v_36);
          {
            ATerm e_37 = NULL;
            t = x_53(t);
            {
              c_37 = t;
              {
                t = not_null(w_36);
                {
                  ATerm g_37 = NULL;
                  t = y_53(t);
                  {
                    e_37 = t;
                    {
                      ATerm h_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(c_37), not_null(e_37)), not_null(a_37));
                      {
                        h_37 = t;
                        if(((g_37 != NULL) && (g_37 != h_37)))
                          _fail(h_37);
                        else
                          g_37 = h_37;
                      }
                      t = not_null(g_37);
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
ATerm SVar_1 (ATerm t, ATerm w_53 (ATerm))
{
  ATerm w_37 = NULL,x_37 = NULL;
  w_37 = t;
  v_37 :
  if(match_cons(w_37, sym_SVar_1))
    {
      x_37 = ATgetArgument(w_37, 0);
      {
        ATerm a_38 = NULL,c_38 = NULL;
        ATerm b_38 = NULL;
        t = SSLgetAnnotations(not_null(w_37));
        {
          b_38 = t;
          if(((a_38 != NULL) && (a_38 != b_38)))
            _fail(b_38);
          else
            a_38 = b_38;
        }
        {
          t = not_null(x_37);
          {
            ATerm e_38 = NULL;
            t = w_53(t);
            {
              c_38 = t;
              {
                ATerm f_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(c_38)), not_null(a_38));
                {
                  f_38 = t;
                  if(((e_38 != NULL) && (e_38 != f_38)))
                    _fail(f_38);
                  else
                    e_38 = f_38;
                }
                t = not_null(e_38);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm l_54 (ATerm), ATerm m_54 (ATerm))
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym_Call_2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      {
        ATerm z_38 = NULL,b_39 = NULL;
        ATerm a_39 = NULL;
        t = SSLgetAnnotations(not_null(s_38));
        {
          a_39 = t;
          if(((z_38 != NULL) && (z_38 != a_39)))
            _fail(a_39);
          else
            z_38 = a_39;
        }
        {
          t = not_null(t_38);
          {
            ATerm d_39 = NULL;
            t = l_54(t);
            {
              b_39 = t;
              {
                t = not_null(u_38);
                {
                  ATerm f_39 = NULL;
                  t = m_54(t);
                  {
                    d_39 = t;
                    {
                      ATerm g_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(b_39), not_null(d_39)), not_null(z_38));
                      {
                        g_39 = t;
                        if(((f_39 != NULL) && (f_39 != g_39)))
                          _fail(g_39);
                        else
                          f_39 = g_39;
                      }
                      t = not_null(f_39);
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
ATerm LGChoice_2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym_LGChoice_2))
    {
      u_39 = ATgetArgument(t_39, 0);
      v_39 = ATgetArgument(t_39, 1);
      {
        ATerm z_39 = NULL,d_40 = NULL;
        ATerm a_40 = NULL;
        t = SSLgetAnnotations(not_null(t_39));
        {
          a_40 = t;
          if(((z_39 != NULL) && (z_39 != a_40)))
            _fail(a_40);
          else
            z_39 = a_40;
        }
        {
          t = not_null(u_39);
          {
            ATerm f_40 = NULL;
            t = t_53(t);
            {
              d_40 = t;
              {
                t = not_null(v_39);
                {
                  ATerm m_40 = NULL;
                  t = u_53(t);
                  {
                    f_40 = t;
                    {
                      ATerm o_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(d_40), not_null(f_40)), not_null(z_39));
                      {
                        o_40 = t;
                        if(((m_40 != NULL) && (m_40 != o_40)))
                          _fail(o_40);
                        else
                          m_40 = o_40;
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
ATerm GChoice_2 (ATerm t, ATerm r_53 (ATerm), ATerm s_53 (ATerm))
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_GChoice_2))
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
            t = r_53(t);
            {
              i_41 = t;
              {
                t = not_null(c_41);
                {
                  ATerm m_41 = NULL;
                  t = s_53(t);
                  {
                    k_41 = t;
                    {
                      ATerm n_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(i_41), not_null(k_41)), not_null(g_41));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm o_53 (ATerm), ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_GuardedLChoice_3))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      d_42 = ATgetArgument(a_42, 2);
      {
        ATerm i_42 = NULL,k_42 = NULL;
        ATerm j_42 = NULL;
        t = SSLgetAnnotations(not_null(a_42));
        {
          j_42 = t;
          if(((i_42 != NULL) && (i_42 != j_42)))
            _fail(j_42);
          else
            i_42 = j_42;
        }
        {
          t = not_null(b_42);
          {
            ATerm m_42 = NULL;
            t = o_53(t);
            {
              k_42 = t;
              {
                t = not_null(c_42);
                {
                  ATerm o_42 = NULL;
                  t = p_53(t);
                  {
                    m_42 = t;
                    {
                      t = not_null(d_42);
                      {
                        ATerm q_42 = NULL;
                        t = q_53(t);
                        {
                          o_42 = t;
                          {
                            ATerm r_42 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(k_42), not_null(m_42), not_null(o_42)), not_null(i_42));
                            {
                              r_42 = t;
                              if(((q_42 != NULL) && (q_42 != r_42)))
                                _fail(r_42);
                              else
                                q_42 = r_42;
                            }
                            t = not_null(q_42);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm m_53 (ATerm), ATerm n_53 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_LChoice_2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      {
        ATerm t_43 = NULL,v_43 = NULL;
        ATerm u_43 = NULL;
        t = SSLgetAnnotations(not_null(l_43));
        {
          u_43 = t;
          if(((t_43 != NULL) && (t_43 != u_43)))
            _fail(u_43);
          else
            t_43 = u_43;
        }
        {
          t = not_null(m_43);
          {
            ATerm h_44 = NULL;
            t = m_53(t);
            {
              v_43 = t;
              {
                t = not_null(n_43);
                {
                  ATerm j_44 = NULL;
                  t = n_53(t);
                  {
                    h_44 = t;
                    {
                      ATerm k_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(v_43), not_null(h_44)), not_null(t_43));
                      {
                        k_44 = t;
                        if(((j_44 != NULL) && (j_44 != k_44)))
                          _fail(k_44);
                        else
                          j_44 = k_44;
                      }
                      t = not_null(j_44);
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
ATerm Choice_2 (ATerm t, ATerm k_53 (ATerm), ATerm l_53 (ATerm))
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  z_44 :
  if(match_cons(a_45, sym_Choice_2))
    {
      b_45 = ATgetArgument(a_45, 0);
      c_45 = ATgetArgument(a_45, 1);
      {
        ATerm g_45 = NULL,i_45 = NULL;
        ATerm h_45 = NULL;
        t = SSLgetAnnotations(not_null(a_45));
        {
          h_45 = t;
          if(((g_45 != NULL) && (g_45 != h_45)))
            _fail(h_45);
          else
            g_45 = h_45;
        }
        {
          t = not_null(b_45);
          {
            ATerm k_45 = NULL;
            t = k_53(t);
            {
              i_45 = t;
              {
                t = not_null(c_45);
                {
                  ATerm n_45 = NULL;
                  t = l_53(t);
                  {
                    k_45 = t;
                    {
                      ATerm o_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(i_45), not_null(k_45)), not_null(g_45));
                      {
                        o_45 = t;
                        if(((n_45 != NULL) && (n_45 != o_45)))
                          _fail(o_45);
                        else
                          n_45 = o_45;
                      }
                      t = not_null(n_45);
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
ATerm Seq_2 (ATerm t, ATerm i_53 (ATerm), ATerm j_53 (ATerm))
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  z_45 :
  if(match_cons(a_46, sym_Seq_2))
    {
      b_46 = ATgetArgument(a_46, 0);
      c_46 = ATgetArgument(a_46, 1);
      {
        ATerm g_46 = NULL,i_46 = NULL;
        ATerm h_46 = NULL;
        t = SSLgetAnnotations(not_null(a_46));
        {
          h_46 = t;
          if(((g_46 != NULL) && (g_46 != h_46)))
            _fail(h_46);
          else
            g_46 = h_46;
        }
        {
          t = not_null(b_46);
          {
            ATerm k_46 = NULL;
            t = i_53(t);
            {
              i_46 = t;
              {
                t = not_null(c_46);
                {
                  ATerm p_46 = NULL;
                  t = j_53(t);
                  {
                    k_46 = t;
                    {
                      ATerm q_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(i_46), not_null(k_46)), not_null(g_46));
                      {
                        q_46 = t;
                        if(((p_46 != NULL) && (p_46 != q_46)))
                          _fail(q_46);
                        else
                          p_46 = q_46;
                      }
                      t = not_null(p_46);
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
ATerm Test_1 (ATerm t, ATerm g_53 (ATerm))
{
  ATerm b_47 = NULL,c_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym_Test_1))
    {
      c_47 = ATgetArgument(b_47, 0);
      {
        ATerm f_47 = NULL,h_47 = NULL;
        ATerm g_47 = NULL;
        t = SSLgetAnnotations(not_null(b_47));
        {
          g_47 = t;
          if(((f_47 != NULL) && (f_47 != g_47)))
            _fail(g_47);
          else
            f_47 = g_47;
        }
        {
          t = not_null(c_47);
          {
            ATerm j_47 = NULL;
            t = g_53(t);
            {
              h_47 = t;
              {
                ATerm k_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(h_47)), not_null(f_47));
                {
                  k_47 = t;
                  if(((j_47 != NULL) && (j_47 != k_47)))
                    _fail(k_47);
                  else
                    j_47 = k_47;
                }
                t = not_null(j_47);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm h_53 (ATerm))
{
  ATerm u_47 = NULL,v_47 = NULL;
  u_47 = t;
  t_47 :
  if(match_cons(u_47, sym_Not_1))
    {
      v_47 = ATgetArgument(u_47, 0);
      {
        ATerm f_48 = NULL,h_48 = NULL;
        ATerm g_48 = NULL;
        t = SSLgetAnnotations(not_null(u_47));
        {
          g_48 = t;
          if(((f_48 != NULL) && (f_48 != g_48)))
            _fail(g_48);
          else
            f_48 = g_48;
        }
        {
          t = not_null(v_47);
          {
            ATerm j_48 = NULL;
            t = h_53(t);
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
      ATerm s_4;
      s_4 = t;
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
      t = s_4;
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
      ATerm t_4;
      t_4 = t;
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
      t = t_4;
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
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      {
        ATerm w_4 = t;
        int x_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(x_4);
          }
        else
          {
            t = w_4;
            {
              ATerm y_4 = t;
              int z_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(z_4);
                }
              else
                {
                  t = y_4;
                  {
                    ATerm a_5 = t;
                    int b_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(b_5);
                      }
                    else
                      {
                        t = a_5;
                        {
                          ATerm c_5 = t;
                          int d_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                  ATerm e_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, e_0, Nil_0);
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
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm f_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, f_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Build_1(t, term_expression_0);
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
                                                                                                                        ATerm t_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm i_6 = t;
                                                                                                                            int j_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                LocalPopChoice(j_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = i_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, u_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, t_0, strategy_expression_0);
                                                                                                                        LocalPopChoice(h_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = g_6;
                                                                                                                        {
                                                                                                                          ATerm k_6 = t;
                                                                                                                          int l_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
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
                                                                                                                                    ATerm v_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, v_0);
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
                                                                                                                                          ATerm w_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm x_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm q_6 = t;
                                                                                                                                              int r_6 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  LocalPopChoice(r_6);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = q_6;
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
                                                                                                                                                      t = Continue_1(t, is_string_0);
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
                                                                                                                                                            ATerm c_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, c_1, term_expression_0);
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
                                                                                                                                                                  ATerm d_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, d_1);
                                                                                                                                                                  LocalPopChoice(z_6);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = y_6;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm e_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_a_7;
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
      ATerm b_7;
      b_7 = t;
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
      t = b_7;
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
ATerm SDef_4 (ATerm t, ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm j_54 (ATerm), ATerm k_54 (ATerm))
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
            t = h_54(t);
            {
              x_50 = t;
              {
                t = not_null(n_50);
                {
                  ATerm b_51 = NULL;
                  t = i_54(t);
                  {
                    z_50 = t;
                    {
                      t = not_null(o_50);
                      {
                        ATerm f_51 = NULL;
                        t = j_54(t);
                        {
                          b_51 = t;
                          {
                            t = not_null(p_50);
                            {
                              ATerm h_51 = NULL;
                              t = k_54(t);
                              {
                                f_51 = t;
                                {
                                  ATerm i_51 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_4, not_null(x_50), not_null(z_50), not_null(b_51), not_null(f_51)), not_null(v_50));
                                  {
                                    i_51 = t;
                                    if(((h_51 != NULL) && (h_51 != i_51)))
                                      _fail(i_51);
                                    else
                                      h_51 = i_51;
                                  }
                                  t = not_null(h_51);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm b_54 (ATerm), ATerm c_54 (ATerm), ATerm d_54 (ATerm))
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym_SDef_3))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      a_52 = ATgetArgument(x_51, 2);
      {
        ATerm f_52 = NULL,h_52 = NULL;
        ATerm g_52 = NULL;
        t = SSLgetAnnotations(not_null(x_51));
        {
          g_52 = t;
          if(((f_52 != NULL) && (f_52 != g_52)))
            _fail(g_52);
          else
            f_52 = g_52;
        }
        {
          t = not_null(y_51);
          {
            ATerm j_52 = NULL;
            t = b_54(t);
            {
              h_52 = t;
              {
                t = not_null(z_51);
                {
                  ATerm p_52 = NULL;
                  t = c_54(t);
                  {
                    j_52 = t;
                    {
                      t = not_null(a_52);
                      {
                        ATerm r_52 = NULL;
                        t = d_54(t);
                        {
                          p_52 = t;
                          {
                            ATerm t_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(h_52), not_null(j_52), not_null(p_52)), not_null(f_52));
                            {
                              t_52 = t;
                              if(((r_52 != NULL) && (r_52 != t_52)))
                                _fail(t_52);
                              else
                                r_52 = t_52;
                            }
                            t = not_null(r_52);
                          }
                        }
                      }
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
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
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
            ATerm f_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, f_1, is_string_0, Nil_0, strategy_expression_0);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            {
              ATerm g_1 (ATerm t)
              {
                t = term_g_7;
                return(t);
              }
              t = debug_1(t, g_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm n_54 (ATerm t)
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        t = Cons_2(t, f_71, n_54);
      }
    return(t);
  }
  t = n_54(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_l_7;
          return(t);
        }
        t = debug_1(t, h_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  v_54 :
  if(match_cons(w_54, sym__2))
    {
      x_54 = ATgetArgument(w_54, 0);
      y_54 = ATgetArgument(w_54, 1);
      {
        ATerm c_55 = NULL,e_55 = NULL;
        ATerm d_55 = NULL;
        t = SSLgetAnnotations(not_null(w_54));
        {
          d_55 = t;
          if(((c_55 != NULL) && (c_55 != d_55)))
            _fail(d_55);
          else
            c_55 = d_55;
        }
        {
          t = not_null(x_54);
          {
            ATerm g_55 = NULL;
            t = c_51(t);
            {
              e_55 = t;
              {
                t = not_null(y_54);
                {
                  ATerm i_55 = NULL;
                  t = d_51(t);
                  {
                    g_55 = t;
                    {
                      ATerm j_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_55), not_null(g_55)), not_null(c_55));
                      {
                        j_55 = t;
                        if(((i_55 != NULL) && (i_55 != j_55)))
                          _fail(j_55);
                        else
                          i_55 = j_55;
                      }
                      t = not_null(i_55);
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
  ATerm r_55 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm s_55 = NULL,t_55 = NULL;
      s_55 = t;
      q_55 :
      if(match_cons(s_55, sym_Program_1))
        {
          t_55 = ATgetArgument(s_55, 0);
          if(((r_55 != NULL) && (r_55 != t_55)))
            _fail(t_55);
          else
            r_55 = t_55;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, i_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(r_55)), term_o_7));
      {
        t = printnl_0(t);
        {
          t = term_q_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(match_cons(x_55, sym__2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      {
        ATerm r_7;
        r_7 = t;
        t = SSL_printnl(not_null(y_55), not_null(z_55));
        t = r_7;
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
  ATerm e_56 = NULL;
  e_56 = t;
  t = SSL_implode_string(not_null(e_56));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
        j_56 = t;
        i_56 :
        if(((ATgetType(j_56) == AT_LIST) && !(ATisEmpty(j_56))))
          {
            k_56 = ATgetFirst((ATermList) j_56);
            l_56 = (ATerm) ATgetNext((ATermList) j_56);
            {
              t = not_null(k_56);
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(l_56);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm w_56 = NULL;
  ATerm y_56 = NULL;
  w_56 = t;
  {
    ATerm z_56 = NULL;
    ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
    t = not_null(w_56);
    {
      z_56 = t;
      {
        t = SSL_explode_term(not_null(z_56));
        {
          b_57 = t;
          u_56 :
          if(match_cons(b_57, sym__2))
            {
              c_57 = ATgetArgument(b_57, 0);
              d_57 = ATgetArgument(b_57, 1);
              v_56 :
              if(match_string(c_57, ""))
                {
                  if(((y_56 != NULL) && (y_56 != d_57)))
                    _fail(d_57);
                  else
                    y_56 = d_57;
                }
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
      t = not_null(y_56);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm h_57 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_57);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          t = Nil_0(t);
          t = s_71(t);
        }
      }
    return(t);
  }
  t = h_57(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
  k_57 = t;
  j_57 :
  if(match_cons(k_57, sym__2))
    {
      l_57 = ATgetArgument(k_57, 0);
      m_57 = ATgetArgument(k_57, 1);
      {
        t = not_null(l_57);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(m_57);
            return(t);
          }
          t = at_end_1(t, k_1);
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
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_57 = NULL;
  z_57 = t;
  t = SSL_explode_string(not_null(z_57));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm a_8;
  a_8 = t;
  {
    ATerm f_58 = NULL,h_58 = NULL;
    ATerm b_8;
    b_8 = t;
    {
      ATerm g_58 = NULL;
      t = b_82(t);
      {
        g_58 = t;
        if(((f_58 != NULL) && (f_58 != g_58)))
          _fail(g_58);
        else
          f_58 = g_58;
      }
    }
    t = b_8;
    {
      ATerm i_58 = NULL;
      i_58 = t;
      if(((h_58 != NULL) && (h_58 != i_58)))
        _fail(i_58);
      else
        h_58 = i_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_58)), not_null(f_58)));
        t = printnl_0(t);
      }
    }
  }
  t = a_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_58 = NULL;
  m_58 = t;
  t = SSL_is_string(not_null(m_58));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm l_1 (ATerm t)
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = g_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, l_1);
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            {
              ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
              v_58 = t;
              u_58 :
              if(match_cons(v_58, sym_Path_1))
                {
                  w_58 = ATgetArgument(v_58, 0);
                  t = not_null(w_58);
                }
              else
                {
                  if(match_cons(v_58, sym_Var_1))
                    {
                      w_58 = ATgetArgument(v_58, 0);
                      {
                        t = not_null(w_58);
                        {
                          ATerm i_8 = t;
                          int j_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_8);
                            }
                          else
                            {
                              t = i_8;
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_k_8;
                                  return(t);
                                }
                                t = debug_1(t, m_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_58, sym_Prefix_2))
                        {
                          w_58 = ATgetArgument(v_58, 0);
                          x_58 = ATgetArgument(v_58, 1);
                          {
                            ATerm c_59 = NULL,e_59 = NULL;
                            ATerm l_8;
                            l_8 = t;
                            {
                              ATerm d_59 = NULL;
                              t = not_null(w_58);
                              {
                                t = eval_config_0(t);
                                {
                                  d_59 = t;
                                  if(((c_59 != NULL) && (c_59 != d_59)))
                                    _fail(d_59);
                                  else
                                    c_59 = d_59;
                                }
                              }
                            }
                            t = l_8;
                            {
                              ATerm f_59 = NULL;
                              t = not_null(x_58);
                              {
                                t = eval_config_0(t);
                                {
                                  f_59 = t;
                                  if(((e_59 != NULL) && (e_59 != f_59)))
                                    _fail(f_59);
                                  else
                                    e_59 = f_59;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), not_null(e_59));
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
  ATerm n_59 = NULL;
  n_59 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(n_59));
    {
      t = table_get_0(t);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_8;
              p_8 = t;
              {
                ATerm p_59 = NULL;
                ATerm q_59 = NULL;
                q_59 = t;
                if(((p_59 != NULL) && (p_59 != q_59)))
                  _fail(q_59);
                else
                  p_59 = q_59;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_8, not_null(n_59), not_null(p_59));
                  t = table_put_0(t);
                }
              }
              t = p_8;
            }
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8;
      s_8 = t;
      {
        ATerm u_59 = NULL;
        ATerm v_59 = NULL;
        t = term_t_8;
        {
          t = get_config_0(t);
          {
            v_59 = t;
            if(((u_59 != NULL) && (u_59 != v_59)))
              _fail(v_59);
            else
              u_59 = v_59;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_59), term_u_8);
          t = geq_0(t);
        }
      }
      t = s_8;
      t = y_84(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym__2))
    {
      a_60 = ATgetArgument(z_59, 0);
      b_60 = ATgetArgument(z_59, 1);
      t = SSL_WriteToTextFile(not_null(a_60), not_null(b_60));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  h_60 = t;
  g_60 :
  if(match_cons(h_60, sym__2))
    {
      i_60 = ATgetArgument(h_60, 0);
      j_60 = ATgetArgument(h_60, 1);
      t = SSL_WriteToBinaryFile(not_null(i_60), not_null(j_60));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_60 = NULL;
  ATerm v_8;
  v_8 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            ATerm s_60 = NULL,t_60 = NULL;
            s_60 = t;
            o_60 :
            if(match_cons(s_60, sym_Output_1))
              {
                t_60 = ATgetArgument(s_60, 0);
                if(((r_60 != NULL) && (r_60 != t_60)))
                  _fail(t_60);
                else
                  r_60 = t_60;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_1);
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          {
            ATerm u_60 = NULL;
            t = term_y_8;
            {
              u_60 = t;
              if(((r_60 != NULL) && (r_60 != u_60)))
                _fail(u_60);
              else
                r_60 = u_60;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_1, _id);
  }
  t = v_8;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        t = not_null(r_60);
        return(t);
      }
      t = split_2(t, q_1, _id);
      return(t);
    }
    t = _2(t, _id, p_1);
    {
      ATerm z_8 = t;
      int a_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              ATerm v_60 = NULL;
              v_60 = t;
              q_60 :
              if(!(match_cons(v_60, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_1);
            return(t);
          }
          t = _2(t, r_1, WriteToBinaryFile_0);
          LocalPopChoice(a_9);
        }
      else
        {
          t = z_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm b_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  ATerm b_9;
  b_9 = t;
  t = dtime_0(t);
  t = b_9;
  {
    t = f_83(t);
    {
      ATerm c_9;
      c_9 = t;
      {
        ATerm c_61 = NULL;
        t = dtime_0(t);
        {
          c_61 = t;
          if(((b_61 != NULL) && (b_61 != c_61)))
            _fail(c_61);
          else
            b_61 = c_61;
        }
      }
      t = c_9;
      {
        d_61 = t;
        a_61 :
        if(match_cons(d_61, sym__2))
          {
            e_61 = ATgetArgument(d_61, 0);
            f_61 = ATgetArgument(d_61, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_61)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_61))), not_null(f_61));
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
  ATerm l_61 = NULL;
  l_61 = t;
  t = SSL_ReadFromFile(not_null(l_61));
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  ATerm q_61 = NULL,s_61 = NULL;
  ATerm d_9;
  d_9 = t;
  {
    ATerm r_61 = NULL;
    t = g_79(t);
    {
      r_61 = t;
      if(((q_61 != NULL) && (q_61 != r_61)))
        _fail(r_61);
      else
        q_61 = r_61;
    }
  }
  t = d_9;
  {
    ATerm t_61 = NULL;
    t = h_79(t);
    {
      t_61 = t;
      if(((s_61 != NULL) && (s_61 != t_61)))
        _fail(t_61);
      else
        s_61 = t_61;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_61), not_null(s_61));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_61 = NULL;
  ATerm e_9;
  e_9 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          ATerm a_62 = NULL,b_62 = NULL;
          a_62 = t;
          x_61 :
          if(match_cons(a_62, sym_Input_1))
            {
              b_62 = ATgetArgument(a_62, 0);
              if(((z_61 != NULL) && (z_61 != b_62)))
                _fail(b_62);
              else
                z_61 = b_62;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, t_1);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm c_62 = NULL;
          t = term_h_9;
          {
            c_62 = t;
            if(((z_61 != NULL) && (z_61 != c_62)))
              _fail(c_62);
            else
              z_61 = c_62;
          }
        }
      }
  }
  t = e_9;
  {
    ATerm u_1 (ATerm t)
    {
      t = not_null(z_61);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm g_62 = NULL;
    g_62 = t;
    f_62 :
    if(!(match_string(g_62, "-v")))
      {
        if(!(match_string(g_62, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_k_9;
    t = set_config_0(t);
    t = term_l_9;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_m_9;
    return(t);
  }
  t = Option_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm j_62 = NULL;
    j_62 = t;
    h_62 :
    if(!(match_string(j_62, "-k")))
      {
        if(!(match_string(j_62, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm n_9;
    n_9 = t;
    {
      ATerm k_62 = NULL;
      ATerm l_62 = NULL;
      t = string_to_int_0(t);
      {
        l_62 = t;
        if(((k_62 != NULL) && (k_62 != l_62)))
          _fail(l_62);
        else
          k_62 = l_62;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(k_62));
        t = set_config_0(t);
      }
    }
    t = n_9;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_p_9;
    return(t);
  }
  t = ArgOption_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_62 = NULL;
  o_62 = t;
  t = SSL_string_to_int(not_null(o_62));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm w_62 = NULL;
        w_62 = t;
        r_62 :
        if(!(match_string(w_62, "-S")))
          {
            if(!(match_string(w_62, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_t_9;
        t = set_config_0(t);
        t = term_u_9;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_v_9;
        return(t);
      }
      t = Option_3(t, b_2, c_2, d_2);
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm x_62 = NULL;
              x_62 = t;
              s_62 :
              if(!(match_string(x_62, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm c_63 = NULL;
              ATerm y_9;
              y_9 = t;
              {
                ATerm y_62 = NULL;
                ATerm b_63 = NULL;
                t = string_to_int_0(t);
                {
                  b_63 = t;
                  if(((y_62 != NULL) && (y_62 != b_63)))
                    _fail(b_63);
                  else
                    y_62 = b_63;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(y_62));
                  t = set_config_0(t);
                }
              }
              t = y_9;
              {
                ATerm d_63 = NULL;
                d_63 = t;
                if(((c_63 != NULL) && (c_63 != d_63)))
                  _fail(d_63);
                else
                  c_63 = d_63;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_63));
              }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_z_9;
              return(t);
            }
            t = ArgOption_3(t, e_2, f_2, g_2);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm h_2 (ATerm t)
              {
                ATerm e_63 = NULL;
                e_63 = t;
                v_62 :
                if(!(match_string(e_63, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = term_b_10;
                t = set_config_0(t);
                t = term_c_10;
                return(t);
              }
              ATerm j_2 (ATerm t)
              {
                t = term_d_10;
                return(t);
              }
              t = Option_3(t, h_2, i_2, j_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm n_63 = NULL;
    n_63 = t;
    h_63 :
    if(!(match_string(n_63, "-o")))
      {
        if(!(match_string(n_63, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm q_63 = NULL;
    ATerm i_10;
    i_10 = t;
    {
      ATerm o_63 = NULL;
      ATerm p_63 = NULL;
      p_63 = t;
      if(((o_63 != NULL) && (o_63 != p_63)))
        _fail(p_63);
      else
        o_63 = p_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(o_63));
        t = set_config_0(t);
      }
    }
    t = i_10;
    {
      ATerm r_63 = NULL;
      r_63 = t;
      if(((q_63 != NULL) && (q_63 != r_63)))
        _fail(r_63);
      else
        q_63 = r_63;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_63));
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm v_63 = NULL;
          v_63 = t;
          u_63 :
          if(!(match_string(v_63, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_p_10;
          t = set_config_0(t);
          t = term_q_10;
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_r_10;
          return(t);
        }
        t = Option_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL;
  b_64 = t;
  z_63 :
  if(match_string(b_64, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(b_64) == AT_LIST) && !(ATisEmpty(b_64))))
        {
          c_64 = ATgetFirst((ATermList) b_64);
          d_64 = (ATerm) ATgetNext((ATermList) b_64);
          a_64 :
          if(((ATgetType(d_64) == AT_LIST) && !(ATisEmpty(d_64))))
            {
              e_64 = ATgetFirst((ATermList) d_64);
              f_64 = (ATerm) ATgetNext((ATermList) d_64);
              {
                ATerm j_64 = NULL;
                ATerm s_10;
                s_10 = t;
                {
                  t = not_null(c_64);
                  t = j_0(t);
                }
                t = s_10;
                {
                  ATerm k_64 = NULL;
                  t = not_null(e_64);
                  {
                    t = k_0(t);
                    {
                      k_64 = t;
                      if(((j_64 != NULL) && (j_64 != k_64)))
                        _fail(k_64);
                      else
                        j_64 = k_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_64)), not_null(j_64));
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
  ATerm q_2 (ATerm t)
  {
    ATerm r_64 = NULL;
    r_64 = t;
    o_64 :
    if(!(match_string(r_64, "-i")))
      {
        if(!(match_string(r_64, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm u_64 = NULL;
    ATerm t_10;
    t_10 = t;
    {
      ATerm s_64 = NULL;
      ATerm t_64 = NULL;
      t_64 = t;
      if(((s_64 != NULL) && (s_64 != t_64)))
        _fail(t_64);
      else
        s_64 = t_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_10, not_null(s_64));
        t = set_config_0(t);
      }
    }
    t = t_10;
    {
      ATerm v_64 = NULL;
      v_64 = t;
      if(((u_64 != NULL) && (u_64 != v_64)))
        _fail(v_64);
      else
        u_64 = v_64;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_64));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_v_10;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, term_a_11));
  {
    t = printnl_0(t);
    {
      t = term_q_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_64 = NULL;
  z_64 = t;
  t = SSL_TicksToSeconds(not_null(z_64));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  e_65 = t;
  d_65 :
  if(match_cons(e_65, sym__2))
    {
      f_65 = ATgetArgument(e_65, 0);
      g_65 = ATgetArgument(e_65, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_65), not_null(g_65));
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = SSL_addr(not_null(f_65), not_null(g_65));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_77(t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
        n_65 = t;
        m_65 :
        if(((ATgetType(n_65) == AT_LIST) && !(ATisEmpty(n_65))))
          {
            o_65 = ATgetFirst((ATermList) n_65);
            p_65 = (ATerm) ATgetNext((ATermList) n_65);
            {
              ATerm s_65 = NULL;
              ATerm t_65 = NULL;
              t = not_null(p_65);
              {
                t = foldr_2(t, r_77, s_77);
                {
                  t_65 = t;
                  if(((s_65 != NULL) && (s_65 != t_65)))
                    _fail(t_65);
                  else
                    s_65 = t_65;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_65), not_null(s_65));
                t = s_77(t);
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
ATerm crush_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm a_66 = NULL;
  ATerm c_66 = NULL;
  a_66 = t;
  {
    ATerm d_66 = NULL;
    ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
    t = not_null(a_66);
    {
      d_66 = t;
      {
        t = SSL_explode_term(not_null(d_66));
        {
          f_66 = t;
          z_65 :
          if(match_cons(f_66, sym__2))
            {
              g_66 = ATgetArgument(f_66, 0);
              h_66 = ATgetArgument(f_66, 1);
              if(((c_66 != NULL) && (c_66 != h_66)))
                _fail(h_66);
              else
                c_66 = h_66;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_66);
      t = foldr_2(t, p_76, q_76);
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
    ATerm t_2 (ATerm t)
    {
      t = term_s_9;
      return(t);
    }
    t = crush_2(t, t_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      p_66 = ATgetArgument(n_66, 1);
      {
        ATerm f_11;
        f_11 = t;
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_66), not_null(p_66));
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
              t = SSL_gtr(not_null(o_66), not_null(p_66));
            }
        }
        t = f_11;
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
  ATerm v_66 = NULL;
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
      w_66 = t;
      u_66 :
      if(match_cons(w_66, sym__2))
        {
          x_66 = ATgetArgument(w_66, 0);
          y_66 = ATgetArgument(w_66, 1);
          {
            if(((v_66 != NULL) && (v_66 != x_66)))
              _fail(x_66);
            else
              v_66 = x_66;
            if(((v_66 != NULL) && (v_66 != y_66)))
              _fail(y_66);
            else
              v_66 = y_66;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_84 (ATerm))
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11;
      m_11 = t;
      {
        ATerm b_67 = NULL;
        ATerm c_67 = NULL;
        t = term_t_8;
        {
          t = get_config_0(t);
          {
            c_67 = t;
            if(((b_67 != NULL) && (b_67 != c_67)))
              _fail(c_67);
            else
              b_67 = c_67;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_67), term_q_7);
          t = geq_0(t);
        }
      }
      t = m_11;
      t = x_84(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm g_67 = NULL,i_67 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm h_67 = NULL;
      t = run_time_0(t);
      {
        h_67 = t;
        if(((g_67 != NULL) && (g_67 != h_67)))
          _fail(h_67);
        else
          g_67 = h_67;
      }
    }
    t = n_11;
    {
      ATerm j_67 = NULL;
      t = term_o_11;
      {
        t = get_config_0(t);
        {
          j_67 = t;
          if(((i_67 != NULL) && (i_67 != j_67)))
            _fail(j_67);
          else
            i_67 = j_67;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), not_null(g_67)), term_p_11), not_null(i_67)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_2);
  {
    t = term_s_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_67 = NULL;
  q_67 = t;
  p_67 :
  if(match_cons(q_67, sym_Version_0))
    {
      ATerm s_67 = NULL,u_67 = NULL;
      ATerm r_11;
      r_11 = t;
      {
        ATerm t_67 = NULL;
        t = SSLgetAnnotations(not_null(q_67));
        {
          t_67 = t;
          if(((s_67 != NULL) && (s_67 != t_67)))
            _fail(t_67);
          else
            s_67 = t_67;
        }
      }
      t = r_11;
      {
        ATerm v_67 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_67));
        {
          v_67 = t;
          if(((u_67 != NULL) && (u_67 != v_67)))
            _fail(v_67);
          else
            u_67 = v_67;
        }
        t = not_null(u_67);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm s_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = s_11;
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, v_2);
  t = d_83(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_68 = NULL;
  a_68 = t;
  t = SSL_table_create(not_null(a_68));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_68 = NULL;
  e_68 = t;
  {
    ATerm y_11;
    y_11 = t;
    {
      t = term_z_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_11, term_a_12, not_null(e_68));
          t = table_put_0(t);
        }
      }
    }
    t = y_11;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_68 = NULL;
  i_68 = t;
  t = SSL_table_destroy(not_null(i_68));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_68 = NULL;
  m_68 = t;
  t = SSL_exit(not_null(m_68));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL;
  q_68 = t;
  p_68 :
  if(((ATgetType(q_68) == AT_LIST) && ATisEmpty(q_68)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_68) == AT_LIST) && !(ATisEmpty(q_68))))
        {
          r_68 = ATgetFirst((ATermList) q_68);
          s_68 = (ATerm) ATgetNext((ATermList) q_68);
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
  ATerm b_12;
  b_12 = t;
  {
    ATerm v_68 = NULL;
    ATerm y_68 = NULL;
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm w_68 = NULL;
          ATerm x_68 = NULL;
          x_68 = t;
          if(((w_68 != NULL) && (w_68 != x_68)))
            _fail(x_68);
          else
            w_68 = x_68;
          t = (ATerm) ATinsert(ATempty, not_null(w_68));
        }
      }
    {
      y_68 = t;
      if(((v_68 != NULL) && (v_68 != y_68)))
        _fail(y_68);
      else
        v_68 = y_68;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(v_68));
      t = printnl_0(t);
    }
  }
  t = b_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm b_69 (ATerm t)
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
        t = Cons_2(t, d_71, b_69);
      }
    return(t);
  }
  t = b_69(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  k_69 = t;
  h_69 :
  if(((ATgetType(k_69) == AT_LIST) && !(ATisEmpty(k_69))))
    {
      i_69 = ATgetFirst((ATermList) k_69);
      j_69 = (ATerm) ATgetNext((ATermList) k_69);
      {
        ATerm n_69 = NULL;
        t = not_null(j_69);
        {
          ATerm g_12;
          g_12 = t;
          {
            ATerm o_69 = NULL,q_69 = NULL,s_69 = NULL;
            ATerm h_12;
            h_12 = t;
            {
              ATerm p_69 = NULL;
              t = i_0(t);
              {
                p_69 = t;
                if(((o_69 != NULL) && (o_69 != p_69)))
                  _fail(p_69);
                else
                  o_69 = p_69;
              }
            }
            t = h_12;
            {
              ATerm r_69 = NULL;
              t = not_null(i_69);
              {
                t = h_0(t);
                {
                  r_69 = t;
                  if(((q_69 != NULL) && (q_69 != r_69)))
                    _fail(r_69);
                  else
                    q_69 = r_69;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_69)), not_null(q_69));
                {
                  s_69 = t;
                  if(((n_69 != NULL) && (n_69 != s_69)))
                    _fail(s_69);
                  else
                    n_69 = s_69;
                }
              }
            }
          }
          t = g_12;
          {
            ATerm w_2 (ATerm t)
            {
              t = not_null(n_69);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_69) == AT_LIST) && ATisEmpty(k_69)))
        {
          {
            t = term_j_9;
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
ATerm short_description_1 (ATerm t, ATerm a_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm d_70 = NULL,e_70 = NULL;
  d_70 = t;
  c_70 :
  if(match_cons(d_70, sym_Program_1))
    {
      e_70 = ATgetArgument(d_70, 0);
      {
        ATerm h_70 = NULL,j_70 = NULL;
        ATerm i_70 = NULL;
        t = SSLgetAnnotations(not_null(d_70));
        {
          i_70 = t;
          if(((h_70 != NULL) && (h_70 != i_70)))
            _fail(i_70);
          else
            h_70 = i_70;
        }
        {
          t = not_null(e_70);
          {
            ATerm l_70 = NULL;
            t = z_62(t);
            {
              j_70 = t;
              {
                ATerm m_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_70)), not_null(h_70));
                {
                  m_70 = t;
                  if(((l_70 != NULL) && (l_70 != m_70)))
                    _fail(m_70);
                  else
                    l_70 = m_70;
                }
                t = not_null(l_70);
              }
            }
          }
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
  ATerm u_70 = NULL;
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_70 = NULL;
      t = term_o_11;
      {
        t = get_config_0(t);
        {
          v_70 = t;
          if(((u_70 != NULL) && (u_70 != v_70)))
            _fail(v_70);
          else
            u_70 = v_70;
        }
      }
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm w_70 = NULL;
            w_70 = t;
            if(((u_70 != NULL) && (u_70 != w_70)))
              _fail(w_70);
            else
              u_70 = w_70;
            return(t);
          }
          t = Program_1(t, z_2);
          return(t);
        }
        t = fetch_1(t, y_2);
      }
    }
  {
    t = term_k_12;
    {
      t = echo_0(t);
      {
        t = term_o_12;
        {
          t = table_get_0(t);
          {
            ATerm a_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, a_3);
            {
              ATerm b_3 (ATerm t)
              {
                ATerm x_70 = NULL;
                ATerm y_70 = NULL;
                y_70 = t;
                if(((x_70 != NULL) && (x_70 != y_70)))
                  _fail(y_70);
                else
                  x_70 = y_70;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_70)), term_p_12);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, b_3);
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
  ATerm q_12;
  q_12 = t;
  {
    ATerm i_71 = NULL;
    ATerm j_71 = NULL;
    j_71 = t;
    if(((i_71 != NULL) && (i_71 != j_71)))
      _fail(j_71);
    else
      i_71 = j_71;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, not_null(i_71)));
      t = printnl_0(t);
    }
  }
  t = q_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm r_12;
  r_12 = t;
  {
    t = c_82(t);
    t = debug_0(t);
  }
  t = r_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm u_71 = NULL,v_71 = NULL;
  u_71 = t;
  r_71 :
  if(match_cons(u_71, sym_Undefined_1))
    {
      v_71 = ATgetArgument(u_71, 0);
      {
        ATerm y_71 = NULL,a_72 = NULL;
        ATerm z_71 = NULL;
        t = SSLgetAnnotations(not_null(u_71));
        {
          z_71 = t;
          if(((y_71 != NULL) && (y_71 != z_71)))
            _fail(z_71);
          else
            y_71 = z_71;
        }
        {
          t = not_null(v_71);
          {
            ATerm c_72 = NULL;
            t = a_63(t);
            {
              a_72 = t;
              {
                ATerm d_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_72)), not_null(y_71));
                {
                  d_72 = t;
                  if(((c_72 != NULL) && (c_72 != d_72)))
                    _fail(d_72);
                  else
                    c_72 = d_72;
                }
                t = not_null(c_72);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm i_72 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_71, _id);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = Cons_2(t, _id, i_72);
      }
    return(t);
  }
  t = i_72(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_86 (ATerm))
{
  t = fetch_1(t, a_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_72 = NULL;
  n_72 = t;
  m_72 :
  if(match_cons(n_72, sym_Help_0))
    {
      ATerm p_72 = NULL,r_72 = NULL;
      ATerm u_12;
      u_12 = t;
      {
        ATerm q_72 = NULL;
        t = SSLgetAnnotations(not_null(n_72));
        {
          q_72 = t;
          if(((p_72 != NULL) && (p_72 != q_72)))
            _fail(q_72);
          else
            p_72 = q_72;
        }
      }
      t = u_12;
      {
        ATerm s_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_72));
        {
          s_72 = t;
          if(((r_72 != NULL) && (r_72 != s_72)))
            _fail(s_72);
          else
            r_72 = s_72;
        }
        t = not_null(r_72);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm v_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_63(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = v_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  y_72 = t;
  x_72 :
  if(match_cons(y_72, sym__2))
    {
      z_72 = ATgetArgument(y_72, 0);
      a_73 = ATgetArgument(y_72, 1);
      t = SSL_table_get(not_null(z_72), not_null(a_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
  h_73 = t;
  g_73 :
  if(match_cons(h_73, sym__3))
    {
      i_73 = ATgetArgument(h_73, 0);
      j_73 = ATgetArgument(h_73, 1);
      k_73 = ATgetArgument(h_73, 2);
      {
        ATerm z_12;
        z_12 = t;
        {
          ATerm o_73 = NULL;
          ATerm p_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_73), not_null(j_73));
          {
            ATerm a_13 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_13);
              }
            else
              {
                t = a_13;
                t = (ATerm) ATempty;
              }
            {
              p_73 = t;
              if(((o_73 != NULL) && (o_73 != p_73)))
                _fail(p_73);
              else
                o_73 = p_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_73), not_null(j_73), (ATerm) ATinsert(CheckATermList(not_null(o_73)), not_null(k_73)));
            t = table_put_0(t);
          }
        }
        t = z_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm t_73 = NULL;
  ATerm u_73 = NULL;
  t = term_j_9;
  {
    t = f_87(t);
    {
      u_73 = t;
      if(((t_73 != NULL) && (t_73 != u_73)))
        _fail(u_73);
      else
        t_73 = u_73;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, not_null(t_73));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
  a_74 = t;
  z_73 :
  if(match_string(a_74, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(a_74) == AT_LIST) && !(ATisEmpty(a_74))))
        {
          b_74 = ATgetFirst((ATermList) a_74);
          c_74 = (ATerm) ATgetNext((ATermList) a_74);
          {
            ATerm f_74 = NULL;
            ATerm e_13;
            e_13 = t;
            {
              t = not_null(b_74);
              t = a_0(t);
            }
            t = e_13;
            {
              ATerm g_74 = NULL;
              t = term_j_9;
              {
                t = d_0(t);
                {
                  g_74 = t;
                  if(((f_74 != NULL) && (f_74 != g_74)))
                    _fail(g_74);
                  else
                    f_74 = g_74;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_74)), not_null(f_74));
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
  ATerm c_3 (ATerm t)
  {
    ATerm l_74 = NULL;
    l_74 = t;
    k_74 :
    if(!(match_string(l_74, "--help")))
      {
        if(!(match_string(l_74, "-h")))
          {
            if(!(match_string(l_74, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_j_13;
    {
      t = set_config_0(t);
      t = term_m_13;
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  o_74 = t;
  n_74 :
  if(((ATgetType(o_74) == AT_LIST) && !(ATisEmpty(o_74))))
    {
      p_74 = ATgetFirst((ATermList) o_74);
      q_74 = (ATerm) ATgetNext((ATermList) o_74);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_74)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  z_74 :
  if(((ATgetType(a_75) == AT_LIST) && !(ATisEmpty(a_75))))
    {
      b_75 = ATgetFirst((ATermList) a_75);
      c_75 = (ATerm) ATgetNext((ATermList) a_75);
      {
        ATerm g_75 = NULL,i_75 = NULL;
        ATerm h_75 = NULL;
        t = SSLgetAnnotations(not_null(a_75));
        {
          h_75 = t;
          if(((g_75 != NULL) && (g_75 != h_75)))
            _fail(h_75);
          else
            g_75 = h_75;
        }
        {
          t = not_null(b_75);
          {
            ATerm k_75 = NULL;
            t = l_52(t);
            {
              i_75 = t;
              {
                t = not_null(c_75);
                {
                  ATerm m_75 = NULL;
                  t = m_52(t);
                  {
                    k_75 = t;
                    {
                      ATerm n_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_75)), not_null(i_75)), not_null(g_75));
                      {
                        n_75 = t;
                        if(((m_75 != NULL) && (m_75 != n_75)))
                          _fail(n_75);
                        else
                          m_75 = n_75;
                      }
                      t = not_null(m_75);
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
  ATerm x_75 = NULL;
  x_75 = t;
  w_75 :
  if(((ATgetType(x_75) == AT_LIST) && ATisEmpty(x_75)))
    {
      {
        ATerm z_75 = NULL,b_76 = NULL;
        ATerm o_13;
        o_13 = t;
        {
          ATerm a_76 = NULL;
          t = SSLgetAnnotations(not_null(x_75));
          {
            a_76 = t;
            if(((z_75 != NULL) && (z_75 != a_76)))
              _fail(a_76);
            else
              z_75 = a_76;
          }
        }
        t = o_13;
        {
          ATerm c_76 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_75));
          {
            c_76 = t;
            if(((b_76 != NULL) && (b_76 != c_76)))
              _fail(c_76);
            else
              b_76 = c_76;
          }
          t = not_null(b_76);
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
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  h_76 :
  if(match_cons(i_76, sym__2))
    {
      j_76 = ATgetArgument(i_76, 0);
      k_76 = ATgetArgument(i_76, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_8, not_null(j_76), not_null(k_76));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm p_13;
  p_13 = t;
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_13;
        t = d_87(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
        }
      }
  }
  t = p_13;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm u_76 = NULL;
      ATerm t_13;
      t_13 = t;
      {
        ATerm s_76 = NULL;
        ATerm t_76 = NULL;
        t_76 = t;
        if(((s_76 != NULL) && (s_76 != t_76)))
          _fail(t_76);
        else
          s_76 = t_76;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(s_76));
          t = set_config_0(t);
        }
      }
      t = t_13;
      {
        ATerm v_76 = NULL;
        v_76 = t;
        if(((u_76 != NULL) && (u_76 != v_76)))
          _fail(v_76);
        else
          u_76 = v_76;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_76));
      }
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              {
                t = d_87(t);
                t = Cons_2(t, _id, g_3);
              }
            }
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_3, g_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
    e_77 = t;
    a_77 :
    if(match_cons(e_77, sym__3))
      {
        f_77 = ATgetArgument(e_77, 0);
        g_77 = ATgetArgument(e_77, 1);
        h_77 = ATgetArgument(e_77, 2);
        {
          if(((b_77 != NULL) && (b_77 != f_77)))
            _fail(f_77);
          else
            b_77 = f_77;
          {
            if(((c_77 != NULL) && (c_77 != g_77)))
              _fail(g_77);
            else
              c_77 = g_77;
            {
              if(((d_77 != NULL) && (d_77 != h_77)))
                _fail(h_77);
              else
                d_77 = h_77;
              t = SSL_table_put(not_null(b_77), not_null(c_77), not_null(d_77));
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
ATerm parse_options_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm k_77 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    t = term_g_14;
    t = table_put_0(t);
  }
  t = c_14;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm j_14 = t;
      int k_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          LocalPopChoice(k_14);
        }
      else
        {
          t = j_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_3);
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_14;
          n_14 = t;
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_f_13;
                t = get_config_0(t);
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                t = fetch_1(t, Help_0);
              }
          }
          t = n_14;
          {
            t = system_usage_0(t);
            {
              t = term_s_9;
              t = exit_0(t);
            }
          }
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          {
            ATerm q_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm l_77 = NULL;
                    l_77 = t;
                    if(((k_77 != NULL) && (k_77 != l_77)))
                      _fail(l_77);
                    else
                      k_77 = l_77;
                    return(t);
                  }
                  t = Undefined_1(t, j_3);
                  return(t);
                }
                t = fetch_1(t, i_3);
                {
                  ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_77)), term_v_14);
                    return(t);
                  }
                  t = say_1(t, k_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_q_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(u_14);
              }
            else
              {
                t = q_14;
                {
                }
              }
          }
        }
      {
        ATerm z_14;
        z_14 = t;
        {
          t = term_m_12;
          t = table_destroy_0(t);
        }
        t = z_14;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  t = parse_options_1(t, j_83);
  {
    t = store_options_0(t);
    {
      t = l_83(t);
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_83);
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            {
              ATerm e_15 = t;
              int f_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_83(t);
                  t = report_success_0(t);
                  LocalPopChoice(f_15);
                }
              else
                {
                  t = e_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, a_84);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_3, c_84, d_84, m_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm i_15;
      i_15 = t;
      {
        ATerm o_77 = NULL;
        ATerm p_77 = NULL;
        t = term_o_11;
        {
          t = get_config_0(t);
          {
            p_77 = t;
            if(((o_77 != NULL) && (o_77 != p_77)))
              _fail(p_77);
            else
              o_77 = p_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, not_null(o_77)));
          t = printnl_0(t);
        }
      }
      t = i_15;
      return(t);
    }
    t = if_verbose2_1(t, o_3);
    return(t);
  }
  t = iowrap_4(t, u_83, v_83, w_83, n_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  t = iowrap_3(t, s_83, t_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_83 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    t = _2(t, _id, p_83);
    return(t);
  }
  t = iowrap_2(t, p_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
