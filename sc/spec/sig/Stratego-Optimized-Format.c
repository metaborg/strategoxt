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
Symbol sym_SRDef_3;
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
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
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
ATerm term_q_14;
ATerm term_f_14;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_i_7;
ATerm term_v_4;
void init_constant_terms (void)
{
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_o_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_o_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_o_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
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
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_o_10);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__3, term_n_12, term_o_12, (ATerm) ATempty);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm e_56 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm q_57 (ATerm));
ATerm Op_2 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm l_0 (ATerm), ATerm o_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm b_56 (ATerm));
ATerm Alt_3 (ATerm, ATerm y_55 (ATerm), ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm Case_4 (ATerm, ATerm r_55 (ATerm), ATerm s_55 (ATerm), ATerm t_55 (ATerm), ATerm u_55 (ATerm));
ATerm Let_2 (ATerm, ATerm d_60 (ATerm), ATerm e_60 (ATerm));
ATerm Prim_2 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm));
ATerm Where_1 (ATerm, ATerm h_61 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm f_61 (ATerm), ATerm g_61 (ATerm));
ATerm Build_1 (ATerm, ATerm c_61 (ATerm));
ATerm Thread_1 (ATerm, ATerm y_60 (ATerm));
ATerm All_1 (ATerm, ATerm x_60 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm v_60 (ATerm));
ATerm Cong_2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm Path_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_60 (ATerm), ATerm c_60 (ATerm));
ATerm SVar_1 (ATerm, ATerm a_60 (ATerm));
ATerm Call_2 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm GChoice_2 (ATerm, ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm LChoice_2 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm));
ATerm Choice_2 (ATerm, ATerm o_59 (ATerm), ATerm p_59 (ATerm));
ATerm Seq_2 (ATerm, ATerm m_59 (ATerm), ATerm n_59 (ATerm));
ATerm Test_1 (ATerm, ATerm k_59 (ATerm));
ATerm Not_1 (ATerm, ATerm l_59 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm o_60 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm h_60 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm w_79 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_70 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_67 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_72 (ATerm), ATerm t_72 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_74 (ATerm), ATerm f_74 (ATerm));
ATerm crush_2 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_67 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_69 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_65 (ATerm));
ATerm map_1 (ATerm, ATerm u_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_65 (ATerm));
ATerm Program_1 (ATerm, ATerm w_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_88 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_65 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_65 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_68 (ATerm), ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm c_69 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm v_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_68 (ATerm));
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
        ATerm y_3 = t;
        int z_3 = stack_ptr;
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
            LocalPopChoice(z_3);
          }
        else
          {
            t = y_3;
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
ATerm Assign_1 (ATerm t, ATerm e_56 (ATerm))
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
            t = e_56(t);
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
ATerm BuildDefault_1 (ATerm t, ATerm q_57 (ATerm))
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
            t = q_57(t);
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
ATerm Op_2 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm))
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
            t = i_59(t);
            {
              q_15 = t;
              {
                t = not_null(k_15);
                {
                  ATerm u_15 = NULL;
                  t = j_59(t);
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
        ATerm a_4 = t;
        int b_4 = stack_ptr;
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
            LocalPopChoice(b_4);
          }
        else
          {
            t = a_4;
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
        ATerm c_4 = t;
        int d_4 = stack_ptr;
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
            LocalPopChoice(d_4);
          }
        else
          {
            t = c_4;
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
        ATerm e_4 = t;
        int f_4 = stack_ptr;
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
            LocalPopChoice(f_4);
          }
        else
          {
            t = e_4;
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
      ATerm g_4;
      g_4 = t;
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
      t = g_4;
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
ATerm Assign_2 (ATerm t, ATerm l_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_Assign_2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      {
        ATerm w_4 = t;
        int x_4 = stack_ptr;
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
                t = l_0(t);
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
            LocalPopChoice(x_4);
          }
        else
          {
            t = w_4;
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
                  t = l_0(t);
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
ATerm Continue_1 (ATerm t, ATerm b_56 (ATerm))
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
            t = b_56(t);
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
ATerm Alt_3 (ATerm t, ATerm y_55 (ATerm), ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_Alt_3))
    {
      p_23 = ATgetArgument(o_23, 0);
      q_23 = ATgetArgument(o_23, 1);
      r_23 = ATgetArgument(o_23, 2);
      {
        ATerm w_23 = NULL,f_24 = NULL;
        ATerm e_24 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          e_24 = t;
          if(((w_23 != NULL) && (w_23 != e_24)))
            _fail(e_24);
          else
            w_23 = e_24;
        }
        {
          t = not_null(p_23);
          {
            ATerm h_24 = NULL;
            t = y_55(t);
            {
              f_24 = t;
              {
                t = not_null(q_23);
                {
                  ATerm j_24 = NULL;
                  t = z_55(t);
                  {
                    h_24 = t;
                    {
                      t = not_null(r_23);
                      {
                        ATerm l_24 = NULL;
                        t = a_56(t);
                        {
                          j_24 = t;
                          {
                            ATerm m_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(f_24), not_null(h_24), not_null(j_24)), not_null(w_23));
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
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm r_55 (ATerm), ATerm s_55 (ATerm), ATerm t_55 (ATerm), ATerm u_55 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Case_4))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      h_25 = ATgetArgument(e_25, 2);
      i_25 = ATgetArgument(e_25, 3);
      {
        ATerm o_25 = NULL,q_25 = NULL;
        ATerm p_25 = NULL;
        t = SSLgetAnnotations(not_null(e_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        {
          t = not_null(f_25);
          {
            ATerm s_25 = NULL;
            t = r_55(t);
            {
              q_25 = t;
              {
                t = not_null(g_25);
                {
                  ATerm v_25 = NULL;
                  t = s_55(t);
                  {
                    s_25 = t;
                    {
                      t = not_null(h_25);
                      {
                        ATerm x_25 = NULL;
                        t = t_55(t);
                        {
                          v_25 = t;
                          {
                            t = not_null(i_25);
                            {
                              ATerm z_25 = NULL;
                              t = u_55(t);
                              {
                                x_25 = t;
                                {
                                  ATerm a_26 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(q_25), not_null(s_25), not_null(v_25), not_null(x_25)), not_null(o_25));
                                  {
                                    a_26 = t;
                                    if(((z_25 != NULL) && (z_25 != a_26)))
                                      _fail(a_26);
                                    else
                                      z_25 = a_26;
                                  }
                                  t = not_null(z_25);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm d_60 (ATerm), ATerm e_60 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_Let_2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      {
        ATerm u_26 = NULL,w_26 = NULL;
        ATerm v_26 = NULL;
        t = SSLgetAnnotations(not_null(o_26));
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
        {
          t = not_null(p_26);
          {
            ATerm y_26 = NULL;
            t = d_60(t);
            {
              w_26 = t;
              {
                t = not_null(q_26);
                {
                  ATerm a_27 = NULL;
                  t = e_60(t);
                  {
                    y_26 = t;
                    {
                      ATerm b_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_26), not_null(y_26)), not_null(u_26));
                      {
                        b_27 = t;
                        if(((a_27 != NULL) && (a_27 != b_27)))
                          _fail(b_27);
                        else
                          a_27 = b_27;
                      }
                      t = not_null(a_27);
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
ATerm Prim_2 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm))
{
  ATerm u_27 = NULL,x_27 = NULL,y_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym_Prim_2))
    {
      x_27 = ATgetArgument(u_27, 0);
      y_27 = ATgetArgument(u_27, 1);
      {
        ATerm c_28 = NULL,e_28 = NULL;
        ATerm d_28 = NULL;
        t = SSLgetAnnotations(not_null(u_27));
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
        {
          t = not_null(x_27);
          {
            ATerm g_28 = NULL;
            t = i_61(t);
            {
              e_28 = t;
              {
                t = not_null(y_27);
                {
                  ATerm i_28 = NULL;
                  t = j_61(t);
                  {
                    g_28 = t;
                    {
                      ATerm j_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(e_28), not_null(g_28)), not_null(c_28));
                      {
                        j_28 = t;
                        if(((i_28 != NULL) && (i_28 != j_28)))
                          _fail(j_28);
                        else
                          i_28 = j_28;
                      }
                      t = not_null(i_28);
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
ATerm Where_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm c_29 = NULL,j_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym_Where_1))
    {
      j_29 = ATgetArgument(c_29, 0);
      {
        ATerm m_29 = NULL,o_29 = NULL;
        ATerm n_29 = NULL;
        t = SSLgetAnnotations(not_null(c_29));
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
        {
          t = not_null(j_29);
          {
            ATerm r_29 = NULL;
            t = h_61(t);
            {
              o_29 = t;
              {
                ATerm s_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(o_29)), not_null(m_29));
                {
                  s_29 = t;
                  if(((r_29 != NULL) && (r_29 != s_29)))
                    _fail(s_29);
                  else
                    r_29 = s_29;
                }
                t = not_null(r_29);
              }
            }
          }
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
  ATerm y_29 = NULL;
  y_29 = t;
  t = SSL_is_int(not_null(y_29));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm f_61 (ATerm), ATerm g_61 (ATerm))
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Scope_2))
    {
      i_30 = ATgetArgument(h_30, 0);
      j_30 = ATgetArgument(h_30, 1);
      {
        ATerm n_30 = NULL,p_30 = NULL;
        ATerm o_30 = NULL;
        t = SSLgetAnnotations(not_null(h_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        {
          t = not_null(i_30);
          {
            ATerm r_30 = NULL;
            t = f_61(t);
            {
              p_30 = t;
              {
                t = not_null(j_30);
                {
                  ATerm t_30 = NULL;
                  t = g_61(t);
                  {
                    r_30 = t;
                    {
                      ATerm u_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_30), not_null(r_30)), not_null(n_30));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm f_31 = NULL,g_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym_Build_1))
    {
      g_31 = ATgetArgument(f_31, 0);
      {
        ATerm j_31 = NULL,l_31 = NULL;
        ATerm k_31 = NULL;
        t = SSLgetAnnotations(not_null(f_31));
        {
          k_31 = t;
          if(((j_31 != NULL) && (j_31 != k_31)))
            _fail(k_31);
          else
            j_31 = k_31;
        }
        {
          t = not_null(g_31);
          {
            ATerm n_31 = NULL;
            t = c_61(t);
            {
              l_31 = t;
              {
                ATerm o_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(l_31)), not_null(j_31));
                {
                  o_31 = t;
                  if(((n_31 != NULL) && (n_31 != o_31)))
                    _fail(o_31);
                  else
                    n_31 = o_31;
                }
                t = not_null(n_31);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm g_32 = NULL,h_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym_Thread_1))
    {
      h_32 = ATgetArgument(g_32, 0);
      {
        ATerm k_32 = NULL,m_32 = NULL;
        ATerm l_32 = NULL;
        t = SSLgetAnnotations(not_null(g_32));
        {
          l_32 = t;
          if(((k_32 != NULL) && (k_32 != l_32)))
            _fail(l_32);
          else
            k_32 = l_32;
        }
        {
          t = not_null(h_32);
          {
            ATerm o_32 = NULL;
            t = y_60(t);
            {
              m_32 = t;
              {
                ATerm p_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(m_32)), not_null(k_32));
                {
                  p_32 = t;
                  if(((o_32 != NULL) && (o_32 != p_32)))
                    _fail(p_32);
                  else
                    o_32 = p_32;
                }
                t = not_null(o_32);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm z_32 = NULL,d_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_All_1))
    {
      d_33 = ATgetArgument(z_32, 0);
      {
        ATerm g_33 = NULL,i_33 = NULL;
        ATerm h_33 = NULL;
        t = SSLgetAnnotations(not_null(z_32));
        {
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
        }
        {
          t = not_null(d_33);
          {
            ATerm k_33 = NULL;
            t = x_60(t);
            {
              i_33 = t;
              {
                ATerm l_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(i_33)), not_null(g_33));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Some_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym_Some_1))
    {
      a_34 = ATgetArgument(z_33, 0);
      {
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_34 = NULL,i_34 = NULL;
            ATerm g_34 = NULL;
            t = SSLgetAnnotations(not_null(z_33));
            {
              g_34 = t;
              if(((f_34 != NULL) && (f_34 != g_34)))
                _fail(g_34);
              else
                f_34 = g_34;
            }
            {
              t = not_null(a_34);
              {
                ATerm k_34 = NULL;
                t = k_0(t);
                {
                  i_34 = t;
                  {
                    ATerm l_34 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(i_34)), not_null(f_34));
                    {
                      l_34 = t;
                      if(((k_34 != NULL) && (k_34 != l_34)))
                        _fail(l_34);
                      else
                        k_34 = l_34;
                    }
                    t = not_null(k_34);
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
              ATerm p_34 = NULL,r_34 = NULL;
              ATerm q_34 = NULL;
              t = SSLgetAnnotations(not_null(z_33));
              {
                q_34 = t;
                if(((p_34 != NULL) && (p_34 != q_34)))
                  _fail(q_34);
                else
                  p_34 = q_34;
              }
              {
                t = not_null(a_34);
                {
                  ATerm t_34 = NULL;
                  t = k_0(t);
                  {
                    r_34 = t;
                    {
                      ATerm u_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(r_34)), not_null(p_34));
                      {
                        u_34 = t;
                        if(((t_34 != NULL) && (t_34 != u_34)))
                          _fail(u_34);
                        else
                          t_34 = u_34;
                      }
                      t = not_null(t_34);
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
ATerm One_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym_One_1))
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
            t = v_60(t);
            {
              o_35 = t;
              {
                ATerm r_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(o_35)), not_null(m_35));
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
ATerm Cong_2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym_Cong_2))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      {
        ATerm l_36 = NULL,n_36 = NULL;
        ATerm m_36 = NULL;
        t = SSLgetAnnotations(not_null(f_36));
        {
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
        }
        {
          t = not_null(g_36);
          {
            ATerm p_36 = NULL;
            t = t_60(t);
            {
              n_36 = t;
              {
                t = not_null(h_36);
                {
                  ATerm r_36 = NULL;
                  t = u_60(t);
                  {
                    p_36 = t;
                    {
                      ATerm s_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(n_36), not_null(p_36)), not_null(l_36));
                      {
                        s_36 = t;
                        if(((r_36 != NULL) && (r_36 != s_36)))
                          _fail(s_36);
                        else
                          r_36 = s_36;
                      }
                      t = not_null(r_36);
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
ATerm Path_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym_Path_2))
    {
      f_37 = ATgetArgument(e_37, 0);
      g_37 = ATgetArgument(e_37, 1);
      {
        ATerm k_37 = NULL,m_37 = NULL;
        ATerm l_37 = NULL;
        t = SSLgetAnnotations(not_null(e_37));
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
        {
          t = not_null(f_37);
          {
            ATerm o_37 = NULL;
            t = r_60(t);
            {
              m_37 = t;
              {
                t = not_null(g_37);
                {
                  ATerm q_37 = NULL;
                  t = s_60(t);
                  {
                    o_37 = t;
                    {
                      ATerm r_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(m_37), not_null(o_37)), not_null(k_37));
                      {
                        r_37 = t;
                        if(((q_37 != NULL) && (q_37 != r_37)))
                          _fail(r_37);
                        else
                          q_37 = r_37;
                      }
                      t = not_null(q_37);
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
ATerm Rec_2 (ATerm t, ATerm b_60 (ATerm), ATerm c_60 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym_Rec_2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      {
        ATerm j_38 = NULL,l_38 = NULL;
        ATerm k_38 = NULL;
        t = SSLgetAnnotations(not_null(d_38));
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
        {
          t = not_null(e_38);
          {
            ATerm n_38 = NULL;
            t = b_60(t);
            {
              l_38 = t;
              {
                t = not_null(f_38);
                {
                  ATerm p_38 = NULL;
                  t = c_60(t);
                  {
                    n_38 = t;
                    {
                      ATerm q_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_38), not_null(n_38)), not_null(j_38));
                      {
                        q_38 = t;
                        if(((p_38 != NULL) && (p_38 != q_38)))
                          _fail(q_38);
                        else
                          p_38 = q_38;
                      }
                      t = not_null(p_38);
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
ATerm SVar_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm b_39 = NULL,c_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym_SVar_1))
    {
      c_39 = ATgetArgument(b_39, 0);
      {
        ATerm f_39 = NULL,h_39 = NULL;
        ATerm g_39 = NULL;
        t = SSLgetAnnotations(not_null(b_39));
        {
          g_39 = t;
          if(((f_39 != NULL) && (f_39 != g_39)))
            _fail(g_39);
          else
            f_39 = g_39;
        }
        {
          t = not_null(c_39);
          {
            ATerm j_39 = NULL;
            t = a_60(t);
            {
              h_39 = t;
              {
                ATerm k_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(h_39)), not_null(f_39));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym_Call_2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      {
        ATerm b_40 = NULL,d_40 = NULL;
        ATerm c_40 = NULL;
        t = SSLgetAnnotations(not_null(v_39));
        {
          c_40 = t;
          if(((b_40 != NULL) && (b_40 != c_40)))
            _fail(c_40);
          else
            b_40 = c_40;
        }
        {
          t = not_null(w_39);
          {
            ATerm f_40 = NULL;
            t = p_60(t);
            {
              d_40 = t;
              {
                t = not_null(x_39);
                {
                  ATerm h_40 = NULL;
                  t = q_60(t);
                  {
                    f_40 = t;
                    {
                      ATerm i_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(d_40), not_null(f_40)), not_null(b_40));
                      {
                        i_40 = t;
                        if(((h_40 != NULL) && (h_40 != i_40)))
                          _fail(i_40);
                        else
                          h_40 = i_40;
                      }
                      t = not_null(h_40);
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
ATerm LGChoice_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym_LGChoice_2))
    {
      v_40 = ATgetArgument(u_40, 0);
      w_40 = ATgetArgument(u_40, 1);
      {
        ATerm c_41 = NULL,e_41 = NULL;
        ATerm d_41 = NULL;
        t = SSLgetAnnotations(not_null(u_40));
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
        {
          t = not_null(v_40);
          {
            ATerm g_41 = NULL;
            t = x_59(t);
            {
              e_41 = t;
              {
                t = not_null(w_40);
                {
                  ATerm i_41 = NULL;
                  t = y_59(t);
                  {
                    g_41 = t;
                    {
                      ATerm j_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(e_41), not_null(g_41)), not_null(c_41));
                      {
                        j_41 = t;
                        if(((i_41 != NULL) && (i_41 != j_41)))
                          _fail(j_41);
                        else
                          i_41 = j_41;
                      }
                      t = not_null(i_41);
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
ATerm GChoice_2 (ATerm t, ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_GChoice_2))
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
            t = v_59(t);
            {
              d_42 = t;
              {
                t = not_null(x_41);
                {
                  ATerm h_42 = NULL;
                  t = w_59(t);
                  {
                    f_42 = t;
                    {
                      ATerm i_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(d_42), not_null(f_42)), not_null(b_42));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm))
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym_GuardedLChoice_3))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      z_42 = ATgetArgument(w_42, 2);
      {
        ATerm e_43 = NULL,g_43 = NULL;
        ATerm f_43 = NULL;
        t = SSLgetAnnotations(not_null(w_42));
        {
          f_43 = t;
          if(((e_43 != NULL) && (e_43 != f_43)))
            _fail(f_43);
          else
            e_43 = f_43;
        }
        {
          t = not_null(x_42);
          {
            ATerm i_43 = NULL;
            t = s_59(t);
            {
              g_43 = t;
              {
                t = not_null(y_42);
                {
                  ATerm k_43 = NULL;
                  t = t_59(t);
                  {
                    i_43 = t;
                    {
                      t = not_null(z_42);
                      {
                        ATerm m_43 = NULL;
                        t = u_59(t);
                        {
                          k_43 = t;
                          {
                            ATerm n_43 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(g_43), not_null(i_43), not_null(k_43)), not_null(e_43));
                            {
                              n_43 = t;
                              if(((m_43 != NULL) && (m_43 != n_43)))
                                _fail(n_43);
                              else
                                m_43 = n_43;
                            }
                            t = not_null(m_43);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm))
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym_LChoice_2))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      {
        ATerm g_44 = NULL,i_44 = NULL;
        ATerm h_44 = NULL;
        t = SSLgetAnnotations(not_null(a_44));
        {
          h_44 = t;
          if(((g_44 != NULL) && (g_44 != h_44)))
            _fail(h_44);
          else
            g_44 = h_44;
        }
        {
          t = not_null(b_44);
          {
            ATerm k_44 = NULL;
            t = q_59(t);
            {
              i_44 = t;
              {
                t = not_null(c_44);
                {
                  ATerm m_44 = NULL;
                  t = r_59(t);
                  {
                    k_44 = t;
                    {
                      ATerm n_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(i_44), not_null(k_44)), not_null(g_44));
                      {
                        n_44 = t;
                        if(((m_44 != NULL) && (m_44 != n_44)))
                          _fail(n_44);
                        else
                          m_44 = n_44;
                      }
                      t = not_null(m_44);
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
ATerm Choice_2 (ATerm t, ATerm o_59 (ATerm), ATerm p_59 (ATerm))
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym_Choice_2))
    {
      a_45 = ATgetArgument(z_44, 0);
      b_45 = ATgetArgument(z_44, 1);
      {
        ATerm f_45 = NULL,h_45 = NULL;
        ATerm g_45 = NULL;
        t = SSLgetAnnotations(not_null(z_44));
        {
          g_45 = t;
          if(((f_45 != NULL) && (f_45 != g_45)))
            _fail(g_45);
          else
            f_45 = g_45;
        }
        {
          t = not_null(a_45);
          {
            ATerm j_45 = NULL;
            t = o_59(t);
            {
              h_45 = t;
              {
                t = not_null(b_45);
                {
                  ATerm l_45 = NULL;
                  t = p_59(t);
                  {
                    j_45 = t;
                    {
                      ATerm m_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(h_45), not_null(j_45)), not_null(f_45));
                      {
                        m_45 = t;
                        if(((l_45 != NULL) && (l_45 != m_45)))
                          _fail(m_45);
                        else
                          l_45 = m_45;
                      }
                      t = not_null(l_45);
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
ATerm Seq_2 (ATerm t, ATerm m_59 (ATerm), ATerm n_59 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym_Seq_2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      {
        ATerm e_46 = NULL,g_46 = NULL;
        ATerm f_46 = NULL;
        t = SSLgetAnnotations(not_null(y_45));
        {
          f_46 = t;
          if(((e_46 != NULL) && (e_46 != f_46)))
            _fail(f_46);
          else
            e_46 = f_46;
        }
        {
          t = not_null(z_45);
          {
            ATerm i_46 = NULL;
            t = m_59(t);
            {
              g_46 = t;
              {
                t = not_null(a_46);
                {
                  ATerm k_46 = NULL;
                  t = n_59(t);
                  {
                    i_46 = t;
                    {
                      ATerm l_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(g_46), not_null(i_46)), not_null(e_46));
                      {
                        l_46 = t;
                        if(((k_46 != NULL) && (k_46 != l_46)))
                          _fail(l_46);
                        else
                          k_46 = l_46;
                      }
                      t = not_null(k_46);
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
ATerm Test_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm w_46 = NULL,x_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym_Test_1))
    {
      x_46 = ATgetArgument(w_46, 0);
      {
        ATerm a_47 = NULL,c_47 = NULL;
        ATerm b_47 = NULL;
        t = SSLgetAnnotations(not_null(w_46));
        {
          b_47 = t;
          if(((a_47 != NULL) && (a_47 != b_47)))
            _fail(b_47);
          else
            a_47 = b_47;
        }
        {
          t = not_null(x_46);
          {
            ATerm e_47 = NULL;
            t = k_59(t);
            {
              c_47 = t;
              {
                ATerm f_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(c_47)), not_null(a_47));
                {
                  f_47 = t;
                  if(((e_47 != NULL) && (e_47 != f_47)))
                    _fail(f_47);
                  else
                    e_47 = f_47;
                }
                t = not_null(e_47);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm s_47 = NULL,t_47 = NULL;
  s_47 = t;
  o_47 :
  if(match_cons(s_47, sym_Not_1))
    {
      t_47 = ATgetArgument(s_47, 0);
      {
        ATerm w_47 = NULL,d_48 = NULL;
        ATerm c_48 = NULL;
        t = SSLgetAnnotations(not_null(s_47));
        {
          c_48 = t;
          if(((w_47 != NULL) && (w_47 != c_48)))
            _fail(c_48);
          else
            w_47 = c_48;
        }
        {
          t = not_null(t_47);
          {
            ATerm f_48 = NULL;
            t = l_59(t);
            {
              d_48 = t;
              {
                ATerm g_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(d_48)), not_null(w_47));
                {
                  g_48 = t;
                  if(((f_48 != NULL) && (f_48 != g_48)))
                    _fail(g_48);
                  else
                    f_48 = g_48;
                }
                t = not_null(f_48);
              }
            }
          }
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
  ATerm p_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym_Fail_0))
    {
      ATerm r_48 = NULL,t_48 = NULL;
      ATerm a_5;
      a_5 = t;
      {
        ATerm s_48 = NULL;
        t = SSLgetAnnotations(not_null(p_48));
        {
          s_48 = t;
          if(((r_48 != NULL) && (r_48 != s_48)))
            _fail(s_48);
          else
            r_48 = s_48;
        }
      }
      t = a_5;
      {
        ATerm u_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(r_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
        t = not_null(t_48);
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
  ATerm c_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym_Id_0))
    {
      ATerm e_49 = NULL,g_49 = NULL;
      ATerm b_5;
      b_5 = t;
      {
        ATerm f_49 = NULL;
        t = SSLgetAnnotations(not_null(c_49));
        {
          f_49 = t;
          if(((e_49 != NULL) && (e_49 != f_49)))
            _fail(f_49);
          else
            e_49 = f_49;
        }
      }
      t = b_5;
      {
        ATerm h_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(e_49));
        {
          h_49 = t;
          if(((g_49 != NULL) && (g_49 != h_49)))
            _fail(h_49);
          else
            g_49 = h_49;
        }
        t = not_null(g_49);
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
                                                                  ATerm m_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, m_0, Nil_0);
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
                                                                                    ATerm n_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, n_0);
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
ATerm DontInline_0 (ATerm t)
{
  ATerm s_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym_DontInline_0))
    {
      ATerm u_49 = NULL,w_49 = NULL;
      ATerm j_7;
      j_7 = t;
      {
        ATerm v_49 = NULL;
        t = SSLgetAnnotations(not_null(s_49));
        {
          v_49 = t;
          if(((u_49 != NULL) && (u_49 != v_49)))
            _fail(v_49);
          else
            u_49 = v_49;
        }
      }
      t = j_7;
      {
        ATerm x_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DontInline_0), not_null(u_49));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm o_60 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_cons(j_50, sym_SDef_4))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      m_50 = ATgetArgument(j_50, 2);
      n_50 = ATgetArgument(j_50, 3);
      {
        ATerm t_50 = NULL,v_50 = NULL;
        ATerm u_50 = NULL;
        t = SSLgetAnnotations(not_null(j_50));
        {
          u_50 = t;
          if(((t_50 != NULL) && (t_50 != u_50)))
            _fail(u_50);
          else
            t_50 = u_50;
        }
        {
          t = not_null(k_50);
          {
            ATerm z_50 = NULL;
            t = l_60(t);
            {
              v_50 = t;
              {
                t = not_null(l_50);
                {
                  ATerm b_51 = NULL;
                  t = m_60(t);
                  {
                    z_50 = t;
                    {
                      t = not_null(m_50);
                      {
                        ATerm d_51 = NULL;
                        t = n_60(t);
                        {
                          b_51 = t;
                          {
                            t = not_null(n_50);
                            {
                              ATerm f_51 = NULL;
                              t = o_60(t);
                              {
                                d_51 = t;
                                {
                                  ATerm g_51 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_4, not_null(v_50), not_null(z_50), not_null(b_51), not_null(d_51)), not_null(t_50));
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
ATerm SDef_3 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm h_60 (ATerm))
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
            t = f_60(t);
            {
              f_52 = t;
              {
                t = not_null(x_51);
                {
                  ATerm j_52 = NULL;
                  t = g_60(t);
                  {
                    h_52 = t;
                    {
                      t = not_null(y_51);
                      {
                        ATerm l_52 = NULL;
                        t = h_60(t);
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
ATerm list_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm t_52 (ATerm t)
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
        t = Cons_2(t, w_79, t_52);
      }
    return(t);
  }
  t = t_52(t);
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
ATerm _2 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  z_52 :
  if(match_cons(a_53, sym__2))
    {
      b_53 = ATgetArgument(a_53, 0);
      c_53 = ATgetArgument(a_53, 1);
      {
        ATerm g_53 = NULL,i_53 = NULL;
        ATerm h_53 = NULL;
        t = SSLgetAnnotations(not_null(a_53));
        {
          h_53 = t;
          if(((g_53 != NULL) && (g_53 != h_53)))
            _fail(h_53);
          else
            g_53 = h_53;
        }
        {
          t = not_null(b_53);
          {
            ATerm k_53 = NULL;
            t = i_49(t);
            {
              i_53 = t;
              {
                t = not_null(c_53);
                {
                  ATerm m_53 = NULL;
                  t = j_49(t);
                  {
                    k_53 = t;
                    {
                      ATerm n_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_53), not_null(k_53)), not_null(g_53));
                      {
                        n_53 = t;
                        if(((m_53 != NULL) && (m_53 != n_53)))
                          _fail(n_53);
                        else
                          m_53 = n_53;
                      }
                      t = not_null(m_53);
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
  ATerm v_53 = NULL;
  ATerm u_7;
  u_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm w_53 = NULL,x_53 = NULL;
      w_53 = t;
      u_53 :
      if(match_cons(w_53, sym_Program_1))
        {
          x_53 = ATgetArgument(w_53, 0);
          if(((v_53 != NULL) && (v_53 != x_53)))
            _fail(x_53);
          else
            v_53 = x_53;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), not_null(v_53)), term_w_7));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  a_54 :
  if(match_cons(b_54, sym__2))
    {
      c_54 = ATgetArgument(b_54, 0);
      d_54 = ATgetArgument(b_54, 1);
      {
        ATerm z_7;
        z_7 = t;
        t = SSL_printnl(not_null(c_54), not_null(d_54));
        t = z_7;
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
  ATerm i_54 = NULL;
  i_54 = t;
  t = SSL_implode_string(not_null(i_54));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
        n_54 = t;
        m_54 :
        if(((ATgetType(n_54) == AT_LIST) && ((ATermList) n_54 != ATempty)))
          {
            o_54 = ATgetFirst((ATermList) n_54);
            p_54 = (ATerm) ATgetNext((ATermList) n_54);
            {
              t = not_null(o_54);
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(p_54);
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
  ATerm z_54 = NULL;
  ATerm b_55 = NULL;
  z_54 = t;
  {
    ATerm c_55 = NULL;
    ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
    t = not_null(z_54);
    {
      c_55 = t;
      {
        t = SSL_explode_term(not_null(c_55));
        {
          e_55 = t;
          x_54 :
          if(match_cons(e_55, sym__2))
            {
              f_55 = ATgetArgument(e_55, 0);
              g_55 = ATgetArgument(e_55, 1);
              y_54 :
              if(match_string(f_55, ""))
                {
                  if(((b_55 != NULL) && (b_55 != g_55)))
                    _fail(g_55);
                  else
                    b_55 = g_55;
                }
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
      t = not_null(b_55);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm k_55 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_55);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        {
          t = Nil_0(t);
          t = j_80(t);
        }
      }
    return(t);
  }
  t = k_55(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  m_55 :
  if(match_cons(n_55, sym__2))
    {
      o_55 = ATgetArgument(n_55, 0);
      p_55 = ATgetArgument(n_55, 1);
      {
        t = not_null(o_55);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(p_55);
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
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_56 = NULL;
  c_56 = t;
  t = SSL_explode_string(not_null(c_56));
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
ATerm debug_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm g_8;
  g_8 = t;
  {
    ATerm i_56 = NULL,k_56 = NULL;
    ATerm h_8;
    h_8 = t;
    {
      ATerm j_56 = NULL;
      t = d_70(t);
      {
        j_56 = t;
        if(((i_56 != NULL) && (i_56 != j_56)))
          _fail(j_56);
        else
          i_56 = j_56;
      }
    }
    t = h_8;
    {
      ATerm l_56 = NULL;
      l_56 = t;
      if(((k_56 != NULL) && (k_56 != l_56)))
        _fail(l_56);
      else
        k_56 = l_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_56)), not_null(i_56)));
        t = printnl_0(t);
      }
    }
  }
  t = g_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_56 = NULL;
  p_56 = t;
  t = SSL_is_string(not_null(p_56));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm l_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_1);
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            {
              ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
              y_56 = t;
              x_56 :
              if(match_cons(y_56, sym_Path_1))
                {
                  z_56 = ATgetArgument(y_56, 0);
                  t = not_null(z_56);
                }
              else
                {
                  if(match_cons(y_56, sym_Var_1))
                    {
                      z_56 = ATgetArgument(y_56, 0);
                      {
                        t = not_null(z_56);
                        {
                          ATerm m_8 = t;
                          int n_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_8);
                            }
                          else
                            {
                              t = m_8;
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_o_8;
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
                      if(match_cons(y_56, sym_Prefix_2))
                        {
                          z_56 = ATgetArgument(y_56, 0);
                          a_57 = ATgetArgument(y_56, 1);
                          {
                            ATerm f_57 = NULL,h_57 = NULL;
                            ATerm p_8;
                            p_8 = t;
                            {
                              ATerm g_57 = NULL;
                              t = not_null(z_56);
                              {
                                t = eval_config_0(t);
                                {
                                  g_57 = t;
                                  if(((f_57 != NULL) && (f_57 != g_57)))
                                    _fail(g_57);
                                  else
                                    f_57 = g_57;
                                }
                              }
                            }
                            t = p_8;
                            {
                              ATerm i_57 = NULL;
                              t = not_null(a_57);
                              {
                                t = eval_config_0(t);
                                {
                                  i_57 = t;
                                  if(((h_57 != NULL) && (h_57 != i_57)))
                                    _fail(i_57);
                                  else
                                    h_57 = i_57;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_57), not_null(h_57));
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
  ATerm r_57 = NULL;
  r_57 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(r_57));
    {
      t = table_get_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_8;
            r_8 = t;
            {
              ATerm t_57 = NULL;
              ATerm u_57 = NULL;
              u_57 = t;
              if(((t_57 != NULL) && (t_57 != u_57)))
                _fail(u_57);
              else
                t_57 = u_57;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_8, not_null(r_57), not_null(t_57));
                t = table_put_0(t);
              }
            }
            t = r_8;
          }
          return(t);
        }
        t = try_1(t, n_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_67 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm s_8;
    s_8 = t;
    {
      ATerm y_57 = NULL;
      ATerm z_57 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          z_57 = t;
          if(((y_57 != NULL) && (y_57 != z_57)))
            _fail(z_57);
          else
            y_57 = z_57;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_57), term_u_8);
        t = geq_0(t);
      }
    }
    t = s_8;
    t = h_67(t);
    return(t);
  }
  t = try_1(t, o_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym__2))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      t = SSL_WriteToTextFile(not_null(e_58), not_null(f_58));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
  l_58 = t;
  k_58 :
  if(match_cons(l_58, sym__2))
    {
      m_58 = ATgetArgument(l_58, 0);
      n_58 = ATgetArgument(l_58, 1);
      t = SSL_WriteToBinaryFile(not_null(m_58), not_null(n_58));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_58 = NULL;
  ATerm v_8;
  v_8 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm w_58 = NULL,x_58 = NULL;
            w_58 = t;
            s_58 :
            if(match_cons(w_58, sym_Output_1))
              {
                x_58 = ATgetArgument(w_58, 0);
                if(((v_58 != NULL) && (v_58 != x_58)))
                  _fail(x_58);
                else
                  v_58 = x_58;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_1);
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          {
            ATerm y_58 = NULL;
            t = term_y_8;
            {
              y_58 = t;
              if(((v_58 != NULL) && (v_58 != y_58)))
                _fail(y_58);
              else
                v_58 = y_58;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_1, _id);
  }
  t = v_8;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        t = not_null(v_58);
        return(t);
      }
      t = split_2(t, s_1, _id);
      return(t);
    }
    t = _2(t, _id, r_1);
    {
      ATerm z_8 = t;
      int a_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              ATerm z_58 = NULL;
              z_58 = t;
              u_58 :
              if(!(match_cons(z_58, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_1);
            return(t);
          }
          t = _2(t, t_1, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm f_59 = NULL,h_59 = NULL,z_59 = NULL,i_60 = NULL;
  ATerm b_9;
  b_9 = t;
  t = dtime_0(t);
  t = b_9;
  {
    t = n_69(t);
    {
      ATerm c_9;
      c_9 = t;
      {
        ATerm g_59 = NULL;
        t = dtime_0(t);
        {
          g_59 = t;
          if(((f_59 != NULL) && (f_59 != g_59)))
            _fail(g_59);
          else
            f_59 = g_59;
        }
      }
      t = c_9;
      {
        h_59 = t;
        e_59 :
        if(match_cons(h_59, sym__2))
          {
            z_59 = ATgetArgument(h_59, 0);
            i_60 = ATgetArgument(h_59, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_59)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_59))), not_null(i_60));
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
  ATerm b_61 = NULL;
  b_61 = t;
  t = SSL_ReadFromFile(not_null(b_61));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_72 (ATerm), ATerm t_72 (ATerm))
{
  ATerm o_61 = NULL,q_61 = NULL;
  ATerm d_9;
  d_9 = t;
  {
    ATerm p_61 = NULL;
    t = s_72(t);
    {
      p_61 = t;
      if(((o_61 != NULL) && (o_61 != p_61)))
        _fail(p_61);
      else
        o_61 = p_61;
    }
  }
  t = d_9;
  {
    ATerm r_61 = NULL;
    t = t_72(t);
    {
      r_61 = t;
      if(((q_61 != NULL) && (q_61 != r_61)))
        _fail(r_61);
      else
        q_61 = r_61;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_61), not_null(q_61));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_61 = NULL;
  ATerm e_9;
  e_9 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          ATerm y_61 = NULL,z_61 = NULL;
          y_61 = t;
          v_61 :
          if(match_cons(y_61, sym_Input_1))
            {
              z_61 = ATgetArgument(y_61, 0);
              if(((x_61 != NULL) && (x_61 != z_61)))
                _fail(z_61);
              else
                x_61 = z_61;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_1);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm a_62 = NULL;
          t = term_h_9;
          {
            a_62 = t;
            if(((x_61 != NULL) && (x_61 != a_62)))
              _fail(a_62);
            else
              x_61 = a_62;
          }
        }
      }
  }
  t = e_9;
  {
    ATerm w_1 (ATerm t)
    {
      t = not_null(x_61);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_62 = NULL;
  e_62 = t;
  t = SSL_string_to_int(not_null(e_62));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  m_62 = t;
  k_62 :
  if(match_string(m_62, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(m_62) == AT_LIST) && ((ATermList) m_62 != ATempty)))
        {
          n_62 = ATgetFirst((ATermList) m_62);
          o_62 = (ATerm) ATgetNext((ATermList) m_62);
          l_62 :
          if(((ATgetType(o_62) == AT_LIST) && ((ATermList) o_62 != ATempty)))
            {
              p_62 = ATgetFirst((ATermList) o_62);
              q_62 = (ATerm) ATgetNext((ATermList) o_62);
              {
                ATerm u_62 = NULL;
                ATerm i_9;
                i_9 = t;
                {
                  t = not_null(n_62);
                  t = h_0(t);
                }
                t = i_9;
                {
                  ATerm v_62 = NULL;
                  t = not_null(p_62);
                  {
                    t = i_0(t);
                    {
                      v_62 = t;
                      if(((u_62 != NULL) && (u_62 != v_62)))
                        _fail(v_62);
                      else
                        u_62 = v_62;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_62)), not_null(u_62));
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm o_63 = NULL;
        o_63 = t;
        z_62 :
        if(!(match_string(o_63, "-i")))
          {
            if(!(match_string(o_63, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        ATerm r_63 = NULL;
        ATerm l_9;
        l_9 = t;
        {
          ATerm p_63 = NULL;
          ATerm q_63 = NULL;
          q_63 = t;
          if(((p_63 != NULL) && (p_63 != q_63)))
            _fail(q_63);
          else
            p_63 = q_63;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(p_63));
            t = set_config_0(t);
          }
        }
        t = l_9;
        {
          ATerm s_63 = NULL;
          s_63 = t;
          if(((r_63 != NULL) && (r_63 != s_63)))
            _fail(s_63);
          else
            r_63 = s_63;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_63));
        }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_n_9;
        return(t);
      }
      t = ArgOption_3(t, x_1, y_1, z_1);
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm t_63 = NULL;
              t_63 = t;
              c_63 :
              if(!(match_string(t_63, "-o")))
                {
                  if(!(match_string(t_63, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm w_63 = NULL;
              ATerm q_9;
              q_9 = t;
              {
                ATerm u_63 = NULL;
                ATerm v_63 = NULL;
                v_63 = t;
                if(((u_63 != NULL) && (u_63 != v_63)))
                  _fail(v_63);
                else
                  u_63 = v_63;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_9, not_null(u_63));
                  t = set_config_0(t);
                }
              }
              t = q_9;
              {
                ATerm x_63 = NULL;
                x_63 = t;
                if(((w_63 != NULL) && (w_63 != x_63)))
                  _fail(x_63);
                else
                  w_63 = x_63;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_63));
              }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_s_9;
              return(t);
            }
            t = ArgOption_3(t, a_2, b_2, c_2);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            {
              ATerm t_9 = t;
              int u_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm y_63 = NULL;
                    y_63 = t;
                    f_63 :
                    if(!(match_string(y_63, "-S")))
                      {
                        if(!(match_string(y_63, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = term_w_9;
                    t = set_config_0(t);
                    t = term_x_9;
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_y_9;
                    return(t);
                  }
                  t = Option_3(t, d_2, e_2, f_2);
                  LocalPopChoice(u_9);
                }
              else
                {
                  t = t_9;
                  {
                    ATerm z_9 = t;
                    int a_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm z_63 = NULL;
                          z_63 = t;
                          g_63 :
                          if(!(match_string(z_63, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm c_64 = NULL;
                          ATerm b_10;
                          b_10 = t;
                          {
                            ATerm a_64 = NULL;
                            ATerm b_64 = NULL;
                            t = string_to_int_0(t);
                            {
                              b_64 = t;
                              if(((a_64 != NULL) && (a_64 != b_64)))
                                _fail(b_64);
                              else
                                a_64 = b_64;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(a_64));
                              t = set_config_0(t);
                            }
                          }
                          t = b_10;
                          {
                            ATerm d_64 = NULL;
                            d_64 = t;
                            if(((c_64 != NULL) && (c_64 != d_64)))
                              _fail(d_64);
                            else
                              c_64 = d_64;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_64));
                          }
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          t = term_c_10;
                          return(t);
                        }
                        t = ArgOption_3(t, g_2, h_2, i_2);
                        LocalPopChoice(a_10);
                      }
                    else
                      {
                        t = z_9;
                        {
                          ATerm d_10 = t;
                          int e_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm e_64 = NULL;
                                e_64 = t;
                                j_63 :
                                if(!(match_string(e_64, "-k")))
                                  {
                                    if(!(match_string(e_64, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm f_10;
                                f_10 = t;
                                {
                                  ATerm f_64 = NULL;
                                  ATerm g_64 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    g_64 = t;
                                    if(((f_64 != NULL) && (f_64 != g_64)))
                                      _fail(g_64);
                                    else
                                      f_64 = g_64;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(f_64));
                                    t = set_config_0(t);
                                  }
                                }
                                t = f_10;
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = term_h_10;
                                return(t);
                              }
                              t = ArgOption_3(t, j_2, k_2, l_2);
                              LocalPopChoice(e_10);
                            }
                          else
                            {
                              t = d_10;
                              {
                                ATerm j_10 = t;
                                int k_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm h_64 = NULL;
                                      h_64 = t;
                                      l_63 :
                                      if(!(match_string(h_64, "-v")))
                                        {
                                          if(!(match_string(h_64, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      t = term_p_10;
                                      t = set_config_0(t);
                                      t = term_q_10;
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = term_r_10;
                                      return(t);
                                    }
                                    t = Option_3(t, m_2, n_2, o_2);
                                    LocalPopChoice(k_10);
                                  }
                                else
                                  {
                                    t = j_10;
                                    {
                                      ATerm s_10 = t;
                                      int t_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_2 (ATerm t)
                                          {
                                            ATerm i_64 = NULL;
                                            i_64 = t;
                                            m_63 :
                                            if(!(match_string(i_64, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm q_2 (ATerm t)
                                          {
                                            t = term_v_10;
                                            t = set_config_0(t);
                                            t = term_w_10;
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = term_x_10;
                                            return(t);
                                          }
                                          t = Option_3(t, p_2, q_2, r_2);
                                          LocalPopChoice(t_10);
                                        }
                                      else
                                        {
                                          t = s_10;
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              ATerm j_64 = NULL;
                                              j_64 = t;
                                              n_63 :
                                              if(!(match_string(j_64, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = term_z_10;
                                              t = set_config_0(t);
                                              t = term_a_11;
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = term_b_11;
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
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, term_c_11));
  {
    t = printnl_0(t);
    {
      t = term_y_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_64 = NULL;
  s_64 = t;
  t = SSL_TicksToSeconds(not_null(s_64));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym__2))
    {
      y_64 = ATgetArgument(x_64, 0);
      z_64 = ATgetArgument(x_64, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_64), not_null(z_64));
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = SSL_addr(not_null(y_64), not_null(z_64));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_74 (ATerm), ATerm f_74 (ATerm))
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_74(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
        g_65 = t;
        f_65 :
        if(((ATgetType(g_65) == AT_LIST) && ((ATermList) g_65 != ATempty)))
          {
            h_65 = ATgetFirst((ATermList) g_65);
            i_65 = (ATerm) ATgetNext((ATermList) g_65);
            {
              ATerm r_65 = NULL;
              ATerm s_65 = NULL;
              t = not_null(i_65);
              {
                t = foldr_2(t, e_74, f_74);
                {
                  s_65 = t;
                  if(((r_65 != NULL) && (r_65 != s_65)))
                    _fail(s_65);
                  else
                    r_65 = s_65;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_65), not_null(r_65));
                t = f_74(t);
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
ATerm crush_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm z_65 = NULL;
  ATerm b_66 = NULL;
  z_65 = t;
  {
    ATerm c_66 = NULL;
    ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
    t = not_null(z_65);
    {
      c_66 = t;
      {
        t = SSL_explode_term(not_null(c_66));
        {
          e_66 = t;
          y_65 :
          if(match_cons(e_66, sym__2))
            {
              f_66 = ATgetArgument(e_66, 0);
              g_66 = ATgetArgument(e_66, 1);
              if(((b_66 != NULL) && (b_66 != g_66)))
                _fail(g_66);
              else
                b_66 = g_66;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_66);
      t = foldr_2(t, w_75, x_75);
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
    ATerm v_2 (ATerm t)
    {
      t = term_v_9;
      return(t);
    }
    t = crush_2(t, v_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
  m_66 = t;
  l_66 :
  if(match_cons(m_66, sym__2))
    {
      n_66 = ATgetArgument(m_66, 0);
      o_66 = ATgetArgument(m_66, 1);
      {
        ATerm h_11;
        h_11 = t;
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_66), not_null(o_66));
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              t = SSL_gtr(not_null(n_66), not_null(o_66));
            }
        }
        t = h_11;
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
  ATerm k_11 = t;
  int l_11 = stack_ptr;
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
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm w_2 (ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_67), term_y_7);
        t = geq_0(t);
      }
    }
    t = m_11;
    t = g_67(t);
    return(t);
  }
  t = try_1(t, w_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm i_67 = NULL,k_67 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm j_67 = NULL;
      t = run_time_0(t);
      {
        j_67 = t;
        if(((i_67 != NULL) && (i_67 != j_67)))
          _fail(j_67);
        else
          i_67 = j_67;
      }
    }
    t = n_11;
    {
      ATerm l_67 = NULL;
      t = term_o_11;
      {
        t = get_config_0(t);
        {
          l_67 = t;
          if(((k_67 != NULL) && (k_67 != l_67)))
            _fail(l_67);
          else
            k_67 = l_67;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), not_null(i_67)), term_p_11), not_null(k_67)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_2);
  {
    t = term_v_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_cons(s_67, sym_Version_0))
    {
      ATerm u_67 = NULL,w_67 = NULL;
      ATerm r_11;
      r_11 = t;
      {
        ATerm v_67 = NULL;
        t = SSLgetAnnotations(not_null(s_67));
        {
          v_67 = t;
          if(((u_67 != NULL) && (u_67 != v_67)))
            _fail(v_67);
          else
            u_67 = v_67;
        }
      }
      t = r_11;
      {
        ATerm x_67 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_67));
        {
          x_67 = t;
          if(((w_67 != NULL) && (w_67 != x_67)))
            _fail(x_67);
          else
            w_67 = x_67;
        }
        t = not_null(w_67);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_11);
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
  t = option_defined_1(t, y_2);
  t = l_69(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_68 = NULL;
  c_68 = t;
  t = SSL_table_create(not_null(c_68));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_68 = NULL;
  g_68 = t;
  {
    ATerm y_11;
    y_11 = t;
    {
      t = term_z_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_11, term_a_12, not_null(g_68));
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
  ATerm p_68 = NULL;
  p_68 = t;
  t = SSL_table_destroy(not_null(p_68));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_68 = NULL;
  y_68 = t;
  t = SSL_exit(not_null(y_68));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
  g_69 = t;
  f_69 :
  if(((ATermList) g_69 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_69) == AT_LIST) && ((ATermList) g_69 != ATempty)))
        {
          h_69 = ATgetFirst((ATermList) g_69);
          i_69 = (ATerm) ATgetNext((ATermList) g_69);
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
    ATerm m_69 = NULL;
    ATerm q_69 = NULL;
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
          ATerm o_69 = NULL;
          ATerm p_69 = NULL;
          p_69 = t;
          if(((o_69 != NULL) && (o_69 != p_69)))
            _fail(p_69);
          else
            o_69 = p_69;
          t = (ATerm) ATinsert(ATempty, not_null(o_69));
        }
      }
    {
      q_69 = t;
      if(((m_69 != NULL) && (m_69 != q_69)))
        _fail(q_69);
      else
        m_69 = q_69;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(m_69));
      t = printnl_0(t);
    }
  }
  t = b_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm t_69 (ATerm t)
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
        t = Cons_2(t, u_79, t_69);
      }
    return(t);
  }
  t = t_69(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
  c_70 = t;
  z_69 :
  if(((ATgetType(c_70) == AT_LIST) && ((ATermList) c_70 != ATempty)))
    {
      a_70 = ATgetFirst((ATermList) c_70);
      b_70 = (ATerm) ATgetNext((ATermList) c_70);
      {
        ATerm h_70 = NULL;
        t = not_null(b_70);
        {
          ATerm g_12;
          g_12 = t;
          {
            ATerm i_70 = NULL,k_70 = NULL,m_70 = NULL;
            ATerm h_12;
            h_12 = t;
            {
              ATerm j_70 = NULL;
              t = g_0(t);
              {
                j_70 = t;
                if(((i_70 != NULL) && (i_70 != j_70)))
                  _fail(j_70);
                else
                  i_70 = j_70;
              }
            }
            t = h_12;
            {
              ATerm l_70 = NULL;
              t = not_null(a_70);
              {
                t = f_0(t);
                {
                  l_70 = t;
                  if(((k_70 != NULL) && (k_70 != l_70)))
                    _fail(l_70);
                  else
                    k_70 = l_70;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_70)), not_null(k_70));
                {
                  m_70 = t;
                  if(((h_70 != NULL) && (h_70 != m_70)))
                    _fail(m_70);
                  else
                    h_70 = m_70;
                }
              }
            }
          }
          t = g_12;
          {
            ATerm z_2 (ATerm t)
            {
              t = not_null(h_70);
              return(t);
            }
            t = reverse_acc_2(t, f_0, z_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) c_70 == ATempty))
        {
          {
            t = term_o_10;
            t = g_0(t);
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
  ATerm a_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_50 (ATerm))
{
  ATerm x_70 = NULL,y_70 = NULL;
  x_70 = t;
  w_70 :
  if(match_cons(x_70, sym_Program_1))
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
            ATerm f_71 = NULL;
            t = w_50(t);
            {
              d_71 = t;
              {
                ATerm g_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_71)), not_null(b_71));
                {
                  g_71 = t;
                  if(((f_71 != NULL) && (f_71 != g_71)))
                    _fail(g_71);
                  else
                    f_71 = g_71;
                }
                t = not_null(f_71);
              }
            }
          }
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
  ATerm p_71 = NULL;
  ATerm i_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_71 = NULL;
      t = term_o_11;
      {
        t = get_config_0(t);
        {
          q_71 = t;
          if(((p_71 != NULL) && (p_71 != q_71)))
            _fail(q_71);
          else
            p_71 = q_71;
        }
      }
      LocalPopChoice(k_12);
    }
  else
    {
      t = i_12;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm c_3 (ATerm t)
          {
            ATerm r_71 = NULL;
            r_71 = t;
            if(((p_71 != NULL) && (p_71 != r_71)))
              _fail(r_71);
            else
              p_71 = r_71;
            return(t);
          }
          t = Program_1(t, c_3);
          return(t);
        }
        t = option_defined_1(t, b_3);
      }
    }
  {
    ATerm d_3 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        t = not_null(p_71);
        return(t);
      }
      t = short_description_1(t, e_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, d_3);
    {
      t = term_m_12;
      {
        t = echo_0(t);
        {
          t = term_p_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm s_71 = NULL;
                  ATerm t_71 = NULL;
                  t_71 = t;
                  if(((s_71 != NULL) && (s_71 != t_71)))
                    _fail(t_71);
                  else
                    s_71 = t_71;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_71)), term_q_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_3);
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm u_71 = NULL;
                    ATerm v_71 = NULL;
                    ATerm h_3 (ATerm t)
                    {
                      t = not_null(p_71);
                      return(t);
                    }
                    t = long_description_1(t, h_3);
                    {
                      v_71 = t;
                      if(((u_71 != NULL) && (u_71 != v_71)))
                        _fail(v_71);
                      else
                        u_71 = v_71;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_71)), term_r_12);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_3);
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
  ATerm s_12;
  s_12 = t;
  {
    ATerm b_72 = NULL;
    ATerm c_72 = NULL;
    c_72 = t;
    if(((b_72 != NULL) && (b_72 != c_72)))
      _fail(c_72);
    else
      b_72 = c_72;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, not_null(b_72)));
      t = printnl_0(t);
    }
  }
  t = s_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm t_12;
  t_12 = t;
  {
    t = e_70(t);
    t = debug_0(t);
  }
  t = t_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_50 (ATerm))
{
  ATerm j_72 = NULL,k_72 = NULL;
  j_72 = t;
  i_72 :
  if(match_cons(j_72, sym_Undefined_1))
    {
      k_72 = ATgetArgument(j_72, 0);
      {
        ATerm n_72 = NULL,p_72 = NULL;
        ATerm o_72 = NULL;
        t = SSLgetAnnotations(not_null(j_72));
        {
          o_72 = t;
          if(((n_72 != NULL) && (n_72 != o_72)))
            _fail(o_72);
          else
            n_72 = o_72;
        }
        {
          t = not_null(k_72);
          {
            ATerm r_72 = NULL;
            t = x_50(t);
            {
              p_72 = t;
              {
                ATerm u_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_72)), not_null(n_72));
                {
                  u_72 = t;
                  if(((r_72 != NULL) && (r_72 != u_72)))
                    _fail(u_72);
                  else
                    r_72 = u_72;
                }
                t = not_null(r_72);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm z_72 (ATerm t)
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_80, _id);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = Cons_2(t, _id, z_72);
      }
    return(t);
  }
  t = z_72(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_66 (ATerm))
{
  t = fetch_1(t, q_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_73 = NULL;
  e_73 = t;
  d_73 :
  if(match_cons(e_73, sym_Help_0))
    {
      ATerm g_73 = NULL,i_73 = NULL;
      ATerm x_12;
      x_12 = t;
      {
        ATerm h_73 = NULL;
        t = SSLgetAnnotations(not_null(e_73));
        {
          h_73 = t;
          if(((g_73 != NULL) && (g_73 != h_73)))
            _fail(h_73);
          else
            g_73 = h_73;
        }
      }
      t = x_12;
      {
        ATerm j_73 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_73));
        {
          j_73 = t;
          if(((i_73 != NULL) && (i_73 != j_73)))
            _fail(j_73);
          else
            i_73 = j_73;
        }
        t = not_null(i_73);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_88 (ATerm))
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_88(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  p_73 = t;
  o_73 :
  if(match_cons(p_73, sym__2))
    {
      q_73 = ATgetArgument(p_73, 0);
      r_73 = ATgetArgument(p_73, 1);
      t = SSL_table_get(not_null(q_73), not_null(r_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
  y_73 = t;
  x_73 :
  if(match_cons(y_73, sym__3))
    {
      z_73 = ATgetArgument(y_73, 0);
      a_74 = ATgetArgument(y_73, 1);
      b_74 = ATgetArgument(y_73, 2);
      {
        ATerm a_13;
        a_13 = t;
        {
          ATerm h_74 = NULL;
          ATerm i_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_73), not_null(a_74));
          {
            ATerm b_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_13);
              }
            else
              {
                t = b_13;
                t = (ATerm) ATempty;
              }
            {
              i_74 = t;
              if(((h_74 != NULL) && (h_74 != i_74)))
                _fail(i_74);
              else
                h_74 = i_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_73), not_null(a_74), (ATerm) ATinsert(CheckATermList(not_null(h_74)), not_null(b_74)));
            t = table_put_0(t);
          }
        }
        t = a_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm m_74 = NULL;
  ATerm n_74 = NULL;
  t = term_o_10;
  {
    t = q_65(t);
    {
      n_74 = t;
      if(((m_74 != NULL) && (m_74 != n_74)))
        _fail(n_74);
      else
        m_74 = n_74;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_12, term_o_12, not_null(m_74));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL;
  t_74 = t;
  s_74 :
  if(match_string(t_74, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(t_74) == AT_LIST) && ((ATermList) t_74 != ATempty)))
        {
          u_74 = ATgetFirst((ATermList) t_74);
          v_74 = (ATerm) ATgetNext((ATermList) t_74);
          {
            ATerm y_74 = NULL;
            ATerm i_13;
            i_13 = t;
            {
              t = not_null(u_74);
              t = a_0(t);
            }
            t = i_13;
            {
              ATerm z_74 = NULL;
              t = term_o_10;
              {
                t = b_0(t);
                {
                  z_74 = t;
                  if(((y_74 != NULL) && (y_74 != z_74)))
                    _fail(z_74);
                  else
                    y_74 = z_74;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_74)), not_null(y_74));
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
  ATerm i_3 (ATerm t)
  {
    ATerm e_75 = NULL;
    e_75 = t;
    d_75 :
    if(!(match_string(e_75, "--help")))
      {
        if(!(match_string(e_75, "-h")))
          {
            if(!(match_string(e_75, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_k_13;
    {
      t = set_config_0(t);
      t = term_l_13;
    }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  t = Option_3(t, i_3, j_3, k_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  h_75 = t;
  g_75 :
  if(((ATgetType(h_75) == AT_LIST) && ((ATermList) h_75 != ATempty)))
    {
      i_75 = ATgetFirst((ATermList) h_75);
      j_75 = (ATerm) ATgetNext((ATermList) h_75);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_75)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_75)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
  t_75 = t;
  s_75 :
  if(((ATgetType(t_75) == AT_LIST) && ((ATermList) t_75 != ATempty)))
    {
      u_75 = ATgetFirst((ATermList) t_75);
      v_75 = (ATerm) ATgetNext((ATermList) t_75);
      {
        ATerm b_76 = NULL,d_76 = NULL;
        ATerm c_76 = NULL;
        t = SSLgetAnnotations(not_null(t_75));
        {
          c_76 = t;
          if(((b_76 != NULL) && (b_76 != c_76)))
            _fail(c_76);
          else
            b_76 = c_76;
        }
        {
          t = not_null(u_75);
          {
            ATerm f_76 = NULL;
            t = k_61(t);
            {
              d_76 = t;
              {
                t = not_null(v_75);
                {
                  ATerm h_76 = NULL;
                  t = l_61(t);
                  {
                    f_76 = t;
                    {
                      ATerm i_76 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_76)), not_null(d_76)), not_null(b_76));
                      {
                        i_76 = t;
                        if(((h_76 != NULL) && (h_76 != i_76)))
                          _fail(i_76);
                        else
                          h_76 = i_76;
                      }
                      t = not_null(h_76);
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
  ATerm s_76 = NULL;
  s_76 = t;
  r_76 :
  if(((ATermList) s_76 == ATempty))
    {
      {
        ATerm u_76 = NULL,w_76 = NULL;
        ATerm n_13;
        n_13 = t;
        {
          ATerm v_76 = NULL;
          t = SSLgetAnnotations(not_null(s_76));
          {
            v_76 = t;
            if(((u_76 != NULL) && (u_76 != v_76)))
              _fail(v_76);
            else
              u_76 = v_76;
          }
        }
        t = n_13;
        {
          ATerm x_76 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_76));
          {
            x_76 = t;
            if(((w_76 != NULL) && (w_76 != x_76)))
              _fail(x_76);
            else
              w_76 = x_76;
          }
          t = not_null(w_76);
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
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
  d_77 = t;
  c_77 :
  if(match_cons(d_77, sym__2))
    {
      e_77 = ATgetArgument(d_77, 0);
      f_77 = ATgetArgument(d_77, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_8, not_null(e_77), not_null(f_77));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm o_13;
  o_13 = t;
  {
    ATerm l_3 (ATerm t)
    {
      t = term_p_13;
      t = o_65(t);
      return(t);
    }
    t = try_1(t, l_3);
  }
  t = o_13;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm n_77 = NULL;
      ATerm q_13;
      q_13 = t;
      {
        ATerm l_77 = NULL;
        ATerm m_77 = NULL;
        m_77 = t;
        if(((l_77 != NULL) && (l_77 != m_77)))
          _fail(m_77);
        else
          l_77 = m_77;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(l_77));
          t = set_config_0(t);
        }
      }
      t = q_13;
      {
        ATerm o_77 = NULL;
        o_77 = t;
        if(((n_77 != NULL) && (n_77 != o_77)))
          _fail(o_77);
        else
          n_77 = o_77;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_77));
      }
      return(t);
    }
    ATerm n_3 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_13);
            }
          else
            {
              t = t_13;
              {
                t = o_65(t);
                t = Cons_2(t, _id, n_3);
              }
            }
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_3, n_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
    x_77 = t;
    t_77 :
    if(match_cons(x_77, sym__3))
      {
        y_77 = ATgetArgument(x_77, 0);
        z_77 = ATgetArgument(x_77, 1);
        a_78 = ATgetArgument(x_77, 2);
        {
          if(((u_77 != NULL) && (u_77 != y_77)))
            _fail(y_77);
          else
            u_77 = y_77;
          {
            if(((v_77 != NULL) && (v_77 != z_77)))
              _fail(z_77);
            else
              v_77 = z_77;
            {
              if(((w_77 != NULL) && (w_77 != a_78)))
                _fail(a_78);
              else
                w_77 = a_78;
              t = SSL_table_put(not_null(u_77), not_null(v_77), not_null(w_77));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm d_78 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    t = term_f_14;
    t = table_put_0(t);
  }
  t = c_14;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm g_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_65(t);
          LocalPopChoice(h_14);
        }
      else
        {
          t = g_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_3);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14;
            k_14 = t;
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_j_13;
                  t = get_config_0(t);
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_14;
            {
              t = system_usage_0(t);
              {
                t = term_v_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm r_3 (ATerm t)
                {
                  ATerm e_78 = NULL;
                  e_78 = t;
                  if(((d_78 != NULL) && (d_78 != e_78)))
                    _fail(e_78);
                  else
                    d_78 = e_78;
                  return(t);
                }
                t = Undefined_1(t, r_3);
                return(t);
              }
              t = option_defined_1(t, q_3);
              {
                ATerm s_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_78)), term_q_14);
                  return(t);
                }
                t = say_1(t, s_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_3);
      {
        ATerm r_14;
        r_14 = t;
        {
          t = term_n_12;
          t = table_destroy_0(t);
        }
        t = r_14;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  t = parse_options_1(t, i_68);
  {
    t = store_options_0(t);
    {
      t = k_68(t);
      {
        ATerm v_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_68);
            LocalPopChoice(y_14);
          }
        else
          {
            t = v_14;
            {
              ATerm z_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_68(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_15);
                }
              else
                {
                  t = z_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_68 (ATerm), ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm c_69 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_69(t);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_68);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_3, b_69, c_69, u_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm v_68 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm d_15;
      d_15 = t;
      {
        ATerm h_78 = NULL;
        ATerm i_78 = NULL;
        t = term_o_11;
        {
          t = get_config_0(t);
          {
            i_78 = t;
            if(((h_78 != NULL) && (h_78 != i_78)))
              _fail(i_78);
            else
              h_78 = i_78;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, not_null(h_78)));
          t = printnl_0(t);
        }
      }
      t = d_15;
      return(t);
    }
    t = if_verbose2_1(t, w_3);
    return(t);
  }
  t = iowrap_4(t, t_68, u_68, v_68, v_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  t = iowrap_3(t, r_68, s_68, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    t = _2(t, _id, o_68);
    return(t);
  }
  t = iowrap_2(t, x_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
